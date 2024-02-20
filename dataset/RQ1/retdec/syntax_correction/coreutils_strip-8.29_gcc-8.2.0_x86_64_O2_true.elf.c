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
// Address range: 0x401420 - 0x4014bf
int64_t function_401420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if ((int32_t)a1 != 2) {
        // 0x401425
        return 0;
    }
    // 0x401428
    function_401950(a2);
    setlocale(LC_ALL, (char *)&g1);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_404600(0x4018b0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    char * str = (char *)*(int64_t *)(a2 + 8); // 0x401472
    if (strcmp(str, "--help") == 0) {
        // 0x4014b8
        function_4015a0(0);
        // UNREACHABLE
    }
    // 0x40147b
    if (strcmp(str, "--version") == 0) {
        // 0x401490
        function_4039f0((int64_t)g23, "true", "GNU coreutils", (int64_t)g15, "Jim Meyering", 0);
    }
    // 0x401425
    return 0;
}
// Address range: 0x4014c0 - 0x4014eb
// Address range: 0x4014eb - 0x40150a
int64_t function_4014eb(void) {
    // 0x4014eb
    return 0x6071f8;
}
// Address range: 0x40150a - 0x401541
int64_t function_40150a(void) {
    // 0x40150a
    return 0;
}
// Address range: 0x401541 - 0x401598
int64_t function_401541(void) {
    // 0x401541
    if (g26 != 0) {
        // 0x401597
        int64_t result; // 0x401541
        return result;
    }
    int64_t v1 = g27; // 0x401574
    int64_t result2; // 0x401586
    if (g27 >= ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401586
        result2 = function_4014eb();
        g26 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401576
        v1++;
    }
    // 0x40156a
    g27 = v1;
    // 0x401586
    result2 = function_4014eb();
    g26 = 1;
    return result2;
}
// Address range: 0x401598 - 0x40159d
int64_t function_401598(void) {
    // 0x401598
    return function_40150a();
}
// Address range: 0x4015a0 - 0x401890
int64_t function_4015a0(int32_t status) {
    // 0x4015a0
    __printf_chk(1, dcgettext(NULL, "Usage: %s [ignored command line arguments]\n  or:  %s OPTION\n", 5));
    __printf_chk(1, "%s\n\n", dcgettext(NULL, "Exit with a status code indicating success.", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g23);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g2; // bp-136, 0x401667
    bool v2; // 0x4015a0
    int64_t v3 = v2 ? -1 : 1; // 0x401707
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16;
    int64_t v6 = 5; // 0x401707
    int64_t v7 = (int64_t)"true";
    int64_t v8 = (int64_t)"coreutils";
    unsigned char v9 = *(char *)v7; // 0x401707
    char v10 = *(char *)v8; // 0x401707
    char v11 = v10; // 0x401707
    bool v12 = false; // 0x401707
    int64_t v13; // 0x4015a0
    int64_t v14; // 0x4015a0
    while (v9 == v10) {
        // 0x4016fd
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
    int64_t v15 = v4; // 0x401711
    while ((v9 >= v11 && !v12) != v9 < v11) {
        int64_t v16 = *(int64_t *)(v4 + 32); // 0x4016f0
        v15 = v5;
        if (v16 == 0) {
            // break -> 0x401713
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = 5;
        v7 = (int64_t)"true";
        v8 = v16;
        v9 = *(char *)v7;
        v10 = *(char *)v8;
        v11 = v10;
        v12 = false;
        while (v9 == v10) {
            // 0x4016fd
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
    // 0x401713
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v15 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401856;
        } else {
            // 0x401811
            if (strncmp(locale, "en_", 3) == 0) {
                goto lab_0x401856;
            } else {
                // 0x40182c
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401775;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401775;
        } else {
            // 0x40175b
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40182c
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401775;
            } else {
                goto lab_0x401775;
            }
        }
    }
  lab_0x401856:
    // 0x401856
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4017b5
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    exit(status);
    // UNREACHABLE
  lab_0x401775:
    // 0x401775
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4017b5
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401890 - 0x401898
int64_t function_401890(int64_t a1) {
    // 0x401890
    g29 = a1;
    int64_t result; // 0x401890
    return result;
}
// Address range: 0x4018a0 - 0x4018a8
int64_t function_4018a0(int64_t a1) {
    // 0x4018a0
    g28 = a1;
    int64_t result; // 0x4018a0
    return result;
}
// Address range: 0x4018b0 - 0x40194e
int64_t function_4018b0(void) {
    // 0x4018b0
    int32_t * err_num; // 0x4018c6
    if ((int32_t)function_403e40((int64_t)g23) == 0) {
        goto lab_0x4018dc;
    } else {
        // 0x4018c6
        err_num = __errno_location();
        if (g28 == 0) {
            goto lab_0x4018f3;
        } else {
            // 0x4018d7
            if (*err_num != 32) {
                goto lab_0x4018f3;
            } else {
                goto lab_0x4018dc;
            }
        }
    }
  lab_0x4018dc:;
    int64_t result = function_403e40((int64_t)g25); // 0x4018e3
    if ((int32_t)result == 0) {
        // 0x4018ec
        return result;
    }
    // 0x40192e
    _exit(g16);
    // UNREACHABLE
  lab_0x4018f3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4018ff
    if (g29 == 0) {
        // 0x401939
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401913
        error(0, *err_num, "%s: %s", (char *)function_4033c0((int64_t)g29), v1);
    }
    // 0x40192e
    _exit(g16);
    // UNREACHABLE
}
// Address range: 0x401950 - 0x4019e9
int64_t function_401950(int64_t str) {
    // 0x401950
    if (str == 0) {
        // 0x4019c9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g25);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40195e
    int64_t result = (int64_t)found_char_pos; // 0x40195e
    if (found_char_pos == NULL) {
        // 0x4019b9
        g30 = str;
        g24 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401968
    if (v1 - str < 7) {
        // 0x4019b9
        g30 = str;
        g24 = str;
        return result;
    }
    // 0x401978
    bool v2; // 0x401950
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401950
    int64_t v5 = result - 6; // 0x401950
    int64_t v6 = 7; // 0x401986
    unsigned char v7 = *(char *)v5; // 0x401986
    char v8 = *(char *)v4; // 0x401986
    char v9 = v8; // 0x401986
    bool v10 = false; // 0x401986
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
    int64_t v12 = (int64_t)"lt-"; // 0x401990
    int64_t v13 = v1; // 0x401990
    int64_t v14 = 3; // 0x401990
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4019b9
        g30 = str;
        g24 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4019a2
    char v16 = *(char *)v12; // 0x4019a2
    char v17 = v16; // 0x4019a2
    bool v18 = false; // 0x4019a2
    while (v15 == v16) {
        // 0x401992
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
    int64_t v20 = v1; // 0x4019ac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4019ae
        v20 = result + 4;
        g22 = v20;
    }
    // 0x4019b9
    g30 = v20;
    g24 = v20;
    return result;
}
// Address range: 0x4019f0 - 0x401ae2
int64_t function_4019f0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401a04
    int64_t result = (int64_t)v1; // 0x401a04
    if (result != a1) {
        // 0x401a11
        return result;
    }
    int64_t v2 = function_403f00(); // 0x401a20
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401ad6
    if (v3 == 85) {
        // 0x401a30
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401ac8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x401a5e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x401a6b
        // 0x401a11
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401ac8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x401aad
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x401aba
    // 0x401a11
    return result4;
}
// Address range: 0x401af0 - 0x401b47
int64_t function_401af0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401af0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401b38
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401b47 - 0x402d11
int64_t function_401b47(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = 0; // 0x401b91
    int64_t v2 = 0; // 0x401b91
    int64_t v3; // 0x401b47
    int64_t v4; // 0x401b47
    int64_t v5; // 0x401b47
    int64_t v6; // 0x401b47
    int64_t v7; // 0x401b47
    int64_t v8; // 0x401b47
    int64_t v9; // 0x401b47
    int64_t v10; // 0x401b47
    int64_t v11; // 0x401b47
    int64_t v12; // 0x401b47
    int64_t v13; // 0x401b47
    int64_t v14; // 0x401b47
    int64_t v15; // 0x401b47
    int64_t v16; // 0x401b47
    int64_t v17; // 0x401b47
    int64_t v18; // 0x401b47
    int64_t v19; // 0x401b47
    int64_t result; // 0x401b47
    int64_t v20; // 0x401b47
    int64_t v21; // 0x401b47
    int64_t ps; // bp+136, 0x401b47
    char v22; // 0x402100
    int64_t v23; // 0x402100
    int32_t wc; // 0x401b47
    int64_t v24; // 0x401b47
    while (true) {
      lab_0x401b98_2:
        // 0x401b98
        v11 = v10;
        v7 = v6;
        v14 = v13;
        result = v1;
        int64_t v25 = v2; // 0x401b47
        int64_t v26; // 0x401bcc
        while (true) {
          lab_0x401b98:
            // 0x401b98
            v4 = v25;
            bool v27 = v14 == v4; // 0x401ba3
            if (v14 == -1) {
                // 0x401ba5
                v27 = *(char *)(v4 + str) == 0;
            }
            // 0x401bb3
            if (v27) {
                // break (via goto) -> 0x402318
                goto lab_0x402318;
            }
            // 0x401bbc
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
                    // 0x4021ab
                    if (wc % 2 == 0) {
                        goto lab_0x401cf1;
                    }
                    // 0x4025cd
                    v25 = v4 + 1;
                    goto lab_0x401b98;
                }
                case 7: {
                    goto lab_0x401cf1;
                }
                case 8: {
                    goto lab_0x401cf1;
                }
                case 9: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 10: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 11: {
                    goto lab_0x401cf1;
                }
                case 12: {
                    goto lab_0x401cf1;
                }
                case 13: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 32: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 33: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 34: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 35: {
                    goto lab_0x401cbd;
                }
                case 36: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 37: {
                    goto lab_0x401cf1;
                }
                case 38: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 39: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 40: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 41: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 42: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 43: {
                    goto lab_0x401cf1;
                }
                case 44: {
                    goto lab_0x401cf1;
                }
                case 45: {
                    goto lab_0x401cf1;
                }
                case 46: {
                    goto lab_0x401cf1;
                }
                case 47: {
                    goto lab_0x401cf1;
                }
                case 48: {
                    goto lab_0x401cf1;
                }
                case 49: {
                    goto lab_0x401cf1;
                }
                case 50: {
                    goto lab_0x401cf1;
                }
                case 51: {
                    goto lab_0x401cf1;
                }
                case 52: {
                    goto lab_0x401cf1;
                }
                case 53: {
                    goto lab_0x401cf1;
                }
                case 54: {
                    goto lab_0x401cf1;
                }
                case 55: {
                    goto lab_0x401cf1;
                }
                case 56: {
                    goto lab_0x401cf1;
                }
                case 57: {
                    goto lab_0x401cf1;
                }
                case 58: {
                    goto lab_0x401cf1;
                }
                case 59: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 60: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 61: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 62: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 63: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 65: {
                    goto lab_0x401cf1;
                }
                case 66: {
                    goto lab_0x401cf1;
                }
                case 67: {
                    goto lab_0x401cf1;
                }
                case 68: {
                    goto lab_0x401cf1;
                }
                case 69: {
                    goto lab_0x401cf1;
                }
                case 70: {
                    goto lab_0x401cf1;
                }
                case 71: {
                    goto lab_0x401cf1;
                }
                case 72: {
                    goto lab_0x401cf1;
                }
                case 73: {
                    goto lab_0x401cf1;
                }
                case 74: {
                    goto lab_0x401cf1;
                }
                case 75: {
                    goto lab_0x401cf1;
                }
                case 76: {
                    goto lab_0x401cf1;
                }
                case 77: {
                    goto lab_0x401cf1;
                }
                case 78: {
                    goto lab_0x401cf1;
                }
                case 79: {
                    goto lab_0x401cf1;
                }
                case 80: {
                    goto lab_0x401cf1;
                }
                case 81: {
                    goto lab_0x401cf1;
                }
                case 82: {
                    goto lab_0x401cf1;
                }
                case 83: {
                    goto lab_0x401cf1;
                }
                case 84: {
                    goto lab_0x401cf1;
                }
                case 85: {
                    goto lab_0x401cf1;
                }
                case 86: {
                    goto lab_0x401cf1;
                }
                case 87: {
                    goto lab_0x401cf1;
                }
                case 88: {
                    goto lab_0x401cf1;
                }
                case 89: {
                    goto lab_0x401cf1;
                }
                case 90: {
                    goto lab_0x401cf1;
                }
                case 91: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 92: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 93: {
                    goto lab_0x401cf1;
                }
                case 94: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 95: {
                    goto lab_0x401cf1;
                }
                case 96: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 97: {
                    goto lab_0x401cf1;
                }
                case 98: {
                    goto lab_0x401cf1;
                }
                case 99: {
                    goto lab_0x401cf1;
                }
                case 100: {
                    goto lab_0x401cf1;
                }
                case 101: {
                    goto lab_0x401cf1;
                }
                case 102: {
                    goto lab_0x401cf1;
                }
                case 103: {
                    goto lab_0x401cf1;
                }
                case 104: {
                    goto lab_0x401cf1;
                }
                case 105: {
                    goto lab_0x401cf1;
                }
                case 106: {
                    goto lab_0x401cf1;
                }
                case 107: {
                    goto lab_0x401cf1;
                }
                case 108: {
                    goto lab_0x401cf1;
                }
                case 109: {
                    goto lab_0x401cf1;
                }
                case 110: {
                    goto lab_0x401cf1;
                }
                case 111: {
                    goto lab_0x401cf1;
                }
                case 112: {
                    goto lab_0x401cf1;
                }
                case 113: {
                    goto lab_0x401cf1;
                }
                case 114: {
                    goto lab_0x401cf1;
                }
                case 115: {
                    goto lab_0x401cf1;
                }
                case 116: {
                    goto lab_0x401cf1;
                }
                case 117: {
                    goto lab_0x401cf1;
                }
                case 118: {
                    goto lab_0x401cf1;
                }
                case 119: {
                    goto lab_0x401cf1;
                }
                case 120: {
                    goto lab_0x401cf1;
                }
                case 121: {
                    goto lab_0x401cf1;
                }
                case 122: {
                    goto lab_0x401cf1;
                }
                case 123: {
                    goto lab_0x401c95;
                }
                case 124: {
                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                }
                case 125: {
                    goto lab_0x401c95;
                }
                case 126: {
                    goto lab_0x401cbd;
                }
                default: {
                    goto lab_0x402095;
                }
            }
        }
      lab_0x402095:
        if (v24 != 1) {
            // 0x402400
            ps = 0;
            int64_t len = v14; // 0x402410
            if (v14 == -1) {
                // 0x402412
                len = strlen((char *)str);
            }
            int64_t v28 = len;
            v18 = 0;
            while (true) {
              lab_0x40249f:
                // 0x40249f
                v19 = v18;
                uint64_t v29 = v19 + v4; // 0x4024a4
                v20 = 0;
                switch (str) {
                    case 0: {
                        goto lab_0x4029e9_2;
                    }
                    case -1: {
                        // 0x402ac9
                        v15 = 0x100000000 * v28 >> 32;
                        goto lab_0x402a1a_2;
                    }
                    case -2: {
                        int64_t v30 = 0x100000000 * v28 >> 32; // 0x402afd
                        v15 = v30;
                        if (v29 >= v30) {
                            goto lab_0x402a1a_2;
                        } else {
                            // 0x402b37
                            v15 = v30;
                            if (*(char *)(v29 - 2) != 0) {
                                int64_t v31 = 1; // 0x402b47
                                v21 = v31;
                                v16 = v30;
                                while (v31 + v4 < v30) {
                                    // 0x402b40
                                    v21 = v31;
                                    v16 = v30;
                                    int64_t v32 = v31; // 0x402b45
                                    if (*(char *)(v31 + v26) == 0) {
                                        // break -> 0x402a1a
                                        break;
                                    }
                                    v31 = v32 + 1;
                                    v21 = v31;
                                    v16 = v30;
                                }
                                goto lab_0x402a1a;
                            } else {
                                goto lab_0x402a1a_2;
                            }
                        }
                    }
                    case 1: {
                        goto lab_0x402470;
                    }
                    default: {
                        int64_t v33; // 0x401b47
                        char v34; // 0x40252d
                        unsigned char v35; // 0x401b47
                        if (*(char *)v33 < 125) {
                            // 0x402538
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40254f
                                v3 = 0x100000000 * v28 >> 32;
                                v5 = 0x100000000 * v7 >> 32;
                                v9 = 0x100000000 * v11 >> 32;
                                return function_401af0(v9, v5, str, v3, 2, wc & -3);
                            }
                        }
                        int64_t v36 = v33 + 1; // 0x402520
                        v33 = v36;
                        // 0x40250c
                        int64_t v37; // 0x402519
                        while (v37 != v36) {
                            // 0x40252d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402538
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40254f
                                    v3 = 0x100000000 * v28 >> 32;
                                    v5 = 0x100000000 * v7 >> 32;
                                    v9 = 0x100000000 * v11 >> 32;
                                    return function_401af0(v9, v5, str, v3, 2, wc & -3);
                                }
                            }
                            // 0x402520
                            v36 = v33 + 1;
                            v33 = v36;
                        }
                        goto lab_0x402470;
                    }
                }
            }
          lab_0x4029e9_2:
            // 0x4029e9
            v21 = v20;
            v16 = 0x100000000 * v28 >> 32;
            goto lab_0x402a1a;
        } else {
            // 0x4020e4
            __ctype_b_loc();
            v17 = 0x100000000000000 * v14 >> 56;
            v8 = v7;
            v12 = v11;
            goto lab_0x401cf1;
        }
    }
  lab_0x402318:
    // 0x402318
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (result != 0) {
        // 0x402c1a
        if (v7 > result) {
            // 0x402c23
            *(char *)(v11 + result) = 0;
        }
        // 0x401f47
        return result;
    }
    return function_401af0(v9, v5, str, v3, 2, wc & -3);
  lab_0x401cf1:;
    int64_t v38 = v12;
    int64_t v39 = v8;
    int64_t v40 = v17;
    if (v24 != 0) {
        // 0x401d00
        v3 = v40;
        v5 = v39;
        v9 = v38;
        if ((*(int32_t *)((v23 / 8 & 28) + v24) & 1 << (int32_t)(v22 % 32)) != 0) {
            goto lab_0x401f0a_2;
        }
    }
    int64_t v41 = result; // 0x401e01
    char v42 = v22; // 0x401e01
    int64_t v43 = v40; // 0x401e01
    v2 = v4 + 1;
    int64_t v44 = v39; // 0x401e01
    int64_t v45 = v38; // 0x401e01
    goto lab_0x401d7d;
  lab_0x401f0a_2:
    // 0x401f47
    return function_401af0(v9, v5, str, v3, 2, wc & -3);
  lab_0x402470:
    // 0x402470
    iswprint(wc);
    int64_t v48 = v19 + str; // 0x40248f
    int32_t v49 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402492
    v18 = v48;
    v20 = v48;
    if (v49 != 0) {
        // break -> 0x4029e9
        goto lab_0x4029e9_2;
    }
    goto lab_0x40249f;
  lab_0x401cbd:
    // 0x401cbd
    v17 = v14;
    v8 = v7;
    v12 = v11;
    v3 = v14;
    v5 = v7;
    v9 = v11;
    if (v4 == 0) {
        goto lab_0x401f0a_2;
    }
    goto lab_0x401cf1;
  lab_0x401c95:;
    bool v50 = v14 == 1; // 0x401ca0
    if (v14 == -1) {
        // 0x401ca2
        v50 = *(char *)(str + 1) == 0;
    }
    // 0x401cae
    v17 = v14;
    v8 = v7;
    v12 = v11;
    if (!v50) {
        goto lab_0x401cf1;
    } else {
        goto lab_0x401cbd;
    }
  lab_0x402a1a:;
    int64_t v51 = v16;
    uint64_t v52 = v21;
    int64_t v53 = 0x100000000 * v7 >> 32;
    int64_t v54 = 0x100000000 * v11 >> 32;
    v17 = v51;
    v8 = v53;
    v12 = v54;
    if (v52 < 2) {
        goto lab_0x401cf1;
    } else {
        uint64_t v55 = v52 + v4; // 0x4025ee
        int64_t v56 = v4 + 1; // 0x4026d1
        v41 = result;
        v42 = v22;
        v43 = v51;
        v2 = v56;
        v44 = v53;
        v45 = v54;
        int64_t v57 = v56; // 0x4026d8
        char v58 = v22; // 0x4026d8
        int64_t v59 = result; // 0x4026d8
        if (v56 < v55) {
            uint64_t v60 = v59;
            if (v53 > v60) {
                // 0x4026a1
                *(char *)(v60 + v54) = v58;
            }
            char v61 = *(char *)(v57 + str); // 0x4026a5
            int64_t v62 = v60 + 1; // 0x4026aa
            int64_t v63 = v57 + 1; // 0x4026d1
            v41 = v62;
            v42 = v61;
            v43 = v51;
            v2 = v63;
            v44 = v53;
            v45 = v54;
            v57 = v63;
            while (v63 < v55) {
                // 0x40269c
                v60 = v62;
                if (v53 > v60) {
                    // 0x4026a1
                    *(char *)(v60 + v54) = v61;
                }
                // 0x4026a5
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
        goto lab_0x401d7d;
    }
  lab_0x401d7d:;
    int64_t v46 = v45;
    uint64_t v47 = v41;
    if (v47 < v44) {
        // 0x401d82
        *(char *)(v46 + v47) = v42;
    }
    // 0x401d86
    v1 = v47 + 1;
    v13 = v43;
    v6 = v44;
    v10 = v46;
    goto lab_0x401b98_2;
  lab_0x402a1a_2:
    // 0x402a1a
    v17 = v15;
    v8 = 0x100000000 * v7 >> 32;
    v12 = 0x100000000 * v11 >> 32;
    goto lab_0x401cf1;
}
// Address range: 0x402d20 - 0x402ebe
int64_t function_402d20(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x402d22
    int32_t * v3 = __errno_location(); // 0x402d3c
    int64_t v4 = (int64_t)g18; // 0x402d41
    int32_t v5 = *v3; // 0x402d4b
    int64_t v6 = v4; // 0x402d61
    if (v2 >= (int64_t)*(int32_t *)0x6071f0) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x402eb9
            function_403d80(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x402d70
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x402d77
        int64_t v9; // 0x402d20
        if (g18 == &g19) {
            int64_t v10 = function_403b90(0, v8); // 0x402e9a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g19); // 0x402e9f
            *(int64_t *)&g18 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403b90(v4, v8); // 0x402d8b
            *(int64_t *)&g18 = v12;
            v9 = v12;
        }
        // 0x402d9a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g21; // 0x402d9a
        int32_t v14 = v7; // 0x402da1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g21 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x402dd1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x402ddb
    int64_t * v17 = (int64_t *)v15; // 0x402dde
    uint64_t v18 = *v17; // 0x402dde
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x402de1
    int64_t result = *v19; // 0x402de1
    int64_t v20; // 0x402d20
    uint64_t v21 = function_401af0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x402e04
    if (v18 > v21) {
        // 0x402e7b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x402e17
    *v17 = v22;
    if (result != (int64_t)&g31) {
        // 0x402e27
        free((int64_t *)result);
    }
    int64_t result2 = function_403b30(v22); // 0x402e41
    *v19 = result2;
    int64_t v23; // 0x402d20
    function_401af0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x402e7b
    *v3 = v5;
    return result2;
}
// Address range: 0x402ec0 - 0x402ef4
int64_t function_402ec0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x402ec7
    int64_t result = function_403d30(a1 == 0 ? (int64_t)&g32 : a1, 56); // 0x402ee6
    return result;
}
// Address range: 0x402f00 - 0x402f0f
int64_t function_402f00(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g32 : a1); // 0x402f0c
    return result;
}
// Address range: 0x402f10 - 0x402f1f
int64_t function_402f10(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x402f18
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g32;
}
// Address range: 0x402f20 - 0x402f53
int64_t function_402f20(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 + 8 : a1 + 8; // 0x402f39
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x402f3e
    uint32_t v3 = *v2; // 0x402f3e
    uint32_t v4 = (int32_t)a2 % 32; // 0x402f42
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x402f60 - 0x402f73
int64_t function_402f60(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g32 + 4 : a1 + 4); // 0x402f6c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x402f80 - 0x402fab
int64_t function_402f80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g32 : a1; // 0x402f88
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x402fa5
        abort();
        // UNREACHABLE
    }
    // 0x402f9c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g32;
}
// Address range: 0x402fb0 - 0x403022
int64_t function_402fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g32 : a5; // 0x402fd2
    int32_t * v2 = __errno_location(); // 0x402fdb
    uint32_t v3 = *(int32_t *)v1; // 0x402ffb
    int64_t result = function_401af0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40300a
    return result;
}
// Address range: 0x403030 - 0x403111
int64_t function_403030(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g32 : a4; // 0x403052
    int32_t * v2 = __errno_location(); // 0x403058
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403077
    int32_t * v4 = (int32_t *)v1; // 0x40307a
    int64_t v5 = function_401af0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403095
    int64_t v6 = v5 + 1; // 0x40309a
    int64_t result = function_403b30(v6); // 0x4030af
    function_401af0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4030f4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4030fd
    return result;
}
// Address range: 0x403120 - 0x40312a
int64_t function_403120(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403120
    return function_403030(a1, a2, 0, a3);
}
// Address range: 0x403130 - 0x4031c5
int64_t function_403130(void) {
    uint32_t v1 = *(int32_t *)&g21; // 0x403130
    int64_t v2 = v1; // 0x403130
    int64_t v3 = v2; // 0x403144
    if (v1 >= 2) {
        int64_t v4 = &g21;
        int64_t v5 = v4 + 16; // 0x403163
        free((int64_t *)*(int64_t *)v4);
        v3 = &g37;
        while (v5 != (int64_t)g18 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403160
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g37;
        }
    }
    int64_t v6 = v3; // 0x40317d
    if (g19 != 0x607260) {
        // 0x40317f
        free((int64_t *)g19);
        g19 = 256;
        *(int64_t *)&g20 = (int64_t)&g31;
        v6 = &g37;
    }
    int64_t result = v6; // 0x4031a1
    if (g18 != &g19) {
        // 0x4031a3
        free(g18);
        *(int64_t *)&g18 = (int64_t)&g19;
        result = &g37;
    }
    // 0x4031b6
    *(int32_t *)&g21 = 1;
    return result;
}
// Address range: 0x4031d0 - 0x4031e1
int64_t function_4031d0(void) {
    // 0x4031d0
    int64_t v1; // 0x4031d0
    return function_402d20(v1, v1, -1, (int64_t *)&g32);
}
// Address range: 0x4031f0 - 0x4031fa
int64_t function_4031f0(void) {
    // 0x4031f0
    int64_t v1; // 0x4031f0
    return function_402d20(v1, v1, v1, (int64_t *)&g32);
}
// Address range: 0x403200 - 0x403216
int64_t function_403200(int64_t a1) {
    // 0x403200
    return function_402d20(0, a1, -1, (int64_t *)&g32);
}
// Address range: 0x403220 - 0x403232
int64_t function_403220(int64_t a1, int64_t a2) {
    // 0x403220
    return function_402d20(0, a1, a2, (int64_t *)&g32);
}
// Address range: 0x403240 - 0x4032a8
int64_t function_403240(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403250
    return function_402d20((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4032b0 - 0x403314
int64_t function_4032b0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4032c0
    return function_402d20((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403320 - 0x40332c
int64_t function_403320(int64_t a1, int64_t a2) {
    // 0x403320
    return function_403240(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403330 - 0x40333f
int64_t function_403330(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403330
    return function_4032b0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403340 - 0x4033b0
int64_t function_403340(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x40334d
    int128_t v2 = __asm_movdqa(g33); // 0x403355
    int128_t v3 = __asm_movdqa(g34); // 0x40335d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403372
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403388
    uint32_t v6 = *v5; // 0x403388
    uint32_t v7 = (int32_t)a3 % 32; // 0x40338d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_402d20(0, a1, a2, &v4);
}
// Address range: 0x4033b0 - 0x4033bd
int64_t function_4033b0(int64_t a1, int64_t a2) {
    // 0x4033b0
    return function_403340(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4033c0 - 0x4033d1
int64_t function_4033c0(int64_t a1) {
    // 0x4033c0
    return function_403340(a1, -1, 58);
}
// Address range: 0x4033e0 - 0x4033ea
int64_t function_4033e0(void) {
    // 0x4033e0
    int64_t v1; // 0x4033e0
    return function_403340(v1, v1, 58);
}
// Address range: 0x4033f0 - 0x40345e
int64_t function_4033f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40340a
    return function_402d20(a1, a3, -1, &v1);
}
// Address range: 0x403460 - 0x4034cc
int64_t function_403460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g32); // 0x403467
    int128_t v2 = __asm_movdqa(g33); // 0x40346f
    int128_t v3 = __asm_movdqa(g34); // 0x403477
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403499
    if (a2 == 0 || a3 == 0) {
        // 0x4034c7
        abort();
        // UNREACHABLE
    }
    // 0x4034aa
    return function_402d20(a1, a4, a5, &v4);
}
// Address range: 0x4034d0 - 0x4034d9
int64_t function_4034d0(void) {
    // 0x4034d0
    int64_t v1; // 0x4034d0
    return function_403460(v1, v1, v1, v1, -1);
}
// Address range: 0x4034e0 - 0x4034f7
int64_t function_4034e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4034e0
    return function_403460(0, a1, a2, a3, -1);
}
// Address range: 0x403500 - 0x403513
int64_t function_403500(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403500
    return function_403460(0, a1, a2, a3, a4);
}
// Address range: 0x403520 - 0x40352a
int64_t function_403520(void) {
    // 0x403520
    int64_t v1; // 0x403520
    return function_402d20(v1, v1, v1, &g17);
}
// Address range: 0x403530 - 0x403542
int64_t function_403530(int64_t a1, int64_t a2) {
    // 0x403530
    return function_402d20(0, a1, a2, &g17);
}
// Address range: 0x403550 - 0x403561
int64_t function_403550(void) {
    // 0x403550
    int64_t v1; // 0x403550
    return function_402d20(v1, v1, -1, &g17);
}
// Address range: 0x403570 - 0x403586
int64_t function_403570(int64_t a1) {
    // 0x403570
    return function_402d20(0, a1, -1, &g17);
}
// Address range: 0x403590 - 0x40396d
int64_t function_403590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403628
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4035ac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4035c6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40360b
    if (a6 < 10) {
        // 0x40361a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403712
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403970 - 0x403990
int64_t function_403970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403970
    if (a5 == 0) {
        // 0x40398b
        return function_403590(a1, a2, a3, a4, a5, 0, (int64_t)&g37);
    }
    int64_t v1 = 0; // 0x403977
    v1++;
    int64_t v2 = v1; // 0x403989
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403980
        v1++;
        v2 = v1;
    }
    // 0x40398b
    return function_403590(a1, a2, a3, a4, a5, v2, (int64_t)&g37);
}
// Address range: 0x403990 - 0x4039f0
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403990
    int64_t v3 = &v2; // 0x403990
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4039c3
    int64_t v6; // 0x4039ad
    int64_t * v7; // 0x4039cb
    int64_t v8; // 0x4039cb
    int64_t v9; // 0x4039d7
    if (v5 < 48) {
        // 0x4039a0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4039e3
            break;
        }
    } else {
        // 0x4039cb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4039e3
            break;
        }
    }
    int64_t v10 = 10; // 0x4039c1
    while (v4 != 9) {
        // 0x4039b9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4039a0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4039e3
                break;
            }
        } else {
            // 0x4039cb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4039e3
                break;
            }
        }
        // 0x4039b9
        v10 = 10;
    }
    // 0x4039e3
    return function_403590(a1, a2, a3, a4, v3, v10, (int64_t)&g37);
}
// Address range: 0x4039f0 - 0x403aac
int64_t function_4039f0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4039f0
    int64_t v1; // bp-168, 0x4039f0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4039f0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4039f0
    int64_t v8; // 0x4039f0
    int64_t v9; // bp-56, 0x4039f0
    int64_t v10; // 0x403a55
    int64_t v11; // 0x403a79
    if ((int32_t)v6 < 48) {
        // 0x403a40
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403a90
            break;
        }
    } else {
        // 0x403a72
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403a90
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403a6a
    int64_t v13 = 10; // 0x403a6a
    while (v5 != 9) {
        // 0x403a6c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403a40
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403a90
                break;
            }
        } else {
            // 0x403a72
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403a90
                break;
            }
        }
        // 0x403a62
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403a90
    int64_t v14; // bp-136, 0x4039f0
    int64_t result = function_403590(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g37); // 0x403a9f
    return result;
}
// Address range: 0x403ab0 - 0x403b24
int64_t function_403ab0(int64_t a1) {
    // 0x403ab0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403b13
    return fputs_unlocked(v1, g23);
}
// Address range: 0x403b30 - 0x403b4a
int64_t function_403b30(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403b34
    if (size != 0 != (mem == NULL)) {
        // 0x403b43
        return (int64_t)mem;
    }
    // 0x403b45
    function_403d80(size);
    // UNREACHABLE
}
// Address range: 0x403b50 - 0x403b71
int64_t function_403b50(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403b53
    int64_t v2 = v1; // 0x403b53
    if (v2 < 0) {
        // 0x403b6b
        function_403d80(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403b69
        return function_403b30(v2);
    }
    // 0x403b6b
    function_403d80(v2);
    // UNREACHABLE
}
// Address range: 0x403b80 - 0x403b82
int64_t function_403b80(void) {
    // 0x403b80
    int64_t v1; // 0x403b80
    return function_403b30(v1);
}
// Address range: 0x403b90 - 0x403bc6
int64_t function_403b90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403bb8
        free(v1);
        return (int32_t)&g37 ^ (int32_t)&g37;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403ba1
    if (a2 != 0 != (mem == NULL)) {
        // 0x403bb0
        return (int64_t)mem;
    }
    // 0x403bc1
    function_403d80(a1);
    // UNREACHABLE
}
// Address range: 0x403bd0 - 0x403bf1
int64_t function_403bd0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403bd3
    int64_t v2 = v1; // 0x403bd3
    if (v2 < 0) {
        // 0x403beb
        function_403d80(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403be9
        return function_403b90(a1, v2);
    }
    // 0x403beb
    function_403d80(a1);
    // UNREACHABLE
}
// Address range: 0x403c00 - 0x403c86
int64_t function_403c00(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403c5b
            function_403d80(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403b90(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403c43
    if (a2 == 0) {
        // 0x403c68
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403c48
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403c5b
        function_403d80(a1);
        // UNREACHABLE
    }
    // 0x403c2a
    *(int64_t *)a2 = v2;
    return function_403b90(a1, v2 * a3);
}
// Address range: 0x403c90 - 0x403ce0
int64_t function_403c90(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x403c90
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x403cda
            function_403d80(a1);
            // UNREACHABLE
        }
        // 0x403cb2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403b90(a1, v1);
    }
    if (a2 == 0) {
        // 0x403cc5
        *(int64_t *)a2 = 128;
        return function_403b90(0, 128);
    }
    // 0x403cd8
    if (a2 < 0) {
        // 0x403cda
        function_403d80(a1);
        // UNREACHABLE
    }
    // 0x403cb2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403b90(a1, v1);
}
// Address range: 0x403ce0 - 0x403cf7
int64_t function_403ce0(int64_t a1, int64_t a2) {
    // 0x403ce0
    return (int64_t)memset((int64_t *)function_403b30(a1), 0, (int32_t)a1);
}
// Address range: 0x403d00 - 0x403d2e
int64_t function_403d00(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x403d07
    if ((int64_t)v1 < 0) {
        // 0x403d29
        function_403d80(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x403d29
        function_403d80(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x403d1a
    if (mem != NULL) {
        // 0x403d24
        return (int64_t)mem;
    }
    // 0x403d29
    function_403d80(nmemb);
    // UNREACHABLE
}
// Address range: 0x403d30 - 0x403d58
int64_t function_403d30(int64_t a1, int64_t a2) {
    int64_t v1 = function_403b30(a2); // 0x403d3f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x403d60 - 0x403d73
int64_t function_403d60(int64_t str) {
    // 0x403d60
    return function_403d30(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x403d80 - 0x403db1
int64_t function_403d80(int64_t a1) {
    // 0x403d80
    error(g16, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x403dc0 - 0x403e3a
int64_t function_403dc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x403dcb
    int64_t v2 = (int64_t)&g1; // 0x403dcb
    int64_t v3; // 0x403dc0
    int64_t v4; // 0x403dc0
    int64_t n; // 0x403dc0
    if (a2 == 0) {
        goto lab_0x403e12;
    } else {
        // 0x403dcd
        if (a3 == 0) {
            // 0x403df8
            return -2;
        }
        // 0x403dd9
        n = a3;
        v4 = a2;
        v3 = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == 0) {
            goto lab_0x403e12;
        } else {
            goto lab_0x403de4;
        }
    }
  lab_0x403e12:
    // 0x403e12
    n = v1;
    v4 = v2;
    int64_t v5; // bp-28, 0x403dc0
    v3 = &v5;
    goto lab_0x403de4;
  lab_0x403de4:;
    int32_t * pwc = (int32_t *)v3; // 0x403dea
    char * wstr = (char *)v4; // 0x403dea
    int64_t ps; // 0x403dc0
    int32_t v6 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x403dea
    int64_t result = v6; // 0x403dea
    if (v6 < 0xfffffffe) {
        // 0x403df8
        return result;
    }
    int64_t result2 = result; // 0x403e29
    if ((char)function_403ea0(0, v4) == 0) {
        // 0x403e2b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x403df8
    return result2;
}
// Address range: 0x403e40 - 0x403e9d
int64_t function_403e40(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x403e47
    int64_t v2; // 0x403e40
    int64_t result = function_404470(a1, v2); // 0x403e58
    if ((v2 & 32) != 0) {
        // 0x403e80
        if ((int32_t)result == 0) {
            // 0x403e84
            *__errno_location() = 0;
        }
        // 0x403e7a
        return 0xffffffff;
    }
    // 0x403e61
    if ((int32_t)result == 0) {
        // 0x403e7a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x403e68
    if (v1 == 0) {
        // 0x403e6a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x403e7a
    return result2;
}
// Address range: 0x403ea0 - 0x403efe
int64_t function_403ea0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x403ea6
    if (locale == NULL) {
        // 0x403ed3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x403ea6
    bool v2; // 0x403ea0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g9; // 0x403ea0
    int64_t v5 = v1; // 0x403ea0
    int64_t v6 = 2; // 0x403ec5
    unsigned char v7 = *(char *)v5; // 0x403ec5
    char v8 = *(char *)v4; // 0x403ec5
    char v9 = v8; // 0x403ec5
    bool v10 = false; // 0x403ec5
    while (v7 == v8) {
        // 0x403eb8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x403ed1
    int64_t v13 = v1; // 0x403ed1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x403ed3
        return 0;
    }
    int64_t v14 = 6; // 0x403ed1
    unsigned char v15 = *(char *)v13; // 0x403eed
    char v16 = *(char *)v12; // 0x403eed
    char v17 = v16; // 0x403eed
    bool v18 = false; // 0x403eed
    while (v15 == v16) {
        // 0x403ee0
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
// Address range: 0x403f00 - 0x404462
int64_t function_403f00(void) {
    char * v1 = nl_langinfo(14); // 0x403f16
    char * v2 = g35; // 0x403f1b
    char * v3; // 0x403f00
    int64_t v4; // 0x403f00
    int64_t v5; // 0x403f00
    int64_t v6; // 0x403f00
    int64_t v7; // 0x403f00
    int32_t size; // 0x403f00
    int32_t size2; // 0x403f00
    int32_t len; // 0x403fd2
    int64_t v8; // 0x403fd2
    char * env_val; // 0x403fbd
    if (v2 == NULL) {
        // 0x403fb8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x404025;
        } else {
            // 0x403fca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x404025;
            } else {
                // 0x403fcf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x403fbd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x404455
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x404025;
                    } else {
                        // 0x4043c9
                        size2 = len + 14;
                        goto lab_0x403feb;
                    }
                } else {
                    goto lab_0x403feb;
                }
            }
        }
    } else {
        // 0x403f00
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x403f3a;
    }
  lab_0x40426c:;
    // 0x40426c
    struct _IO_FILE * stream; // 0x4040ab
    int32_t v10 = __uflow(stream); // 0x40426f
    int64_t v11; // 0x403f00
    int64_t v12 = v11; // 0x404279
    int64_t v13; // 0x403f00
    int64_t v14 = v13; // 0x404279
    int32_t v15 = v10; // 0x404279
    int64_t v16; // 0x403f00
    int64_t v17 = v16; // 0x404279
    int64_t v18 = v11; // 0x404279
    int64_t v19 = v13; // 0x404279
    int64_t v20 = v16; // 0x404279
    if (v10 == -1) {
        // break -> 0x40427f
        goto lab_0x40427f;
    }
    goto lab_0x4040f9;
  lab_0x4040ee:;
    // 0x4040ee
    int64_t v90; // 0x403f00
    int64_t * v32; // 0x4040e0
    *v32 = v90 + 1;
    int64_t v89; // 0x403f00
    v12 = v89;
    int64_t v91; // 0x403f00
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x403f00
    v17 = v92;
    goto lab_0x4040f9;
  lab_0x4040f9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x403f00
    int32_t v25; // bp-120, 0x403f00
    int32_t v26; // bp-184, 0x403f00
    int64_t v27; // 0x4040ab
    int64_t v28; // 0x4040c8
    int64_t v29; // 0x4040cd
    int64_t * v30; // 0x4040e4
    switch (c) {
        case 32: {
            goto lab_0x4040e0;
        }
        case 10: {
            goto lab_0x4040e0;
        }
        case 9: {
            goto lab_0x4040e0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4042d1
            int32_t v33; // 0x403f00
            char v34; // 0x403f00
            int32_t v35; // 0x4042de
            if (v31 < *v30) {
                // 0x4042b0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4042db
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4042d1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4042b0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4042db
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4042c0
                v36 = v33;
            }
            // 0x4043af
            if (v36 == -1) {
                // break -> 0x40427f
                break;
            }
            goto lab_0x4040e0;
        }
        default: {
            // 0x40410f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40427f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x404138
            int64_t v39 = v37 + 4; // 0x40413a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x404146
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x404148
            while (v41 == 0) {
                // 0x404138
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x404166
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x404172
            int64_t v45 = v43 + 4; // 0x404174
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x404180
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x404182
            while (v47 == 0) {
                // 0x404172
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40416f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x404198
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4041a8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4041ac
            int64_t v52 = v51 + v48; // 0x4041b5
            int64_t * mem; // 0x403f00
            int64_t v53; // 0x403f00
            int64_t v54; // 0x403f00
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4042eb
                int64_t v56 = v55 + 3; // 0x4042f7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4041d1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4041e0
            if (mem == NULL) {
                // 0x40440c
                free((int64_t *)v21);
                function_404470(v27, v53);
                v24 = (int64_t)&g1;
                goto lab_0x404084;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4041f8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x404202
            uint32_t v62 = (int32_t)v59; // 0x404205
            int64_t v63; // 0x403f00
            if (v62 >= 8) {
                // 0x404314
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40432e
                int64_t v66 = v61 - v65; // 0x404332
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40433d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40434e
                    int64_t v70 = v69 & 0xffffffff; // 0x40434e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40434b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4043df
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x404217
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40421b
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
            int64_t v73 = v51 + 1; // 0x40422b
            int64_t v74 = v60 - 1; // 0x40422f
            uint32_t v75 = (int32_t)v73; // 0x404234
            int64_t v76; // 0x403f00
            if (v75 >= 8) {
                // 0x404362
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40436c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40437c
                int64_t v80 = v74 - v79; // 0x404380
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40438b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40439b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x404399
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4043f6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4043fe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x404246
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40424a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x404443
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40425e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4040ee;
            } else {
                goto lab_0x40426c;
            }
        }
    }
  lab_0x4040e0:;
    int64_t v93 = v23; // 0x403f00
    int64_t v94 = v22; // 0x403f00
    int64_t v95 = v21; // 0x403f00
    goto lab_0x4040e0_2;
  lab_0x404025:;
    int64_t * mem3 = malloc(size); // 0x404025
    int64_t v97 = (int64_t)&g1; // 0x404030
    int64_t v98; // 0x403f00
    int64_t path; // 0x403f00
    if (mem3 == NULL) {
        goto lab_0x404002;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x404025
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x404046;
    }
  lab_0x403f3a:;
    int64_t str = v1 == NULL ? (int64_t)&g1 : (int64_t)v1; // 0x403f2d
    char v100 = *v3; // 0x403f3a
    int64_t v101; // 0x403f00
    if (v100 == 0) {
        // 0x403f94
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x403f00
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x403f00
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x403f80
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x403f87;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x403f50
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x403f5d
        char v107 = *(char *)v106; // 0x403f62
        v102 = v107;
        if (v107 == 0) {
            // 0x403f94
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x403f6b
    v104 = v103 + 1;
  lab_0x403f87:
    // 0x403f94
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x404002:;
    char * v108 = (char *)v97;
    g35 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x403f3a;
  lab_0x404046:;
    int64_t v109 = v98 + path; // 0x404046
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x404072
    v24 = (int64_t)&g1;
    if (fd >= 0) {
        // 0x4040a1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4043d2
            close(fd);
            v24 = (int64_t)&g1;
        } else {
            // 0x4040c5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4040e0_2:;
                uint64_t v96 = *v32; // 0x4040e0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40426c;
                } else {
                    goto lab_0x4040ee;
                }
            }
          lab_0x40427f:
            // 0x40427f
            function_404470(v27, v19);
            v24 = (int64_t)&g1;
            if (v18 != 0) {
                // 0x40429e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x404084;
  lab_0x403feb:;
    int64_t * mem4 = malloc(size2); // 0x403feb
    v97 = (int64_t)&g1;
    if (mem4 != NULL) {
        // 0x404091
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x404046;
    } else {
        goto lab_0x404002;
    }
  lab_0x404084:
    // 0x404084
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x404002;
}
// Address range: 0x404470 - 0x4044eb
int64_t function_404470(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404477
    if (fileno(stream) < 0) {
        // 0x4044d7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40448a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4044bb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4044d7
            return fclose(stream);
        }
    }
    // 0x40448c
    if ((int32_t)function_4044f0(a1, v1) == 0) {
        // 0x4044d7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x404498
    int32_t v3 = *v2; // 0x4044a0
    int64_t result = fclose(stream); // 0x4044ae
    if (v3 != 0) {
        // 0x4044e0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4044b0
    return result;
}
// Address range: 0x4044f0 - 0x404530
int64_t function_4044f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40450a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40450a
        return fflush(stream);
    }
    // 0x404518
    function_404530(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404530 - 0x404587
int64_t function_404530(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404530
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40453a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40456b
    int64_t result = -1; // 0x404574
    if (v1 != -1) {
        // 0x404576
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404582
    return result;
}
// Address range: 0x404590 - 0x4045ed
int64_t function_404590(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404590
    return function_4010f8();
}
// Address range: 0x4045f0 - 0x4045f1
int64_t function_4045f0(void) {
    // 0x4045f0
    int64_t result; // 0x4045f0
    return result;
}
// Address range: 0x404600 - 0x404618
int64_t function_404600(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404600
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g14);
}
// Address range: 0x404618 - 0x404638
int64_t function_404618(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g10; // 0x404622
    while (*(int64_t *)v1 != -1) {
        // 0x404623
        v1 -= 8;
    }
    // 0x404634
    return result;
}
