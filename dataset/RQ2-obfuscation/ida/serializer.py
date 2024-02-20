import json
import os
import sys
os.chdir(sys.path[0])

crtlib = ['start', 'init', 'fini', '_start', 'deregister_tm_clones', 'register_tm_clones',
  '__do_global_dtors_aux', 'frame_dummy', '__libc_csu_init', '__libc_csu_fini',
  '_fini', '_init', '__gmon_start__']

dirname = 'info'
for filename in os.listdir(dirname):
    with open(f'{dirname}/{filename}', 'r+', encoding='UTF-8') as f:
        data = json.load(f)
        funcs = data['funcInfo']
        for func in funcs[:]:
            if func['funcName'] in crtlib:
                funcs.remove(func)

        with open(f'json/{filename}', 'w', encoding='UTF-8') as j:
            json.dump(data, j, indent=4)