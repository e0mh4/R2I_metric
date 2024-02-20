#include "decompile_retdec.h"
// Address range: 0x4016f0 - 0x4016f5
int64_t function_4016f0(void) {
    // 0x4016f0
    abort();
    // UNREACHABLE
}
// Address range: 0x4016f5 - 0x4016fa
int64_t function_4016f5(void) {
    // 0x4016f5
    abort();
    // UNREACHABLE
}
// Address range: 0x4016fa - 0x4016ff
int64_t function_4016fa(void) {
    // 0x4016fa
    abort();
    // UNREACHABLE
}
// Address range: 0x4016ff - 0x401704
int64_t function_4016ff(void) {
    // 0x4016ff
    abort();
    // UNREACHABLE
}
// Address range: 0x401704 - 0x401709
int64_t function_401704(void) {
    // 0x401704
    abort();
    // UNREACHABLE
}
// Address range: 0x401709 - 0x40170e
int64_t function_401709(void) {
    // 0x401709
    abort();
    // UNREACHABLE
}
// Address range: 0x401710 - 0x401b00
int64_t function_401710(int64_t a1, int64_t a2) {
    char * exec_argv[1]; // 0x4019ab
    int64_t v1 = a1 & 0xffffffff; // 0x40171b
    function_402020(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g17 = 125;
    int64_t v2; // 0x401710
    function_405aa0(0x401f80, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    char v3 = 0; // 0x401772
    int64_t v4 = 0; // 0x401772
    int64_t v5 = 0; // 0x401772
    int64_t path; // 0x401710
    int64_t v6; // 0x401710
    char v7; // 0x401710
    while (true) {
      lab_0x401778:
        // 0x401778
        v7 = v3;
        int64_t v8 = v4; // 0x401710
        int64_t v9 = v5; // 0x401710
        while (true) {
          lab_0x401778_2:
            // 0x401778
            v6 = v8;
            int64_t v10 = v9; // 0x401710
            while (true) {
                // 0x401778
                path = v10;
                while (true) {
                  lab_0x401778_3:;
                    uint32_t v11 = (int32_t)function_4051e0(v1, a2, "+C:iu:0", &g2, 0, v2);
                    v3 = 1;
                    v4 = v6;
                    v5 = path;
                    switch (v11) {
                        case -1: {
                            goto lab_0x40183c;
                        }
                        case 48: {
                            goto lab_0x401778;
                        }
                        default: {
                            if (v11 <= 48) {
                                if (v11 == -131) {
                                    // 0x4017c7
                                    function_4040c0((int64_t)g28, "env", "GNU coreutils", (int64_t)g16, "Richard Mlynarik", "David MacKenzie");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                if (v11 == -130) {
                                    // 0x401806
                                    function_401be0(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x4017b3;
                            }
                            // 0x4017a4
                            v8 = 1;
                            v9 = path;
                            switch (v11) {
                                case 105: {
                                    goto lab_0x401778_2;
                                }
                                case 117: {
                                    goto lab_0x401778_3;
                                }
                                case 67: {
                                    goto lab_0x401830;
                                }
                                default: {
                                    goto lab_0x4017b3;
                                }
                            }
                        }
                    }
                }
              lab_0x401830:
                // 0x401830
                v10 = (int64_t)g47;
            }
        }
    }
  lab_0x40183c:;
    int64_t v12 = (int64_t)*(int32_t *)0x60923c; // 0x40183c
    if (v1 > v12) {
        int64_t str = *(int64_t *)(8 * v12 + a2); // 0x40184c
        if (v6 == 0 == (strcmp((char *)str, "-") != 0)) {
            goto lab_0x40186d;
        } else {
            // 0x401862
            g29 = &g34;
            goto lab_0x40186d;
        }
    } else {
        if (v6 == 0) {
            goto lab_0x40186d;
        } else {
            // 0x401862
            g29 = &g34;
            goto lab_0x40186d;
        }
    }
  lab_0x4018a6:;
    int64_t v13 = g25; // 0x4018a6
    int64_t v14 = v13; // 0x4018af
    int64_t v15; // 0x401710
    int64_t v16; // 0x401710
    if (v1 > v13) {
        // 0x4018b1
        v16 = v13;
        v15 = g25;
        if (strcmp((char *)*(int64_t *)((0x100000000 * v13 >> 29) + a2), "-") != 0) {
            goto lab_0x401947;
        } else {
            // 0x4018ca
            g25 = &g26;
            v16 = &g26;
            v15 = &g26;
            v14 = &g26;
            if (v1 > (int64_t)&g26) {
                goto lab_0x401947;
            } else {
                goto lab_0x4018db;
            }
        }
    } else {
        goto lab_0x4018db;
    }
  lab_0x401960:;
    // 0x401960
    int64_t v17; // 0x401710
    if (v7 != 0 && v1 > v17) {
        // 0x4018f7
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot specify --null (-0) with command", 5));
        // 0x4017b3
        function_401be0(125);
        // UNREACHABLE
    }
    int32_t * err_num2 = __errno_location(); // 0x40197b
    int64_t err_num; // 0x401710
    if (path == 0) {
        goto lab_0x401998;
    } else {
        // 0x401988
        err_num = (int64_t)err_num2;
        if (chdir((char *)path) != 0) {
            goto lab_0x401abf;
        } else {
            goto lab_0x401998;
        }
    }
  lab_0x401a7b:;
    // 0x401a7b
    char * v18; // 0x401710
    *v18 = 0;
    function_403c40(*(int64_t *)(8 * (int64_t)g25 + a2));
    error(125, *__errno_location(), dcgettext(NULL, "cannot set %s", 5));
    err_num = v1;
    goto lab_0x401abf;
  lab_0x40186d:
    // 0x40186d
    g25 = 0;
    int32_t v19 = function_4051e0(v1, a2, "+C:iu:0", &g2, 0, v2); // 0x4018a1
    int32_t v20 = v19; // 0x4018a4
    if (v19 != -1) {
        while (true) {
            // 0x401880
            if (v20 == 117) {
                // 0x4019f2
                if (unsetenv(g47) != 0) {
                    // break -> 0x401a06
                    break;
                }
            }
            int32_t v21 = function_4051e0(v1, a2, "+C:iu:0", &g2, 0, v2); // 0x4018a1
            v20 = v21;
            if (v21 == -1) {
                goto lab_0x4018a6;
            }
        }
        // 0x401a06
        function_403c40((int64_t)g47);
        error(125, *__errno_location(), dcgettext(NULL, "cannot unset %s", 5));
        goto lab_0x401a42;
    } else {
        goto lab_0x4018a6;
    }
  lab_0x401a42:;
    int64_t v22 = *(int64_t *)g29; // 0x401a6c
    if (v22 == 0) {
        // 0x4019e1
        return 0;
    }
    int64_t v23 = g29 + 8; // 0x401a63
    __printf_chk(1, "%s%c", (char *)v22, v7 == 0 ? 10 : 0);
    int64_t v24 = *(int64_t *)v23; // 0x401a6c
    int64_t v25 = v24; // 0x401a72
    int64_t v26 = v23; // 0x401a72
    while (v24 != 0) {
        // 0x401a55
        v23 = v26 + 8;
        __printf_chk(1, "%s%c", (char *)v25, v7 == 0 ? 10 : 0);
        v24 = *(int64_t *)v23;
        v25 = v24;
        v26 = v23;
    }
    // 0x4019e1
    return 0;
  lab_0x4018db:
    // 0x4018db
    if (path != 0 && v14 >= v1) {
        // 0x4018f7
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"must specify command with --chdir (-C)", 5));
      lab_0x4017b3:
        // 0x4017b3
        function_401be0(125);
        // UNREACHABLE
    }
    goto lab_0x401a42;
  lab_0x401947:;
    char * str2 = (char *)*(int64_t *)(8 * v15 + a2); // 0x401953
    char * found_char_pos = strchr(str2, 61); // 0x401953
    v17 = v16;
    if (found_char_pos != NULL) {
        // 0x401920
        v18 = found_char_pos;
        if (putenv(str2) != 0) {
            goto lab_0x401a7b;
        } else {
            g25 = &g26;
            v14 = &g26;
            while (v1 > (int64_t)&g26) {
                int64_t v27 = *(int64_t *)(a2 + 8 * 0x100000000 * (int64_t)&g26 / 0x100000000); // 0x401947
                char * str3 = (char *)v27; // 0x401953
                char * found_char_pos2 = strchr(str3, 61); // 0x401953
                v17 = &g26;
                if (found_char_pos2 == NULL) {
                    goto lab_0x401960;
                }
                // 0x401920
                v18 = found_char_pos2;
                if (putenv(str3) != 0) {
                    goto lab_0x401a7b;
                }
                g25 = &g26;
                v14 = &g26;
            }
            goto lab_0x4018db;
        }
    } else {
        goto lab_0x401960;
    }
  lab_0x401998:;
    int64_t file = 8 * (int64_t)g25 + a2; // 0x4019a1
    exec_argv[0] = (char *)file;
    execvp((char *)*(int64_t *)file, exec_argv);
    int64_t v28 = function_403c40(*(int64_t *)(8 * (int64_t)g25 + a2)); // 0x4019c7
    error(0, *err_num2, "%s", (char *)v28);
    // 0x4019e1
    return *err_num2 == 2 ? 127 : 126;
  lab_0x401abf:
    // 0x401abf
    function_4039f0(4, path);
    error(125, *(int32_t *)err_num, dcgettext(NULL, "cannot change directory to %s", 5));
    return &g49;
}
// Address range: 0x401b00 - 0x401b2b
// Address range: 0x401b2b - 0x401b4a
int64_t function_401b2b(void) {
    // 0x401b2b
    return &g27;
}
// Address range: 0x401b4a - 0x401b81
int64_t function_401b4a(void) {
    // 0x401b4a
    return 0;
}
// Address range: 0x401b81 - 0x401bd8
int64_t function_401b81(void) {
    // 0x401b81
    if (g32 != 0) {
        // 0x401bd7
        int64_t result; // 0x401b81
        return result;
    }
    int64_t v1 = g33; // 0x401bb4
    int64_t result2; // 0x401bc6
    if (g33 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401bc6
        result2 = function_401b2b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401bb6
        v1++;
    }
    // 0x401baa
    g33 = v1;
    // 0x401bc6
    result2 = function_401b2b();
    g32 = 1;
    return result2;
}
// Address range: 0x401bd8 - 0x401bdd
int64_t function_401bd8(void) {
    // 0x401bd8
    return function_401b4a();
}
// Address range: 0x401be0 - 0x401f5d
int64_t function_401be0(int64_t a1) {
    int32_t status = a1; // 0x401bf6
    if (status != 0) {
        // 0x401bfa
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401c1f
        exit(status);
        // UNREACHABLE
    }
    // 0x401c26
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Set each NAME to VALUE in the environment and run COMMAND.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -i, --ignore-environment  start with an empty environment\n  -0, --null           end each output line with NUL, not newline\n  -u, --unset=NAME     remove variable from the environment\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -C, --chdir=DIR      change working directory to DIR\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nA mere - implies -i.  If no COMMAND, print the resulting environment.\n", 5), g28);
    int64_t v1 = &g1; // bp-136, 0x401d39
    bool v2; // 0x401be0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401dc0
    int64_t v6 = *(int64_t *)v5; // 0x401dc4
    int64_t v7 = 4; // 0x401dca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"env";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401dd6
        char v11 = *(char *)v9; // 0x401dd6
        char v12 = v11; // 0x401dd6
        bool v13 = false; // 0x401dd6
        while (v10 == v11) {
            // 0x401dcc
            v7--;
            int64_t v14 = v9 + v3; // 0x401dd6
            int64_t v15 = v8 + v3; // 0x401dd6
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
            // break -> 0x401de2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x401de2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401ef4;
        } else {
            // 0x401ede
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401f33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401e44;
            } else {
                goto lab_0x401ef4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401e44;
        } else {
            // 0x401e2a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401f33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401e44;
            } else {
                goto lab_0x401e44;
            }
        }
    }
  lab_0x401ef4:
    // 0x401ef4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401e84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c1f
    exit(status);
    // UNREACHABLE
  lab_0x401e44:
    // 0x401e44
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401e84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c1f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401f60 - 0x401f68
int64_t function_401f60(int64_t a1) {
    // 0x401f60
    g36 = a1;
    int64_t result; // 0x401f60
    return result;
}
// Address range: 0x401f70 - 0x401f78
int64_t function_401f70(int64_t a1) {
    // 0x401f70
    g35 = a1;
    int64_t result; // 0x401f70
    return result;
}
// Address range: 0x401f80 - 0x40201e
int64_t function_401f80(void) {
    // 0x401f80
    int32_t * err_num; // 0x401f96
    if ((int32_t)function_4052e0((int64_t)g28) == 0) {
        goto lab_0x401fac;
    } else {
        // 0x401f96
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x401fc3;
        } else {
            // 0x401fa7
            if (*err_num != 32) {
                goto lab_0x401fc3;
            } else {
                goto lab_0x401fac;
            }
        }
    }
  lab_0x401fac:;
    int64_t result = function_4052e0((int64_t)g31); // 0x401fb3
    if ((int32_t)result == 0) {
        // 0x401fbc
        return result;
    }
    // 0x401ffe
    _exit(g17);
    // UNREACHABLE
  lab_0x401fc3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401fcf
    if (g36 == 0) {
        // 0x402009
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401fe3
        error(0, *err_num, "%s: %s", (char *)function_403a90((int64_t)g36), v1);
    }
    // 0x401ffe
    _exit(g17);
    // UNREACHABLE
}
// Address range: 0x402020 - 0x4020b9
int64_t function_402020(int64_t str) {
    // 0x402020
    if (str == 0) {
        // 0x402099
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40202e
    int64_t result = (int64_t)found_char_pos; // 0x40202e
    if (found_char_pos == NULL) {
        // 0x402089
        g37 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402038
    if (v1 - str < 7) {
        // 0x402089
        g37 = str;
        g30 = str;
        return result;
    }
    // 0x402048
    bool v2; // 0x402020
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402020
    int64_t v5 = result - 6; // 0x402020
    int64_t v6 = 7; // 0x402056
    unsigned char v7 = *(char *)v5; // 0x402056
    char v8 = *(char *)v4; // 0x402056
    char v9 = v8; // 0x402056
    bool v10 = false; // 0x402056
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
    int64_t v12 = (int64_t)"lt-"; // 0x402060
    int64_t v13 = v1; // 0x402060
    int64_t v14 = 3; // 0x402060
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402089
        g37 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402072
    char v16 = *(char *)v12; // 0x402072
    char v17 = v16; // 0x402072
    bool v18 = false; // 0x402072
    while (v15 == v16) {
        // 0x402062
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
    int64_t v20 = v1; // 0x40207c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40207e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402089
    g37 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x4020c0 - 0x4021b2
int64_t function_4020c0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4020d4
    int64_t result = (int64_t)v1; // 0x4020d4
    if (result != a1) {
        // 0x4020e1
        return result;
    }
    int64_t v2 = function_4053a0(); // 0x4020f0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4021a6
    if (v3 == 85) {
        // 0x402100
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402198
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40212e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40213b
        // 0x4020e1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402198
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40217d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40218a
    // 0x4020e1
    return result4;
}
// Address range: 0x4021c0 - 0x402217
int64_t function_4021c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4021c0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402208
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402217 - 0x4033e1
int64_t function_402217(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402261
    int64_t v3 = 0; // 0x402261
    int64_t v4; // 0x402217
    int64_t v5; // 0x402217
    int64_t v6; // 0x402217
    int64_t v7; // 0x402217
    int64_t v8; // 0x402217
    int64_t v9; // 0x402217
    int64_t v10; // 0x402217
    int64_t v11; // 0x402217
    int64_t v12; // 0x402217
    int64_t v13; // 0x402217
    int64_t v14; // 0x402217
    int64_t v15; // 0x402217
    int64_t v16; // 0x402217
    int64_t v17; // 0x402217
    int64_t v18; // 0x402217
    int64_t result; // 0x402217
    int64_t v19; // 0x402217
    int32_t wc; // bp+132, 0x402217
    int64_t ps; // bp+136, 0x402217
    char v20; // 0x4027d0
    int64_t v21; // 0x4027d0
    int64_t v22; // 0x402b78
    int64_t v23; // 0x402217
    int64_t v24; // 0x402b97
    int32_t v25; // 0x402217
    while (true) {
      lab_0x402268_2:
        // 0x402268
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402217
        int64_t v27; // 0x40229c
        while (true) {
          lab_0x402268:
            // 0x402268
            v5 = v26;
            bool v28 = v15 == v5; // 0x402273
            if (v15 == -1) {
                // 0x402275
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402283
            if (v28) {
                // break (via goto) -> 0x4029e8
                goto lab_0x4029e8;
            }
            // 0x40228c
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
                    // 0x40287b
                    if (v25 % 2 == 0) {
                        goto lab_0x4023c1;
                    }
                    // 0x402c9d
                    v26 = v5 + 1;
                    goto lab_0x402268;
                }
                case 7: {
                    goto lab_0x4023c1;
                }
                case 8: {
                    goto lab_0x4023c1;
                }
                case 9: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4023c1;
                }
                case 12: {
                    goto lab_0x4023c1;
                }
                case 13: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40238d;
                }
                case 36: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4023c1;
                }
                case 38: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4023c1;
                }
                case 44: {
                    goto lab_0x4023c1;
                }
                case 45: {
                    goto lab_0x4023c1;
                }
                case 46: {
                    goto lab_0x4023c1;
                }
                case 47: {
                    goto lab_0x4023c1;
                }
                case 48: {
                    goto lab_0x4023c1;
                }
                case 49: {
                    goto lab_0x4023c1;
                }
                case 50: {
                    goto lab_0x4023c1;
                }
                case 51: {
                    goto lab_0x4023c1;
                }
                case 52: {
                    goto lab_0x4023c1;
                }
                case 53: {
                    goto lab_0x4023c1;
                }
                case 54: {
                    goto lab_0x4023c1;
                }
                case 55: {
                    goto lab_0x4023c1;
                }
                case 56: {
                    goto lab_0x4023c1;
                }
                case 57: {
                    goto lab_0x4023c1;
                }
                case 58: {
                    goto lab_0x4023c1;
                }
                case 59: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4023c1;
                }
                case 66: {
                    goto lab_0x4023c1;
                }
                case 67: {
                    goto lab_0x4023c1;
                }
                case 68: {
                    goto lab_0x4023c1;
                }
                case 69: {
                    goto lab_0x4023c1;
                }
                case 70: {
                    goto lab_0x4023c1;
                }
                case 71: {
                    goto lab_0x4023c1;
                }
                case 72: {
                    goto lab_0x4023c1;
                }
                case 73: {
                    goto lab_0x4023c1;
                }
                case 74: {
                    goto lab_0x4023c1;
                }
                case 75: {
                    goto lab_0x4023c1;
                }
                case 76: {
                    goto lab_0x4023c1;
                }
                case 77: {
                    goto lab_0x4023c1;
                }
                case 78: {
                    goto lab_0x4023c1;
                }
                case 79: {
                    goto lab_0x4023c1;
                }
                case 80: {
                    goto lab_0x4023c1;
                }
                case 81: {
                    goto lab_0x4023c1;
                }
                case 82: {
                    goto lab_0x4023c1;
                }
                case 83: {
                    goto lab_0x4023c1;
                }
                case 84: {
                    goto lab_0x4023c1;
                }
                case 85: {
                    goto lab_0x4023c1;
                }
                case 86: {
                    goto lab_0x4023c1;
                }
                case 87: {
                    goto lab_0x4023c1;
                }
                case 88: {
                    goto lab_0x4023c1;
                }
                case 89: {
                    goto lab_0x4023c1;
                }
                case 90: {
                    goto lab_0x4023c1;
                }
                case 91: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4023c1;
                }
                case 94: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4023c1;
                }
                case 96: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4023c1;
                }
                case 98: {
                    goto lab_0x4023c1;
                }
                case 99: {
                    goto lab_0x4023c1;
                }
                case 100: {
                    goto lab_0x4023c1;
                }
                case 101: {
                    goto lab_0x4023c1;
                }
                case 102: {
                    goto lab_0x4023c1;
                }
                case 103: {
                    goto lab_0x4023c1;
                }
                case 104: {
                    goto lab_0x4023c1;
                }
                case 105: {
                    goto lab_0x4023c1;
                }
                case 106: {
                    goto lab_0x4023c1;
                }
                case 107: {
                    goto lab_0x4023c1;
                }
                case 108: {
                    goto lab_0x4023c1;
                }
                case 109: {
                    goto lab_0x4023c1;
                }
                case 110: {
                    goto lab_0x4023c1;
                }
                case 111: {
                    goto lab_0x4023c1;
                }
                case 112: {
                    goto lab_0x4023c1;
                }
                case 113: {
                    goto lab_0x4023c1;
                }
                case 114: {
                    goto lab_0x4023c1;
                }
                case 115: {
                    goto lab_0x4023c1;
                }
                case 116: {
                    goto lab_0x4023c1;
                }
                case 117: {
                    goto lab_0x4023c1;
                }
                case 118: {
                    goto lab_0x4023c1;
                }
                case 119: {
                    goto lab_0x4023c1;
                }
                case 120: {
                    goto lab_0x4023c1;
                }
                case 121: {
                    goto lab_0x4023c1;
                }
                case 122: {
                    goto lab_0x4023c1;
                }
                case 123: {
                    goto lab_0x402365;
                }
                case 124: {
                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402365;
                }
                case 126: {
                    goto lab_0x40238d;
                }
                default: {
                    goto lab_0x402765;
                }
            }
        }
      lab_0x402765:
        if (v23 != 1) {
            // 0x402ad0
            ps = 0;
            int64_t len = v15; // 0x402ae0
            if (v15 == -1) {
                // 0x402ae2
                len = strlen((char *)str);
            }
            // 0x402b0e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402b6f:
                // 0x402b6f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402b74
                int64_t v30 = v29 + str;
                v24 = function_405260(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4030ea_2;
                    }
                    case -1: {
                        goto lab_0x4030ea_2;
                    }
                    case -2: {
                        // 0x4031cd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403207
                            v19 = v18;
                            int64_t v31 = v18; // 0x40320a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403217
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403210
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4030ea
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4030ea_2;
                    }
                    case 1: {
                        goto lab_0x402b40;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402bec
                        char v34 = *(char *)v33; // 0x402bfd
                        unsigned char v35; // 0x402217
                        if (v34 < 125) {
                            // 0x402c08
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402c1f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402bf0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402bfd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402c08
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402c1f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402bf0
                            v33++;
                        }
                        goto lab_0x402b40;
                    }
                }
            }
            goto lab_0x4030ea_2;
        } else {
            // 0x4027b4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4023c1;
        }
    }
  lab_0x4029e8:
    // 0x4029e8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4032ea
        if (v8 > result) {
            // 0x4032f3
            *(char *)(v12 + result) = 0;
        }
        // 0x402617
        return result;
    }
    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4023c1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4023d0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4025da_2;
        }
    }
    int64_t v39 = result; // 0x4024d1
    char v40 = v20; // 0x4024d1
    int64_t v41 = v38; // 0x4024d1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4024d1
    int64_t v43 = v36; // 0x4024d1
    goto lab_0x40244d;
  lab_0x4025da_2:
    // 0x402617
    return function_4021c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4030ea_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4023c1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402cbe
        int64_t v50 = v5 + 1; // 0x402da1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402da8
        char v52 = v20; // 0x402da8
        int64_t v53 = result; // 0x402da8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402d71
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402d75
            int64_t v56 = v54 + 1; // 0x402d7a
            int64_t v57 = v51 + 1; // 0x402da1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402d6c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402d71
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402d75
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
        goto lab_0x40244d;
    }
  lab_0x402b40:
    // 0x402b40
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402b5f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402b62
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4030ea
        goto lab_0x4030ea_2;
    }
    goto lab_0x402b6f;
  lab_0x40238d:
    // 0x40238d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4025da_2;
    }
    goto lab_0x4023c1;
  lab_0x402365:;
    bool v60 = v15 == 1; // 0x402370
    if (v15 == -1) {
        // 0x402372
        v60 = *(char *)v1 == 0;
    }
    // 0x40237e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4023c1;
    } else {
        goto lab_0x40238d;
    }
  lab_0x40244d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402452
        *(char *)(v44 + v45) = v40;
    }
    // 0x402456
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402268_2;
}
// Address range: 0x4033f0 - 0x40358e
int64_t function_4033f0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4033f2
    int32_t * v3 = __errno_location(); // 0x40340c
    int64_t v4 = (int64_t)g19; // 0x403411
    int32_t v5 = *v3; // 0x40341b
    int64_t v6 = v4; // 0x403431
    if (v2 >= (int64_t)*(int32_t *)&g22) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403589
            function_404450(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403440
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403447
        int64_t v9; // 0x4033f0
        if (g19 == &g20) {
            int64_t v10 = function_404260(0, v8); // 0x40356a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g20); // 0x40356f
            *(int64_t *)&g19 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404260(v4, v8); // 0x40345b
            *(int64_t *)&g19 = v12;
            v9 = v12;
        }
        // 0x40346a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g22; // 0x40346a
        int32_t v14 = v7; // 0x403471
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g22 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4034a1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4034ab
    int64_t * v17 = (int64_t *)v15; // 0x4034ae
    uint64_t v18 = *v17; // 0x4034ae
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4034b1
    int64_t result = *v19; // 0x4034b1
    int64_t v20; // 0x4033f0
    uint64_t v21 = function_4021c0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4034d4
    if (v18 > v21) {
        // 0x40354b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4034e7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x4034f7
        free((int64_t *)result);
    }
    int64_t result2 = function_404200(v22); // 0x403511
    *v19 = result2;
    int64_t v23; // 0x4033f0
    function_4021c0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40354b
    *v3 = v5;
    return result2;
}
// Address range: 0x403590 - 0x4035c4
int64_t function_403590(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403597
    int64_t result = function_404400(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4035b6
    return result;
}
// Address range: 0x4035d0 - 0x4035df
int64_t function_4035d0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x4035dc
    return result;
}
// Address range: 0x4035e0 - 0x4035ef
int64_t function_4035e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x4035e8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x4035f0 - 0x403623
int64_t function_4035f0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403609
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40360e
    uint32_t v3 = *v2; // 0x40360e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403612
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403630 - 0x403643
int64_t function_403630(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40363c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403650 - 0x40367b
int64_t function_403650(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403658
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403675
        abort();
        // UNREACHABLE
    }
    // 0x40366c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403680 - 0x4036f2
int64_t function_403680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4036a2
    int32_t * v2 = __errno_location(); // 0x4036ab
    uint32_t v3 = *(int32_t *)v1; // 0x4036cb
    int64_t result = function_4021c0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4036da
    return result;
}
// Address range: 0x403700 - 0x4037e1
int64_t function_403700(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403722
    int32_t * v2 = __errno_location(); // 0x403728
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403747
    int32_t * v4 = (int32_t *)v1; // 0x40374a
    int64_t v5 = function_4021c0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403765
    int64_t v6 = v5 + 1; // 0x40376a
    int64_t result = function_404200(v6); // 0x40377f
    function_4021c0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4037c4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4037cd
    return result;
}
// Address range: 0x4037f0 - 0x4037fa
int64_t function_4037f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4037f0
    return function_403700(a1, a2, 0, a3);
}
// Address range: 0x403800 - 0x403895
int64_t function_403800(void) {
    uint32_t v1 = *(int32_t *)&g22; // 0x403800
    int64_t v2 = v1; // 0x403800
    int64_t v3 = v2; // 0x403814
    if (v1 >= 2) {
        int64_t v4 = &g22;
        int64_t v5 = v4 + 16; // 0x403833
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g19 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403830
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40384d
    if (g20 != 0x6092c0) {
        // 0x40384f
        free((int64_t *)g20);
        g20 = 256;
        *(int64_t *)&g21 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403871
    if (g19 != &g20) {
        // 0x403873
        free(g19);
        *(int64_t *)&g19 = (int64_t)&g20;
        result = &g49;
    }
    // 0x403886
    *(int32_t *)&g22 = 1;
    return result;
}
// Address range: 0x4038a0 - 0x4038b1
int64_t function_4038a0(void) {
    // 0x4038a0
    int64_t v1; // 0x4038a0
    return function_4033f0(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x4038c0 - 0x4038ca
int64_t function_4038c0(void) {
    // 0x4038c0
    int64_t v1; // 0x4038c0
    return function_4033f0(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x4038d0 - 0x4038e6
int64_t function_4038d0(int64_t a1) {
    // 0x4038d0
    return function_4033f0(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x4038f0 - 0x403902
int64_t function_4038f0(int64_t a1, int64_t a2) {
    // 0x4038f0
    return function_4033f0(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403910 - 0x403978
int64_t function_403910(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403920
    return function_4033f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403980 - 0x4039e4
int64_t function_403980(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403990
    return function_4033f0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4039f0 - 0x4039fc
int64_t function_4039f0(int64_t a1, int64_t a2) {
    // 0x4039f0
    return function_403910(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403a00 - 0x403a0f
int64_t function_403a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a00
    return function_403980(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403a10 - 0x403a80
int64_t function_403a10(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403a1d
    int128_t v2 = __asm_movdqa(g40); // 0x403a25
    int128_t v3 = __asm_movdqa(g41); // 0x403a2d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403a42
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403a58
    uint32_t v6 = *v5; // 0x403a58
    uint32_t v7 = (int32_t)a3 % 32; // 0x403a5d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4033f0(0, a1, a2, &v4);
}
// Address range: 0x403a80 - 0x403a8d
int64_t function_403a80(int64_t a1, int64_t a2) {
    // 0x403a80
    return function_403a10(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403a90 - 0x403aa1
int64_t function_403a90(int64_t a1) {
    // 0x403a90
    return function_403a10(a1, -1, 58);
}
// Address range: 0x403ab0 - 0x403aba
int64_t function_403ab0(void) {
    // 0x403ab0
    int64_t v1; // 0x403ab0
    return function_403a10(v1, v1, 58);
}
// Address range: 0x403ac0 - 0x403b2e
int64_t function_403ac0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403ada
    return function_4033f0(a1, a3, -1, &v1);
}
// Address range: 0x403b30 - 0x403b9c
int64_t function_403b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403b37
    int128_t v2 = __asm_movdqa(g40); // 0x403b3f
    int128_t v3 = __asm_movdqa(g41); // 0x403b47
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403b69
    if (a2 == 0 || a3 == 0) {
        // 0x403b97
        abort();
        // UNREACHABLE
    }
    // 0x403b7a
    return function_4033f0(a1, a4, a5, &v4);
}
// Address range: 0x403ba0 - 0x403ba9
int64_t function_403ba0(void) {
    // 0x403ba0
    int64_t v1; // 0x403ba0
    return function_403b30(v1, v1, v1, v1, -1);
}
// Address range: 0x403bb0 - 0x403bc7
int64_t function_403bb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403bb0
    return function_403b30(0, a1, a2, a3, -1);
}
// Address range: 0x403bd0 - 0x403be3
int64_t function_403bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403bd0
    return function_403b30(0, a1, a2, a3, a4);
}
// Address range: 0x403bf0 - 0x403bfa
int64_t function_403bf0(void) {
    // 0x403bf0
    int64_t v1; // 0x403bf0
    return function_4033f0(v1, v1, v1, &g18);
}
// Address range: 0x403c00 - 0x403c12
int64_t function_403c00(int64_t a1, int64_t a2) {
    // 0x403c00
    return function_4033f0(0, a1, a2, &g18);
}
// Address range: 0x403c20 - 0x403c31
int64_t function_403c20(void) {
    // 0x403c20
    int64_t v1; // 0x403c20
    return function_4033f0(v1, v1, -1, &g18);
}
// Address range: 0x403c40 - 0x403c56
int64_t function_403c40(int64_t a1) {
    // 0x403c40
    return function_4033f0(0, a1, -1, &g18);
}
// Address range: 0x403c60 - 0x40403d
int64_t function_403c60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403cf8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403c7c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403c96
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403cdb
    if (a6 < 10) {
        // 0x403cea
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403de2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404040 - 0x404060
int64_t function_404040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404040
    if (a5 == 0) {
        // 0x40405b
        return function_403c60(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x404047
    v1++;
    int64_t v2 = v1; // 0x404059
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404050
        v1++;
        v2 = v1;
    }
    // 0x40405b
    return function_403c60(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x404060 - 0x4040c0
int64_t function_404060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404060
    int64_t v3 = &v2; // 0x404060
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404093
    int64_t v6; // 0x40407d
    int64_t * v7; // 0x40409b
    int64_t v8; // 0x40409b
    int64_t v9; // 0x4040a7
    if (v5 < 48) {
        // 0x404070
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4040b3
            break;
        }
    } else {
        // 0x40409b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4040b3
            break;
        }
    }
    int64_t v10 = 10; // 0x404091
    while (v4 != 9) {
        // 0x404089
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404070
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4040b3
                break;
            }
        } else {
            // 0x40409b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4040b3
                break;
            }
        }
        // 0x404089
        v10 = 10;
    }
    // 0x4040b3
    return function_403c60(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x4040c0 - 0x40417c
int64_t function_4040c0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4040c0
    int64_t v1; // bp-168, 0x4040c0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4040c0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4040c0
    int64_t v8; // 0x4040c0
    int64_t v9; // bp-56, 0x4040c0
    int64_t v10; // 0x404125
    int64_t v11; // 0x404149
    if ((int32_t)v6 < 48) {
        // 0x404110
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404160
            break;
        }
    } else {
        // 0x404142
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404160
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40413a
    int64_t v13 = 10; // 0x40413a
    while (v5 != 9) {
        // 0x40413c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404110
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404160
                break;
            }
        } else {
            // 0x404142
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404160
                break;
            }
        }
        // 0x404132
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404160
    int64_t v14; // bp-136, 0x4040c0
    int64_t result = function_403c60(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x40416f
    return result;
}
// Address range: 0x404180 - 0x4041f4
int64_t function_404180(int64_t a1) {
    // 0x404180
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4041e3
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404200 - 0x40421a
int64_t function_404200(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404204
    if (size != 0 != (mem == NULL)) {
        // 0x404213
        return (int64_t)mem;
    }
    // 0x404215
    function_404450(size);
    // UNREACHABLE
}
// Address range: 0x404220 - 0x404241
int64_t function_404220(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404223
    int64_t v2 = v1; // 0x404223
    if (v2 < 0) {
        // 0x40423b
        function_404450(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404239
        return function_404200(v2);
    }
    // 0x40423b
    function_404450(v2);
    // UNREACHABLE
}
// Address range: 0x404250 - 0x404252
int64_t function_404250(void) {
    // 0x404250
    int64_t v1; // 0x404250
    return function_404200(v1);
}
// Address range: 0x404260 - 0x404296
int64_t function_404260(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404288
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404271
    if (a2 != 0 != (mem == NULL)) {
        // 0x404280
        return (int64_t)mem;
    }
    // 0x404291
    function_404450(a1);
    // UNREACHABLE
}
// Address range: 0x4042a0 - 0x4042c1
int64_t function_4042a0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4042a3
    int64_t v2 = v1; // 0x4042a3
    if (v2 < 0) {
        // 0x4042bb
        function_404450(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4042b9
        return function_404260(a1, v2);
    }
    // 0x4042bb
    function_404450(a1);
    // UNREACHABLE
}
// Address range: 0x4042d0 - 0x404356
int64_t function_4042d0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40432b
            function_404450(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404260(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404313
    if (a2 == 0) {
        // 0x404338
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404318
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40432b
        function_404450(a1);
        // UNREACHABLE
    }
    // 0x4042fa
    *(int64_t *)a2 = v2;
    return function_404260(a1, v2 * a3);
}
// Address range: 0x404360 - 0x4043b0
int64_t function_404360(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404360
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4043aa
            function_404450(a1);
            // UNREACHABLE
        }
        // 0x404382
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404260(a1, v1);
    }
    if (a2 == 0) {
        // 0x404395
        *(int64_t *)a2 = 128;
        return function_404260(0, 128);
    }
    // 0x4043a8
    if (a2 < 0) {
        // 0x4043aa
        function_404450(a1);
        // UNREACHABLE
    }
    // 0x404382
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404260(a1, v1);
}
// Address range: 0x4043b0 - 0x4043c7
int64_t function_4043b0(int64_t a1, int64_t a2) {
    // 0x4043b0
    return (int64_t)memset((int64_t *)function_404200(a1), 0, (int32_t)a1);
}
// Address range: 0x4043d0 - 0x4043fe
int64_t function_4043d0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4043d7
    if ((int64_t)v1 < 0) {
        // 0x4043f9
        function_404450(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4043f9
        function_404450(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4043ea
    if (mem != NULL) {
        // 0x4043f4
        return (int64_t)mem;
    }
    // 0x4043f9
    function_404450(nmemb);
    // UNREACHABLE
}
// Address range: 0x404400 - 0x404428
int64_t function_404400(int64_t a1, int64_t a2) {
    int64_t v1 = function_404200(a2); // 0x40440f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404430 - 0x404443
int64_t function_404430(int64_t str) {
    // 0x404430
    return function_404400(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404450 - 0x404481
int64_t function_404450(int64_t a1) {
    // 0x404450
    error(g17, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404490 - 0x40456f
int64_t function_404490(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40449c
    uint32_t v2 = *v1; // 0x40449c
    int64_t v3 = a2 & 0xffffffff; // 0x4044a1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4044a4
    uint64_t v5 = (int64_t)*v4; // 0x4044a4
    int64_t v6; // 0x404512
    if (v3 <= v5) {
      lab_0x40450c_2:
        // 0x40450c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404492
    int64_t v8 = v2; // 0x404490
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40450c
        goto lab_0x40450c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4044c8
    int64_t v17; // 0x4044d6
    int64_t * v18; // 0x4044f0
    int64_t * v19; // 0x4044f3
    int64_t v20; // 0x4044fe
    int64_t v21; // 0x4044d6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4044d3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4044f0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404507
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40450c
            goto lab_0x40450c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40450c
            goto lab_0x40450c_2;
        }
        // 0x4044c2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40454b
    int64_t * v23 = (int64_t *)v22; // 0x404550
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404553
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404550
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404567
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4044bd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40450c
            goto lab_0x40450c_2;
        }
        // 0x4044c2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4044d3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4044f0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404507
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40450c
                goto lab_0x40450c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40450c
                goto lab_0x40450c_2;
            }
            // 0x4044c2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404530
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404550
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404567
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40450c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404570 - 0x404b8c
int64_t function_404570(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40458f
    int64_t v2 = *v1; // 0x40458f
    char * str2 = (char *)v2; // 0x40459c
    char c = *str2; // 0x40459c
    int64_t v3 = v2; // 0x4045c8
    int64_t v4 = 0; // 0x404570
    int32_t v5; // 0x404570
    int64_t v6; // 0x404570
    int64_t v7; // 0x404570
    int64_t v8; // 0x404570
    int64_t v9; // 0x404570
    int64_t v10; // 0x404570
    int64_t v11; // 0x404570
    int64_t v12; // 0x404570
    int64_t v13; // 0x404570
    int64_t str3; // 0x404570
    int64_t v14; // 0x404570
    int64_t v15; // 0x404570
    int64_t v16; // 0x404570
    int64_t v17; // 0x404570
    int32_t v18; // 0x404570
    int32_t v19; // 0x404570
    int32_t v20; // 0x404570
    int32_t v21; // 0x404570
    int32_t v22; // 0x404570
    int32_t v23; // 0x404570
    int32_t v24; // 0x404570
    int32_t v25; // 0x404570
    int32_t v26; // 0x404570
    int32_t v27; // 0x404570
    int32_t v28; // 0x404570
    int32_t v29; // 0x404570
    int64_t nmemb; // 0x404570
    int64_t v30; // 0x404570
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4045cc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4045c8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4045d8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4045de
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4045a8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40460c
                int64_t v34; // 0x404570
                int64_t v35; // 0x404570
                if (strncmp(str, str2, n) == 0) {
                    // 0x404615
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404790;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404626
                int64_t v37 = *(int64_t *)v36; // 0x40462a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404600
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404615
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404790;
                        }
                    }
                    // 0x404626
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
                  lab_0x404676:
                    // 0x404676
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
                        goto lab_0x4046d0;
                    } else {
                        if (v11 == 0) {
                            // 0x404840
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4046d0;
                        } else {
                            if (v39 == 0) {
                                // 0x4047f0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40469a;
                                } else {
                                    // 0x4047fc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40469a;
                                    } else {
                                        // 0x40480a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40469a;
                                        } else {
                                            goto lab_0x4046d0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40469a;
                            }
                        }
                    }
                }
              lab_0x4046e1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4048b6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404a62
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404a82
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404acf
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404ae9
                            int64_t v45; // 0x404aeb
                            if (*(char *)v42 != 0) {
                                // 0x404aeb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404ae3
                            while (v17 + nmemb != v42) {
                                // 0x404ae5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404aeb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404ad8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404b10
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x4048c4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404a1f
                        free((int64_t *)v17);
                    }
                    // 0x404919
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404930
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4047de
                    return 63;
                }
                // 0x404700
                v5 = v39;
                if (v13 != 0) {
                    // 0x404784
                    v35 = v13;
                    v34 = v25;
                  lab_0x404790:;
                    int32_t * v49 = (int32_t *)a7; // 0x4047a0
                    uint32_t v50 = *v49; // 0x4047a0
                    int64_t v51 = v50; // 0x4047a0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4047aa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4047b3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4049df
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40498a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4047de
                            return 63;
                        }
                        // 0x404828
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404b3f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404a3d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404a50
                                // 0x4047de
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40494e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404962
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4047cb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4047ce
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4047d2
                    int64_t result = v59; // 0x4047d8
                    if (v58 != 0) {
                        // 0x4047da
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4047de
                    return result;
                }
            } else {
                // 0x4045de
                v5 = v32;
            }
            // break -> 0x404705
            break;
        }
    }
    // 0x404705
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40471d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404727
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4047de
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404869
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404756
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404766
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4046d0:
    // 0x4046d0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4046d0
    int64_t v63 = *(int64_t *)v62; // 0x4046d4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4046e1
        goto lab_0x4046e1;
    }
    goto lab_0x404676;
  lab_0x40469a:
    // 0x40469a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404570
    int32_t v65; // 0x404570
    int32_t v66; // 0x404570
    if (v27 != 0) {
        goto lab_0x4046d0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404850
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4046d0;
            } else {
                goto lab_0x4046c1;
            }
        } else {
            // 0x4046b5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4049ac
                int64_t v67 = (int64_t)mem; // 0x4049ac
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4046d0;
                } else {
                    // 0x4049bf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4046c1;
                }
            } else {
                goto lab_0x4046c1;
            }
        }
    }
  lab_0x4046c1:
    // 0x4046c1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4046d0;
}
// Address range: 0x404b90 - 0x405156
int64_t function_404b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404bb1
    if (v3 < 1) {
        // 0x404d6e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404bad
    int32_t v5 = *(int32_t *)a7; // 0x404bb9
    uint64_t v6 = a1 & 0xffffffff; // 0x404bbb
    int64_t v7 = v2; // 0x404bc0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404bc3
    *v8 = 0;
    int64_t v9; // 0x404b90
    int64_t v10; // 0x404b90
    int64_t v11; // 0x404b90
    int64_t v12; // 0x404b90
    int64_t str; // 0x404b90
    int64_t v13; // 0x404b90
    int64_t v14; // 0x404b90
    int64_t v15; // 0x404b90
    int64_t v16; // 0x404b90
    int64_t v17; // 0x404b90
    int32_t v18; // 0x404b90
    char v19; // 0x404b90
    if (v5 == 0) {
        // 0x404da8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404bda;
    } else {
        // 0x404bd3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404c20
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404c23
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404ce8;
            } else {
                int64_t v22 = v7 + 1; // 0x404c36
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404c46
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404cfc;
                } else {
                    goto lab_0x404c58;
                }
            }
        } else {
            goto lab_0x404bda;
        }
    }
  lab_0x404bda:
    // 0x404bda
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404be0
    *v24 = 0;
    int64_t v25; // 0x404b90
    int64_t v26; // 0x404b90
    int64_t v27; // 0x404b90
    switch (*(char *)&v2) {
        case 45: {
            // 0x404cd0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404cdd;
        }
        case 43: {
            // 0x404fe0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404cdd;
        }
        default: {
            // 0x404bfc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404f5f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405078
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404cdd;
                } else {
                    // 0x404f6d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404c0a;
                }
            } else {
                goto lab_0x404c0a;
            }
        }
    }
  lab_0x404ce8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404cef
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404c58;
    } else {
        goto lab_0x404cfc;
    }
  lab_0x404c0a:
    // 0x404c0a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404cdd;
  lab_0x404cdd:
    // 0x404cdd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404ce8;
  lab_0x404c58:;
    uint32_t v30 = *(int32_t *)a7; // 0x404c58
    int64_t v31 = v30; // 0x404c58
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404c5a
    if ((int64_t)*v32 > v31) {
        // 0x404c5f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404c62
    if (*v33 > v30) {
        // 0x404c67
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404c6a
    int64_t v35 = v31; // 0x404c6e
    int64_t v36 = v15; // 0x404c6e
    int64_t v37; // 0x404b90
    int64_t v38; // 0x404b90
    int64_t v39; // 0x404b90
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404dd8
        int64_t v41 = v40; // 0x404dd8
        v2 = v41;
        int64_t v42; // 0x404b90
        if (*v33 == v40) {
            // 0x404fc0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404fc8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404de4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404df8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404e01
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404e0a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404e21
            int64_t v47 = v45 & 0xffffffff; // 0x404e25
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404e2e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404e34
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404e36;
                }
            }
            int64_t v48 = v47 + 1; // 0x404e10
            int64_t v49 = v48 & 0xffffffff; // 0x404e10
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404e21
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404e2e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404e34
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404e36;
                    }
                }
                // 0x404e10
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404fd8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404e36;
    } else {
        goto lab_0x404c74;
    }
  lab_0x404cfc:
    // 0x404cfc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404cff
    int64_t v51 = v12; // 0x404cff
    int64_t v52 = v14; // 0x404cff
    if (*(char *)v10 == 0) {
        goto lab_0x404c58;
    } else {
        goto lab_0x404d05;
    }
  lab_0x404c74:;
    int32_t v53 = v35; // 0x404c74
    int64_t v54; // 0x404b90
    int64_t v55; // 0x404b90
    int64_t v56; // 0x404b90
    int64_t v57; // 0x404b90
    int64_t v58; // 0x404b90
    int64_t v59; // 0x404b90
    char * v60; // 0x404b90
    int64_t v61; // 0x404b90
    int64_t v62; // 0x404c89
    int64_t v63; // 0x404b90
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404dc3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404dc6;
    } else {
        // 0x404c7c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404b90
        int64_t v66 = v65 ? -1 : 1; // 0x404c90
        int64_t v67 = (int64_t)"--"; // 0x404b90
        int64_t v68 = v62; // 0x404b90
        int64_t v69 = 3; // 0x404c90
        unsigned char v70 = *(char *)v68; // 0x404c90
        char v71 = *(char *)v67; // 0x404c90
        char v72 = v71; // 0x404c90
        bool v73 = false; // 0x404c90
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
            // 0x404d80
            if (*(char *)v62 == 45) {
                // 0x404e40
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404e40
                if (c == 0) {
                    goto lab_0x404d8a;
                } else {
                    // 0x404e4d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404ed0;
                    } else {
                        if (c == 45) {
                            // 0x4050b3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404f25;
                        } else {
                            // 0x404e5e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404ed0;
                            } else {
                                // 0x404e63
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404e84;
                                } else {
                                    // 0x404e6a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404ed0;
                                    } else {
                                        goto lab_0x404e84;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404d8a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404ca0
            v2 = v75;
            int32_t v76 = *v32; // 0x404ca3
            int64_t v77 = v35 + 1; // 0x404ca6
            int32_t v78 = v77; // 0x404ca9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405010
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404cb7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404cc5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404dc6;
        }
    }
  lab_0x404d05:;
    // 0x404d05
    int64_t v79; // bp-104, 0x404b90
    int64_t v80 = &v79; // 0x404b9a
    int64_t v81 = v50 + 1; // 0x404d05
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404d0c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404d11
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404d15
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404d19
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404d21
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404d26
    int32_t c2 = v84; // 0x404d26
    char * found_char_pos = strchr(str2, c2); // 0x404d26
    int64_t v87 = *v82; // 0x404d2b
    v2 = v87;
    int64_t v88 = *v85; // 0x404d35
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404d40
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405030
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404ffd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404d6e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404d26
    char v91 = *(char *)(v90 + 1); // 0x404d5b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404d15
        if (v91 != 58) {
            // 0x404d6e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404f84
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405088
                *v8 = 0;
            } else {
                // 0x40506c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404fae
            *v83 = 0;
            // 0x404d6e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404f8e
        if (v93 != 0) {
            // 0x405020
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404fae
            *v83 = 0;
            // 0x404d6e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404fa1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404fae
            *v83 = 0;
            // 0x404d6e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4050ea
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40509a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4050a1
        // 0x404fae
        *v83 = 0;
        // 0x404d6e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404ef9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404efb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405120
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4050d1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4050d8
            // 0x404d6e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404f06
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404f0a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404f25;
  lab_0x404e36:
    // 0x404e36
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404c74;
  lab_0x404f25:;
    int64_t v99 = function_404570(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404f43
    // 0x404d6e
    return v99 & 0xffffffff;
  lab_0x404dc6:;
    int32_t v100 = v55; // 0x404dc6
    if (v100 != (int32_t)v59) {
        // 0x404dca
        *(int32_t *)a7 = v100;
    }
    // 0x404d6e
    return 0xffffffff;
  lab_0x404d8a:
    // 0x404d8a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404d91
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404d6e
    return v99 & 0xffffffff;
  lab_0x404ed0:
    // 0x404ed0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404d05;
  lab_0x404e84:
    // 0x404e84
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404570(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x404eaa
    if ((int32_t)v101 != -1) {
        // 0x404d6e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404ebf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404ed0;
}
// Address range: 0x405160 - 0x4051b6
int64_t function_405160(int64_t a1) {
    // 0x405160
    *(int32_t *)&g42 = g25;
    *(int32_t *)&g43 = g24;
    int64_t v1; // 0x405160
    int64_t result = function_404b90(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x405186
    g25 = *(int32_t *)&g42;
    g47 = (char *)g45;
    *(int32_t *)&g23 = g44;
    return result;
}
// Address range: 0x4051c0 - 0x4051d8
int64_t function_4051c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4051c0
    return function_405160(1);
}
// Address range: 0x4051e0 - 0x4051f3
int64_t function_4051e0(int64_t a1, int64_t a2, char * a3, char (**a4)[19], int32_t a5, int64_t a6) {
    // 0x4051e0
    return function_405160(0);
}
// Address range: 0x405200 - 0x405215
int64_t function_405200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405200
    return function_404b90(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405220 - 0x405236
int64_t function_405220(void) {
    // 0x405220
    return function_405160(0);
}
// Address range: 0x405240 - 0x405258
int64_t function_405240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405240
    return function_404b90(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405260 - 0x4052da
int64_t function_405260(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40526b
    int64_t v2 = (int64_t)&g9; // 0x40526b
    int32_t * pwc; // 0x405260
    int64_t v3; // 0x405260
    int64_t n; // 0x405260
    if (a2 == 0) {
        goto lab_0x4052b2;
    } else {
        // 0x40526d
        if (a3 == 0) {
            // 0x405298
            return -2;
        }
        // 0x405279
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4052b2;
        } else {
            goto lab_0x405284;
        }
    }
  lab_0x4052b2:
    // 0x4052b2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405260
    pwc = (int32_t *)&v4;
    goto lab_0x405284;
  lab_0x405284:;
    char * wstr = (char *)v3; // 0x40528a
    int64_t ps; // 0x405260
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40528a
    int64_t result = v5; // 0x40528a
    if (v5 < 0xfffffffe) {
        // 0x405298
        return result;
    }
    int64_t result2 = result; // 0x4052c9
    if ((char)function_405340(0, v3) == 0) {
        // 0x4052cb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405298
    return result2;
}
// Address range: 0x4052e0 - 0x40533d
int64_t function_4052e0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4052e7
    int64_t v2; // 0x4052e0
    int64_t result = function_405910(a1, v2); // 0x4052f8
    if ((v2 & 32) != 0) {
        // 0x405320
        if ((int32_t)result == 0) {
            // 0x405324
            *__errno_location() = 0;
        }
        // 0x40531a
        return 0xffffffff;
    }
    // 0x405301
    if ((int32_t)result == 0) {
        // 0x40531a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405308
    if (v1 == 0) {
        // 0x40530a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40531a
    return result2;
}
// Address range: 0x405340 - 0x40539e
int64_t function_405340(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405346
    if (locale == NULL) {
        // 0x405373
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405346
    bool v2; // 0x405340
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x405340
    int64_t v5 = v1; // 0x405340
    int64_t v6 = 2; // 0x405365
    unsigned char v7 = *(char *)v5; // 0x405365
    char v8 = *(char *)v4; // 0x405365
    char v9 = v8; // 0x405365
    bool v10 = false; // 0x405365
    while (v7 == v8) {
        // 0x405358
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405371
    int64_t v13 = v1; // 0x405371
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405373
        return 0;
    }
    int64_t v14 = 6; // 0x405371
    unsigned char v15 = *(char *)v13; // 0x40538d
    char v16 = *(char *)v12; // 0x40538d
    char v17 = v16; // 0x40538d
    bool v18 = false; // 0x40538d
    while (v15 == v16) {
        // 0x405380
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
// Address range: 0x4053a0 - 0x405902
int64_t function_4053a0(void) {
    char * v1 = nl_langinfo(14); // 0x4053b6
    char * v2 = g46; // 0x4053bb
    char * v3; // 0x4053a0
    int64_t v4; // 0x4053a0
    int64_t v5; // 0x4053a0
    int64_t v6; // 0x4053a0
    int64_t v7; // 0x4053a0
    int32_t size; // 0x4053a0
    int32_t size2; // 0x4053a0
    int32_t len; // 0x405472
    int64_t v8; // 0x405472
    char * env_val; // 0x40545d
    if (v2 == NULL) {
        // 0x405458
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4054c5;
        } else {
            // 0x40546a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4054c5;
            } else {
                // 0x40546f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40545d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4058f5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4054c5;
                    } else {
                        // 0x405869
                        size2 = len + 14;
                        goto lab_0x40548b;
                    }
                } else {
                    goto lab_0x40548b;
                }
            }
        }
    } else {
        // 0x4053a0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4053da;
    }
  lab_0x40570c:;
    // 0x40570c
    struct _IO_FILE * stream; // 0x40554b
    int32_t v10 = __uflow(stream); // 0x40570f
    int64_t v11; // 0x4053a0
    int64_t v12 = v11; // 0x405719
    int64_t v13; // 0x4053a0
    int64_t v14 = v13; // 0x405719
    int32_t v15 = v10; // 0x405719
    int64_t v16; // 0x4053a0
    int64_t v17 = v16; // 0x405719
    int64_t v18 = v11; // 0x405719
    int64_t v19 = v13; // 0x405719
    int64_t v20 = v16; // 0x405719
    if (v10 == -1) {
        // break -> 0x40571f
        goto lab_0x40571f;
    }
    goto lab_0x405599;
  lab_0x40558e:;
    // 0x40558e
    int64_t v90; // 0x4053a0
    int64_t * v32; // 0x405580
    *v32 = v90 + 1;
    int64_t v89; // 0x4053a0
    v12 = v89;
    int64_t v91; // 0x4053a0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4053a0
    v17 = v92;
    goto lab_0x405599;
  lab_0x405599:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4053a0
    int32_t v25; // bp-120, 0x4053a0
    int32_t v26; // bp-184, 0x4053a0
    int64_t v27; // 0x40554b
    int64_t v28; // 0x405568
    int64_t v29; // 0x40556d
    int64_t * v30; // 0x405584
    switch (c) {
        case 32: {
            goto lab_0x405580;
        }
        case 10: {
            goto lab_0x405580;
        }
        case 9: {
            goto lab_0x405580;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405771
            int32_t v33; // 0x4053a0
            char v34; // 0x4053a0
            int32_t v35; // 0x40577e
            if (v31 < *v30) {
                // 0x405750
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40577b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405771
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405750
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40577b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405760
                v36 = v33;
            }
            // 0x40584f
            if (v36 == -1) {
                // break -> 0x40571f
                break;
            }
            goto lab_0x405580;
        }
        default: {
            // 0x4055af
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40571f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4055d8
            int64_t v39 = v37 + 4; // 0x4055da
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4055e6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4055e8
            while (v41 == 0) {
                // 0x4055d8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405606
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405612
            int64_t v45 = v43 + 4; // 0x405614
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405620
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405622
            while (v47 == 0) {
                // 0x405612
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40560f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405638
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405648
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40564c
            int64_t v52 = v51 + v48; // 0x405655
            int64_t * mem; // 0x4053a0
            int64_t v53; // 0x4053a0
            int64_t v54; // 0x4053a0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40578b
                int64_t v56 = v55 + 3; // 0x405797
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405671
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405680
            if (mem == NULL) {
                // 0x4058ac
                free((int64_t *)v21);
                function_405910(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x405524;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405698
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4056a2
            uint32_t v62 = (int32_t)v59; // 0x4056a5
            int64_t v63; // 0x4053a0
            if (v62 >= 8) {
                // 0x4057b4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4057ce
                int64_t v66 = v61 - v65; // 0x4057d2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4057dd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4057ee
                    int64_t v70 = v69 & 0xffffffff; // 0x4057ee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4057eb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40587f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4056b7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4056bb
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
            int64_t v73 = v51 + 1; // 0x4056cb
            int64_t v74 = v60 - 1; // 0x4056cf
            uint32_t v75 = (int32_t)v73; // 0x4056d4
            int64_t v76; // 0x4053a0
            if (v75 >= 8) {
                // 0x405802
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40580c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40581c
                int64_t v80 = v74 - v79; // 0x405820
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40582b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40583b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405839
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405896
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40589e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4056e6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4056ea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4058e3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4056fe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40558e;
            } else {
                goto lab_0x40570c;
            }
        }
    }
  lab_0x405580:;
    int64_t v93 = v23; // 0x4053a0
    int64_t v94 = v22; // 0x4053a0
    int64_t v95 = v21; // 0x4053a0
    goto lab_0x405580_2;
  lab_0x4054c5:;
    int64_t * mem3 = malloc(size); // 0x4054c5
    int64_t v97 = (int64_t)&g9; // 0x4054d0
    int64_t v98; // 0x4053a0
    int64_t path; // 0x4053a0
    if (mem3 == NULL) {
        goto lab_0x4054a2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4054c5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4054e6;
    }
  lab_0x4053da:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x4053cd
    char v100 = *v3; // 0x4053da
    int64_t v101; // 0x4053a0
    if (v100 == 0) {
        // 0x405434
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4053a0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4053a0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405420
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405427;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4053f0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4053fd
        char v107 = *(char *)v106; // 0x405402
        v102 = v107;
        if (v107 == 0) {
            // 0x405434
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40540b
    v104 = v103 + 1;
  lab_0x405427:
    // 0x405434
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4054a2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4053da;
  lab_0x4054e6:;
    int64_t v109 = v98 + path; // 0x4054e6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405512
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x405541
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405872
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x405565
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405580_2:;
                uint64_t v96 = *v32; // 0x405580
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40570c;
                } else {
                    goto lab_0x40558e;
                }
            }
          lab_0x40571f:
            // 0x40571f
            function_405910(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x40573e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405524;
  lab_0x40548b:;
    int64_t * mem4 = malloc(size2); // 0x40548b
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x405531
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4054e6;
    } else {
        goto lab_0x4054a2;
    }
  lab_0x405524:
    // 0x405524
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4054a2;
}
// Address range: 0x405910 - 0x40598b
int64_t function_405910(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405917
    if (fileno(stream) < 0) {
        // 0x405977
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40592a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40595b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405977
            return fclose(stream);
        }
    }
    // 0x40592c
    if ((int32_t)function_405990(a1, v1) == 0) {
        // 0x405977
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405938
    int32_t v3 = *v2; // 0x405940
    int64_t result = fclose(stream); // 0x40594e
    if (v3 != 0) {
        // 0x405980
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405950
    return result;
}
// Address range: 0x405990 - 0x4059d0
int64_t function_405990(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4059aa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4059aa
        return fflush(stream);
    }
    // 0x4059b8
    function_4059d0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4059d0 - 0x405a27
int64_t function_4059d0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4059d0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4059da
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405a0b
    int64_t result = -1; // 0x405a14
    if (v1 != -1) {
        // 0x405a16
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405a22
    return result;
}
// Address range: 0x405a30 - 0x405a8d
int64_t function_405a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405a30
    return function_401368();
}
// Address range: 0x405a90 - 0x405a91
int64_t function_405a90(void) {
    // 0x405a90
    int64_t result; // 0x405a90
    return result;
}
// Address range: 0x405aa0 - 0x405ab8
int64_t function_405aa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405aa0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x405ab8 - 0x405ad8
int64_t function_405ab8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x405ac2
    while (*(int64_t *)v1 != -1) {
        // 0x405ac3
        v1 -= 8;
    }
    // 0x405ad4
    return result;
}
