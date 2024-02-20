#include "decompile_retdec.h"
// Address range: 0x401540 - 0x401545
int64_t function_401540(void) {
    // 0x401540
    abort();
    // UNREACHABLE
}
// Address range: 0x401545 - 0x40154a
int64_t function_401545(void) {
    // 0x401545
    abort();
    // UNREACHABLE
}
// Address range: 0x40154a - 0x40154f
int64_t function_40154a(void) {
    // 0x40154a
    abort();
    // UNREACHABLE
}
// Address range: 0x40154f - 0x401554
int64_t function_40154f(void) {
    // 0x40154f
    abort();
    // UNREACHABLE
}
// Address range: 0x401554 - 0x401559
int64_t function_401554(void) {
    // 0x401554
    abort();
    // UNREACHABLE
}
// Address range: 0x401559 - 0x40155e
int64_t function_401559(void) {
    // 0x401559
    abort();
    // UNREACHABLE
}
// Address range: 0x401560 - 0x401810
int64_t function_401560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401575
    function_401cf0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_405770(0x401c50, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2 = 0; // 0x4015b9
    int64_t v3 = 0; // 0x4015b9
    int64_t v4 = 0; // 0x4015b9
    int64_t v5 = 0; // 0x4015b9
    int64_t v6 = 0; // 0x4015b9
    int64_t v7; // 0x401560
    char * format; // 0x4017f9
    while (true) {
        // 0x4015c2
        v7 = v2;
        int64_t v8 = v3; // 0x401560
        while (true) {
          lab_0x4015c2_3:
            // 0x4015c2
            v3 = v8;
            int64_t v9 = v4; // 0x40168d
            uint32_t v10; // 0x401560
            while (true) {
                // 0x4015c2
                v4 = v9;
                int64_t v11 = v5; // 0x401560
                while (true) {
                  lab_0x4015c2_2:
                    // 0x4015c2
                    v5 = v11;
                    int64_t v12 = v6; // 0x401560
                    while (true) {
                      lab_0x4015c2:
                        // 0x4015c2
                        v6 = v12;
                        int64_t v13 = 0; // bp-60, 0x4015d6
                        v10 = (int32_t)function_404eb0(v1, a2, "+r:t:u:l:c", &g2, &v13, a6);
                        switch (v10) {
                            case -1: {
                                goto lab_0x4016c8;
                            }
                            case 108: {
                                if (v6 != 0) {
                                    goto lab_0x4017cb;
                                }
                                // 0x401678
                                v12 = g45;
                                goto lab_0x4015c2;
                            }
                            default: {
                                goto lab_0x4015f1;
                            }
                        }
                    }
                  lab_0x4015f1:
                    if (v10 <= 108) {
                        // break (via goto) -> 0x4015f3
                        goto lab_0x4015f3;
                    }
                    switch (v10) {
                        case 116: {
                            goto lab_0x40164b;
                        }
                        case 117: {
                            goto lab_0x401684;
                        }
                        default: {
                            if (v10 != 114) {
                                // 0x40160a
                                function_4018f0(1);
                                // UNREACHABLE
                            }
                            if (v5 != 0) {
                                goto lab_0x401787;
                            }
                            // 0x401630
                            v11 = g45;
                            goto lab_0x4015c2_2;
                        }
                    }
                }
              lab_0x401684:
                if (v4 != 0) {
                    // 0x4017ed
                    format = dcgettext(NULL, "multiple users", 5);
                    error(1, (int32_t)"multiple users" ^ (int32_t)"multiple users", format);
                    return &g47;
                }
                // 0x40168d
                v9 = g45;
            }
          lab_0x4015f3:
            // 0x4015f3
            v8 = 1;
            switch (v10) {
                case -130: {
                    // 0x401668
                    function_4018f0(0);
                    // UNREACHABLE
                }
                case 99: {
                    goto lab_0x4015c2_3;
                }
                case -131: {
                    // 0x401699
                    function_403d90((int64_t)g28, "runcon", "GNU coreutils", (int64_t)g17, "Russell Coker", 0);
                    exit(0);
                    // UNREACHABLE
                }
                default: {
                    goto lab_0x40160a;
                }
            }
        }
      lab_0x40164b:
        if (v7 != 0) {
            goto lab_0x4017a9;
        }
        // 0x401657
        v2 = g45;
    }
  lab_0x4016c8:;
    uint32_t v14 = *(int32_t *)0x60921c; // 0x4016c8
    if (v14 == (int32_t)a1) {
        int32_t * err_num = __errno_location(); // 0x40172b
        *err_num = 95;
        error(1, *err_num, dcgettext(NULL, "failed to get current context", 5));
    } else {
        if ((v5 || v4) == 0) {
            if ((v3 || v7 || v6) == 0) {
                // 0x4016e6
                if (v1 <= (int64_t)v14) {
                    // 0x401705
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify -c, -t, -u, -l, -r, or context", 5));
                    // 0x40160a
                    function_4018f0(1);
                    // UNREACHABLE
                }
                // 0x4016ea
                g26 = v14 + 1;
            }
        }
        // 0x4016f3
        if (v1 <= (int64_t)g26) {
            // 0x401705
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"no command specified", 5));
          lab_0x40160a:
            // 0x40160a
            function_4018f0(1);
            // UNREACHABLE
        }
    }
    // 0x40175b
    error(1, (int32_t)"%s may be used only on a SELinux kernel" ^ (int32_t)"%s may be used only on a SELinux kernel", dcgettext(NULL, "%s may be used only on a SELinux kernel", 5));
  lab_0x401787:
    // 0x401787
    error(1, (int32_t)"multiple roles" ^ (int32_t)"multiple roles", dcgettext(NULL, "multiple roles", 5));
  lab_0x4017a9:
    // 0x4017a9
    error(1, (int32_t)"multiple types" ^ (int32_t)"multiple types", dcgettext(NULL, "multiple types", 5));
  lab_0x4017cb:
    // 0x4017cb
    error(1, (int32_t)"multiple levelranges" ^ (int32_t)"multiple levelranges", dcgettext(NULL, "multiple levelranges", 5));
    // 0x4017ed
    format = dcgettext(NULL, "multiple users", 5);
    error(1, (int32_t)"multiple users" ^ (int32_t)"multiple users", format);
    return &g47;
}
// Address range: 0x401810 - 0x40183b
// Address range: 0x40183b - 0x40185a
int64_t function_40183b(void) {
    // 0x40183b
    return &g27;
}
// Address range: 0x40185a - 0x401891
int64_t function_40185a(void) {
    // 0x40185a
    return 0;
}
// Address range: 0x401891 - 0x4018e8
int64_t function_401891(void) {
    // 0x401891
    if (g31 != 0) {
        // 0x4018e7
        int64_t result; // 0x401891
        return result;
    }
    int64_t v1 = g32; // 0x4018c4
    int64_t result2; // 0x4018d6
    if (g32 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4018d6
        result2 = function_40183b();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4018c6
        v1++;
    }
    // 0x4018ba
    g32 = v1;
    // 0x4018d6
    result2 = function_40183b();
    g31 = 1;
    return result2;
}
// Address range: 0x4018e8 - 0x4018ed
int64_t function_4018e8(void) {
    // 0x4018e8
    return function_40185a();
}
// Address range: 0x4018f0 - 0x401c2d
int64_t function_4018f0(int64_t a1) {
    int32_t status = a1; // 0x401906
    if (status != 0) {
        // 0x40190a
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40192f
        exit(status);
        // UNREACHABLE
    }
    // 0x401936
    __printf_chk(1, dcgettext(NULL, "Usage: %s CONTEXT COMMAND [args]\n  or:  %s [ -c ] [-u USER] [-r ROLE] [-t TYPE] [-l RANGE] COMMAND [args]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Run a program in a different SELinux security context.\nWith neither CONTEXT nor COMMAND, print the current security context.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  CONTEXT            Complete security context\n  -c, --compute      compute process transition context before modifying\n  -t, --type=TYPE    type (for same role as parent)\n  -u, --user=USER    user identity\n  -r, --role=ROLE    role\n  -l, --range=RANGE  levelrange\n\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    int64_t v1 = &g1; // bp-136, 0x401a06
    bool v2; // 0x4018f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401a90
    int64_t v6 = *(int64_t *)v5; // 0x401a94
    int64_t v7 = 7; // 0x401a9a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"runcon";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401aa6
        char v11 = *(char *)v9; // 0x401aa6
        char v12 = v11; // 0x401aa6
        bool v13 = false; // 0x401aa6
        while (v10 == v11) {
            // 0x401a9c
            v7--;
            int64_t v14 = v9 + v3; // 0x401aa6
            int64_t v15 = v8 + v3; // 0x401aa6
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
            // break -> 0x401ab2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x401ab2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401bc4;
        } else {
            // 0x401bae
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401c03
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401b14;
            } else {
                goto lab_0x401bc4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401b14;
        } else {
            // 0x401afa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401c03
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401b14;
            } else {
                goto lab_0x401b14;
            }
        }
    }
  lab_0x401bc4:
    // 0x401bc4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401b54
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40192f
    exit(status);
    // UNREACHABLE
  lab_0x401b14:
    // 0x401b14
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401b54
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40192f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401c30 - 0x401c38
int64_t function_401c30(int64_t a1) {
    // 0x401c30
    g34 = a1;
    int64_t result; // 0x401c30
    return result;
}
// Address range: 0x401c40 - 0x401c48
int64_t function_401c40(int64_t a1) {
    // 0x401c40
    g33 = a1;
    int64_t result; // 0x401c40
    return result;
}
// Address range: 0x401c50 - 0x401cee
int64_t function_401c50(void) {
    // 0x401c50
    int32_t * err_num; // 0x401c66
    if ((int32_t)function_404fb0((int64_t)g28) == 0) {
        goto lab_0x401c7c;
    } else {
        // 0x401c66
        err_num = __errno_location();
        if (g33 == 0) {
            goto lab_0x401c93;
        } else {
            // 0x401c77
            if (*err_num != 32) {
                goto lab_0x401c93;
            } else {
                goto lab_0x401c7c;
            }
        }
    }
  lab_0x401c7c:;
    int64_t result = function_404fb0((int64_t)g30); // 0x401c83
    if ((int32_t)result == 0) {
        // 0x401c8c
        return result;
    }
    // 0x401cce
    _exit(g18);
    // UNREACHABLE
  lab_0x401c93:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401c9f
    if (g34 == 0) {
        // 0x401cd9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401cb3
        error(0, *err_num, "%s: %s", (char *)function_403760((int64_t)g34), v1);
    }
    // 0x401cce
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401cf0 - 0x401d89
int64_t function_401cf0(int64_t str) {
    // 0x401cf0
    if (str == 0) {
        // 0x401d69
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401cfe
    int64_t result = (int64_t)found_char_pos; // 0x401cfe
    if (found_char_pos == NULL) {
        // 0x401d59
        g35 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401d08
    if (v1 - str < 7) {
        // 0x401d59
        g35 = str;
        g29 = str;
        return result;
    }
    // 0x401d18
    bool v2; // 0x401cf0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401cf0
    int64_t v5 = result - 6; // 0x401cf0
    int64_t v6 = 7; // 0x401d26
    unsigned char v7 = *(char *)v5; // 0x401d26
    char v8 = *(char *)v4; // 0x401d26
    char v9 = v8; // 0x401d26
    bool v10 = false; // 0x401d26
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
    int64_t v12 = (int64_t)"lt-"; // 0x401d30
    int64_t v13 = v1; // 0x401d30
    int64_t v14 = 3; // 0x401d30
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401d59
        g35 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401d42
    char v16 = *(char *)v12; // 0x401d42
    char v17 = v16; // 0x401d42
    bool v18 = false; // 0x401d42
    while (v15 == v16) {
        // 0x401d32
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
    int64_t v20 = v1; // 0x401d4c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401d4e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x401d59
    g35 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x401d90 - 0x401e82
int64_t function_401d90(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401da4
    int64_t result = (int64_t)v1; // 0x401da4
    if (result != a1) {
        // 0x401db1
        return result;
    }
    int64_t v2 = function_405070(); // 0x401dc0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401e76
    if (v3 == 85) {
        // 0x401dd0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401e68
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x401dfe
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x401e0b
        // 0x401db1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401e68
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x401e4d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x401e5a
    // 0x401db1
    return result4;
}
// Address range: 0x401e90 - 0x401ee7
int64_t function_401e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401e90
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401ed8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401ee7 - 0x4030b1
int64_t function_401ee7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x401f31
    int64_t v3 = 0; // 0x401f31
    int64_t v4; // 0x401ee7
    int64_t v5; // 0x401ee7
    int64_t v6; // 0x401ee7
    int64_t v7; // 0x401ee7
    int64_t v8; // 0x401ee7
    int64_t v9; // 0x401ee7
    int64_t v10; // 0x401ee7
    int64_t v11; // 0x401ee7
    int64_t v12; // 0x401ee7
    int64_t v13; // 0x401ee7
    int64_t v14; // 0x401ee7
    int64_t v15; // 0x401ee7
    int64_t v16; // 0x401ee7
    int64_t v17; // 0x401ee7
    int64_t v18; // 0x401ee7
    int64_t result; // 0x401ee7
    int64_t v19; // 0x401ee7
    int32_t wc; // bp+132, 0x401ee7
    int64_t ps; // bp+136, 0x401ee7
    char v20; // 0x4024a0
    int64_t v21; // 0x4024a0
    int64_t v22; // 0x402848
    int64_t v23; // 0x401ee7
    int64_t v24; // 0x402867
    int32_t v25; // 0x401ee7
    while (true) {
      lab_0x401f38_2:
        // 0x401f38
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401ee7
        int64_t v27; // 0x401f6c
        while (true) {
          lab_0x401f38:
            // 0x401f38
            v5 = v26;
            bool v28 = v15 == v5; // 0x401f43
            if (v15 == -1) {
                // 0x401f45
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x401f53
            if (v28) {
                // break (via goto) -> 0x4026b8
                goto lab_0x4026b8;
            }
            // 0x401f5c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g46 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40254b
                    if (v25 % 2 == 0) {
                        goto lab_0x402091;
                    }
                    // 0x40296d
                    v26 = v5 + 1;
                    goto lab_0x401f38;
                }
                case 7: {
                    goto lab_0x402091;
                }
                case 8: {
                    goto lab_0x402091;
                }
                case 9: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402091;
                }
                case 12: {
                    goto lab_0x402091;
                }
                case 13: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40205d;
                }
                case 36: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402091;
                }
                case 38: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402091;
                }
                case 44: {
                    goto lab_0x402091;
                }
                case 45: {
                    goto lab_0x402091;
                }
                case 46: {
                    goto lab_0x402091;
                }
                case 47: {
                    goto lab_0x402091;
                }
                case 48: {
                    goto lab_0x402091;
                }
                case 49: {
                    goto lab_0x402091;
                }
                case 50: {
                    goto lab_0x402091;
                }
                case 51: {
                    goto lab_0x402091;
                }
                case 52: {
                    goto lab_0x402091;
                }
                case 53: {
                    goto lab_0x402091;
                }
                case 54: {
                    goto lab_0x402091;
                }
                case 55: {
                    goto lab_0x402091;
                }
                case 56: {
                    goto lab_0x402091;
                }
                case 57: {
                    goto lab_0x402091;
                }
                case 58: {
                    goto lab_0x402091;
                }
                case 59: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402091;
                }
                case 66: {
                    goto lab_0x402091;
                }
                case 67: {
                    goto lab_0x402091;
                }
                case 68: {
                    goto lab_0x402091;
                }
                case 69: {
                    goto lab_0x402091;
                }
                case 70: {
                    goto lab_0x402091;
                }
                case 71: {
                    goto lab_0x402091;
                }
                case 72: {
                    goto lab_0x402091;
                }
                case 73: {
                    goto lab_0x402091;
                }
                case 74: {
                    goto lab_0x402091;
                }
                case 75: {
                    goto lab_0x402091;
                }
                case 76: {
                    goto lab_0x402091;
                }
                case 77: {
                    goto lab_0x402091;
                }
                case 78: {
                    goto lab_0x402091;
                }
                case 79: {
                    goto lab_0x402091;
                }
                case 80: {
                    goto lab_0x402091;
                }
                case 81: {
                    goto lab_0x402091;
                }
                case 82: {
                    goto lab_0x402091;
                }
                case 83: {
                    goto lab_0x402091;
                }
                case 84: {
                    goto lab_0x402091;
                }
                case 85: {
                    goto lab_0x402091;
                }
                case 86: {
                    goto lab_0x402091;
                }
                case 87: {
                    goto lab_0x402091;
                }
                case 88: {
                    goto lab_0x402091;
                }
                case 89: {
                    goto lab_0x402091;
                }
                case 90: {
                    goto lab_0x402091;
                }
                case 91: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402091;
                }
                case 94: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402091;
                }
                case 96: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402091;
                }
                case 98: {
                    goto lab_0x402091;
                }
                case 99: {
                    goto lab_0x402091;
                }
                case 100: {
                    goto lab_0x402091;
                }
                case 101: {
                    goto lab_0x402091;
                }
                case 102: {
                    goto lab_0x402091;
                }
                case 103: {
                    goto lab_0x402091;
                }
                case 104: {
                    goto lab_0x402091;
                }
                case 105: {
                    goto lab_0x402091;
                }
                case 106: {
                    goto lab_0x402091;
                }
                case 107: {
                    goto lab_0x402091;
                }
                case 108: {
                    goto lab_0x402091;
                }
                case 109: {
                    goto lab_0x402091;
                }
                case 110: {
                    goto lab_0x402091;
                }
                case 111: {
                    goto lab_0x402091;
                }
                case 112: {
                    goto lab_0x402091;
                }
                case 113: {
                    goto lab_0x402091;
                }
                case 114: {
                    goto lab_0x402091;
                }
                case 115: {
                    goto lab_0x402091;
                }
                case 116: {
                    goto lab_0x402091;
                }
                case 117: {
                    goto lab_0x402091;
                }
                case 118: {
                    goto lab_0x402091;
                }
                case 119: {
                    goto lab_0x402091;
                }
                case 120: {
                    goto lab_0x402091;
                }
                case 121: {
                    goto lab_0x402091;
                }
                case 122: {
                    goto lab_0x402091;
                }
                case 123: {
                    goto lab_0x402035;
                }
                case 124: {
                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402035;
                }
                case 126: {
                    goto lab_0x40205d;
                }
                default: {
                    goto lab_0x402435;
                }
            }
        }
      lab_0x402435:
        if (v23 != 1) {
            // 0x4027a0
            ps = 0;
            int64_t len = v15; // 0x4027b0
            if (v15 == -1) {
                // 0x4027b2
                len = strlen((char *)str);
            }
            // 0x4027de
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40283f:
                // 0x40283f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402844
                int64_t v30 = v29 + str;
                v24 = function_404f30(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402dba_2;
                    }
                    case -1: {
                        goto lab_0x402dba_2;
                    }
                    case -2: {
                        // 0x402e9d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402ed7
                            v19 = v18;
                            int64_t v31 = v18; // 0x402eda
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402ee7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402ee0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402dba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402dba_2;
                    }
                    case 1: {
                        goto lab_0x402810;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4028bc
                        char v34 = *(char *)v33; // 0x4028cd
                        unsigned char v35; // 0x401ee7
                        if (v34 < 125) {
                            // 0x4028d8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4028ef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4028c0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4028cd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4028d8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4028ef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4028c0
                            v33++;
                        }
                        goto lab_0x402810;
                    }
                }
            }
            goto lab_0x402dba_2;
        } else {
            // 0x402484
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402091;
        }
    }
  lab_0x4026b8:
    // 0x4026b8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x402fba
        if (v8 > result) {
            // 0x402fc3
            *(char *)(v12 + result) = 0;
        }
        // 0x4022e7
        return result;
    }
    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402091:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4020a0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4022aa_2;
        }
    }
    int64_t v39 = result; // 0x4021a1
    char v40 = v20; // 0x4021a1
    int64_t v41 = v38; // 0x4021a1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4021a1
    int64_t v43 = v36; // 0x4021a1
    goto lab_0x40211d;
  lab_0x4022aa_2:
    // 0x4022e7
    return function_401e90(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402dba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402091;
    } else {
        uint64_t v49 = v46 + v5; // 0x40298e
        int64_t v50 = v5 + 1; // 0x402a71
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402a78
        char v52 = v20; // 0x402a78
        int64_t v53 = result; // 0x402a78
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402a41
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402a45
            int64_t v56 = v54 + 1; // 0x402a4a
            int64_t v57 = v51 + 1; // 0x402a71
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402a3c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402a41
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402a45
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
        goto lab_0x40211d;
    }
  lab_0x402810:
    // 0x402810
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40282f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402832
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402dba
        goto lab_0x402dba_2;
    }
    goto lab_0x40283f;
  lab_0x40205d:
    // 0x40205d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4022aa_2;
    }
    goto lab_0x402091;
  lab_0x402035:;
    bool v60 = v15 == 1; // 0x402040
    if (v15 == -1) {
        // 0x402042
        v60 = *(char *)v1 == 0;
    }
    // 0x40204e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402091;
    } else {
        goto lab_0x40205d;
    }
  lab_0x40211d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402122
        *(char *)(v44 + v45) = v40;
    }
    // 0x402126
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x401f38_2;
}
// Address range: 0x4030c0 - 0x40325e
int64_t function_4030c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4030c2
    int32_t * v3 = __errno_location(); // 0x4030dc
    int64_t v4 = (int64_t)g20; // 0x4030e1
    int32_t v5 = *v3; // 0x4030eb
    int64_t v6 = v4; // 0x403101
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403259
            function_404120(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403110
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403117
        int64_t v9; // 0x4030c0
        if (g20 == &g21) {
            int64_t v10 = function_403f30(0, v8); // 0x40323a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40323f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403f30(v4, v8); // 0x40312b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40313a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40313a
        int32_t v14 = v7; // 0x403141
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403171
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40317b
    int64_t * v17 = (int64_t *)v15; // 0x40317e
    uint64_t v18 = *v17; // 0x40317e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403181
    int64_t result = *v19; // 0x403181
    int64_t v20; // 0x4030c0
    uint64_t v21 = function_401e90(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4031a4
    if (v18 > v21) {
        // 0x40321b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4031b7
    *v17 = v22;
    if (result != (int64_t)&g36) {
        // 0x4031c7
        free((int64_t *)result);
    }
    int64_t result2 = function_403ed0(v22); // 0x4031e1
    *v19 = result2;
    int64_t v23; // 0x4030c0
    function_401e90(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40321b
    *v3 = v5;
    return result2;
}
// Address range: 0x403260 - 0x403294
int64_t function_403260(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403267
    int64_t result = function_4040d0(a1 == 0 ? (int64_t)&g37 : a1, 56); // 0x403286
    return result;
}
// Address range: 0x4032a0 - 0x4032af
int64_t function_4032a0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g37 : a1); // 0x4032ac
    return result;
}
// Address range: 0x4032b0 - 0x4032bf
int64_t function_4032b0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x4032b8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g37;
}
// Address range: 0x4032c0 - 0x4032f3
int64_t function_4032c0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 + 8 : a1 + 8; // 0x4032d9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4032de
    uint32_t v3 = *v2; // 0x4032de
    uint32_t v4 = (int32_t)a2 % 32; // 0x4032e2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403300 - 0x403313
int64_t function_403300(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g37 + 4 : a1 + 4); // 0x40330c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403320 - 0x40334b
int64_t function_403320(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403328
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403345
        abort();
        // UNREACHABLE
    }
    // 0x40333c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g37;
}
// Address range: 0x403350 - 0x4033c2
int64_t function_403350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g37 : a5; // 0x403372
    int32_t * v2 = __errno_location(); // 0x40337b
    uint32_t v3 = *(int32_t *)v1; // 0x40339b
    int64_t result = function_401e90(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4033aa
    return result;
}
// Address range: 0x4033d0 - 0x4034b1
int64_t function_4033d0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g37 : a4; // 0x4033f2
    int32_t * v2 = __errno_location(); // 0x4033f8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403417
    int32_t * v4 = (int32_t *)v1; // 0x40341a
    int64_t v5 = function_401e90(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403435
    int64_t v6 = v5 + 1; // 0x40343a
    int64_t result = function_403ed0(v6); // 0x40344f
    function_401e90(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403494
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40349d
    return result;
}
// Address range: 0x4034c0 - 0x4034ca
int64_t function_4034c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4034c0
    return function_4033d0(a1, a2, 0, a3);
}
// Address range: 0x4034d0 - 0x403565
int64_t function_4034d0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x4034d0
    int64_t v2 = v1; // 0x4034d0
    int64_t v3 = v2; // 0x4034e4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403503
        free((int64_t *)*(int64_t *)v4);
        v3 = &g47;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403500
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g47;
        }
    }
    int64_t v6 = v3; // 0x40351d
    if (g21 != 0x609280) {
        // 0x40351f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g36;
        v6 = &g47;
    }
    int64_t result = v6; // 0x403541
    if (g20 != &g21) {
        // 0x403543
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g47;
    }
    // 0x403556
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403570 - 0x403581
int64_t function_403570(void) {
    // 0x403570
    int64_t v1; // 0x403570
    return function_4030c0(v1, v1, -1, (int64_t *)&g37);
}
// Address range: 0x403590 - 0x40359a
int64_t function_403590(void) {
    // 0x403590
    int64_t v1; // 0x403590
    return function_4030c0(v1, v1, v1, (int64_t *)&g37);
}
// Address range: 0x4035a0 - 0x4035b6
int64_t function_4035a0(int64_t a1) {
    // 0x4035a0
    return function_4030c0(0, a1, -1, (int64_t *)&g37);
}
// Address range: 0x4035c0 - 0x4035d2
int64_t function_4035c0(int64_t a1, int64_t a2) {
    // 0x4035c0
    return function_4030c0(0, a1, a2, (int64_t *)&g37);
}
// Address range: 0x4035e0 - 0x403648
int64_t function_4035e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4035f0
    return function_4030c0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403650 - 0x4036b4
