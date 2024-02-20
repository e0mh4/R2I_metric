# idapro_parser_correction.py
# usage : python3 idapro_parser_correction.py /path/to/decompiled/code
import sys
import subprocess
import re

header = """
#include "decompile_idapro.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
"""


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("[*] Usage : python3 idapro_parser_correction.py /path/to/file")
        sys.exit()

    filename = sys.argv[1]
    with open(filename, "r") as f:
        lines = f.readlines()

    with open(filename[:-2]+"_replaced.c", "w") as f:
        f.write(header)
        for line in lines:
            new_line = line
            if re.search("::", line):
                new_line = re.sub("::", "", new_line)
                new_line += "INVALID_COLON;\n"
            if re.search('\(_obstack_chunk', line):
                new_line = re.sub('\(_obstack_chunk', '(struct _obstack_chunk', new_line)
            if re.search('__asm {.*}', line):
                new_line = re.sub('{', '("', new_line)
                new_line = re.sub('}', '");', new_line)
            f.write(new_line)
        v15 = (unsigned __int8 *)::ptr;
        f.close()