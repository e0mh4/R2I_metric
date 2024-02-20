import sys
import os
import re

# escape_misuse = {
#     "cond:": "cond", "\\%": "%", "\"": "\\\"", "(\\\"": "(\"", "\\\")": "\")", "\\\",": "\",", ", \\\"": ", \"",
#     "*\\\"": "*\"", "= \\\"": "= \"", "\\\";": "\";", "\\\"[": "\"[", "::": "_", "\\": "", "\"\"\"": "\"\""
# }

# types = ['void', 'int', 'char', 'float', 'double', 'short', 'long', 'int8_t', 'uint8_t', 'int16_t', 'uint16_t', 'int32_t', 'uint32_t',  'int64_t', 'uint64_t',
#          'int128_t', 'uint128_t', 'int256_t', 'uint256_t', 'long long int', 'unsigned long long int', 'FILE', 'int512_t', 'uint512_t', 'size_t', 'ssize_t',
#          'int40_t', 'signed int', 'unsigned int', 'bool', 'struct', 'mbstate_t', 'time_t', 'pid_t', 'uid_t', 'off64_t'
#         ]

header = '''#include "decompile_ghidra_obfuscated.h"
'''
if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("[*] Usage : python3 preprocessor.py /path/to/file")
        sys.exit()
    filename = sys.argv[1]

    la_check = False
    # de_check = False
    edited = [header]

    target_name = os.path.join("c", filename)
    with open(target_name, "r") as f:
        lines = f.readlines()
        for index, line in enumerate(lines):
            if re.search("(LAB_|joined_r0x)[0-9a-f]+:", line):
                la_check = True
            elif la_check:
                la_check = False

                # Correct invalid labels
                if re.search(r'^\s*\}',line):
                    edited[len(edited)-1] = re.sub("(LAB_|joined_r0x)[0-9a-f]+:",
                                                   "INVALID_JUMP;", edited[len(edited)-1])
                    
            # Correct C++ like namespace usages
            elif re.search("\S*::\S*", line):
                line = line.replace("::", "__")

            # Correct function pointer arguments
            fperr = re.search("_func_void_int \*[\w]+(?=,)", line)
            if fperr:
                line = line[:fperr.start()] + "void (" + \
                    line[fperr.start()+len("_func_void_int "):fperr.end():] + \
                    ")(int)" + line[fperr.end():]
            fperr = re.search("__func \*[\w]+", line)
            if fperr:
                line = line[:fperr.start()] + "void (" + \
                    line[fperr.start()+len("__func "):fperr.end():] + \
                    ")(void)" + line[fperr.end():]
                
    #         # Delete linker-inserted functions
    #         if re.search("^[^\s\{\}\/L]", line):
    #             if re.search("start", line):
    #                 i = index + 1
    #                 while i < len(lines):
    #                     eob = lines[i].startswith('}')
    #                     lines[i] = ''
    #                     if eob:
    #                         break
    #                     i += 1
    #                 line = ''
            
    #         # Correct incorrectly-positioned "noreturn" keywords
    #         elif re.search("_{0,2}noreturn", line):
    #             line = "noreturn " + re.sub("_{0,2}noreturn", "", line)

            # Correct struct detection failures
            serr = list(re.finditer("(^\s|\()(?=slotvec \*\))", line))
            if len(serr) != 0:
                for err in reversed(serr):
                    line = line[:err.end()] + "struct " + line[err.end():]

            # Correct enum detection failures
            qerr = list(re.finditer("(^\s*|\(|,)(?=quoting_style [\w\*])", line))
            if len(qerr) != 0:
                for err in reversed(qerr):
                    line = line[:err.end()] + "enum " + line[err.end():]

    #         # Correct invalid fastcall keywords
    #         ptrerr = re.search("\s\*__fastcall", line)
    #         if ptrerr:
    #             line = line[:ptrerr.start()] + "* " + line[ptrerr.start()+2:]
            
            # Convert undefined? into undefined
            line = re.sub("undefined[1-9]", "undefined", line)

            edited.append(line)
    #     # print(edited)

    target_name = os.path.join("pp", filename)
    with open(target_name, 'w') as f:
        f.writelines(edited)
