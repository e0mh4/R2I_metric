#include "decompile_retdec.h"
// Address range: 0x401970 - 0x401975
int64_t function_401970(void) {
    // 0x401970
    abort();
    // UNREACHABLE
}
// Address range: 0x401975 - 0x40197a
int64_t function_401975(void) {
    // 0x401975
    abort();
    // UNREACHABLE
}
// Address range: 0x40197a - 0x40197f
int64_t function_40197a(void) {
    // 0x40197a
    abort();
    // UNREACHABLE
}
// Address range: 0x40197f - 0x401984
int64_t function_40197f(void) {
    // 0x40197f
    abort();
    // UNREACHABLE
}
// Address range: 0x401984 - 0x401989
int64_t function_401984(void) {
    // 0x401984
    abort();
    // UNREACHABLE
}
// Address range: 0x401989 - 0x40198e
int64_t function_401989(void) {
    // 0x401989
    abort();
    // UNREACHABLE
}
// Address range: 0x401990 - 0x401b4a
int64_t function_401990(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 & 0xffffffff; // 0x401996
    function_4030b0(a2);
    setlocale(LC_ALL, (char *)&g14);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_407360(0x402380, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    setvbuf(g33, (char *)((int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale" ^ (int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"), 1, 0);
    g39 = 0;
    int64_t v2; // 0x401990
    int64_t v3; // 0x401990
    int64_t v4; // 0x401990
    int64_t v5; // 0x401aeb
    int64_t v6; // 0x401990
    int64_t v7; // 0x401b16
    int64_t v8; // 0x401a13
    int32_t v9; // 0x401a9e
    int64_t v10; // 0x401a9e
    while (true) {
        // 0x401a00
        int64_t v11; // 0x401990
        v8 = function_406830(v1, a2, "rs", &g2, 0, v11);
        uint32_t v12 = (int32_t)v8;
        switch (v12) {
            case -1: {
                // 0x401a9b
                v9 = (int32_t)a1 - g30;
                v10 = v9;
                if (v9 >= 0 == (v9 != 0)) {
                    // 0x401aeb
                    v5 = g30;
                    v4 = a2;
                    v2 = 1;
                    if (v1 > v5) {
                        // 0x401ad7
                        v6 = 1 & v5;
                        v3 = v6;
                        while (v1 > (int64_t)(int32_t)&g31) {
                            // 0x401ad7
                            v6 = v3 & (int64_t)(int32_t)&g31;
                            v3 = v6;
                        }
                        // 0x401aeb
                        g30 = &g31;
                        v4 = v10;
                        v2 = v6;
                    }
                } else {
                    // 0x401ab0
                    v4 = v10;
                    v2 = v8 & 0xffffffff;
                }
                // 0x401abd
                if (g39 == 0 || (int32_t)function_4059c0((int64_t)g34, v4) != -1) {
                    // 0x401ac6
                    return v2 % 256 ^ 1;
                }
                // 0x401b0a
                v7 = function_404b50(0, 3, (int64_t *)&g13);
                error(1, *__errno_location(), "%s", (char *)v7);
              lab_0x401b39:
                // 0x401b39
                function_402020(1);
                // UNREACHABLE
            }
            case -130: {
                // 0x401b43
                function_402020(0);
                // UNREACHABLE
            }
        }
        if (v12 <= 0xffffff7e) {
            if (v12 == -131) {
                // 0x401a4b
                function_4051b0((int64_t)g33, "sum", "GNU coreutils", (int64_t)g21, "Kayvan Aghaiepour", "David MacKenzie");
                exit(0);
                // UNREACHABLE
            }
            goto lab_0x401b39;
        }
        if ((v12 || 1) != 115) {
            // 0x401b39
            function_402020(1);
            // UNREACHABLE
        }
    }
    // 0x401a9b
    v9 = (int32_t)a1 - g30;
    v10 = v9;
    if (v9 >= 0 == (v9 != 0)) {
        // 0x401aeb
        v5 = g30;
        v4 = a2;
        v2 = 1;
        if (v1 > v5) {
            // 0x401ad7
            v6 = 1 & v5;
            v3 = v6;
            while (v1 > (int64_t)(int32_t)&g31) {
                // 0x401ad7
                v6 = v3 & (int64_t)(int32_t)&g31;
                v3 = v6;
            }
            // 0x401aeb
            g30 = &g31;
            v4 = v10;
            v2 = v6;
        }
    } else {
        // 0x401ab0
        v4 = v10;
        v2 = v8 & 0xffffffff;
    }
    // 0x401abd
    if (g39 == 0 || (int32_t)function_4059c0((int64_t)g34, v4) != -1) {
        // 0x401ac6
        return v2 % 256 ^ 1;
    }
    // 0x401b0a
    v7 = function_404b50(0, 3, (int64_t *)&g13);
    error(1, *__errno_location(), "%s", (char *)v7);
  lab_0x401b39:
    // 0x401b39
    function_402020(1);
    // UNREACHABLE
}
// Address range: 0x401b50 - 0x401b7b
// Address range: 0x401b7b - 0x401b9a
int64_t function_401b7b(void) {
    // 0x401b7b
    return 0x60b288;
}
// Address range: 0x401b9a - 0x401bd1
int64_t function_401b9a(void) {
    // 0x401b9a
    return 0;
}
// Address range: 0x401bd1 - 0x401c28
int64_t function_401bd1(void) {
    // 0x401bd1
    if (g37 != 0) {
        // 0x401c27
        int64_t result; // 0x401bd1
        return result;
    }
    int64_t v1 = g38; // 0x401c04
    int64_t result2; // 0x401c16
    if (g38 >= ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x401c16
        result2 = function_401b7b();
        g37 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x401c06
        v1++;
    }
    // 0x401bfa
    g38 = v1;
    // 0x401c16
    result2 = function_401b7b();
    g37 = 1;
    return result2;
}
// Address range: 0x401c28 - 0x401c2d
int64_t function_401c28(void) {
    // 0x401c28
    return function_401b9a();
}
// Address range: 0x401c30 - 0x401e0e
int64_t function_401c30(int64_t path, int64_t a2) {
    // 0x401c30
    bool v1; // 0x401c30
    int64_t v2 = v1 ? -1 : 1; // 0x401c54
    int64_t v3 = (int64_t)&g13; // 0x401c30
    int64_t v4 = path; // 0x401c30
    int64_t v5 = 2; // 0x401c54
    unsigned char v6 = *(char *)v4; // 0x401c54
    char v7 = *(char *)v3; // 0x401c54
    char v8 = v7; // 0x401c54
    bool v9 = false; // 0x401c54
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t fd2; // 0x401c30
    if ((v6 >= v10 && !v9) != v6 < v10) {
        uint32_t fd = open((char *)path, O_RDONLY); // 0x401da0
        fd2 = fd;
        if (fd != -1) {
            goto lab_0x401c74;
        } else {
            goto lab_0x401db0;
        }
    } else {
        // 0x401c6b
        g39 = 1;
        fd2 = 0;
        goto lab_0x401c74;
    }
  lab_0x401c74:;
    // 0x401c74
    int64_t v11; // bp-8248, 0x401c30
    int64_t v12 = &v11;
    int64_t v13 = 0; // 0x401c79
    int64_t v14 = 0; // 0x401c79
    int64_t v15; // 0x401c30
    int64_t v16; // 0x401c30
    while (true) {
      lab_0x401c80:
        // 0x401c80
        v16 = v14;
        v15 = v13;
        int64_t v17 = function_404cf0(fd2, &v11, 0x2000); // 0x401c8f
        switch (v17) {
            case 0: {
                goto lab_0x401cc4;
            }
            case -1: {
                // 0x401d5f
                error(0, *__errno_location(), "%s", (char *)function_404b50(0, 3, (int64_t *)path));
                if ((v6 >= v10 && !v9) != v6 < v10) {
                    // 0x401d90
                    close((int32_t)fd2);
                }
                // 0x401d4b
                return 0;
            }
            default: {
                int64_t v18 = v12 + 1; // 0x401cb3
                int64_t v19 = v15 + (int64_t)*(char *)v12 & 0xffffffff; // 0x401cb7
                int64_t v20 = v19; // 0x401cbd
                while (v18 != v17 + v12) {
                    int64_t v21 = v18;
                    v18 = v21 + 1;
                    v19 = v20 + (int64_t)*(char *)v21 & 0xffffffff;
                    v20 = v19;
                }
                // 0x401cbf
                v13 = v19;
                v14 = v17 + v16;
                goto lab_0x401c80;
            }
        }
    }
  lab_0x401cc4:
    if ((v6 >= v10 && !v9) == v6 < v10) {
        goto lab_0x401cd8;
    } else {
        // 0x401cc9
        if (close((int32_t)fd2) != 0) {
            goto lab_0x401db0;
        } else {
            goto lab_0x401cd8;
        }
    }
  lab_0x401db0:
    // 0x401db0
    error(0, *__errno_location(), "%s", (char *)function_404b50(0, 3, (int64_t *)path));
    // 0x401d4b
    return 0;
  lab_0x401cd8:;
    uint32_t v22 = (int32_t)v15; // 0x401cd8
    uint32_t v23 = v22 / 0x10000 + v22 % 0x10000; // 0x401ce7
    int64_t v24; // bp-8904, 0x401c30
    int64_t v25; // 0x401c30
    int64_t v26 = function_402520(v16, &v24, 0, 1, 512, v25); // 0x401d01
    __printf_chk(1, "%d %s", (int64_t)(v23 / 0x10000 + v23 % 0x10000), (char *)v26);
    if ((int32_t)a2 != 0) {
        // 0x401de1
        __printf_chk(1, " %s", (char *)path);
    }
    int64_t v27 = (int64_t)g33; // 0x401d26
    int64_t * v28 = (int64_t *)(v27 + 40); // 0x401d2d
    uint64_t v29 = *v28; // 0x401d2d
    if (v29 >= *(int64_t *)(v27 + 48)) {
        // 0x401dfa
        __overflow(g33, 10);
    } else {
        // 0x401d3b
        *v28 = v29 + 1;
        *(char *)v29 = 10;
    }
    // 0x401d4b
    return 1;
}
// Address range: 0x401e10 - 0x402012
int64_t function_401e10(int64_t file_path, int64_t a2) {
    // 0x401e10
    bool v1; // 0x401e10
    int64_t v2 = v1 ? -1 : 1; // 0x401e34
    int64_t v3 = (int64_t)&g13; // 0x401e10
    int64_t v4 = file_path; // 0x401e10
    int64_t v5 = 2; // 0x401e34
    unsigned char v6 = *(char *)v4; // 0x401e34
    char v7 = *(char *)v3; // 0x401e34
    char v8 = v7; // 0x401e34
    bool v9 = false; // 0x401e34
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    struct _IO_FILE * v11; // 0x401e10
    if ((v6 >= v10 && !v9) != v6 < v10) {
        struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x401f68
        v11 = file;
        if (file != NULL) {
            goto lab_0x401e58;
        } else {
            goto lab_0x401f79;
        }
    } else {
        // 0x401e4a
        g39 = 1;
        v11 = g34;
        goto lab_0x401e58;
    }
  lab_0x401e58:;
    int64_t v12 = (int64_t)v11;
    int64_t v13; // 0x401e10
    function_402430(v12, 2, v13);
    int64_t * v14 = (int64_t *)(v12 + 16); // 0x401e6a
    int64_t * v15 = (int64_t *)(v12 + 8); // 0x401e6e
    int64_t v16 = *v15; // 0x401e72
    int64_t v17 = 0; // 0x401e72
    int64_t v18 = *v14; // 0x401e72
    int64_t v19 = 0; // 0x401e72
    int64_t v20; // 0x401e10
    int64_t v21; // 0x401e10
    int64_t v22; // 0x401e10
    while (true) {
        // 0x401e9b
        v20 = v19;
        v22 = v18;
        v21 = v17;
        uint64_t v23 = v16;
        int32_t v24; // 0x401e10
        int64_t v25; // 0x401e10
        int64_t v26; // 0x401e10
        if (v22 > v23) {
            int64_t v27 = v23 + 1; // 0x401e78
            *v15 = v27;
            v24 = (int32_t)*(char *)v23;
            v25 = v27;
            v26 = v22;
        } else {
            int32_t v28 = __uflow(v11); // 0x401ea3
            if (v28 == -1) {
                // break -> 0x401eb1
                break;
            }
            // 0x402005
            v24 = v28;
            v25 = *v15;
            v26 = *v14;
        }
        uint32_t v29 = (int32_t)v21; // 0x401e83
        v16 = v25;
        v17 = (0x8000 * v29 + v29 / 2 + v24) % 0x10000;
        v18 = v26;
        v19 = v20 + 1;
    }
    // 0x401eb1
    if ((*(char *)v11 & 32) != 0) {
        int64_t v30 = function_404b50(0, 3, (int64_t *)file_path); // 0x401fba
        uint32_t err_num = *__errno_location(); // 0x401fd1
        error(0, err_num, "%s", (char *)v30);
        if ((v6 >= v10 && !v9) != v6 < v10) {
            // 0x401fe4
            function_4059c0(v12, (int64_t)err_num);
        }
        // 0x401f28
        return 0;
    }
    if ((v6 >= v10 && !v9) == v6 < v10) {
        goto lab_0x401ecf;
    } else {
        // 0x401ebf
        if ((int32_t)function_4059c0(v12, v22) != 0) {
            goto lab_0x401f79;
        } else {
            goto lab_0x401ecf;
        }
    }
  lab_0x401f79:
    // 0x401f79
    error(0, *__errno_location(), "%s", (char *)function_404b50(0, 3, (int64_t *)file_path));
    // 0x401f28
    return 0;
  lab_0x401ecf:;
    // 0x401ecf
    int64_t v31; // bp-712, 0x401e10
    int64_t v32 = function_402520(v20, &v31, 0, 1, 1024, v13); // 0x401ee2
    __printf_chk(1, "%05d %5s", v21, (char *)v32);
    if ((int32_t)a2 > 1) {
        // 0x401f40
        __printf_chk(1, " %s", (char *)file_path);
    }
    int64_t v33 = (int64_t)g33; // 0x401f03
    int64_t * v34 = (int64_t *)(v33 + 40); // 0x401f0a
    uint64_t v35 = *v34; // 0x401f0a
    if (v35 >= *(int64_t *)(v33 + 48)) {
        // 0x401ff1
        __overflow(g33, 10);
    } else {
        // 0x401f18
        *v34 = v35 + 1;
        *(char *)v35 = 10;
    }
    // 0x401f28
    return 1;
}
// Address range: 0x402020 - 0x402355
int64_t function_402020(int64_t a1) {
    int32_t status = a1; // 0x402036
    if (status != 0) {
        // 0x40203a
        __fprintf_chk(g36, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40205f
        exit(status);
        // UNREACHABLE
    }
    // 0x402066
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print checksum and block counts for each FILE.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\n  -r              use BSD sum algorithm, use 1K blocks\n  -s, --sysv      use System V sum algorithm, use 512 bytes blocks\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g33);
    int64_t v1 = &g1; // bp-136, 0x402133
    bool v2; // 0x402020
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4021b8
    int64_t v6 = *(int64_t *)v5; // 0x4021bc
    int64_t v7 = 4; // 0x4021c2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"sum";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4021ce
        char v11 = *(char *)v9; // 0x4021ce
        char v12 = v11; // 0x4021ce
        bool v13 = false; // 0x4021ce
        while (v10 == v11) {
            // 0x4021c4
            v7--;
            int64_t v14 = v9 + v3; // 0x4021ce
            int64_t v15 = v8 + v3; // 0x4021ce
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
            // break -> 0x4021da
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x4021da
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4022ec;
        } else {
            // 0x4022d6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40232b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40223c;
            } else {
                goto lab_0x4022ec;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40223c;
        } else {
            // 0x402222
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40232b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40223c;
            } else {
                goto lab_0x40223c;
            }
        }
    }
  lab_0x4022ec:
    // 0x4022ec
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40227c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40205f
    exit(status);
    // UNREACHABLE
  lab_0x40223c:
    // 0x40223c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40227c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40205f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402360 - 0x402368
int64_t function_402360(int64_t a1) {
    // 0x402360
    g41 = a1;
    int64_t result; // 0x402360
    return result;
}
// Address range: 0x402370 - 0x402378
int64_t function_402370(int64_t a1) {
    // 0x402370
    g40 = a1;
    int64_t result; // 0x402370
    return result;
}
// Address range: 0x402380 - 0x40241e
int64_t function_402380(void) {
    // 0x402380
    int32_t * err_num; // 0x402396
    if ((int32_t)function_406cc0((int64_t)g33) == 0) {
        goto lab_0x4023ac;
    } else {
        // 0x402396
        err_num = __errno_location();
        if (g40 == 0) {
            goto lab_0x4023c3;
        } else {
            // 0x4023a7
            if (*err_num != 32) {
                goto lab_0x4023c3;
            } else {
                goto lab_0x4023ac;
            }
        }
    }
  lab_0x4023ac:;
    int64_t result = function_406cc0((int64_t)g36); // 0x4023b3
    if ((int32_t)result == 0) {
        // 0x4023bc
        return result;
    }
    // 0x4023fe
    _exit(g22);
    // UNREACHABLE
  lab_0x4023c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4023cf
    if (g41 == 0) {
        // 0x402409
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4023e3
        error(0, *err_num, "%s: %s", (char *)function_404b20((int64_t)g41), v1);
    }
    // 0x4023fe
    _exit(g22);
    // UNREACHABLE
}
// Address range: 0x402420 - 0x402425
int64_t function_402420(void) {
    // 0x402420
    int64_t fd; // 0x402420
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402430 - 0x402451
int64_t function_402430(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402430
    if (stream == 0) {
        // 0x402450
        int64_t result; // 0x402430
        return result;
    }
    // 0x402435
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402460 - 0x402517
int64_t function_402460(int32_t a1, float80_t a2) {
    // 0x402460
    int3_t v1; // 0x402460
    int3_t v2 = v1 - 1; // 0x402460
    __frontend_reg_store_fpr(v2, 9223372036854775808.0L);
    int3_t v3 = v1 - 2;
    __frontend_reg_store_fpr(v3, a2);
    float80_t v4 = __frontend_reg_load_fpr(v3); // 0x40246a
    float80_t v5 = __frontend_reg_load_fpr(v2); // 0x40246a
    int64_t result; // 0x402460
    if (v4 > v5 || v4 == v5) {
        // 0x4024e0
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3) - __frontend_reg_load_fpr(v2));
        float80_t v6 = __frontend_reg_load_fpr(v3); // 0x4024e6
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        __frontend_reg_store_fpr(v2, v6);
        result = (int64_t)__frontend_reg_load_fpr(v3) ^ -0x8000000000000000;
    } else {
        // 0x40246e
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3));
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        result = __frontend_reg_load_fpr(v3);
    }
    // 0x402494
    __frontend_reg_store_fpr(v3, (float80_t)result);
    if (result < 0) {
        // 0x4024a2
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v3) + 18446744073709551616.0L);
    }
    int3_t v7 = v3;
    if (a1 != 0) {
        // 0x4024d8
        __frontend_reg_store_fpr(v7 + 1, __frontend_reg_load_fpr(v7));
        // 0x4024da
        return result;
    }
    int3_t v8 = v7 + 1; // 0x4024ac
    float80_t v9 = __frontend_reg_load_fpr(v7); // 0x4024ac
    __frontend_reg_store_fpr(v7, __frontend_reg_load_fpr(v8));
    __frontend_reg_store_fpr(v8, v9);
    float80_t v10 = __frontend_reg_load_fpr(v7); // 0x4024ae
    float80_t v11 = __frontend_reg_load_fpr(v8); // 0x4024ae
    if (v10 != v11 == v10 == v11) {
        // 0x4024b8
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    } else {
        // 0x4024b2
        if (v10 == v11) {
            // 0x4024da
            return result;
        }
        // 0x4024b4
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    }
    int64_t result2 = result + 1; // 0x4024c0
    __frontend_reg_store_fpr(v8, (float80_t)result2);
    if (result2 >= 0) {
        // 0x4024da
        return result2;
    }
    // 0x402510
    __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8) + 18446744073709551616.0L);
    return result2;
}
// Address range: 0x402520 - 0x402eee
int64_t function_402520(int64_t a1, int64_t * str3, uint32_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)str3;
    int32_t v2 = a3 & 32; // 0x402526
    uint32_t v3 = a3 % 4; // 0x402530
    int64_t v4; // bp-168, 0x402520
    int64_t v5 = &v4; // 0x402540
    uint32_t v6 = (v2 | 1024) - (v2 | (int32_t)(v2 == 0)) & 2024; // 0x402555
    struct lconv * locale_info = localeconv(); // 0x40256b
    int64_t str = *(int64_t *)locale_info; // 0x402570
    int64_t len = strlen((char *)str); // 0x402579
    int64_t v7 = len >= 17 ? (int64_t)&g3 : str; // 0x402593
    int64_t str2 = *(int64_t *)((int64_t)locale_info + 8); // 0x40259c
    int64_t v8 = len >= 17 ? 1 : len; // 0x4025a1
    uint32_t len2 = strlen((char *)str2); // 0x4025b2
    int64_t v9 = v1 + 647; // 0x4025c9
    v4 = v9;
    int64_t v10; // 0x402520
    int64_t v11; // 0x402520
    int64_t v12; // 0x402520
    int64_t v13; // 0x402520
    int64_t v14; // 0x402520
    int64_t v15; // 0x402520
    int64_t v16; // 0x402520
    int64_t v17; // 0x402520
    int64_t v18; // 0x402520
    if (a5 > a4) {
        if (a4 == 0) {
            goto lab_0x402605;
        } else {
            if (a5 % a4 != 0) {
                goto lab_0x402605;
            } else {
                uint64_t v19 = a5 / a4; // 0x402870
                int64_t v20 = a1 / v19; // 0x402884
                uint64_t v21 = 10 * (a1 % v19); // 0x402890
                uint64_t v22 = 2 * (v21 % v19); // 0x402899
                int64_t v23 = v21 / v19 & 0xffffffff; // 0x40289c
                int64_t v24 = v19 > v22 ? (int64_t)(v22 != 0) : v19 < v22 ? 3 : 2;
                uint32_t v25 = a3 & 16; // 0x4028b5
                v13 = v25;
                v17 = v20;
                v15 = v24;
                v10 = v23;
                v14 = 0;
                v12 = 0xffffffff;
                v18 = v20;
                v16 = v24;
                v11 = v23;
                if (v25 == 0) {
                    goto lab_0x4028d1;
                } else {
                    goto lab_0x4028be;
                }
            }
        }
    } else {
        if (a4 % a5 != 0) {
            goto lab_0x402605;
        } else {
            uint64_t v26 = a4 / a5; // 0x4025e2
            int64_t v27 = v26 * a1; // 0x4025f2
            if (v27 / v26 == a1) {
                uint32_t v28 = a3 & 16; // 0x402b71
                int64_t v29 = v28; // 0x402b71
                v13 = v29;
                v17 = v27;
                v15 = 0;
                v10 = 0;
                v14 = v29;
                v12 = 0xffffffff;
                v18 = v27;
                v16 = 0;
                v11 = 0;
                if (v28 != 0) {
                    goto lab_0x4028be;
                } else {
                    goto lab_0x4028d1;
                }
            } else {
                goto lab_0x402605;
            }
        }
    }
  lab_0x4028d1:;
    int64_t v30 = v14; // 0x4028da
    int64_t v31 = v12; // 0x4028da
    int64_t v32 = v18; // 0x4028da
    int64_t v33 = v16; // 0x4028da
    int64_t v34 = v11; // 0x4028da
    int64_t v35 = v9; // 0x4028da
    int64_t v36; // 0x402520
    int64_t v37; // 0x402520
    int64_t v38; // 0x402520
    int64_t v39; // 0x402520
    int64_t v40; // 0x402520
    int64_t v41; // 0x402520
    int64_t v42; // 0x402520
    if (v3 == 1) {
        // 0x402c10
        v40 = v14;
        v38 = v12;
        v41 = v18;
        v36 = v9;
        v39 = v12;
        v42 = v18;
        v37 = v9;
        if ((int32_t)(v18 % 2 != -v16) + (int32_t)v11 < 6) {
            goto lab_0x402910;
        } else {
            goto lab_0x4028f1;
        }
    } else {
        goto lab_0x4028e0;
    }
  lab_0x402605:;
    // 0x402605
    int3_t v43; // 0x402520
    int3_t v44 = v43 - 1;
    __frontend_reg_store_fpr(v44, (float80_t)a4);
    int3_t v45; // 0x402520
    int3_t v46; // 0x402520
    if (a4 < 0) {
        // 0x402850
        __frontend_reg_store_fpr(v44, __frontend_reg_load_fpr(v44) + 18446744073709551616.0L);
        v45 = v44;
    } else {
        // 0x402605
        v45 = v43 - 2;
        v46 = v44;
    }
    int3_t v47 = v46;
    __frontend_reg_store_fpr(v45, (float80_t)a5);
    float80_t v48 = __frontend_reg_load_fpr(v45);
    int3_t v49; // 0x402520
    int3_t v50; // 0x402520
    int3_t v51; // 0x402520
    int3_t v52; // 0x402520
    if (a5 < 0) {
        // 0x402830
        __frontend_reg_store_fpr(v45, v48 + 18446744073709551616.0L);
        int3_t v53 = v47 + 1;
        __frontend_reg_store_fpr(v53, __frontend_reg_load_fpr(v53) / __frontend_reg_load_fpr(v47));
        __frontend_reg_store_fpr(v47, (float80_t)a1);
        v49 = v53;
        v51 = v47;
        v50 = v53;
        v52 = v47;
        if (a1 >= 0) {
            goto lab_0x402642;
        } else {
            goto lab_0x402818;
        }
    } else {
        // 0x40262e
        __frontend_reg_store_fpr(v47, __frontend_reg_load_fpr(v47) / v48);
        __frontend_reg_store_fpr(v45, (float80_t)a1);
        int3_t v54 = v45 + 1;
        v49 = v54;
        v51 = v45;
        v50 = v54;
        v52 = v45;
        if (a1 < 0) {
            goto lab_0x402818;
        } else {
            goto lab_0x402642;
        }
    }
  lab_0x402642:;
    int3_t v55 = v49;
    float80_t v56 = __frontend_reg_load_fpr(v51); // 0x402642
    __frontend_reg_store_fpr(v55, v56 * __frontend_reg_load_fpr(v55));
    int3_t v57 = v55; // 0x402649
    int3_t v58 = v55; // 0x402649
    if ((a3 & 16) == 0) {
        goto lab_0x402760;
    } else {
        goto lab_0x40264f;
    }
  lab_0x402818:;
    int3_t v59 = v52;
    __frontend_reg_store_fpr(v59, __frontend_reg_load_fpr(v59) + 18446744073709551616.0L);
    int3_t v60 = v59 + 2; // 0x40281e
    __frontend_reg_store_fpr(v60, __frontend_reg_load_fpr(v50) * __frontend_reg_load_fpr(v60));
    v57 = v60;
    v58 = v60;
    if ((a3 & 16) != 0) {
        goto lab_0x40264f;
    } else {
        goto lab_0x402760;
    }
  lab_0x4028be:;
    int64_t v61 = v13;
    v14 = v61;
    v12 = 0;
    v18 = v17;
    v16 = v15;
    v11 = v10;
    int64_t v62; // 0x402520
    int64_t v63; // 0x402520
    int64_t v64; // 0x402520
    int64_t v65; // 0x402520
    int64_t v66; // 0x402520
    int64_t v67; // 0x402520
    int64_t v68; // 0x402af6
    int64_t v69; // 0x402ada
    if (v17 < (int64_t)v6) {
        goto lab_0x4028d1;
    } else {
        int64_t v70; // 0x402520
        int32_t v71 = v70; // 0x402af4
        int64_t v72; // 0x402520
        uint64_t v73; // 0x402520
        v68 = v72 / v73;
        int64_t v74; // 0x402520
        uint64_t v75 = 10 * (v72 % v73) + v74 & 0xffffffff; // 0x402b07
        int64_t v76 = v75 / v73; // 0x402b07
        uint32_t v77 = 2 * (int32_t)(v75 % v73) + (v71 >> 1); // 0x402b09
        uint32_t v78 = v77 + v71; // 0x402b12
        int64_t v79 = v77 < v6 ? (int64_t)(v78 != 0) : v6 < v78 ? 3 : 2;
        int64_t v80; // 0x402520
        v69 = v80 + 1 & 0xffffffff;
        while (v68 >= v73) {
            // 0x402ae6
            v14 = v61;
            v12 = v69;
            v18 = v68;
            v16 = v79;
            v11 = v76;
            v80 = v69;
            v72 = v68;
            v70 = v79;
            v74 = v76;
            int64_t v81; // 0x402ada
            if ((int32_t)v81 == 8) {
                goto lab_0x4028d1;
            }
            int64_t v82 = v74;
            int64_t v83 = v70;
            uint64_t v84 = v72;
            int64_t v85 = v80;
            v71 = v83;
            v68 = v84 / v73;
            v75 = 10 * (v84 % v73) + v82 & 0xffffffff;
            v76 = v75 / v73;
            v77 = 2 * (int32_t)(v75 % v73) + (v71 >> 1);
            v78 = v77 + v71;
            int64_t v86 = v6 < v78 ? 3 : 2;
            v79 = v77 < v6 ? (int64_t)(v78 != 0) : v86;
            v81 = v85 + 1;
            v69 = v81 & 0xffffffff;
        }
        // 0x402cc0
        v14 = v61;
        v12 = v69;
        v18 = v68;
        v16 = v79;
        v11 = v76;
        if (v68 < 10) {
            bool v87; // 0x402520
            if (v3 == 1) {
                int32_t v88 = (int32_t)(v79 + v76 % 2) - 2; // 0x402d97
                v87 = v88 >= 0 == (v88 != 0);
            } else {
                // 0x402cd5
                v87 = v3 == 0 == (v79 != 0);
            }
            // 0x402ce7
            if (v87) {
                int64_t v89 = v76 + 1; // 0x402d80
                v63 = v89 & 0xffffffff;
                if ((int32_t)v89 == 10) {
                    // 0x402df3
                    v67 = v68 + 1;
                    v64 = 0;
                    v66 = 10;
                    v65 = 0;
                    v62 = v9;
                    if (v68 == 9) {
                        goto lab_0x402d40;
                    } else {
                        goto lab_0x402cf7;
                    }
                } else {
                    goto lab_0x402d88;
                }
            } else {
                // 0x402cef
                v67 = v68;
                v64 = v79;
                v63 = v76;
                if (v75 >= v73) {
                    goto lab_0x402d88;
                } else {
                    goto lab_0x402cf7;
                }
            }
        } else {
            goto lab_0x4028d1;
        }
    }
  lab_0x402760:;
    int3_t v90 = v58; // 0x402767
    if (v3 != 1) {
        int3_t v91 = v58 - 1; // 0x402769
        __frontend_reg_store_fpr(v91, 1.84467e+19L);
        float80_t v92 = __frontend_reg_load_fpr(v91); // 0x40276f
        float80_t v93 = __frontend_reg_load_fpr(v58); // 0x40276f
        v90 = v58;
        if (v92 > v93) {
            // 0x402b30
            function_402460(v3, __frontend_reg_load_fpr(v58));
            v90 = v58 + 1;
        }
    }
    // 0x402777
    __frontend_reg_load_fpr(v90);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len3 = strlen((char *)str3); // 0x4027a6
    int64_t v94 = len3; // 0x4027ad
    int64_t v95 = 0xffffffff; // 0x4027ad
    int64_t v96 = len3; // 0x4027ad
    goto lab_0x4027b0;
  lab_0x40264f:;
    int3_t v179 = v57;
    int3_t v178 = v179 - 1; // 0x40264f
    __frontend_reg_store_fpr(v178, (float80_t)v6);
    int3_t v204 = v179 - 2; // 0x402655
    __frontend_reg_store_fpr(v204, __frontend_reg_load_fpr(v178));
    int3_t v205 = v179 - 3;
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v204));
    int64_t v206 = 1; // 0x402666
    int64_t v163 = v206 & 0xffffffff; // 0x402666
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v205) * __frontend_reg_load_fpr(v178));
    float80_t v207 = __frontend_reg_load_fpr(v205); // 0x40266b
    __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v179));
    __frontend_reg_store_fpr(v179, v207);
    while (__frontend_reg_load_fpr(v205) >= __frontend_reg_load_fpr(v179)) {
        float80_t v208 = __frontend_reg_load_fpr(v205);
        if ((int32_t)v206 == 8) {
            // 0x402676
            __frontend_reg_store_fpr(v178, v208);
            __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v204));
            goto lab_0x402684;
        }
        // 0x402660
        __frontend_reg_store_fpr(v204, v208);
        float80_t v209 = __frontend_reg_load_fpr(v204); // 0x402662
        __frontend_reg_store_fpr(v204, __frontend_reg_load_fpr(v179));
        __frontend_reg_store_fpr(v179, v209);
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v204));
        v206 = v163 + 1;
        v163 = v206 & 0xffffffff;
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v205) * __frontend_reg_load_fpr(v178));
        v207 = __frontend_reg_load_fpr(v205);
        __frontend_reg_store_fpr(v205, __frontend_reg_load_fpr(v179));
        __frontend_reg_store_fpr(v179, v207);
    }
    // 0x402680
    __frontend_reg_store_fpr(v178, __frontend_reg_load_fpr(v205));
    __frontend_reg_store_fpr(v179, __frontend_reg_load_fpr(v204));
    goto lab_0x402684;
  lab_0x4028e0:;
    int64_t v210 = v35;
    int64_t v211 = v32;
    int64_t v212 = v31;
    v39 = v212;
    v42 = v211;
    v37 = v210;
    if (v3 != 0) {
        goto lab_0x402910;
    } else {
        // 0x4028ea
        v40 = v30;
        v38 = v212;
        v41 = v211;
        v36 = v210;
        v39 = v212;
        v42 = v211;
        v37 = v210;
        if ((int32_t)(v34 + v33) < 1) {
            goto lab_0x402910;
        } else {
            goto lab_0x4028f1;
        }
    }
  lab_0x4027b0:;
    int64_t v97 = *(int64_t *)(v5 + 8); // 0x4027b4
    int64_t v98 = v4 - v94; // 0x4027bc
    memmove((int64_t *)v98, (int64_t *)v97, (int32_t)v94);
    int64_t v99 = v95; // 0x4027c5
    int64_t v100 = v98 + v96; // 0x4027c5
    int64_t v101 = v98; // 0x4027c5
    goto lab_0x4027ca;
  lab_0x402684:;
    float80_t v177 = __frontend_reg_load_fpr(v178); // 0x402692
    __frontend_reg_store_fpr(v179, v177 / __frontend_reg_load_fpr(v179));
    uint64_t v180 = v8 + (v2 == 0 ? 3 : 2); // 0x402699
    int3_t v142; // 0x402520
    int3_t v172; // 0x402520
    int3_t v146; // 0x402520
    int64_t v143; // 0x402520
    int3_t v174; // 0x402520
    if (v3 == 1) {
        // 0x402bc0
        __frontend_reg_store_fpr(v178, __frontend_reg_load_fpr(v179));
        __frontend_reg_load_fpr(v178);
        float80_t v181 = __frontend_reg_load_fpr(v179); // 0x402be4
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len6 = strlen((char *)str3); // 0x402bf0
        __frontend_reg_store_fpr(v179, v181);
        v142 = v179;
        v143 = len6;
        if (v180 < len6) {
            // 0x402c00
            __frontend_reg_store_fpr(v178, 10.0L);
            float80_t v182 = __frontend_reg_load_fpr(v179); // 0x402c06
            __frontend_reg_store_fpr(v179, v182 * __frontend_reg_load_fpr(v178));
            v146 = v178;
            goto lab_0x402726;
        } else {
            goto lab_0x402b88;
        }
    } else {
        // 0x4026a7
        __frontend_reg_store_fpr(v178, 1.84467e+19L);
        float80_t v183 = __frontend_reg_load_fpr(v178); // 0x4026ad
        float80_t v184 = __frontend_reg_load_fpr(v179); // 0x4026ad
        bool v185 = false; // 0x4026ad
        bool v186 = false; // 0x4026ad
        if (v183 <= v184) {
            v185 = true;
            v186 = false;
            if (v183 >= v184) {
                v185 = v183 != v184;
                v186 = true;
            }
        }
        __frontend_reg_store_fpr(v178, __frontend_reg_load_fpr(v179));
        v172 = v178;
        if (!v185 && !v186) {
            // 0x402b48
            __frontend_reg_load_fpr(v178);
            float80_t v187 = __frontend_reg_load_fpr(v179); // 0x402b51
            function_402460(v3, v187);
            __frontend_reg_store_fpr(v179, v187);
            v172 = v179;
        }
        float80_t v188 = __frontend_reg_load_fpr(v172); // 0x4026b7
        v174 = v172 + 1;
        __frontend_reg_load_fpr(v174);
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len7 = strlen((char *)str3); // 0x4026e5
        __frontend_reg_store_fpr(v174, v188);
        v142 = v174;
        v143 = len7;
        if (v180 < len7) {
            // 0x4026f9
            __frontend_reg_store_fpr(v172, 10.0L);
            __frontend_reg_store_fpr(v174, __frontend_reg_load_fpr(v174) * __frontend_reg_load_fpr(v172));
            goto lab_0x402701;
        } else {
            goto lab_0x402b88;
        }
    }
  lab_0x402910:;
    int64_t v189 = v37 - 1; // 0x402929
    *(char *)v189 = (char)v42 + 48;
    int64_t v190 = v189; // 0x40294b
    while (v42 >= 10) {
        // 0x402923
        v189 = v190 - 1;
        *(char *)v189 = (char)v42 + 48;
        v190 = v189;
    }
    int64_t v102 = v39; // 0x402952
    int64_t v103 = v189; // 0x402952
    int64_t v104 = v39; // 0x402952
    int64_t v105 = v37; // 0x402952
    int64_t v106 = v189; // 0x402952
    if ((a3 & 4) == 0) {
        goto lab_0x4027d5;
    } else {
        goto lab_0x402958;
    }
  lab_0x4028f1:;
    int64_t v191 = v36;
    int64_t v192 = v38;
    int64_t v193 = v41 + 1; // 0x4028f1
    v39 = v192;
    v42 = v193;
    v37 = v191;
    if ((int32_t)v192 == 8 || (int32_t)v40 == 0 || v193 != (int64_t)v6) {
        goto lab_0x402910;
    } else {
        int64_t v194 = v191; // 0x402c7e
        if ((a3 & 8) == 0) {
            // 0x402e04
            *(char *)(v191 - 1) = 48;
            int64_t v195 = v191 + -1 - v8; // 0x402e0f
            int64_t v196 = v8 & 0xffffffff; // 0x402e12
            uint32_t v197 = (int32_t)v8; // 0x402e15
            if (v197 >= 8) {
                int64_t v198 = v195 + 8 & -8; // 0x402e60
                *(int64_t *)v195 = *(int64_t *)v7;
                *(int64_t *)(v195 + v196 - 8) = *(int64_t *)(v196 + v7 - 8);
                int64_t v199 = v195 - v198; // 0x402e77
                uint32_t v200 = (int32_t)(v199 + v8); // 0x402e83
                v194 = v195;
                if (v200 >= 8) {
                    int64_t v201 = 0;
                    int64_t v202 = v201 + 8; // 0x402e93
                    *(int64_t *)(v201 + v198) = *(int64_t *)(v7 - v199 + v201);
                    v194 = v195;
                    while ((v200 & -8) > (int32_t)v202) {
                        // 0x402e91
                        v201 = v202 & 0xffffffff;
                        v202 = v201 + 8;
                        *(int64_t *)(v201 + v198) = *(int64_t *)(v7 - v199 + v201);
                        v194 = v195;
                    }
                }
            } else {
                if ((v8 & 4) != 0) {
                    // 0x402ebc
                    *(int32_t *)v195 = *(int32_t *)v7;
                    *(int32_t *)(v195 + v196 - 4) = *(int32_t *)(v196 + v7 - 4);
                    v194 = v195;
                } else {
                    // 0x402e25
                    v194 = v195;
                    if (v197 != 0) {
                        // 0x402e2d
                        *(char *)v195 = *(char *)v7;
                        v194 = v195;
                        if ((v8 & 2) != 0) {
                            // 0x402e3c
                            *(int16_t *)(v195 + v196 - 2) = *(int16_t *)(v196 + v7 - 2);
                            v194 = v195;
                        }
                    }
                }
            }
        }
        int64_t v203 = v194 - 1; // 0x402c84
        *(char *)v203 = 49;
        v99 = v192 + 1 & 0xffffffff;
        v100 = v194;
        v101 = v203;
        goto lab_0x4027ca;
    }
  lab_0x4027ca:
    // 0x4027ca
    v102 = v99;
    v103 = v101;
    v104 = v99;
    v105 = v100;
    v106 = v101;
    if ((*(char *)(v5 + 16) & 4) != 0) {
        goto lab_0x402958;
    } else {
        goto lab_0x4027d5;
    }
  lab_0x4027d5:;
    int64_t result = v103;
    int64_t v107 = v5 + 16; // 0x4027d5
    char v108 = *(char *)v107; // 0x4027d5
    if (v108 > -1) {
        // 0x4027f8
        *(char *)v4 = 0;
        return result;
    }
    int64_t v109 = v102; // 0x4027df
    int64_t v110; // 0x402520
    int64_t v111; // 0x402520
    int64_t v112; // 0x402520
    int64_t v113; // 0x402520
    if ((int32_t)v102 == -1) {
        uint64_t v114 = *(int64_t *)(v5 + 24); // 0x402a20
        v109 = 0;
        if (v114 < 2) {
            goto lab_0x4027e5;
        } else {
            int64_t v115 = 1; // 0x402a3d
            int64_t v116 = 1;
            v115 *= (int64_t)*(int32_t *)(v5 + 52);
            int64_t v117 = v116; // 0x402a47
            while (v114 > v115) {
                int64_t v118 = v116 + 1; // 0x402a49
                int64_t v119 = v118 & 0xffffffff; // 0x402a49
                v117 = v119;
                if ((int32_t)v118 == 8) {
                    // break -> 0x402a51
                    break;
                }
                v116 = v119;
                v115 *= (int64_t)*(int32_t *)(v5 + 52);
                v117 = v116;
            }
            int32_t v120 = *(int32_t *)v107; // 0x402a51
            int64_t v121 = v120 & 256; // 0x402a57
            v110 = v121;
            v112 = v117;
            v111 = v121;
            v113 = v117;
            if ((v120 & 64) == 0) {
                goto lab_0x402a80;
            } else {
                goto lab_0x402a61;
            }
        }
    } else {
        goto lab_0x4027e5;
    }
  lab_0x402958:;
    int64_t str4 = len2 >= 17 ? (int64_t)&g14 : str2; // 0x4025c5
    int32_t len4 = strlen((char *)str4); // 0x402965
    int64_t v122 = v105 - v106; // 0x40296a
    int64_t v123 = v5 + 64; // 0x402978
    int64_t * v124 = (int64_t *)(v5 + 32); // 0x40297d
    *v124 = (int64_t)len4;
    int64_t * v125 = (int64_t *)v123; // 0x402982
    __memcpy_chk(v125, (int64_t *)v106, (int32_t)v122, 41);
    int32_t * v126 = (int32_t *)(v5 + 20); // 0x402987
    *v126 = (int32_t)v104;
    int64_t v127 = *v124; // 0x402999
    int64_t * v128 = (int64_t *)str4;
    int32_t v129 = v127;
    int64_t v130 = *(int64_t *)(v5 + 56);
    int64_t v131 = v105;
    uint64_t v132 = v122;
    unsigned char v133 = *(char *)v130; // 0x4029a0
    int64_t v134 = -1; // 0x4029a6
    int64_t v135 = v130; // 0x4029a6
    if (v133 != 0) {
        // 0x4029a8
        v134 = v133 >= 127 ? v132 : (int64_t)v133;
        v135 = v130 + 1;
    }
    int64_t v136 = v134;
    while (v132 >= v136) {
        int64_t v137 = v131 - v136; // 0x4029e0
        int64_t v138 = v132 - v136; // 0x4029e3
        memcpy((int64_t *)v137, (int64_t *)(v138 + v123), (int32_t)v136);
        if (v138 == 0) {
            // 0x402ed1
            v102 = (int64_t)*v126;
            v103 = v137;
            goto lab_0x4027d5;
        }
        int64_t v139 = v137 - v127; // 0x402a03
        memcpy((int64_t *)v139, v128, v129);
        v130 = v135;
        v131 = v139;
        v132 = v138;
        v133 = *(char *)v130;
        v134 = v136;
        v135 = v130;
        if (v133 != 0) {
            // 0x4029a8
            v134 = v133 >= 127 ? v132 : (int64_t)v133;
            v135 = v130 + 1;
        }
        // 0x4029b9
        v136 = v134;
    }
    int64_t v140 = v131 - v132; // 0x4029cd
    memcpy((int64_t *)v140, v125, (int32_t)v132);
    v102 = (int64_t)*v126;
    v103 = v140;
    goto lab_0x4027d5;
  lab_0x402b88:;
    int3_t v141 = v142;
    if ((a3 & 8) == 0) {
        // 0x402ba8
        __frontend_reg_store_fpr(v141, __frontend_reg_load_fpr(v141));
        goto lab_0x402baa;
    } else {
        // 0x402b8f
        if (*(char *)(v1 - 1 + v143) == 48) {
            int3_t v144 = v141 - 1; // 0x402d68
            __frontend_reg_store_fpr(v144, 10.0L);
            float80_t v145 = __frontend_reg_load_fpr(v141); // 0x402d73
            __frontend_reg_store_fpr(v141, v145 * __frontend_reg_load_fpr(v144));
            v146 = v144;
            if (v3 != 1) {
                goto lab_0x402701;
            } else {
                goto lab_0x402726;
            }
        } else {
            // 0x402b9f
            __frontend_reg_store_fpr(v141, __frontend_reg_load_fpr(v141));
            goto lab_0x402baa;
        }
    }
  lab_0x4027e5:;
    uint32_t v147 = *(int32_t *)v107 & 256; // 0x4027e9
    if ((v147 || (int32_t)v109) == 0) {
        // 0x4027f8
        *(char *)v4 = 0;
        return result;
    }
    int64_t v148 = v147; // 0x4027e9
    v110 = v148;
    v112 = v109;
    int64_t v149 = v148; // 0x402c55
    int64_t v150 = v109; // 0x402c55
    if ((v108 & 64) == 0) {
        goto lab_0x402a78;
    } else {
        goto lab_0x402a61;
    }
  lab_0x402d88:;
    int64_t v151 = v68; // 0x402d8b
    int64_t v152 = v63 + 48 & 0xffffffff; // 0x402d8b
    goto lab_0x402d07;
  lab_0x402cf7:
    // 0x402cf7
    v151 = v67;
    v152 = 48;
    v66 = v67;
    v65 = v64;
    v62 = v9;
    if ((a3 & 8) != 0) {
        goto lab_0x402d40;
    } else {
        goto lab_0x402d07;
    }
  lab_0x402726:;
    int3_t v170 = v146 + 1; // 0x402726
    __frontend_reg_store_fpr(v170, __frontend_reg_load_fpr(v170) / __frontend_reg_load_fpr(v146));
    __frontend_reg_load_fpr(v170);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len5 = strlen((char *)str3); // 0x402752
    v94 = len5;
    v95 = v163;
    v96 = len5;
    goto lab_0x4027b0;
  lab_0x402701:;
    int3_t v171 = v172 - 1; // 0x402701
    __frontend_reg_store_fpr(v171, 1.84467e+19L);
    float80_t v173 = __frontend_reg_load_fpr(v171); // 0x402707
    v146 = v172;
    if (v173 > __frontend_reg_load_fpr(v174)) {
        float80_t v175 = __frontend_reg_load_fpr(v172); // 0x40270b
        function_402460(v3, __frontend_reg_load_fpr(v174));
        __frontend_reg_store_fpr(v174, v175);
        v146 = v174;
    }
    goto lab_0x402726;
  lab_0x402a78:
    // 0x402a78
    v111 = v149;
    v113 = v150;
    int64_t v166; // 0x402520
    if ((int32_t)v150 == 0) {
        // 0x402edd
        v166 = v4;
        if ((int32_t)v149 == 0) {
            // 0x4027f8
            *(char *)v4 = 0;
            return result;
        }
        goto lab_0x402abd;
    } else {
        goto lab_0x402a80;
    }
  lab_0x402a61:;
    int64_t v176 = *(int64_t *)(v5 + 8); // 0x402a61
    *(char *)(v176 + 647) = 32;
    v4 = v176 + 648;
    v149 = v110;
    v150 = v112;
    goto lab_0x402a78;
  lab_0x402d40:
    // 0x402d40
    v30 = v61;
    v31 = v69;
    v32 = v66;
    v33 = v65;
    v34 = 0;
    v35 = v62;
    v39 = v69;
    v42 = v66;
    v37 = v62;
    if (v3 == 1) {
        goto lab_0x402910;
    } else {
        goto lab_0x4028e0;
    }
  lab_0x402d07:;
    int64_t v153 = v1 + 646; // 0x402d0c
    *(char *)v153 = (char)v152;
    int64_t v154 = v8 & 0xffffffff; // 0x402d19
    int64_t v155 = v153 - v8; // 0x402d1c
    uint32_t v156 = (int32_t)v8; // 0x402d1f
    if (v156 >= 8) {
        int64_t v157 = v155 + 8 & -8; // 0x402dac
        *(int64_t *)v155 = *(int64_t *)v7;
        *(int64_t *)(v154 + v155 - 8) = *(int64_t *)(v154 + v7 - 8);
        int64_t v158 = v155 - v157; // 0x402dc3
        uint32_t v159 = (int32_t)(v158 + v8); // 0x402dcf
        v66 = v151;
        v65 = 0;
        v62 = v155;
        if (v159 >= 8) {
            int64_t v160 = v7 - v158; // 0x402dc6
            int64_t v161 = 0;
            int64_t v162 = v161 + 8; // 0x402ddf
            *(int64_t *)(v161 + v157) = *(int64_t *)(v160 + v161);
            v66 = v151;
            v65 = 0;
            v62 = v155;
            while ((v159 & -8) > (int32_t)v162) {
                // 0x402ddd
                v161 = v162 & 0xffffffff;
                v162 = v161 + 8;
                *(int64_t *)(v161 + v157) = *(int64_t *)(v160 + v161);
                v66 = v151;
                v65 = 0;
                v62 = v155;
            }
        }
    } else {
        if ((v8 & 4) != 0) {
            // 0x402ea7
            *(int32_t *)v155 = *(int32_t *)v7;
            *(int32_t *)(v154 + v155 - 4) = *(int32_t *)(v154 + v7 - 4);
            v66 = v151;
            v65 = 0;
            v62 = v155;
        } else {
            // 0x402d2f
            v66 = v151;
            v65 = 0;
            v62 = v155;
            if (v156 != 0) {
                // 0x402d33
                *(char *)v155 = *(char *)v7;
                v66 = v151;
                v65 = 0;
                v62 = v155;
                if ((v8 & 2) != 0) {
                    // 0x402d53
                    *(int16_t *)(v154 + v155 - 2) = *(int16_t *)(v154 + v7 - 2);
                    v66 = v151;
                    v65 = 0;
                    v62 = v155;
                }
            }
        }
    }
    goto lab_0x402d40;
  lab_0x402baa:
    // 0x402baa
    v94 = v143;
    v95 = v163;
    v96 = v143 + -1 - v8;
    goto lab_0x4027b0;
  lab_0x402a80:;
    int32_t * v164 = (int32_t *)(v5 + 48); // 0x402a80
    if (*v164 == 0 == (int32_t)v113 == 1) {
        int64_t v165 = v4 + 1; // 0x402ca4
        *(char *)v4 = 107;
        v166 = v165;
        if ((int32_t)v111 == 0) {
            // 0x402cb3
            v4 = v165;
            // 0x4027f8
            *(char *)v4 = 0;
            return result;
        }
    } else {
        int64_t v167 = v4; // 0x402a96
        char v168 = *(char *)((0x100000000 * v113 >> 32) + (int64_t)&g6); // 0x402a9a
        int64_t v169 = v167 + 1; // 0x402aa1
        *(char *)v167 = v168;
        if ((int32_t)v111 == 0) {
            // 0x402cb3
            v4 = v169;
            // 0x4027f8
            *(char *)v4 = 0;
            return result;
        }
        // 0x402aaf
        v166 = v169;
        if (*v164 != 0) {
            // 0x402c60
            *(char *)v169 = 105;
            v166 = v167 + 2;
        }
    }
    goto lab_0x402abd;
  lab_0x402abd:
    // 0x402abd
    *(char *)v166 = 66;
    v4 = v166 + 1;
    // 0x4027f8
    *(char *)v4 = 0;
    return result;
}
// Address range: 0x402ef0 - 0x4030a7
int64_t function_402ef0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1; // 0x402f06
    if (a1 == 0) {
        char * env_val = getenv("BLOCK_SIZE"); // 0x403015
        v1 = (int64_t)env_val;
        if (env_val == NULL) {
            char * env_val2 = getenv("BLOCKSIZE"); // 0x40302b
            v1 = (int64_t)env_val2;
            if (env_val2 == NULL) {
                int64_t * v2 = (int64_t *)a3;
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x403092
                    *v2 = 1024;
                    *(int32_t *)a2 = 0;
                } else {
                    // 0x40304b
                    *v2 = 512;
                    *(int32_t *)a2 = 0;
                }
                // 0x402f4e
                return 0;
            }
        }
    }
    char v3 = *(char *)v1; // 0x402f0e
    int64_t v4 = function_406940(v1 + (int64_t)(v3 == 39), g5, (int64_t *)&g4, 4); // 0x402f2e
    if ((int32_t)v4 < 0) {
        // 0x402fdd
        *(int32_t *)a2 = 0;
        *(int64_t *)a3 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    // 0x402f37
    *(int64_t *)a3 = 1;
    int32_t v5 = *(int32_t *)((0x100000000 * v4 >> 30) + (int64_t)&g4); // 0x402f41
    *(int32_t *)a2 = v5 | (v3 != 39 ? 0 : 4);
    // 0x402f4e
    return 0;
}
// Address range: 0x4030b0 - 0x403149
int64_t function_4030b0(int64_t str) {
    // 0x4030b0
    if (str == 0) {
        // 0x403129
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g36);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4030be
    int64_t result = (int64_t)found_char_pos; // 0x4030be
    if (found_char_pos == NULL) {
        // 0x403119
        g42 = str;
        g35 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4030c8
    if (v1 - str < 7) {
        // 0x403119
        g42 = str;
        g35 = str;
        return result;
    }
    // 0x4030d8
    bool v2; // 0x4030b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4030b0
    int64_t v5 = result - 6; // 0x4030b0
    int64_t v6 = 7; // 0x4030e6
    unsigned char v7 = *(char *)v5; // 0x4030e6
    char v8 = *(char *)v4; // 0x4030e6
    char v9 = v8; // 0x4030e6
    bool v10 = false; // 0x4030e6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4030f0
    int64_t v13 = v1; // 0x4030f0
    int64_t v14 = 3; // 0x4030f0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403119
        g42 = str;
        g35 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403102
    char v16 = *(char *)v12; // 0x403102
    char v17 = v16; // 0x403102
    bool v18 = false; // 0x403102
    while (v15 == v16) {
        // 0x4030f2
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
    int64_t v20 = v1; // 0x40310c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40310e
        v20 = result + 4;
        g32 = v20;
    }
    // 0x403119
    g42 = v20;
    g35 = v20;
    return result;
}
// Address range: 0x403150 - 0x403242
int64_t function_403150(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403164
    int64_t result = (int64_t)v1; // 0x403164
    if (result != a1) {
        // 0x403171
        return result;
    }
    int64_t v2 = function_406d80(); // 0x403180
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403236
    if (v3 == 85) {
        // 0x403190
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403228
            result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g7;
            return result2;
        }
        char v4 = *v1; // 0x4031be
        int64_t result3 = v4 != 96 ? (int64_t)&g8 : (int64_t)&g11; // 0x4031cb
        // 0x403171
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403228
        result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g7;
        return result2;
    }
    char v5 = *v1; // 0x40320d
    int64_t result4 = v5 != 96 ? (int64_t)&g9 : (int64_t)&g10; // 0x40321a
    // 0x403171
    return result4;
}
// Address range: 0x403250 - 0x4032a7
int64_t function_403250(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403250
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403298
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4032a7 - 0x404471
int64_t function_4032a7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4032f1
    int64_t v3 = 0; // 0x4032f1
    int64_t v4; // 0x4032a7
    int64_t v5; // 0x4032a7
    int64_t v6; // 0x4032a7
    int64_t v7; // 0x4032a7
    int64_t v8; // 0x4032a7
    int64_t v9; // 0x4032a7
    int64_t v10; // 0x4032a7
    int64_t v11; // 0x4032a7
    int64_t v12; // 0x4032a7
    int64_t v13; // 0x4032a7
    int64_t v14; // 0x4032a7
    int64_t v15; // 0x4032a7
    int64_t v16; // 0x4032a7
    int64_t v17; // 0x4032a7
    int64_t v18; // 0x4032a7
    int64_t result; // 0x4032a7
    int64_t v19; // 0x4032a7
    int32_t wc; // bp+132, 0x4032a7
    int64_t ps; // bp+136, 0x4032a7
    char v20; // 0x403860
    int64_t v21; // 0x403860
    int64_t v22; // 0x403c08
    int64_t v23; // 0x4032a7
    int64_t v24; // 0x403c27
    int32_t v25; // 0x4032a7
    while (true) {
      lab_0x4032f8_2:
        // 0x4032f8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4032a7
        int64_t v27; // 0x40332c
        while (true) {
          lab_0x4032f8:
            // 0x4032f8
            v5 = v26;
            bool v28 = v15 == v5; // 0x403303
            if (v15 == -1) {
                // 0x403305
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403313
            if (v28) {
                // break (via goto) -> 0x403a78
                goto lab_0x403a78;
            }
            // 0x40331c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g55 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40390b
                    if (v25 % 2 == 0) {
                        goto lab_0x403451;
                    }
                    // 0x403d2d
                    v26 = v5 + 1;
                    goto lab_0x4032f8;
                }
                case 7: {
                    goto lab_0x403451;
                }
                case 8: {
                    goto lab_0x403451;
                }
                case 9: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403451;
                }
                case 12: {
                    goto lab_0x403451;
                }
                case 13: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40341d;
                }
                case 36: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403451;
                }
                case 38: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403451;
                }
                case 44: {
                    goto lab_0x403451;
                }
                case 45: {
                    goto lab_0x403451;
                }
                case 46: {
                    goto lab_0x403451;
                }
                case 47: {
                    goto lab_0x403451;
                }
                case 48: {
                    goto lab_0x403451;
                }
                case 49: {
                    goto lab_0x403451;
                }
                case 50: {
                    goto lab_0x403451;
                }
                case 51: {
                    goto lab_0x403451;
                }
                case 52: {
                    goto lab_0x403451;
                }
                case 53: {
                    goto lab_0x403451;
                }
                case 54: {
                    goto lab_0x403451;
                }
                case 55: {
                    goto lab_0x403451;
                }
                case 56: {
                    goto lab_0x403451;
                }
                case 57: {
                    goto lab_0x403451;
                }
                case 58: {
                    goto lab_0x403451;
                }
                case 59: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403451;
                }
                case 66: {
                    goto lab_0x403451;
                }
                case 67: {
                    goto lab_0x403451;
                }
                case 68: {
                    goto lab_0x403451;
                }
                case 69: {
                    goto lab_0x403451;
                }
                case 70: {
                    goto lab_0x403451;
                }
                case 71: {
                    goto lab_0x403451;
                }
                case 72: {
                    goto lab_0x403451;
                }
                case 73: {
                    goto lab_0x403451;
                }
                case 74: {
                    goto lab_0x403451;
                }
                case 75: {
                    goto lab_0x403451;
                }
                case 76: {
                    goto lab_0x403451;
                }
                case 77: {
                    goto lab_0x403451;
                }
                case 78: {
                    goto lab_0x403451;
                }
                case 79: {
                    goto lab_0x403451;
                }
                case 80: {
                    goto lab_0x403451;
                }
                case 81: {
                    goto lab_0x403451;
                }
                case 82: {
                    goto lab_0x403451;
                }
                case 83: {
                    goto lab_0x403451;
                }
                case 84: {
                    goto lab_0x403451;
                }
                case 85: {
                    goto lab_0x403451;
                }
                case 86: {
                    goto lab_0x403451;
                }
                case 87: {
                    goto lab_0x403451;
                }
                case 88: {
                    goto lab_0x403451;
                }
                case 89: {
                    goto lab_0x403451;
                }
                case 90: {
                    goto lab_0x403451;
                }
                case 91: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403451;
                }
                case 94: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403451;
                }
                case 96: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403451;
                }
                case 98: {
                    goto lab_0x403451;
                }
                case 99: {
                    goto lab_0x403451;
                }
                case 100: {
                    goto lab_0x403451;
                }
                case 101: {
                    goto lab_0x403451;
                }
                case 102: {
                    goto lab_0x403451;
                }
                case 103: {
                    goto lab_0x403451;
                }
                case 104: {
                    goto lab_0x403451;
                }
                case 105: {
                    goto lab_0x403451;
                }
                case 106: {
                    goto lab_0x403451;
                }
                case 107: {
                    goto lab_0x403451;
                }
                case 108: {
                    goto lab_0x403451;
                }
                case 109: {
                    goto lab_0x403451;
                }
                case 110: {
                    goto lab_0x403451;
                }
                case 111: {
                    goto lab_0x403451;
                }
                case 112: {
                    goto lab_0x403451;
                }
                case 113: {
                    goto lab_0x403451;
                }
                case 114: {
                    goto lab_0x403451;
                }
                case 115: {
                    goto lab_0x403451;
                }
                case 116: {
                    goto lab_0x403451;
                }
                case 117: {
                    goto lab_0x403451;
                }
                case 118: {
                    goto lab_0x403451;
                }
                case 119: {
                    goto lab_0x403451;
                }
                case 120: {
                    goto lab_0x403451;
                }
                case 121: {
                    goto lab_0x403451;
                }
                case 122: {
                    goto lab_0x403451;
                }
                case 123: {
                    goto lab_0x4033f5;
                }
                case 124: {
                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4033f5;
                }
                case 126: {
                    goto lab_0x40341d;
                }
                default: {
                    goto lab_0x4037f5;
                }
            }
        }
      lab_0x4037f5:
        if (v23 != 1) {
            // 0x403b60
            ps = 0;
            int64_t len = v15; // 0x403b70
            if (v15 == -1) {
                // 0x403b72
                len = strlen((char *)str);
            }
            // 0x403b9e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403bff:
                // 0x403bff
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403c04
                int64_t v30 = v29 + str;
                v24 = function_4068b0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40417a_2;
                    }
                    case -1: {
                        goto lab_0x40417a_2;
                    }
                    case -2: {
                        // 0x40425d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404297
                            v19 = v18;
                            int64_t v31 = v18; // 0x40429a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4042a7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4042a0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40417a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40417a_2;
                    }
                    case 1: {
                        goto lab_0x403bd0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403c7c
                        char v34 = *(char *)v33; // 0x403c8d
                        unsigned char v35; // 0x4032a7
                        if (v34 < 125) {
                            // 0x403c98
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403caf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403250(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403c80
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403c8d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403c98
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403caf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403250(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403c80
                            v33++;
                        }
                        goto lab_0x403bd0;
                    }
                }
            }
            goto lab_0x40417a_2;
        } else {
            // 0x403844
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403451;
        }
    }
  lab_0x403a78:
    // 0x403a78
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40437a
        if (v8 > result) {
            // 0x404383
            *(char *)(v12 + result) = 0;
        }
        // 0x4036a7
        return result;
    }
    return function_403250(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403451:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403460
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40366a_2;
        }
    }
    int64_t v39 = result; // 0x403561
    char v40 = v20; // 0x403561
    int64_t v41 = v38; // 0x403561
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403561
    int64_t v43 = v36; // 0x403561
    goto lab_0x4034dd;
  lab_0x40366a_2:
    // 0x4036a7
    return function_403250(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40417a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403451;
    } else {
        uint64_t v49 = v46 + v5; // 0x403d4e
        int64_t v50 = v5 + 1; // 0x403e31
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403e38
        char v52 = v20; // 0x403e38
        int64_t v53 = result; // 0x403e38
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403e01
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403e05
            int64_t v56 = v54 + 1; // 0x403e0a
            int64_t v57 = v51 + 1; // 0x403e31
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403dfc
                v54 = v56;
                if (v47 > v54) {
                    // 0x403e01
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403e05
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
        goto lab_0x4034dd;
    }
  lab_0x403bd0:
    // 0x403bd0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403bef
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403bf2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40417a
        goto lab_0x40417a_2;
    }
    goto lab_0x403bff;
  lab_0x40341d:
    // 0x40341d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40366a_2;
    }
    goto lab_0x403451;
  lab_0x4033f5:;
    bool v60 = v15 == 1; // 0x403400
    if (v15 == -1) {
        // 0x403402
        v60 = *(char *)v1 == 0;
    }
    // 0x40340e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403451;
    } else {
        goto lab_0x40341d;
    }
  lab_0x4034dd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4034e2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4034e6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4032f8_2;
}
// Address range: 0x404480 - 0x40461e
int64_t function_404480(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404482
    int32_t * v3 = __errno_location(); // 0x40449c
    int64_t v4 = (int64_t)g24; // 0x4044a1
    int32_t v5 = *v3; // 0x4044ab
    int64_t v6 = v4; // 0x4044c1
    if (v2 >= (int64_t)*(int32_t *)&g27) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404619
            function_405540(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4044d0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4044d7
        int64_t v9; // 0x404480
        if (g24 == &g25) {
            int64_t v10 = function_405350(0, v8); // 0x4045fa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g25); // 0x4045ff
            *(int64_t *)&g24 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405350(v4, v8); // 0x4044eb
            *(int64_t *)&g24 = v12;
            v9 = v12;
        }
        // 0x4044fa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g27; // 0x4044fa
        int32_t v14 = v7; // 0x404501
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g27 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404531
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40453b
    int64_t * v17 = (int64_t *)v15; // 0x40453e
    uint64_t v18 = *v17; // 0x40453e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404541
    int64_t result = *v19; // 0x404541
    int64_t v20; // 0x404480
    uint64_t v21 = function_403250(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404564
    if (v18 > v21) {
        // 0x4045db
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404577
    *v17 = v22;
    if (result != (int64_t)&g43) {
        // 0x404587
        free((int64_t *)result);
    }
    int64_t result2 = function_4052f0(v22); // 0x4045a1
    *v19 = result2;
    int64_t v23; // 0x404480
    function_403250(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4045db
    *v3 = v5;
    return result2;
}
// Address range: 0x404620 - 0x404654
int64_t function_404620(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404627
    int64_t result = function_4054f0(a1 == 0 ? (int64_t)&g44 : a1, 56); // 0x404646
    return result;
}
// Address range: 0x404660 - 0x40466f
int64_t function_404660(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g44 : a1); // 0x40466c
    return result;
}
// Address range: 0x404670 - 0x40467f
int64_t function_404670(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x404678
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g44;
}
// Address range: 0x404680 - 0x4046b3
int64_t function_404680(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 + 8 : a1 + 8; // 0x404699
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40469e
    uint32_t v3 = *v2; // 0x40469e
    uint32_t v4 = (int32_t)a2 % 32; // 0x4046a2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4046c0 - 0x4046d3
int64_t function_4046c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g44 + 4 : a1 + 4); // 0x4046cc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4046e0 - 0x40470b
int64_t function_4046e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x4046e8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404705
        abort();
        // UNREACHABLE
    }
    // 0x4046fc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g44;
}
// Address range: 0x404710 - 0x404782
int64_t function_404710(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g44 : a5; // 0x404732
    int32_t * v2 = __errno_location(); // 0x40473b
    uint32_t v3 = *(int32_t *)v1; // 0x40475b
    int64_t result = function_403250(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40476a
    return result;
}
// Address range: 0x404790 - 0x404871
int64_t function_404790(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g44 : a4; // 0x4047b2
    int32_t * v2 = __errno_location(); // 0x4047b8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4047d7
    int32_t * v4 = (int32_t *)v1; // 0x4047da
    int64_t v5 = function_403250(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4047f5
    int64_t v6 = v5 + 1; // 0x4047fa
    int64_t result = function_4052f0(v6); // 0x40480f
    function_403250(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404854
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40485d
    return result;
}
// Address range: 0x404880 - 0x40488a
int64_t function_404880(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404880
    return function_404790(a1, a2, 0, a3);
}
// Address range: 0x404890 - 0x404925
int64_t function_404890(void) {
    uint32_t v1 = *(int32_t *)&g27; // 0x404890
    int64_t v2 = v1; // 0x404890
    int64_t v3 = v2; // 0x4048a4
    if (v1 >= 2) {
        int64_t v4 = &g27;
        int64_t v5 = v4 + 16; // 0x4048c3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g56;
        while (v5 != (int64_t)g24 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4048c0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g56;
        }
    }
    int64_t v6 = v3; // 0x4048dd
    if (g25 != 0x60b300) {
        // 0x4048df
        free((int64_t *)g25);
        g25 = 256;
        *(int64_t *)&g26 = (int64_t)&g43;
        v6 = &g56;
    }
    int64_t result = v6; // 0x404901
    if (g24 != &g25) {
        // 0x404903
        free(g24);
        *(int64_t *)&g24 = (int64_t)&g25;
        result = &g56;
    }
    // 0x404916
    *(int32_t *)&g27 = 1;
    return result;
}
// Address range: 0x404930 - 0x404941
int64_t function_404930(void) {
    // 0x404930
    int64_t v1; // 0x404930
    return function_404480(v1, v1, -1, (int64_t *)&g44);
}
// Address range: 0x404950 - 0x40495a
int64_t function_404950(void) {
    // 0x404950
    int64_t v1; // 0x404950
    return function_404480(v1, v1, v1, (int64_t *)&g44);
}
// Address range: 0x404960 - 0x404976
int64_t function_404960(int64_t a1) {
    // 0x404960
    return function_404480(0, a1, -1, (int64_t *)&g44);
}
// Address range: 0x404980 - 0x404992
int64_t function_404980(int64_t a1, int64_t a2) {
    // 0x404980
    return function_404480(0, a1, a2, (int64_t *)&g44);
}
// Address range: 0x4049a0 - 0x404a08
int64_t function_4049a0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4049b0
    return function_404480((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404a10 - 0x404a74
int64_t function_404a10(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404a20
    return function_404480((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404a80 - 0x404a8c
int64_t function_404a80(int64_t a1, int64_t a2) {
    // 0x404a80
    return function_4049a0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404a90 - 0x404a9f
int64_t function_404a90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404a90
    return function_404a10(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404aa0 - 0x404b10
int64_t function_404aa0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x404aad
    int128_t v2 = __asm_movdqa(g45); // 0x404ab5
    int128_t v3 = __asm_movdqa(g46); // 0x404abd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404ad2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404ae8
    uint32_t v6 = *v5; // 0x404ae8
    uint32_t v7 = (int32_t)a3 % 32; // 0x404aed
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404480(0, a1, a2, &v4);
}
// Address range: 0x404b10 - 0x404b1d
int64_t function_404b10(int64_t a1, int64_t a2) {
    // 0x404b10
    return function_404aa0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404b20 - 0x404b31
int64_t function_404b20(int64_t a1) {
    // 0x404b20
    return function_404aa0(a1, -1, 58);
}
// Address range: 0x404b40 - 0x404b4a
int64_t function_404b40(void) {
    // 0x404b40
    int64_t v1; // 0x404b40
    return function_404aa0(v1, v1, 58);
}
// Address range: 0x404b50 - 0x404bbe
int64_t function_404b50(int32_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404b6a
    return function_404480((int64_t)a1, (int64_t)a3, -1, &v1);
}
// Address range: 0x404bc0 - 0x404c2c
int64_t function_404bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x404bc7
    int128_t v2 = __asm_movdqa(g45); // 0x404bcf
    int128_t v3 = __asm_movdqa(g46); // 0x404bd7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404bf9
    if (a2 == 0 || a3 == 0) {
        // 0x404c27
        abort();
        // UNREACHABLE
    }
    // 0x404c0a
    return function_404480(a1, a4, a5, &v4);
}
// Address range: 0x404c30 - 0x404c39
int64_t function_404c30(void) {
    // 0x404c30
    int64_t v1; // 0x404c30
    return function_404bc0(v1, v1, v1, v1, -1);
}
// Address range: 0x404c40 - 0x404c57
int64_t function_404c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c40
    return function_404bc0(0, a1, a2, a3, -1);
}
// Address range: 0x404c60 - 0x404c73
int64_t function_404c60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404c60
    return function_404bc0(0, a1, a2, a3, a4);
}
// Address range: 0x404c80 - 0x404c8a
int64_t function_404c80(void) {
    // 0x404c80
    int64_t v1; // 0x404c80
    return function_404480(v1, v1, v1, &g23);
}
// Address range: 0x404c90 - 0x404ca2
int64_t function_404c90(int64_t a1, int64_t a2) {
    // 0x404c90
    return function_404480(0, a1, a2, &g23);
}
// Address range: 0x404cb0 - 0x404cc1
int64_t function_404cb0(int64_t a1, int64_t a2) {
    // 0x404cb0
    return function_404480(a1, a2, -1, &g23);
}
// Address range: 0x404cd0 - 0x404ce6
int64_t function_404cd0(int64_t a1) {
    // 0x404cd0
    return function_404480(0, a1, -1, &g23);
}
// Address range: 0x404cf0 - 0x404d4e
int64_t function_404cf0(int64_t fd, int64_t * buf, int64_t nbyte) {
    int32_t result = read((int32_t)fd, buf, (int32_t)nbyte); // 0x404d11
    while (result < 0) {
        // 0x404d1e
        if (*__errno_location() != 4) {
            // break -> 0x404d2a
            break;
        }
        result = read((int32_t)fd, buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x404d50 - 0x40512d
int64_t function_404d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404de8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404d6c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404d86
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404dcb
    if (a6 < 10) {
        // 0x404dda
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404ed2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405130 - 0x405150
int64_t function_405130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405130
    if (a5 == 0) {
        // 0x40514b
        return function_404d50(a1, a2, a3, a4, a5, 0, (int64_t)&g56);
    }
    int64_t v1 = 0; // 0x405137
    v1++;
    int64_t v2 = v1; // 0x405149
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405140
        v1++;
        v2 = v1;
    }
    // 0x40514b
    return function_404d50(a1, a2, a3, a4, a5, v2, (int64_t)&g56);
}
// Address range: 0x405150 - 0x4051b0
int64_t function_405150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405150
    int64_t v3 = &v2; // 0x405150
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405183
    int64_t v6; // 0x40516d
    int64_t * v7; // 0x40518b
    int64_t v8; // 0x40518b
    int64_t v9; // 0x405197
    if (v5 < 48) {
        // 0x405160
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4051a3
            break;
        }
    } else {
        // 0x40518b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4051a3
            break;
        }
    }
    int64_t v10 = 10; // 0x405181
    while (v4 != 9) {
        // 0x405179
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405160
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4051a3
                break;
            }
        } else {
            // 0x40518b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4051a3
                break;
            }
        }
        // 0x405179
        v10 = 10;
    }
    // 0x4051a3
    return function_404d50(a1, a2, a3, a4, v3, v10, (int64_t)&g56);
}
// Address range: 0x4051b0 - 0x40526c
int64_t function_4051b0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4051b0
    int64_t v1; // bp-168, 0x4051b0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4051b0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4051b0
    int64_t v8; // 0x4051b0
    int64_t v9; // bp-56, 0x4051b0
    int64_t v10; // 0x405215
    int64_t v11; // 0x405239
    if ((int32_t)v6 < 48) {
        // 0x405200
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405250
            break;
        }
    } else {
        // 0x405232
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405250
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40522a
    int64_t v13 = 10; // 0x40522a
    while (v5 != 9) {
        // 0x40522c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405200
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405250
                break;
            }
        } else {
            // 0x405232
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405250
                break;
            }
        }
        // 0x405222
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405250
    int64_t v14; // bp-136, 0x4051b0
    int64_t result = function_404d50(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g56); // 0x40525f
    return result;
}
// Address range: 0x405270 - 0x4052e4
int64_t function_405270(int64_t a1) {
    // 0x405270
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4052d3
    return fputs_unlocked(v1, g33);
}
// Address range: 0x4052f0 - 0x40530a
int64_t function_4052f0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4052f4
    if (size != 0 != (mem == NULL)) {
        // 0x405303
        return (int64_t)mem;
    }
    // 0x405305
    function_405540(size);
    // UNREACHABLE
}
// Address range: 0x405310 - 0x405331
int64_t function_405310(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405313
    int64_t v2 = v1; // 0x405313
    if (v2 < 0) {
        // 0x40532b
        function_405540(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405329
        return function_4052f0(v2);
    }
    // 0x40532b
    function_405540(v2);
    // UNREACHABLE
}
// Address range: 0x405340 - 0x405342
int64_t function_405340(void) {
    // 0x405340
    int64_t v1; // 0x405340
    return function_4052f0(v1);
}
// Address range: 0x405350 - 0x405386
int64_t function_405350(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405378
        free(v1);
        return (int32_t)&g56 ^ (int32_t)&g56;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405361
    if (a2 != 0 != (mem == NULL)) {
        // 0x405370
        return (int64_t)mem;
    }
    // 0x405381
    function_405540(a1);
    // UNREACHABLE
}
// Address range: 0x405390 - 0x4053b1
int64_t function_405390(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405393
    int64_t v2 = v1; // 0x405393
    if (v2 < 0) {
        // 0x4053ab
        function_405540(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4053a9
        return function_405350(a1, v2);
    }
    // 0x4053ab
    function_405540(a1);
    // UNREACHABLE
}
// Address range: 0x4053c0 - 0x405446
int64_t function_4053c0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40541b
            function_405540(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405350(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405403
    if (a2 == 0) {
        // 0x405428
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405408
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40541b
        function_405540(a1);
        // UNREACHABLE
    }
    // 0x4053ea
    *(int64_t *)a2 = v2;
    return function_405350(a1, v2 * a3);
}
// Address range: 0x405450 - 0x4054a0
int64_t function_405450(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405450
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40549a
            function_405540(a1);
            // UNREACHABLE
        }
        // 0x405472
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405350(a1, v1);
    }
    if (a2 == 0) {
        // 0x405485
        *(int64_t *)a2 = 128;
        return function_405350(0, 128);
    }
    // 0x405498
    if (a2 < 0) {
        // 0x40549a
        function_405540(a1);
        // UNREACHABLE
    }
    // 0x405472
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405350(a1, v1);
}
// Address range: 0x4054a0 - 0x4054b7
int64_t function_4054a0(int64_t a1, int64_t a2) {
    // 0x4054a0
    return (int64_t)memset((int64_t *)function_4052f0(a1), 0, (int32_t)a1);
}
// Address range: 0x4054c0 - 0x4054ee
int64_t function_4054c0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4054c7
    if ((int64_t)v1 < 0) {
        // 0x4054e9
        function_405540(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4054e9
        function_405540(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4054da
    if (mem != NULL) {
        // 0x4054e4
        return (int64_t)mem;
    }
    // 0x4054e9
    function_405540(nmemb);
    // UNREACHABLE
}
// Address range: 0x4054f0 - 0x405518
int64_t function_4054f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4052f0(a2); // 0x4054ff
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405520 - 0x405533
int64_t function_405520(int64_t str) {
    // 0x405520
    return function_4054f0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405540 - 0x405571
int64_t function_405540(int64_t a1) {
    // 0x405540
    error(g22, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405580 - 0x4059c0
int64_t function_405580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40558e
    if (v1 >= 37) {
        // 0x40599b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g56;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x4055b2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x4055e2
    int64_t v4 = a1; // 0x4055e7
    char v5 = c; // 0x4055e7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x4055dc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x4055d8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x4055e9
    if (v5 == 45) {
        // 0x405625
        return 4;
    }
    // 0x4055ee
    int64_t v7; // bp-64, 0x405580
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : a2; // 0x4055ae
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x4055f6
    int64_t * v10 = (int64_t *)v8; // 0x4055fb
    int64_t v11 = *v10; // 0x4055fb
    char v12; // 0x405580
    int64_t v13; // 0x405580
    int64_t v14; // 0x405580
    int64_t v15; // 0x405580
    int64_t v16; // 0x405580
    int64_t v17; // 0x405580
    int64_t v18; // 0x405580
    if (v11 == a1) {
        // 0x405658
        if (c == 0 || str == 0) {
            // 0x405625
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x405679
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x405625
            return 4;
        }
        goto lab_0x405687;
    } else {
        int32_t v19 = *v2; // 0x405606
        int64_t v20 = 0; // 0x40560c
        if (v19 != 0) {
            // 0x405640
            v20 = 1;
            if (v19 != 34) {
                // 0x405625
                return 4;
            }
        }
        int64_t v21 = v9; // 0x4055f6
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x405622;
        } else {
            char c2 = *(char *)v11; // 0x405615
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x405783
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x405687;
                } else {
                    goto lab_0x405795;
                }
            } else {
                goto lab_0x405622;
            }
        }
    }
  lab_0x405687:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40568f
    int64_t v24 = 1; // 0x40568f
    int64_t v25; // 0x405580
    int64_t v26; // 0x405580
    int64_t v27; // 0x405580
    int64_t v28; // 0x405580
    int64_t v29; // 0x405580
    int64_t v30; // 0x405580
    int64_t v31; // 0x405580
    int64_t v32; // 0x405580
    int64_t v33; // 0x405580
    int64_t v34; // 0x405580
    int64_t v35; // 0x405580
    int64_t v36; // 0x405580
    int64_t v37; // 0x405580
    int64_t v38; // 0x405580
    int64_t v39; // 0x405580
    int64_t v40; // 0x405580
    int64_t v41; // 0x405580
    int64_t v42; // 0x405580
    int64_t v43; // 0x405580
    int64_t v44; // 0x405580
    if (v22 < 48) {
        // 0x405691
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4056fa;
        } else {
            // 0x4056a4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4056fa;
            } else {
                // 0x4056c0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x4056fa;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x405929
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x4056fa;
                    }
                    default: {
                        // 0x4056d5
                        g53 = v22;
                        v23 = 1000;
                        v24 = 2;
                        v27 = 1024;
                        v39 = 1;
                        v26 = v17;
                        v25 = v14;
                        v40 = 1;
                        v28 = 1024;
                        v41 = 1;
                        v18 = v17;
                        v15 = v14;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v44 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        v34 = 1024;
                        v38 = 1;
                        switch (v12) {
                            case 69: {
                                goto lab_0x40589b;
                            }
                            case 70: {
                                goto lab_0x405795;
                            }
                            case 71: {
                                goto lab_0x4058d3;
                            }
                            case 72: {
                                goto lab_0x405795;
                            }
                            case 73: {
                                goto lab_0x405795;
                            }
                            case 74: {
                                goto lab_0x405795;
                            }
                            case 75: {
                                goto lab_0x40575c;
                            }
                            case 76: {
                                goto lab_0x405795;
                            }
                            case 77: {
                                goto lab_0x40571e;
                            }
                            case 78: {
                                goto lab_0x405795;
                            }
                            case 79: {
                                goto lab_0x405795;
                            }
                            case 80: {
                                goto lab_0x405868;
                            }
                            case 81: {
                                goto lab_0x405795;
                            }
                            case 82: {
                                goto lab_0x405795;
                            }
                            case 83: {
                                goto lab_0x405795;
                            }
                            case 84: {
                                goto lab_0x405838;
                            }
                            case 85: {
                                goto lab_0x405795;
                            }
                            case 86: {
                                goto lab_0x405795;
                            }
                            case 87: {
                                goto lab_0x405795;
                            }
                            case 88: {
                                goto lab_0x405795;
                            }
                            case 89: {
                                goto lab_0x405806;
                            }
                            case 90: {
                                goto lab_0x4057cb;
                            }
                            case 91: {
                                goto lab_0x405795;
                            }
                            case 92: {
                                goto lab_0x405795;
                            }
                            case 93: {
                                goto lab_0x405795;
                            }
                            case 94: {
                                goto lab_0x405795;
                            }
                            case 95: {
                                goto lab_0x405795;
                            }
                            case 96: {
                                goto lab_0x405795;
                            }
                            case 97: {
                                goto lab_0x405795;
                            }
                            case 98: {
                                goto lab_0x4057af;
                            }
                            case 99: {
                                goto lab_0x405738;
                            }
                            case 100: {
                                goto lab_0x405795;
                            }
                            case 101: {
                                goto lab_0x405795;
                            }
                            case 102: {
                                goto lab_0x405795;
                            }
                            case 103: {
                                goto lab_0x4058d3;
                            }
                            case 104: {
                                goto lab_0x405795;
                            }
                            case 105: {
                                goto lab_0x405795;
                            }
                            case 106: {
                                goto lab_0x405795;
                            }
                            case 107: {
                                goto lab_0x40575c;
                            }
                            case 108: {
                                goto lab_0x405795;
                            }
                            case 109: {
                                goto lab_0x40571e;
                            }
                            case 110: {
                                goto lab_0x405795;
                            }
                            case 111: {
                                goto lab_0x405795;
                            }
                            case 112: {
                                goto lab_0x405795;
                            }
                            case 113: {
                                goto lab_0x405795;
                            }
                            case 114: {
                                goto lab_0x405795;
                            }
                            case 115: {
                                goto lab_0x405795;
                            }
                            case 116: {
                                goto lab_0x405838;
                            }
                            default: {
                                goto lab_0x4056fa;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4056fa;
    }
  lab_0x405622:
    // 0x405622
    *(int64_t *)a4 = v16;
    // 0x405625
    return v13 & 0xffffffff;
  lab_0x4056fa:
    // 0x4056fa
    g54 = v12 - 66;
    v27 = v23;
    v39 = v24;
    v26 = v17;
    v25 = v14;
    v40 = v24;
    v28 = v23;
    v41 = v24;
    v18 = v17;
    v15 = v14;
    v42 = v24;
    v29 = v23;
    v43 = v24;
    v30 = v23;
    v44 = v24;
    v31 = v23;
    v35 = v24;
    v32 = v23;
    v36 = v24;
    v33 = v23;
    v37 = v24;
    v34 = v23;
    v38 = v24;
    int64_t v46; // 0x405580
    switch (v12) {
        case 66: {
            // 0x4058f4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x405767;
            } else {
                // 0x405901
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405738;
            }
        }
        case 69: {
            goto lab_0x40589b;
        }
        case 71: {
            goto lab_0x4058d3;
        }
        case 75: {
            goto lab_0x40575c;
        }
        case 77: {
            goto lab_0x40571e;
        }
        case 80: {
            goto lab_0x405868;
        }
        case 84: {
            goto lab_0x405838;
        }
        case 89: {
            goto lab_0x405806;
        }
        case 90: {
            goto lab_0x4057cb;
        }
        case 98: {
            goto lab_0x4057af;
        }
        case 99: {
            goto lab_0x405738;
        }
        case 103: {
            goto lab_0x4058d3;
        }
        case 107: {
            goto lab_0x40575c;
        }
        case 109: {
            goto lab_0x40571e;
        }
        case 116: {
            goto lab_0x405838;
        }
        case 119: {
            // 0x4057a0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x405767;
            } else {
                // 0x4057a5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405738;
            }
        }
        default: {
            goto lab_0x405795;
        }
    }
  lab_0x40589b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x4058b3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x4058bf
    int64_t v51 = v48; // 0x4058c2
    int64_t v52 = v37; // 0x4058c2
    int64_t v53 = v49; // 0x4058c2
    int32_t v54 = v50; // 0x4058c2
    int64_t v55 = v49; // 0x4058c2
    while (v50 != 0) {
        // 0x4058b0
        v47 = (int128_t)v48 * (int128_t)v33;
        v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
        v49 = v47 > 0xffffffffffffffff ? 1 : v55;
        v50 = v54 - 1;
        v51 = v48;
        v52 = v37;
        v53 = v49;
        v54 = v50;
        v55 = v49;
    }
    goto lab_0x4057f4;
  lab_0x4058d3:
    // 0x4058d3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4058de
        int128_t v56; // 0x4058d9
        uint128_t v57; // 0x4058d9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4058de
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x405580
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x4058e3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x4058e8
                v26 = v60;
                int64_t v61; // 0x405580
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x405738;
  lab_0x40575c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40575f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x405738;
    } else {
        goto lab_0x405767;
    }
  lab_0x40571e:;
    int128_t v65 = v27; // 0x405724
    uint128_t v66 = v65 * (int128_t)v17; // 0x405724
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x405767;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x405729
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x405767;
        } else {
            // 0x40572e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x405738;
        }
    }
  lab_0x405868:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40587b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x405887
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40588a
    int64_t v73 = v70; // 0x40588a
    while (v71 != 0) {
        // 0x405878
        v68 = (int128_t)v69 * (int128_t)v32;
        v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
        v70 = v68 > 0xffffffffffffffff ? 1 : v73;
        v71 = v72 - 1;
        v51 = v69;
        v52 = v36;
        v53 = v70;
        v72 = v71;
        v73 = v70;
    }
    goto lab_0x4057f4;
  lab_0x405838:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40584b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x405857
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40585a
    int64_t v79 = v76; // 0x40585a
    while (v77 != 0) {
        // 0x405848
        v74 = (int128_t)v75 * (int128_t)v31;
        v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
        v76 = v74 > 0xffffffffffffffff ? 1 : v79;
        v77 = v78 - 1;
        v51 = v75;
        v52 = v35;
        v53 = v76;
        v78 = v77;
        v79 = v76;
    }
    goto lab_0x4057f4;
  lab_0x405806:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x40581b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x405827
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x40582a
    int64_t v85 = v82; // 0x40582a
    while (v83 != 0) {
        // 0x405818
        v80 = (int128_t)v81 * (int128_t)v30;
        v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
        v82 = v80 > 0xffffffffffffffff ? 1 : v85;
        v83 = v84 - 1;
        v51 = v81;
        v52 = v44;
        v53 = v82;
        v84 = v83;
        v85 = v82;
    }
    goto lab_0x4057f4;
  lab_0x4057cb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x4057e3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x4057ef
    int32_t v90 = v89; // 0x4057f2
    int64_t v91 = v88; // 0x4057f2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x4057e0
        v86 = (int128_t)v87 * (int128_t)v29;
        v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
        v88 = v86 > 0xffffffffffffffff ? 1 : v91;
        v89 = v90 - 1;
        v90 = v89;
        v91 = v88;
        v51 = v87;
        v52 = v43;
        v53 = v88;
    }
    goto lab_0x4057f4;
  lab_0x4057af:
    // 0x4057af
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x405767;
    } else {
        // 0x4057b8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x405738;
    }
  lab_0x405738:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40573d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x405622;
  lab_0x405795:
    // 0x405795
    *(int64_t *)a4 = v18;
    // 0x405625
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405767:
    // 0x405767
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x405738;
  lab_0x4057f4:
    // 0x4057f4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x405738;
}
// Address range: 0x4059c0 - 0x405a3b
int64_t function_4059c0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4059c7
    if (fileno(stream) < 0) {
        // 0x405a27
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4059da
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405a0b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405a27
            return fclose(stream);
        }
    }
    // 0x4059dc
    if ((int32_t)function_405a40(a1, v1) == 0) {
        // 0x405a27
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4059e8
    int32_t v3 = *v2; // 0x4059f0
    int64_t result = fclose(stream); // 0x4059fe
    if (v3 != 0) {
        // 0x405a30
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405a00
    return result;
}
// Address range: 0x405a40 - 0x405a80
int64_t function_405a40(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405a5a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405a5a
        return fflush(stream);
    }
    // 0x405a68
    function_405a80(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405a80 - 0x405ad7
int64_t function_405a80(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405a80
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405a8a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405abb
    int64_t result = -1; // 0x405ac4
    if (v1 != -1) {
        // 0x405ac6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405ad2
    return result;
}
// Address range: 0x405ae0 - 0x405bbf
int64_t function_405ae0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x405aec
    uint32_t v2 = *v1; // 0x405aec
    int64_t v3 = a2 & 0xffffffff; // 0x405af1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405af4
    uint64_t v5 = (int64_t)*v4; // 0x405af4
    int64_t v6; // 0x405b62
    if (v3 <= v5) {
      lab_0x405b5c_2:
        // 0x405b5c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405ae2
    int64_t v8 = v2; // 0x405ae0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x405b5c
        goto lab_0x405b5c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405b18
    int64_t v17; // 0x405b26
    int64_t * v18; // 0x405b40
    int64_t * v19; // 0x405b43
    int64_t v20; // 0x405b4e
    int64_t v21; // 0x405b26
    while ((v16 & 0xffffffff) > v10) {
        // 0x405b23
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405b40
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405b57
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x405b5c
            goto lab_0x405b5c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x405b5c
            goto lab_0x405b5c_2;
        }
        // 0x405b12
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x405b9b
    int64_t * v23 = (int64_t *)v22; // 0x405ba0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405ba3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405ba0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405bb7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x405b0d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x405b5c
            goto lab_0x405b5c_2;
        }
        // 0x405b12
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405b23
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405b40
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405b57
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x405b5c
                goto lab_0x405b5c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x405b5c
                goto lab_0x405b5c_2;
            }
            // 0x405b12
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405b80
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405ba0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405bb7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x405b5c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405bc0 - 0x4061dc
int64_t function_405bc0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x405bdf
    int64_t v2 = *v1; // 0x405bdf
    char * str2 = (char *)v2; // 0x405bec
    char c = *str2; // 0x405bec
    int64_t v3 = v2; // 0x405c18
    int64_t v4 = 0; // 0x405bc0
    int32_t v5; // 0x405bc0
    int64_t v6; // 0x405bc0
    int64_t v7; // 0x405bc0
    int64_t v8; // 0x405bc0
    int64_t v9; // 0x405bc0
    int64_t v10; // 0x405bc0
    int64_t v11; // 0x405bc0
    int64_t v12; // 0x405bc0
    int64_t v13; // 0x405bc0
    int64_t str3; // 0x405bc0
    int64_t v14; // 0x405bc0
    int64_t v15; // 0x405bc0
    int64_t v16; // 0x405bc0
    int64_t v17; // 0x405bc0
    int32_t v18; // 0x405bc0
    int32_t v19; // 0x405bc0
    int32_t v20; // 0x405bc0
    int32_t v21; // 0x405bc0
    int32_t v22; // 0x405bc0
    int32_t v23; // 0x405bc0
    int32_t v24; // 0x405bc0
    int32_t v25; // 0x405bc0
    int32_t v26; // 0x405bc0
    int32_t v27; // 0x405bc0
    int32_t v28; // 0x405bc0
    int32_t v29; // 0x405bc0
    int64_t nmemb; // 0x405bc0
    int64_t v30; // 0x405bc0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x405c1c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405c18
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405c28
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x405c2e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405bf8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x405c5c
                int64_t v34; // 0x405bc0
                int64_t v35; // 0x405bc0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405c65
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405de0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405c76
                int64_t v37 = *(int64_t *)v36; // 0x405c7a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405c50
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405c65
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405de0;
                        }
                    }
                    // 0x405c76
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
                  lab_0x405cc6:
                    // 0x405cc6
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
                        goto lab_0x405d20;
                    } else {
                        if (v11 == 0) {
                            // 0x405e90
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405d20;
                        } else {
                            if (v39 == 0) {
                                // 0x405e40
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405cea;
                                } else {
                                    // 0x405e4c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405cea;
                                    } else {
                                        // 0x405e5a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405cea;
                                        } else {
                                            goto lab_0x405d20;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405cea;
                            }
                        }
                    }
                }
              lab_0x405d31:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405f06
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4060b2
                            flockfile(g36);
                            int64_t v41 = *v1; // 0x4060d2
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40611f
                            int64_t v43 = (int64_t)g36;
                            int64_t v44 = v43; // 0x406139
                            int64_t v45; // 0x40613b
                            if (*(char *)v42 != 0) {
                                // 0x40613b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g36;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406133
                            while (v17 + nmemb != v42) {
                                // 0x406135
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40613b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g36;
                                }
                                // 0x406128
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406160
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g36);
                            v40 = *v1;
                        } else {
                            // 0x405f14
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40606f
                        free((int64_t *)v17);
                    }
                    // 0x405f69
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405f80
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405e2e
                    return 63;
                }
                // 0x405d50
                v5 = v39;
                if (v13 != 0) {
                    // 0x405dd4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405de0:;
                    int32_t * v49 = (int32_t *)a7; // 0x405df0
                    uint32_t v50 = *v49; // 0x405df0
                    int64_t v51 = v50; // 0x405df0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405dfa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405e03
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40602f
                                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405fda
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405e2e
                            return 63;
                        }
                        // 0x405e78
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40618f
                                    __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40608d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4060a0
                                // 0x405e2e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405f9e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405fb2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405e1b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405e1e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405e22
                    int64_t result = v59; // 0x405e28
                    if (v58 != 0) {
                        // 0x405e2a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405e2e
                    return result;
                }
            } else {
                // 0x405c2e
                v5 = v32;
            }
            // break -> 0x405d55
            break;
        }
    }
    // 0x405d55
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405d6d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405d77
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405e2e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405eb9
        __fprintf_chk(g36, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405da6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405db6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405d20:
    // 0x405d20
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405d20
    int64_t v63 = *(int64_t *)v62; // 0x405d24
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405d31
        goto lab_0x405d31;
    }
    goto lab_0x405cc6;
  lab_0x405cea:
    // 0x405cea
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405bc0
    int32_t v65; // 0x405bc0
    int32_t v66; // 0x405bc0
    if (v27 != 0) {
        goto lab_0x405d20;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405ea0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405d20;
            } else {
                goto lab_0x405d11;
            }
        } else {
            // 0x405d05
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405ffc
                int64_t v67 = (int64_t)mem; // 0x405ffc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405d20;
                } else {
                    // 0x40600f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405d11;
                }
            } else {
                goto lab_0x405d11;
            }
        }
    }
  lab_0x405d11:
    // 0x405d11
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405d20;
}
// Address range: 0x4061e0 - 0x4067a6
int64_t function_4061e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406201
    if (v3 < 1) {
        // 0x4063be
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4061fd
    int32_t v5 = *(int32_t *)a7; // 0x406209
    uint64_t v6 = a1 & 0xffffffff; // 0x40620b
    int64_t v7 = v2; // 0x406210
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406213
    *v8 = 0;
    int64_t v9; // 0x4061e0
    int64_t v10; // 0x4061e0
    int64_t v11; // 0x4061e0
    int64_t v12; // 0x4061e0
    int64_t str; // 0x4061e0
    int64_t v13; // 0x4061e0
    int64_t v14; // 0x4061e0
    int64_t v15; // 0x4061e0
    int64_t v16; // 0x4061e0
    int64_t v17; // 0x4061e0
    int32_t v18; // 0x4061e0
    char v19; // 0x4061e0
    if (v5 == 0) {
        // 0x4063f8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40622a;
    } else {
        // 0x406223
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406270
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406273
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406338;
            } else {
                int64_t v22 = v7 + 1; // 0x406286
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406296
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40634c;
                } else {
                    goto lab_0x4062a8;
                }
            }
        } else {
            goto lab_0x40622a;
        }
    }
  lab_0x40622a:
    // 0x40622a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406230
    *v24 = 0;
    int64_t v25; // 0x4061e0
    int64_t v26; // 0x4061e0
    int64_t v27; // 0x4061e0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406320
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40632d;
        }
        case 43: {
            // 0x406630
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40632d;
        }
        default: {
            // 0x40624c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4065af
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4066c8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40632d;
                } else {
                    // 0x4065bd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40625a;
                }
            } else {
                goto lab_0x40625a;
            }
        }
    }
  lab_0x406338:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40633f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4062a8;
    } else {
        goto lab_0x40634c;
    }
  lab_0x40625a:
    // 0x40625a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40632d;
  lab_0x40632d:
    // 0x40632d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406338;
  lab_0x4062a8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4062a8
    int64_t v31 = v30; // 0x4062a8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4062aa
    if ((int64_t)*v32 > v31) {
        // 0x4062af
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4062b2
    if (*v33 > v30) {
        // 0x4062b7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4062ba
    int64_t v35 = v31; // 0x4062be
    int64_t v36 = v15; // 0x4062be
    int64_t v37; // 0x4061e0
    int64_t v38; // 0x4061e0
    int64_t v39; // 0x4061e0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406428
        int64_t v41 = v40; // 0x406428
        v2 = v41;
        int64_t v42; // 0x4061e0
        if (*v33 == v40) {
            // 0x406610
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406618
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406434
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406438
                function_405ae0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406448
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406451
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40645a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406471
            int64_t v47 = v45 & 0xffffffff; // 0x406475
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40647e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406484
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406486;
                }
            }
            int64_t v48 = v47 + 1; // 0x406460
            int64_t v49 = v48 & 0xffffffff; // 0x406460
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406471
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40647e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406484
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406486;
                    }
                }
                // 0x406460
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406628
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406486;
    } else {
        goto lab_0x4062c4;
    }
  lab_0x40634c:
    // 0x40634c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40634f
    int64_t v51 = v12; // 0x40634f
    int64_t v52 = v14; // 0x40634f
    if (*(char *)v10 == 0) {
        goto lab_0x4062a8;
    } else {
        goto lab_0x406355;
    }
  lab_0x4062c4:;
    int32_t v53 = v35; // 0x4062c4
    int64_t v54; // 0x4061e0
    int64_t v55; // 0x4061e0
    int64_t v56; // 0x4061e0
    int64_t v57; // 0x4061e0
    int64_t v58; // 0x4061e0
    int64_t v59; // 0x4061e0
    char * v60; // 0x4061e0
    int64_t v61; // 0x4061e0
    int64_t v62; // 0x4062d9
    int64_t v63; // 0x4061e0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406413
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406416;
    } else {
        // 0x4062cc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4061e0
        int64_t v66 = v65 ? -1 : 1; // 0x4062e0
        int64_t v67 = (int64_t)"--"; // 0x4061e0
        int64_t v68 = v62; // 0x4061e0
        int64_t v69 = 3; // 0x4062e0
        unsigned char v70 = *(char *)v68; // 0x4062e0
        char v71 = *(char *)v67; // 0x4062e0
        char v72 = v71; // 0x4062e0
        bool v73 = false; // 0x4062e0
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
            // 0x4063d0
            if (*(char *)v62 == 45) {
                // 0x406490
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406490
                if (c == 0) {
                    goto lab_0x4063da;
                } else {
                    // 0x40649d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406520;
                    } else {
                        if (c == 45) {
                            // 0x406703
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406575;
                        } else {
                            // 0x4064ae
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406520;
                            } else {
                                // 0x4064b3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4064d4;
                                } else {
                                    // 0x4064ba
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406520;
                                    } else {
                                        goto lab_0x4064d4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4063da;
            }
        } else {
            uint32_t v75 = *v33; // 0x4062f0
            v2 = v75;
            int32_t v76 = *v32; // 0x4062f3
            int64_t v77 = v35 + 1; // 0x4062f6
            int32_t v78 = v77; // 0x4062f9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406660
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406307
                    function_405ae0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406315
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406416;
        }
    }
  lab_0x406355:;
    // 0x406355
    int64_t v79; // bp-104, 0x4061e0
    int64_t v80 = &v79; // 0x4061ea
    int64_t v81 = v50 + 1; // 0x406355
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40635c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406361
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406365
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406369
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406371
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406376
    int32_t c2 = v84; // 0x406376
    char * found_char_pos = strchr(str2, c2); // 0x406376
    int64_t v87 = *v82; // 0x40637b
    v2 = v87;
    int64_t v88 = *v85; // 0x406385
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406390
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406680
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40664d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4063be
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406376
    char v91 = *(char *)(v90 + 1); // 0x4063ab
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406365
        if (v91 != 58) {
            // 0x4063be
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4065d4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4066d8
                *v8 = 0;
            } else {
                // 0x4066bc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4065fe
            *v83 = 0;
            // 0x4063be
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4065de
        if (v93 != 0) {
            // 0x406670
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4065fe
            *v83 = 0;
            // 0x4063be
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4065f1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4065fe
            *v83 = 0;
            // 0x4063be
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40673a
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4066ea
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4066f1
        // 0x4065fe
        *v83 = 0;
        // 0x4063be
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406549
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40654b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406770
                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406721
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406728
            // 0x4063be
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406556
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40655a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406575;
  lab_0x406486:
    // 0x406486
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4062c4;
  lab_0x406575:;
    int64_t v99 = function_405bc0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406593
    // 0x4063be
    return v99 & 0xffffffff;
  lab_0x406416:;
    int32_t v100 = v55; // 0x406416
    if (v100 != (int32_t)v59) {
        // 0x40641a
        *(int32_t *)a7 = v100;
    }
    // 0x4063be
    return 0xffffffff;
  lab_0x4063da:
    // 0x4063da
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4063e1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4063be
    return v99 & 0xffffffff;
  lab_0x406520:
    // 0x406520
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406355;
  lab_0x4064d4:
    // 0x4064d4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405bc0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g13); // 0x4064fa
    if ((int32_t)v101 != -1) {
        // 0x4063be
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40650f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406520;
}
// Address range: 0x4067b0 - 0x406806
int64_t function_4067b0(int64_t a1) {
    // 0x4067b0
    *(int32_t *)&g47 = g30;
    *(int32_t *)&g48 = g29;
    int64_t v1; // 0x4067b0
    int64_t result = function_4061e0(v1, v1, v1, v1, v1, v1, &g47, a1 & 0xffffffff); // 0x4067d6
    g30 = *(int32_t *)&g47;
    g52 = g50;
    *(int32_t *)&g28 = g49;
    return result;
}
// Address range: 0x406810 - 0x406828
int64_t function_406810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406810
    return function_4067b0(1);
}
// Address range: 0x406830 - 0x406843
int64_t function_406830(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x406830
    return function_4067b0(0);
}
// Address range: 0x406850 - 0x406865
int64_t function_406850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406850
    return function_4061e0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406870 - 0x406886
int64_t function_406870(void) {
    // 0x406870
    return function_4067b0(0);
}
// Address range: 0x406890 - 0x4068a8
int64_t function_406890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406890
    return function_4061e0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4068b0 - 0x40692a
int64_t function_4068b0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4068bb
    int64_t v2 = (int64_t)&g14; // 0x4068bb
    int32_t * pwc; // 0x4068b0
    int64_t v3; // 0x4068b0
    int64_t n; // 0x4068b0
    if (a2 == 0) {
        goto lab_0x406902;
    } else {
        // 0x4068bd
        if (a3 == 0) {
            // 0x4068e8
            return -2;
        }
        // 0x4068c9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406902;
        } else {
            goto lab_0x4068d4;
        }
    }
  lab_0x406902:
    // 0x406902
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4068b0
    pwc = (int32_t *)&v4;
    goto lab_0x4068d4;
  lab_0x4068d4:;
    char * wstr = (char *)v3; // 0x4068da
    int64_t ps; // 0x4068b0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4068da
    int64_t result = v5; // 0x4068da
    if (v5 < 0xfffffffe) {
        // 0x4068e8
        return result;
    }
    int64_t result2 = result; // 0x406919
    if ((char)function_406d20(0, v3) == 0) {
        // 0x40691b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4068e8
    return result2;
}
// Address range: 0x406930 - 0x40693a
int64_t function_406930(void) {
    // 0x406930
    return function_402020(1);
}
// Address range: 0x406940 - 0x406a56
int64_t function_406940(int64_t a1, char ** a2, int64_t * a3, int64_t n) {
    char * str = (char *)a1; // 0x406961
    int32_t len = strlen(str); // 0x406961
    if (a2 == NULL) {
        // 0x406a2d
        return -1;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = -1;
    int64_t * str3 = (int64_t *)(v3 * n + v1);
    int32_t v4 = 0;
    int64_t v5 = 0; // 0x4069c7
    int64_t v6 = v1; // 0x406940
    int64_t v7 = v2; // 0x4069ce
    int64_t str4; // 0x406940
    int64_t v8; // 0x406940
    int32_t v9; // 0x406940
    int32_t v10; // 0x406940
    int32_t v11; // 0x406940
    int64_t v12; // 0x406940
    int64_t result; // 0x406940
    int32_t v13; // 0x4069c3
    char * str2; // 0x4069e2
    while (true) {
        // 0x4069d7
        str4 = v6;
        v8 = v5;
        v10 = v4;
        str2 = (char *)v7;
        v9 = v10;
        if (strncmp(str2, str, len) == 0) {
            // 0x4069eb
            result = v8;
            if (len == strlen(str2)) {
                // 0x406a2d
                return result;
            }
            if (v3 == -1) {
                // break -> 0x4069ff
                break;
            }
            // 0x406990
            v9 = 1;
            if (a3 != NULL) {
                // 0x40699e
                v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                v9 = v13;
            }
        }
        // 0x4069c7
        v4 = v9;
        v5 = v8 + 1;
        v7 = *(int64_t *)(8 * v5 + v2);
        v6 = str4 + n;
        v12 = v3;
        v11 = v4;
        if (v7 == 0) {
            return (char)v11 == 0 ? v12 : -2;
        }
    }
    int64_t v14 = v8 + 1; // 0x406a03
    int64_t v15 = *(int64_t *)(8 * v14 + v2); // 0x406a0a
    v12 = v8;
    v11 = v10;
    while (v15 != 0) {
        // 0x4069d7
        v3 = v8;
        str3 = (int64_t *)(v3 * n + v1);
        v4 = v10;
        v5 = v14;
        v6 = str4 + n;
        v7 = v15;
        while (true) {
            // 0x4069d7
            str4 = v6;
            v8 = v5;
            v10 = v4;
            str2 = (char *)v7;
            v9 = v10;
            if (strncmp(str2, str, len) == 0) {
                // 0x4069eb
                result = v8;
                if (len == strlen(str2)) {
                    // 0x406a2d
                    return result;
                }
                if (v3 == -1) {
                    // break -> 0x4069ff
                    break;
                }
                // 0x406990
                v9 = 1;
                if (a3 != NULL) {
                    // 0x40699e
                    v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                    v9 = v13;
                }
            }
            // 0x4069c7
            v4 = v9;
            v5 = v8 + 1;
            v7 = *(int64_t *)(8 * v5 + v2);
            v6 = str4 + n;
            v12 = v3;
            v11 = v4;
            if (v7 == 0) {
                return (char)v11 == 0 ? v12 : -2;
            }
        }
        // 0x4069ff
        v14 = v8 + 1;
        v15 = *(int64_t *)(8 * v14 + v2);
        v12 = v8;
        v11 = v10;
    }
  lab_0x406a18:
    // 0x406a2d
    return (char)v11 == 0 ? v12 : -2;
}
// Address range: 0x406a60 - 0x406ad1
int64_t function_406a60(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x406a60
    if (a3 == -1) {
        // 0x406ac0
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x406a75
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x406a84
    function_404cb0(1, a1);
    function_4049a0(0, 8, a2);
    error(0, 0, format);
    return &g56;
}
// Address range: 0x406ae0 - 0x406bf8
int64_t function_406ae0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x406b0d
    fputs_unlocked(v1, g36);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x406b80
        int64_t v5; // 0x406b87
        int64_t v6; // 0x406ba7
        while (v3 != 0) {
            // 0x406b6b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x406b30
                break;
            }
            // 0x406b7d
            v4 = v3 + 1;
            v5 = function_404cd0(v2);
            __fprintf_chk(g36, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x406bb0
                goto lab_0x406bb0;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x406b33
        int64_t v8 = function_404cd0(v2); // 0x406b3d
        __fprintf_chk(g36, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x406b5d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x406b6b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x406b30
                    break;
                }
                // 0x406b7d
                v4 = v3 + 1;
                v5 = function_404cd0(v2);
                __fprintf_chk(g36, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x406bb0
                    goto lab_0x406bb0;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x406b30
            v7 = v3 + 1;
            v8 = function_404cd0(v2);
            __fprintf_chk(g36, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x406bb0:;
    int64_t v10 = (int64_t)g36; // 0x406bb0
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x406bb7
    uint64_t result = *v11; // 0x406bb7
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x406be0
        return __overflow(g36, 10);
    }
    // 0x406bc1
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x406c00 - 0x406c70
int64_t function_406c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_406940(a2, (char **)a3, (int64_t *)a4, a5); // 0x406c2c
    int64_t result = v1; // 0x406c34
    if (v1 < 0) {
        // 0x406c48
        function_406a60(a1, a2, v1);
        function_406ae0(a3, a4, a5);
        result = -1;
    }
    // 0x406c36
    return result;
}
// Address range: 0x406c70 - 0x406cbd
int64_t function_406c70(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x406c70
    if (result == 0) {
        // 0x406cb1
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x406ca8
    int32_t n = a4; // 0x406ca8
    int64_t v1 = result; // 0x406caf
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x406cb1
        return result;
    }
    int64_t str3 = str2; // 0x406caf
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x406c90
    int64_t result2 = 0; // 0x406c9d
    while (v2 != 0) {
        // 0x406c9f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x406cb1
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x406cb1
    return result2;
}
// Address range: 0x406cc0 - 0x406d1d
int64_t function_406cc0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406cc7
    int64_t v2; // 0x406cc0
    int64_t result = function_4059c0(a1, v2); // 0x406cd8
    if ((v2 & 32) != 0) {
        // 0x406d00
        if ((int32_t)result == 0) {
            // 0x406d04
            *__errno_location() = 0;
        }
        // 0x406cfa
        return 0xffffffff;
    }
    // 0x406ce1
    if ((int32_t)result == 0) {
        // 0x406cfa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406ce8
    if (v1 == 0) {
        // 0x406cea
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x406cfa
    return result2;
}
// Address range: 0x406d20 - 0x406d7e
int64_t function_406d20(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406d26
    if (locale == NULL) {
        // 0x406d53
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406d26
    bool v2; // 0x406d20
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g15; // 0x406d20
    int64_t v5 = v1; // 0x406d20
    int64_t v6 = 2; // 0x406d45
    unsigned char v7 = *(char *)v5; // 0x406d45
    char v8 = *(char *)v4; // 0x406d45
    char v9 = v8; // 0x406d45
    bool v10 = false; // 0x406d45
    while (v7 == v8) {
        // 0x406d38
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406d51
    int64_t v13 = v1; // 0x406d51
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406d53
        return 0;
    }
    int64_t v14 = 6; // 0x406d51
    unsigned char v15 = *(char *)v13; // 0x406d6d
    char v16 = *(char *)v12; // 0x406d6d
    char v17 = v16; // 0x406d6d
    bool v18 = false; // 0x406d6d
    while (v15 == v16) {
        // 0x406d60
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
// Address range: 0x406d80 - 0x4072e2
int64_t function_406d80(void) {
    char * v1 = nl_langinfo(14); // 0x406d96
    char * v2 = g51; // 0x406d9b
    char * v3; // 0x406d80
    int64_t v4; // 0x406d80
    int64_t v5; // 0x406d80
    int64_t v6; // 0x406d80
    int64_t v7; // 0x406d80
    int32_t size; // 0x406d80
    int32_t size2; // 0x406d80
    int32_t len; // 0x406e52
    int64_t v8; // 0x406e52
    char * env_val; // 0x406e3d
    if (v2 == NULL) {
        // 0x406e38
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406ea5;
        } else {
            // 0x406e4a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406ea5;
            } else {
                // 0x406e4f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x406e3d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4072d5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406ea5;
                    } else {
                        // 0x407249
                        size2 = len + 14;
                        goto lab_0x406e6b;
                    }
                } else {
                    goto lab_0x406e6b;
                }
            }
        }
    } else {
        // 0x406d80
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x406dba;
    }
  lab_0x4070ec:;
    // 0x4070ec
    struct _IO_FILE * stream; // 0x406f2b
    int32_t v10 = __uflow(stream); // 0x4070ef
    int64_t v11; // 0x406d80
    int64_t v12 = v11; // 0x4070f9
    int64_t v13; // 0x406d80
    int64_t v14 = v13; // 0x4070f9
    int32_t v15 = v10; // 0x4070f9
    int64_t v16; // 0x406d80
    int64_t v17 = v16; // 0x4070f9
    int64_t v18 = v11; // 0x4070f9
    int64_t v19 = v13; // 0x4070f9
    int64_t v20 = v16; // 0x4070f9
    if (v10 == -1) {
        // break -> 0x4070ff
        goto lab_0x4070ff;
    }
    goto lab_0x406f79;
  lab_0x406f6e:;
    // 0x406f6e
    int64_t v90; // 0x406d80
    int64_t * v32; // 0x406f60
    *v32 = v90 + 1;
    int64_t v89; // 0x406d80
    v12 = v89;
    int64_t v91; // 0x406d80
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406d80
    v17 = v92;
    goto lab_0x406f79;
  lab_0x406f79:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406d80
    int32_t v25; // bp-120, 0x406d80
    int32_t v26; // bp-184, 0x406d80
    int64_t v27; // 0x406f2b
    int64_t v28; // 0x406f48
    int64_t v29; // 0x406f4d
    int64_t * v30; // 0x406f64
    switch (c) {
        case 32: {
            goto lab_0x406f60;
        }
        case 10: {
            goto lab_0x406f60;
        }
        case 9: {
            goto lab_0x406f60;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407151
            int32_t v33; // 0x406d80
            char v34; // 0x406d80
            int32_t v35; // 0x40715e
            if (v31 < *v30) {
                // 0x407130
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40715b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407151
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407130
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40715b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407140
                v36 = v33;
            }
            // 0x40722f
            if (v36 == -1) {
                // break -> 0x4070ff
                break;
            }
            goto lab_0x406f60;
        }
        default: {
            // 0x406f8f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4070ff
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406fb8
            int64_t v39 = v37 + 4; // 0x406fba
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406fc6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406fc8
            while (v41 == 0) {
                // 0x406fb8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406fe6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406ff2
            int64_t v45 = v43 + 4; // 0x406ff4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407000
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407002
            while (v47 == 0) {
                // 0x406ff2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406fef
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407018
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407028
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40702c
            int64_t v52 = v51 + v48; // 0x407035
            int64_t * mem; // 0x406d80
            int64_t v53; // 0x406d80
            int64_t v54; // 0x406d80
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40716b
                int64_t v56 = v55 + 3; // 0x407177
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407051
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407060
            if (mem == NULL) {
                // 0x40728c
                free((int64_t *)v21);
                function_4059c0(v27, v53);
                v24 = (int64_t)&g14;
                goto lab_0x406f04;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407078
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407082
            uint32_t v62 = (int32_t)v59; // 0x407085
            int64_t v63; // 0x406d80
            if (v62 >= 8) {
                // 0x407194
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4071ae
                int64_t v66 = v61 - v65; // 0x4071b2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4071bd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4071ce
                    int64_t v70 = v69 & 0xffffffff; // 0x4071ce
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4071cb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40725f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407097
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40709b
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
            int64_t v73 = v51 + 1; // 0x4070ab
            int64_t v74 = v60 - 1; // 0x4070af
            uint32_t v75 = (int32_t)v73; // 0x4070b4
            int64_t v76; // 0x406d80
            if (v75 >= 8) {
                // 0x4071e2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4071ec
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4071fc
                int64_t v80 = v74 - v79; // 0x407200
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40720b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40721b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407219
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407276
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40727e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4070c6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4070ca
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4072c3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4070de
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x406f6e;
            } else {
                goto lab_0x4070ec;
            }
        }
    }
  lab_0x406f60:;
    int64_t v93 = v23; // 0x406d80
    int64_t v94 = v22; // 0x406d80
    int64_t v95 = v21; // 0x406d80
    goto lab_0x406f60_2;
  lab_0x406ea5:;
    int64_t * mem3 = malloc(size); // 0x406ea5
    int64_t v97 = (int64_t)&g14; // 0x406eb0
    int64_t v98; // 0x406d80
    int64_t path; // 0x406d80
    if (mem3 == NULL) {
        goto lab_0x406e82;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406ea5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406ec6;
    }
  lab_0x406dba:;
    int64_t str = v1 == NULL ? (int64_t)&g14 : (int64_t)v1; // 0x406dad
    char v100 = *v3; // 0x406dba
    int64_t v101; // 0x406d80
    if (v100 == 0) {
        // 0x406e14
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406d80
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406d80
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406e00
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406e07;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406dd0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x406ddd
        char v107 = *(char *)v106; // 0x406de2
        v102 = v107;
        if (v107 == 0) {
            // 0x406e14
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x406deb
    v104 = v103 + 1;
  lab_0x406e07:
    // 0x406e14
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406e82:;
    char * v108 = (char *)v97;
    g51 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x406dba;
  lab_0x406ec6:;
    int64_t v109 = v98 + path; // 0x406ec6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406ef2
    v24 = (int64_t)&g14;
    if (fd >= 0) {
        // 0x406f21
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x407252
            close(fd);
            v24 = (int64_t)&g14;
        } else {
            // 0x406f45
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406f60_2:;
                uint64_t v96 = *v32; // 0x406f60
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4070ec;
                } else {
                    goto lab_0x406f6e;
                }
            }
          lab_0x4070ff:
            // 0x4070ff
            function_4059c0(v27, v19);
            v24 = (int64_t)&g14;
            if (v18 != 0) {
                // 0x40711e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406f04;
  lab_0x406e6b:;
    int64_t * mem4 = malloc(size2); // 0x406e6b
    v97 = (int64_t)&g14;
    if (mem4 != NULL) {
        // 0x406f11
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406ec6;
    } else {
        goto lab_0x406e82;
    }
  lab_0x406f04:
    // 0x406f04
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406e82;
}
// Address range: 0x4072f0 - 0x40734d
int64_t function_4072f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4072f0
    return function_401570();
}
// Address range: 0x407350 - 0x407351
int64_t function_407350(void) {
    // 0x407350
    int64_t result; // 0x407350
    return result;
}
// Address range: 0x407360 - 0x407378
int64_t function_407360(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407360
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g20);
}
// Address range: 0x407378 - 0x407398
int64_t function_407378(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g16; // 0x407382
    while (*(int64_t *)v1 != -1) {
        // 0x407383
        v1 -= 8;
    }
    // 0x407394
    return result;
}
