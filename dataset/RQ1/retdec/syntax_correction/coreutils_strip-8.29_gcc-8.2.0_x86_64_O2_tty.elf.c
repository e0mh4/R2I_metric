#include "decompile_retdec.h"
// Address range: 0x401620 - 0x401625
int64_t function_401620(void) {
    // 0x401620
    abort();
    // UNREACHABLE
}
// Address range: 0x401625 - 0x40162a
int64_t function_401625(void) {
    // 0x401625
    abort();
    // UNREACHABLE
}
// Address range: 0x40162a - 0x40162f
int64_t function_40162a(void) {
    // 0x40162a
    abort();
    // UNREACHABLE
}
// Address range: 0x40162f - 0x401634
int64_t function_40162f(void) {
    // 0x40162f
    abort();
    // UNREACHABLE
}
// Address range: 0x401634 - 0x401639
int64_t function_401634(void) {
    // 0x401634
    abort();
    // UNREACHABLE
}
// Address range: 0x401639 - 0x40163e
int64_t function_401639(void) {
    // 0x401639
    abort();
    // UNREACHABLE
}
// Address range: 0x401640 - 0x4017b2
int64_t function_401640(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x401641
    function_401c50(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g19 = 3;
    function_4056d0(0x401bb0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    char v2 = 0; // 0x40168f
    char * str; // 0x401640
    int64_t v3; // 0x401640
    char * v4; // 0x401738
    int64_t v5; // 0x401717
    while (true) {
        // 0x401696
        g34 = v2;
        int32_t v6 = function_404e10(v1, a2, &g3, &g2, 0, a6);
        switch (v6) {
            case -1: {
                // 0x401717
                v5 = (int64_t)*(int32_t *)0x60823c;
                if (v1 > v5) {
                    // 0x40177f
                    function_403870(*(int64_t *)(8 * v5 + a2));
                    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
                  lab_0x4016d7:
                    // 0x4016d7
                    function_4018a0(2);
                    // UNREACHABLE
                }
                // 0x401722
                *__errno_location() = 2;
                if (g34 != 0) {
                    // 0x40174c
                    return (int64_t)(isatty(0) == 0) & 0xffffffff;
                }
                // 0x401738
                v4 = ttyname(0);
                str = v4;
                v3 = 0;
                if (v4 == NULL) {
                    // 0x401760
                    str = dcgettext(NULL, "not a tty", 5);
                    v3 = 1;
                }
                // 0x401744
                puts(str);
                // 0x40174c
                return v3 & 0xffffffff;
            }
            case -130: {
                // 0x401778
                function_4018a0(0);
                // UNREACHABLE
            }
        }
        // 0x4016bd
        v2 = 1;
        if (v6 != 115) {
            if (v6 == -131) {
                // 0x4016e8
                function_403cf0((int64_t)g29, "tty", "GNU coreutils", (int64_t)g18, "David MacKenzie", 0);
                exit(0);
                // UNREACHABLE
            }
            goto lab_0x4016d7;
        }
    }
    // 0x401717
    v5 = (int64_t)*(int32_t *)0x60823c;
    if (v1 > v5) {
        // 0x40177f
        function_403870(*(int64_t *)(8 * v5 + a2));
        error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
      lab_0x4016d7:
        // 0x4016d7
        function_4018a0(2);
        // UNREACHABLE
    }
    // 0x401722
    *__errno_location() = 2;
    if (g34 != 0) {
        // 0x40174c
        return (int64_t)(isatty(0) == 0) & 0xffffffff;
    }
    // 0x401738
    v4 = ttyname(0);
    str = v4;
    v3 = 0;
    if (v4 == NULL) {
        // 0x401760
        str = dcgettext(NULL, "not a tty", 5);
        v3 = 1;
    }
    // 0x401744
    puts(str);
    // 0x40174c
    return v3 & 0xffffffff;
}
// Address range: 0x4017c0 - 0x4017eb
// Address range: 0x4017eb - 0x40180a
int64_t function_4017eb(void) {
    // 0x4017eb
    return &g28;
}
// Address range: 0x40180a - 0x401841
int64_t function_40180a(void) {
    // 0x40180a
    return 0;
}
// Address range: 0x401841 - 0x401898
int64_t function_401841(void) {
    // 0x401841
    if (g32 != 0) {
        // 0x401897
        int64_t result; // 0x401841
        return result;
    }
    int64_t v1 = g33; // 0x401874
    int64_t result2; // 0x401886
    if (g33 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401886
        result2 = function_4017eb();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401876
        v1++;
    }
    // 0x40186a
    g33 = v1;
    // 0x401886
    result2 = function_4017eb();
    g32 = 1;
    return result2;
}
// Address range: 0x401898 - 0x40189d
int64_t function_401898(void) {
    // 0x401898
    return function_40180a();
}
// Address range: 0x4018a0 - 0x401b8d
int64_t function_4018a0(int64_t a1) {
    int32_t status = a1; // 0x4018b6
    if (status != 0) {
        // 0x4018ba
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4018df
        exit(status);
        // UNREACHABLE
    }
    // 0x4018e6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the file name of the terminal connected to standard input.\n\n  -s, --silent, --quiet   print nothing, only return an exit status\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x40196d
    bool v2; // 0x4018a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4019f0
    int64_t v6 = *(int64_t *)v5; // 0x4019f4
    int64_t v7 = 4; // 0x4019fa
    while (v6 != 0) {
        int64_t v8 = (int64_t)"tty";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401a06
        char v11 = *(char *)v9; // 0x401a06
        char v12 = v11; // 0x401a06
        bool v13 = false; // 0x401a06
        while (v10 == v11) {
            // 0x4019fc
            v7--;
            int64_t v14 = v9 + v3; // 0x401a06
            int64_t v15 = v8 + v3; // 0x401a06
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
            // break -> 0x401a12
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x401a12
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401b24;
        } else {
            // 0x401b0e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401b63
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401a74;
            } else {
                goto lab_0x401b24;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401a74;
        } else {
            // 0x401a5a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401b63
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401a74;
            } else {
                goto lab_0x401a74;
            }
        }
    }
  lab_0x401b24:
    // 0x401b24
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401ab4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018df
    exit(status);
    // UNREACHABLE
  lab_0x401a74:
    // 0x401a74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401ab4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018df
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401b90 - 0x401b98
int64_t function_401b90(int64_t a1) {
    // 0x401b90
    g36 = a1;
    int64_t result; // 0x401b90
    return result;
}
// Address range: 0x401ba0 - 0x401ba8
int64_t function_401ba0(int64_t a1) {
    // 0x401ba0
    g35 = a1;
    int64_t result; // 0x401ba0
    return result;
}
// Address range: 0x401bb0 - 0x401c4e
int64_t function_401bb0(void) {
    // 0x401bb0
    int32_t * err_num; // 0x401bc6
    if ((int32_t)function_404f10((int64_t)g29) == 0) {
        goto lab_0x401bdc;
    } else {
        // 0x401bc6
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x401bf3;
        } else {
            // 0x401bd7
            if (*err_num != 32) {
                goto lab_0x401bf3;
            } else {
                goto lab_0x401bdc;
            }
        }
    }
  lab_0x401bdc:;
    int64_t result = function_404f10((int64_t)g31); // 0x401be3
    if ((int32_t)result == 0) {
        // 0x401bec
        return result;
    }
    // 0x401c2e
    _exit(g19);
    // UNREACHABLE
  lab_0x401bf3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401bff
    if (g36 == 0) {
        // 0x401c39
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401c13
        error(0, *err_num, "%s: %s", (char *)function_4036c0((int64_t)g36), v1);
    }
    // 0x401c2e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x401c50 - 0x401ce9
int64_t function_401c50(int64_t str) {
    // 0x401c50
    if (str == 0) {
        // 0x401cc9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401c5e
    int64_t result = (int64_t)found_char_pos; // 0x401c5e
    if (found_char_pos == NULL) {
        // 0x401cb9
        g37 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401c68
    if (v1 - str < 7) {
        // 0x401cb9
        g37 = str;
        g30 = str;
        return result;
    }
    // 0x401c78
    bool v2; // 0x401c50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401c50
    int64_t v5 = result - 6; // 0x401c50
    int64_t v6 = 7; // 0x401c86
    unsigned char v7 = *(char *)v5; // 0x401c86
    char v8 = *(char *)v4; // 0x401c86
    char v9 = v8; // 0x401c86
    bool v10 = false; // 0x401c86
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
    int64_t v12 = (int64_t)"lt-"; // 0x401c90
    int64_t v13 = v1; // 0x401c90
    int64_t v14 = 3; // 0x401c90
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401cb9
        g37 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401ca2
    char v16 = *(char *)v12; // 0x401ca2
    char v17 = v16; // 0x401ca2
    bool v18 = false; // 0x401ca2
    while (v15 == v16) {
        // 0x401c92
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
    int64_t v20 = v1; // 0x401cac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401cae
        v20 = result + 4;
        g28 = v20;
    }
    // 0x401cb9
    g37 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x401cf0 - 0x401de2
int64_t function_401cf0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401d04
    int64_t result = (int64_t)v1; // 0x401d04
    if (result != a1) {
        // 0x401d11
        return result;
    }
    int64_t v2 = function_404fd0(); // 0x401d20
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401dd6
    if (v3 == 85) {
        // 0x401d30
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401dc8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x401d5e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x401d6b
        // 0x401d11
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401dc8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x401dad
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x401dba
    // 0x401d11
    return result4;
}
// Address range: 0x401df0 - 0x401e47
int64_t function_401df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401df0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401e38
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401e47 - 0x403011
int64_t function_401e47(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x401e91
    int64_t v3 = 0; // 0x401e91
    int64_t v4; // 0x401e47
    int64_t v5; // 0x401e47
    int64_t v6; // 0x401e47
    int64_t v7; // 0x401e47
    int64_t v8; // 0x401e47
    int64_t v9; // 0x401e47
    int64_t v10; // 0x401e47
    int64_t v11; // 0x401e47
    int64_t v12; // 0x401e47
    int64_t v13; // 0x401e47
    int64_t v14; // 0x401e47
    int64_t v15; // 0x401e47
    int64_t v16; // 0x401e47
    int64_t v17; // 0x401e47
    int64_t v18; // 0x401e47
    int64_t result; // 0x401e47
    int64_t v19; // 0x401e47
    int32_t wc; // bp+132, 0x401e47
    int64_t ps; // bp+136, 0x401e47
    char v20; // 0x402400
    int64_t v21; // 0x402400
    int64_t v22; // 0x4027a8
    int64_t v23; // 0x401e47
    int64_t v24; // 0x4027c7
    int32_t v25; // 0x401e47
    while (true) {
      lab_0x401e98_2:
        // 0x401e98
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401e47
        int64_t v27; // 0x401ecc
        while (true) {
          lab_0x401e98:
            // 0x401e98
            v5 = v26;
            bool v28 = v15 == v5; // 0x401ea3
            if (v15 == -1) {
                // 0x401ea5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x401eb3
            if (v28) {
                // break (via goto) -> 0x402618
                goto lab_0x402618;
            }
            // 0x401ebc
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
                    // 0x4024ab
                    if (v25 % 2 == 0) {
                        goto lab_0x401ff1;
                    }
                    // 0x4028cd
                    v26 = v5 + 1;
                    goto lab_0x401e98;
                }
                case 7: {
                    goto lab_0x401ff1;
                }
                case 8: {
                    goto lab_0x401ff1;
                }
                case 9: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x401ff1;
                }
                case 12: {
                    goto lab_0x401ff1;
                }
                case 13: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x401fbd;
                }
                case 36: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x401ff1;
                }
                case 38: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x401ff1;
                }
                case 44: {
                    goto lab_0x401ff1;
                }
                case 45: {
                    goto lab_0x401ff1;
                }
                case 46: {
                    goto lab_0x401ff1;
                }
                case 47: {
                    goto lab_0x401ff1;
                }
                case 48: {
                    goto lab_0x401ff1;
                }
                case 49: {
                    goto lab_0x401ff1;
                }
                case 50: {
                    goto lab_0x401ff1;
                }
                case 51: {
                    goto lab_0x401ff1;
                }
                case 52: {
                    goto lab_0x401ff1;
                }
                case 53: {
                    goto lab_0x401ff1;
                }
                case 54: {
                    goto lab_0x401ff1;
                }
                case 55: {
                    goto lab_0x401ff1;
                }
                case 56: {
                    goto lab_0x401ff1;
                }
                case 57: {
                    goto lab_0x401ff1;
                }
                case 58: {
                    goto lab_0x401ff1;
                }
                case 59: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x401ff1;
                }
                case 66: {
                    goto lab_0x401ff1;
                }
                case 67: {
                    goto lab_0x401ff1;
                }
                case 68: {
                    goto lab_0x401ff1;
                }
                case 69: {
                    goto lab_0x401ff1;
                }
                case 70: {
                    goto lab_0x401ff1;
                }
                case 71: {
                    goto lab_0x401ff1;
                }
                case 72: {
                    goto lab_0x401ff1;
                }
                case 73: {
                    goto lab_0x401ff1;
                }
                case 74: {
                    goto lab_0x401ff1;
                }
                case 75: {
                    goto lab_0x401ff1;
                }
                case 76: {
                    goto lab_0x401ff1;
                }
                case 77: {
                    goto lab_0x401ff1;
                }
                case 78: {
                    goto lab_0x401ff1;
                }
                case 79: {
                    goto lab_0x401ff1;
                }
                case 80: {
                    goto lab_0x401ff1;
                }
                case 81: {
                    goto lab_0x401ff1;
                }
                case 82: {
                    goto lab_0x401ff1;
                }
                case 83: {
                    goto lab_0x401ff1;
                }
                case 84: {
                    goto lab_0x401ff1;
                }
                case 85: {
                    goto lab_0x401ff1;
                }
                case 86: {
                    goto lab_0x401ff1;
                }
                case 87: {
                    goto lab_0x401ff1;
                }
                case 88: {
                    goto lab_0x401ff1;
                }
                case 89: {
                    goto lab_0x401ff1;
                }
                case 90: {
                    goto lab_0x401ff1;
                }
                case 91: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x401ff1;
                }
                case 94: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x401ff1;
                }
                case 96: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x401ff1;
                }
                case 98: {
                    goto lab_0x401ff1;
                }
                case 99: {
                    goto lab_0x401ff1;
                }
                case 100: {
                    goto lab_0x401ff1;
                }
                case 101: {
                    goto lab_0x401ff1;
                }
                case 102: {
                    goto lab_0x401ff1;
                }
                case 103: {
                    goto lab_0x401ff1;
                }
                case 104: {
                    goto lab_0x401ff1;
                }
                case 105: {
                    goto lab_0x401ff1;
                }
                case 106: {
                    goto lab_0x401ff1;
                }
                case 107: {
                    goto lab_0x401ff1;
                }
                case 108: {
                    goto lab_0x401ff1;
                }
                case 109: {
                    goto lab_0x401ff1;
                }
                case 110: {
                    goto lab_0x401ff1;
                }
                case 111: {
                    goto lab_0x401ff1;
                }
                case 112: {
                    goto lab_0x401ff1;
                }
                case 113: {
                    goto lab_0x401ff1;
                }
                case 114: {
                    goto lab_0x401ff1;
                }
                case 115: {
                    goto lab_0x401ff1;
                }
                case 116: {
                    goto lab_0x401ff1;
                }
                case 117: {
                    goto lab_0x401ff1;
                }
                case 118: {
                    goto lab_0x401ff1;
                }
                case 119: {
                    goto lab_0x401ff1;
                }
                case 120: {
                    goto lab_0x401ff1;
                }
                case 121: {
                    goto lab_0x401ff1;
                }
                case 122: {
                    goto lab_0x401ff1;
                }
                case 123: {
                    goto lab_0x401f95;
                }
                case 124: {
                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x401f95;
                }
                case 126: {
                    goto lab_0x401fbd;
                }
                default: {
                    goto lab_0x402395;
                }
            }
        }
      lab_0x402395:
        if (v23 != 1) {
            // 0x402700
            ps = 0;
            int64_t len = v15; // 0x402710
            if (v15 == -1) {
                // 0x402712
                len = strlen((char *)str);
            }
            // 0x40273e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40279f:
                // 0x40279f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4027a4
                int64_t v30 = v29 + str;
                v24 = function_404e90(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402d1a_2;
                    }
                    case -1: {
                        goto lab_0x402d1a_2;
                    }
                    case -2: {
                        // 0x402dfd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402e37
                            v19 = v18;
                            int64_t v31 = v18; // 0x402e3a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402e47
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402e40
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402d1a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402d1a_2;
                    }
                    case 1: {
                        goto lab_0x402770;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40281c
                        char v34 = *(char *)v33; // 0x40282d
                        unsigned char v35; // 0x401e47
                        if (v34 < 125) {
                            // 0x402838
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40284f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402820
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40282d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402838
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40284f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402820
                            v33++;
                        }
                        goto lab_0x402770;
                    }
                }
            }
            goto lab_0x402d1a_2;
        } else {
            // 0x4023e4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x401ff1;
        }
    }
  lab_0x402618:
    // 0x402618
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x402f1a
        if (v8 > result) {
            // 0x402f23
            *(char *)(v12 + result) = 0;
        }
        // 0x402247
        return result;
    }
    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x401ff1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402000
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40220a_2;
        }
    }
    int64_t v39 = result; // 0x402101
    char v40 = v20; // 0x402101
    int64_t v41 = v38; // 0x402101
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402101
    int64_t v43 = v36; // 0x402101
    goto lab_0x40207d;
  lab_0x40220a_2:
    // 0x402247
    return function_401df0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402d1a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x401ff1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4028ee
        int64_t v50 = v5 + 1; // 0x4029d1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4029d8
        char v52 = v20; // 0x4029d8
        int64_t v53 = result; // 0x4029d8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4029a1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4029a5
            int64_t v56 = v54 + 1; // 0x4029aa
            int64_t v57 = v51 + 1; // 0x4029d1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40299c
                v54 = v56;
                if (v47 > v54) {
                    // 0x4029a1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4029a5
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
        goto lab_0x40207d;
    }
  lab_0x402770:
    // 0x402770
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40278f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402792
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402d1a
        goto lab_0x402d1a_2;
    }
    goto lab_0x40279f;
  lab_0x401fbd:
    // 0x401fbd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40220a_2;
    }
    goto lab_0x401ff1;
  lab_0x401f95:;
    bool v60 = v15 == 1; // 0x401fa0
    if (v15 == -1) {
        // 0x401fa2
        v60 = *(char *)v1 == 0;
    }
    // 0x401fae
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x401ff1;
    } else {
        goto lab_0x401fbd;
    }
  lab_0x40207d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402082
        *(char *)(v44 + v45) = v40;
    }
    // 0x402086
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x401e98_2;
}
// Address range: 0x403020 - 0x4031be
int64_t function_403020(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403022
    int32_t * v3 = __errno_location(); // 0x40303c
    int64_t v4 = (int64_t)g21; // 0x403041
    int32_t v5 = *v3; // 0x40304b
    int64_t v6 = v4; // 0x403061
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4031b9
            function_404080(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403070
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403077
        int64_t v9; // 0x403020
        if (g21 == &g22) {
            int64_t v10 = function_403e90(0, v8); // 0x40319a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x40319f
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403e90(v4, v8); // 0x40308b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x40309a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x40309a
        int32_t v14 = v7; // 0x4030a1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4030d1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4030db
    int64_t * v17 = (int64_t *)v15; // 0x4030de
    uint64_t v18 = *v17; // 0x4030de
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4030e1
    int64_t result = *v19; // 0x4030e1
    int64_t v20; // 0x403020
    uint64_t v21 = function_401df0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403104
    if (v18 > v21) {
        // 0x40317b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403117
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403127
        free((int64_t *)result);
    }
    int64_t result2 = function_403e30(v22); // 0x403141
    *v19 = result2;
    int64_t v23; // 0x403020
    function_401df0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40317b
    *v3 = v5;
    return result2;
}
// Address range: 0x4031c0 - 0x4031f4
int64_t function_4031c0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4031c7
    int64_t result = function_404030(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4031e6
    return result;
}
// Address range: 0x403200 - 0x40320f
int64_t function_403200(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x40320c
    return result;
}
// Address range: 0x403210 - 0x40321f
int64_t function_403210(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403218
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403220 - 0x403253
int64_t function_403220(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403239
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40323e
    uint32_t v3 = *v2; // 0x40323e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403242
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403260 - 0x403273
int64_t function_403260(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40326c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403280 - 0x4032ab
int64_t function_403280(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403288
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4032a5
        abort();
        // UNREACHABLE
    }
    // 0x40329c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x4032b0 - 0x403322
int64_t function_4032b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4032d2
    int32_t * v2 = __errno_location(); // 0x4032db
    uint32_t v3 = *(int32_t *)v1; // 0x4032fb
    int64_t result = function_401df0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40330a
    return result;
}
// Address range: 0x403330 - 0x403411
int64_t function_403330(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403352
    int32_t * v2 = __errno_location(); // 0x403358
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403377
    int32_t * v4 = (int32_t *)v1; // 0x40337a
    int64_t v5 = function_401df0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403395
    int64_t v6 = v5 + 1; // 0x40339a
    int64_t result = function_403e30(v6); // 0x4033af
    function_401df0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4033f4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4033fd
    return result;
}
// Address range: 0x403420 - 0x40342a
int64_t function_403420(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403420
    return function_403330(a1, a2, 0, a3);
}
// Address range: 0x403430 - 0x4034c5
int64_t function_403430(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x403430
    int64_t v2 = v1; // 0x403430
    int64_t v3 = v2; // 0x403444
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x403463
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403460
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40347d
    if (g22 != 0x6082a0) {
        // 0x40347f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x4034a1
    if (g21 != &g22) {
        // 0x4034a3
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g49;
    }
    // 0x4034b6
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x4034d0 - 0x4034e1
int64_t function_4034d0(void) {
    // 0x4034d0
    int64_t v1; // 0x4034d0
    return function_403020(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x4034f0 - 0x4034fa
int64_t function_4034f0(void) {
    // 0x4034f0
    int64_t v1; // 0x4034f0
    return function_403020(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403500 - 0x403516
int64_t function_403500(int64_t a1) {
    // 0x403500
    return function_403020(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403520 - 0x403532
int64_t function_403520(int64_t a1, int64_t a2) {
    // 0x403520
    return function_403020(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403540 - 0x4035a8
int64_t function_403540(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403550
    return function_403020((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4035b0 - 0x403614
int64_t function_4035b0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4035c0
    return function_403020((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403620 - 0x40362c
int64_t function_403620(int64_t a1, int64_t a2) {
    // 0x403620
    return function_403540(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403630 - 0x40363f
int64_t function_403630(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403630
    return function_4035b0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403640 - 0x4036b0
int64_t function_403640(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x40364d
    int128_t v2 = __asm_movdqa(g40); // 0x403655
    int128_t v3 = __asm_movdqa(g41); // 0x40365d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403672
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403688
    uint32_t v6 = *v5; // 0x403688
    uint32_t v7 = (int32_t)a3 % 32; // 0x40368d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403020(0, a1, a2, &v4);
}
// Address range: 0x4036b0 - 0x4036bd
int64_t function_4036b0(int64_t a1, int64_t a2) {
    // 0x4036b0
    return function_403640(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4036c0 - 0x4036d1
int64_t function_4036c0(int64_t a1) {
    // 0x4036c0
    return function_403640(a1, -1, 58);
}
// Address range: 0x4036e0 - 0x4036ea
int64_t function_4036e0(void) {
    // 0x4036e0
    int64_t v1; // 0x4036e0
    return function_403640(v1, v1, 58);
}
// Address range: 0x4036f0 - 0x40375e
int64_t function_4036f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40370a
    return function_403020(a1, a3, -1, &v1);
}
// Address range: 0x403760 - 0x4037cc
int64_t function_403760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403767
    int128_t v2 = __asm_movdqa(g40); // 0x40376f
    int128_t v3 = __asm_movdqa(g41); // 0x403777
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403799
    if (a2 == 0 || a3 == 0) {
        // 0x4037c7
        abort();
        // UNREACHABLE
    }
    // 0x4037aa
    return function_403020(a1, a4, a5, &v4);
}
// Address range: 0x4037d0 - 0x4037d9
int64_t function_4037d0(void) {
    // 0x4037d0
    int64_t v1; // 0x4037d0
    return function_403760(v1, v1, v1, v1, -1);
}
// Address range: 0x4037e0 - 0x4037f7
int64_t function_4037e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4037e0
    return function_403760(0, a1, a2, a3, -1);
}
// Address range: 0x403800 - 0x403813
int64_t function_403800(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403800
    return function_403760(0, a1, a2, a3, a4);
}
// Address range: 0x403820 - 0x40382a
int64_t function_403820(void) {
    // 0x403820
    int64_t v1; // 0x403820
    return function_403020(v1, v1, v1, &g20);
}
// Address range: 0x403830 - 0x403842
int64_t function_403830(int64_t a1, int64_t a2) {
    // 0x403830
    return function_403020(0, a1, a2, &g20);
}
// Address range: 0x403850 - 0x403861
int64_t function_403850(void) {
    // 0x403850
    int64_t v1; // 0x403850
    return function_403020(v1, v1, -1, &g20);
}
// Address range: 0x403870 - 0x403886
int64_t function_403870(int64_t a1) {
    // 0x403870
    return function_403020(0, a1, -1, &g20);
}
// Address range: 0x403890 - 0x403c6d
int64_t function_403890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403928
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4038ac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4038c6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40390b
    if (a6 < 10) {
        // 0x40391a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403a12
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403c70 - 0x403c90
int64_t function_403c70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403c70
    if (a5 == 0) {
        // 0x403c8b
        return function_403890(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403c77
    v1++;
    int64_t v2 = v1; // 0x403c89
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403c80
        v1++;
        v2 = v1;
    }
    // 0x403c8b
    return function_403890(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403c90 - 0x403cf0
int64_t function_403c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403c90
    int64_t v3 = &v2; // 0x403c90
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403cc3
    int64_t v6; // 0x403cad
    int64_t * v7; // 0x403ccb
    int64_t v8; // 0x403ccb
    int64_t v9; // 0x403cd7
    if (v5 < 48) {
        // 0x403ca0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403ce3
            break;
        }
    } else {
        // 0x403ccb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403ce3
            break;
        }
    }
    int64_t v10 = 10; // 0x403cc1
    while (v4 != 9) {
        // 0x403cb9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403ca0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403ce3
                break;
            }
        } else {
            // 0x403ccb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403ce3
                break;
            }
        }
        // 0x403cb9
        v10 = 10;
    }
    // 0x403ce3
    return function_403890(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x403cf0 - 0x403dac
int64_t function_403cf0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x403cf0
    int64_t v1; // bp-168, 0x403cf0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403cf0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403cf0
    int64_t v8; // 0x403cf0
    int64_t v9; // bp-56, 0x403cf0
    int64_t v10; // 0x403d55
    int64_t v11; // 0x403d79
    if ((int32_t)v6 < 48) {
        // 0x403d40
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403d90
            break;
        }
    } else {
        // 0x403d72
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403d90
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403d6a
    int64_t v13 = 10; // 0x403d6a
    while (v5 != 9) {
        // 0x403d6c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403d40
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403d90
                break;
            }
        } else {
            // 0x403d72
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403d90
                break;
            }
        }
        // 0x403d62
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403d90
    int64_t v14; // bp-136, 0x403cf0
    int64_t result = function_403890(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x403d9f
    return result;
}
// Address range: 0x403db0 - 0x403e24
int64_t function_403db0(int64_t a1) {
    // 0x403db0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403e13
    return fputs_unlocked(v1, g29);
}
// Address range: 0x403e30 - 0x403e4a
int64_t function_403e30(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403e34
    if (size != 0 != (mem == NULL)) {
        // 0x403e43
        return (int64_t)mem;
    }
    // 0x403e45
    function_404080(size);
    // UNREACHABLE
}
// Address range: 0x403e50 - 0x403e71
int64_t function_403e50(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403e53
    int64_t v2 = v1; // 0x403e53
    if (v2 < 0) {
        // 0x403e6b
        function_404080(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403e69
        return function_403e30(v2);
    }
    // 0x403e6b
    function_404080(v2);
    // UNREACHABLE
}
// Address range: 0x403e80 - 0x403e82
int64_t function_403e80(void) {
    // 0x403e80
    int64_t v1; // 0x403e80
    return function_403e30(v1);
}
// Address range: 0x403e90 - 0x403ec6
int64_t function_403e90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403eb8
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403ea1
    if (a2 != 0 != (mem == NULL)) {
        // 0x403eb0
        return (int64_t)mem;
    }
    // 0x403ec1
    function_404080(a1);
    // UNREACHABLE
}
// Address range: 0x403ed0 - 0x403ef1
int64_t function_403ed0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403ed3
    int64_t v2 = v1; // 0x403ed3
    if (v2 < 0) {
        // 0x403eeb
        function_404080(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403ee9
        return function_403e90(a1, v2);
    }
    // 0x403eeb
    function_404080(a1);
    // UNREACHABLE
}
// Address range: 0x403f00 - 0x403f86
int64_t function_403f00(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403f5b
            function_404080(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403e90(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403f43
    if (a2 == 0) {
        // 0x403f68
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403f48
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403f5b
        function_404080(a1);
        // UNREACHABLE
    }
    // 0x403f2a
    *(int64_t *)a2 = v2;
    return function_403e90(a1, v2 * a3);
}
// Address range: 0x403f90 - 0x403fe0
int64_t function_403f90(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x403f90
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x403fda
            function_404080(a1);
            // UNREACHABLE
        }
        // 0x403fb2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403e90(a1, v1);
    }
    if (a2 == 0) {
        // 0x403fc5
        *(int64_t *)a2 = 128;
        return function_403e90(0, 128);
    }
    // 0x403fd8
    if (a2 < 0) {
        // 0x403fda
        function_404080(a1);
        // UNREACHABLE
    }
    // 0x403fb2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403e90(a1, v1);
}
// Address range: 0x403fe0 - 0x403ff7
int64_t function_403fe0(int64_t a1, int64_t a2) {
    // 0x403fe0
    return (int64_t)memset((int64_t *)function_403e30(a1), 0, (int32_t)a1);
}
// Address range: 0x404000 - 0x40402e
int64_t function_404000(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404007
    if ((int64_t)v1 < 0) {
        // 0x404029
        function_404080(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404029
        function_404080(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40401a
    if (mem != NULL) {
        // 0x404024
        return (int64_t)mem;
    }
    // 0x404029
    function_404080(nmemb);
    // UNREACHABLE
}
// Address range: 0x404030 - 0x404058
int64_t function_404030(int64_t a1, int64_t a2) {
    int64_t v1 = function_403e30(a2); // 0x40403f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404060 - 0x404073
int64_t function_404060(int64_t str) {
    // 0x404060
    return function_404030(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404080 - 0x4040b1
int64_t function_404080(int64_t a1) {
    // 0x404080
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4040c0 - 0x40419f
int64_t function_4040c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4040cc
    uint32_t v2 = *v1; // 0x4040cc
    int64_t v3 = a2 & 0xffffffff; // 0x4040d1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4040d4
    uint64_t v5 = (int64_t)*v4; // 0x4040d4
    int64_t v6; // 0x404142
    if (v3 <= v5) {
      lab_0x40413c_2:
        // 0x40413c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4040c2
    int64_t v8 = v2; // 0x4040c0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40413c
        goto lab_0x40413c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4040f8
    int64_t v17; // 0x404106
    int64_t * v18; // 0x404120
    int64_t * v19; // 0x404123
    int64_t v20; // 0x40412e
    int64_t v21; // 0x404106
    while ((v16 & 0xffffffff) > v10) {
        // 0x404103
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404120
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404137
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40413c
            goto lab_0x40413c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40413c
            goto lab_0x40413c_2;
        }
        // 0x4040f2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40417b
    int64_t * v23 = (int64_t *)v22; // 0x404180
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404183
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404180
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404197
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4040ed
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40413c
            goto lab_0x40413c_2;
        }
        // 0x4040f2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404103
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404120
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404137
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40413c
                goto lab_0x40413c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40413c
                goto lab_0x40413c_2;
            }
            // 0x4040f2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404160
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404180
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404197
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40413c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4041a0 - 0x4047bc
int64_t function_4041a0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4041bf
    int64_t v2 = *v1; // 0x4041bf
    char * str2 = (char *)v2; // 0x4041cc
    char c = *str2; // 0x4041cc
    int64_t v3 = v2; // 0x4041f8
    int64_t v4 = 0; // 0x4041a0
    int32_t v5; // 0x4041a0
    int64_t v6; // 0x4041a0
    int64_t v7; // 0x4041a0
    int64_t v8; // 0x4041a0
    int64_t v9; // 0x4041a0
    int64_t v10; // 0x4041a0
    int64_t v11; // 0x4041a0
    int64_t v12; // 0x4041a0
    int64_t v13; // 0x4041a0
    int64_t str3; // 0x4041a0
    int64_t v14; // 0x4041a0
    int64_t v15; // 0x4041a0
    int64_t v16; // 0x4041a0
    int64_t v17; // 0x4041a0
    int32_t v18; // 0x4041a0
    int32_t v19; // 0x4041a0
    int32_t v20; // 0x4041a0
    int32_t v21; // 0x4041a0
    int32_t v22; // 0x4041a0
    int32_t v23; // 0x4041a0
    int32_t v24; // 0x4041a0
    int32_t v25; // 0x4041a0
    int32_t v26; // 0x4041a0
    int32_t v27; // 0x4041a0
    int32_t v28; // 0x4041a0
    int32_t v29; // 0x4041a0
    int64_t nmemb; // 0x4041a0
    int64_t v30; // 0x4041a0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4041fc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4041f8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404208
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40420e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4041d8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40423c
                int64_t v34; // 0x4041a0
                int64_t v35; // 0x4041a0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404245
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4043c0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404256
                int64_t v37 = *(int64_t *)v36; // 0x40425a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404230
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404245
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4043c0;
                        }
                    }
                    // 0x404256
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
                  lab_0x4042a6:
                    // 0x4042a6
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
                        goto lab_0x404300;
                    } else {
                        if (v11 == 0) {
                            // 0x404470
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404300;
                        } else {
                            if (v39 == 0) {
                                // 0x404420
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4042ca;
                                } else {
                                    // 0x40442c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4042ca;
                                    } else {
                                        // 0x40443a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4042ca;
                                        } else {
                                            goto lab_0x404300;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4042ca;
                            }
                        }
                    }
                }
              lab_0x404311:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4044e6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404692
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x4046b2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4046ff
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404719
                            int64_t v45; // 0x40471b
                            if (*(char *)v42 != 0) {
                                // 0x40471b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404713
                            while (v17 + nmemb != v42) {
                                // 0x404715
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40471b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404708
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404740
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x4044f4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40464f
                        free((int64_t *)v17);
                    }
                    // 0x404549
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404560
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40440e
                    return 63;
                }
                // 0x404330
                v5 = v39;
                if (v13 != 0) {
                    // 0x4043b4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4043c0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4043d0
                    uint32_t v50 = *v49; // 0x4043d0
                    int64_t v51 = v50; // 0x4043d0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4043da
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4043e3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40460f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4045ba
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40440e
                            return 63;
                        }
                        // 0x404458
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40476f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40466d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404680
                                // 0x40440e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40457e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404592
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4043fb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4043fe
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404402
                    int64_t result = v59; // 0x404408
                    if (v58 != 0) {
                        // 0x40440a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40440e
                    return result;
                }
            } else {
                // 0x40420e
                v5 = v32;
            }
            // break -> 0x404335
            break;
        }
    }
    // 0x404335
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40434d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404357
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40440e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404499
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404386
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404396
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404300:
    // 0x404300
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404300
    int64_t v63 = *(int64_t *)v62; // 0x404304
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404311
        goto lab_0x404311;
    }
    goto lab_0x4042a6;
  lab_0x4042ca:
    // 0x4042ca
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4041a0
    int32_t v65; // 0x4041a0
    int32_t v66; // 0x4041a0
    if (v27 != 0) {
        goto lab_0x404300;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404480
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404300;
            } else {
                goto lab_0x4042f1;
            }
        } else {
            // 0x4042e5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4045dc
                int64_t v67 = (int64_t)mem; // 0x4045dc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404300;
                } else {
                    // 0x4045ef
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4042f1;
                }
            } else {
                goto lab_0x4042f1;
            }
        }
    }
  lab_0x4042f1:
    // 0x4042f1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404300;
}
// Address range: 0x4047c0 - 0x404d86
int64_t function_4047c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4047e1
    if (v3 < 1) {
        // 0x40499e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4047dd
    int32_t v5 = *(int32_t *)a7; // 0x4047e9
    uint64_t v6 = a1 & 0xffffffff; // 0x4047eb
    int64_t v7 = v2; // 0x4047f0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4047f3
    *v8 = 0;
    int64_t v9; // 0x4047c0
    int64_t v10; // 0x4047c0
    int64_t v11; // 0x4047c0
    int64_t v12; // 0x4047c0
    int64_t str; // 0x4047c0
    int64_t v13; // 0x4047c0
    int64_t v14; // 0x4047c0
    int64_t v15; // 0x4047c0
    int64_t v16; // 0x4047c0
    int64_t v17; // 0x4047c0
    int32_t v18; // 0x4047c0
    char v19; // 0x4047c0
    if (v5 == 0) {
        // 0x4049d8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40480a;
    } else {
        // 0x404803
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404850
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404853
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404918;
            } else {
                int64_t v22 = v7 + 1; // 0x404866
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404876
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40492c;
                } else {
                    goto lab_0x404888;
                }
            }
        } else {
            goto lab_0x40480a;
        }
    }
  lab_0x40480a:
    // 0x40480a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404810
    *v24 = 0;
    int64_t v25; // 0x4047c0
    int64_t v26; // 0x4047c0
    int64_t v27; // 0x4047c0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404900
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40490d;
        }
        case 43: {
            // 0x404c10
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40490d;
        }
        default: {
            // 0x40482c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404b8f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404ca8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40490d;
                } else {
                    // 0x404b9d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40483a;
                }
            } else {
                goto lab_0x40483a;
            }
        }
    }
  lab_0x404918:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40491f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404888;
    } else {
        goto lab_0x40492c;
    }
  lab_0x40483a:
    // 0x40483a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40490d;
  lab_0x40490d:
    // 0x40490d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404918;
  lab_0x404888:;
    uint32_t v30 = *(int32_t *)a7; // 0x404888
    int64_t v31 = v30; // 0x404888
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40488a
    if ((int64_t)*v32 > v31) {
        // 0x40488f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404892
    if (*v33 > v30) {
        // 0x404897
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40489a
    int64_t v35 = v31; // 0x40489e
    int64_t v36 = v15; // 0x40489e
    int64_t v37; // 0x4047c0
    int64_t v38; // 0x4047c0
    int64_t v39; // 0x4047c0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404a08
        int64_t v41 = v40; // 0x404a08
        v2 = v41;
        int64_t v42; // 0x4047c0
        if (*v33 == v40) {
            // 0x404bf0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404bf8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404a14
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404a28
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404a31
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404a3a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404a51
            int64_t v47 = v45 & 0xffffffff; // 0x404a55
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404a5e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404a64
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404a66;
                }
            }
            int64_t v48 = v47 + 1; // 0x404a40
            int64_t v49 = v48 & 0xffffffff; // 0x404a40
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404a51
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404a5e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404a64
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404a66;
                    }
                }
                // 0x404a40
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404c08
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404a66;
    } else {
        goto lab_0x4048a4;
    }
  lab_0x40492c:
    // 0x40492c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40492f
    int64_t v51 = v12; // 0x40492f
    int64_t v52 = v14; // 0x40492f
    if (*(char *)v10 == 0) {
        goto lab_0x404888;
    } else {
        goto lab_0x404935;
    }
  lab_0x4048a4:;
    int32_t v53 = v35; // 0x4048a4
    int64_t v54; // 0x4047c0
    int64_t v55; // 0x4047c0
    int64_t v56; // 0x4047c0
    int64_t v57; // 0x4047c0
    int64_t v58; // 0x4047c0
    int64_t v59; // 0x4047c0
    char * v60; // 0x4047c0
    int64_t v61; // 0x4047c0
    int64_t v62; // 0x4048b9
    int64_t v63; // 0x4047c0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4049f3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4049f6;
    } else {
        // 0x4048ac
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4047c0
        int64_t v66 = v65 ? -1 : 1; // 0x4048c0
        int64_t v67 = (int64_t)"--"; // 0x4047c0
        int64_t v68 = v62; // 0x4047c0
        int64_t v69 = 3; // 0x4048c0
        unsigned char v70 = *(char *)v68; // 0x4048c0
        char v71 = *(char *)v67; // 0x4048c0
        char v72 = v71; // 0x4048c0
        bool v73 = false; // 0x4048c0
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
            // 0x4049b0
            if (*(char *)v62 == 45) {
                // 0x404a70
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404a70
                if (c == 0) {
                    goto lab_0x4049ba;
                } else {
                    // 0x404a7d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404b00;
                    } else {
                        if (c == 45) {
                            // 0x404ce3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404b55;
                        } else {
                            // 0x404a8e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404b00;
                            } else {
                                // 0x404a93
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404ab4;
                                } else {
                                    // 0x404a9a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404b00;
                                    } else {
                                        goto lab_0x404ab4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4049ba;
            }
        } else {
            uint32_t v75 = *v33; // 0x4048d0
            v2 = v75;
            int32_t v76 = *v32; // 0x4048d3
            int64_t v77 = v35 + 1; // 0x4048d6
            int32_t v78 = v77; // 0x4048d9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404c40
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4048e7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4048f5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4049f6;
        }
    }
  lab_0x404935:;
    // 0x404935
    int64_t v79; // bp-104, 0x4047c0
    int64_t v80 = &v79; // 0x4047ca
    int64_t v81 = v50 + 1; // 0x404935
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40493c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404941
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404945
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404949
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404951
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404956
    int32_t c2 = v84; // 0x404956
    char * found_char_pos = strchr(str2, c2); // 0x404956
    int64_t v87 = *v82; // 0x40495b
    v2 = v87;
    int64_t v88 = *v85; // 0x404965
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404970
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404c60
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404c2d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40499e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404956
    char v91 = *(char *)(v90 + 1); // 0x40498b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404945
        if (v91 != 58) {
            // 0x40499e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404bb4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404cb8
                *v8 = 0;
            } else {
                // 0x404c9c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404bde
            *v83 = 0;
            // 0x40499e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404bbe
        if (v93 != 0) {
            // 0x404c50
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404bde
            *v83 = 0;
            // 0x40499e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404bd1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404bde
            *v83 = 0;
            // 0x40499e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404d1a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404cca
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404cd1
        // 0x404bde
        *v83 = 0;
        // 0x40499e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404b29
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404b2b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404d50
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404d01
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404d08
            // 0x40499e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404b36
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404b3a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404b55;
  lab_0x404a66:
    // 0x404a66
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4048a4;
  lab_0x404b55:;
    int64_t v99 = function_4041a0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404b73
    // 0x40499e
    return v99 & 0xffffffff;
  lab_0x4049f6:;
    int32_t v100 = v55; // 0x4049f6
    if (v100 != (int32_t)v59) {
        // 0x4049fa
        *(int32_t *)a7 = v100;
    }
    // 0x40499e
    return 0xffffffff;
  lab_0x4049ba:
    // 0x4049ba
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4049c1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40499e
    return v99 & 0xffffffff;
  lab_0x404b00:
    // 0x404b00
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404935;
  lab_0x404ab4:
    // 0x404ab4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4041a0(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x404ada
    if ((int32_t)v101 != -1) {
        // 0x40499e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404aef
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404b00;
}
// Address range: 0x404d90 - 0x404de6
int64_t function_404d90(int64_t a1) {
    // 0x404d90
    *(int32_t *)&g42 = g27;
    *(int32_t *)&g43 = g26;
    int64_t v1; // 0x404d90
    int64_t result = function_4047c0(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x404db6
    g27 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g25 = g44;
    return result;
}
// Address range: 0x404df0 - 0x404e08
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404df0
    return function_404d90(1);
}
// Address range: 0x404e10 - 0x404e23
int64_t function_404e10(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x404e10
    return function_404d90(0);
}
// Address range: 0x404e30 - 0x404e45
int64_t function_404e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e30
    return function_4047c0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404e50 - 0x404e66
int64_t function_404e50(void) {
    // 0x404e50
    return function_404d90(0);
}
// Address range: 0x404e70 - 0x404e88
int64_t function_404e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e70
    return function_4047c0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x404e90 - 0x404f0a
int64_t function_404e90(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x404e9b
    int64_t v2 = (int64_t)&g11; // 0x404e9b
    int32_t * pwc; // 0x404e90
    int64_t v3; // 0x404e90
    int64_t n; // 0x404e90
    if (a2 == 0) {
        goto lab_0x404ee2;
    } else {
        // 0x404e9d
        if (a3 == 0) {
            // 0x404ec8
            return -2;
        }
        // 0x404ea9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x404ee2;
        } else {
            goto lab_0x404eb4;
        }
    }
  lab_0x404ee2:
    // 0x404ee2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x404e90
    pwc = (int32_t *)&v4;
    goto lab_0x404eb4;
  lab_0x404eb4:;
    char * wstr = (char *)v3; // 0x404eba
    int64_t ps; // 0x404e90
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x404eba
    int64_t result = v5; // 0x404eba
    if (v5 < 0xfffffffe) {
        // 0x404ec8
        return result;
    }
    int64_t result2 = result; // 0x404ef9
    if ((char)function_404f70(0, v3) == 0) {
        // 0x404efb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404ec8
    return result2;
}
// Address range: 0x404f10 - 0x404f6d
int64_t function_404f10(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404f17
    int64_t v2; // 0x404f10
    int64_t result = function_405540(a1, v2); // 0x404f28
    if ((v2 & 32) != 0) {
        // 0x404f50
        if ((int32_t)result == 0) {
            // 0x404f54
            *__errno_location() = 0;
        }
        // 0x404f4a
        return 0xffffffff;
    }
    // 0x404f31
    if ((int32_t)result == 0) {
        // 0x404f4a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x404f38
    if (v1 == 0) {
        // 0x404f3a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x404f4a
    return result2;
}
// Address range: 0x404f70 - 0x404fce
int64_t function_404f70(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x404f76
    if (locale == NULL) {
        // 0x404fa3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x404f76
    bool v2; // 0x404f70
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x404f70
    int64_t v5 = v1; // 0x404f70
    int64_t v6 = 2; // 0x404f95
    unsigned char v7 = *(char *)v5; // 0x404f95
    char v8 = *(char *)v4; // 0x404f95
    char v9 = v8; // 0x404f95
    bool v10 = false; // 0x404f95
    while (v7 == v8) {
        // 0x404f88
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
    int64_t v12 = (int64_t)"POSIX"; // 0x404fa1
    int64_t v13 = v1; // 0x404fa1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x404fa3
        return 0;
    }
    int64_t v14 = 6; // 0x404fa1
    unsigned char v15 = *(char *)v13; // 0x404fbd
    char v16 = *(char *)v12; // 0x404fbd
    char v17 = v16; // 0x404fbd
    bool v18 = false; // 0x404fbd
    while (v15 == v16) {
        // 0x404fb0
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
// Address range: 0x404fd0 - 0x405532
int64_t function_404fd0(void) {
    char * v1 = nl_langinfo(14); // 0x404fe6
    char * v2 = g46; // 0x404feb
    char * v3; // 0x404fd0
    int64_t v4; // 0x404fd0
    int64_t v5; // 0x404fd0
    int64_t v6; // 0x404fd0
    int64_t v7; // 0x404fd0
    int32_t size; // 0x404fd0
    int32_t size2; // 0x404fd0
    int32_t len; // 0x4050a2
    int64_t v8; // 0x4050a2
    char * env_val; // 0x40508d
    if (v2 == NULL) {
        // 0x405088
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4050f5;
        } else {
            // 0x40509a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4050f5;
            } else {
                // 0x40509f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40508d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405525
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4050f5;
                    } else {
                        // 0x405499
                        size2 = len + 14;
                        goto lab_0x4050bb;
                    }
                } else {
                    goto lab_0x4050bb;
                }
            }
        }
    } else {
        // 0x404fd0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40500a;
    }
  lab_0x40533c:;
    // 0x40533c
    struct _IO_FILE * stream; // 0x40517b
    int32_t v10 = __uflow(stream); // 0x40533f
    int64_t v11; // 0x404fd0
    int64_t v12 = v11; // 0x405349
    int64_t v13; // 0x404fd0
    int64_t v14 = v13; // 0x405349
    int32_t v15 = v10; // 0x405349
    int64_t v16; // 0x404fd0
    int64_t v17 = v16; // 0x405349
    int64_t v18 = v11; // 0x405349
    int64_t v19 = v13; // 0x405349
    int64_t v20 = v16; // 0x405349
    if (v10 == -1) {
        // break -> 0x40534f
        goto lab_0x40534f;
    }
    goto lab_0x4051c9;
  lab_0x4051be:;
    // 0x4051be
    int64_t v90; // 0x404fd0
    int64_t * v32; // 0x4051b0
    *v32 = v90 + 1;
    int64_t v89; // 0x404fd0
    v12 = v89;
    int64_t v91; // 0x404fd0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x404fd0
    v17 = v92;
    goto lab_0x4051c9;
  lab_0x4051c9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x404fd0
    int32_t v25; // bp-120, 0x404fd0
    int32_t v26; // bp-184, 0x404fd0
    int64_t v27; // 0x40517b
    int64_t v28; // 0x405198
    int64_t v29; // 0x40519d
    int64_t * v30; // 0x4051b4
    switch (c) {
        case 32: {
            goto lab_0x4051b0;
        }
        case 10: {
            goto lab_0x4051b0;
        }
        case 9: {
            goto lab_0x4051b0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4053a1
            int32_t v33; // 0x404fd0
            char v34; // 0x404fd0
            int32_t v35; // 0x4053ae
            if (v31 < *v30) {
                // 0x405380
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4053ab
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4053a1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405380
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4053ab
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405390
                v36 = v33;
            }
            // 0x40547f
            if (v36 == -1) {
                // break -> 0x40534f
                break;
            }
            goto lab_0x4051b0;
        }
        default: {
            // 0x4051df
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40534f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405208
            int64_t v39 = v37 + 4; // 0x40520a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405216
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405218
            while (v41 == 0) {
                // 0x405208
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405236
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405242
            int64_t v45 = v43 + 4; // 0x405244
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405250
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405252
            while (v47 == 0) {
                // 0x405242
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40523f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405268
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405278
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40527c
            int64_t v52 = v51 + v48; // 0x405285
            int64_t * mem; // 0x404fd0
            int64_t v53; // 0x404fd0
            int64_t v54; // 0x404fd0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4053bb
                int64_t v56 = v55 + 3; // 0x4053c7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4052a1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4052b0
            if (mem == NULL) {
                // 0x4054dc
                free((int64_t *)v21);
                function_405540(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x405154;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4052c8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4052d2
            uint32_t v62 = (int32_t)v59; // 0x4052d5
            int64_t v63; // 0x404fd0
            if (v62 >= 8) {
                // 0x4053e4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4053fe
                int64_t v66 = v61 - v65; // 0x405402
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40540d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40541e
                    int64_t v70 = v69 & 0xffffffff; // 0x40541e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40541b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4054af
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4052e7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4052eb
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
            int64_t v73 = v51 + 1; // 0x4052fb
            int64_t v74 = v60 - 1; // 0x4052ff
            uint32_t v75 = (int32_t)v73; // 0x405304
            int64_t v76; // 0x404fd0
            if (v75 >= 8) {
                // 0x405432
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40543c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40544c
                int64_t v80 = v74 - v79; // 0x405450
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40545b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40546b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405469
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4054c6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4054ce
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405316
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40531a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405513
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40532e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4051be;
            } else {
                goto lab_0x40533c;
            }
        }
    }
  lab_0x4051b0:;
    int64_t v93 = v23; // 0x404fd0
    int64_t v94 = v22; // 0x404fd0
    int64_t v95 = v21; // 0x404fd0
    goto lab_0x4051b0_2;
  lab_0x4050f5:;
    int64_t * mem3 = malloc(size); // 0x4050f5
    int64_t v97 = (int64_t)&g11; // 0x405100
    int64_t v98; // 0x404fd0
    int64_t path; // 0x404fd0
    if (mem3 == NULL) {
        goto lab_0x4050d2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4050f5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405116;
    }
  lab_0x40500a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x404ffd
    char v100 = *v3; // 0x40500a
    int64_t v101; // 0x404fd0
    if (v100 == 0) {
        // 0x405064
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x404fd0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x404fd0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405050
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405057;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405020
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40502d
        char v107 = *(char *)v106; // 0x405032
        v102 = v107;
        if (v107 == 0) {
            // 0x405064
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40503b
    v104 = v103 + 1;
  lab_0x405057:
    // 0x405064
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4050d2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40500a;
  lab_0x405116:;
    int64_t v109 = v98 + path; // 0x405116
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405142
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x405171
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4054a2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x405195
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4051b0_2:;
                uint64_t v96 = *v32; // 0x4051b0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40533c;
                } else {
                    goto lab_0x4051be;
                }
            }
          lab_0x40534f:
            // 0x40534f
            function_405540(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x40536e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405154;
  lab_0x4050bb:;
    int64_t * mem4 = malloc(size2); // 0x4050bb
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x405161
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405116;
    } else {
        goto lab_0x4050d2;
    }
  lab_0x405154:
    // 0x405154
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4050d2;
}
// Address range: 0x405540 - 0x4055bb
int64_t function_405540(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405547
    if (fileno(stream) < 0) {
        // 0x4055a7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40555a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40558b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4055a7
            return fclose(stream);
        }
    }
    // 0x40555c
    if ((int32_t)function_4055c0(a1, v1) == 0) {
        // 0x4055a7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405568
    int32_t v3 = *v2; // 0x405570
    int64_t result = fclose(stream); // 0x40557e
    if (v3 != 0) {
        // 0x4055b0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405580
    return result;
}
// Address range: 0x4055c0 - 0x405600
int64_t function_4055c0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4055da
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4055da
        return fflush(stream);
    }
    // 0x4055e8
    function_405600(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405600 - 0x405657
int64_t function_405600(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405600
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40560a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40563b
    int64_t result = -1; // 0x405644
    if (v1 != -1) {
        // 0x405646
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405652
    return result;
}
// Address range: 0x405660 - 0x4056bd
int64_t function_405660(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405660
    return function_4012a8();
}
// Address range: 0x4056c0 - 0x4056c1
int64_t function_4056c0(void) {
    // 0x4056c0
    int64_t result; // 0x4056c0
    return result;
}
// Address range: 0x4056d0 - 0x4056e8
int64_t function_4056d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4056d0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x4056e8 - 0x405708
int64_t function_4056e8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x4056f2
    while (*(int64_t *)v1 != -1) {
        // 0x4056f3
        v1 -= 8;
    }
    // 0x405704
    return result;
}
