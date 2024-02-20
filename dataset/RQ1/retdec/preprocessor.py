import sys
import re
import os

#using : python3 retdec_correct_violations.py path/to/decompiled/code/in/text/section(_ext.c)
#output : (file_name)_replaced.c

header = '''#include "decompile_retdec.h"
'''

if __name__ == "__main__":
	if len(sys.argv) != 2:
		print("[*] Usage : python3 preprocessor.py /path/to/file")
		sys.exit()
	
	filename = sys.argv[1]
	corrected = [header]

	target_name = os.path.join("c", filename)
	with open(target_name, "r") as f:
		lines = f.readlines()
		for index, line in enumerate(lines):
                        # Correct invalid jmp functions with too specific information
                        if re.search("jmp\(\s*\{", line):
                            e = i + 1
                            while e < len(lines) and not re.search("\}\); \/\/ 0x\w+", lines[e]):
                                e += 1
                            line = re.sub("jmp\(\s*\{", "jmp(INVALID_FORM); /*", line)
                            lines[e] = "*/\n"

                        elif re.search(r'entry_point\(int64_t a1', line):
                            i = index + 1
                            while i < len(lines):
                                eob = lines[i].startswith('}')
                                lines[i] = ''
                                if eob:
                                    break
                                i += 1
                                line = ''
                        
                        # Correct invalid function calls with array arguments
                        line = re.sub(", \{.*\}\)", ", INVALID_FORM)", line)

                        corrected.append(line)

	target_name = os.path.join("pp", filename)
	with open(target_name, "w") as f:
		f.writelines(corrected)
