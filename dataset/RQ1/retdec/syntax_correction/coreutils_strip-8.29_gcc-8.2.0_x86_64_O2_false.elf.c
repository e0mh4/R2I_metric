#include "decompile_retdec.h"
// Address range: 0x401400 - 0x401405
int64_t function_401400(void) {
    // 0x401400
    abort();
    // UNREACHABLE
}
// Address range: 0x401405 - 0x40140a
int64_t function_401405(void) {
    // 0x401405
    abort();
    // UNREACHABLE
}
// Address range: 0x40140a - 0x40140f
int64_t function_40140a(void) {
    // 0x40140a
    abort();
    // UNREACHABLE
}
// Address range: 0x40140f - 0x401414
int64_t function_40140f(void) {
    // 0x40140f
    abort();
    // UNREACHABLE
}
// Address range: 0x401414 - 0x401419
int64_t function_401414(void) {
    // 0x401414
    abort();
    // UNREACHABLE
}
// Address range: 0x401419 - 0x40141e
int64_t function_401419(void) {
    // 0x401419
    abort();
    // UNREACHABLE
}
// Address range: 0x401420 - 0x4014c8
int64_t function_401420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if ((int32_t)a1 != 2) {
        // 0x401425
        return 1;
    }
    // 0x40142b
    function_401960(a2);
    setlocale(LC_ALL, (char *)&g1);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_404610(0x4018c0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    char * str = (char *)*(int64_t *)(a2 + 8); // 0x401475
    if (strcmp(str, "--help") == 0) {
        // 0x4014be
        function_4015b0(1);
        // UNREACHABLE
    }
    // 0x40147e
    if (strcmp(str, "--version") == 0) {
        // 0x401496
        function_403a00((int64_t)g23, "false", "GNU coreutils", (int64_t)g15, "Jim Meyering", 0);
    }
    // 0x401425
    return 1;
}
// Address range: 0x4014d0 - 0x4014fb
// Address range: 0x4014fb - 0x40151a
int64_t function_4014fb(void) {
    // 0x4014fb
    return 0x6071f8;
}
// Address range: 0x40151a - 0x401551
int64_t function_40151a(void) {
    // 0x40151a
    return 0;
}
// Address range: 0x401551 - 0x4015a8
int64_t function_401551(void) {
    // 0x401551
    if (g26 != 0) {
        // 0x4015a7
        int64_t result; // 0x401551
        return result;
    }
    int64_t v1 = g27; // 0x401584
    int64_t result2; // 0x401596
    if (g27 >= ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401596
        result2 = function_4014fb();
        g26 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401586
        v1++;
    }
    // 0x40157a
    g27 = v1;
    // 0x401596
    result2 = function_4014fb();
    g26 = 1;
    return result2;
}
// Address range: 0x4015a8 - 0x4015ad
int64_t function_4015a8(void) {
    // 0x4015a8
    return function_40151a();
}
// Address range: 0x4015b0 - 0x4018a0
int64_t function_4015b0(int64_t status) {
    // 0x4015b0
    __printf_chk(1, dcgettext(NULL, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\n", 5));
    __printf_chk(1, "%s\n\n", dcgettext(NULL, "Exit with a status code indicating failure.", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g23);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g2; // bp-136, 0x401677
    bool v2; // 0x4015b0
    int64_t v3 = v2 ? -1 : 1; // 0x401717
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16;
    int64_t v6 = 6; // 0x401717
    int64_t v7 = (int64_t)"false";
    int64_t v8 = (int64_t)"coreutils";
    unsigned char v9 = *(char *)v7; // 0x401717
    char v10 = *(char *)v8; // 0x401717
    char v11 = v10; // 0x401717
    bool v12 = false; // 0x401717
    int64_t v13; // 0x4015b0
    int64_t v14; // 0x4015b0
    while (v9 == v10) {
        // 0x40170d
        v6--;
        v13 = v8 + v3;
        v14 = v7 + v3;
        v11 = v9;
        v12 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = v14;
        v8 = v13;
        v9 = *(char *)v7;
        v10 = *(char *)v8;
        v11 = v10;
        v12 = false;
    }
    int64_t v15 = v4; // 0x401721
    while ((v9 >= v11 && !v12) != v9 < v11) {
        int64_t v16 = *(int64_t *)(v4 + 32); // 0x401700
        v15 = v5;
        if (v16 == 0) {
            // break -> 0x401723
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = 6;
        v7 = (int64_t)"false";
        v8 = v16;
        v9 = *(char *)v7;
        v10 = *(char *)v8;
        v11 = v10;
        v12 = false;
        while (v9 == v10) {
            // 0x40170d
            v6--;
            v13 = v8 + v3;
            v14 = v7 + v3;
            v11 = v9;
            v12 = true;
            if (v6 == 0) {
                // break -> 
                break;
            }
            v7 = v14;
            v8 = v13;
            v9 = *(char *)v7;
            v10 = *(char *)v8;
            v11 = v10;
            v12 = false;
        }
        v15 = v4;
    }
    // 0x401723
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v15 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401866;
        } else {
            // 0x401821
            if (strncmp(locale, "en_", 3) == 0) {
                goto lab_0x401866;
            } else {
                // 0x40183c
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401785;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401785;
        } else {
            // 0x40176b
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40183c
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401785;
            } else {
                goto lab_0x401785;
            }
        }
    }
  lab_0x401866:
    // 0x401866
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4017c5
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    exit((int32_t)status);
    // UNREACHABLE
  lab_0x401785:
    // 0x401785
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4017c5
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    exit((int32_t)status);
    // UNREACHABLE
}
// Address range: 0x4018a0 - 0x4018a8
int64_t function_4018a0(int64_t a1) {
    // 0x4018a0
    g29 = a1;
    int64_t result; // 0x4018a0
    return result;
}
// Address range: 0x4018b0 - 0x4018b8
int64_t function_4018b0(int64_t a1) {
    // 0x4018b0
    g28 = a1;
    int64_t result; // 0x4018b0
    return result;
}
// Address range: 0x4018c0 - 0x40195e
int64_t function_4018c0(void) {
    // 0x4018c0
    int32_t * err_num; // 0x4018d6
    if ((int32_t)function_403e50((int64_t)g23) == 0) {
        goto lab_0x4018ec;
    } else {
        // 0x4018d6
        err_num = __errno_location();
        if (g28 == 0) {
            goto lab_0x401903;
        } else {
            // 0x4018e7
            if (*err_num != 32) {
                goto lab_0x401903;
            } else {
                goto lab_0x4018ec;
            }
        }
    }
  lab_0x4018ec:;
    int64_t result = function_403e50((int64_t)g25); // 0x4018f3
    if ((int32_t)result == 0) {
        // 0x4018fc
        return result;
    }
    // 0x40193e
    _exit(g16);
    // UNREACHABLE
  lab_0x401903:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40190f
    if (g29 == 0) {
        // 0x401949
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401923
        error(0, *err_num, "%s: %s", (char *)function_4033d0((int64_t)g29), v1);
    }
    // 0x40193e
    _exit(g16);
    // UNREACHABLE
}
// Address range: 0x401960 - 0x4019f9
int64_t function_401960(int64_t str) {
    // 0x401960
    if (str == 0) {
        // 0x4019d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g25);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40196e
    int64_t result = (int64_t)found_char_pos; // 0x40196e
    if (found_char_pos == NULL) {
        // 0x4019c9
        g30 = str;
        g24 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401978
    if (v1 - str < 7) {
        // 0x4019c9
        g30 = str;
        g24 = str;
        return result;
    }
    // 0x401988
    bool v2; // 0x401960
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401960
    int64_t v5 = result - 6; // 0x401960
    int64_t v6 = 7; // 0x401996
    unsigned char v7 = *(char *)v5; // 0x401996
    char v8 = *(char *)v4; // 0x401996
    char v9 = v8; // 0x401996
    bool v10 = false; // 0x401996
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
    int64_t v12 = (int64_t)"lt-"; // 0x4019a0
    int64_t v13 = v1; // 0x4019a0
    int64_t v14 = 3; // 0x4019a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4019c9
        g30 = str;
        g24 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4019b2
    char v16 = *(char *)v12; // 0x4019b2
    char v17 = v16; // 0x4019b2
    bool v18 = false; // 0x4019b2
    while (v15 == v16) {
        // 0x4019a2
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
    int64_t v20 = v1; // 0x4019bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4019be
        v20 = result + 4;
        g22 = v20;
    }
    // 0x4019c9
    g30 = v20;
    g24 = v20;
    return result;
}
// Address range: 0x401a00 - 0x401af2
int64_t function_401a00(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401a14
    int64_t result = (int64_t)v1; // 0x401a14
    if (result != a1) {
        // 0x401a21
        return result;
    }
    int64_t v2 = function_403f10(); // 0x401a30
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401ae6
    if (v3 == 85) {
        // 0x401a40
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401ad8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x401a6e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x401a7b
        // 0x401a21
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401ad8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x401abd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x401aca
    // 0x401a21
    return result4;
}
// Address range: 0x401b00 - 0x401b57
int64_t function_401b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401b00
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401b48
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401b57 - 0x402d21
int64_t function_401b57(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = 0; // 0x401ba1
    int64_t v2 = 0; // 0x401ba1
    int64_t v3; // 0x401b57
    int64_t v4; // 0x401b57
    int64_t v5; // 0x401b57
    int64_t v6; // 0x401b57
    int64_t v7; // 0x401b57
    int64_t v8; // 0x401b57
    int64_t v9; // 0x401b57
    int64_t v10; // 0x401b57
    int64_t v11; // 0x401b57
    int64_t v12; // 0x401b57
    int64_t v13; // 0x401b57
    int64_t v14; // 0x401b57
    int64_t v15; // 0x401b57
    int64_t v16; // 0x401b57
    int64_t v17; // 0x401b57
    int64_t v18; // 0x401b57
    int64_t v19; // 0x401b57
    int64_t result; // 0x401b57
    int64_t v20; // 0x401b57
    int64_t v21; // 0x401b57
    int64_t ps; // bp+136, 0x401b57
    char v22; // 0x402110
    int64_t v23; // 0x402110
    int32_t wc; // 0x401b57
    int64_t v24; // 0x401b57
    while (true) {
      lab_0x401ba8_2:
        // 0x401ba8
        v11 = v10;
        v7 = v6;
        v14 = v13;
        result = v1;
        int64_t v25 = v2; // 0x401b57
        int64_t v26; // 0x401bdc
        while (true) {
          lab_0x401ba8:
            // 0x401ba8
            v4 = v25;
            bool v27 = v14 == v4; // 0x401bb3
            if (v14 == -1) {
                // 0x401bb5
                v27 = *(char *)(v4 + str) == 0;
            }
            // 0x401bc3
            if (v27) {
                // break (via goto) -> 0x402328
                goto lab_0x402328;
            }
            // 0x401bcc
            v26 = v4 + str;
            v22 = *(char *)v26;
            v23 = v22;
            g36 = v23;
            v17 = v14;
            v8 = v7;
            v12 = v11;
            v3 = v14;
            v5 = v7;
            v9 = v11;
            switch (v22) {
                case 0: {
                    // 0x4021bb
                    if (wc % 2 == 0) {
                        goto lab_0x401d01;
                    }
                    // 0x4025dd
                    v25 = v4 + 1;
                    goto lab_0x401ba8;
                }
                case 7: {
                    goto lab_0x401d01;
                }
                case 8: {
                    goto lab_0x401d01;
                }
                case 9: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 10: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 11: {
                    goto lab_0x401d01;
                }
                case 12: {
                    goto lab_0x401d01;
                }
                case 13: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 32: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 33: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 34: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 35: {
                    goto lab_0x401ccd;
                }
                case 36: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 37: {
                    goto lab_0x401d01;
                }
                case 38: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 39: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 40: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 41: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 42: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 43: {
                    goto lab_0x401d01;
                }
                case 44: {
                    goto lab_0x401d01;
                }
                case 45: {
                    goto lab_0x401d01;
                }
                case 46: {
                    goto lab_0x401d01;
                }
                case 47: {
                    goto lab_0x401d01;
                }
                case 48: {
                    goto lab_0x401d01;
                }
                case 49: {
                    goto lab_0x401d01;
                }
                case 50: {
                    goto lab_0x401d01;
                }
                case 51: {
                    goto lab_0x401d01;
                }
                case 52: {
                    goto lab_0x401d01;
                }
                case 53: {
                    goto lab_0x401d01;
                }
                case 54: {
                    goto lab_0x401d01;
                }
                case 55: {
                    goto lab_0x401d01;
                }
                case 56: {
                    goto lab_0x401d01;
                }
                case 57: {
                    goto lab_0x401d01;
                }
                case 58: {
                    goto lab_0x401d01;
                }
                case 59: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 60: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 61: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 62: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 63: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 65: {
                    goto lab_0x401d01;
                }
                case 66: {
                    goto lab_0x401d01;
                }
                case 67: {
                    goto lab_0x401d01;
                }
                case 68: {
                    goto lab_0x401d01;
                }
                case 69: {
                    goto lab_0x401d01;
                }
                case 70: {
                    goto lab_0x401d01;
                }
                case 71: {
                    goto lab_0x401d01;
                }
                case 72: {
                    goto lab_0x401d01;
                }
                case 73: {
                    goto lab_0x401d01;
                }
                case 74: {
                    goto lab_0x401d01;
                }
                case 75: {
                    goto lab_0x401d01;
                }
                case 76: {
                    goto lab_0x401d01;
                }
                case 77: {
                    goto lab_0x401d01;
                }
                case 78: {
                    goto lab_0x401d01;
                }
                case 79: {
                    goto lab_0x401d01;
                }
                case 80: {
                    goto lab_0x401d01;
                }
                case 81: {
                    goto lab_0x401d01;
                }
                case 82: {
                    goto lab_0x401d01;
                }
                case 83: {
                    goto lab_0x401d01;
                }
                case 84: {
                    goto lab_0x401d01;
                }
                case 85: {
                    goto lab_0x401d01;
                }
                case 86: {
                    goto lab_0x401d01;
                }
                case 87: {
                    goto lab_0x401d01;
                }
                case 88: {
                    goto lab_0x401d01;
                }
                case 89: {
                    goto lab_0x401d01;
                }
                case 90: {
                    goto lab_0x401d01;
                }
                case 91: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 92: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 93: {
                    goto lab_0x401d01;
                }
                case 94: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 95: {
                    goto lab_0x401d01;
                }
                case 96: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 97: {
                    goto lab_0x401d01;
                }
                case 98: {
                    goto lab_0x401d01;
                }
                case 99: {
                    goto lab_0x401d01;
                }
                case 100: {
                    goto lab_0x401d01;
                }
                case 101: {
                    goto lab_0x401d01;
                }
                case 102: {
                    goto lab_0x401d01;
                }
                case 103: {
                    goto lab_0x401d01;
                }
                case 104: {
                    goto lab_0x401d01;
                }
                case 105: {
                    goto lab_0x401d01;
                }
                case 106: {
                    goto lab_0x401d01;
                }
                case 107: {
                    goto lab_0x401d01;
                }
                case 108: {
                    goto lab_0x401d01;
                }
                case 109: {
                    goto lab_0x401d01;
                }
                case 110: {
                    goto lab_0x401d01;
                }
                case 111: {
                    goto lab_0x401d01;
                }
                case 112: {
                    goto lab_0x401d01;
                }
                case 113: {
                    goto lab_0x401d01;
                }
                case 114: {
                    goto lab_0x401d01;
                }
                case 115: {
                    goto lab_0x401d01;
                }
                case 116: {
                    goto lab_0x401d01;
                }
                case 117: {
                    goto lab_0x401d01;
                }
                case 118: {
                    goto lab_0x401d01;
                }
                case 119: {
                    goto lab_0x401d01;
                }
                case 120: {
                    goto lab_0x401d01;
                }
                case 121: {
                    goto lab_0x401d01;
                }
                case 122: {
                    goto lab_0x401d01;
                }
                case 123: {
                    goto lab_0x401ca5;
                }
                case 124: {
                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                }
                case 125: {
                    goto lab_0x401ca5;
                }
                case 126: {
                    goto lab_0x401ccd;
                }
                default: {
                    goto lab_0x4020a5;
                }
            }
        }
      lab_0x4020a5:
        if (v24 != 1) {
            // 0x402410
            ps = 0;
            int64_t len = v14; // 0x402420
            if (v14 == -1) {
                // 0x402422
                len = strlen((char *)str);
            }
            int64_t v28 = len;
            v18 = 0;
            while (true) {
              lab_0x4024af:
                // 0x4024af
                v19 = v18;
                uint64_t v29 = v19 + v4; // 0x4024b4
                v20 = 0;
                switch (str) {
                    case 0: {
                        goto lab_0x4029f9_2;
                    }
                    case -1: {
                        // 0x402ad9
                        v15 = 0x100000000 * v28 >> 32;
                        goto lab_0x402a2a_2;
                    }
                    case -2: {
                        int64_t v30 = 0x100000000 * v28 >> 32; // 0x402b0d
                        v15 = v30;
                        if (v29 >= v30) {
                            goto lab_0x402a2a_2;
                        } else {
                            // 0x402b47
                            v15 = v30;
                            if (*(char *)(v29 - 2) != 0) {
                                int64_t v31 = 1; // 0x402b57
                                v21 = v31;
                                v16 = v30;
                                while (v31 + v4 < v30) {
                                    // 0x402b50
                                    v21 = v31;
                                    v16 = v30;
                                    int64_t v32 = v31; // 0x402b55
                                    if (*(char *)(v31 + v26) == 0) {
                                        // break -> 0x402a2a
                                        break;
                                    }
                                    v31 = v32 + 1;
                                    v21 = v31;
                                    v16 = v30;
                                }
                                goto lab_0x402a2a;
                            } else {
                                goto lab_0x402a2a_2;
                            }
                        }
                    }
                    case 1: {
                        goto lab_0x402480;
                    }
                    default: {
                        int64_t v33; // 0x401b57
                        char v34; // 0x40253d
                        unsigned char v35; // 0x401b57
                        if (*(char *)v33 < 125) {
                            // 0x402548
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40255f
                                v3 = 0x100000000 * v28 >> 32;
                                v5 = 0x100000000 * v7 >> 32;
                                v9 = 0x100000000 * v11 >> 32;
                                return function_401b00(v9, v5, str, v3, 2, wc & -3);
                            }
                        }
                        int64_t v36 = v33 + 1; // 0x402530
                        v33 = v36;
                        // 0x40251c
                        int64_t v37; // 0x402529
                        while (v37 != v36) {
                            // 0x40253d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402548
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40255f
                                    v3 = 0x100000000 * v28 >> 32;
                                    v5 = 0x100000000 * v7 >> 32;
                                    v9 = 0x100000000 * v11 >> 32;
                                    return function_401b00(v9, v5, str, v3, 2, wc & -3);
                                }
                            }
                            // 0x402530
                            v36 = v33 + 1;
                            v33 = v36;
                        }
                        goto lab_0x402480;
                    }
                }
            }
          lab_0x4029f9_2:
            // 0x4029f9
            v21 = v20;
            v16 = 0x100000000 * v28 >> 32;
            goto lab_0x402a2a;
        } else {
            // 0x4020f4
            __ctype_b_loc();
            v17 = 0x100000000000000 * v14 >> 56;
            v8 = v7;
            v12 = v11;
            goto lab_0x401d01;
        }
    }
  lab_0x402328:
    // 0x402328
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (result != 0) {
        // 0x402c2a
        if (v7 > result) {
            // 0x402c33
            *(char *)(v11 + result) = 0;
        }
        // 0x401f57
        return result;
    }
    return function_401b00(v9, v5, str, v3, 2, wc & -3);
  lab_0x401d01:;
    int64_t v38 = v12;
    int64_t v39 = v8;
    int64_t v40 = v17;
    if (v24 != 0) {
        // 0x401d10
        v3 = v40;
        v5 = v39;
        v9 = v38;
        if ((*(int32_t *)((v23 / 8 & 28) + v24) & 1 << (int32_t)(v22 % 32)) != 0) {
            goto lab_0x401f1a_2;
        }
    }
    int64_t v41 = result; // 0x401e11
    char v42 = v22; // 0x401e11
    int64_t v43 = v40; // 0x401e11
    v2 = v4 + 1;
    int64_t v44 = v39; // 0x401e11
    int64_t v45 = v38; // 0x401e11
    goto lab_0x401d8d;
  lab_0x401f1a_2:
    // 0x401f57
    return function_401b00(v9, v5, str, v3, 2, wc & -3);
  lab_0x402480:
    // 0x402480
    iswprint(wc);
    int64_t v48 = v19 + str; // 0x40249f
    int32_t v49 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4024a2
    v18 = v48;
    v20 = v48;
    if (v49 != 0) {
        // break -> 0x4029f9
        goto lab_0x4029f9_2;
    }
    goto lab_0x4024af;
  lab_0x401ccd:
    // 0x401ccd
    v17 = v14;
    v8 = v7;
    v12 = v11;
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (v4 == 0) {
        goto lab_0x401f1a_2;
    }
    goto lab_0x401d01;
  lab_0x401ca5:;
    bool v50 = v14 == 1; // 0x401cb0
    if (v14 == -1) {
        // 0x401cb2
        v50 = *(char *)(str + 1) == 0;
    }
    // 0x401cbe
    v17 = v14;
    v8 = v7;
    v12 = v11;
    if (!v50) {
        goto lab_0x401d01;
    } else {
        goto lab_0x401ccd;
    }
  lab_0x402a2a:;
    int64_t v51 = v16;
    uint64_t v52 = v21;
    int64_t v53 = 0x100000000 * v7 >> 32;
    int64_t v54 = 0x100000000 * v11 >> 32;
    v17 = v51;
    v8 = v53;
    v12 = v54;
    if (v52 < 2) {
        goto lab_0x401d01;
    } else {
        uint64_t v55 = v52 + v4; // 0x4025fe
        int64_t v56 = v4 + 1; // 0x4026e1
        v41 = result;
        v42 = v22;
        v43 = v51;
        v2 = v56;
        v44 = v53;
        v45 = v54;
        int64_t v57 = v56; // 0x4026e8
        char v58 = v22; // 0x4026e8
        int64_t v59 = result; // 0x4026e8
        if (v56 < v55) {
            uint64_t v60 = v59;
            if (v53 > v60) {
                // 0x4026b1
                *(char *)(v60 + v54) = v58;
            }
            char v61 = *(char *)(v57 + str); // 0x4026b5
            int64_t v62 = v60 + 1; // 0x4026ba
            int64_t v63 = v57 + 1; // 0x4026e1
            v41 = v62;
            v42 = v61;
            v43 = v51;
            v2 = v63;
            v44 = v53;
            v45 = v54;
            v57 = v63;
            while (v63 < v55) {
                // 0x4026ac
                v60 = v62;
                if (v53 > v60) {
                    // 0x4026b1
                    *(char *)(v60 + v54) = v61;
                }
                // 0x4026b5
                v61 = *(char *)(v57 + str);
                v62 = v60 + 1;
                v63 = v57 + 1;
                v41 = v62;
                v42 = v61;
                v43 = v51;
                v2 = v63;
                v44 = v53;
                v45 = v54;
                v57 = v63;
            }
        }
        goto lab_0x401d8d;
    }
  lab_0x401d8d:;
    int64_t v46 = v45;
    uint64_t v47 = v41;
    if (v47 < v44) {
        // 0x401d92
        *(char *)(v46 + v47) = v42;
    }
    // 0x401d96
    v1 = v47 + 1;
    v13 = v43;
    v6 = v44;
    v10 = v46;
    goto lab_0x401ba8_2;
  lab_0x402a2a_2:
    // 0x402a2a
    v17 = v15;
    v8 = 0x100000000 * v7 >> 32;
    v12 = 0x100000000 * v11 >> 32;
    goto lab_0x401d01;
}
// Address range: 0x402d30 - 0x402ece
int64_t function_402d30(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x402d32
    int32_t * v3 = __errno_location(); // 0x402d4c
    int64_t v4 = (int64_t)g18; // 0x402d51
    int32_t v5 = *v3; // 0x402d5b
    int64_t v6 = v4; // 0x402d71
    if (v2 >= (int64_t)*(int32_t *)0x6071f0) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x402ec9
            function_403d90(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x402d80
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x402d87
        int64_t v9; // 0x402d30
        if (g18 == &g19) {
            int64_t v10 = function_403ba0(0, v8); // 0x402eaa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g19); // 0x402eaf
            *(int64_t *)&g18 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403ba0(v4, v8); // 0x402d9b
            *(int64_t *)&g18 = v12;
            v9 = v12;
        }
        // 0x402daa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g21; // 0x402daa
        int32_t v14 = v7; // 0x402db1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g21 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x402de1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x402deb
    int64_t * v17 = (int64_t *)v15; // 0x402dee
    uint64_t v18 = *v17; // 0x402dee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x402df1
    int64_t result = *v19; // 0x402df1
    int64_t v20; // 0x402d30
    uint64_t v21 = function_401b00(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x402e14
    if (v18 > v21) {
        // 0x402e8b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x402e27
    *v17 = v22;
    if (result != (int64_t)&g31) {
        // 0x402e37
        free((int64_t *)result);
    }
    int64_t result2 = function_403b40(v22); // 0x402e51
    *v19 = result2;
    int64_t v23; // 0x402d30
    function_401b00(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x402e8b
    *v3 = v5;
    return result2;
}
// Address range: 0x402ed0 - 0x402f04
int64_t function_402ed0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x402ed7
    int64_t result = function_403d40(a1 == 0 ? (int64_t)&g32 : a1, 56); // 0x402ef6
    return result;
}
// Address range: 0x402f10 - 0x402f1f
int64_t function_402f10(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g32 : a1); // 0x402f1c
    return result;
}
// Address range: 0x402f20 - 0x402f2f
int64_t function_402f20(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x402f28
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g32;
}
// Address range: 0x402f30 - 0x402f63
int64_t function_402f30(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 + 8 : a1 + 8; // 0x402f49
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x402f4e
    uint32_t v3 = *v2; // 0x402f4e
    uint32_t v4 = (int32_t)a2 % 32; // 0x402f52
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x402f70 - 0x402f83
int64_t function_402f70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g32 + 4 : a1 + 4); // 0x402f7c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x402f90 - 0x402fbb
int64_t function_402f90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x402f98
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x402fb5
        abort();
        // UNREACHABLE
    }
    // 0x402fac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g32;
}
// Address range: 0x402fc0 - 0x403032
int64_t function_402fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g32 : a5; // 0x402fe2
    int32_t * v2 = __errno_location(); // 0x402feb
    uint32_t v3 = *(int32_t *)v1; // 0x40300b
    int64_t result = function_401b00(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40301a
    return result;
}
// Address range: 0x403040 - 0x403121
int64_t function_403040(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g32 : a4; // 0x403062
    int32_t * v2 = __errno_location(); // 0x403068
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403087
    int32_t * v4 = (int32_t *)v1; // 0x40308a
    int64_t v5 = function_401b00(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4030a5
    int64_t v6 = v5 + 1; // 0x4030aa
    int64_t result = function_403b40(v6); // 0x4030bf
    function_401b00(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403104
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40310d
    return result;
}
// Address range: 0x403130 - 0x40313a
int64_t function_403130(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403130
    return function_403040(a1, a2, 0, a3);
}
// Address range: 0x403140 - 0x4031d5
int64_t function_403140(void) {
    uint32_t v1 = *(int32_t *)&g21; // 0x403140
    int64_t v2 = v1; // 0x403140
    int64_t v3 = v2; // 0x403154
    if (v1 >= 2) {
        int64_t v4 = &g21;
        int64_t v5 = v4 + 16; // 0x403173
        free((int64_t *)*(int64_t *)v4);
        v3 = &g37;
        while (v5 != (int64_t)g18 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403170
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g37;
        }
    }
    int64_t v6 = v3; // 0x40318d
    if (g19 != 0x607260) {
        // 0x40318f
        free((int64_t *)g19);
        g19 = 256;
        *(int64_t *)&g20 = (int64_t)&g31;
        v6 = &g37;
    }
    int64_t result = v6; // 0x4031b1
    if (g18 != &g19) {
        // 0x4031b3
        free(g18);
        *(int64_t *)&g18 = (int64_t)&g19;
        result = &g37;
    }
    // 0x4031c6
    *(int32_t *)&g21 = 1;
    return result;
}
// Address range: 0x4031e0 - 0x4031f1
int64_t function_4031e0(void) {
    // 0x4031e0
    int64_t v1; // 0x4031e0
    return function_402d30(v1, v1, -1, (int64_t *)&g32);
}
// Address range: 0x403200 - 0x40320a
int64_t function_403200(void) {
    // 0x403200
    int64_t v1; // 0x403200
    return function_402d30(v1, v1, v1, (int64_t *)&g32);
}
// Address range: 0x403210 - 0x403226
int64_t function_403210(int64_t a1) {
    // 0x403210
    return function_402d30(0, a1, -1, (int64_t *)&g32);
}
// Address range: 0x403230 - 0x403242
int64_t function_403230(int64_t a1, int64_t a2) {
    // 0x403230
    return function_402d30(0, a1, a2, (int64_t *)&g32);
}
// Address range: 0x403250 - 0x4032b8
int64_t function_403250(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403260
    return function_402d30((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4032c0 - 0x403324
int64_t function_4032c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4032d0
    return function_402d30((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403330 - 0x40333c
int64_t function_403330(int64_t a1, int64_t a2) {
    // 0x403330
    return function_403250(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403340 - 0x40334f
int64_t function_403340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403340
    return function_4032c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403350 - 0x4033c0
int64_t function_403350(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x40335d
    int128_t v2 = __asm_movdqa(g33); // 0x403365
    int128_t v3 = __asm_movdqa(g34); // 0x40336d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403382
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403398
    uint32_t v6 = *v5; // 0x403398
    uint32_t v7 = (int32_t)a3 % 32; // 0x40339d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_402d30(0, a1, a2, &v4);
}
// Address range: 0x4033c0 - 0x4033cd
int64_t function_4033c0(int64_t a1, int64_t a2) {
    // 0x4033c0
    return function_403350(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4033d0 - 0x4033e1
int64_t function_4033d0(int64_t a1) {
    // 0x4033d0
    return function_403350(a1, -1, 58);
}
// Address range: 0x4033f0 - 0x4033fa
int64_t function_4033f0(void) {
    // 0x4033f0
    int64_t v1; // 0x4033f0
    return function_403350(v1, v1, 58);
}
// Address range: 0x403400 - 0x40346e
int64_t function_403400(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40341a
    return function_402d30(a1, a3, -1, &v1);
}
// Address range: 0x403470 - 0x4034dc
int64_t function_403470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x403477
    int128_t v2 = __asm_movdqa(g33); // 0x40347f
    int128_t v3 = __asm_movdqa(g34); // 0x403487
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4034a9
    if (a2 == 0 || a3 == 0) {
        // 0x4034d7
        abort();
        // UNREACHABLE
    }
    // 0x4034ba
    return function_402d30(a1, a4, a5, &v4);
}
// Address range: 0x4034e0 - 0x4034e9
int64_t function_4034e0(void) {
    // 0x4034e0
    int64_t v1; // 0x4034e0
    return function_403470(v1, v1, v1, v1, -1);
}
// Address range: 0x4034f0 - 0x403507
int64_t function_4034f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4034f0
    return function_403470(0, a1, a2, a3, -1);
}
// Address range: 0x403510 - 0x403523
int64_t function_403510(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403510
    return function_403470(0, a1, a2, a3, a4);
}
// Address range: 0x403530 - 0x40353a
int64_t function_403530(void) {
    // 0x403530
    int64_t v1; // 0x403530
    return function_402d30(v1, v1, v1, &g17);
}
// Address range: 0x403540 - 0x403552
int64_t function_403540(int64_t a1, int64_t a2) {
    // 0x403540
    return function_402d30(0, a1, a2, &g17);
}
// Address range: 0x403560 - 0x403571
int64_t function_403560(void) {
    // 0x403560
    int64_t v1; // 0x403560
    return function_402d30(v1, v1, -1, &g17);
}
// Address range: 0x403580 - 0x403596
int64_t function_403580(int64_t a1) {
    // 0x403580
    return function_402d30(0, a1, -1, &g17);
}
// Address range: 0x4035a0 - 0x40397d
int64_t function_4035a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403638
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4035bc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4035d6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40361b
    if (a6 < 10) {
        // 0x40362a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403722
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403980 - 0x4039a0
int64_t function_403980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403980
    if (a5 == 0) {
        // 0x40399b
        return function_4035a0(a1, a2, a3, a4, a5, 0, (int64_t)&g37);
    }
    int64_t v1 = 0; // 0x403987
    v1++;
    int64_t v2 = v1; // 0x403999
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403990
        v1++;
        v2 = v1;
    }
    // 0x40399b
    return function_4035a0(a1, a2, a3, a4, a5, v2, (int64_t)&g37);
}
// Address range: 0x4039a0 - 0x403a00
int64_t function_4039a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4039a0
    int64_t v3 = &v2; // 0x4039a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4039d3
    int64_t v6; // 0x4039bd
    int64_t * v7; // 0x4039db
    int64_t v8; // 0x4039db
    int64_t v9; // 0x4039e7
    if (v5 < 48) {
        // 0x4039b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4039f3
            break;
        }
    } else {
        // 0x4039db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4039f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4039d1
    while (v4 != 9) {
        // 0x4039c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4039b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4039f3
                break;
            }
        } else {
            // 0x4039db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4039f3
                break;
            }
        }
        // 0x4039c9
        v10 = 10;
    }
    // 0x4039f3
    return function_4035a0(a1, a2, a3, a4, v3, v10, (int64_t)&g37);
}
// Address range: 0x403a00 - 0x403abc
int64_t function_403a00(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x403a00
    int64_t v1; // bp-168, 0x403a00
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403a00
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403a00
    int64_t v8; // 0x403a00
    int64_t v9; // bp-56, 0x403a00
    int64_t v10; // 0x403a65
    int64_t v11; // 0x403a89
    if ((int32_t)v6 < 48) {
        // 0x403a50
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403aa0
            break;
        }
    } else {
        // 0x403a82
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403aa0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403a7a
    int64_t v13 = 10; // 0x403a7a
    while (v5 != 9) {
        // 0x403a7c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403a50
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403aa0
                break;
            }
        } else {
            // 0x403a82
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403aa0
                break;
            }
        }
        // 0x403a72
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403aa0
    int64_t v14; // bp-136, 0x403a00
    int64_t result = function_4035a0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g37); // 0x403aaf
    return result;
}
// Address range: 0x403ac0 - 0x403b34
int64_t function_403ac0(int64_t a1) {
    // 0x403ac0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403b23
    return fputs_unlocked(v1, g23);
}
// Address range: 0x403b40 - 0x403b5a
int64_t function_403b40(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403b44
    if (size != 0 != (mem == NULL)) {
        // 0x403b53
        return (int64_t)mem;
    }
    // 0x403b55
    function_403d90(size);
    // UNREACHABLE
}
// Address range: 0x403b60 - 0x403b81
int64_t function_403b60(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403b63
    int64_t v2 = v1; // 0x403b63
    if (v2 < 0) {
        // 0x403b7b
        function_403d90(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403b79
        return function_403b40(v2);
    }
    // 0x403b7b
    function_403d90(v2);
    // UNREACHABLE
}
// Address range: 0x403b90 - 0x403b92
int64_t function_403b90(void) {
    // 0x403b90
    int64_t v1; // 0x403b90
    return function_403b40(v1);
}
// Address range: 0x403ba0 - 0x403bd6
int64_t function_403ba0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403bc8
        free(v1);
        return (int32_t)&g37 ^ (int32_t)&g37;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403bb1
    if (a2 != 0 != (mem == NULL)) {
        // 0x403bc0
        return (int64_t)mem;
    }
    // 0x403bd1
    function_403d90(a1);
    // UNREACHABLE
}
// Address range: 0x403be0 - 0x403c01
int64_t function_403be0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403be3
    int64_t v2 = v1; // 0x403be3
    if (v2 < 0) {
        // 0x403bfb
        function_403d90(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403bf9
        return function_403ba0(a1, v2);
    }
    // 0x403bfb
    function_403d90(a1);
    // UNREACHABLE
}
// Address range: 0x403c10 - 0x403c96
int64_t function_403c10(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403c6b
            function_403d90(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403ba0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403c53
    if (a2 == 0) {
        // 0x403c78
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403c58
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403c6b
        function_403d90(a1);
        // UNREACHABLE
    }
    // 0x403c3a
    *(int64_t *)a2 = v2;
    return function_403ba0(a1, v2 * a3);
}
// Address range: 0x403ca0 - 0x403cf0
int64_t function_403ca0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x403ca0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x403cea
            function_403d90(a1);
            // UNREACHABLE
        }
        // 0x403cc2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403ba0(a1, v1);
    }
    if (a2 == 0) {
        // 0x403cd5
        *(int64_t *)a2 = 128;
        return function_403ba0(0, 128);
    }
    // 0x403ce8
    if (a2 < 0) {
        // 0x403cea
        function_403d90(a1);
        // UNREACHABLE
    }
    // 0x403cc2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403ba0(a1, v1);
}
// Address range: 0x403cf0 - 0x403d07
int64_t function_403cf0(int64_t a1, int64_t a2) {
    // 0x403cf0
    return (int64_t)memset((int64_t *)function_403b40(a1), 0, (int32_t)a1);
}
// Address range: 0x403d10 - 0x403d3e
int64_t function_403d10(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x403d17
    if ((int64_t)v1 < 0) {
        // 0x403d39
        function_403d90(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x403d39
        function_403d90(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x403d2a
    if (mem != NULL) {
        // 0x403d34
        return (int64_t)mem;
    }
    // 0x403d39
    function_403d90(nmemb);
    // UNREACHABLE
}
// Address range: 0x403d40 - 0x403d68
int64_t function_403d40(int64_t a1, int64_t a2) {
    int64_t v1 = function_403b40(a2); // 0x403d4f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x403d70 - 0x403d83
int64_t function_403d70(int64_t str) {
    // 0x403d70
    return function_403d40(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x403d90 - 0x403dc1
int64_t function_403d90(int64_t a1) {
    // 0x403d90
    error(g16, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x403dd0 - 0x403e4a
int64_t function_403dd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x403ddb
    int64_t v2 = (int64_t)&g1; // 0x403ddb
    int64_t v3; // 0x403dd0
    int64_t v4; // 0x403dd0
    int64_t n; // 0x403dd0
    if (a2 == 0) {
        goto lab_0x403e22;
    } else {
        // 0x403ddd
        if (a3 == 0) {
            // 0x403e08
            return -2;
        }
        // 0x403de9
        n = a3;
        v4 = a2;
        v3 = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == 0) {
            goto lab_0x403e22;
        } else {
            goto lab_0x403df4;
        }
    }
  lab_0x403e22:
    // 0x403e22
    n = v1;
    v4 = v2;
    int64_t v5; // bp-28, 0x403dd0
    v3 = &v5;
    goto lab_0x403df4;
  lab_0x403df4:;
    int32_t * pwc = (int32_t *)v3; // 0x403dfa
    char * wstr = (char *)v4; // 0x403dfa
    int64_t ps; // 0x403dd0
    int32_t v6 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x403dfa
    int64_t result = v6; // 0x403dfa
    if (v6 < 0xfffffffe) {
        // 0x403e08
        return result;
    }
    int64_t result2 = result; // 0x403e39
    if ((char)function_403eb0(0, v4) == 0) {
        // 0x403e3b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x403e08
    return result2;
}
// Address range: 0x403e50 - 0x403ead
int64_t function_403e50(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x403e57
    int64_t v2; // 0x403e50
    int64_t result = function_404480(a1, v2); // 0x403e68
    if ((v2 & 32) != 0) {
        // 0x403e90
        if ((int32_t)result == 0) {
            // 0x403e94
            *__errno_location() = 0;
        }
        // 0x403e8a
        return 0xffffffff;
    }
    // 0x403e71
    if ((int32_t)result == 0) {
        // 0x403e8a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x403e78
    if (v1 == 0) {
        // 0x403e7a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x403e8a
    return result2;
}
// Address range: 0x403eb0 - 0x403f0e
int64_t function_403eb0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x403eb6
    if (locale == NULL) {
        // 0x403ee3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x403eb6
    bool v2; // 0x403eb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g9; // 0x403eb0
    int64_t v5 = v1; // 0x403eb0
    int64_t v6 = 2; // 0x403ed5
    unsigned char v7 = *(char *)v5; // 0x403ed5
    char v8 = *(char *)v4; // 0x403ed5
    char v9 = v8; // 0x403ed5
    bool v10 = false; // 0x403ed5
    while (v7 == v8) {
        // 0x403ec8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x403ee1
    int64_t v13 = v1; // 0x403ee1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x403ee3
        return 0;
    }
    int64_t v14 = 6; // 0x403ee1
    unsigned char v15 = *(char *)v13; // 0x403efd
    char v16 = *(char *)v12; // 0x403efd
    char v17 = v16; // 0x403efd
    bool v18 = false; // 0x403efd
    while (v15 == v16) {
        // 0x403ef0
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
// Address range: 0x403f10 - 0x404472
int64_t function_403f10(void) {
    char * v1 = nl_langinfo(14); // 0x403f26
    char * v2 = g35; // 0x403f2b
    char * v3; // 0x403f10
    int64_t v4; // 0x403f10
    int64_t v5; // 0x403f10
    int64_t v6; // 0x403f10
    int64_t v7; // 0x403f10
    int32_t size; // 0x403f10
    int32_t size2; // 0x403f10
    int32_t len; // 0x403fe2
    int64_t v8; // 0x403fe2
    char * env_val; // 0x403fcd
    if (v2 == NULL) {
        // 0x403fc8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x404035;
        } else {
            // 0x403fda
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x404035;
            } else {
                // 0x403fdf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x403fcd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x404465
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x404035;
                    } else {
                        // 0x4043d9
                        size2 = len + 14;
                        goto lab_0x403ffb;
                    }
                } else {
                    goto lab_0x403ffb;
                }
            }
        }
    } else {
        // 0x403f10
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x403f4a;
    }
  lab_0x40427c:;
    // 0x40427c
    struct _IO_FILE * stream; // 0x4040bb
    int32_t v10 = __uflow(stream); // 0x40427f
    int64_t v11; // 0x403f10
    int64_t v12 = v11; // 0x404289
    int64_t v13; // 0x403f10
    int64_t v14 = v13; // 0x404289
    int32_t v15 = v10; // 0x404289
    int64_t v16; // 0x403f10
    int64_t v17 = v16; // 0x404289
    int64_t v18 = v11; // 0x404289
    int64_t v19 = v13; // 0x404289
    int64_t v20 = v16; // 0x404289
    if (v10 == -1) {
        // break -> 0x40428f
        goto lab_0x40428f;
    }
    goto lab_0x404109;
  lab_0x4040fe:;
    // 0x4040fe
    int64_t v90; // 0x403f10
    int64_t * v32; // 0x4040f0
    *v32 = v90 + 1;
    int64_t v89; // 0x403f10
    v12 = v89;
    int64_t v91; // 0x403f10
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x403f10
    v17 = v92;
    goto lab_0x404109;
  lab_0x404109:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x403f10
    int32_t v25; // bp-120, 0x403f10
    int32_t v26; // bp-184, 0x403f10
    int64_t v27; // 0x4040bb
    int64_t v28; // 0x4040d8
    int64_t v29; // 0x4040dd
    int64_t * v30; // 0x4040f4
    switch (c) {
        case 32: {
            goto lab_0x4040f0;
        }
        case 10: {
            goto lab_0x4040f0;
        }
        case 9: {
            goto lab_0x4040f0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4042e1
            int32_t v33; // 0x403f10
            char v34; // 0x403f10
            int32_t v35; // 0x4042ee
            if (v31 < *v30) {
                // 0x4042c0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4042eb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4042e1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4042c0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4042eb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4042d0
                v36 = v33;
            }
            // 0x4043bf
            if (v36 == -1) {
                // break -> 0x40428f
                break;
            }
            goto lab_0x4040f0;
        }
        default: {
            // 0x40411f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40428f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x404148
            int64_t v39 = v37 + 4; // 0x40414a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x404156
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x404158
            while (v41 == 0) {
                // 0x404148
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x404176
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x404182
            int64_t v45 = v43 + 4; // 0x404184
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x404190
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x404192
            while (v47 == 0) {
                // 0x404182
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40417f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4041a8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4041b8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4041bc
            int64_t v52 = v51 + v48; // 0x4041c5
            int64_t * mem; // 0x403f10
            int64_t v53; // 0x403f10
            int64_t v54; // 0x403f10
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4042fb
                int64_t v56 = v55 + 3; // 0x404307
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4041e1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4041f0
            if (mem == NULL) {
                // 0x40441c
                free((int64_t *)v21);
                function_404480(v27, v53);
                v24 = (int64_t)&g1;
                goto lab_0x404094;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x404208
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x404212
            uint32_t v62 = (int32_t)v59; // 0x404215
            int64_t v63; // 0x403f10
            if (v62 >= 8) {
                // 0x404324
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40433e
                int64_t v66 = v61 - v65; // 0x404342
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40434d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40435e
                    int64_t v70 = v69 & 0xffffffff; // 0x40435e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40435b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4043ef
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x404227
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40422b
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
            int64_t v73 = v51 + 1; // 0x40423b
            int64_t v74 = v60 - 1; // 0x40423f
            uint32_t v75 = (int32_t)v73; // 0x404244
            int64_t v76; // 0x403f10
            if (v75 >= 8) {
                // 0x404372
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40437c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40438c
                int64_t v80 = v74 - v79; // 0x404390
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40439b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4043ab
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4043a9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x404406
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40440e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x404256
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40425a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x404453
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40426e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4040fe;
            } else {
                goto lab_0x40427c;
            }
        }
    }
  lab_0x4040f0:;
    int64_t v93 = v23; // 0x403f10
    int64_t v94 = v22; // 0x403f10
    int64_t v95 = v21; // 0x403f10
    goto lab_0x4040f0_2;
  lab_0x404035:;
    int64_t * mem3 = malloc(size); // 0x404035
    int64_t v97 = (int64_t)&g1; // 0x404040
    int64_t v98; // 0x403f10
    int64_t path; // 0x403f10
    if (mem3 == NULL) {
        goto lab_0x404012;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x404035
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x404056;
    }
  lab_0x403f4a:;
    int64_t str = v1 == NULL ? (int64_t)&g1 : (int64_t)v1; // 0x403f3d
    char v100 = *v3; // 0x403f4a
    int64_t v101; // 0x403f10
    if (v100 == 0) {
        // 0x403fa4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x403f10
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x403f10
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x403f90
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x403f97;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x403f60
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x403f6d
        char v107 = *(char *)v106; // 0x403f72
        v102 = v107;
        if (v107 == 0) {
            // 0x403fa4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x403f7b
    v104 = v103 + 1;
  lab_0x403f97:
    // 0x403fa4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x404012:;
    char * v108 = (char *)v97;
    g35 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x403f4a;
  lab_0x404056:;
    int64_t v109 = v98 + path; // 0x404056
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x404082
    v24 = (int64_t)&g1;
    if (fd >= 0) {
        // 0x4040b1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4043e2
            close(fd);
            v24 = (int64_t)&g1;
        } else {
            // 0x4040d5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4040f0_2:;
                uint64_t v96 = *v32; // 0x4040f0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40427c;
                } else {
                    goto lab_0x4040fe;
                }
            }
          lab_0x40428f:
            // 0x40428f
            function_404480(v27, v19);
            v24 = (int64_t)&g1;
            if (v18 != 0) {
                // 0x4042ae
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x404094;
  lab_0x403ffb:;
    int64_t * mem4 = malloc(size2); // 0x403ffb
    v97 = (int64_t)&g1;
    if (mem4 != NULL) {
        // 0x4040a1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x404056;
    } else {
        goto lab_0x404012;
    }
  lab_0x404094:
    // 0x404094
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x404012;
}
// Address range: 0x404480 - 0x4044fb
int64_t function_404480(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404487
    if (fileno(stream) < 0) {
        // 0x4044e7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40449a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4044cb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4044e7
            return fclose(stream);
        }
    }
    // 0x40449c
    if ((int32_t)function_404500(a1, v1) == 0) {
        // 0x4044e7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4044a8
    int32_t v3 = *v2; // 0x4044b0
    int64_t result = fclose(stream); // 0x4044be
    if (v3 != 0) {
        // 0x4044f0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4044c0
    return result;
}
// Address range: 0x404500 - 0x404540
int64_t function_404500(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40451a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40451a
        return fflush(stream);
    }
    // 0x404528
    function_404540(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404540 - 0x404597
int64_t function_404540(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404540
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40454a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40457b
    int64_t result = -1; // 0x404584
    if (v1 != -1) {
        // 0x404586
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404592
    return result;
}
// Address range: 0x4045a0 - 0x4045fd
int64_t function_4045a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045a0
    return function_4010f8();
}
// Address range: 0x404600 - 0x404601
int64_t function_404600(void) {
    // 0x404600
    int64_t result; // 0x404600
    return result;
}
// Address range: 0x404610 - 0x404628
int64_t function_404610(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404610
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g14);
}
// Address range: 0x404628 - 0x404648
int64_t function_404628(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g10; // 0x404632
    while (*(int64_t *)v1 != -1) {
        // 0x404633
        v1 -= 8;
    }
    // 0x404644
    return result;
}
