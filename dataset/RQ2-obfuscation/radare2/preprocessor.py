import sys
import os
import re

no_count_metric={ "..":".", " signed int":" int", "(signed int":"(int" }

types = ['void', 'int', 'char', 'float', 'double', 'short', 'long', 'int8_t', 'uint8_t','int16_t', 'uint16_t', 'int32_t', 'uint32_t',  'int64_t','uint64_t',
        'int128_t', 'uint128_t', 'int256_t', 'uint256_t', 'long long int', 'unsigned longlong int', 'FILE', 'int512_t', 'uint512_t', 'size_t', 'ssize_t', 'int40_t', 'signed int', 'unsigned int', 'bool'
]

header = '''#include "decompile_radare2_obfuscated.h"
'''

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("[*] Usage : python3 preprocessor.py /path/to/file")
        sys.exit()
        
    filename = sys.argv[1]

    la_check = 0
    edited = [header]

    target_name = os.path.join("c", filename)
    with open(target_name, "r") as f:
        lines = f.readlines()
        for (index, line) in enumerate(lines):
            # Delete "rotate.*" functions
            if re.search("^\S.*rotate.*", line):
                i = index + 1
                while i < len(lines):
                    eob = lines[i].startswith('}')
                    lines[i] = ''
                    if eob:
                        break
                    i += 1
                line = ''

            # Correct minor errors
            for find, change in no_count_metric.items():
                line = line.replace(find,change)
            
            if re.search("label_[0-9a-f]+:", line):
                la_check = True
            elif la_check:
                la_check = False

                # Correct invalid labels
                if re.search(r'^\s*}',line):
                    edited[len(edited)-1] = re.sub("label_[0-9a-f]+:",
                                                   "INVALID_JUMP;", edited[len(edited)-1])

            # Correct mul/div result storing expressions
            if re.search("(rdx:rax)|(edx:eax)", line):
                line = line.replace(":", "_")

            # Correct misuse of . and : in identifiers
            if re.search("str\.",line) or re.search(r'[A-Za-z_]+\.\d+', line):
                line = re.sub("(?<!\s)[\.:](?!\s)", "_", line)

            # Correct invalid function calls using addresses
            if re.search("\)\([\s\S,()*+]*\)\s\([\s\S,()*+]*\);", line):
                line = "invalid_funccall(); //" + line
            
            # Correct untracked variables denoted by ?
            qmerr = re.search("\(\s*\?\s*[!<>=]+\s*\?\)", line)
            if qmerr is not None:
                line = line.replace("?", "unknown", 2)
            if re.search("^\s*\?\s\=\s", line):
                line = line.replace("? =", "unknown =")
            if re.search("\[\?\]", line):
                line = line.replace("?","unknown")

            # Correct overflowed operators 
            if re.search("(if|while).*overflow", line):
                ri = line.rfind(")")
                line = line[:ri].replace("(", "(UNKNOWN_OP /*", 1) + "*/" + line[ri:]

            # Correct double quote mismatches
            dqerr = re.search(r'[^\\]\\"(,|\)*;$)', line)
            if dqerr is not None:
                line = line[:dqerr.start()+1] + r'\""' + line[dqerr.start()+3:-1]
            elif re.search(r'".*[`\'][^"]*(,|\);|;)([^"]*$|(\s*".*?".*?)*$)', line):
                i = line.rfind("'") + 1
                line = line[:i] + r'"' + line[i:]
            elif re.search(r'^[^"]*\'.*"', line):
                line = line.replace("'", "\"'", 1)
            elif re.search(r'^[^"]*\'.*\'[^"]*$', line):
                li = line.find("'")
                ri = line.rfind("'") + 1
                line = line[:li] + r'"' + line[li:ri] + r'"' + line[ri:]

            # Correct broken do-while loop
            do = re.search("do\s*\{", line)
            if do is not None:
                s = None
                e = index + 1
                while e < len(lines) and not re.search("while", lines[e]):
                    if s is None and re.search(r'^%s\}' % line[:do.start()], lines[e]):
                        s = e
                    e += 1
                if s is not None:
                    wp = re.search("\s*while", lines[e]).start()
                    lines[s] = lines[s][:-1] + lines[e][wp:-1] + " BROKEN_DOWHILE;\n"
                    lines[e] = lines[e][:wp] + "\n"

            # Correct invalid operations on the left hand
            if re.search("^[^\*=]*[+-].*\s+=\s+", line):
                lfterr = re.search("[^\s]+\s+[+-]*\s+\w+", line)
                line = line[:lfterr.start()] + "*(" + line[lfterr.start():lfterr.end()] + ")" + line[lfterr.end():]
            
            """No strip unique preprocessings ↓"""

            # Correct broken if-else
            else_indent = re.search("\s*(?=\} else\s*\{)", line)
            if else_indent is not None:
                i = index + 1
                while i < len(lines) and not re.search(f"^\s{{{else_indent.end()}}}\}}", lines[i]):
                    i += 1
                if "else" in lines[i]:
                    line = line.replace("else", "else if (BROKEN_DOWHILE)")

            # Correct mispositioned array indices
            idxerr = re.search("(?:(?<=const)|(?<=const \*))\[\d+\]\s\w+", line)
            if idxerr is not None:
                s = idxerr.start()
                e = idxerr.end()
                i = line.find("]") + 1
                line = line[:s] + line[i:e] + line[s:i] + line[e:]

            # Correct struct detection failures
            serr = list(re.finditer("(^\s|\(|,\s)(?=slotvec( \*)?)", line))
            if len(serr) != 0:
                for err in reversed(serr):
                    line = line[:err.end()] + "struct " + line[err.end():]

            # Correct enum detection failures
            qerr = list(re.finditer("(^\s*|\(|,\s)(?=quoting_style [\w\*])", line))
            if len(qerr) != 0:
                for err in reversed(qerr):
                    line = line[:err.end()] + "enum " + line[err.end():]

            # Correct invalid void function
            line = re.sub("void\s*\*\)", "void * unknown", line)
            
            # Correct invalid function parameters
            line = re.sub("void \(\*\)\(\) usage_func", "void (*usage_func)()", line)

            line = re.sub(".comment", "comment", line)
            
            edited.append(line)

    target_name = os.path.join("pp", filename)
    with open(target_name, "w") as f:
        f.writelines(edited)
