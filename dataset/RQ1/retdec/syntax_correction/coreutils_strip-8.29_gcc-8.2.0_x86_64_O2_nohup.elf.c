#include "decompile_retdec.h"
// Address range: 0x401750 - 0x401755
int64_t function_401750(void) {
    // 0x401750
    abort();
    // UNREACHABLE
}
// Address range: 0x401755 - 0x40175a
int64_t function_401755(void) {
    // 0x401755
    abort();
    // UNREACHABLE
}
// Address range: 0x40175a - 0x40175f
int64_t function_40175a(void) {
    // 0x40175a
    abort();
    // UNREACHABLE
}
// Address range: 0x40175f - 0x401764
int64_t function_40175f(void) {
    // 0x40175f
    abort();
    // UNREACHABLE
}
// Address range: 0x401764 - 0x401769
int64_t function_401764(void) {
    // 0x401764
    abort();
    // UNREACHABLE
}
// Address range: 0x401769 - 0x40176e
int64_t function_401769(void) {
    // 0x401769
    abort();
    // UNREACHABLE
}
// Address range: 0x401770 - 0x401d83
int64_t function_401770(int64_t a1, int64_t a2) {
    char * exec_argv[1]; // 0x40196c
    uint64_t v1 = a1 & 0xffffffff; // 0x401778
    function_4024f0(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t result = getenv("POSIXLY_CORRECT") == NULL ? 125 : 127; // 0x4017cc
    int32_t status = result; // 0x4017cf
    g20 = status;
    int64_t v2; // 0x401770
    function_406140(0x4021d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_4023e0(v1, a2, "nohup", "GNU coreutils", (int64_t)g19, 0x401e70);
    if ((int32_t)function_4057f0(v1, a2, &g2, &g3, 0, 0x401e70) != -1) {
        // 0x401d3a
        function_401e70(result);
        // UNREACHABLE
    }
    // 0x401828
    if (v1 <= (int64_t)*(int32_t *)0x60925c) {
        // 0x401d1b
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401d3a
        function_401e70(result);
        // UNREACHABLE
    }
    uint32_t v3 = isatty(0); // 0x401837
    int32_t v4 = isatty(1); // 0x401844
    int32_t v5; // 0x401770
    int64_t v6; // 0x401770
    int64_t v7; // 0x401770
    int64_t v8; // 0x401770
    int64_t v9; // 0x401770
    char v10; // 0x401770
    char v11; // 0x401770
    if (v4 == 0) {
        // 0x4019ab
        if (*__errno_location() != 9) {
            goto lab_0x401854;
        } else {
            int32_t v12 = isatty(2); // 0x4019c4
            int64_t v13 = (int64_t)(v12 != 0) | 0x401e00; // 0x4019d3
            v10 = 1;
            v8 = v13;
            v5 = v12;
            v6 = 1;
            v11 = 1;
            v9 = v13;
            v7 = 1;
            if (v3 == 0) {
                goto lab_0x401aa7;
            } else {
                goto lab_0x401a6f;
            }
        }
    } else {
        goto lab_0x401854;
    }
  lab_0x401854:;
    int32_t v14 = isatty(2); // 0x401859
    int64_t v15 = (int64_t)(v14 != 0) | 0x401e00; // 0x401863
    v10 = 0;
    v8 = v15;
    v5 = v14;
    v6 = 0;
    char v16; // 0x401770
    int64_t v17; // 0x401770
    if (v3 != 0) {
        goto lab_0x401a6f;
    } else {
        // 0x401870
        if (v4 == 0) {
            // 0x401870
            v16 = v14 != 0;
            v17 = v3;
            goto lab_0x4019e8;
        } else {
            goto lab_0x40187c;
        }
    }
  lab_0x401a6f:
    // 0x401a6f
    if ((int32_t)function_402270(0, "/dev/null", 1, 0) < 0) {
        // 0x401c79
        error(status, *__errno_location(), dcgettext(NULL, "failed to render standard input unusable", 5));
    }
    char fd4; // 0x401770
    if ((v5 || v4) == 0) {
        // 0x401c14
        error(0, (int32_t)"ignoring input" ^ (int32_t)"ignoring input", dcgettext(NULL, "ignoring input", 5));
        fd4 = 2;
        goto lab_0x40193c;
    } else {
        // 0x401a9e
        v11 = v10;
        v9 = v8 % 256;
        v7 = v6;
        if (v4 != 0) {
            goto lab_0x40187c;
        } else {
            goto lab_0x401aa7;
        }
    }
  lab_0x401aa7:;
    char v18 = v9;
    v16 = v18;
    v17 = v7;
    int64_t fd; // 0x401770
    int64_t v19; // 0x401770
    int32_t cmask; // 0x401770
    char v20; // 0x401770
    if ((v11 & v18) == 0) {
        goto lab_0x4019e8;
    } else {
        // 0x401ab9
        cmask = umask(-385);
        v20 = 1;
        fd = open("nohup.out", 1089);
        v19 = v7;
        goto lab_0x4018b6;
    }
  lab_0x40187c:
    // 0x40187c
    cmask = umask(-385);
    v20 = v15;
    fd = function_402270(1, "nohup.out", 1089, 384) & 0xffffffff;
    v19 = 0;
    goto lab_0x4018b6;
  lab_0x4019e8:
    // 0x4019e8
    fd4 = 2;
    int64_t v37; // 0x401770
    int64_t v38; // 0x401770
    char v36; // 0x401770
    if (v16 == 0) {
        goto lab_0x40193c;
    } else {
        // 0x4019f1
        v36 = function_404960(2, 1030, 3, 0);
        v37 = 1;
        v38 = v17;
        goto lab_0x401a11;
    }
  lab_0x40193c:
    // 0x40193c
    if ((*(char *)g32 & 32) != 0) {
        // 0x40199a
        return result;
    }
    // 0x401948
    signal(SIGHUP, SIG_IGN);
    int64_t v41 = 8 * (int64_t)g28 + a2; // 0x401960
    int64_t * file = (int64_t *)v41; // 0x401965
    exec_argv[0] = (char *)v41;
    execvp((char *)*file, exec_argv);
    int32_t err_num2 = *__errno_location(); // 0x40197f
    int64_t v42 = err_num2 == 2 ? 127 : 126; // 0x401989
    int64_t result2 = v42; // 0x401994
    if (dup2((int32_t)fd4, 2) == 2) {
        // 0x401c40
        function_403ec0(4, *file);
        error(0, err_num2, dcgettext(NULL, "failed to run command %s", 5));
        result2 = v42;
    }
    // 0x40199a
    return result2;
  lab_0x4018b6:;
    int64_t * v21 = NULL; // 0x4018b9
    int64_t v22 = fd; // 0x4018b9
    int64_t v23 = (int64_t)"nohup.out"; // 0x4018b9
    int64_t v24; // 0x401770
    int64_t v25; // 0x401770
    int64_t v26; // 0x401770
    int32_t err_num3; // 0x401770
    if ((int32_t)fd < 0) {
        int32_t * v27 = __errno_location(); // 0x401ae5
        int32_t err_num = *v27; // 0x401af4
        if (getenv("HOME") == NULL) {
            // 0x401ce0
            function_403ec0(4, (int64_t)"nohup.out");
            error(0, err_num, dcgettext(NULL, "failed to open %s", 5));
            // 0x40199a
            return result;
        }
        int64_t v28 = function_4022e0(); // 0x401b12
        if (v4 != 0) {
            int64_t v29 = function_402270(1, (char *)v28, 1089, 384); // 0x401b86
            if ((int32_t)v29 >= 0) {
                // 0x401b74
                v25 = 0x100000000000000 * v28 >> 56;
                v26 = v29 & 0xffffffff;
                goto lab_0x401b42;
            } else {
                // 0x401b92
                function_403ec0(4, (int64_t)"nohup.out");
                error(0, err_num, dcgettext(NULL, "failed to open %s", 5));
                if ((char)v28 == 0) {
                    // 0x40199a
                    return result;
                }
                // 0x401b92
                v24 = 0x100000000000000 * v28 >> 56;
                err_num3 = *v27;
                goto lab_0x401bdb;
            }
        } else {
            int64_t path = 0x100000000000000 * v28 >> 56;
            int32_t fd2 = open((char *)path, 1089); // 0x401b32
            v25 = path;
            v26 = fd2;
            if (fd2 < 0) {
                // 0x401d41
                function_403ec0(4, (int64_t)"nohup.out");
                error(0, err_num, dcgettext(NULL, "failed to open %s", 5));
                v24 = path;
                err_num3 = *v27;
                goto lab_0x401bdb;
            } else {
                goto lab_0x401b42;
            }
        }
    } else {
        goto lab_0x4018cd;
    }
  lab_0x4018cd:
    // 0x4018cd
    umask(cmask);
    int64_t v30 = function_403ec0(4, v23); // 0x4018e5
    char * v31 = v3 == 0 ? "appending output to %s" : "ignoring input and appending output to %s"; // 0x401907
    error(0, 0, dcgettext(NULL, v31, 5));
    free(v21);
    fd4 = 2;
    int64_t v32; // 0x401770
    int64_t v33; // 0x401770
    char v34; // 0x401770
    if (v20 != 0) {
        char v35 = function_404960(2, 1030, 3, 0x100000000 * v30 >> 32); // 0x401b62
        v36 = v35;
        v37 = v22;
        v38 = v19;
        v34 = v35;
        v32 = v22;
        v33 = v19;
        if (v4 != 0) {
            goto lab_0x401a3c;
        } else {
            goto lab_0x401a11;
        }
    } else {
        goto lab_0x40193c;
    }
  lab_0x401a11:;
    char * v39 = v3 == 0 ? "redirecting stderr to stdout" : "ignoring input and redirecting stderr to stdout"; // 0x401a29
    error(0, 0, dcgettext(NULL, v39, 5));
    v34 = v36;
    v32 = v37;
    v33 = v38;
    goto lab_0x401a3c;
  lab_0x401a3c:;
    char v40 = v34;
    int32_t fd3 = v32; // 0x401a44
    if (dup2(fd3, 2) < 0) {
        // 0x401cb4
        error(status, *__errno_location(), dcgettext(NULL, "failed to redirect standard error", 5));
    }
    // 0x401a51
    fd4 = v40;
    if ((int32_t)v33 != 0) {
        // 0x401a5a
        close(fd3);
        fd4 = v40;
    }
    goto lab_0x40193c;
  lab_0x401b42:
    // 0x401b42
    v21 = (int64_t *)v25;
    v22 = v26;
    v23 = v25;
    goto lab_0x4018cd;
  lab_0x401bdb:
    // 0x401bdb
    function_403ec0(4, v24);
    error(0, err_num3, dcgettext(NULL, "failed to open %s", 5));
    // 0x40199a
    return result;
}
// Address range: 0x401d90 - 0x401dbb
// Address range: 0x401dbb - 0x401dda
int64_t function_401dbb(void) {
    // 0x401dbb
    return &g29;
}
// Address range: 0x401dda - 0x401e11
int64_t function_401dda(void) {
    // 0x401dda
    return 0;
}
// Address range: 0x401e11 - 0x401e68
int64_t function_401e11(void) {
    // 0x401e11
    if (g33 != 0) {
        // 0x401e67
        int64_t result; // 0x401e11
        return result;
    }
    int64_t v1 = g34; // 0x401e44
    int64_t result2; // 0x401e56
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401e56
        result2 = function_401dbb();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401e46
        v1++;
    }
    // 0x401e3a
    g34 = v1;
    // 0x401e56
    result2 = function_401dbb();
    g33 = 1;
    return result2;
}
// Address range: 0x401e68 - 0x401e6d
int64_t function_401e68(void) {
    // 0x401e68
    return function_401dda();
}
// Address range: 0x401e70 - 0x4021ad
int64_t function_401e70(int64_t a1) {
    int32_t status = a1; // 0x401e86
    if (status != 0) {
        // 0x401e8a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401eaf
        exit(status);
        // UNREACHABLE
    }
    // 0x401eb6
    __printf_chk(1, dcgettext(NULL, "Usage: %s COMMAND [ARG]...\n  or:  %s OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Run COMMAND, ignoring hangup signals.\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "\nIf standard input is a terminal, redirect it from an unreadable file.\nIf standard output is a terminal, append output to 'nohup.out' if possible,\n'$HOME/nohup.out' otherwise.\nIf standard error is a terminal, redirect it to standard output.\nTo save output to FILE, use '%s COMMAND > FILE'.\n", 5));
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x401f8f
    bool v2; // 0x401e70
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402010
    int64_t v6 = *(int64_t *)v5; // 0x402014
    int64_t v7 = 6; // 0x40201a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"nohup";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402026
        char v11 = *(char *)v9; // 0x402026
        char v12 = v11; // 0x402026
        bool v13 = false; // 0x402026
        while (v10 == v11) {
            // 0x40201c
            v7--;
            int64_t v14 = v9 + v3; // 0x402026
            int64_t v15 = v8 + v3; // 0x402026
            v12 = v10;
            v13 = true;
            if (v7 == 0) {
                // break -> 
                break;
            }
            v8 = v15;
            v9 = v14;
            v10 = *(char *)v8;
            v11 = *(char *)v9;
            v12 = v11;
            v13 = false;
        }
        unsigned char v16 = v12;
        if ((v10 >= v16 && !v13) == v10 < v16) {
            // break -> 0x402032
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x402032
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402144;
        } else {
            // 0x40212e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402183
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402094;
            } else {
                goto lab_0x402144;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402094;
        } else {
            // 0x40207a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402183
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402094;
            } else {
                goto lab_0x402094;
            }
        }
    }
  lab_0x402144:
    // 0x402144
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4020d4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401eaf
    exit(status);
    // UNREACHABLE
  lab_0x402094:
    // 0x402094
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4020d4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401eaf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4021b0 - 0x4021b8
int64_t function_4021b0(int64_t a1) {
    // 0x4021b0
    g36 = a1;
    int64_t result; // 0x4021b0
    return result;
}
// Address range: 0x4021c0 - 0x4021c8
int64_t function_4021c0(int64_t a1) {
    // 0x4021c0
    g35 = a1;
    int64_t result; // 0x4021c0
    return result;
}
// Address range: 0x4021d0 - 0x40226e
int64_t function_4021d0(void) {
    // 0x4021d0
    int32_t * err_num; // 0x4021e6
    if ((int32_t)function_4058f0((int64_t)g30) == 0) {
        goto lab_0x4021fc;
    } else {
        // 0x4021e6
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x402213;
        } else {
            // 0x4021f7
            if (*err_num != 32) {
                goto lab_0x402213;
            } else {
                goto lab_0x4021fc;
            }
        }
    }
  lab_0x4021fc:;
    int64_t result = function_4058f0((int64_t)g32); // 0x402203
    if ((int32_t)result == 0) {
        // 0x40220c
        return result;
    }
    // 0x40224e
    _exit(g20);
    // UNREACHABLE
  lab_0x402213:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40221f
    if (g36 == 0) {
        // 0x402259
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402233
        error(0, *err_num, "%s: %s", (char *)function_403f60((int64_t)g36), v1);
    }
    // 0x40224e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x402270 - 0x4022da
int64_t function_402270(int64_t a1, char * path, int64_t oflag, int64_t a4) {
    int32_t fd = open(path, (int32_t)oflag); // 0x402285
    int32_t fd2 = a1; // 0x40228c
    if (fd != fd2 != fd >= 0) {
        // 0x402294
        return fd;
    }
    uint32_t result = dup2(fd, fd2); // 0x4022ac
    int32_t * v1 = __errno_location(); // 0x4022b4
    close(fd);
    return result;
}
// Address range: 0x4022e0 - 0x4022f8
int64_t function_4022e0(void) {
    // 0x4022e0
    int64_t v1; // 0x4022e0
    int64_t result = function_402300(v1, v1, v1); // 0x4022e4
    if (result != 0) {
        // 0x4022ee
        return result;
    }
    // 0x4022f3
    function_404920(v1);
    // UNREACHABLE
}
// Address range: 0x402300 - 0x4023d9
int64_t function_402300(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_405950(a1, a2); // 0x402318
    int64_t v2 = function_4059b0(v1); // 0x402323
    int64_t v3 = 0; // 0x402337
    if (v2 != 0) {
        // 0x402339
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x402350
    int64_t v4 = a2; // 0x402350
    int64_t v5; // 0x402300
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x4023c8
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x402331
    int32_t len = strlen((char *)str); // 0x402355
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x402365
    if (mem == NULL) {
        // 0x4023b1
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x40237b
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x402387
    if (a3 != 0) {
        // 0x402390
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x4023a3
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x4023b1
    return (int64_t)mem;
}
// Address range: 0x4023e0 - 0x4024e2
int64_t function_4023e0(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x4023e0
    int64_t v1; // 0x4023e0
    if ((char)v1 != 0) {
        // 0x4023f3
        int128_t v2; // 0x4023e0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x40242a
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x40243f
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x4023e0
        return result;
    }
    int64_t result2 = function_4057f0(a1, a2, &g2, (int64_t *)&g4, 0, a6); // 0x402479
    int32_t v4 = result2; // 0x40247e
    switch (v4) {
        default: {
            // 0x402488
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x4024aa
                function_404530((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x40243f
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
}
// Address range: 0x4024f0 - 0x402589
int64_t function_4024f0(int64_t str) {
    // 0x4024f0
    if (str == 0) {
        // 0x402569
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4024fe
    int64_t result = (int64_t)found_char_pos; // 0x4024fe
    if (found_char_pos == NULL) {
        // 0x402559
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402508
    if (v1 - str < 7) {
        // 0x402559
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x402518
    bool v2; // 0x4024f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4024f0
    int64_t v5 = result - 6; // 0x4024f0
    int64_t v6 = 7; // 0x402526
    unsigned char v7 = *(char *)v5; // 0x402526
    char v8 = *(char *)v4; // 0x402526
    char v9 = v8; // 0x402526
    bool v10 = false; // 0x402526
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)"lt-"; // 0x402530
    int64_t v13 = v1; // 0x402530
    int64_t v14 = 3; // 0x402530
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402559
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402542
    char v16 = *(char *)v12; // 0x402542
    char v17 = v16; // 0x402542
    bool v18 = false; // 0x402542
    while (v15 == v16) {
        // 0x402532
        v14--;
        v12 += v3;
        v13 += v3;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    int64_t v20 = v1; // 0x40254c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40254e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x402559
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x402590 - 0x402682
int64_t function_402590(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4025a4
    int64_t result = (int64_t)v1; // 0x4025a4
    if (result != a1) {
        // 0x4025b1
        return result;
    }
    int64_t v2 = function_405a40(); // 0x4025c0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402676
    if (v3 == 85) {
        // 0x4025d0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402668
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4025fe
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40260b
        // 0x4025b1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402668
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40264d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40265a
    // 0x4025b1
    return result4;
}
// Address range: 0x402690 - 0x4026e7
int64_t function_402690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402690
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4026d8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4026e7 - 0x4038b1
int64_t function_4026e7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402731
    int64_t v3 = 0; // 0x402731
    int64_t v4; // 0x4026e7
    int64_t v5; // 0x4026e7
    int64_t v6; // 0x4026e7
    int64_t v7; // 0x4026e7
    int64_t v8; // 0x4026e7
    int64_t v9; // 0x4026e7
    int64_t v10; // 0x4026e7
    int64_t v11; // 0x4026e7
    int64_t v12; // 0x4026e7
    int64_t v13; // 0x4026e7
    int64_t v14; // 0x4026e7
    int64_t v15; // 0x4026e7
    int64_t v16; // 0x4026e7
    int64_t v17; // 0x4026e7
    int64_t v18; // 0x4026e7
    int64_t result; // 0x4026e7
    int64_t v19; // 0x4026e7
    int32_t wc; // bp+132, 0x4026e7
    int64_t ps; // bp+136, 0x4026e7
    char v20; // 0x402ca0
    int64_t v21; // 0x402ca0
    int64_t v22; // 0x403048
    int64_t v23; // 0x4026e7
    int64_t v24; // 0x403067
    int32_t v25; // 0x4026e7
    while (true) {
      lab_0x402738_2:
        // 0x402738
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4026e7
        int64_t v27; // 0x40276c
        while (true) {
          lab_0x402738:
            // 0x402738
            v5 = v26;
            bool v28 = v15 == v5; // 0x402743
            if (v15 == -1) {
                // 0x402745
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402753
            if (v28) {
                // break (via goto) -> 0x402eb8
                goto lab_0x402eb8;
            }
            // 0x40275c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g49 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x402d4b
                    if (v25 % 2 == 0) {
                        goto lab_0x402891;
                    }
                    // 0x40316d
                    v26 = v5 + 1;
                    goto lab_0x402738;
                }
                case 7: {
                    goto lab_0x402891;
                }
                case 8: {
                    goto lab_0x402891;
                }
                case 9: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402891;
                }
                case 12: {
                    goto lab_0x402891;
                }
                case 13: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40285d;
                }
                case 36: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402891;
                }
                case 38: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402891;
                }
                case 44: {
                    goto lab_0x402891;
                }
                case 45: {
                    goto lab_0x402891;
                }
                case 46: {
                    goto lab_0x402891;
                }
                case 47: {
                    goto lab_0x402891;
                }
                case 48: {
                    goto lab_0x402891;
                }
                case 49: {
                    goto lab_0x402891;
                }
                case 50: {
                    goto lab_0x402891;
                }
                case 51: {
                    goto lab_0x402891;
                }
                case 52: {
                    goto lab_0x402891;
                }
                case 53: {
                    goto lab_0x402891;
                }
                case 54: {
                    goto lab_0x402891;
                }
                case 55: {
                    goto lab_0x402891;
                }
                case 56: {
                    goto lab_0x402891;
                }
                case 57: {
                    goto lab_0x402891;
                }
                case 58: {
                    goto lab_0x402891;
                }
                case 59: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402891;
                }
                case 66: {
                    goto lab_0x402891;
                }
                case 67: {
                    goto lab_0x402891;
                }
                case 68: {
                    goto lab_0x402891;
                }
                case 69: {
                    goto lab_0x402891;
                }
                case 70: {
                    goto lab_0x402891;
                }
                case 71: {
                    goto lab_0x402891;
                }
                case 72: {
                    goto lab_0x402891;
                }
                case 73: {
                    goto lab_0x402891;
                }
                case 74: {
                    goto lab_0x402891;
                }
                case 75: {
                    goto lab_0x402891;
                }
                case 76: {
                    goto lab_0x402891;
                }
                case 77: {
                    goto lab_0x402891;
                }
                case 78: {
                    goto lab_0x402891;
                }
                case 79: {
                    goto lab_0x402891;
                }
                case 80: {
                    goto lab_0x402891;
                }
                case 81: {
                    goto lab_0x402891;
                }
                case 82: {
                    goto lab_0x402891;
                }
                case 83: {
                    goto lab_0x402891;
                }
                case 84: {
                    goto lab_0x402891;
                }
                case 85: {
                    goto lab_0x402891;
                }
                case 86: {
                    goto lab_0x402891;
                }
                case 87: {
                    goto lab_0x402891;
                }
                case 88: {
                    goto lab_0x402891;
                }
                case 89: {
                    goto lab_0x402891;
                }
                case 90: {
                    goto lab_0x402891;
                }
                case 91: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402891;
                }
                case 94: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402891;
                }
                case 96: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402891;
                }
                case 98: {
                    goto lab_0x402891;
                }
                case 99: {
                    goto lab_0x402891;
                }
                case 100: {
                    goto lab_0x402891;
                }
                case 101: {
                    goto lab_0x402891;
                }
                case 102: {
                    goto lab_0x402891;
                }
                case 103: {
                    goto lab_0x402891;
                }
                case 104: {
                    goto lab_0x402891;
                }
                case 105: {
                    goto lab_0x402891;
                }
                case 106: {
                    goto lab_0x402891;
                }
                case 107: {
                    goto lab_0x402891;
                }
                case 108: {
                    goto lab_0x402891;
                }
                case 109: {
                    goto lab_0x402891;
                }
                case 110: {
                    goto lab_0x402891;
                }
                case 111: {
                    goto lab_0x402891;
                }
                case 112: {
                    goto lab_0x402891;
                }
                case 113: {
                    goto lab_0x402891;
                }
                case 114: {
                    goto lab_0x402891;
                }
                case 115: {
                    goto lab_0x402891;
                }
                case 116: {
                    goto lab_0x402891;
                }
                case 117: {
                    goto lab_0x402891;
                }
                case 118: {
                    goto lab_0x402891;
                }
                case 119: {
                    goto lab_0x402891;
                }
                case 120: {
                    goto lab_0x402891;
                }
                case 121: {
                    goto lab_0x402891;
                }
                case 122: {
                    goto lab_0x402891;
                }
                case 123: {
                    goto lab_0x402835;
                }
                case 124: {
                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402835;
                }
                case 126: {
                    goto lab_0x40285d;
                }
                default: {
                    goto lab_0x402c35;
                }
            }
        }
      lab_0x402c35:
        if (v23 != 1) {
            // 0x402fa0
            ps = 0;
            int64_t len = v15; // 0x402fb0
            if (v15 == -1) {
                // 0x402fb2
                len = strlen((char *)str);
            }
            // 0x402fde
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40303f:
                // 0x40303f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403044
                int64_t v30 = v29 + str;
                v24 = function_405870(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4035ba_2;
                    }
                    case -1: {
                        goto lab_0x4035ba_2;
                    }
                    case -2: {
                        // 0x40369d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4036d7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4036da
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4036e7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4036e0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4035ba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4035ba_2;
                    }
                    case 1: {
                        goto lab_0x403010;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4030bc
                        char v34 = *(char *)v33; // 0x4030cd
                        unsigned char v35; // 0x4026e7
                        if (v34 < 125) {
                            // 0x4030d8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4030ef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402690(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4030c0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4030cd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4030d8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4030ef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402690(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4030c0
                            v33++;
                        }
                        goto lab_0x403010;
                    }
                }
            }
            goto lab_0x4035ba_2;
        } else {
            // 0x402c84
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402891;
        }
    }
  lab_0x402eb8:
    // 0x402eb8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4037ba
        if (v8 > result) {
            // 0x4037c3
            *(char *)(v12 + result) = 0;
        }
        // 0x402ae7
        return result;
    }
    return function_402690(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402891:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4028a0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402aaa_2;
        }
    }
    int64_t v39 = result; // 0x4029a1
    char v40 = v20; // 0x4029a1
    int64_t v41 = v38; // 0x4029a1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4029a1
    int64_t v43 = v36; // 0x4029a1
    goto lab_0x40291d;
  lab_0x402aaa_2:
    // 0x402ae7
    return function_402690(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4035ba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402891;
    } else {
        uint64_t v49 = v46 + v5; // 0x40318e
        int64_t v50 = v5 + 1; // 0x403271
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403278
        char v52 = v20; // 0x403278
        int64_t v53 = result; // 0x403278
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403241
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403245
            int64_t v56 = v54 + 1; // 0x40324a
            int64_t v57 = v51 + 1; // 0x403271
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40323c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403241
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403245
                v55 = *(char *)(v51 + str);
                v56 = v54 + 1;
                v57 = v51 + 1;
                v39 = v56;
                v40 = v55;
                v41 = v22;
                v3 = v57;
                v42 = v47;
                v43 = v48;
                v51 = v57;
            }
        }
        goto lab_0x40291d;
    }
  lab_0x403010:
    // 0x403010
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40302f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403032
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4035ba
        goto lab_0x4035ba_2;
    }
    goto lab_0x40303f;
  lab_0x40285d:
    // 0x40285d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402aaa_2;
    }
    goto lab_0x402891;
  lab_0x402835:;
    bool v60 = v15 == 1; // 0x402840
    if (v15 == -1) {
        // 0x402842
        v60 = *(char *)v1 == 0;
    }
    // 0x40284e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402891;
    } else {
        goto lab_0x40285d;
    }
  lab_0x40291d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402922
        *(char *)(v44 + v45) = v40;
    }
    // 0x402926
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402738_2;
}
// Address range: 0x4038c0 - 0x403a5e
int64_t function_4038c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4038c2
    int32_t * v3 = __errno_location(); // 0x4038dc
    int64_t v4 = (int64_t)g22; // 0x4038e1
    int32_t v5 = *v3; // 0x4038eb
    int64_t v6 = v4; // 0x403901
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403a59
            function_404920(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403910
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403917
        int64_t v9; // 0x4038c0
        if (g22 == &g23) {
            int64_t v10 = function_404730(0, v8); // 0x403a3a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x403a3f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404730(v4, v8); // 0x40392b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40393a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40393a
        int32_t v14 = v7; // 0x403941
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403971
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40397b
    int64_t * v17 = (int64_t *)v15; // 0x40397e
    uint64_t v18 = *v17; // 0x40397e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403981
    int64_t result = *v19; // 0x403981
    int64_t v20; // 0x4038c0
    uint64_t v21 = function_402690(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4039a4
    if (v18 > v21) {
        // 0x403a1b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4039b7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x4039c7
        free((int64_t *)result);
    }
    int64_t result2 = function_4046d0(v22); // 0x4039e1
    *v19 = result2;
    int64_t v23; // 0x4038c0
    function_402690(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403a1b
    *v3 = v5;
    return result2;
}
// Address range: 0x403a60 - 0x403a94
int64_t function_403a60(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403a67
    int64_t result = function_4048d0(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x403a86
    return result;
}
// Address range: 0x403aa0 - 0x403aaf
int64_t function_403aa0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x403aac
    return result;
}
// Address range: 0x403ab0 - 0x403abf
int64_t function_403ab0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403ab8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403ac0 - 0x403af3
int64_t function_403ac0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403ad9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403ade
    uint32_t v3 = *v2; // 0x403ade
    uint32_t v4 = (int32_t)a2 % 32; // 0x403ae2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403b00 - 0x403b13
int64_t function_403b00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x403b0c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403b20 - 0x403b4b
int64_t function_403b20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403b28
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403b45
        abort();
        // UNREACHABLE
    }
    // 0x403b3c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403b50 - 0x403bc2
int64_t function_403b50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x403b72
    int32_t * v2 = __errno_location(); // 0x403b7b
    uint32_t v3 = *(int32_t *)v1; // 0x403b9b
    int64_t result = function_402690(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403baa
    return result;
}
// Address range: 0x403bd0 - 0x403cb1
int64_t function_403bd0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403bf2
    int32_t * v2 = __errno_location(); // 0x403bf8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403c17
    int32_t * v4 = (int32_t *)v1; // 0x403c1a
    int64_t v5 = function_402690(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403c35
    int64_t v6 = v5 + 1; // 0x403c3a
    int64_t result = function_4046d0(v6); // 0x403c4f
    function_402690(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403c94
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403c9d
    return result;
}
// Address range: 0x403cc0 - 0x403cca
int64_t function_403cc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403cc0
    return function_403bd0(a1, a2, 0, a3);
}
// Address range: 0x403cd0 - 0x403d65
int64_t function_403cd0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403cd0
    int64_t v2 = v1; // 0x403cd0
    int64_t v3 = v2; // 0x403ce4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403d03
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403d00
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x403d1d
    if (g23 != 0x6092c0) {
        // 0x403d1f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g38;
        v6 = &g50;
    }
    int64_t result = v6; // 0x403d41
    if (g22 != &g23) {
        // 0x403d43
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g50;
    }
    // 0x403d56
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x403d70 - 0x403d81
int64_t function_403d70(void) {
    // 0x403d70
    int64_t v1; // 0x403d70
    return function_4038c0(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x403d90 - 0x403d9a
int64_t function_403d90(void) {
    // 0x403d90
    int64_t v1; // 0x403d90
    return function_4038c0(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403da0 - 0x403db6
int64_t function_403da0(int64_t a1) {
    // 0x403da0
    return function_4038c0(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403dc0 - 0x403dd2
int64_t function_403dc0(int64_t a1, int64_t a2) {
    // 0x403dc0
    return function_4038c0(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403de0 - 0x403e48
int64_t function_403de0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403df0
    return function_4038c0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403e50 - 0x403eb4
int64_t function_403e50(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403e60
    return function_4038c0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403ec0 - 0x403ecc
int64_t function_403ec0(int64_t a1, int64_t a2) {
    // 0x403ec0
    return function_403de0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403ed0 - 0x403edf
int64_t function_403ed0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403ed0
    return function_403e50(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403ee0 - 0x403f50
int64_t function_403ee0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403eed
    int128_t v2 = __asm_movdqa(g40); // 0x403ef5
    int128_t v3 = __asm_movdqa(g41); // 0x403efd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403f12
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403f28
    uint32_t v6 = *v5; // 0x403f28
    uint32_t v7 = (int32_t)a3 % 32; // 0x403f2d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4038c0(0, a1, a2, &v4);
}
// Address range: 0x403f50 - 0x403f5d
int64_t function_403f50(int64_t a1, int64_t a2) {
    // 0x403f50
    return function_403ee0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403f60 - 0x403f71
int64_t function_403f60(int64_t a1) {
    // 0x403f60
    return function_403ee0(a1, -1, 58);
}
// Address range: 0x403f80 - 0x403f8a
int64_t function_403f80(void) {
    // 0x403f80
    int64_t v1; // 0x403f80
    return function_403ee0(v1, v1, 58);
}
// Address range: 0x403f90 - 0x403ffe
int64_t function_403f90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403faa
    return function_4038c0(a1, a3, -1, &v1);
}
// Address range: 0x404000 - 0x40406c
int64_t function_404000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x404007
    int128_t v2 = __asm_movdqa(g40); // 0x40400f
    int128_t v3 = __asm_movdqa(g41); // 0x404017
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404039
    if (a2 == 0 || a3 == 0) {
        // 0x404067
        abort();
        // UNREACHABLE
    }
    // 0x40404a
    return function_4038c0(a1, a4, a5, &v4);
}
// Address range: 0x404070 - 0x404079
int64_t function_404070(void) {
    // 0x404070
    int64_t v1; // 0x404070
    return function_404000(v1, v1, v1, v1, -1);
}
// Address range: 0x404080 - 0x404097
int64_t function_404080(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404080
    return function_404000(0, a1, a2, a3, -1);
}
// Address range: 0x4040a0 - 0x4040b3
int64_t function_4040a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4040a0
    return function_404000(0, a1, a2, a3, a4);
}
// Address range: 0x4040c0 - 0x4040ca
int64_t function_4040c0(void) {
    // 0x4040c0
    int64_t v1; // 0x4040c0
    return function_4038c0(v1, v1, v1, &g21);
}
// Address range: 0x4040d0 - 0x4040e2
int64_t function_4040d0(int64_t a1, int64_t a2) {
    // 0x4040d0
    return function_4038c0(0, a1, a2, &g21);
}
// Address range: 0x4040f0 - 0x404101
int64_t function_4040f0(void) {
    // 0x4040f0
    int64_t v1; // 0x4040f0
    return function_4038c0(v1, v1, -1, &g21);
}
// Address range: 0x404110 - 0x404126
int64_t function_404110(int64_t a1) {
    // 0x404110
    return function_4038c0(0, a1, -1, &g21);
}
// Address range: 0x404130 - 0x40450d
int64_t function_404130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4041c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40414c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404166
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4041ab
    if (a6 < 10) {
        // 0x4041ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4042b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404510 - 0x404530
int64_t function_404510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404510
    if (a5 == 0) {
        // 0x40452b
        return function_404130(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x404517
    v1++;
    int64_t v2 = v1; // 0x404529
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404520
        v1++;
        v2 = v1;
    }
    // 0x40452b
    return function_404130(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x404530 - 0x404590
int64_t function_404530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x404530
    int64_t v4 = &v3; // 0x404530
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x404563
    int64_t v7; // 0x40454d
    int64_t * v8; // 0x40456b
    int64_t v9; // 0x40456b
    int64_t v10; // 0x404577
    if (v6 < 48) {
        // 0x404540
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x404583
            break;
        }
    } else {
        // 0x40456b
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x404583
            break;
        }
    }
    int64_t v11 = 10; // 0x404561
    while (v5 != 9) {
        // 0x404559
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x404540
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x404583
                break;
            }
        } else {
            // 0x40456b
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x404583
                break;
            }
        }
        // 0x404559
        v11 = 10;
    }
    // 0x404583
    return function_404130(a1, a2, a3, a4, v4, v11, (int64_t)&g50);
}
// Address range: 0x404590 - 0x40464c
int64_t function_404590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404590
    int64_t v1; // bp-168, 0x404590
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404590
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404590
    int64_t v8; // 0x404590
    int64_t v9; // bp-56, 0x404590
    int64_t v10; // 0x4045f5
    int64_t v11; // 0x404619
    if ((int32_t)v6 < 48) {
        // 0x4045e0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404630
            break;
        }
    } else {
        // 0x404612
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404630
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40460a
    int64_t v13 = 10; // 0x40460a
    while (v5 != 9) {
        // 0x40460c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4045e0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404630
                break;
            }
        } else {
            // 0x404612
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404630
                break;
            }
        }
        // 0x404602
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404630
    int64_t v14; // bp-136, 0x404590
    int64_t result = function_404130(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x40463f
    return result;
}
// Address range: 0x404650 - 0x4046c4
int64_t function_404650(int64_t a1) {
    // 0x404650
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4046b3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x4046d0 - 0x4046ea
int64_t function_4046d0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4046d4
    if (size != 0 != (mem == NULL)) {
        // 0x4046e3
        return (int64_t)mem;
    }
    // 0x4046e5
    function_404920(size);
    // UNREACHABLE
}
// Address range: 0x4046f0 - 0x404711
int64_t function_4046f0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4046f3
    int64_t v2 = v1; // 0x4046f3
    if (v2 < 0) {
        // 0x40470b
        function_404920(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404709
        return function_4046d0(v2);
    }
    // 0x40470b
    function_404920(v2);
    // UNREACHABLE
}
// Address range: 0x404720 - 0x404722
int64_t function_404720(void) {
    // 0x404720
    int64_t v1; // 0x404720
    return function_4046d0(v1);
}
// Address range: 0x404730 - 0x404766
int64_t function_404730(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404758
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404741
    if (a2 != 0 != (mem == NULL)) {
        // 0x404750
        return (int64_t)mem;
    }
    // 0x404761
    function_404920(a1);
    // UNREACHABLE
}
// Address range: 0x404770 - 0x404791
int64_t function_404770(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404773
    int64_t v2 = v1; // 0x404773
    if (v2 < 0) {
        // 0x40478b
        function_404920(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404789
        return function_404730(a1, v2);
    }
    // 0x40478b
    function_404920(a1);
    // UNREACHABLE
}
// Address range: 0x4047a0 - 0x404826
int64_t function_4047a0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4047fb
            function_404920(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404730(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4047e3
    if (a2 == 0) {
        // 0x404808
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4047e8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4047fb
        function_404920(a1);
        // UNREACHABLE
    }
    // 0x4047ca
    *(int64_t *)a2 = v2;
    return function_404730(a1, v2 * a3);
}
// Address range: 0x404830 - 0x404880
int64_t function_404830(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404830
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40487a
            function_404920(a1);
            // UNREACHABLE
        }
        // 0x404852
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404730(a1, v1);
    }
    if (a2 == 0) {
        // 0x404865
        *(int64_t *)a2 = 128;
        return function_404730(0, 128);
    }
    // 0x404878
    if (a2 < 0) {
        // 0x40487a
        function_404920(a1);
        // UNREACHABLE
    }
    // 0x404852
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404730(a1, v1);
}
// Address range: 0x404880 - 0x404897
int64_t function_404880(int64_t a1, int64_t a2) {
    // 0x404880
    return (int64_t)memset((int64_t *)function_4046d0(a1), 0, (int32_t)a1);
}
// Address range: 0x4048a0 - 0x4048ce
int64_t function_4048a0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4048a7
    if ((int64_t)v1 < 0) {
        // 0x4048c9
        function_404920(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4048c9
        function_404920(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4048ba
    if (mem != NULL) {
        // 0x4048c4
        return (int64_t)mem;
    }
    // 0x4048c9
    function_404920(nmemb);
    // UNREACHABLE
}
// Address range: 0x4048d0 - 0x4048f8
int64_t function_4048d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4046d0(a2); // 0x4048df
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404900 - 0x404913
int64_t function_404900(int64_t str) {
    // 0x404900
    return function_4048d0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404920 - 0x404951
int64_t function_404920(int64_t a1) {
    // 0x404920
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404960 - 0x404a95
int64_t function_404960(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x404990
    if (cmd != 1030) {
        // 0x404a40
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40499c
    int64_t v2; // 0x404960
    if (g42 < 0) {
        int64_t v3 = function_404960(fd, 0, v1, a4); // 0x4049e4
        int64_t v4 = v3 & 0xffffffff; // 0x4049e9
        if ((int32_t)v3 < 0) {
            // 0x4049d0
            return v4 & 0xffffffff;
        }
        // 0x4049ef
        v2 = v4;
        if (g42 != -1) {
            // 0x4049d0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4049b7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4049c6
            g42 = 1;
            // 0x4049d0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_404960(fd & 0xffffffff, 0, v1, a4); // 0x404a77
        int64_t v7 = v6 & 0xffffffff; // 0x404a7c
        if ((int32_t)v6 < 0) {
            // 0x4049d0
            return v7 & 0xffffffff;
        }
        // 0x404a86
        g42 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4049ff
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x404a0a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4049d0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x404a22
    close(fd2);
    // 0x4049d0
    return 0xffffffff;
}
// Address range: 0x404aa0 - 0x404b7f
int64_t function_404aa0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x404aac
    uint32_t v2 = *v1; // 0x404aac
    int64_t v3 = a2 & 0xffffffff; // 0x404ab1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404ab4
    uint64_t v5 = (int64_t)*v4; // 0x404ab4
    int64_t v6; // 0x404b22
    if (v3 <= v5) {
      lab_0x404b1c_2:
        // 0x404b1c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404aa2
    int64_t v8 = v2; // 0x404aa0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x404b1c
        goto lab_0x404b1c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404ad8
    int64_t v17; // 0x404ae6
    int64_t * v18; // 0x404b00
    int64_t * v19; // 0x404b03
    int64_t v20; // 0x404b0e
    int64_t v21; // 0x404ae6
    while ((v16 & 0xffffffff) > v10) {
        // 0x404ae3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404b00
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404b17
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x404b1c
            goto lab_0x404b1c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x404b1c
            goto lab_0x404b1c_2;
        }
        // 0x404ad2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x404b5b
    int64_t * v23 = (int64_t *)v22; // 0x404b60
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404b63
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404b60
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404b77
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x404acd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x404b1c
            goto lab_0x404b1c_2;
        }
        // 0x404ad2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404ae3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404b00
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404b17
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x404b1c
                goto lab_0x404b1c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x404b1c
                goto lab_0x404b1c_2;
            }
            // 0x404ad2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404b40
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404b60
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404b77
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x404b1c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404b80 - 0x40519c
int64_t function_404b80(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404b9f
    int64_t v2 = *v1; // 0x404b9f
    char * str2 = (char *)v2; // 0x404bac
    char c = *str2; // 0x404bac
    int64_t v3 = v2; // 0x404bd8
    int64_t v4 = 0; // 0x404b80
    int32_t v5; // 0x404b80
    int64_t v6; // 0x404b80
    int64_t v7; // 0x404b80
    int64_t v8; // 0x404b80
    int64_t v9; // 0x404b80
    int64_t v10; // 0x404b80
    int64_t v11; // 0x404b80
    int64_t v12; // 0x404b80
    int64_t v13; // 0x404b80
    int64_t str3; // 0x404b80
    int64_t v14; // 0x404b80
    int64_t v15; // 0x404b80
    int64_t v16; // 0x404b80
    int64_t v17; // 0x404b80
    int32_t v18; // 0x404b80
    int32_t v19; // 0x404b80
    int32_t v20; // 0x404b80
    int32_t v21; // 0x404b80
    int32_t v22; // 0x404b80
    int32_t v23; // 0x404b80
    int32_t v24; // 0x404b80
    int32_t v25; // 0x404b80
    int32_t v26; // 0x404b80
    int32_t v27; // 0x404b80
    int32_t v28; // 0x404b80
    int32_t v29; // 0x404b80
    int64_t nmemb; // 0x404b80
    int64_t v30; // 0x404b80
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404bdc
            while (v31 != 0 == (v31 != 61)) {
                // 0x404bd8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404be8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404bee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404bb8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x404c1c
                int64_t v34; // 0x404b80
                int64_t v35; // 0x404b80
                if (strncmp(str, str2, n) == 0) {
                    // 0x404c25
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404da0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404c36
                int64_t v37 = *(int64_t *)v36; // 0x404c3a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404c10
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404c25
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404da0;
                        }
                    }
                    // 0x404c36
                    v36 = v38 + 32;
                    v37 = *(int64_t *)v36;
                    nmemb = v33 + 1;
                }
                int32_t v39 = v32;
                v22 = -1;
                v26 = 0;
                v18 = 0;
                v14 = 0;
                v10 = 0;
                v8 = a4;
                str3 = a4;
                v6 = 0;
                while (true) {
                  lab_0x404c86:
                    // 0x404c86
                    v7 = v6;
                    v9 = v8;
                    v11 = v10;
                    v15 = v14;
                    v19 = v18;
                    v27 = v26;
                    v23 = v22;
                    v24 = v23;
                    v28 = v27;
                    v20 = v19;
                    v16 = v15;
                    v12 = v11;
                    if (strncmp((char *)str3, str2, n) != 0) {
                        goto lab_0x404ce0;
                    } else {
                        if (v11 == 0) {
                            // 0x404e50
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404ce0;
                        } else {
                            if (v39 == 0) {
                                // 0x404e00
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x404caa;
                                } else {
                                    // 0x404e0c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x404caa;
                                    } else {
                                        // 0x404e1a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x404caa;
                                        } else {
                                            goto lab_0x404ce0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x404caa;
                            }
                        }
                    }
                }
              lab_0x404cf1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404ec6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405072
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x405092
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4050df
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x4050f9
                            int64_t v45; // 0x4050fb
                            if (*(char *)v42 != 0) {
                                // 0x4050fb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4050f3
                            while (v17 + nmemb != v42) {
                                // 0x4050f5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4050fb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x4050e8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405120
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404ed4
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40502f
                        free((int64_t *)v17);
                    }
                    // 0x404f29
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404f40
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x404dee
                    return 63;
                }
                // 0x404d10
                v5 = v39;
                if (v13 != 0) {
                    // 0x404d94
                    v35 = v13;
                    v34 = v25;
                  lab_0x404da0:;
                    int32_t * v49 = (int32_t *)a7; // 0x404db0
                    uint32_t v50 = *v49; // 0x404db0
                    int64_t v51 = v50; // 0x404db0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x404dba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404dc3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404fef
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404f9a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x404dee
                            return 63;
                        }
                        // 0x404e38
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40514f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40504d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405060
                                // 0x404dee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404f5e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404f72
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x404ddb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x404dde
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404de2
                    int64_t result = v59; // 0x404de8
                    if (v58 != 0) {
                        // 0x404dea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x404dee
                    return result;
                }
            } else {
                // 0x404bee
                v5 = v32;
            }
            // break -> 0x404d15
            break;
        }
    }
    // 0x404d15
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x404d2d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404d37
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x404dee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404e79
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404d66
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404d76
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404ce0:
    // 0x404ce0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404ce0
    int64_t v63 = *(int64_t *)v62; // 0x404ce4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404cf1
        goto lab_0x404cf1;
    }
    goto lab_0x404c86;
  lab_0x404caa:
    // 0x404caa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404b80
    int32_t v65; // 0x404b80
    int32_t v66; // 0x404b80
    if (v27 != 0) {
        goto lab_0x404ce0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404e60
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404ce0;
            } else {
                goto lab_0x404cd1;
            }
        } else {
            // 0x404cc5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404fbc
                int64_t v67 = (int64_t)mem; // 0x404fbc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404ce0;
                } else {
                    // 0x404fcf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404cd1;
                }
            } else {
                goto lab_0x404cd1;
            }
        }
    }
  lab_0x404cd1:
    // 0x404cd1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404ce0;
}
// Address range: 0x4051a0 - 0x405766
int64_t function_4051a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4051c1
    if (v3 < 1) {
        // 0x40537e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4051bd
    int32_t v5 = *(int32_t *)a7; // 0x4051c9
    uint64_t v6 = a1 & 0xffffffff; // 0x4051cb
    int64_t v7 = v2; // 0x4051d0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4051d3
    *v8 = 0;
    int64_t v9; // 0x4051a0
    int64_t v10; // 0x4051a0
    int64_t v11; // 0x4051a0
    int64_t v12; // 0x4051a0
    int64_t str; // 0x4051a0
    int64_t v13; // 0x4051a0
    int64_t v14; // 0x4051a0
    int64_t v15; // 0x4051a0
    int64_t v16; // 0x4051a0
    int64_t v17; // 0x4051a0
    int32_t v18; // 0x4051a0
    char v19; // 0x4051a0
    if (v5 == 0) {
        // 0x4053b8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4051ea;
    } else {
        // 0x4051e3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405230
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405233
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4052f8;
            } else {
                int64_t v22 = v7 + 1; // 0x405246
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405256
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40530c;
                } else {
                    goto lab_0x405268;
                }
            }
        } else {
            goto lab_0x4051ea;
        }
    }
  lab_0x4051ea:
    // 0x4051ea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4051f0
    *v24 = 0;
    int64_t v25; // 0x4051a0
    int64_t v26; // 0x4051a0
    int64_t v27; // 0x4051a0
    switch (*(char *)&v2) {
        case 45: {
            // 0x4052e0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4052ed;
        }
        case 43: {
            // 0x4055f0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4052ed;
        }
        default: {
            // 0x40520c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40556f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405688
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4052ed;
                } else {
                    // 0x40557d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40521a;
                }
            } else {
                goto lab_0x40521a;
            }
        }
    }
  lab_0x4052f8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4052ff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405268;
    } else {
        goto lab_0x40530c;
    }
  lab_0x40521a:
    // 0x40521a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4052ed;
  lab_0x4052ed:
    // 0x4052ed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4052f8;
  lab_0x405268:;
    uint32_t v30 = *(int32_t *)a7; // 0x405268
    int64_t v31 = v30; // 0x405268
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40526a
    if ((int64_t)*v32 > v31) {
        // 0x40526f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405272
    if (*v33 > v30) {
        // 0x405277
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40527a
    int64_t v35 = v31; // 0x40527e
    int64_t v36 = v15; // 0x40527e
    int64_t v37; // 0x4051a0
    int64_t v38; // 0x4051a0
    int64_t v39; // 0x4051a0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4053e8
        int64_t v41 = v40; // 0x4053e8
        v2 = v41;
        int64_t v42; // 0x4051a0
        if (*v33 == v40) {
            // 0x4055d0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4055d8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4053f4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4053f8
                function_404aa0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405408
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405411
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40541a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405431
            int64_t v47 = v45 & 0xffffffff; // 0x405435
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40543e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405444
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405446;
                }
            }
            int64_t v48 = v47 + 1; // 0x405420
            int64_t v49 = v48 & 0xffffffff; // 0x405420
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405431
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40543e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405444
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405446;
                    }
                }
                // 0x405420
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4055e8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405446;
    } else {
        goto lab_0x405284;
    }
  lab_0x40530c:
    // 0x40530c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40530f
    int64_t v51 = v12; // 0x40530f
    int64_t v52 = v14; // 0x40530f
    if (*(char *)v10 == 0) {
        goto lab_0x405268;
    } else {
        goto lab_0x405315;
    }
  lab_0x405284:;
    int32_t v53 = v35; // 0x405284
    int64_t v54; // 0x4051a0
    int64_t v55; // 0x4051a0
    int64_t v56; // 0x4051a0
    int64_t v57; // 0x4051a0
    int64_t v58; // 0x4051a0
    int64_t v59; // 0x4051a0
    char * v60; // 0x4051a0
    int64_t v61; // 0x4051a0
    int64_t v62; // 0x405299
    int64_t v63; // 0x4051a0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4053d3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4053d6;
    } else {
        // 0x40528c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4051a0
        int64_t v66 = v65 ? -1 : 1; // 0x4052a0
        int64_t v67 = (int64_t)"--"; // 0x4051a0
        int64_t v68 = v62; // 0x4051a0
        int64_t v69 = 3; // 0x4052a0
        unsigned char v70 = *(char *)v68; // 0x4052a0
        char v71 = *(char *)v67; // 0x4052a0
        char v72 = v71; // 0x4052a0
        bool v73 = false; // 0x4052a0
        while (v70 == v71) {
            v69--;
            v67 += v66;
            v68 += v66;
            v72 = v70;
            v73 = true;
            if (v69 == 0) {
                // break -> 
                break;
            }
            v70 = *(char *)v68;
            v71 = *(char *)v67;
            v72 = v71;
            v73 = false;
        }
        unsigned char v74 = v72;
        if ((v70 >= v74 && !v73) != v70 < v74) {
            // 0x405390
            if (*(char *)v62 == 45) {
                // 0x405450
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405450
                if (c == 0) {
                    goto lab_0x40539a;
                } else {
                    // 0x40545d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4054e0;
                    } else {
                        if (c == 45) {
                            // 0x4056c3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405535;
                        } else {
                            // 0x40546e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4054e0;
                            } else {
                                // 0x405473
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405494;
                                } else {
                                    // 0x40547a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4054e0;
                                    } else {
                                        goto lab_0x405494;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40539a;
            }
        } else {
            uint32_t v75 = *v33; // 0x4052b0
            v2 = v75;
            int32_t v76 = *v32; // 0x4052b3
            int64_t v77 = v35 + 1; // 0x4052b6
            int32_t v78 = v77; // 0x4052b9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405620
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4052c7
                    function_404aa0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4052d5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4053d6;
        }
    }
  lab_0x405315:;
    // 0x405315
    int64_t v79; // bp-104, 0x4051a0
    int64_t v80 = &v79; // 0x4051aa
    int64_t v81 = v50 + 1; // 0x405315
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40531c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405321
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405325
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405329
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405331
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405336
    int32_t c2 = v84; // 0x405336
    char * found_char_pos = strchr(str2, c2); // 0x405336
    int64_t v87 = *v82; // 0x40533b
    v2 = v87;
    int64_t v88 = *v85; // 0x405345
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405350
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405640
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40560d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40537e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405336
    char v91 = *(char *)(v90 + 1); // 0x40536b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405325
        if (v91 != 58) {
            // 0x40537e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405594
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405698
                *v8 = 0;
            } else {
                // 0x40567c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4055be
            *v83 = 0;
            // 0x40537e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40559e
        if (v93 != 0) {
            // 0x405630
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4055be
            *v83 = 0;
            // 0x40537e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4055b1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4055be
            *v83 = 0;
            // 0x40537e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4056fa
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4056aa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4056b1
        // 0x4055be
        *v83 = 0;
        // 0x40537e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405509
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40550b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405730
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4056e1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4056e8
            // 0x40537e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405516
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40551a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405535;
  lab_0x405446:
    // 0x405446
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405284;
  lab_0x405535:;
    int64_t v99 = function_404b80(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405553
    // 0x40537e
    return v99 & 0xffffffff;
  lab_0x4053d6:;
    int32_t v100 = v55; // 0x4053d6
    if (v100 != (int32_t)v59) {
        // 0x4053da
        *(int32_t *)a7 = v100;
    }
    // 0x40537e
    return 0xffffffff;
  lab_0x40539a:
    // 0x40539a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4053a1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40537e
    return v99 & 0xffffffff;
  lab_0x4054e0:
    // 0x4054e0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405315;
  lab_0x405494:
    // 0x405494
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404b80(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x4054ba
    if ((int32_t)v101 != -1) {
        // 0x40537e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4054cf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4054e0;
}
// Address range: 0x405770 - 0x4057c6
int64_t function_405770(int64_t a1) {
    // 0x405770
    *(int32_t *)&g43 = g28;
    *(int32_t *)&g44 = g27;
    int64_t v1; // 0x405770
    int64_t result = function_4051a0(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x405796
    g28 = *(int32_t *)&g43;
    g48 = g46;
    *(int32_t *)&g26 = g45;
    return result;
}
// Address range: 0x4057d0 - 0x4057e8
int64_t function_4057d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4057d0
    return function_405770(1);
}
// Address range: 0x4057f0 - 0x405803
int64_t function_4057f0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x4057f0
    return function_405770(0);
}
// Address range: 0x405810 - 0x405825
int64_t function_405810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405810
    return function_4051a0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405830 - 0x405846
int64_t function_405830(void) {
    // 0x405830
    return function_405770(0);
}
// Address range: 0x405850 - 0x405868
int64_t function_405850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405850
    return function_4051a0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405870 - 0x4058ea
int64_t function_405870(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40587b
    int64_t v2 = (int64_t)&g12; // 0x40587b
    int32_t * pwc; // 0x405870
    int64_t v3; // 0x405870
    int64_t n; // 0x405870
    if (a2 == 0) {
        goto lab_0x4058c2;
    } else {
        // 0x40587d
        if (a3 == 0) {
            // 0x4058a8
            return -2;
        }
        // 0x405889
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4058c2;
        } else {
            goto lab_0x405894;
        }
    }
  lab_0x4058c2:
    // 0x4058c2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405870
    pwc = (int32_t *)&v4;
    goto lab_0x405894;
  lab_0x405894:;
    char * wstr = (char *)v3; // 0x40589a
    int64_t ps; // 0x405870
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40589a
    int64_t result = v5; // 0x40589a
    if (v5 < 0xfffffffe) {
        // 0x4058a8
        return result;
    }
    int64_t result2 = result; // 0x4058d9
    if ((char)function_4059e0(0, v3) == 0) {
        // 0x4058db
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4058a8
    return result2;
}
// Address range: 0x4058f0 - 0x40594d
int64_t function_4058f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4058f7
    int64_t v2; // 0x4058f0
    int64_t result = function_405fb0(a1, v2); // 0x405908
    if ((v2 & 32) != 0) {
        // 0x405930
        if ((int32_t)result == 0) {
            // 0x405934
            *__errno_location() = 0;
        }
        // 0x40592a
        return 0xffffffff;
    }
    // 0x405911
    if ((int32_t)result == 0) {
        // 0x40592a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405918
    if (v1 == 0) {
        // 0x40591a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40592a
    return result2;
}
// Address range: 0x405950 - 0x4059ab
int64_t function_405950(int64_t a1, int64_t a2) {
    // 0x405950
    int64_t v1; // 0x405950
    char v2 = v1;
    int64_t v3 = a1; // 0x405959
    int64_t v4 = a1; // 0x405959
    char v5 = v2; // 0x405959
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x405964
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x405960
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40596e
    if (v5 == 0) {
      lab_0x4059aa:
        // 0x4059aa
        return result;
    }
    int64_t v7 = v4; // 0x405998
    int64_t v8 = 0; // 0x405998
    int64_t v9; // 0x405950
    int64_t v10; // 0x40599a
    char v11; // 0x40599e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x405995
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40599a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x405995
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40598a
    char v14 = *(char *)v13; // 0x40598e
    while (v14 != 0) {
        int64_t v15 = result2;
        v7 = v13;
        v8 = (char)v12 == 0 ? v12 : 0;
        v9 = v13;
        if (v14 == 47) {
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v15;
            if (v11 == 0) {
                return result;
            }
            // 0x405995
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40599a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x405995
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x405980
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x4059aa
    return result2;
}
// Address range: 0x4059b0 - 0x4059db
int64_t function_4059b0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4059b4
    int64_t result = len; // 0x4059b4
    if (len < 2) {
        // 0x4059ca
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x4059c8
    while (*(char *)(v1 + str) == 47) {
        // 0x4059d0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x4059ca
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x4059ca
    return result2;
}
// Address range: 0x4059e0 - 0x405a3e
int64_t function_4059e0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4059e6
    if (locale == NULL) {
        // 0x405a13
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4059e6
    bool v2; // 0x4059e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x4059e0
    int64_t v5 = v1; // 0x4059e0
    int64_t v6 = 2; // 0x405a05
    unsigned char v7 = *(char *)v5; // 0x405a05
    char v8 = *(char *)v4; // 0x405a05
    char v9 = v8; // 0x405a05
    bool v10 = false; // 0x405a05
    while (v7 == v8) {
        // 0x4059f8
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)"POSIX"; // 0x405a11
    int64_t v13 = v1; // 0x405a11
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405a13
        return 0;
    }
    int64_t v14 = 6; // 0x405a11
    unsigned char v15 = *(char *)v13; // 0x405a2d
    char v16 = *(char *)v12; // 0x405a2d
    char v17 = v16; // 0x405a2d
    bool v18 = false; // 0x405a2d
    while (v15 == v16) {
        // 0x405a20
        v14--;
        v12 += v3;
        v13 += v3;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    return !((v15 < v19 | v18)) != v15 < v19;
}
// Address range: 0x405a40 - 0x405fa2
int64_t function_405a40(void) {
    char * v1 = nl_langinfo(14); // 0x405a56
    char * v2 = g47; // 0x405a5b
    char * v3; // 0x405a40
    int64_t v4; // 0x405a40
    int64_t v5; // 0x405a40
    int64_t v6; // 0x405a40
    int64_t v7; // 0x405a40
    int32_t size; // 0x405a40
    int32_t size2; // 0x405a40
    int32_t len; // 0x405b12
    int64_t v8; // 0x405b12
    char * env_val; // 0x405afd
    if (v2 == NULL) {
        // 0x405af8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405b65;
        } else {
            // 0x405b0a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405b65;
            } else {
                // 0x405b0f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405afd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405f95
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405b65;
                    } else {
                        // 0x405f09
                        size2 = len + 14;
                        goto lab_0x405b2b;
                    }
                } else {
                    goto lab_0x405b2b;
                }
            }
        }
    } else {
        // 0x405a40
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405a7a;
    }
  lab_0x405dac:;
    // 0x405dac
    struct _IO_FILE * stream; // 0x405beb
    int32_t v10 = __uflow(stream); // 0x405daf
    int64_t v11; // 0x405a40
    int64_t v12 = v11; // 0x405db9
    int64_t v13; // 0x405a40
    int64_t v14 = v13; // 0x405db9
    int32_t v15 = v10; // 0x405db9
    int64_t v16; // 0x405a40
    int64_t v17 = v16; // 0x405db9
    int64_t v18 = v11; // 0x405db9
    int64_t v19 = v13; // 0x405db9
    int64_t v20 = v16; // 0x405db9
    if (v10 == -1) {
        // break -> 0x405dbf
        goto lab_0x405dbf;
    }
    goto lab_0x405c39;
  lab_0x405c2e:;
    // 0x405c2e
    int64_t v90; // 0x405a40
    int64_t * v32; // 0x405c20
    *v32 = v90 + 1;
    int64_t v89; // 0x405a40
    v12 = v89;
    int64_t v91; // 0x405a40
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405a40
    v17 = v92;
    goto lab_0x405c39;
  lab_0x405c39:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405a40
    int32_t v25; // bp-120, 0x405a40
    int32_t v26; // bp-184, 0x405a40
    int64_t v27; // 0x405beb
    int64_t v28; // 0x405c08
    int64_t v29; // 0x405c0d
    int64_t * v30; // 0x405c24
    switch (c) {
        case 32: {
            goto lab_0x405c20;
        }
        case 10: {
            goto lab_0x405c20;
        }
        case 9: {
            goto lab_0x405c20;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405e11
            int32_t v33; // 0x405a40
            char v34; // 0x405a40
            int32_t v35; // 0x405e1e
            if (v31 < *v30) {
                // 0x405df0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x405e1b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405e11
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405df0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x405e1b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405e00
                v36 = v33;
            }
            // 0x405eef
            if (v36 == -1) {
                // break -> 0x405dbf
                break;
            }
            goto lab_0x405c20;
        }
        default: {
            // 0x405c4f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x405dbf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405c78
            int64_t v39 = v37 + 4; // 0x405c7a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405c86
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405c88
            while (v41 == 0) {
                // 0x405c78
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405ca6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405cb2
            int64_t v45 = v43 + 4; // 0x405cb4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405cc0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405cc2
            while (v47 == 0) {
                // 0x405cb2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405caf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405cd8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405ce8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x405cec
            int64_t v52 = v51 + v48; // 0x405cf5
            int64_t * mem; // 0x405a40
            int64_t v53; // 0x405a40
            int64_t v54; // 0x405a40
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x405e2b
                int64_t v56 = v55 + 3; // 0x405e37
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405d11
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405d20
            if (mem == NULL) {
                // 0x405f4c
                free((int64_t *)v21);
                function_405fb0(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405bc4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405d38
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405d42
            uint32_t v62 = (int32_t)v59; // 0x405d45
            int64_t v63; // 0x405a40
            if (v62 >= 8) {
                // 0x405e54
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405e6e
                int64_t v66 = v61 - v65; // 0x405e72
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405e7d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405e8e
                    int64_t v70 = v69 & 0xffffffff; // 0x405e8e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405e8b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405f1f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405d57
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x405d5b
                        *(char *)v61 = (char)v26;
                        v63 = v61;
                        if ((v59 & 2) != 0) {
                            int64_t v72 = (v59 & 0xffffffff) - 2;
                            *(int16_t *)(v61 + v72) = *(int16_t *)(v72 + v29);
                            v63 = v61;
                        }
                    }
                }
            }
            int64_t v73 = v51 + 1; // 0x405d6b
            int64_t v74 = v60 - 1; // 0x405d6f
            uint32_t v75 = (int32_t)v73; // 0x405d74
            int64_t v76; // 0x405a40
            if (v75 >= 8) {
                // 0x405ea2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405eac
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405ebc
                int64_t v80 = v74 - v79; // 0x405ec0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405ecb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405edb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405ed9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405f36
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405f3e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405d86
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x405d8a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405f83
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x405d9e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405c2e;
            } else {
                goto lab_0x405dac;
            }
        }
    }
  lab_0x405c20:;
    int64_t v93 = v23; // 0x405a40
    int64_t v94 = v22; // 0x405a40
    int64_t v95 = v21; // 0x405a40
    goto lab_0x405c20_2;
  lab_0x405b65:;
    int64_t * mem3 = malloc(size); // 0x405b65
    int64_t v97 = (int64_t)&g12; // 0x405b70
    int64_t v98; // 0x405a40
    int64_t path; // 0x405a40
    if (mem3 == NULL) {
        goto lab_0x405b42;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405b65
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405b86;
    }
  lab_0x405a7a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x405a6d
    char v100 = *v3; // 0x405a7a
    int64_t v101; // 0x405a40
    if (v100 == 0) {
        // 0x405ad4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405a40
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405a40
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405ac0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405ac7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405a90
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405a9d
        char v107 = *(char *)v106; // 0x405aa2
        v102 = v107;
        if (v107 == 0) {
            // 0x405ad4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405aab
    v104 = v103 + 1;
  lab_0x405ac7:
    // 0x405ad4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405b42:;
    char * v108 = (char *)v97;
    g47 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405a7a;
  lab_0x405b86:;
    int64_t v109 = v98 + path; // 0x405b86
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405bb2
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405be1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405f12
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405c05
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405c20_2:;
                uint64_t v96 = *v32; // 0x405c20
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x405dac;
                } else {
                    goto lab_0x405c2e;
                }
            }
          lab_0x405dbf:
            // 0x405dbf
            function_405fb0(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x405dde
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405bc4;
  lab_0x405b2b:;
    int64_t * mem4 = malloc(size2); // 0x405b2b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405bd1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405b86;
    } else {
        goto lab_0x405b42;
    }
  lab_0x405bc4:
    // 0x405bc4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405b42;
}
// Address range: 0x405fb0 - 0x40602b
int64_t function_405fb0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405fb7
    if (fileno(stream) < 0) {
        // 0x406017
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405fca
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405ffb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406017
            return fclose(stream);
        }
    }
    // 0x405fcc
    if ((int32_t)function_406030(a1, v1) == 0) {
        // 0x406017
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405fd8
    int32_t v3 = *v2; // 0x405fe0
    int64_t result = fclose(stream); // 0x405fee
    if (v3 != 0) {
        // 0x406020
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405ff0
    return result;
}
// Address range: 0x406030 - 0x406070
int64_t function_406030(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40604a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40604a
        return fflush(stream);
    }
    // 0x406058
    function_406070(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406070 - 0x4060c7
int64_t function_406070(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406070
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40607a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4060ab
    int64_t result = -1; // 0x4060b4
    if (v1 != -1) {
        // 0x4060b6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4060c2
    return result;
}
// Address range: 0x4060d0 - 0x40612d
int64_t function_4060d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4060d0
    return function_401398();
}
// Address range: 0x406130 - 0x406131
int64_t function_406130(void) {
    // 0x406130
    int64_t result; // 0x406130
    return result;
}
// Address range: 0x406140 - 0x406158
int64_t function_406140(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406140
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x406158 - 0x406178
int64_t function_406158(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x406162
    while (*(int64_t *)v1 != -1) {
        // 0x406163
        v1 -= 8;
    }
    // 0x406174
    return result;
}
