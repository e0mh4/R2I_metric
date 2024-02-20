# idapro_parser_correction.py
# usage : python3 idapro_parser_correction.py /path/to/decompiled/code
import sys
import subprocess
import re
import os

header = """#include "decompile_idapro_ver.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#define __attribute__(x)
#define __asm__(x)
"""


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("[*] Usage : python3 idapro_parser_correction.py /path/to/file")
        sys.exit()

    filename = sys.argv[1]
    target_name = os.path.join("c",filename)
    with open(target_name, "r",encoding="utf-8",errors="replace") as f:
        lines = f.readlines()

    asm_check = False
    brace_check = False
    asm_append = "__asm (\"\");\n"
    with open("./syntax_correction/"+filename, "w") as f:
        f.write(header)
        for line in lines:
            new_line = line
            if re.search("::", line):
                if re.search(r'".*::.*"', line):
                    new_line = line
                elif re.search("::ptr", line):
                    new_line = re.sub("::ptr", "ptr/*INVALID_COLON*/", new_line)
                elif re.search("ptr/*INVALID_COLON*/", line):
                    new_line = re.sub("ptr/*INVALID_COLON*/", "unknown", new_line)
                else:
                    new_line = re.sub("::", "", new_line)
                    new_line += "INVALID_COLON;\n"
            if re.search(r"@<\w+>",line):
                new_line = re.sub(r"@<\w+>", "", new_line)
            if re.search("_{0,2}noreturn", line):
                new_line = "noreturn " + re.sub("_{0,2}noreturn", "", new_line)
            if re.search('__asm {.*}', line):
                new_line = re.sub('{', '("', new_line)
                new_line = re.sub('}', '");', new_line)
            if re.search('__asm\n', line):
                asm_check = True
                new_line = re.sub("__asm", "__asm__", new_line)
                f.write(asm_append)
            if asm_check:
                if re.search('}\n',line):
                    new_line = re.sub('}', ')', new_line)
                    brace_check = False
                    asm_check = False
                if brace_check :
                    s = re.match(r'^\s*(\S.*)', new_line)
                    t = new_line.find(s.group(1))
                    new_line = new_line[:t] + "\"" + s.group(1) + "\"\n"
                if re.search('{\n', line):
                    new_line = re.sub('{', '(', new_line)
                    brace_check = True
            if re.search(r'[^\d\s.]+\.\d+',line):
                new_line = re.sub('(?<=[^\d\s])\.\d+','', new_line)
            f.write(new_line)
        f.close()
