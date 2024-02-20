# ghidra_parser_correction.py
# usage : python3 ghidra_parser_correction.py /path/to/decompiled/code
import sys
import subprocess
import re
header = """#include <stdint.h>
#include <stdbool.h>
#include "decompile_ghidra.h"
"""

replace_dict = { "undefined  [16]": "undefined", "undefined (*) [16]":"undefined", "undefined (**) [16]": "undefined",
"undefined8": "undefined", "undefined7":"undefined", "undefined6":"undefined", "undefined5":"undefined", "undefined4":"undefined", "undefined3":"undefined", "undefined2": "undefined", "undefined1": "undefined",
"uint7": "uint", "uint6": "uint", "uint5": "uint", "uint3": "uint", "int6": "int", "int3": "int",
"unkuint10": "unkuint", "unkuint9": "unkuint", "unkuint7": "unkuint",
"float10": "float", "switchD_005c4b65::switchdataD_00714868": "switchD_005c4b65", "::":"_"}

if __name__ == "__main__":
    case_check = 0
    joined_la_check = 0
    la_check = 0
    edited = []
    if len(sys.argv) != 2:
        print("[*] Usage : python3 ghidra_parser_correction.py /path/to/file")
        sys.exit()

    filename = sys.argv[1]
    with open(filename, "r") as f:
        lines = f.readlines()
        for line in lines:
            new_line = line
            for k, v in replace_dict.items():
                new_line = new_line.replace(k, v)
            if re.search('sigaction\(',line):
                new_line = new_line.replace('sigaction(','sigaction_(')

            if case_check:
                if re.search(r'^\s+\}\s+',line):
                    edited[len(edited)-1] = re.sub("case .*?:","INVALID_CASE;",edited[len(edited)-1])
                case_check = 0
            elif re.search("case .*?:", line):
                case_check = 1

            if joined_la_check:
                if re.search(r'^\s+\}',line):
                    edited[len(edited)-1] = re.sub("joined_.*?:","INVALID_CASE;",edited[len(edited)-1])
                joined_la_check = 0
            elif re.search("joined_.*?:",line):
                joined_la_check = 1
            
            if la_check:
                if re.search(r'^\s+\}',line):
                    edited[len(edited)-1] = re.sub("LAB_.*?:","INVALID_CASE;",edited[len(edited)-1])
                la_check = 0
            elif re.search("LAB_.*?:",line):
                la_check = 1

            edited.append(new_line)

    with open(filename[:-2]+"_replaced.c", "w") as f:

        f.writelines(header)
        f.writelines(edited)