int64_t function_403650(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403660
    return function_4030c0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4036c0 - 0x4036cc
int64_t function_4036c0(int64_t a1, int64_t a2) {
    // 0x4036c0
    return function_4035e0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4036d0 - 0x4036df
int64_t function_4036d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4036d0
    return function_403650(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4036e0 - 0x403750
int64_t function_4036e0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x4036ed
    int128_t v2 = __asm_movdqa(g38); // 0x4036f5
    int128_t v3 = __asm_movdqa(g39); // 0x4036fd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403712
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403728
    uint32_t v6 = *v5; // 0x403728
    uint32_t v7 = (int32_t)a3 % 32; // 0x40372d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4030c0(0, a1, a2, &v4);
}
// Address range: 0x403750 - 0x40375d
int64_t function_403750(int64_t a1, int64_t a2) {
    // 0x403750
    return function_4036e0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403760 - 0x403771
int64_t function_403760(int64_t a1) {
    // 0x403760
    return function_4036e0(a1, -1, 58);
}
// Address range: 0x403780 - 0x40378a
int64_t function_403780(void) {
    // 0x403780
    int64_t v1; // 0x403780
    return function_4036e0(v1, v1, 58);
}
// Address range: 0x403790 - 0x4037fe
int64_t function_403790(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4037aa
    return function_4030c0(a1, a3, -1, &v1);
}
// Address range: 0x403800 - 0x40386c
int64_t function_403800(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x403807
    int128_t v2 = __asm_movdqa(g38); // 0x40380f
    int128_t v3 = __asm_movdqa(g39); // 0x403817
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403839
    if (a2 == 0 || a3 == 0) {
        // 0x403867
        abort();
        // UNREACHABLE
    }
    // 0x40384a
    return function_4030c0(a1, a4, a5, &v4);
}
// Address range: 0x403870 - 0x403879
int64_t function_403870(void) {
    // 0x403870
    int64_t v1; // 0x403870
    return function_403800(v1, v1, v1, v1, -1);
}
// Address range: 0x403880 - 0x403897
int64_t function_403880(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403880
    return function_403800(0, a1, a2, a3, -1);
}
// Address range: 0x4038a0 - 0x4038b3
int64_t function_4038a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4038a0
    return function_403800(0, a1, a2, a3, a4);
}
// Address range: 0x4038c0 - 0x4038ca
int64_t function_4038c0(void) {
    // 0x4038c0
    int64_t v1; // 0x4038c0
    return function_4030c0(v1, v1, v1, &g19);
}
// Address range: 0x4038d0 - 0x4038e2
int64_t function_4038d0(int64_t a1, int64_t a2) {
    // 0x4038d0
    return function_4030c0(0, a1, a2, &g19);
}
// Address range: 0x4038f0 - 0x403901
int64_t function_4038f0(void) {
    // 0x4038f0
    int64_t v1; // 0x4038f0
    return function_4030c0(v1, v1, -1, &g19);
}
// Address range: 0x403910 - 0x403926
int64_t function_403910(int64_t a1) {
    // 0x403910
    return function_4030c0(0, a1, -1, &g19);
}
// Address range: 0x403930 - 0x403d0d
int64_t function_403930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4039c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40394c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403966
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4039ab
    if (a6 < 10) {
        // 0x4039ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403ab2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403d10 - 0x403d30
int64_t function_403d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403d10
    if (a5 == 0) {
        // 0x403d2b
        return function_403930(a1, a2, a3, a4, a5, 0, (int64_t)&g47);
    }
    int64_t v1 = 0; // 0x403d17
    v1++;
    int64_t v2 = v1; // 0x403d29
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403d20
        v1++;
        v2 = v1;
    }
    // 0x403d2b
    return function_403930(a1, a2, a3, a4, a5, v2, (int64_t)&g47);
}
// Address range: 0x403d30 - 0x403d90
int64_t function_403d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403d30
    int64_t v3 = &v2; // 0x403d30
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403d63
    int64_t v6; // 0x403d4d
    int64_t * v7; // 0x403d6b
    int64_t v8; // 0x403d6b
    int64_t v9; // 0x403d77
    if (v5 < 48) {
        // 0x403d40
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403d83
            break;
        }
    } else {
        // 0x403d6b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403d83
            break;
        }
    }
    int64_t v10 = 10; // 0x403d61
    while (v4 != 9) {
        // 0x403d59
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403d40
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403d83
                break;
            }
        } else {
            // 0x403d6b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403d83
                break;
            }
        }
        // 0x403d59
        v10 = 10;
    }
    // 0x403d83
    return function_403930(a1, a2, a3, a4, v3, v10, (int64_t)&g47);
}
// Address range: 0x403d90 - 0x403e4c
int64_t function_403d90(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x403d90
    int64_t v1; // bp-168, 0x403d90
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403d90
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403d90
    int64_t v8; // 0x403d90
    int64_t v9; // bp-56, 0x403d90
    int64_t v10; // 0x403df5
    int64_t v11; // 0x403e19
    if ((int32_t)v6 < 48) {
        // 0x403de0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403e30
            break;
        }
    } else {
        // 0x403e12
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403e30
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403e0a
    int64_t v13 = 10; // 0x403e0a
    while (v5 != 9) {
        // 0x403e0c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403de0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403e30
                break;
            }
        } else {
            // 0x403e12
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403e30
                break;
            }
        }
        // 0x403e02
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403e30
    int64_t v14; // bp-136, 0x403d90
    int64_t result = function_403930(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g47); // 0x403e3f
    return result;
}
// Address range: 0x403e50 - 0x403ec4
int64_t function_403e50(int64_t a1) {
    // 0x403e50
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403eb3
    return fputs_unlocked(v1, g28);
}
// Address range: 0x403ed0 - 0x403eea
int64_t function_403ed0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403ed4
    if (size != 0 != (mem == NULL)) {
        // 0x403ee3
        return (int64_t)mem;
    }
    // 0x403ee5
    function_404120(size);
    // UNREACHABLE
}
// Address range: 0x403ef0 - 0x403f11
int64_t function_403ef0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403ef3
    int64_t v2 = v1; // 0x403ef3
    if (v2 < 0) {
        // 0x403f0b
        function_404120(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403f09
        return function_403ed0(v2);
    }
    // 0x403f0b
    function_404120(v2);
    // UNREACHABLE
}
// Address range: 0x403f20 - 0x403f22
int64_t function_403f20(void) {
    // 0x403f20
    int64_t v1; // 0x403f20
    return function_403ed0(v1);
}
// Address range: 0x403f30 - 0x403f66
int64_t function_403f30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403f58
        free(v1);
        return (int32_t)&g47 ^ (int32_t)&g47;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403f41
    if (a2 != 0 != (mem == NULL)) {
        // 0x403f50
        return (int64_t)mem;
    }
    // 0x403f61
    function_404120(a1);
    // UNREACHABLE
}
// Address range: 0x403f70 - 0x403f91
int64_t function_403f70(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403f73
    int64_t v2 = v1; // 0x403f73
    if (v2 < 0) {
        // 0x403f8b
        function_404120(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403f89
        return function_403f30(a1, v2);
    }
    // 0x403f8b
    function_404120(a1);
    // UNREACHABLE
}
// Address range: 0x403fa0 - 0x404026
int64_t function_403fa0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403ffb
            function_404120(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403f30(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403fe3
    if (a2 == 0) {
        // 0x404008
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403fe8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403ffb
        function_404120(a1);
        // UNREACHABLE
    }
    // 0x403fca
    *(int64_t *)a2 = v2;
    return function_403f30(a1, v2 * a3);
}
// Address range: 0x404030 - 0x404080
int64_t function_404030(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404030
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40407a
            function_404120(a1);
            // UNREACHABLE
        }
        // 0x404052
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403f30(a1, v1);
    }
    if (a2 == 0) {
        // 0x404065
        *(int64_t *)a2 = 128;
        return function_403f30(0, 128);
    }
    // 0x404078
    if (a2 < 0) {
        // 0x40407a
        function_404120(a1);
        // UNREACHABLE
    }
    // 0x404052
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403f30(a1, v1);
}
// Address range: 0x404080 - 0x404097
int64_t function_404080(int64_t a1, int64_t a2) {
    // 0x404080
    return (int64_t)memset((int64_t *)function_403ed0(a1), 0, (int32_t)a1);
}
// Address range: 0x4040a0 - 0x4040ce
int64_t function_4040a0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4040a7
    if ((int64_t)v1 < 0) {
        // 0x4040c9
        function_404120(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4040c9
        function_404120(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4040ba
    if (mem != NULL) {
        // 0x4040c4
        return (int64_t)mem;
    }
    // 0x4040c9
    function_404120(nmemb);
    // UNREACHABLE
}
// Address range: 0x4040d0 - 0x4040f8
int64_t function_4040d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_403ed0(a2); // 0x4040df
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404100 - 0x404113
int64_t function_404100(int64_t str) {
    // 0x404100
    return function_4040d0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404120 - 0x404151
int64_t function_404120(int64_t a1) {
    // 0x404120
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404160 - 0x40423f
int64_t function_404160(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40416c
    uint32_t v2 = *v1; // 0x40416c
    int64_t v3 = a2 & 0xffffffff; // 0x404171
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404174
    uint64_t v5 = (int64_t)*v4; // 0x404174
    int64_t v6; // 0x4041e2
    if (v3 <= v5) {
      lab_0x4041dc_2:
        // 0x4041dc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404162
    int64_t v8 = v2; // 0x404160
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4041dc
        goto lab_0x4041dc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404198
    int64_t v17; // 0x4041a6
    int64_t * v18; // 0x4041c0
    int64_t * v19; // 0x4041c3
    int64_t v20; // 0x4041ce
    int64_t v21; // 0x4041a6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4041a3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4041c0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4041d7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4041dc
            goto lab_0x4041dc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4041dc
            goto lab_0x4041dc_2;
        }
        // 0x404192
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40421b
    int64_t * v23 = (int64_t *)v22; // 0x404220
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404223
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404220
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404237
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40418d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4041dc
            goto lab_0x4041dc_2;
        }
        // 0x404192
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4041a3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4041c0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4041d7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4041dc
                goto lab_0x4041dc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4041dc
                goto lab_0x4041dc_2;
            }
            // 0x404192
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404200
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404220
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404237
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4041dc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404240 - 0x40485c
int64_t function_404240(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40425f
    int64_t v2 = *v1; // 0x40425f
    char * str2 = (char *)v2; // 0x40426c
    char c = *str2; // 0x40426c
    int64_t v3 = v2; // 0x404298
    int64_t v4 = 0; // 0x404240
    int32_t v5; // 0x404240
    int64_t v6; // 0x404240
    int64_t v7; // 0x404240
    int64_t v8; // 0x404240
    int64_t v9; // 0x404240
    int64_t v10; // 0x404240
    int64_t v11; // 0x404240
    int64_t v12; // 0x404240
    int64_t v13; // 0x404240
    int64_t str3; // 0x404240
    int64_t v14; // 0x404240
    int64_t v15; // 0x404240
    int64_t v16; // 0x404240
    int64_t v17; // 0x404240
    int32_t v18; // 0x404240
    int32_t v19; // 0x404240
    int32_t v20; // 0x404240
    int32_t v21; // 0x404240
    int32_t v22; // 0x404240
    int32_t v23; // 0x404240
    int32_t v24; // 0x404240
    int32_t v25; // 0x404240
    int32_t v26; // 0x404240
    int32_t v27; // 0x404240
    int32_t v28; // 0x404240
    int32_t v29; // 0x404240
    int64_t nmemb; // 0x404240
    int64_t v30; // 0x404240
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40429c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404298
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4042a8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4042ae
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404278
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4042dc
                int64_t v34; // 0x404240
                int64_t v35; // 0x404240
                if (strncmp(str, str2, n) == 0) {
                    // 0x4042e5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404460;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4042f6
                int64_t v37 = *(int64_t *)v36; // 0x4042fa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4042d0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4042e5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404460;
                        }
                    }
                    // 0x4042f6
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
                  lab_0x404346:
                    // 0x404346
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
                        goto lab_0x4043a0;
                    } else {
                        if (v11 == 0) {
                            // 0x404510
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4043a0;
                        } else {
                            if (v39 == 0) {
                                // 0x4044c0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40436a;
                                } else {
                                    // 0x4044cc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40436a;
                                    } else {
                                        // 0x4044da
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40436a;
                                        } else {
                                            goto lab_0x4043a0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40436a;
                            }
                        }
                    }
                }
              lab_0x4043b1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404586
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404732
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x404752
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40479f
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x4047b9
                            int64_t v45; // 0x4047bb
                            if (*(char *)v42 != 0) {
                                // 0x4047bb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4047b3
                            while (v17 + nmemb != v42) {
                                // 0x4047b5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4047bb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x4047a8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4047e0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x404594
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4046ef
                        free((int64_t *)v17);
                    }
                    // 0x4045e9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404600
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4044ae
                    return 63;
                }
                // 0x4043d0
                v5 = v39;
                if (v13 != 0) {
                    // 0x404454
                    v35 = v13;
                    v34 = v25;
                  lab_0x404460:;
                    int32_t * v49 = (int32_t *)a7; // 0x404470
                    uint32_t v50 = *v49; // 0x404470
                    int64_t v51 = v50; // 0x404470
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40447a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404483
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4046af
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40465a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4044ae
                            return 63;
                        }
                        // 0x4044f8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40480f
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40470d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404720
                                // 0x4044ae
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40461e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404632
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40449b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40449e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4044a2
                    int64_t result = v59; // 0x4044a8
                    if (v58 != 0) {
                        // 0x4044aa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4044ae
                    return result;
                }
            } else {
                // 0x4042ae
                v5 = v32;
            }
            // break -> 0x4043d5
            break;
        }
    }
    // 0x4043d5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4043ed
        if (*(char *)(v60 + 1) != 45) {
            // 0x4043f7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4044ae
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404539
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404426
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404436
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4043a0:
    // 0x4043a0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4043a0
    int64_t v63 = *(int64_t *)v62; // 0x4043a4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4043b1
        goto lab_0x4043b1;
    }
    goto lab_0x404346;
  lab_0x40436a:
    // 0x40436a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404240
    int32_t v65; // 0x404240
    int32_t v66; // 0x404240
    if (v27 != 0) {
        goto lab_0x4043a0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404520
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4043a0;
            } else {
                goto lab_0x404391;
            }
        } else {
            // 0x404385
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40467c
                int64_t v67 = (int64_t)mem; // 0x40467c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4043a0;
                } else {
                    // 0x40468f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404391;
                }
            } else {
                goto lab_0x404391;
            }
        }
    }
  lab_0x404391:
    // 0x404391
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4043a0;
}
// Address range: 0x404860 - 0x404e26
int64_t function_404860(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404881
    if (v3 < 1) {
        // 0x404a3e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40487d
    int32_t v5 = *(int32_t *)a7; // 0x404889
    uint64_t v6 = a1 & 0xffffffff; // 0x40488b
    int64_t v7 = v2; // 0x404890
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404893
    *v8 = 0;
    int64_t v9; // 0x404860
    int64_t v10; // 0x404860
    int64_t v11; // 0x404860
    int64_t v12; // 0x404860
    int64_t str; // 0x404860
    int64_t v13; // 0x404860
    int64_t v14; // 0x404860
    int64_t v15; // 0x404860
    int64_t v16; // 0x404860
    int64_t v17; // 0x404860
    int32_t v18; // 0x404860
    char v19; // 0x404860
    if (v5 == 0) {
        // 0x404a78
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4048aa;
    } else {
        // 0x4048a3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4048f0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4048f3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4049b8;
            } else {
                int64_t v22 = v7 + 1; // 0x404906
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404916
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4049cc;
                } else {
                    goto lab_0x404928;
                }
            }
        } else {
            goto lab_0x4048aa;
        }
    }
  lab_0x4048aa:
    // 0x4048aa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4048b0
    *v24 = 0;
    int64_t v25; // 0x404860
    int64_t v26; // 0x404860
    int64_t v27; // 0x404860
    switch (*(char *)&v2) {
        case 45: {
            // 0x4049a0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4049ad;
        }
        case 43: {
            // 0x404cb0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4049ad;
        }
        default: {
            // 0x4048cc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404c2f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404d48
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4049ad;
                } else {
                    // 0x404c3d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4048da;
                }
            } else {
                goto lab_0x4048da;
            }
        }
    }
  lab_0x4049b8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4049bf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404928;
    } else {
        goto lab_0x4049cc;
    }
  lab_0x4048da:
    // 0x4048da
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4049ad;
  lab_0x4049ad:
    // 0x4049ad
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4049b8;
  lab_0x404928:;
    uint32_t v30 = *(int32_t *)a7; // 0x404928
    int64_t v31 = v30; // 0x404928
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40492a
    if ((int64_t)*v32 > v31) {
        // 0x40492f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404932
    if (*v33 > v30) {
        // 0x404937
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40493a
    int64_t v35 = v31; // 0x40493e
    int64_t v36 = v15; // 0x40493e
    int64_t v37; // 0x404860
    int64_t v38; // 0x404860
    int64_t v39; // 0x404860
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404aa8
        int64_t v41 = v40; // 0x404aa8
        v2 = v41;
        int64_t v42; // 0x404860
        if (*v33 == v40) {
            // 0x404c90
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404c98
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404ab4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404ab8
                function_404160(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404ac8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404ad1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404ada
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404af1
            int64_t v47 = v45 & 0xffffffff; // 0x404af5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404afe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404b04
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404b06;
                }
            }
            int64_t v48 = v47 + 1; // 0x404ae0
            int64_t v49 = v48 & 0xffffffff; // 0x404ae0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404af1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404afe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404b04
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404b06;
                    }
                }
                // 0x404ae0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404ca8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404b06;
    } else {
        goto lab_0x404944;
    }
  lab_0x4049cc:
    // 0x4049cc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4049cf
    int64_t v51 = v12; // 0x4049cf
    int64_t v52 = v14; // 0x4049cf
    if (*(char *)v10 == 0) {
        goto lab_0x404928;
    } else {
        goto lab_0x4049d5;
    }
  lab_0x404944:;
    int32_t v53 = v35; // 0x404944
    int64_t v54; // 0x404860
    int64_t v55; // 0x404860
    int64_t v56; // 0x404860
    int64_t v57; // 0x404860
    int64_t v58; // 0x404860
    int64_t v59; // 0x404860
    char * v60; // 0x404860
    int64_t v61; // 0x404860
    int64_t v62; // 0x404959
    int64_t v63; // 0x404860
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404a93
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404a96;
    } else {
        // 0x40494c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404860
        int64_t v66 = v65 ? -1 : 1; // 0x404960
        int64_t v67 = (int64_t)"--"; // 0x404860
        int64_t v68 = v62; // 0x404860
        int64_t v69 = 3; // 0x404960
        unsigned char v70 = *(char *)v68; // 0x404960
        char v71 = *(char *)v67; // 0x404960
        char v72 = v71; // 0x404960
        bool v73 = false; // 0x404960
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
            // 0x404a50
            if (*(char *)v62 == 45) {
                // 0x404b10
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404b10
                if (c == 0) {
                    goto lab_0x404a5a;
                } else {
                    // 0x404b1d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404ba0;
                    } else {
                        if (c == 45) {
                            // 0x404d83
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404bf5;
                        } else {
                            // 0x404b2e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404ba0;
                            } else {
                                // 0x404b33
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404b54;
                                } else {
                                    // 0x404b3a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404ba0;
                                    } else {
                                        goto lab_0x404b54;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404a5a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404970
            v2 = v75;
            int32_t v76 = *v32; // 0x404973
            int64_t v77 = v35 + 1; // 0x404976
            int32_t v78 = v77; // 0x404979
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404ce0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404987
                    function_404160(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404995
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404a96;
        }
    }
  lab_0x4049d5:;
    // 0x4049d5
    int64_t v79; // bp-104, 0x404860
    int64_t v80 = &v79; // 0x40486a
    int64_t v81 = v50 + 1; // 0x4049d5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4049dc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4049e1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4049e5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4049e9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4049f1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4049f6
    int32_t c2 = v84; // 0x4049f6
    char * found_char_pos = strchr(str2, c2); // 0x4049f6
    int64_t v87 = *v82; // 0x4049fb
    v2 = v87;
    int64_t v88 = *v85; // 0x404a05
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404a10
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404d00
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404ccd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404a3e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4049f6
    char v91 = *(char *)(v90 + 1); // 0x404a2b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4049e5
        if (v91 != 58) {
            // 0x404a3e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404c54
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404d58
                *v8 = 0;
            } else {
                // 0x404d3c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404c7e
            *v83 = 0;
            // 0x404a3e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404c5e
        if (v93 != 0) {
            // 0x404cf0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404c7e
            *v83 = 0;
            // 0x404a3e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404c71
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404c7e
            *v83 = 0;
            // 0x404a3e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404dba
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404d6a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404d71
        // 0x404c7e
        *v83 = 0;
        // 0x404a3e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404bc9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404bcb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404df0
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404da1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404da8
            // 0x404a3e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404bd6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404bda
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404bf5;
  lab_0x404b06:
    // 0x404b06
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404944;
  lab_0x404bf5:;
    int64_t v99 = function_404240(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404c13
    // 0x404a3e
    return v99 & 0xffffffff;
  lab_0x404a96:;
    int32_t v100 = v55; // 0x404a96
    if (v100 != (int32_t)v59) {
        // 0x404a9a
        *(int32_t *)a7 = v100;
    }
    // 0x404a3e
    return 0xffffffff;
  lab_0x404a5a:
    // 0x404a5a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404a61
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404a3e
    return v99 & 0xffffffff;
  lab_0x404ba0:
    // 0x404ba0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4049d5;
  lab_0x404b54:
    // 0x404b54
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404240(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x404b7a
    if ((int32_t)v101 != -1) {
        // 0x404a3e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404b8f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404ba0;
}
// Address range: 0x404e30 - 0x404e86
int64_t function_404e30(int64_t a1) {
    // 0x404e30
    *(int32_t *)&g40 = g26;
    *(int32_t *)&g41 = g25;
    int64_t v1; // 0x404e30
    int64_t result = function_404860(v1, v1, v1, v1, v1, v1, &g40, a1 & 0xffffffff); // 0x404e56
    g26 = *(int32_t *)&g40;
    g45 = g43;
    *(int32_t *)&g24 = g42;
    return result;
}
// Address range: 0x404e90 - 0x404ea8
int64_t function_404e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e90
    return function_404e30(1);
}
// Address range: 0x404eb0 - 0x404ec3
int64_t function_404eb0(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int64_t * a5, int64_t a6) {
    // 0x404eb0
    return function_404e30(0);
}
// Address range: 0x404ed0 - 0x404ee5
int64_t function_404ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404ed0
    return function_404860(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404ef0 - 0x404f06
int64_t function_404ef0(void) {
    // 0x404ef0
    return function_404e30(0);
}
// Address range: 0x404f10 - 0x404f28
int64_t function_404f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404f10
    return function_404860(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x404f30 - 0x404faa
int64_t function_404f30(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x404f3b
    int64_t v2 = (int64_t)&g10; // 0x404f3b
    int32_t * pwc; // 0x404f30
    int64_t v3; // 0x404f30
    int64_t n; // 0x404f30
    if (a2 == 0) {
        goto lab_0x404f82;
    } else {
        // 0x404f3d
        if (a3 == 0) {
            // 0x404f68
            return -2;
        }
        // 0x404f49
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x404f82;
        } else {
            goto lab_0x404f54;
        }
    }
  lab_0x404f82:
    // 0x404f82
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x404f30
    pwc = (int32_t *)&v4;
    goto lab_0x404f54;
  lab_0x404f54:;
    char * wstr = (char *)v3; // 0x404f5a
    int64_t ps; // 0x404f30
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x404f5a
    int64_t result = v5; // 0x404f5a
    if (v5 < 0xfffffffe) {
        // 0x404f68
        return result;
    }
    int64_t result2 = result; // 0x404f99
    if ((char)function_405010(0, v3) == 0) {
        // 0x404f9b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404f68
    return result2;
}
// Address range: 0x404fb0 - 0x40500d
int64_t function_404fb0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404fb7
    int64_t v2; // 0x404fb0
    int64_t result = function_4055e0(a1, v2); // 0x404fc8
    if ((v2 & 32) != 0) {
        // 0x404ff0
        if ((int32_t)result == 0) {
            // 0x404ff4
            *__errno_location() = 0;
        }
        // 0x404fea
        return 0xffffffff;
    }
    // 0x404fd1
    if ((int32_t)result == 0) {
        // 0x404fea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x404fd8
    if (v1 == 0) {
        // 0x404fda
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x404fea
    return result2;
}
// Address range: 0x405010 - 0x40506e
int64_t function_405010(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405016
    if (locale == NULL) {
        // 0x405043
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405016
    bool v2; // 0x405010
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405010
    int64_t v5 = v1; // 0x405010
    int64_t v6 = 2; // 0x405035
    unsigned char v7 = *(char *)v5; // 0x405035
    char v8 = *(char *)v4; // 0x405035
    char v9 = v8; // 0x405035
    bool v10 = false; // 0x405035
    while (v7 == v8) {
        // 0x405028
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405041
    int64_t v13 = v1; // 0x405041
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405043
        return 0;
    }
    int64_t v14 = 6; // 0x405041
    unsigned char v15 = *(char *)v13; // 0x40505d
    char v16 = *(char *)v12; // 0x40505d
    char v17 = v16; // 0x40505d
    bool v18 = false; // 0x40505d
    while (v15 == v16) {
        // 0x405050
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
// Address range: 0x405070 - 0x4055d2
int64_t function_405070(void) {
    char * v1 = nl_langinfo(14); // 0x405086
    char * v2 = g44; // 0x40508b
    char * v3; // 0x405070
    int64_t v4; // 0x405070
    int64_t v5; // 0x405070
    int64_t v6; // 0x405070
    int64_t v7; // 0x405070
    int32_t size; // 0x405070
    int32_t size2; // 0x405070
    int32_t len; // 0x405142
    int64_t v8; // 0x405142
    char * env_val; // 0x40512d
    if (v2 == NULL) {
        // 0x405128
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405195;
        } else {
            // 0x40513a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405195;
            } else {
                // 0x40513f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40512d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4055c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405195;
                    } else {
                        // 0x405539
                        size2 = len + 14;
                        goto lab_0x40515b;
                    }
                } else {
                    goto lab_0x40515b;
                }
            }
        }
    } else {
        // 0x405070
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4050aa;
    }
  lab_0x4053dc:;
    // 0x4053dc
    struct _IO_FILE * stream; // 0x40521b
    int32_t v10 = __uflow(stream); // 0x4053df
    int64_t v11; // 0x405070
    int64_t v12 = v11; // 0x4053e9
    int64_t v13; // 0x405070
    int64_t v14 = v13; // 0x4053e9
    int32_t v15 = v10; // 0x4053e9
    int64_t v16; // 0x405070
    int64_t v17 = v16; // 0x4053e9
    int64_t v18 = v11; // 0x4053e9
    int64_t v19 = v13; // 0x4053e9
    int64_t v20 = v16; // 0x4053e9
    if (v10 == -1) {
        // break -> 0x4053ef
        goto lab_0x4053ef;
    }
    goto lab_0x405269;
  lab_0x40525e:;
    // 0x40525e
    int64_t v90; // 0x405070
    int64_t * v32; // 0x405250
    *v32 = v90 + 1;
    int64_t v89; // 0x405070
    v12 = v89;
    int64_t v91; // 0x405070
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405070
    v17 = v92;
    goto lab_0x405269;
  lab_0x405269:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405070
    int32_t v25; // bp-120, 0x405070
    int32_t v26; // bp-184, 0x405070
    int64_t v27; // 0x40521b
    int64_t v28; // 0x405238
    int64_t v29; // 0x40523d
    int64_t * v30; // 0x405254
    switch (c) {
        case 32: {
            goto lab_0x405250;
        }
        case 10: {
            goto lab_0x405250;
        }
        case 9: {
            goto lab_0x405250;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405441
            int32_t v33; // 0x405070
            char v34; // 0x405070
            int32_t v35; // 0x40544e
            if (v31 < *v30) {
                // 0x405420
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40544b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405441
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405420
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40544b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405430
                v36 = v33;
            }
            // 0x40551f
            if (v36 == -1) {
                // break -> 0x4053ef
                break;
            }
            goto lab_0x405250;
        }
        default: {
            // 0x40527f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4053ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4052a8
            int64_t v39 = v37 + 4; // 0x4052aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4052b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4052b8
            while (v41 == 0) {
                // 0x4052a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4052d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4052e2
            int64_t v45 = v43 + 4; // 0x4052e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4052f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4052f2
            while (v47 == 0) {
                // 0x4052e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4052df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405308
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405318
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40531c
            int64_t v52 = v51 + v48; // 0x405325
            int64_t * mem; // 0x405070
            int64_t v53; // 0x405070
            int64_t v54; // 0x405070
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40545b
                int64_t v56 = v55 + 3; // 0x405467
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405341
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405350
            if (mem == NULL) {
                // 0x40557c
                free((int64_t *)v21);
                function_4055e0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x4051f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405368
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405372
            uint32_t v62 = (int32_t)v59; // 0x405375
            int64_t v63; // 0x405070
            if (v62 >= 8) {
                // 0x405484
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40549e
                int64_t v66 = v61 - v65; // 0x4054a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4054ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4054be
                    int64_t v70 = v69 & 0xffffffff; // 0x4054be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4054bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40554f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405387
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40538b
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
            int64_t v73 = v51 + 1; // 0x40539b
            int64_t v74 = v60 - 1; // 0x40539f
            uint32_t v75 = (int32_t)v73; // 0x4053a4
            int64_t v76; // 0x405070
            if (v75 >= 8) {
                // 0x4054d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4054dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4054ec
                int64_t v80 = v74 - v79; // 0x4054f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4054fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40550b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405509
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405566
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40556e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4053b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4053ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4055b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4053ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40525e;
            } else {
                goto lab_0x4053dc;
            }
        }
    }
  lab_0x405250:;
    int64_t v93 = v23; // 0x405070
    int64_t v94 = v22; // 0x405070
    int64_t v95 = v21; // 0x405070
    goto lab_0x405250_2;
  lab_0x405195:;
    int64_t * mem3 = malloc(size); // 0x405195
    int64_t v97 = (int64_t)&g10; // 0x4051a0
    int64_t v98; // 0x405070
    int64_t path; // 0x405070
    if (mem3 == NULL) {
        goto lab_0x405172;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405195
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4051b6;
    }
  lab_0x4050aa:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40509d
    char v100 = *v3; // 0x4050aa
    int64_t v101; // 0x405070
    if (v100 == 0) {
        // 0x405104
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405070
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405070
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4050f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4050f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4050c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4050cd
        char v107 = *(char *)v106; // 0x4050d2
        v102 = v107;
        if (v107 == 0) {
            // 0x405104
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4050db
    v104 = v103 + 1;
  lab_0x4050f7:
    // 0x405104
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405172:;
    char * v108 = (char *)v97;
    g44 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4050aa;
  lab_0x4051b6:;
    int64_t v109 = v98 + path; // 0x4051b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4051e2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x405211
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405542
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x405235
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405250_2:;
                uint64_t v96 = *v32; // 0x405250
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4053dc;
                } else {
                    goto lab_0x40525e;
                }
            }
          lab_0x4053ef:
            // 0x4053ef
            function_4055e0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40540e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4051f4;
  lab_0x40515b:;
    int64_t * mem4 = malloc(size2); // 0x40515b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405201
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4051b6;
    } else {
        goto lab_0x405172;
    }
  lab_0x4051f4:
    // 0x4051f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405172;
}
// Address range: 0x4055e0 - 0x40565b
int64_t function_4055e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4055e7
    if (fileno(stream) < 0) {
        // 0x405647
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4055fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40562b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405647
            return fclose(stream);
        }
    }
    // 0x4055fc
    if ((int32_t)function_405660(a1, v1) == 0) {
        // 0x405647
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405608
    int32_t v3 = *v2; // 0x405610
    int64_t result = fclose(stream); // 0x40561e
    if (v3 != 0) {
        // 0x405650
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405620
    return result;
}
// Address range: 0x405660 - 0x4056a0
int64_t function_405660(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40567a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40567a
        return fflush(stream);
    }
    // 0x405688
    function_4056a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4056a0 - 0x4056f7
int64_t function_4056a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4056a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4056aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4056db
    int64_t result = -1; // 0x4056e4
    if (v1 != -1) {
        // 0x4056e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4056f2
    return result;
}
// Address range: 0x405700 - 0x40575d
int64_t function_405700(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405700
    return function_4011f0();
}
// Address range: 0x405760 - 0x405761
int64_t function_405760(void) {
    // 0x405760
    int64_t result; // 0x405760
    return result;
}
// Address range: 0x405770 - 0x405788
int64_t function_405770(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405770
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x405788 - 0x4057a8
int64_t function_405788(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x405792
    while (*(int64_t *)v1 != -1) {
        // 0x405793
        v1 -= 8;
    }
    // 0x4057a4
    return result;
}
