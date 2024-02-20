import json
import os
import sys
os.chdir(sys.path[0])

dirname = 'info'
for filename in os.listdir(dirname):
    with open(f'{dirname}/{filename}', 'r', encoding='UTF-8') as f:
        data = json.load(f)
        funcs = data['funcInfo']

        for func in funcs:
            if func['funcName'] == 'start_routine':
                func['funcName'] = 'pthread_' + func['funcStartAddr'][2:]
            elif func['funcName'].startswith('j_'):
                func['funcName'] = 'thunk_' + func['funcStartAddr'][2:]
            elif func['funcName'].startswith('_obstack'):
                func['funcName'] = func['funcName'][1:]
            
        with open(f'json/{filename}', 'w', encoding='UTF-8') as j:
            json.dump(data, j, indent=4)