import sys
import re
import os

if __name__ == "__main__":
	if len(sys.argv) != 2:
		print("[*] Usage : python3 preprocessor.py /path/to/file")
		sys.exit()
	
	filename = sys.argv[1]
	corrected = []

	target_name = os.path.join("mc", filename)
	with open(target_name, "r") as f:
		lines = f.readlines()
		for index, line in enumerate(lines):
			# Delete crashed functions
			if re.search(r'(crash|^\{)', line):
				if lines[index+1].startswith('}'):
					line = lines[index+1] = ''
					if (re.search(r'sub_[a-z\d]+\(', corrected[-1])):
						corrected[-1] = '// ' + corrected[-1]
			
			# Fix wrongly-preprocessed items
			line = re.sub('\/\*INVALID_IR\*\/[^\)]*(?=\))', 'INVALID_IR', line)

			corrected.append(line)

	target_name = os.path.join("pp", filename)
	with open(target_name, "w") as f:
		f.writelines(corrected)
