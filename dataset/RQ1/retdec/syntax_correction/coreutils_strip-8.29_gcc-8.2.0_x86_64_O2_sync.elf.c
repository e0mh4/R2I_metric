#include "decompile_retdec.h"
// Address range: 0x4016b0 - 0x4016b5
int64_t function_4016b0(void) {
    // 0x4016b0
    abort();
    // UNREACHABLE
}
// Address range: 0x4016b5 - 0x4016ba
int64_t function_4016b5(void) {
    // 0x4016b5
    abort();
    // UNREACHABLE
}
// Address range: 0x4016ba - 0x4016bf
int64_t function_4016ba(void) {
    // 0x4016ba
    abort();
    // UNREACHABLE
}
// Address range: 0x4016bf - 0x4016c4
int64_t function_4016bf(void) {
    // 0x4016bf
    abort();
    // UNREACHABLE
}
// Address range: 0x4016c4 - 0x4016c9
int64_t function_4016c4(void) {
    // 0x4016c4
    abort();
    // UNREACHABLE
}
// Address range: 0x4016c9 - 0x4016ce
int64_t function_4016c9(void) {
    // 0x4016c9
    abort();
    // UNREACHABLE
}
// Address range: 0x4016d0 - 0x401a50
int64_t function_4016d0(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x4016df
    function_401f30(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x4016d0
    function_405af0(0x401e90, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    int64_t v3; // 0x4016d0
    int64_t v4; // 0x4016d0
    while (true) {
        // 0x401728
        v3 = 0;
        int64_t v5 = 0; // 0x4016d0
        uint32_t v6; // 0x4016d0
        while (true) {
          lab_0x401728:
            // 0x401728
            v4 = v5;
            v6 = (int32_t)function_405230(v1, a2, "df", &g2, 0, v2);
            switch (v6) {
                case -1: {
                    goto lab_0x4017bc;
                }
                case -130: {
                    // 0x401a18
                    function_401b30(0);
                    // UNREACHABLE
                }
                default: {
                    if (v6 <= 0xffffff7e) {
                        if (v6 == -131) {
                            // 0x40176b
                            function_403fd0((int64_t)g29, "sync", "GNU coreutils", (int64_t)g17, "Jim Meyering", "Giuseppe Scrivano");
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401a0e;
                    }
                    // 0x401751
                    v5 = 1;
                    if (v6 != 100) {
                        // break -> 0x4017a8
                        break;
                    }
                    goto lab_0x401728;
                }
            }
        }
        if (v6 != 102) {
          lab_0x401a0e:
            // 0x401a0e
            function_401b30(1);
            // UNREACHABLE
        }
    }
  lab_0x4017bc:;
    int64_t v7 = (int64_t)*(int32_t *)0x60925c; // 0x4017c5
    int64_t v8 = (int64_t)"df"; // 0x4017c5
    if (v3 != 0 && v4 != 0) {
        char * format = dcgettext(NULL, "cannot specify both --data and --file-system", 5); // 0x4017d8
        error(1, (int32_t)"cannot specify both --data and --file-system" ^ (int32_t)"cannot specify both --data and --file-system", format);
        v7 = &g49;
        v8 = (int64_t)format;
    }
    int32_t v9 = v7; // 0x4017ee
    int32_t v10 = v9 - (int32_t)a1; // 0x4017ee
    if (((char)(v10 < 0 == ((v10 ^ v9) & (int32_t)(v7 ^ a1)) < 0) & (char)v4) != 0) {
        // 0x401a1f
        error(1, (int32_t)"--data needs at least one argument" ^ (int32_t)"--data needs at least one argument", dcgettext(NULL, "--data needs at least one argument", 5));
        return &g49;
    }
    if (v7 >= v1) {
        // 0x4019a5
        sync();
        // 0x4019b0
        return 0;
    }
    int64_t v11 = v7; // 0x40181b
    int64_t v12 = v3 == 0 ? v4 : (int64_t)&g2; // 0x40181b
    int64_t v13 = v8 & -256 | (int64_t)(v10 < 0 == ((v10 ^ v9) & (int32_t)(v7 ^ a1)) < 0); // 0x40181b
    int64_t v14 = 1; // 0x40181b
    int64_t v15; // 0x4016d0
    int64_t v16; // 0x4016d0
    int64_t v17; // 0x4016d0
    int64_t v18; // 0x4016d0
    int64_t v19; // 0x4016d0
    int64_t v20; // 0x4016d0
    int64_t v21; // 0x4016d0
    int64_t v22; // 0x4016d0
    int64_t v23; // 0x4018b0
    int32_t fd; // 0x4018b9
    while (true) {
      lab_0x4018a9:;
        int64_t v24 = v13;
        int64_t v25 = v12;
        v23 = *(int64_t *)((0x100000000 * v11 >> 29) + a2);
        char * path = (char *)v23; // 0x4018b9
        fd = open(path, O_NONBLOCK);
        if (fd >= 0) {
            int64_t v26 = fd; // 0x4018be
            int64_t v27 = function_4043a0(v26, 3, v24, v25); // 0x401829
            if ((int32_t)v27 == -1) {
                goto lab_0x40191f;
            } else {
                int64_t v28 = v27 & 0xfffff7ff; // 0x401842
                if ((int32_t)function_4043a0(v26, 4, v28, v25) < 0) {
                    goto lab_0x40191f;
                } else {
                    int32_t v29; // 0x4016d0
                    switch (v3 == 0 ? (int32_t)v4 : 2) {
                        case 1: {
                            // 0x401a01
                            v29 = fdatasync(fd);
                            // break -> 0x401871
                            break;
                        }
                        case 2: {
                            // 0x4019f4
                            v29 = syncfs(fd);
                            // break -> 0x401871
                            break;
                        }
                        default: {
                            // 0x401869
                            v29 = fsync(fd);
                            // break -> 0x401871
                            break;
                        }
                    }
                    // 0x401871
                    v17 = v25;
                    v19 = v28;
                    v15 = 1;
                    if (v29 < 0) {
                        // 0x4019c7
                        v21 = (int64_t)"error syncing %s";
                        v22 = function_403900(4, v23);
                        goto lab_0x40193a;
                    } else {
                        goto lab_0x40187f;
                    }
                }
            }
        } else {
            int32_t err_num = *__errno_location(); // 0x4018d9
            v18 = v25;
            v20 = v24;
            v16 = 0;
            if (open(path, 2049) < 0) {
                int64_t v30 = function_403900(4, v23); // 0x4018ef
                char * format2 = dcgettext(NULL, "error opening %s", 5); // 0x401903
                error(0, err_num, format2);
                v18 = v30;
                v20 = (int64_t)format2;
                v16 = 0;
            }
            goto lab_0x40188f;
        }
    }
  lab_0x4019b0:;
    // 0x4019b0
    int64_t v31; // 0x4016d0
    return v31 % 256 ^ 1;
  lab_0x40191f:
    // 0x40191f
    v21 = (int64_t)"couldn't reset non-blocking mode %s";
    v22 = function_403900(4, v23);
    goto lab_0x40193a;
  lab_0x40188f:
    // 0x40188f
    v31 = v16 & v14;
    g26 = &g27;
    v11 = &g27;
    v12 = v18;
    v13 = v20;
    v14 = v31;
    if (v1 <= (int64_t)&g27) {
        // break -> 0x4019b0
        goto lab_0x4019b0;
    }
    goto lab_0x4018a9;
  lab_0x40193a:;
    char * format3 = dcgettext(NULL, (char *)v21, 5); // 0x40193c
    error(0, *__errno_location(), format3);
    v17 = v22;
    v19 = (int64_t)format3;
    v15 = 0;
    goto lab_0x40187f;
  lab_0x40187f:
    // 0x40187f
    v18 = v17;
    v20 = v19;
    v16 = v15;
    if (close(fd) < 0) {
        int64_t v32 = function_403900(4, v23); // 0x40196e
        char * format4 = dcgettext(NULL, "failed to close %s", 5); // 0x401982
        error(0, *__errno_location(), format4);
        v18 = v32;
        v20 = (int64_t)format4;
        v16 = 0;
    }
    goto lab_0x40188f;
}
// Address range: 0x401a50 - 0x401a7b
// Address range: 0x401a7b - 0x401a9a
int64_t function_401a7b(void) {
    // 0x401a7b
    return &g28;
}
// Address range: 0x401a9a - 0x401ad1
int64_t function_401a9a(void) {
    // 0x401a9a
    return 0;
}
// Address range: 0x401ad1 - 0x401b28
int64_t function_401ad1(void) {
    // 0x401ad1
    if (g32 != 0) {
        // 0x401b27
        int64_t result; // 0x401ad1
        return result;
    }
    int64_t v1 = g33; // 0x401b04
    int64_t result2; // 0x401b16
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401b16
        result2 = function_401a7b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401b06
        v1++;
    }
    // 0x401afa
    g33 = v1;
    // 0x401b16
    result2 = function_401a7b();
    g32 = 1;
    return result2;
}
// Address range: 0x401b28 - 0x401b2d
int64_t function_401b28(void) {
    // 0x401b28
    return function_401a9a();
}
// Address range: 0x401b30 - 0x401e65
int64_t function_401b30(int64_t a1) {
    int32_t status = a1; // 0x401b46
    if (status != 0) {
        // 0x401b4a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401b6f
        exit(status);
        // UNREACHABLE
    }
    // 0x401b76
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION] [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Synchronize cached writes to persistent storage\n\nIf one or more files are specified, sync only them,\nor their containing file systems.\n\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -d, --data             sync only file data, no unneeded metadata\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -f, --file-system      sync the file systems that contain the files\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x401c43
    bool v2; // 0x401b30
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401cc8
    int64_t v6 = *(int64_t *)v5; // 0x401ccc
    int64_t v7 = 5; // 0x401cd2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"sync";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401cde
        char v11 = *(char *)v9; // 0x401cde
        char v12 = v11; // 0x401cde
        bool v13 = false; // 0x401cde
        while (v10 == v11) {
            // 0x401cd4
            v7--;
            int64_t v14 = v9 + v3; // 0x401cde
            int64_t v15 = v8 + v3; // 0x401cde
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
            // break -> 0x401cea
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x401cea
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401dfc;
        } else {
            // 0x401de6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e3b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401d4c;
            } else {
                goto lab_0x401dfc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401d4c;
        } else {
            // 0x401d32
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e3b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401d4c;
            } else {
                goto lab_0x401d4c;
            }
        }
    }
  lab_0x401dfc:
    // 0x401dfc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401d8c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b6f
    exit(status);
    // UNREACHABLE
  lab_0x401d4c:
    // 0x401d4c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401d8c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b6f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401e70 - 0x401e78
int64_t function_401e70(int64_t a1) {
    // 0x401e70
    g35 = a1;
    int64_t result; // 0x401e70
    return result;
}
// Address range: 0x401e80 - 0x401e88
int64_t function_401e80(int64_t a1) {
    // 0x401e80
    g34 = a1;
    int64_t result; // 0x401e80
    return result;
}
// Address range: 0x401e90 - 0x401f2e
int64_t function_401e90(void) {
    // 0x401e90
    int32_t * err_num; // 0x401ea6
    if ((int32_t)function_405330((int64_t)g29) == 0) {
        goto lab_0x401ebc;
    } else {
        // 0x401ea6
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x401ed3;
        } else {
            // 0x401eb7
            if (*err_num != 32) {
                goto lab_0x401ed3;
            } else {
                goto lab_0x401ebc;
            }
        }
    }
  lab_0x401ebc:;
    int64_t result = function_405330((int64_t)g31); // 0x401ec3
    if ((int32_t)result == 0) {
        // 0x401ecc
        return result;
    }
    // 0x401f0e
    _exit(g18);
    // UNREACHABLE
  lab_0x401ed3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401edf
    if (g35 == 0) {
        // 0x401f19
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401ef3
        error(0, *err_num, "%s: %s", (char *)function_4039a0((int64_t)g35), v1);
    }
    // 0x401f0e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401f30 - 0x401fc9
int64_t function_401f30(int64_t str) {
    // 0x401f30
    if (str == 0) {
        // 0x401fa9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401f3e
    int64_t result = (int64_t)found_char_pos; // 0x401f3e
    if (found_char_pos == NULL) {
        // 0x401f99
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401f48
    if (v1 - str < 7) {
        // 0x401f99
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x401f58
    bool v2; // 0x401f30
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401f30
    int64_t v5 = result - 6; // 0x401f30
    int64_t v6 = 7; // 0x401f66
    unsigned char v7 = *(char *)v5; // 0x401f66
    char v8 = *(char *)v4; // 0x401f66
    char v9 = v8; // 0x401f66
    bool v10 = false; // 0x401f66
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
    int64_t v12 = (int64_t)"lt-"; // 0x401f70
    int64_t v13 = v1; // 0x401f70
    int64_t v14 = 3; // 0x401f70
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401f99
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401f82
    char v16 = *(char *)v12; // 0x401f82
    char v17 = v16; // 0x401f82
    bool v18 = false; // 0x401f82
    while (v15 == v16) {
        // 0x401f72
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
    int64_t v20 = v1; // 0x401f8c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401f8e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x401f99
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x401fd0 - 0x4020c2
int64_t function_401fd0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401fe4
    int64_t result = (int64_t)v1; // 0x401fe4
    if (result != a1) {
        // 0x401ff1
        return result;
    }
    int64_t v2 = function_4053f0(); // 0x402000
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4020b6
    if (v3 == 85) {
        // 0x402010
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4020a8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40203e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40204b
        // 0x401ff1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4020a8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40208d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40209a
    // 0x401ff1
    return result4;
}
// Address range: 0x4020d0 - 0x402127
int64_t function_4020d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4020d0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402118
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402127 - 0x4032f1
int64_t function_402127(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402171
    int64_t v3 = 0; // 0x402171
    int64_t v4; // 0x402127
    int64_t v5; // 0x402127
    int64_t v6; // 0x402127
    int64_t v7; // 0x402127
    int64_t v8; // 0x402127
    int64_t v9; // 0x402127
    int64_t v10; // 0x402127
    int64_t v11; // 0x402127
    int64_t v12; // 0x402127
    int64_t v13; // 0x402127
    int64_t v14; // 0x402127
    int64_t v15; // 0x402127
    int64_t v16; // 0x402127
    int64_t v17; // 0x402127
    int64_t v18; // 0x402127
    int64_t result; // 0x402127
    int64_t v19; // 0x402127
    int32_t wc; // bp+132, 0x402127
    int64_t ps; // bp+136, 0x402127
    char v20; // 0x4026e0
    int64_t v21; // 0x4026e0
    int64_t v22; // 0x402a88
    int64_t v23; // 0x402127
    int64_t v24; // 0x402aa7
    int32_t v25; // 0x402127
    while (true) {
      lab_0x402178_2:
        // 0x402178
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402127
        int64_t v27; // 0x4021ac
        while (true) {
          lab_0x402178:
            // 0x402178
            v5 = v26;
            bool v28 = v15 == v5; // 0x402183
            if (v15 == -1) {
                // 0x402185
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402193
            if (v28) {
                // break (via goto) -> 0x4028f8
                goto lab_0x4028f8;
            }
            // 0x40219c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g48 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40278b
                    if (v25 % 2 == 0) {
                        goto lab_0x4022d1;
                    }
                    // 0x402bad
                    v26 = v5 + 1;
                    goto lab_0x402178;
                }
                case 7: {
                    goto lab_0x4022d1;
                }
                case 8: {
                    goto lab_0x4022d1;
                }
                case 9: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4022d1;
                }
                case 12: {
                    goto lab_0x4022d1;
                }
                case 13: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40229d;
                }
                case 36: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4022d1;
                }
                case 38: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4022d1;
                }
                case 44: {
                    goto lab_0x4022d1;
                }
                case 45: {
                    goto lab_0x4022d1;
                }
                case 46: {
                    goto lab_0x4022d1;
                }
                case 47: {
                    goto lab_0x4022d1;
                }
                case 48: {
                    goto lab_0x4022d1;
                }
                case 49: {
                    goto lab_0x4022d1;
                }
                case 50: {
                    goto lab_0x4022d1;
                }
                case 51: {
                    goto lab_0x4022d1;
                }
                case 52: {
                    goto lab_0x4022d1;
                }
                case 53: {
                    goto lab_0x4022d1;
                }
                case 54: {
                    goto lab_0x4022d1;
                }
                case 55: {
                    goto lab_0x4022d1;
                }
                case 56: {
                    goto lab_0x4022d1;
                }
                case 57: {
                    goto lab_0x4022d1;
                }
                case 58: {
                    goto lab_0x4022d1;
                }
                case 59: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4022d1;
                }
                case 66: {
                    goto lab_0x4022d1;
                }
                case 67: {
                    goto lab_0x4022d1;
                }
                case 68: {
                    goto lab_0x4022d1;
                }
                case 69: {
                    goto lab_0x4022d1;
                }
                case 70: {
                    goto lab_0x4022d1;
                }
                case 71: {
                    goto lab_0x4022d1;
                }
                case 72: {
                    goto lab_0x4022d1;
                }
                case 73: {
                    goto lab_0x4022d1;
                }
                case 74: {
                    goto lab_0x4022d1;
                }
                case 75: {
                    goto lab_0x4022d1;
                }
                case 76: {
                    goto lab_0x4022d1;
                }
                case 77: {
                    goto lab_0x4022d1;
                }
                case 78: {
                    goto lab_0x4022d1;
                }
                case 79: {
                    goto lab_0x4022d1;
                }
                case 80: {
                    goto lab_0x4022d1;
                }
                case 81: {
                    goto lab_0x4022d1;
                }
                case 82: {
                    goto lab_0x4022d1;
                }
                case 83: {
                    goto lab_0x4022d1;
                }
                case 84: {
                    goto lab_0x4022d1;
                }
                case 85: {
                    goto lab_0x4022d1;
                }
                case 86: {
                    goto lab_0x4022d1;
                }
                case 87: {
                    goto lab_0x4022d1;
                }
                case 88: {
                    goto lab_0x4022d1;
                }
                case 89: {
                    goto lab_0x4022d1;
                }
                case 90: {
                    goto lab_0x4022d1;
                }
                case 91: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4022d1;
                }
                case 94: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4022d1;
                }
                case 96: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4022d1;
                }
                case 98: {
                    goto lab_0x4022d1;
                }
                case 99: {
                    goto lab_0x4022d1;
                }
                case 100: {
                    goto lab_0x4022d1;
                }
                case 101: {
                    goto lab_0x4022d1;
                }
                case 102: {
                    goto lab_0x4022d1;
                }
                case 103: {
                    goto lab_0x4022d1;
                }
                case 104: {
                    goto lab_0x4022d1;
                }
                case 105: {
                    goto lab_0x4022d1;
                }
                case 106: {
                    goto lab_0x4022d1;
                }
                case 107: {
                    goto lab_0x4022d1;
                }
                case 108: {
                    goto lab_0x4022d1;
                }
                case 109: {
                    goto lab_0x4022d1;
                }
                case 110: {
                    goto lab_0x4022d1;
                }
                case 111: {
                    goto lab_0x4022d1;
                }
                case 112: {
                    goto lab_0x4022d1;
                }
                case 113: {
                    goto lab_0x4022d1;
                }
                case 114: {
                    goto lab_0x4022d1;
                }
                case 115: {
                    goto lab_0x4022d1;
                }
                case 116: {
                    goto lab_0x4022d1;
                }
                case 117: {
                    goto lab_0x4022d1;
                }
                case 118: {
                    goto lab_0x4022d1;
                }
                case 119: {
                    goto lab_0x4022d1;
                }
                case 120: {
                    goto lab_0x4022d1;
                }
                case 121: {
                    goto lab_0x4022d1;
                }
                case 122: {
                    goto lab_0x4022d1;
                }
                case 123: {
                    goto lab_0x402275;
                }
                case 124: {
                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402275;
                }
                case 126: {
                    goto lab_0x40229d;
                }
                default: {
                    goto lab_0x402675;
                }
            }
        }
      lab_0x402675:
        if (v23 != 1) {
            // 0x4029e0
            ps = 0;
            int64_t len = v15; // 0x4029f0
            if (v15 == -1) {
                // 0x4029f2
                len = strlen((char *)str);
            }
            // 0x402a1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402a7f:
                // 0x402a7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402a84
                int64_t v30 = v29 + str;
                v24 = function_4052b0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402ffa_2;
                    }
                    case -1: {
                        goto lab_0x402ffa_2;
                    }
                    case -2: {
                        // 0x4030dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403117
                            v19 = v18;
                            int64_t v31 = v18; // 0x40311a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403127
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403120
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402ffa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402ffa_2;
                    }
                    case 1: {
                        goto lab_0x402a50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402afc
                        char v34 = *(char *)v33; // 0x402b0d
                        unsigned char v35; // 0x402127
                        if (v34 < 125) {
                            // 0x402b18
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402b2f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402b00
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402b0d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402b18
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402b2f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402b00
                            v33++;
                        }
                        goto lab_0x402a50;
                    }
                }
            }
            goto lab_0x402ffa_2;
        } else {
            // 0x4026c4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4022d1;
        }
    }
  lab_0x4028f8:
    // 0x4028f8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4031fa
        if (v8 > result) {
            // 0x403203
            *(char *)(v12 + result) = 0;
        }
        // 0x402527
        return result;
    }
    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4022d1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4022e0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4024ea_2;
        }
    }
    int64_t v39 = result; // 0x4023e1
    char v40 = v20; // 0x4023e1
    int64_t v41 = v38; // 0x4023e1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4023e1
    int64_t v43 = v36; // 0x4023e1
    goto lab_0x40235d;
  lab_0x4024ea_2:
    // 0x402527
    return function_4020d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402ffa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4022d1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402bce
        int64_t v50 = v5 + 1; // 0x402cb1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402cb8
        char v52 = v20; // 0x402cb8
        int64_t v53 = result; // 0x402cb8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402c81
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402c85
            int64_t v56 = v54 + 1; // 0x402c8a
            int64_t v57 = v51 + 1; // 0x402cb1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402c7c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402c81
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402c85
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
        goto lab_0x40235d;
    }
  lab_0x402a50:
    // 0x402a50
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402a6f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402a72
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402ffa
        goto lab_0x402ffa_2;
    }
    goto lab_0x402a7f;
  lab_0x40229d:
    // 0x40229d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4024ea_2;
    }
    goto lab_0x4022d1;
  lab_0x402275:;
    bool v60 = v15 == 1; // 0x402280
    if (v15 == -1) {
        // 0x402282
        v60 = *(char *)v1 == 0;
    }
    // 0x40228e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4022d1;
    } else {
        goto lab_0x40229d;
    }
  lab_0x40235d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402362
        *(char *)(v44 + v45) = v40;
    }
    // 0x402366
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402178_2;
}
// Address range: 0x403300 - 0x40349e
int64_t function_403300(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403302
    int32_t * v3 = __errno_location(); // 0x40331c
    int64_t v4 = (int64_t)g20; // 0x403321
    int32_t v5 = *v3; // 0x40332b
    int64_t v6 = v4; // 0x403341
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403499
            function_404360(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403350
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403357
        int64_t v9; // 0x403300
        if (g20 == &g21) {
            int64_t v10 = function_404170(0, v8); // 0x40347a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40347f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404170(v4, v8); // 0x40336b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40337a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40337a
        int32_t v14 = v7; // 0x403381
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4033b1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4033bb
    int64_t * v17 = (int64_t *)v15; // 0x4033be
    uint64_t v18 = *v17; // 0x4033be
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4033c1
    int64_t result = *v19; // 0x4033c1
    int64_t v20; // 0x403300
    uint64_t v21 = function_4020d0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4033e4
    if (v18 > v21) {
        // 0x40345b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4033f7
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x403407
        free((int64_t *)result);
    }
    int64_t result2 = function_404110(v22); // 0x403421
    *v19 = result2;
    int64_t v23; // 0x403300
    function_4020d0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40345b
    *v3 = v5;
    return result2;
}
// Address range: 0x4034a0 - 0x4034d4
int64_t function_4034a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4034a7
    int64_t result = function_404310(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x4034c6
    return result;
}
// Address range: 0x4034e0 - 0x4034ef
int64_t function_4034e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x4034ec
    return result;
}
// Address range: 0x4034f0 - 0x4034ff
int64_t function_4034f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x4034f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x403500 - 0x403533
int64_t function_403500(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x403519
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40351e
    uint32_t v3 = *v2; // 0x40351e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403522
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403540 - 0x403553
int64_t function_403540(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x40354c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403560 - 0x40358b
int64_t function_403560(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x403568
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403585
        abort();
        // UNREACHABLE
    }
    // 0x40357c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x403590 - 0x403602
int64_t function_403590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x4035b2
    int32_t * v2 = __errno_location(); // 0x4035bb
    uint32_t v3 = *(int32_t *)v1; // 0x4035db
    int64_t result = function_4020d0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4035ea
    return result;
}
// Address range: 0x403610 - 0x4036f1
int64_t function_403610(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x403632
    int32_t * v2 = __errno_location(); // 0x403638
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403657
    int32_t * v4 = (int32_t *)v1; // 0x40365a
    int64_t v5 = function_4020d0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403675
    int64_t v6 = v5 + 1; // 0x40367a
    int64_t result = function_404110(v6); // 0x40368f
    function_4020d0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4036d4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4036dd
    return result;
}
// Address range: 0x403700 - 0x40370a
int64_t function_403700(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403700
    return function_403610(a1, a2, 0, a3);
}
// Address range: 0x403710 - 0x4037a5
int64_t function_403710(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403710
    int64_t v2 = v1; // 0x403710
    int64_t v3 = v2; // 0x403724
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403743
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403740
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40375d
    if (g21 != 0x6092c0) {
        // 0x40375f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g37;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403781
    if (g20 != &g21) {
        // 0x403783
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g49;
    }
    // 0x403796
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4037b0 - 0x4037c1
int64_t function_4037b0(void) {
    // 0x4037b0
    int64_t v1; // 0x4037b0
    return function_403300(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x4037d0 - 0x4037da
int64_t function_4037d0(void) {
    // 0x4037d0
    int64_t v1; // 0x4037d0
    return function_403300(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x4037e0 - 0x4037f6
int64_t function_4037e0(int64_t a1) {
    // 0x4037e0
    return function_403300(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x403800 - 0x403812
int64_t function_403800(int64_t a1, int64_t a2) {
    // 0x403800
    return function_403300(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x403820 - 0x403888
int64_t function_403820(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403830
    return function_403300((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403890 - 0x4038f4
int64_t function_403890(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4038a0
    return function_403300((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403900 - 0x40390c
int64_t function_403900(int64_t a1, int64_t a2) {
    // 0x403900
    return function_403820(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403910 - 0x40391f
int64_t function_403910(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403910
    return function_403890(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403920 - 0x403990
int64_t function_403920(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x40392d
    int128_t v2 = __asm_movdqa(g39); // 0x403935
    int128_t v3 = __asm_movdqa(g40); // 0x40393d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403952
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403968
    uint32_t v6 = *v5; // 0x403968
    uint32_t v7 = (int32_t)a3 % 32; // 0x40396d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403300(0, a1, a2, &v4);
}
// Address range: 0x403990 - 0x40399d
int64_t function_403990(int64_t a1, int64_t a2) {
    // 0x403990
    return function_403920(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4039a0 - 0x4039b1
int64_t function_4039a0(int64_t a1) {
    // 0x4039a0
    return function_403920(a1, -1, 58);
}
// Address range: 0x4039c0 - 0x4039ca
int64_t function_4039c0(void) {
    // 0x4039c0
    int64_t v1; // 0x4039c0
    return function_403920(v1, v1, 58);
}
// Address range: 0x4039d0 - 0x403a3e
int64_t function_4039d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4039ea
    return function_403300(a1, a3, -1, &v1);
}
// Address range: 0x403a40 - 0x403aac
int64_t function_403a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x403a47
    int128_t v2 = __asm_movdqa(g39); // 0x403a4f
    int128_t v3 = __asm_movdqa(g40); // 0x403a57
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403a79
    if (a2 == 0 || a3 == 0) {
        // 0x403aa7
        abort();
        // UNREACHABLE
    }
    // 0x403a8a
    return function_403300(a1, a4, a5, &v4);
}
// Address range: 0x403ab0 - 0x403ab9
int64_t function_403ab0(void) {
    // 0x403ab0
    int64_t v1; // 0x403ab0
    return function_403a40(v1, v1, v1, v1, -1);
}
// Address range: 0x403ac0 - 0x403ad7
int64_t function_403ac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403ac0
    return function_403a40(0, a1, a2, a3, -1);
}
// Address range: 0x403ae0 - 0x403af3
int64_t function_403ae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403ae0
    return function_403a40(0, a1, a2, a3, a4);
}
// Address range: 0x403b00 - 0x403b0a
int64_t function_403b00(void) {
    // 0x403b00
    int64_t v1; // 0x403b00
    return function_403300(v1, v1, v1, &g19);
}
// Address range: 0x403b10 - 0x403b22
int64_t function_403b10(int64_t a1, int64_t a2) {
    // 0x403b10
    return function_403300(0, a1, a2, &g19);
}
// Address range: 0x403b30 - 0x403b41
int64_t function_403b30(void) {
    // 0x403b30
    int64_t v1; // 0x403b30
    return function_403300(v1, v1, -1, &g19);
}
// Address range: 0x403b50 - 0x403b66
int64_t function_403b50(int64_t a1) {
    // 0x403b50
    return function_403300(0, a1, -1, &g19);
}
// Address range: 0x403b70 - 0x403f4d
int64_t function_403b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403c08
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403b8c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403ba6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403beb
    if (a6 < 10) {
        // 0x403bfa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403cf2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403f50 - 0x403f70
int64_t function_403f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403f50
    if (a5 == 0) {
        // 0x403f6b
        return function_403b70(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403f57
    v1++;
    int64_t v2 = v1; // 0x403f69
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403f60
        v1++;
        v2 = v1;
    }
    // 0x403f6b
    return function_403b70(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403f70 - 0x403fd0
int64_t function_403f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403f70
    int64_t v3 = &v2; // 0x403f70
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403fa3
    int64_t v6; // 0x403f8d
    int64_t * v7; // 0x403fab
    int64_t v8; // 0x403fab
    int64_t v9; // 0x403fb7
    if (v5 < 48) {
        // 0x403f80
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403fc3
            break;
        }
    } else {
        // 0x403fab
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403fc3
            break;
        }
    }
    int64_t v10 = 10; // 0x403fa1
    while (v4 != 9) {
        // 0x403f99
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403f80
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403fc3
                break;
            }
        } else {
            // 0x403fab
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403fc3
                break;
            }
        }
        // 0x403f99
        v10 = 10;
    }
    // 0x403fc3
    return function_403b70(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x403fd0 - 0x40408c
int64_t function_403fd0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x403fd0
    int64_t v1; // bp-168, 0x403fd0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403fd0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403fd0
    int64_t v8; // 0x403fd0
    int64_t v9; // bp-56, 0x403fd0
    int64_t v10; // 0x404035
    int64_t v11; // 0x404059
    if ((int32_t)v6 < 48) {
        // 0x404020
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404070
            break;
        }
    } else {
        // 0x404052
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404070
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40404a
    int64_t v13 = 10; // 0x40404a
    while (v5 != 9) {
        // 0x40404c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404020
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404070
                break;
            }
        } else {
            // 0x404052
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404070
                break;
            }
        }
        // 0x404042
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404070
    int64_t v14; // bp-136, 0x403fd0
    int64_t result = function_403b70(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x40407f
    return result;
}
// Address range: 0x404090 - 0x404104
int64_t function_404090(int64_t a1) {
    // 0x404090
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4040f3
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404110 - 0x40412a
int64_t function_404110(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404114
    if (size != 0 != (mem == NULL)) {
        // 0x404123
        return (int64_t)mem;
    }
    // 0x404125
    function_404360(size);
    // UNREACHABLE
}
// Address range: 0x404130 - 0x404151
int64_t function_404130(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404133
    int64_t v2 = v1; // 0x404133
    if (v2 < 0) {
        // 0x40414b
        function_404360(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404149
        return function_404110(v2);
    }
    // 0x40414b
    function_404360(v2);
    // UNREACHABLE
}
// Address range: 0x404160 - 0x404162
int64_t function_404160(void) {
    // 0x404160
    int64_t v1; // 0x404160
    return function_404110(v1);
}
// Address range: 0x404170 - 0x4041a6
int64_t function_404170(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404198
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404181
    if (a2 != 0 != (mem == NULL)) {
        // 0x404190
        return (int64_t)mem;
    }
    // 0x4041a1
    function_404360(a1);
    // UNREACHABLE
}
// Address range: 0x4041b0 - 0x4041d1
int64_t function_4041b0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4041b3
    int64_t v2 = v1; // 0x4041b3
    if (v2 < 0) {
        // 0x4041cb
        function_404360(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4041c9
        return function_404170(a1, v2);
    }
    // 0x4041cb
    function_404360(a1);
    // UNREACHABLE
}
// Address range: 0x4041e0 - 0x404266
int64_t function_4041e0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40423b
            function_404360(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404170(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404223
    if (a2 == 0) {
        // 0x404248
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404228
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40423b
        function_404360(a1);
        // UNREACHABLE
    }
    // 0x40420a
    *(int64_t *)a2 = v2;
    return function_404170(a1, v2 * a3);
}
// Address range: 0x404270 - 0x4042c0
int64_t function_404270(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404270
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4042ba
            function_404360(a1);
            // UNREACHABLE
        }
        // 0x404292
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404170(a1, v1);
    }
    if (a2 == 0) {
        // 0x4042a5
        *(int64_t *)a2 = 128;
        return function_404170(0, 128);
    }
    // 0x4042b8
    if (a2 < 0) {
        // 0x4042ba
        function_404360(a1);
        // UNREACHABLE
    }
    // 0x404292
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404170(a1, v1);
}
// Address range: 0x4042c0 - 0x4042d7
int64_t function_4042c0(int64_t a1, int64_t a2) {
    // 0x4042c0
    return (int64_t)memset((int64_t *)function_404110(a1), 0, (int32_t)a1);
}
// Address range: 0x4042e0 - 0x40430e
int64_t function_4042e0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4042e7
    if ((int64_t)v1 < 0) {
        // 0x404309
        function_404360(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404309
        function_404360(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4042fa
    if (mem != NULL) {
        // 0x404304
        return (int64_t)mem;
    }
    // 0x404309
    function_404360(nmemb);
    // UNREACHABLE
}
// Address range: 0x404310 - 0x404338
int64_t function_404310(int64_t a1, int64_t a2) {
    int64_t v1 = function_404110(a2); // 0x40431f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404340 - 0x404353
int64_t function_404340(int64_t str) {
    // 0x404340
    return function_404310(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404360 - 0x404391
int64_t function_404360(int64_t a1) {
    // 0x404360
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4043a0 - 0x4044d5
int64_t function_4043a0(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x4043d0
    if (cmd != 1030) {
        // 0x404480
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x4043dc
    int64_t v2; // 0x4043a0
    if (g41 < 0) {
        int64_t v3 = function_4043a0(fd, 0, v1, a4); // 0x404424
        int64_t v4 = v3 & 0xffffffff; // 0x404429
        if ((int32_t)v3 < 0) {
            // 0x404410
            return v4 & 0xffffffff;
        }
        // 0x40442f
        v2 = v4;
        if (g41 != -1) {
            // 0x404410
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4043f7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x404406
            g41 = 1;
            // 0x404410
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_4043a0(fd & 0xffffffff, 0, v1, a4); // 0x4044b7
        int64_t v7 = v6 & 0xffffffff; // 0x4044bc
        if ((int32_t)v6 < 0) {
            // 0x404410
            return v7 & 0xffffffff;
        }
        // 0x4044c6
        g41 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40443f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40444a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x404410
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x404462
    close(fd2);
    // 0x404410
    return 0xffffffff;
}
// Address range: 0x4044e0 - 0x4045bf
int64_t function_4044e0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4044ec
    uint32_t v2 = *v1; // 0x4044ec
    int64_t v3 = a2 & 0xffffffff; // 0x4044f1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4044f4
    uint64_t v5 = (int64_t)*v4; // 0x4044f4
    int64_t v6; // 0x404562
    if (v3 <= v5) {
      lab_0x40455c_2:
        // 0x40455c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4044e2
    int64_t v8 = v2; // 0x4044e0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40455c
        goto lab_0x40455c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404518
    int64_t v17; // 0x404526
    int64_t * v18; // 0x404540
    int64_t * v19; // 0x404543
    int64_t v20; // 0x40454e
    int64_t v21; // 0x404526
    while ((v16 & 0xffffffff) > v10) {
        // 0x404523
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404540
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404557
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40455c
            goto lab_0x40455c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40455c
            goto lab_0x40455c_2;
        }
        // 0x404512
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40459b
    int64_t * v23 = (int64_t *)v22; // 0x4045a0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4045a3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4045a0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4045b7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40450d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40455c
            goto lab_0x40455c_2;
        }
        // 0x404512
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404523
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404540
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404557
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40455c
                goto lab_0x40455c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40455c
                goto lab_0x40455c_2;
            }
            // 0x404512
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404580
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4045a0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4045b7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40455c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4045c0 - 0x404bdc
int64_t function_4045c0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4045df
    int64_t v2 = *v1; // 0x4045df
    char * str2 = (char *)v2; // 0x4045ec
    char c = *str2; // 0x4045ec
    int64_t v3 = v2; // 0x404618
    int64_t v4 = 0; // 0x4045c0
    int32_t v5; // 0x4045c0
    int64_t v6; // 0x4045c0
    int64_t v7; // 0x4045c0
    int64_t v8; // 0x4045c0
    int64_t v9; // 0x4045c0
    int64_t v10; // 0x4045c0
    int64_t v11; // 0x4045c0
    int64_t v12; // 0x4045c0
    int64_t v13; // 0x4045c0
    int64_t str3; // 0x4045c0
    int64_t v14; // 0x4045c0
    int64_t v15; // 0x4045c0
    int64_t v16; // 0x4045c0
    int64_t v17; // 0x4045c0
    int32_t v18; // 0x4045c0
    int32_t v19; // 0x4045c0
    int32_t v20; // 0x4045c0
    int32_t v21; // 0x4045c0
    int32_t v22; // 0x4045c0
    int32_t v23; // 0x4045c0
    int32_t v24; // 0x4045c0
    int32_t v25; // 0x4045c0
    int32_t v26; // 0x4045c0
    int32_t v27; // 0x4045c0
    int32_t v28; // 0x4045c0
    int32_t v29; // 0x4045c0
    int64_t nmemb; // 0x4045c0
    int64_t v30; // 0x4045c0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40461c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404618
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404628
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40462e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4045f8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40465c
                int64_t v34; // 0x4045c0
                int64_t v35; // 0x4045c0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404665
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4047e0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404676
                int64_t v37 = *(int64_t *)v36; // 0x40467a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404650
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404665
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4047e0;
                        }
                    }
                    // 0x404676
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
                  lab_0x4046c6:
                    // 0x4046c6
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
                        goto lab_0x404720;
                    } else {
                        if (v11 == 0) {
                            // 0x404890
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404720;
                        } else {
                            if (v39 == 0) {
                                // 0x404840
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4046ea;
                                } else {
                                    // 0x40484c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4046ea;
                                    } else {
                                        // 0x40485a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4046ea;
                                        } else {
                                            goto lab_0x404720;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4046ea;
                            }
                        }
                    }
                }
              lab_0x404731:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404906
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404ab2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404ad2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404b1f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404b39
                            int64_t v45; // 0x404b3b
                            if (*(char *)v42 != 0) {
                                // 0x404b3b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404b33
                            while (v17 + nmemb != v42) {
                                // 0x404b35
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404b3b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404b28
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404b60
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x404914
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404a6f
                        free((int64_t *)v17);
                    }
                    // 0x404969
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404980
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40482e
                    return 63;
                }
                // 0x404750
                v5 = v39;
                if (v13 != 0) {
                    // 0x4047d4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4047e0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4047f0
                    uint32_t v50 = *v49; // 0x4047f0
                    int64_t v51 = v50; // 0x4047f0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4047fa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404803
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404a2f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4049da
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40482e
                            return 63;
                        }
                        // 0x404878
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404b8f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404a8d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404aa0
                                // 0x40482e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40499e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4049b2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40481b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40481e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404822
                    int64_t result = v59; // 0x404828
                    if (v58 != 0) {
                        // 0x40482a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40482e
                    return result;
                }
            } else {
                // 0x40462e
                v5 = v32;
            }
            // break -> 0x404755
            break;
        }
    }
    // 0x404755
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40476d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404777
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40482e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4048b9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4047a6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4047b6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404720:
    // 0x404720
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404720
    int64_t v63 = *(int64_t *)v62; // 0x404724
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404731
        goto lab_0x404731;
    }
    goto lab_0x4046c6;
  lab_0x4046ea:
    // 0x4046ea
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4045c0
    int32_t v65; // 0x4045c0
    int32_t v66; // 0x4045c0
    if (v27 != 0) {
        goto lab_0x404720;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4048a0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404720;
            } else {
                goto lab_0x404711;
            }
        } else {
            // 0x404705
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4049fc
                int64_t v67 = (int64_t)mem; // 0x4049fc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404720;
                } else {
                    // 0x404a0f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404711;
                }
            } else {
                goto lab_0x404711;
            }
        }
    }
  lab_0x404711:
    // 0x404711
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404720;
}
// Address range: 0x404be0 - 0x4051a6
int64_t function_404be0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404c01
    if (v3 < 1) {
        // 0x404dbe
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404bfd
    int32_t v5 = *(int32_t *)a7; // 0x404c09
    uint64_t v6 = a1 & 0xffffffff; // 0x404c0b
    int64_t v7 = v2; // 0x404c10
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404c13
    *v8 = 0;
    int64_t v9; // 0x404be0
    int64_t v10; // 0x404be0
    int64_t v11; // 0x404be0
    int64_t v12; // 0x404be0
    int64_t str; // 0x404be0
    int64_t v13; // 0x404be0
    int64_t v14; // 0x404be0
    int64_t v15; // 0x404be0
    int64_t v16; // 0x404be0
    int64_t v17; // 0x404be0
    int32_t v18; // 0x404be0
    char v19; // 0x404be0
    if (v5 == 0) {
        // 0x404df8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404c2a;
    } else {
        // 0x404c23
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404c70
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404c73
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404d38;
            } else {
                int64_t v22 = v7 + 1; // 0x404c86
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404c96
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404d4c;
                } else {
                    goto lab_0x404ca8;
                }
            }
        } else {
            goto lab_0x404c2a;
        }
    }
  lab_0x404c2a:
    // 0x404c2a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404c30
    *v24 = 0;
    int64_t v25; // 0x404be0
    int64_t v26; // 0x404be0
    int64_t v27; // 0x404be0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404d20
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404d2d;
        }
        case 43: {
            // 0x405030
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404d2d;
        }
        default: {
            // 0x404c4c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404faf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4050c8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404d2d;
                } else {
                    // 0x404fbd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404c5a;
                }
            } else {
                goto lab_0x404c5a;
            }
        }
    }
  lab_0x404d38:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404d3f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404ca8;
    } else {
        goto lab_0x404d4c;
    }
  lab_0x404c5a:
    // 0x404c5a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404d2d;
  lab_0x404d2d:
    // 0x404d2d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404d38;
  lab_0x404ca8:;
    uint32_t v30 = *(int32_t *)a7; // 0x404ca8
    int64_t v31 = v30; // 0x404ca8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404caa
    if ((int64_t)*v32 > v31) {
        // 0x404caf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404cb2
    if (*v33 > v30) {
        // 0x404cb7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404cba
    int64_t v35 = v31; // 0x404cbe
    int64_t v36 = v15; // 0x404cbe
    int64_t v37; // 0x404be0
    int64_t v38; // 0x404be0
    int64_t v39; // 0x404be0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404e28
        int64_t v41 = v40; // 0x404e28
        v2 = v41;
        int64_t v42; // 0x404be0
        if (*v33 == v40) {
            // 0x405010
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405018
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404e34
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404e38
                function_4044e0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404e48
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404e51
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404e5a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404e71
            int64_t v47 = v45 & 0xffffffff; // 0x404e75
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404e7e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404e84
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404e86;
                }
            }
            int64_t v48 = v47 + 1; // 0x404e60
            int64_t v49 = v48 & 0xffffffff; // 0x404e60
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404e71
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404e7e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404e84
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404e86;
                    }
                }
                // 0x404e60
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405028
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404e86;
    } else {
        goto lab_0x404cc4;
    }
  lab_0x404d4c:
    // 0x404d4c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404d4f
    int64_t v51 = v12; // 0x404d4f
    int64_t v52 = v14; // 0x404d4f
    if (*(char *)v10 == 0) {
        goto lab_0x404ca8;
    } else {
        goto lab_0x404d55;
    }
  lab_0x404cc4:;
    int32_t v53 = v35; // 0x404cc4
    int64_t v54; // 0x404be0
    int64_t v55; // 0x404be0
    int64_t v56; // 0x404be0
    int64_t v57; // 0x404be0
    int64_t v58; // 0x404be0
    int64_t v59; // 0x404be0
    char * v60; // 0x404be0
    int64_t v61; // 0x404be0
    int64_t v62; // 0x404cd9
    int64_t v63; // 0x404be0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404e13
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404e16;
    } else {
        // 0x404ccc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404be0
        int64_t v66 = v65 ? -1 : 1; // 0x404ce0
        int64_t v67 = (int64_t)"--"; // 0x404be0
        int64_t v68 = v62; // 0x404be0
        int64_t v69 = 3; // 0x404ce0
        unsigned char v70 = *(char *)v68; // 0x404ce0
        char v71 = *(char *)v67; // 0x404ce0
        char v72 = v71; // 0x404ce0
        bool v73 = false; // 0x404ce0
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
            // 0x404dd0
            if (*(char *)v62 == 45) {
                // 0x404e90
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404e90
                if (c == 0) {
                    goto lab_0x404dda;
                } else {
                    // 0x404e9d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404f20;
                    } else {
                        if (c == 45) {
                            // 0x405103
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404f75;
                        } else {
                            // 0x404eae
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404f20;
                            } else {
                                // 0x404eb3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404ed4;
                                } else {
                                    // 0x404eba
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404f20;
                                    } else {
                                        goto lab_0x404ed4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404dda;
            }
        } else {
            uint32_t v75 = *v33; // 0x404cf0
            v2 = v75;
            int32_t v76 = *v32; // 0x404cf3
            int64_t v77 = v35 + 1; // 0x404cf6
            int32_t v78 = v77; // 0x404cf9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405060
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404d07
                    function_4044e0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404d15
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404e16;
        }
    }
  lab_0x404d55:;
    // 0x404d55
    int64_t v79; // bp-104, 0x404be0
    int64_t v80 = &v79; // 0x404bea
    int64_t v81 = v50 + 1; // 0x404d55
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404d5c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404d61
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404d65
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404d69
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404d71
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404d76
    int32_t c2 = v84; // 0x404d76
    char * found_char_pos = strchr(str2, c2); // 0x404d76
    int64_t v87 = *v82; // 0x404d7b
    v2 = v87;
    int64_t v88 = *v85; // 0x404d85
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404d90
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405080
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40504d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404dbe
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404d76
    char v91 = *(char *)(v90 + 1); // 0x404dab
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404d65
        if (v91 != 58) {
            // 0x404dbe
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404fd4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4050d8
                *v8 = 0;
            } else {
                // 0x4050bc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404ffe
            *v83 = 0;
            // 0x404dbe
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404fde
        if (v93 != 0) {
            // 0x405070
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404ffe
            *v83 = 0;
            // 0x404dbe
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404ff1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404ffe
            *v83 = 0;
            // 0x404dbe
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40513a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4050ea
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4050f1
        // 0x404ffe
        *v83 = 0;
        // 0x404dbe
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404f49
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404f4b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405170
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405121
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405128
            // 0x404dbe
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404f56
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404f5a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404f75;
  lab_0x404e86:
    // 0x404e86
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404cc4;
  lab_0x404f75:;
    int64_t v99 = function_4045c0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404f93
    // 0x404dbe
    return v99 & 0xffffffff;
  lab_0x404e16:;
    int32_t v100 = v55; // 0x404e16
    if (v100 != (int32_t)v59) {
        // 0x404e1a
        *(int32_t *)a7 = v100;
    }
    // 0x404dbe
    return 0xffffffff;
  lab_0x404dda:
    // 0x404dda
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404de1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404dbe
    return v99 & 0xffffffff;
  lab_0x404f20:
    // 0x404f20
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404d55;
  lab_0x404ed4:
    // 0x404ed4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4045c0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x404efa
    if ((int32_t)v101 != -1) {
        // 0x404dbe
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404f0f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404f20;
}
// Address range: 0x4051b0 - 0x405206
int64_t function_4051b0(int64_t a1) {
    // 0x4051b0
    *(int32_t *)&g42 = g26;
    *(int32_t *)&g43 = g25;
    int64_t v1; // 0x4051b0
    int64_t result = function_404be0(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x4051d6
    g26 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g24 = g44;
    return result;
}
// Address range: 0x405210 - 0x405228
int64_t function_405210(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405210
    return function_4051b0(1);
}
// Address range: 0x405230 - 0x405243
int64_t function_405230(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x405230
    return function_4051b0(0);
}
// Address range: 0x405250 - 0x405265
int64_t function_405250(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405250
    return function_404be0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405270 - 0x405286
int64_t function_405270(void) {
    // 0x405270
    return function_4051b0(0);
}
// Address range: 0x405290 - 0x4052a8
int64_t function_405290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405290
    return function_404be0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4052b0 - 0x40532a
int64_t function_4052b0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4052bb
    int64_t v2 = (int64_t)&g10; // 0x4052bb
    int32_t * pwc; // 0x4052b0
    int64_t v3; // 0x4052b0
    int64_t n; // 0x4052b0
    if (a2 == 0) {
        goto lab_0x405302;
    } else {
        // 0x4052bd
        if (a3 == 0) {
            // 0x4052e8
            return -2;
        }
        // 0x4052c9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405302;
        } else {
            goto lab_0x4052d4;
        }
    }
  lab_0x405302:
    // 0x405302
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4052b0
    pwc = (int32_t *)&v4;
    goto lab_0x4052d4;
  lab_0x4052d4:;
    char * wstr = (char *)v3; // 0x4052da
    int64_t ps; // 0x4052b0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4052da
    int64_t result = v5; // 0x4052da
    if (v5 < 0xfffffffe) {
        // 0x4052e8
        return result;
    }
    int64_t result2 = result; // 0x405319
    if ((char)function_405390(0, v3) == 0) {
        // 0x40531b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4052e8
    return result2;
}
// Address range: 0x405330 - 0x40538d
int64_t function_405330(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405337
    int64_t v2; // 0x405330
    int64_t result = function_405960(a1, v2); // 0x405348
    if ((v2 & 32) != 0) {
        // 0x405370
        if ((int32_t)result == 0) {
            // 0x405374
            *__errno_location() = 0;
        }
        // 0x40536a
        return 0xffffffff;
    }
    // 0x405351
    if ((int32_t)result == 0) {
        // 0x40536a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405358
    if (v1 == 0) {
        // 0x40535a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40536a
    return result2;
}
// Address range: 0x405390 - 0x4053ee
int64_t function_405390(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405396
    if (locale == NULL) {
        // 0x4053c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405396
    bool v2; // 0x405390
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405390
    int64_t v5 = v1; // 0x405390
    int64_t v6 = 2; // 0x4053b5
    unsigned char v7 = *(char *)v5; // 0x4053b5
    char v8 = *(char *)v4; // 0x4053b5
    char v9 = v8; // 0x4053b5
    bool v10 = false; // 0x4053b5
    while (v7 == v8) {
        // 0x4053a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4053c1
    int64_t v13 = v1; // 0x4053c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4053c3
        return 0;
    }
    int64_t v14 = 6; // 0x4053c1
    unsigned char v15 = *(char *)v13; // 0x4053dd
    char v16 = *(char *)v12; // 0x4053dd
    char v17 = v16; // 0x4053dd
    bool v18 = false; // 0x4053dd
    while (v15 == v16) {
        // 0x4053d0
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
// Address range: 0x4053f0 - 0x405952
int64_t function_4053f0(void) {
    char * v1 = nl_langinfo(14); // 0x405406
    char * v2 = g46; // 0x40540b
    char * v3; // 0x4053f0
    int64_t v4; // 0x4053f0
    int64_t v5; // 0x4053f0
    int64_t v6; // 0x4053f0
    int64_t v7; // 0x4053f0
    int32_t size; // 0x4053f0
    int32_t size2; // 0x4053f0
    int32_t len; // 0x4054c2
    int64_t v8; // 0x4054c2
    char * env_val; // 0x4054ad
    if (v2 == NULL) {
        // 0x4054a8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405515;
        } else {
            // 0x4054ba
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405515;
            } else {
                // 0x4054bf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4054ad
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405945
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405515;
                    } else {
                        // 0x4058b9
                        size2 = len + 14;
                        goto lab_0x4054db;
                    }
                } else {
                    goto lab_0x4054db;
                }
            }
        }
    } else {
        // 0x4053f0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40542a;
    }
  lab_0x40575c:;
    // 0x40575c
    struct _IO_FILE * stream; // 0x40559b
    int32_t v10 = __uflow(stream); // 0x40575f
    int64_t v11; // 0x4053f0
    int64_t v12 = v11; // 0x405769
    int64_t v13; // 0x4053f0
    int64_t v14 = v13; // 0x405769
    int32_t v15 = v10; // 0x405769
    int64_t v16; // 0x4053f0
    int64_t v17 = v16; // 0x405769
    int64_t v18 = v11; // 0x405769
    int64_t v19 = v13; // 0x405769
    int64_t v20 = v16; // 0x405769
    if (v10 == -1) {
        // break -> 0x40576f
        goto lab_0x40576f;
    }
    goto lab_0x4055e9;
  lab_0x4055de:;
    // 0x4055de
    int64_t v90; // 0x4053f0
    int64_t * v32; // 0x4055d0
    *v32 = v90 + 1;
    int64_t v89; // 0x4053f0
    v12 = v89;
    int64_t v91; // 0x4053f0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4053f0
    v17 = v92;
    goto lab_0x4055e9;
  lab_0x4055e9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4053f0
    int32_t v25; // bp-120, 0x4053f0
    int32_t v26; // bp-184, 0x4053f0
    int64_t v27; // 0x40559b
    int64_t v28; // 0x4055b8
    int64_t v29; // 0x4055bd
    int64_t * v30; // 0x4055d4
    switch (c) {
        case 32: {
            goto lab_0x4055d0;
        }
        case 10: {
            goto lab_0x4055d0;
        }
        case 9: {
            goto lab_0x4055d0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4057c1
            int32_t v33; // 0x4053f0
            char v34; // 0x4053f0
            int32_t v35; // 0x4057ce
            if (v31 < *v30) {
                // 0x4057a0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4057cb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4057c1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4057a0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4057cb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4057b0
                v36 = v33;
            }
            // 0x40589f
            if (v36 == -1) {
                // break -> 0x40576f
                break;
            }
            goto lab_0x4055d0;
        }
        default: {
            // 0x4055ff
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40576f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405628
            int64_t v39 = v37 + 4; // 0x40562a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405636
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405638
            while (v41 == 0) {
                // 0x405628
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405656
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405662
            int64_t v45 = v43 + 4; // 0x405664
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405670
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405672
            while (v47 == 0) {
                // 0x405662
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40565f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405688
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405698
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40569c
            int64_t v52 = v51 + v48; // 0x4056a5
            int64_t * mem; // 0x4053f0
            int64_t v53; // 0x4053f0
            int64_t v54; // 0x4053f0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4057db
                int64_t v56 = v55 + 3; // 0x4057e7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4056c1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4056d0
            if (mem == NULL) {
                // 0x4058fc
                free((int64_t *)v21);
                function_405960(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x405574;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4056e8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4056f2
            uint32_t v62 = (int32_t)v59; // 0x4056f5
            int64_t v63; // 0x4053f0
            if (v62 >= 8) {
                // 0x405804
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40581e
                int64_t v66 = v61 - v65; // 0x405822
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40582d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40583e
                    int64_t v70 = v69 & 0xffffffff; // 0x40583e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40583b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4058cf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405707
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40570b
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
            int64_t v73 = v51 + 1; // 0x40571b
            int64_t v74 = v60 - 1; // 0x40571f
            uint32_t v75 = (int32_t)v73; // 0x405724
            int64_t v76; // 0x4053f0
            if (v75 >= 8) {
                // 0x405852
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40585c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40586c
                int64_t v80 = v74 - v79; // 0x405870
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40587b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40588b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405889
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4058e6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4058ee
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405736
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40573a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405933
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40574e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4055de;
            } else {
                goto lab_0x40575c;
            }
        }
    }
  lab_0x4055d0:;
    int64_t v93 = v23; // 0x4053f0
    int64_t v94 = v22; // 0x4053f0
    int64_t v95 = v21; // 0x4053f0
    goto lab_0x4055d0_2;
  lab_0x405515:;
    int64_t * mem3 = malloc(size); // 0x405515
    int64_t v97 = (int64_t)&g10; // 0x405520
    int64_t v98; // 0x4053f0
    int64_t path; // 0x4053f0
    if (mem3 == NULL) {
        goto lab_0x4054f2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405515
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405536;
    }
  lab_0x40542a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40541d
    char v100 = *v3; // 0x40542a
    int64_t v101; // 0x4053f0
    if (v100 == 0) {
        // 0x405484
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4053f0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4053f0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405470
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405477;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405440
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40544d
        char v107 = *(char *)v106; // 0x405452
        v102 = v107;
        if (v107 == 0) {
            // 0x405484
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40545b
    v104 = v103 + 1;
  lab_0x405477:
    // 0x405484
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4054f2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40542a;
  lab_0x405536:;
    int64_t v109 = v98 + path; // 0x405536
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405562
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x405591
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4058c2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4055b5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4055d0_2:;
                uint64_t v96 = *v32; // 0x4055d0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40575c;
                } else {
                    goto lab_0x4055de;
                }
            }
          lab_0x40576f:
            // 0x40576f
            function_405960(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40578e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405574;
  lab_0x4054db:;
    int64_t * mem4 = malloc(size2); // 0x4054db
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405581
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405536;
    } else {
        goto lab_0x4054f2;
    }
  lab_0x405574:
    // 0x405574
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4054f2;
}
// Address range: 0x405960 - 0x4059db
int64_t function_405960(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405967
    if (fileno(stream) < 0) {
        // 0x4059c7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40597a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4059ab
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4059c7
            return fclose(stream);
        }
    }
    // 0x40597c
    if ((int32_t)function_4059e0(a1, v1) == 0) {
        // 0x4059c7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405988
    int32_t v3 = *v2; // 0x405990
    int64_t result = fclose(stream); // 0x40599e
    if (v3 != 0) {
        // 0x4059d0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4059a0
    return result;
}
// Address range: 0x4059e0 - 0x405a20
int64_t function_4059e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4059fa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4059fa
        return fflush(stream);
    }
    // 0x405a08
    function_405a20(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405a20 - 0x405a77
int64_t function_405a20(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405a20
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405a2a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405a5b
    int64_t result = -1; // 0x405a64
    if (v1 != -1) {
        // 0x405a66
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405a72
    return result;
}
// Address range: 0x405a80 - 0x405add
int64_t function_405a80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405a80
    return function_401318();
}
// Address range: 0x405ae0 - 0x405ae1
int64_t function_405ae0(void) {
    // 0x405ae0
    int64_t result; // 0x405ae0
    return result;
}
// Address range: 0x405af0 - 0x405b08
int64_t function_405af0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405af0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x405b08 - 0x405b28
int64_t function_405b08(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x405b12
    while (*(int64_t *)v1 != -1) {
        // 0x405b13
        v1 -= 8;
    }
    // 0x405b24
    return result;
}
