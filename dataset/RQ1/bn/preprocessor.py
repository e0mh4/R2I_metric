import sys
import os
import re

escape_misuse = {
    "cond:": "cond", "\\%": "%", "\"": "\\\"", "(\\\"": "(\"", "\\\")": "\")", "\\\",": "\",", ", \\\"": ", \"",
    "*\\\"": "*\"", "= \\\"": "= \"", "\\\";": "\";", "\\\"[": "\"[", "::": "_", "\\": "", "\"\"\"": "\"\""
}

types = ['void', 'int', 'char', 'float', 'double', 'short', 'long', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t', 'int32_t', 'uint32_t',  'int64_t', 'uint64_t',
         'int128_t', 'uint128_t', 'int256_t', 'uint256_t', 'long long int', 'unsigned long long int', 'FILE', 'int512_t', 'uint512_t', 'size_t', 'ssize_t',
         'int40_t', 'signed int', 'unsigned int', 'bool', 'struct', 'mbstate_t', 'time_t', 'pid_t', 'uid_t', 'off64_t'
        ]

header = '''#include "decompile_bn.h"
'''
if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("[*] Usage : python3 preprocessor.py /path/to/file")
        sys.exit()
    filename = sys.argv[1]

    la_check = False
    de_check = False
    edited = [header]

    target_name = os.path.join("c", filename)
    with open(target_name, "r") as f:
        lines = f.readlines()
        for index, line in enumerate(lines):
            # Correct incorrectly-positioned "noreturn" keyword
            if re.search("_{0,2}noreturn", line):
                line = "noreturn " + re.sub("_{0,2}noreturn", "", line)

            # Correct conditions with unimplemented operations
            if re.search(r'/\*\sif.*?\*/', line):
                line = re.sub(r'/\*\sif.*?\*/', 'UNIMPLEMENTED_COND', line)
            # Correct assignments with unimplemented operations
            if re.search(r'/\*.*\*/(?=\)*;)', line):
                line = re.sub(r'/\*.*?\*/', 'unimplemented', line)
            
            if re.search("label_[0-9a-f]+:", line):
                la_check = True
            elif la_check:
                la_check = False

                # Correct invalid labels
                if re.search(r'\s*\}', line):
                    edited[len(edited)-1] = re.sub("label_[0-9a-f]+:",
                                                   "INVALID_JUMP;", edited[len(edited)-1])

                # Correct variable definitions right after label
                else:
                    declare = " ".join(re.findall("\w+", line))
                    if any(t in declare for t in types):
                        edited[len(edited)-1] = edited[len(edited)-1][:-1] + ";\n"

            if re.search("default:", line):
                de_check = True
            elif de_check:
                de_check = False

                # Correct variable definitions right after default case
                declare = " ".join(re.findall("\w+", line.split()[0]))
                if any(t in declare for t in types):
                    edited[len(edited)-1] = edited[len(edited)-1][:-1] + ";\n"

            # Insert missing parentheses in nested references
            rferr = re.search("&&\S", line)
            if rferr is not None:
                line = line[:rferr.start()] + "&(&" + line[rferr.start()+2:-2] + ");\n"

            # Correct escape errors
            for find, change in escape_misuse.items():
                line = line.replace(find, change)
            
            # Delete registers storing arguments before them
            line = re.sub("\s@\s\w+", "", line)

            # Correct floating point precision errors
            fperr = list(re.finditer("[\s\(]-?\d+f", line))
            if len(fperr) != 0:
                for err in reversed(fperr):
                    line = line[:err.end()-1] + ".0" + line[err.end()-1:]
            
            # Correct failed attempts to escape double quotes
            eferr = re.search(r'((?<=[=,]\s)|(?<=\())"[^"]*((?<!\\)"(?!,))*[^"]*((?<!\\)"(?!,))[^"]*((?<!\\)"(?!,))*[^"]*"(?=(,|\);|;))', line)
            if eferr is not None:
                li = eferr.start() + 1
                ri = eferr.end() - 1
                sub = line[li:ri].replace(r'"', r'\"')
                line = line[:li] + sub + line[ri:]
            
            # Delete "_start" function
            if re.search(r'(int64_t|void)\s(_start|init|fini)\(', line):
                i = index + 1
                while i < len(lines):
                    eob = lines[i].startswith('}')
                    lines[i] = ''
                    if eob:
                        break
                    i += 1
                line = ''

            # Correct misuse of error_t
            if re.search("error_t", line):
                sep = line.find(")") + 1
                line = line[:sep] + "; //" + line[sep:]
            
            edited.append(line)

    target_name = os.path.join("pp", filename)
    with open(target_name, 'w') as f:
        f.writelines(edited)
