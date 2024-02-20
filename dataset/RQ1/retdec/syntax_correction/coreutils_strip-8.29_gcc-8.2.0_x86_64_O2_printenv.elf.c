#include "decompile_retdec.h"
// Address range: 0x4015c0 - 0x4015c5
int64_t function_4015c0(void) {
    // 0x4015c0
    abort();
    // UNREACHABLE
}
// Address range: 0x4015c5 - 0x4015ca
int64_t function_4015c5(void) {
    // 0x4015c5
    abort();
    // UNREACHABLE
}
// Address range: 0x4015ca - 0x4015cf
int64_t function_4015ca(void) {
    // 0x4015ca
    abort();
    // UNREACHABLE
}
// Address range: 0x4015cf - 0x4015d4
int64_t function_4015cf(void) {
    // 0x4015cf
    abort();
    // UNREACHABLE
}
// Address range: 0x4015d4 - 0x4015d9
int64_t function_4015d4(void) {
    // 0x4015d4
    abort();
    // UNREACHABLE
}
// Address range: 0x4015d9 - 0x4015de
int64_t function_4015d9(void) {
    // 0x4015d9
    abort();
    // UNREACHABLE
}
// Address range: 0x4015e0 - 0x4017da
int64_t function_4015e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x4015ec
    function_401ca0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g18 = 2;
    int64_t v2; // 0x4015e0
    function_405720(0x401c00, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    char v3 = 0; // 0x401635
    int64_t v4; // 0x4015e0
    int64_t v5; // 0x4015e0
    int64_t v6; // 0x4015e0
    int64_t v7; // 0x4015e0
    while (true) {
      lab_0x40163a:;
        char v8 = v3;
        int64_t v9 = function_404e60(v1, a2, "+iu:0", &g2, 0, v2); // 0x40164c
        v3 = 1;
        switch ((int32_t)v9) {
            case -1: {
                int64_t v10 = (int64_t)*(int32_t *)0x60921c; // 0x4016b8
                if (v1 <= v10) {
                    int64_t v11 = *(int64_t *)g29; // 0x4016ed
                    if (v11 == 0) {
                        // 0x4016fa
                        return 0;
                    }
                    int64_t v12 = g29; // 0x4016e9
                    __printf_chk(1, "%s%c", (char *)v11, v8 == 0 ? 10 : 0);
                    v12 += 8;
                    int64_t v13 = *(int64_t *)v12; // 0x4016ed
                    while (v13 != 0) {
                        // 0x4016d6
                        __printf_chk(1, "%s%c", (char *)v13, v8 == 0 ? 10 : 0);
                        v12 += 8;
                        v13 = *(int64_t *)v12;
                    }
                    // 0x4016fa
                    return 0;
                }
                int64_t v14 = v10; // 0x40171c
                int64_t v15 = 0;
                int64_t * str = (int64_t *)(8 * v14 + a2); // 0x401729
                int64_t v16 = v15; // 0x40173a
                int64_t v17; // 0x4015e0
                int64_t v18; // 0x4015e0
                char v19; // 0x4015e0
                char v20; // 0x4015e0
                int64_t v21; // 0x4015e0
                int64_t v22; // 0x4015e0
                int64_t v23; // 0x4015e0
                int64_t v24; // 0x4015e0
                int64_t v25; // 0x4015e0
                int64_t v26; // 0x401746
                char v27; // 0x401752
                char v28; // 0x401767
                int64_t v29; // 0x40176f
                int64_t v30; // 0x401773
                char v31; // 0x40177c
                char v32; // 0x401784
                if (strchr((char *)*str, 61) == NULL) {
                    // 0x40173c
                    v26 = *(int64_t *)g29;
                    v4 = v26;
                    v5 = g29;
                    v6 = 0;
                    if (v26 != 0) {
                        while (true) {
                            // 0x40174e
                            v18 = v6;
                            v17 = v4;
                            v27 = *(char *)v17;
                            v7 = v18;
                            if (v27 != 0) {
                                // 0x401767
                                v19 = v27;
                                v24 = *str;
                                v21 = v17;
                                v28 = *(char *)v24;
                                v22 = v21;
                                v25 = v24;
                                v32 = v28;
                                v20 = v19;
                                v7 = v18;
                                while (v28 != 0) {
                                    // 0x401767
                                    v7 = v18;
                                    if (v32 != v20) {
                                        // break (via goto) -> 0x401794
                                        goto lab_0x401794;
                                    }
                                    // 0x40177c
                                    v23 = v22;
                                    v29 = v23 + 1;
                                    v30 = v25 + 1;
                                    v31 = *(char *)v29;
                                    while (v31 == 61) {
                                        // 0x401784
                                        v32 = *(char *)v30;
                                        v22 = v29;
                                        v25 = v30;
                                        v20 = v31;
                                        if (v32 == 0) {
                                            // 0x4017a2
                                            __printf_chk(1, "%s%c", (char *)(v23 + 2), v8 == 0 ? 10 : 0);
                                            v7 = 1;
                                            goto lab_0x401794;
                                        }
                                        v7 = v18;
                                        if (v32 != v20) {
                                            // break (via goto) -> 0x401794
                                            goto lab_0x401794;
                                        }
                                        // 0x40177c
                                        v23 = v22;
                                        v29 = v23 + 1;
                                        v30 = v25 + 1;
                                        v31 = *(char *)v29;
                                    }
                                    // 0x401763
                                    v19 = v31;
                                    v24 = v30;
                                    v21 = v29;
                                    v7 = v18;
                                    if (v31 == 0) {
                                        // break -> 0x401794
                                        break;
                                    }
                                    v28 = *(char *)v24;
                                    v22 = v21;
                                    v25 = v24;
                                    v32 = v28;
                                    v20 = v19;
                                    v7 = v18;
                                }
                            }
                            goto lab_0x401794;
                        }
                    }
                    // 0x40179a
                    v16 = v15 & 0xffffffff;
                }
                int64_t v33 = v16;
                v14++;
                while (v14 != v1) {
                    // 0x401729
                    v15 = v33;
                    str = (int64_t *)(8 * v14 + a2);
                    v16 = v15;
                    if (strchr((char *)*str, 61) == NULL) {
                        // 0x40173c
                        v26 = *(int64_t *)g29;
                        v4 = v26;
                        v5 = g29;
                        v6 = 0;
                        if (v26 != 0) {
                            while (true) {
                                // 0x40174e
                                v18 = v6;
                                v17 = v4;
                                v27 = *(char *)v17;
                                v7 = v18;
                                if (v27 != 0) {
                                    // 0x401767
                                    v19 = v27;
                                    v24 = *str;
                                    v21 = v17;
                                    v28 = *(char *)v24;
                                    v22 = v21;
                                    v25 = v24;
                                    v32 = v28;
                                    v20 = v19;
                                    v7 = v18;
                                    while (v28 != 0) {
                                        // 0x401767
                                        v7 = v18;
                                        if (v32 != v20) {
                                            // break (via goto) -> 0x401794
                                            goto lab_0x401794;
                                        }
                                        // 0x40177c
                                        v23 = v22;
                                        v29 = v23 + 1;
                                        v30 = v25 + 1;
                                        v31 = *(char *)v29;
                                        while (v31 == 61) {
                                            // 0x401784
                                            v32 = *(char *)v30;
                                            v22 = v29;
                                            v25 = v30;
                                            v20 = v31;
                                            if (v32 == 0) {
                                                // 0x4017a2
                                                __printf_chk(1, "%s%c", (char *)(v23 + 2), v8 == 0 ? 10 : 0);
                                                v7 = 1;
                                                goto lab_0x401794;
                                            }
                                            v7 = v18;
                                            if (v32 != v20) {
                                                // break (via goto) -> 0x401794
                                                goto lab_0x401794;
                                            }
                                            // 0x40177c
                                            v23 = v22;
                                            v29 = v23 + 1;
                                            v30 = v25 + 1;
                                            v31 = *(char *)v29;
                                        }
                                        // 0x401763
                                        v19 = v31;
                                        v24 = v30;
                                        v21 = v29;
                                        v7 = v18;
                                        if (v31 == 0) {
                                            // break -> 0x401794
                                            break;
                                        }
                                        v28 = *(char *)v24;
                                        v22 = v21;
                                        v25 = v24;
                                        v32 = v28;
                                        v20 = v19;
                                        v7 = v18;
                                    }
                                }
                                goto lab_0x401794;
                            }
                        }
                        // 0x40179a
                        v16 = v15 & 0xffffffff;
                    }
                    // 0x40171c
                    v33 = v16;
                    v14++;
                }
                // 0x4016fa
                return (int32_t)a1 - g26 != (int32_t)v33;
            }
            case -130: {
                // 0x4017d3
                function_4018c0(0);
                // UNREACHABLE
            }
            case 48: {
                goto lab_0x40163a;
            }
            case -131: {
                // 0x401680
                function_403d40((int64_t)g28, "printenv", "GNU coreutils", (int64_t)g17, "David MacKenzie", "Richard Mlynarik");
                exit(0);
                // UNREACHABLE
            }
            default: {
                goto lab_0x401673;
            }
        }
    }
  lab_0x401673:
    // 0x401673
    function_4018c0(2);
    // UNREACHABLE
  lab_0x401794:;
    int64_t v34 = v5 + 8; // 0x401794
    int64_t v35 = *(int64_t *)v34; // 0x401746
    v4 = v35;
    v5 = v34;
    v6 = v7;
    if (v35 == 0) {
        // break -> 0x40179a
        goto lab_0x40179a;
    }
    goto lab_0x40174e;
}
// Address range: 0x4017e0 - 0x40180b
// Address range: 0x40180b - 0x40182a
int64_t function_40180b(void) {
    // 0x40180b
    return &g27;
}
// Address range: 0x40182a - 0x401861
int64_t function_40182a(void) {
    // 0x40182a
    return 0;
}
// Address range: 0x401861 - 0x4018b8
int64_t function_401861(void) {
    // 0x401861
    if (g32 != 0) {
        // 0x4018b7
        int64_t result; // 0x401861
        return result;
    }
    int64_t v1 = g33; // 0x401894
    int64_t result2; // 0x4018a6
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4018a6
        result2 = function_40180b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401896
        v1++;
    }
    // 0x40188a
    g33 = v1;
    // 0x4018a6
    result2 = function_40180b();
    g32 = 1;
    return result2;
}
// Address range: 0x4018b8 - 0x4018bd
int64_t function_4018b8(void) {
    // 0x4018b8
    return function_40182a();
}
// Address range: 0x4018c0 - 0x401bd5
int64_t function_4018c0(int64_t a1) {
    int32_t status = a1; // 0x4018d6
    if (status != 0) {
        // 0x4018da
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4018ff
        exit(status);
        // UNREACHABLE
    }
    // 0x401906
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [VARIABLE]...\nPrint the values of the specified environment VARIABLE(s).\nIf no VARIABLE is specified, print name and value pairs for them all.\n\n", 5));
    fputs_unlocked(dcgettext(NULL, "  -0, --null     end each output line with NUL, not newline\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x4019b2
    bool v2; // 0x4018c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401a38
    int64_t v6 = *(int64_t *)v5; // 0x401a3c
    int64_t v7 = 9; // 0x401a42
    while (v6 != 0) {
        int64_t v8 = (int64_t)"printenv";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401a4e
        char v11 = *(char *)v9; // 0x401a4e
        char v12 = v11; // 0x401a4e
        bool v13 = false; // 0x401a4e
        while (v10 == v11) {
            // 0x401a44
            v7--;
            int64_t v14 = v9 + v3; // 0x401a4e
            int64_t v15 = v8 + v3; // 0x401a4e
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
            // break -> 0x401a5a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 9;
    }
    // 0x401a5a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401b6c;
        } else {
            // 0x401b56
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401bab
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401abc;
            } else {
                goto lab_0x401b6c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401abc;
        } else {
            // 0x401aa2
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401bab
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401abc;
            } else {
                goto lab_0x401abc;
            }
        }
    }
  lab_0x401b6c:
    // 0x401b6c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401afc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018ff
    exit(status);
    // UNREACHABLE
  lab_0x401abc:
    // 0x401abc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401afc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018ff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401be0 - 0x401be8
int64_t function_401be0(int64_t a1) {
    // 0x401be0
    g35 = a1;
    int64_t result; // 0x401be0
    return result;
}
// Address range: 0x401bf0 - 0x401bf8
int64_t function_401bf0(int64_t a1) {
    // 0x401bf0
    g34 = a1;
    int64_t result; // 0x401bf0
    return result;
}
// Address range: 0x401c00 - 0x401c9e
int64_t function_401c00(void) {
    // 0x401c00
    int32_t * err_num; // 0x401c16
    if ((int32_t)function_404f60((int64_t)g28) == 0) {
        goto lab_0x401c2c;
    } else {
        // 0x401c16
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x401c43;
        } else {
            // 0x401c27
            if (*err_num != 32) {
                goto lab_0x401c43;
            } else {
                goto lab_0x401c2c;
            }
        }
    }
  lab_0x401c2c:;
    int64_t result = function_404f60((int64_t)g31); // 0x401c33
    if ((int32_t)result == 0) {
        // 0x401c3c
        return result;
    }
    // 0x401c7e
    _exit(g18);
    // UNREACHABLE
  lab_0x401c43:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401c4f
    if (g35 == 0) {
        // 0x401c89
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401c63
        error(0, *err_num, "%s: %s", (char *)function_403710((int64_t)g35), v1);
    }
    // 0x401c7e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401ca0 - 0x401d39
int64_t function_401ca0(int64_t str) {
    // 0x401ca0
    if (str == 0) {
        // 0x401d19
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401cae
    int64_t result = (int64_t)found_char_pos; // 0x401cae
    if (found_char_pos == NULL) {
        // 0x401d09
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401cb8
    if (v1 - str < 7) {
        // 0x401d09
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x401cc8
    bool v2; // 0x401ca0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401ca0
    int64_t v5 = result - 6; // 0x401ca0
    int64_t v6 = 7; // 0x401cd6
    unsigned char v7 = *(char *)v5; // 0x401cd6
    char v8 = *(char *)v4; // 0x401cd6
    char v9 = v8; // 0x401cd6
    bool v10 = false; // 0x401cd6
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
    int64_t v12 = (int64_t)"lt-"; // 0x401ce0
    int64_t v13 = v1; // 0x401ce0
    int64_t v14 = 3; // 0x401ce0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401d09
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401cf2
    char v16 = *(char *)v12; // 0x401cf2
    char v17 = v16; // 0x401cf2
    bool v18 = false; // 0x401cf2
    while (v15 == v16) {
        // 0x401ce2
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
    int64_t v20 = v1; // 0x401cfc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401cfe
        v20 = result + 4;
        g27 = v20;
    }
    // 0x401d09
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x401d40 - 0x401e32
int64_t function_401d40(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401d54
    int64_t result = (int64_t)v1; // 0x401d54
    if (result != a1) {
        // 0x401d61
        return result;
    }
    int64_t v2 = function_405020(); // 0x401d70
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401e26
    if (v3 == 85) {
        // 0x401d80
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401e18
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x401dae
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x401dbb
        // 0x401d61
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401e18
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x401dfd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x401e0a
    // 0x401d61
    return result4;
}
// Address range: 0x401e40 - 0x401e97
int64_t function_401e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401e40
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401e88
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401e97 - 0x403061
int64_t function_401e97(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x401ee1
    int64_t v3 = 0; // 0x401ee1
    int64_t v4; // 0x401e97
    int64_t v5; // 0x401e97
    int64_t v6; // 0x401e97
    int64_t v7; // 0x401e97
    int64_t v8; // 0x401e97
    int64_t v9; // 0x401e97
    int64_t v10; // 0x401e97
    int64_t v11; // 0x401e97
    int64_t v12; // 0x401e97
    int64_t v13; // 0x401e97
    int64_t v14; // 0x401e97
    int64_t v15; // 0x401e97
    int64_t v16; // 0x401e97
    int64_t v17; // 0x401e97
    int64_t v18; // 0x401e97
    int64_t result; // 0x401e97
    int64_t v19; // 0x401e97
    int32_t wc; // bp+132, 0x401e97
    int64_t ps; // bp+136, 0x401e97
    char v20; // 0x402450
    int64_t v21; // 0x402450
    int64_t v22; // 0x4027f8
    int64_t v23; // 0x401e97
    int64_t v24; // 0x402817
    int32_t v25; // 0x401e97
    while (true) {
      lab_0x401ee8_2:
        // 0x401ee8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401e97
        int64_t v27; // 0x401f1c
        while (true) {
          lab_0x401ee8:
            // 0x401ee8
            v5 = v26;
            bool v28 = v15 == v5; // 0x401ef3
            if (v15 == -1) {
                // 0x401ef5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x401f03
            if (v28) {
                // break (via goto) -> 0x402668
                goto lab_0x402668;
            }
            // 0x401f0c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g47 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4024fb
                    if (v25 % 2 == 0) {
                        goto lab_0x402041;
                    }
                    // 0x40291d
                    v26 = v5 + 1;
                    goto lab_0x401ee8;
                }
                case 7: {
                    goto lab_0x402041;
                }
                case 8: {
                    goto lab_0x402041;
                }
                case 9: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402041;
                }
                case 12: {
                    goto lab_0x402041;
                }
                case 13: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40200d;
                }
                case 36: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402041;
                }
                case 38: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402041;
                }
                case 44: {
                    goto lab_0x402041;
                }
                case 45: {
                    goto lab_0x402041;
                }
                case 46: {
                    goto lab_0x402041;
                }
                case 47: {
                    goto lab_0x402041;
                }
                case 48: {
                    goto lab_0x402041;
                }
                case 49: {
                    goto lab_0x402041;
                }
                case 50: {
                    goto lab_0x402041;
                }
                case 51: {
                    goto lab_0x402041;
                }
                case 52: {
                    goto lab_0x402041;
                }
                case 53: {
                    goto lab_0x402041;
                }
                case 54: {
                    goto lab_0x402041;
                }
                case 55: {
                    goto lab_0x402041;
                }
                case 56: {
                    goto lab_0x402041;
                }
                case 57: {
                    goto lab_0x402041;
                }
                case 58: {
                    goto lab_0x402041;
                }
                case 59: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402041;
                }
                case 66: {
                    goto lab_0x402041;
                }
                case 67: {
                    goto lab_0x402041;
                }
                case 68: {
                    goto lab_0x402041;
                }
                case 69: {
                    goto lab_0x402041;
                }
                case 70: {
                    goto lab_0x402041;
                }
                case 71: {
                    goto lab_0x402041;
                }
                case 72: {
                    goto lab_0x402041;
                }
                case 73: {
                    goto lab_0x402041;
                }
                case 74: {
                    goto lab_0x402041;
                }
                case 75: {
                    goto lab_0x402041;
                }
                case 76: {
                    goto lab_0x402041;
                }
                case 77: {
                    goto lab_0x402041;
                }
                case 78: {
                    goto lab_0x402041;
                }
                case 79: {
                    goto lab_0x402041;
                }
                case 80: {
                    goto lab_0x402041;
                }
                case 81: {
                    goto lab_0x402041;
                }
                case 82: {
                    goto lab_0x402041;
                }
                case 83: {
                    goto lab_0x402041;
                }
                case 84: {
                    goto lab_0x402041;
                }
                case 85: {
                    goto lab_0x402041;
                }
                case 86: {
                    goto lab_0x402041;
                }
                case 87: {
                    goto lab_0x402041;
                }
                case 88: {
                    goto lab_0x402041;
                }
                case 89: {
                    goto lab_0x402041;
                }
                case 90: {
                    goto lab_0x402041;
                }
                case 91: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402041;
                }
                case 94: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402041;
                }
                case 96: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402041;
                }
                case 98: {
                    goto lab_0x402041;
                }
                case 99: {
                    goto lab_0x402041;
                }
                case 100: {
                    goto lab_0x402041;
                }
                case 101: {
                    goto lab_0x402041;
                }
                case 102: {
                    goto lab_0x402041;
                }
                case 103: {
                    goto lab_0x402041;
                }
                case 104: {
                    goto lab_0x402041;
                }
                case 105: {
                    goto lab_0x402041;
                }
                case 106: {
                    goto lab_0x402041;
                }
                case 107: {
                    goto lab_0x402041;
                }
                case 108: {
                    goto lab_0x402041;
                }
                case 109: {
                    goto lab_0x402041;
                }
                case 110: {
                    goto lab_0x402041;
                }
                case 111: {
                    goto lab_0x402041;
                }
                case 112: {
                    goto lab_0x402041;
                }
                case 113: {
                    goto lab_0x402041;
                }
                case 114: {
                    goto lab_0x402041;
                }
                case 115: {
                    goto lab_0x402041;
                }
                case 116: {
                    goto lab_0x402041;
                }
                case 117: {
                    goto lab_0x402041;
                }
                case 118: {
                    goto lab_0x402041;
                }
                case 119: {
                    goto lab_0x402041;
                }
                case 120: {
                    goto lab_0x402041;
                }
                case 121: {
                    goto lab_0x402041;
                }
                case 122: {
                    goto lab_0x402041;
                }
                case 123: {
                    goto lab_0x401fe5;
                }
                case 124: {
                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x401fe5;
                }
                case 126: {
                    goto lab_0x40200d;
                }
                default: {
                    goto lab_0x4023e5;
                }
            }
        }
      lab_0x4023e5:
        if (v23 != 1) {
            // 0x402750
            ps = 0;
            int64_t len = v15; // 0x402760
            if (v15 == -1) {
                // 0x402762
                len = strlen((char *)str);
            }
            // 0x40278e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4027ef:
                // 0x4027ef
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4027f4
                int64_t v30 = v29 + str;
                v24 = function_404ee0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402d6a_2;
                    }
                    case -1: {
                        goto lab_0x402d6a_2;
                    }
                    case -2: {
                        // 0x402e4d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402e87
                            v19 = v18;
                            int64_t v31 = v18; // 0x402e8a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402e97
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402e90
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402d6a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402d6a_2;
                    }
                    case 1: {
                        goto lab_0x4027c0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40286c
                        char v34 = *(char *)v33; // 0x40287d
                        unsigned char v35; // 0x401e97
                        if (v34 < 125) {
                            // 0x402888
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40289f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402870
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40287d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402888
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40289f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402870
                            v33++;
                        }
                        goto lab_0x4027c0;
                    }
                }
            }
            goto lab_0x402d6a_2;
        } else {
            // 0x402434
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402041;
        }
    }
  lab_0x402668:
    // 0x402668
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x402f6a
        if (v8 > result) {
            // 0x402f73
            *(char *)(v12 + result) = 0;
        }
        // 0x402297
        return result;
    }
    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402041:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402050
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40225a_2;
        }
    }
    int64_t v39 = result; // 0x402151
    char v40 = v20; // 0x402151
    int64_t v41 = v38; // 0x402151
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402151
    int64_t v43 = v36; // 0x402151
    goto lab_0x4020cd;
  lab_0x40225a_2:
    // 0x402297
    return function_401e40(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402d6a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402041;
    } else {
        uint64_t v49 = v46 + v5; // 0x40293e
        int64_t v50 = v5 + 1; // 0x402a21
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402a28
        char v52 = v20; // 0x402a28
        int64_t v53 = result; // 0x402a28
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4029f1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4029f5
            int64_t v56 = v54 + 1; // 0x4029fa
            int64_t v57 = v51 + 1; // 0x402a21
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4029ec
                v54 = v56;
                if (v47 > v54) {
                    // 0x4029f1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4029f5
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
        goto lab_0x4020cd;
    }
  lab_0x4027c0:
    // 0x4027c0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4027df
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4027e2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402d6a
        goto lab_0x402d6a_2;
    }
    goto lab_0x4027ef;
  lab_0x40200d:
    // 0x40200d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40225a_2;
    }
    goto lab_0x402041;
  lab_0x401fe5:;
    bool v60 = v15 == 1; // 0x401ff0
    if (v15 == -1) {
        // 0x401ff2
        v60 = *(char *)v1 == 0;
    }
    // 0x401ffe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402041;
    } else {
        goto lab_0x40200d;
    }
  lab_0x4020cd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4020d2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4020d6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x401ee8_2;
}
// Address range: 0x403070 - 0x40320e
int64_t function_403070(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403072
    int32_t * v3 = __errno_location(); // 0x40308c
    int64_t v4 = (int64_t)g20; // 0x403091
    int32_t v5 = *v3; // 0x40309b
    int64_t v6 = v4; // 0x4030b1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403209
            function_4040d0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4030c0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4030c7
        int64_t v9; // 0x403070
        if (g20 == &g21) {
            int64_t v10 = function_403ee0(0, v8); // 0x4031ea
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x4031ef
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403ee0(v4, v8); // 0x4030db
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x4030ea
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x4030ea
        int32_t v14 = v7; // 0x4030f1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403121
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40312b
    int64_t * v17 = (int64_t *)v15; // 0x40312e
    uint64_t v18 = *v17; // 0x40312e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403131
    int64_t result = *v19; // 0x403131
    int64_t v20; // 0x403070
    uint64_t v21 = function_401e40(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403154
    if (v18 > v21) {
        // 0x4031cb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403167
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x403177
        free((int64_t *)result);
    }
    int64_t result2 = function_403e80(v22); // 0x403191
    *v19 = result2;
    int64_t v23; // 0x403070
    function_401e40(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4031cb
    *v3 = v5;
    return result2;
}
// Address range: 0x403210 - 0x403244
int64_t function_403210(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403217
    int64_t result = function_404080(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x403236
    return result;
}
// Address range: 0x403250 - 0x40325f
int64_t function_403250(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x40325c
    return result;
}
// Address range: 0x403260 - 0x40326f
int64_t function_403260(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x403268
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x403270 - 0x4032a3
int64_t function_403270(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x403289
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40328e
    uint32_t v3 = *v2; // 0x40328e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403292
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4032b0 - 0x4032c3
int64_t function_4032b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x4032bc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4032d0 - 0x4032fb
int64_t function_4032d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x4032d8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4032f5
        abort();
        // UNREACHABLE
    }
    // 0x4032ec
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x403300 - 0x403372
int64_t function_403300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x403322
    int32_t * v2 = __errno_location(); // 0x40332b
    uint32_t v3 = *(int32_t *)v1; // 0x40334b
    int64_t result = function_401e40(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40335a
    return result;
}
// Address range: 0x403380 - 0x403461
int64_t function_403380(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x4033a2
    int32_t * v2 = __errno_location(); // 0x4033a8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4033c7
    int32_t * v4 = (int32_t *)v1; // 0x4033ca
    int64_t v5 = function_401e40(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4033e5
    int64_t v6 = v5 + 1; // 0x4033ea
    int64_t result = function_403e80(v6); // 0x4033ff
    function_401e40(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403444
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40344d
    return result;
}
// Address range: 0x403470 - 0x40347a
int64_t function_403470(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403470
    return function_403380(a1, a2, 0, a3);
}
// Address range: 0x403480 - 0x403515
int64_t function_403480(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403480
    int64_t v2 = v1; // 0x403480
    int64_t v3 = v2; // 0x403494
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x4034b3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g48;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4034b0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g48;
        }
    }
    int64_t v6 = v3; // 0x4034cd
    if (g21 != 0x6092a0) {
        // 0x4034cf
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g37;
        v6 = &g48;
    }
    int64_t result = v6; // 0x4034f1
    if (g20 != &g21) {
        // 0x4034f3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g48;
    }
    // 0x403506
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403520 - 0x403531
int64_t function_403520(void) {
    // 0x403520
    int64_t v1; // 0x403520
    return function_403070(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x403540 - 0x40354a
int64_t function_403540(void) {
    // 0x403540
    int64_t v1; // 0x403540
    return function_403070(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x403550 - 0x403566
int64_t function_403550(int64_t a1) {
    // 0x403550
    return function_403070(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x403570 - 0x403582
int64_t function_403570(int64_t a1, int64_t a2) {
    // 0x403570
    return function_403070(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x403590 - 0x4035f8
int64_t function_403590(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4035a0
    return function_403070((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403600 - 0x403664
int64_t function_403600(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403610
    return function_403070((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403670 - 0x40367c
int64_t function_403670(int64_t a1, int64_t a2) {
    // 0x403670
    return function_403590(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403680 - 0x40368f
int64_t function_403680(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403680
    return function_403600(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403690 - 0x403700
int64_t function_403690(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x40369d
    int128_t v2 = __asm_movdqa(g39); // 0x4036a5
    int128_t v3 = __asm_movdqa(g40); // 0x4036ad
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4036c2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4036d8
    uint32_t v6 = *v5; // 0x4036d8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4036dd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403070(0, a1, a2, &v4);
}
// Address range: 0x403700 - 0x40370d
int64_t function_403700(int64_t a1, int64_t a2) {
    // 0x403700
    return function_403690(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403710 - 0x403721
int64_t function_403710(int64_t a1) {
    // 0x403710
    return function_403690(a1, -1, 58);
}
// Address range: 0x403730 - 0x40373a
int64_t function_403730(void) {
    // 0x403730
    int64_t v1; // 0x403730
    return function_403690(v1, v1, 58);
}
// Address range: 0x403740 - 0x4037ae
int64_t function_403740(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40375a
    return function_403070(a1, a3, -1, &v1);
}
// Address range: 0x4037b0 - 0x40381c
int64_t function_4037b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4037b7
    int128_t v2 = __asm_movdqa(g39); // 0x4037bf
    int128_t v3 = __asm_movdqa(g40); // 0x4037c7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4037e9
    if (a2 == 0 || a3 == 0) {
        // 0x403817
        abort();
        // UNREACHABLE
    }
    // 0x4037fa
    return function_403070(a1, a4, a5, &v4);
}
// Address range: 0x403820 - 0x403829
int64_t function_403820(void) {
    // 0x403820
    int64_t v1; // 0x403820
    return function_4037b0(v1, v1, v1, v1, -1);
}
// Address range: 0x403830 - 0x403847
int64_t function_403830(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403830
    return function_4037b0(0, a1, a2, a3, -1);
}
// Address range: 0x403850 - 0x403863
int64_t function_403850(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403850
    return function_4037b0(0, a1, a2, a3, a4);
}
// Address range: 0x403870 - 0x40387a
int64_t function_403870(void) {
    // 0x403870
    int64_t v1; // 0x403870
    return function_403070(v1, v1, v1, &g19);
}
// Address range: 0x403880 - 0x403892
int64_t function_403880(int64_t a1, int64_t a2) {
    // 0x403880
    return function_403070(0, a1, a2, &g19);
}
// Address range: 0x4038a0 - 0x4038b1
int64_t function_4038a0(void) {
    // 0x4038a0
    int64_t v1; // 0x4038a0
    return function_403070(v1, v1, -1, &g19);
}
// Address range: 0x4038c0 - 0x4038d6
int64_t function_4038c0(int64_t a1) {
    // 0x4038c0
    return function_403070(0, a1, -1, &g19);
}
// Address range: 0x4038e0 - 0x403cbd
int64_t function_4038e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403978
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4038fc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403916
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40395b
    if (a6 < 10) {
        // 0x40396a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403a62
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403cc0 - 0x403ce0
int64_t function_403cc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403cc0
    if (a5 == 0) {
        // 0x403cdb
        return function_4038e0(a1, a2, a3, a4, a5, 0, (int64_t)&g48);
    }
    int64_t v1 = 0; // 0x403cc7
    v1++;
    int64_t v2 = v1; // 0x403cd9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403cd0
        v1++;
        v2 = v1;
    }
    // 0x403cdb
    return function_4038e0(a1, a2, a3, a4, a5, v2, (int64_t)&g48);
}
// Address range: 0x403ce0 - 0x403d40
int64_t function_403ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403ce0
    int64_t v3 = &v2; // 0x403ce0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403d13
    int64_t v6; // 0x403cfd
    int64_t * v7; // 0x403d1b
    int64_t v8; // 0x403d1b
    int64_t v9; // 0x403d27
    if (v5 < 48) {
        // 0x403cf0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403d33
            break;
        }
    } else {
        // 0x403d1b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403d33
            break;
        }
    }
    int64_t v10 = 10; // 0x403d11
    while (v4 != 9) {
        // 0x403d09
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403cf0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403d33
                break;
            }
        } else {
            // 0x403d1b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403d33
                break;
            }
        }
        // 0x403d09
        v10 = 10;
    }
    // 0x403d33
    return function_4038e0(a1, a2, a3, a4, v3, v10, (int64_t)&g48);
}
// Address range: 0x403d40 - 0x403dfc
int64_t function_403d40(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x403d40
    int64_t v1; // bp-168, 0x403d40
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403d40
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403d40
    int64_t v8; // 0x403d40
    int64_t v9; // bp-56, 0x403d40
    int64_t v10; // 0x403da5
    int64_t v11; // 0x403dc9
    if ((int32_t)v6 < 48) {
        // 0x403d90
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403de0
            break;
        }
    } else {
        // 0x403dc2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403de0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403dba
    int64_t v13 = 10; // 0x403dba
    while (v5 != 9) {
        // 0x403dbc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403d90
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403de0
                break;
            }
        } else {
            // 0x403dc2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403de0
                break;
            }
        }
        // 0x403db2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403de0
    int64_t v14; // bp-136, 0x403d40
    int64_t result = function_4038e0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g48); // 0x403def
    return result;
}
// Address range: 0x403e00 - 0x403e74
int64_t function_403e00(int64_t a1) {
    // 0x403e00
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403e63
    return fputs_unlocked(v1, g28);
}
// Address range: 0x403e80 - 0x403e9a
int64_t function_403e80(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403e84
    if (size != 0 != (mem == NULL)) {
        // 0x403e93
        return (int64_t)mem;
    }
    // 0x403e95
    function_4040d0(size);
    // UNREACHABLE
}
// Address range: 0x403ea0 - 0x403ec1
int64_t function_403ea0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403ea3
    int64_t v2 = v1; // 0x403ea3
    if (v2 < 0) {
        // 0x403ebb
        function_4040d0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403eb9
        return function_403e80(v2);
    }
    // 0x403ebb
    function_4040d0(v2);
    // UNREACHABLE
}
// Address range: 0x403ed0 - 0x403ed2
int64_t function_403ed0(void) {
    // 0x403ed0
    int64_t v1; // 0x403ed0
    return function_403e80(v1);
}
// Address range: 0x403ee0 - 0x403f16
int64_t function_403ee0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403f08
        free(v1);
        return (int32_t)&g48 ^ (int32_t)&g48;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403ef1
    if (a2 != 0 != (mem == NULL)) {
        // 0x403f00
        return (int64_t)mem;
    }
    // 0x403f11
    function_4040d0(a1);
    // UNREACHABLE
}
// Address range: 0x403f20 - 0x403f41
int64_t function_403f20(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403f23
    int64_t v2 = v1; // 0x403f23
    if (v2 < 0) {
        // 0x403f3b
        function_4040d0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403f39
        return function_403ee0(a1, v2);
    }
    // 0x403f3b
    function_4040d0(a1);
    // UNREACHABLE
}
// Address range: 0x403f50 - 0x403fd6
int64_t function_403f50(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403fab
            function_4040d0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403ee0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403f93
    if (a2 == 0) {
        // 0x403fb8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403f98
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403fab
        function_4040d0(a1);
        // UNREACHABLE
    }
    // 0x403f7a
    *(int64_t *)a2 = v2;
    return function_403ee0(a1, v2 * a3);
}
// Address range: 0x403fe0 - 0x404030
int64_t function_403fe0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x403fe0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40402a
            function_4040d0(a1);
            // UNREACHABLE
        }
        // 0x404002
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403ee0(a1, v1);
    }
    if (a2 == 0) {
        // 0x404015
        *(int64_t *)a2 = 128;
        return function_403ee0(0, 128);
    }
    // 0x404028
    if (a2 < 0) {
        // 0x40402a
        function_4040d0(a1);
        // UNREACHABLE
    }
    // 0x404002
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403ee0(a1, v1);
}
// Address range: 0x404030 - 0x404047
int64_t function_404030(int64_t a1, int64_t a2) {
    // 0x404030
    return (int64_t)memset((int64_t *)function_403e80(a1), 0, (int32_t)a1);
}
// Address range: 0x404050 - 0x40407e
int64_t function_404050(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404057
    if ((int64_t)v1 < 0) {
        // 0x404079
        function_4040d0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404079
        function_4040d0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40406a
    if (mem != NULL) {
        // 0x404074
        return (int64_t)mem;
    }
    // 0x404079
    function_4040d0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404080 - 0x4040a8
int64_t function_404080(int64_t a1, int64_t a2) {
    int64_t v1 = function_403e80(a2); // 0x40408f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4040b0 - 0x4040c3
int64_t function_4040b0(int64_t str) {
    // 0x4040b0
    return function_404080(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4040d0 - 0x404101
int64_t function_4040d0(int64_t a1) {
    // 0x4040d0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404110 - 0x4041ef
int64_t function_404110(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40411c
    uint32_t v2 = *v1; // 0x40411c
    int64_t v3 = a2 & 0xffffffff; // 0x404121
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404124
    uint64_t v5 = (int64_t)*v4; // 0x404124
    int64_t v6; // 0x404192
    if (v3 <= v5) {
      lab_0x40418c_2:
        // 0x40418c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404112
    int64_t v8 = v2; // 0x404110
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40418c
        goto lab_0x40418c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404148
    int64_t v17; // 0x404156
    int64_t * v18; // 0x404170
    int64_t * v19; // 0x404173
    int64_t v20; // 0x40417e
    int64_t v21; // 0x404156
    while ((v16 & 0xffffffff) > v10) {
        // 0x404153
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404170
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404187
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40418c
            goto lab_0x40418c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40418c
            goto lab_0x40418c_2;
        }
        // 0x404142
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4041cb
    int64_t * v23 = (int64_t *)v22; // 0x4041d0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4041d3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4041d0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4041e7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40413d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40418c
            goto lab_0x40418c_2;
        }
        // 0x404142
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404153
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404170
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404187
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40418c
                goto lab_0x40418c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40418c
                goto lab_0x40418c_2;
            }
            // 0x404142
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4041b0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4041d0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4041e7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40418c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4041f0 - 0x40480c
int64_t function_4041f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40420f
    int64_t v2 = *v1; // 0x40420f
    char * str2 = (char *)v2; // 0x40421c
    char c = *str2; // 0x40421c
    int64_t v3 = v2; // 0x404248
    int64_t v4 = 0; // 0x4041f0
    int32_t v5; // 0x4041f0
    int64_t v6; // 0x4041f0
    int64_t v7; // 0x4041f0
    int64_t v8; // 0x4041f0
    int64_t v9; // 0x4041f0
    int64_t v10; // 0x4041f0
    int64_t v11; // 0x4041f0
    int64_t v12; // 0x4041f0
    int64_t v13; // 0x4041f0
    int64_t str3; // 0x4041f0
    int64_t v14; // 0x4041f0
    int64_t v15; // 0x4041f0
    int64_t v16; // 0x4041f0
    int64_t v17; // 0x4041f0
    int32_t v18; // 0x4041f0
    int32_t v19; // 0x4041f0
    int32_t v20; // 0x4041f0
    int32_t v21; // 0x4041f0
    int32_t v22; // 0x4041f0
    int32_t v23; // 0x4041f0
    int32_t v24; // 0x4041f0
    int32_t v25; // 0x4041f0
    int32_t v26; // 0x4041f0
    int32_t v27; // 0x4041f0
    int32_t v28; // 0x4041f0
    int32_t v29; // 0x4041f0
    int64_t nmemb; // 0x4041f0
    int64_t v30; // 0x4041f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40424c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404248
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404258
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40425e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404228
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40428c
                int64_t v34; // 0x4041f0
                int64_t v35; // 0x4041f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404295
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404410;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4042a6
                int64_t v37 = *(int64_t *)v36; // 0x4042aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404280
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404295
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404410;
                        }
                    }
                    // 0x4042a6
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
                  lab_0x4042f6:
                    // 0x4042f6
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
                        goto lab_0x404350;
                    } else {
                        if (v11 == 0) {
                            // 0x4044c0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404350;
                        } else {
                            if (v39 == 0) {
                                // 0x404470
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40431a;
                                } else {
                                    // 0x40447c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40431a;
                                    } else {
                                        // 0x40448a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40431a;
                                        } else {
                                            goto lab_0x404350;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40431a;
                            }
                        }
                    }
                }
              lab_0x404361:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404536
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4046e2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404702
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40474f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x404769
                            int64_t v45; // 0x40476b
                            if (*(char *)v42 != 0) {
                                // 0x40476b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404763
                            while (v17 + nmemb != v42) {
                                // 0x404765
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40476b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x404758
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404790
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x404544
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40469f
                        free((int64_t *)v17);
                    }
                    // 0x404599
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4045b0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40445e
                    return 63;
                }
                // 0x404380
                v5 = v39;
                if (v13 != 0) {
                    // 0x404404
                    v35 = v13;
                    v34 = v25;
                  lab_0x404410:;
                    int32_t * v49 = (int32_t *)a7; // 0x404420
                    uint32_t v50 = *v49; // 0x404420
                    int64_t v51 = v50; // 0x404420
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40442a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404433
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40465f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40460a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40445e
                            return 63;
                        }
                        // 0x4044a8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4047bf
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4046bd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4046d0
                                // 0x40445e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4045ce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4045e2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40444b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40444e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404452
                    int64_t result = v59; // 0x404458
                    if (v58 != 0) {
                        // 0x40445a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40445e
                    return result;
                }
            } else {
                // 0x40425e
                v5 = v32;
            }
            // break -> 0x404385
            break;
        }
    }
    // 0x404385
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40439d
        if (*(char *)(v60 + 1) != 45) {
            // 0x4043a7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40445e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4044e9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4043d6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4043e6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404350:
    // 0x404350
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404350
    int64_t v63 = *(int64_t *)v62; // 0x404354
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404361
        goto lab_0x404361;
    }
    goto lab_0x4042f6;
  lab_0x40431a:
    // 0x40431a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4041f0
    int32_t v65; // 0x4041f0
    int32_t v66; // 0x4041f0
    if (v27 != 0) {
        goto lab_0x404350;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4044d0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404350;
            } else {
                goto lab_0x404341;
            }
        } else {
            // 0x404335
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40462c
                int64_t v67 = (int64_t)mem; // 0x40462c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404350;
                } else {
                    // 0x40463f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404341;
                }
            } else {
                goto lab_0x404341;
            }
        }
    }
  lab_0x404341:
    // 0x404341
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404350;
}
// Address range: 0x404810 - 0x404dd6
int64_t function_404810(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404831
    if (v3 < 1) {
        // 0x4049ee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40482d
    int32_t v5 = *(int32_t *)a7; // 0x404839
    uint64_t v6 = a1 & 0xffffffff; // 0x40483b
    int64_t v7 = v2; // 0x404840
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404843
    *v8 = 0;
    int64_t v9; // 0x404810
    int64_t v10; // 0x404810
    int64_t v11; // 0x404810
    int64_t v12; // 0x404810
    int64_t str; // 0x404810
    int64_t v13; // 0x404810
    int64_t v14; // 0x404810
    int64_t v15; // 0x404810
    int64_t v16; // 0x404810
    int64_t v17; // 0x404810
    int32_t v18; // 0x404810
    char v19; // 0x404810
    if (v5 == 0) {
        // 0x404a28
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40485a;
    } else {
        // 0x404853
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4048a0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4048a3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404968;
            } else {
                int64_t v22 = v7 + 1; // 0x4048b6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4048c6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40497c;
                } else {
                    goto lab_0x4048d8;
                }
            }
        } else {
            goto lab_0x40485a;
        }
    }
  lab_0x40485a:
    // 0x40485a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404860
    *v24 = 0;
    int64_t v25; // 0x404810
    int64_t v26; // 0x404810
    int64_t v27; // 0x404810
    switch (*(char *)&v2) {
        case 45: {
            // 0x404950
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40495d;
        }
        case 43: {
            // 0x404c60
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40495d;
        }
        default: {
            // 0x40487c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404bdf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404cf8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40495d;
                } else {
                    // 0x404bed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40488a;
                }
            } else {
                goto lab_0x40488a;
            }
        }
    }
  lab_0x404968:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40496f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4048d8;
    } else {
        goto lab_0x40497c;
    }
  lab_0x40488a:
    // 0x40488a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40495d;
  lab_0x40495d:
    // 0x40495d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404968;
  lab_0x4048d8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4048d8
    int64_t v31 = v30; // 0x4048d8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4048da
    if ((int64_t)*v32 > v31) {
        // 0x4048df
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4048e2
    if (*v33 > v30) {
        // 0x4048e7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4048ea
    int64_t v35 = v31; // 0x4048ee
    int64_t v36 = v15; // 0x4048ee
    int64_t v37; // 0x404810
    int64_t v38; // 0x404810
    int64_t v39; // 0x404810
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404a58
        int64_t v41 = v40; // 0x404a58
        v2 = v41;
        int64_t v42; // 0x404810
        if (*v33 == v40) {
            // 0x404c40
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404c48
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404a64
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404a68
                function_404110(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404a78
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404a81
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404a8a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404aa1
            int64_t v47 = v45 & 0xffffffff; // 0x404aa5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404aae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404ab4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404ab6;
                }
            }
            int64_t v48 = v47 + 1; // 0x404a90
            int64_t v49 = v48 & 0xffffffff; // 0x404a90
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404aa1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404aae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404ab4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404ab6;
                    }
                }
                // 0x404a90
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404c58
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404ab6;
    } else {
        goto lab_0x4048f4;
    }
  lab_0x40497c:
    // 0x40497c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40497f
    int64_t v51 = v12; // 0x40497f
    int64_t v52 = v14; // 0x40497f
    if (*(char *)v10 == 0) {
        goto lab_0x4048d8;
    } else {
        goto lab_0x404985;
    }
  lab_0x4048f4:;
    int32_t v53 = v35; // 0x4048f4
    int64_t v54; // 0x404810
    int64_t v55; // 0x404810
    int64_t v56; // 0x404810
    int64_t v57; // 0x404810
    int64_t v58; // 0x404810
    int64_t v59; // 0x404810
    char * v60; // 0x404810
    int64_t v61; // 0x404810
    int64_t v62; // 0x404909
    int64_t v63; // 0x404810
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404a43
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404a46;
    } else {
        // 0x4048fc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404810
        int64_t v66 = v65 ? -1 : 1; // 0x404910
        int64_t v67 = (int64_t)"--"; // 0x404810
        int64_t v68 = v62; // 0x404810
        int64_t v69 = 3; // 0x404910
        unsigned char v70 = *(char *)v68; // 0x404910
        char v71 = *(char *)v67; // 0x404910
        char v72 = v71; // 0x404910
        bool v73 = false; // 0x404910
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
            // 0x404a00
            if (*(char *)v62 == 45) {
                // 0x404ac0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404ac0
                if (c == 0) {
                    goto lab_0x404a0a;
                } else {
                    // 0x404acd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404b50;
                    } else {
                        if (c == 45) {
                            // 0x404d33
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404ba5;
                        } else {
                            // 0x404ade
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404b50;
                            } else {
                                // 0x404ae3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404b04;
                                } else {
                                    // 0x404aea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404b50;
                                    } else {
                                        goto lab_0x404b04;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404a0a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404920
            v2 = v75;
            int32_t v76 = *v32; // 0x404923
            int64_t v77 = v35 + 1; // 0x404926
            int32_t v78 = v77; // 0x404929
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404c90
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404937
                    function_404110(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404945
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404a46;
        }
    }
  lab_0x404985:;
    // 0x404985
    int64_t v79; // bp-104, 0x404810
    int64_t v80 = &v79; // 0x40481a
    int64_t v81 = v50 + 1; // 0x404985
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40498c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404991
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404995
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404999
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4049a1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4049a6
    int32_t c2 = v84; // 0x4049a6
    char * found_char_pos = strchr(str2, c2); // 0x4049a6
    int64_t v87 = *v82; // 0x4049ab
    v2 = v87;
    int64_t v88 = *v85; // 0x4049b5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4049c0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404cb0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404c7d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4049ee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4049a6
    char v91 = *(char *)(v90 + 1); // 0x4049db
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404995
        if (v91 != 58) {
            // 0x4049ee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404c04
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404d08
                *v8 = 0;
            } else {
                // 0x404cec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404c2e
            *v83 = 0;
            // 0x4049ee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404c0e
        if (v93 != 0) {
            // 0x404ca0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404c2e
            *v83 = 0;
            // 0x4049ee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404c21
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404c2e
            *v83 = 0;
            // 0x4049ee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404d6a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404d1a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404d21
        // 0x404c2e
        *v83 = 0;
        // 0x4049ee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404b79
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404b7b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404da0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404d51
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404d58
            // 0x4049ee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404b86
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404b8a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404ba5;
  lab_0x404ab6:
    // 0x404ab6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4048f4;
  lab_0x404ba5:;
    int64_t v99 = function_4041f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404bc3
    // 0x4049ee
    return v99 & 0xffffffff;
  lab_0x404a46:;
    int32_t v100 = v55; // 0x404a46
    if (v100 != (int32_t)v59) {
        // 0x404a4a
        *(int32_t *)a7 = v100;
    }
    // 0x4049ee
    return 0xffffffff;
  lab_0x404a0a:
    // 0x404a0a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404a11
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4049ee
    return v99 & 0xffffffff;
  lab_0x404b50:
    // 0x404b50
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404985;
  lab_0x404b04:
    // 0x404b04
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4041f0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x404b2a
    if ((int32_t)v101 != -1) {
        // 0x4049ee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404b3f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404b50;
}
// Address range: 0x404de0 - 0x404e36
int64_t function_404de0(int64_t a1) {
    // 0x404de0
    *(int32_t *)&g41 = g26;
    *(int32_t *)&g42 = g25;
    int64_t v1; // 0x404de0
    int64_t result = function_404810(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x404e06
    g26 = *(int32_t *)&g41;
    g46 = g44;
    *(int32_t *)&g24 = g43;
    return result;
}
// Address range: 0x404e40 - 0x404e58
int64_t function_404e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e40
    return function_404de0(1);
}
// Address range: 0x404e60 - 0x404e73
int64_t function_404e60(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x404e60
    return function_404de0(0);
}
// Address range: 0x404e80 - 0x404e95
int64_t function_404e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e80
    return function_404810(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404ea0 - 0x404eb6
int64_t function_404ea0(void) {
    // 0x404ea0
    return function_404de0(0);
}
// Address range: 0x404ec0 - 0x404ed8
int64_t function_404ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404ec0
    return function_404810(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x404ee0 - 0x404f5a
int64_t function_404ee0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x404eeb
    int64_t v2 = (int64_t)&g10; // 0x404eeb
    int32_t * pwc; // 0x404ee0
    int64_t v3; // 0x404ee0
    int64_t n; // 0x404ee0
    if (a2 == 0) {
        goto lab_0x404f32;
    } else {
        // 0x404eed
        if (a3 == 0) {
            // 0x404f18
            return -2;
        }
        // 0x404ef9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x404f32;
        } else {
            goto lab_0x404f04;
        }
    }
  lab_0x404f32:
    // 0x404f32
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x404ee0
    pwc = (int32_t *)&v4;
    goto lab_0x404f04;
  lab_0x404f04:;
    char * wstr = (char *)v3; // 0x404f0a
    int64_t ps; // 0x404ee0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x404f0a
    int64_t result = v5; // 0x404f0a
    if (v5 < 0xfffffffe) {
        // 0x404f18
        return result;
    }
    int64_t result2 = result; // 0x404f49
    if ((char)function_404fc0(0, v3) == 0) {
        // 0x404f4b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404f18
    return result2;
}
// Address range: 0x404f60 - 0x404fbd
int64_t function_404f60(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404f67
    int64_t v2; // 0x404f60
    int64_t result = function_405590(a1, v2); // 0x404f78
    if ((v2 & 32) != 0) {
        // 0x404fa0
        if ((int32_t)result == 0) {
            // 0x404fa4
            *__errno_location() = 0;
        }
        // 0x404f9a
        return 0xffffffff;
    }
    // 0x404f81
    if ((int32_t)result == 0) {
        // 0x404f9a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x404f88
    if (v1 == 0) {
        // 0x404f8a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x404f9a
    return result2;
}
// Address range: 0x404fc0 - 0x40501e
int64_t function_404fc0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x404fc6
    if (locale == NULL) {
        // 0x404ff3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x404fc6
    bool v2; // 0x404fc0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x404fc0
    int64_t v5 = v1; // 0x404fc0
    int64_t v6 = 2; // 0x404fe5
    unsigned char v7 = *(char *)v5; // 0x404fe5
    char v8 = *(char *)v4; // 0x404fe5
    char v9 = v8; // 0x404fe5
    bool v10 = false; // 0x404fe5
    while (v7 == v8) {
        // 0x404fd8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x404ff1
    int64_t v13 = v1; // 0x404ff1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x404ff3
        return 0;
    }
    int64_t v14 = 6; // 0x404ff1
    unsigned char v15 = *(char *)v13; // 0x40500d
    char v16 = *(char *)v12; // 0x40500d
    char v17 = v16; // 0x40500d
    bool v18 = false; // 0x40500d
    while (v15 == v16) {
        // 0x405000
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
// Address range: 0x405020 - 0x405582
int64_t function_405020(void) {
    char * v1 = nl_langinfo(14); // 0x405036
    char * v2 = g45; // 0x40503b
    char * v3; // 0x405020
    int64_t v4; // 0x405020
    int64_t v5; // 0x405020
    int64_t v6; // 0x405020
    int64_t v7; // 0x405020
    int32_t size; // 0x405020
    int32_t size2; // 0x405020
    int32_t len; // 0x4050f2
    int64_t v8; // 0x4050f2
    char * env_val; // 0x4050dd
    if (v2 == NULL) {
        // 0x4050d8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405145;
        } else {
            // 0x4050ea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405145;
            } else {
                // 0x4050ef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4050dd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405575
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405145;
                    } else {
                        // 0x4054e9
                        size2 = len + 14;
                        goto lab_0x40510b;
                    }
                } else {
                    goto lab_0x40510b;
                }
            }
        }
    } else {
        // 0x405020
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40505a;
    }
  lab_0x40538c:;
    // 0x40538c
    struct _IO_FILE * stream; // 0x4051cb
    int32_t v10 = __uflow(stream); // 0x40538f
    int64_t v11; // 0x405020
    int64_t v12 = v11; // 0x405399
    int64_t v13; // 0x405020
    int64_t v14 = v13; // 0x405399
    int32_t v15 = v10; // 0x405399
    int64_t v16; // 0x405020
    int64_t v17 = v16; // 0x405399
    int64_t v18 = v11; // 0x405399
    int64_t v19 = v13; // 0x405399
    int64_t v20 = v16; // 0x405399
    if (v10 == -1) {
        // break -> 0x40539f
        goto lab_0x40539f;
    }
    goto lab_0x405219;
  lab_0x40520e:;
    // 0x40520e
    int64_t v90; // 0x405020
    int64_t * v32; // 0x405200
    *v32 = v90 + 1;
    int64_t v89; // 0x405020
    v12 = v89;
    int64_t v91; // 0x405020
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405020
    v17 = v92;
    goto lab_0x405219;
  lab_0x405219:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405020
    int32_t v25; // bp-120, 0x405020
    int32_t v26; // bp-184, 0x405020
    int64_t v27; // 0x4051cb
    int64_t v28; // 0x4051e8
    int64_t v29; // 0x4051ed
    int64_t * v30; // 0x405204
    switch (c) {
        case 32: {
            goto lab_0x405200;
        }
        case 10: {
            goto lab_0x405200;
        }
        case 9: {
            goto lab_0x405200;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4053f1
            int32_t v33; // 0x405020
            char v34; // 0x405020
            int32_t v35; // 0x4053fe
            if (v31 < *v30) {
                // 0x4053d0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4053fb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4053f1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4053d0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4053fb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4053e0
                v36 = v33;
            }
            // 0x4054cf
            if (v36 == -1) {
                // break -> 0x40539f
                break;
            }
            goto lab_0x405200;
        }
        default: {
            // 0x40522f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40539f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405258
            int64_t v39 = v37 + 4; // 0x40525a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405266
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405268
            while (v41 == 0) {
                // 0x405258
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405286
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405292
            int64_t v45 = v43 + 4; // 0x405294
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4052a0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4052a2
            while (v47 == 0) {
                // 0x405292
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40528f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4052b8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4052c8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4052cc
            int64_t v52 = v51 + v48; // 0x4052d5
            int64_t * mem; // 0x405020
            int64_t v53; // 0x405020
            int64_t v54; // 0x405020
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40540b
                int64_t v56 = v55 + 3; // 0x405417
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4052f1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405300
            if (mem == NULL) {
                // 0x40552c
                free((int64_t *)v21);
                function_405590(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x4051a4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405318
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405322
            uint32_t v62 = (int32_t)v59; // 0x405325
            int64_t v63; // 0x405020
            if (v62 >= 8) {
                // 0x405434
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40544e
                int64_t v66 = v61 - v65; // 0x405452
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40545d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40546e
                    int64_t v70 = v69 & 0xffffffff; // 0x40546e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40546b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4054ff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405337
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40533b
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
            int64_t v73 = v51 + 1; // 0x40534b
            int64_t v74 = v60 - 1; // 0x40534f
            uint32_t v75 = (int32_t)v73; // 0x405354
            int64_t v76; // 0x405020
            if (v75 >= 8) {
                // 0x405482
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40548c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40549c
                int64_t v80 = v74 - v79; // 0x4054a0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4054ab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4054bb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4054b9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405516
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40551e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405366
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40536a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405563
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40537e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40520e;
            } else {
                goto lab_0x40538c;
            }
        }
    }
  lab_0x405200:;
    int64_t v93 = v23; // 0x405020
    int64_t v94 = v22; // 0x405020
    int64_t v95 = v21; // 0x405020
    goto lab_0x405200_2;
  lab_0x405145:;
    int64_t * mem3 = malloc(size); // 0x405145
    int64_t v97 = (int64_t)&g10; // 0x405150
    int64_t v98; // 0x405020
    int64_t path; // 0x405020
    if (mem3 == NULL) {
        goto lab_0x405122;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405145
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405166;
    }
  lab_0x40505a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40504d
    char v100 = *v3; // 0x40505a
    int64_t v101; // 0x405020
    if (v100 == 0) {
        // 0x4050b4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405020
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405020
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4050a0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4050a7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405070
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40507d
        char v107 = *(char *)v106; // 0x405082
        v102 = v107;
        if (v107 == 0) {
            // 0x4050b4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40508b
    v104 = v103 + 1;
  lab_0x4050a7:
    // 0x4050b4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405122:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40505a;
  lab_0x405166:;
    int64_t v109 = v98 + path; // 0x405166
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405192
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x4051c1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4054f2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x4051e5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405200_2:;
                uint64_t v96 = *v32; // 0x405200
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40538c;
                } else {
                    goto lab_0x40520e;
                }
            }
          lab_0x40539f:
            // 0x40539f
            function_405590(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x4053be
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4051a4;
  lab_0x40510b:;
    int64_t * mem4 = malloc(size2); // 0x40510b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x4051b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405166;
    } else {
        goto lab_0x405122;
    }
  lab_0x4051a4:
    // 0x4051a4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405122;
}
// Address range: 0x405590 - 0x40560b
int64_t function_405590(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405597
    if (fileno(stream) < 0) {
        // 0x4055f7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4055aa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4055db
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4055f7
            return fclose(stream);
        }
    }
    // 0x4055ac
    if ((int32_t)function_405610(a1, v1) == 0) {
        // 0x4055f7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4055b8
    int32_t v3 = *v2; // 0x4055c0
    int64_t result = fclose(stream); // 0x4055ce
    if (v3 != 0) {
        // 0x405600
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4055d0
    return result;
}
// Address range: 0x405610 - 0x405650
int64_t function_405610(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40562a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40562a
        return fflush(stream);
    }
    // 0x405638
    function_405650(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405650 - 0x4056a7
int64_t function_405650(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405650
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40565a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40568b
    int64_t result = -1; // 0x405694
    if (v1 != -1) {
        // 0x405696
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4056a2
    return result;
}
// Address range: 0x4056b0 - 0x40570d
int64_t function_4056b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4056b0
    return function_401270();
}
// Address range: 0x405710 - 0x405711
int64_t function_405710(void) {
    // 0x405710
    int64_t result; // 0x405710
    return result;
}
// Address range: 0x405720 - 0x405738
int64_t function_405720(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405720
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x405738 - 0x405758
int64_t function_405738(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x405742
    while (*(int64_t *)v1 != -1) {
        // 0x405743
        v1 -= 8;
    }
    // 0x405754
    return result;
}
