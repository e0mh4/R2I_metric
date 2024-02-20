import json
import os
import sys
os.chdir(sys.path[0])

dirname = 'info'
for filename in os.listdir(dirname):
    with open(f'{dirname}/{filename}', 'r+', encoding='UTF-8') as f:
        data = json.load(f)
        if 'decompileResult' in data.keys():
            data['funcInfo'] = data.pop('decompileResult')['funcInfo']
        funcs = data['funcInfo']

        for func in funcs[:]:
            if func['funcName'].endswith('init'):
                funcs.remove(func)
            elif func['funcName'].endswith('fini'):
                funcs.remove(func)
        
        for func in funcs:
            func['funcStartAddr'] = "0x" + func['funcStartAddr']
            func['funcEndAddr'] = "0x" + func['funcEndAddr']
            if func['funcName'].startswith('sym.'):
                if func['funcName'][4] == '_':
                    func['funcName'] = func['funcName'][5:]
                else:
                    func['funcName'] = func['funcName'][4:]
            elif '.' in func['funcName']:
                func['funcName'] = func['funcName'].replace('.', '_')
        
        with open(f'json/{filename}', 'w', encoding='UTF-8') as j:
            json.dump(data, j, indent=4)