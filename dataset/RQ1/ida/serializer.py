import json
import os
import sys
os.chdir(sys.path[0])

dirname = 'info'
for filename in os.listdir(dirname):
    with open(f'{dirname}/{filename}', 'r', encoding='UTF-8') as f:
        data = json.load(f)
        funcs = data['funcInfo']
        for func in funcs[:]:
            if func['funcName'] in ['start', 'init', 'fini']:
                funcs.remove(func)

        for func in funcs:
            if func['funcName'].startswith('j_.'):
                func['funcName'] = 'thunk_' + func['funcStartAddr'][2:]
            elif func['funcName'] == 'nullsub_1':
                func['funcName'] = 'null_' + func['funcStartAddr'][2:]
            elif func['funcName'] == 'start_routine':
                func['funcName'] = 'pthread_' + func['funcStartAddr'][2:]
            elif func['funcName'] == 'compar':
                func['funcName'] = 'compar_' + func['funcStartAddr'][2:]
            elif func['funcName'].startswith('_obstack'):
                func['funcName'] = func['funcName'][1:]
            elif '.' in func['funcName']:
                func['funcName'] = func['funcName'].replace('.', '_')
        
        with open(f'json/{filename}', 'w', encoding='UTF-8') as j:
            json.dump(data, j, indent=4)
