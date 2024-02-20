#include "decompile_retdec.h"
// Address range: 0x4015e0 - 0x4015e5
int64_t function_4015e0(void) {
    // 0x4015e0
    abort();
    // UNREACHABLE
}
// Address range: 0x4015e5 - 0x4015ea
int64_t function_4015e5(void) {
    // 0x4015e5
    abort();
    // UNREACHABLE
}
// Address range: 0x4015ea - 0x4015ef
int64_t function_4015ea(void) {
    // 0x4015ea
    abort();
    // UNREACHABLE
}
// Address range: 0x4015ef - 0x4015f4
int64_t function_4015ef(void) {
    // 0x4015ef
    abort();
    // UNREACHABLE
}
// Address range: 0x4015f4 - 0x4015f9
int64_t function_4015f4(void) {
    // 0x4015f4
    abort();
    // UNREACHABLE
}
// Address range: 0x4015f9 - 0x4015fe
int64_t function_4015f9(void) {
    // 0x4015f9
    abort();
    // UNREACHABLE
}
// Address range: 0x401600 - 0x4017b7
int64_t function_401600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401610
    function_401ed0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_405970(0x401d00, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2; // 0x401600
    int64_t v3; // 0x401600
    int64_t v4; // 0x401600
    int64_t v5; // 0x401600
    int64_t v6; // 0x401600
    int64_t v7; // 0x40167c
    while (true) {
        // 0x401650
        v2 = 0;
        v3 = 0;
        v5 = 0;
        while (true) {
          lab_0x401650:
            // 0x401650
            v6 = v5;
            v4 = v3;
            uint32_t v8 = (int32_t)function_4050b0(v1, a2, "+as:z", &g2, 0, a6);
            v7 = v6;
            switch (v8) {
                case -1: {
                    goto lab_0x4016f0;
                }
                case 97: {
                    goto lab_0x401683;
                }
                default: {
                    if (v8 <= 97) {
                        if (v8 == -131) {
                            // 0x4016af
                            function_403f70((int64_t)g29, "basename", "GNU coreutils", (int64_t)g17, "David MacKenzie", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v8 == -130) {
                            // 0x4016e9
                            function_401970(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401774;
                    }
                    if (v8 != 115) {
                        // break -> 0x401690
                        break;
                    }
                    // 0x40167c
                    v7 = g46;
                    goto lab_0x401683;
                }
            }
        }
    }
  lab_0x4016f0:;
    uint32_t v9 = *(int32_t *)0x60923c; // 0x4016f0
    int64_t v10 = v9; // 0x4016f0
    if (v1 <= v10) {
        // 0x401755
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
      lab_0x401774:
        // 0x401774
        function_401970(1);
        // UNREACHABLE
    }
    if (v4 != 0) {
        // 0x401728
        function_4018a0(*(int64_t *)((0x100000000 * v10 >> 29) + a2), v6, v2);
        g26 = &g27;
        int64_t v11 = &g27; // 0x40174a
        while (v1 > (int64_t)&g27) {
            // 0x401728
            function_4018a0(*(int64_t *)((0x100000000 * v11 >> 29) + a2), v6, v2);
            g26 = &g27;
            v11 = &g27;
        }
        // 0x40171d
        return 0;
    }
    int64_t v12 = v9; // 0x4016ff
    uint32_t v13 = v9 + 2;
    if (v1 > (int64_t)v13) {
        // 0x40177e
        function_403af0(*(int64_t *)(a2 + 16 + 8 * v12));
        error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
        function_401970(1);
        // UNREACHABLE
    }
    int64_t v14 = 8 * v12 + a2;
    int64_t v15 = 0; // 0x401712
    if (v13 == (int32_t)a1) {
        // 0x40174e
        v15 = *(int64_t *)(v14 + 8);
    }
    // 0x401714
    function_4018a0(*(int64_t *)v14, v15, v2);
    // 0x40171d
    return 0;
  lab_0x401683:
    // 0x401683
    v3 = 1;
    v5 = v7;
    goto lab_0x401650;
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
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401886
        result2 = function_4017eb();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
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
// Address range: 0x4018a0 - 0x40196f
int64_t function_4018a0(int64_t a1, uint64_t str2, int64_t a3) {
    uint64_t v1 = function_401da0(a1, str2, a3); // 0x4018b0
    function_401e90(v1);
    char * str = (char *)v1;
    if (str2 != 0) {
        // 0x4018c5
        if (*str != 47) {
            int32_t len = strlen(str); // 0x401913
            int64_t v2 = (int64_t)strlen((char *)str2) + str2; // 0x401927
            uint64_t v3 = v1 + (int64_t)len;
            while (v2 > str2 == v1 < v3) {
                // 0x40193a
                v2--;
                int64_t v4 = v3 - 1; // 0x40193e
                if (*(char *)v4 != *(char *)v2) {
                    goto lab_0x4018ca;
                }
                v3 = v4;
            }
            if (v1 < v3) {
                // 0x401959
                *(char *)v3 = 0;
            }
        }
    }
  lab_0x4018ca:
    // 0x4018ca
    fputs_unlocked(str, g29);
    int64_t v5 = (int64_t)g29; // 0x4018dd
    int64_t v6 = (char)a3 == 0 ? 10 : 0; // 0x4018e6
    int64_t * v7 = (int64_t *)(v5 + 40); // 0x4018e9
    uint64_t v8 = *v7; // 0x4018e9
    if (v8 >= *(int64_t *)(v5 + 48)) {
        // 0x401968
        __overflow(g29, (int32_t)v6);
    } else {
        // 0x4018f3
        *v7 = v8 + 1;
        *(char *)v8 = (char)v6;
    }
    // 0x4018fe
    free((int64_t *)v1);
    return &g48;
}
// Address range: 0x401970 - 0x401cdd
int64_t function_401970(int32_t status) {
    // 0x401970
    if (status != 0) {
        // 0x40198a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4019af
        exit(status);
        // UNREACHABLE
    }
    // 0x4019b6
    __printf_chk(1, dcgettext(NULL, "Usage: %s NAME [SUFFIX]\n  or:  %s OPTION... NAME...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print NAME with any leading directory components removed.\nIf specified, also remove a trailing SUFFIX.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -a, --multiple       support multiple arguments and treat each as a NAME\n  -s, --suffix=SUFFIX  remove a trailing SUFFIX; implies -a\n  -z, --zero           end each output line with NUL, not newline\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  %s /usr/bin/sort          -> \"sort\"\n  %s include/stdio.h .h     -> \"stdio\"\n  %s -s .h include/stdio.h  -> \"stdio\"\n  %s -a any/str1 any/str2   -> \"str1\" followed by \"str2\"\n", 5));
    int64_t v1 = &g1; // bp-136, 0x401ab9
    bool v2; // 0x401970
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401b40
    int64_t v6 = *(int64_t *)v5; // 0x401b44
    int64_t v7 = 9; // 0x401b4a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"basename";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401b56
        char v11 = *(char *)v9; // 0x401b56
        char v12 = v11; // 0x401b56
        bool v13 = false; // 0x401b56
        while (v10 == v11) {
            // 0x401b4c
            v7--;
            int64_t v14 = v9 + v3; // 0x401b56
            int64_t v15 = v8 + v3; // 0x401b56
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
            // break -> 0x401b62
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 9;
    }
    // 0x401b62
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401c74;
        } else {
            // 0x401c5e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401cb3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401bc4;
            } else {
                goto lab_0x401c74;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401bc4;
        } else {
            // 0x401baa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401cb3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401bc4;
            } else {
                goto lab_0x401bc4;
            }
        }
    }
  lab_0x401c74:
    // 0x401c74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401c04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4019af
    exit(status);
    // UNREACHABLE
  lab_0x401bc4:
    // 0x401bc4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401c04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4019af
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401ce0 - 0x401ce8
int64_t function_401ce0(int64_t a1) {
    // 0x401ce0
    g35 = a1;
    int64_t result; // 0x401ce0
    return result;
}
// Address range: 0x401cf0 - 0x401cf8
int64_t function_401cf0(int64_t a1) {
    // 0x401cf0
    g34 = a1;
    int64_t result; // 0x401cf0
    return result;
}
// Address range: 0x401d00 - 0x401d9e
int64_t function_401d00(void) {
    // 0x401d00
    int32_t * err_num; // 0x401d16
    if ((int32_t)function_4051b0((int64_t)g29) == 0) {
        goto lab_0x401d2c;
    } else {
        // 0x401d16
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x401d43;
        } else {
            // 0x401d27
            if (*err_num != 32) {
                goto lab_0x401d43;
            } else {
                goto lab_0x401d2c;
            }
        }
    }
  lab_0x401d2c:;
    int64_t result = function_4051b0((int64_t)g31); // 0x401d33
    if ((int32_t)result == 0) {
        // 0x401d3c
        return result;
    }
    // 0x401d7e
    _exit(g18);
    // UNREACHABLE
  lab_0x401d43:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401d4f
    if (g35 == 0) {
        // 0x401d89
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401d63
        error(0, *err_num, "%s: %s", (char *)function_403940((int64_t)g35), v1);
    }
    // 0x401d7e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401da0 - 0x401df9
int64_t function_401da0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_401e00(a1, a2); // 0x401da9
    if (*(char *)v1 == 0) {
        // 0x401de0
        function_401e60(a1);
        return function_404340();
    }
    // 0x401db3
    function_401e60(v1);
    return function_404340();
}
// Address range: 0x401e00 - 0x401e5b
int64_t function_401e00(int64_t a1, int64_t a2) {
    // 0x401e00
    int64_t v1; // 0x401e00
    char v2 = v1;
    int64_t v3 = a1; // 0x401e09
    int64_t v4 = a1; // 0x401e09
    char v5 = v2; // 0x401e09
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x401e14
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x401e10
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x401e1e
    if (v5 == 0) {
      lab_0x401e5a:
        // 0x401e5a
        return result;
    }
    int64_t v7 = v4; // 0x401e48
    int64_t v8 = 0; // 0x401e48
    int64_t v9; // 0x401e00
    int64_t v10; // 0x401e4a
    char v11; // 0x401e4e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x401e45
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x401e4a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x401e45
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x401e3a
    char v14 = *(char *)v13; // 0x401e3e
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
            // 0x401e45
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x401e4a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x401e45
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x401e30
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x401e5a
    return result2;
}
// Address range: 0x401e60 - 0x401e8b
int64_t function_401e60(int64_t str) {
    int32_t len = strlen((char *)str); // 0x401e64
    int64_t result = len; // 0x401e64
    if (len < 2) {
        // 0x401e7a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x401e78
    while (*(char *)(v1 + str) == 47) {
        // 0x401e80
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x401e7a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x401e7a
    return result2;
}
// Address range: 0x401e90 - 0x401ec3
int64_t function_401e90(int64_t a1) {
    // 0x401e90
    int64_t v1; // 0x401e90
    int64_t v2 = function_401e00(a1, v1); // 0x401e99
    int64_t v3 = *(char *)v2 == 0 ? a1 : v2; // 0x401ea4
    int64_t v4 = function_401e60(v3); // 0x401eab
    char * v5 = (char *)(v3 + v4); // 0x401eb3
    *v5 = 0;
    return v4 & -256 | (int64_t)(*v5 != 0);
}
// Address range: 0x401ed0 - 0x401f69
int64_t function_401ed0(int64_t str) {
    // 0x401ed0
    if (str == 0) {
        // 0x401f49
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401ede
    int64_t result = (int64_t)found_char_pos; // 0x401ede
    if (found_char_pos == NULL) {
        // 0x401f39
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401ee8
    if (v1 - str < 7) {
        // 0x401f39
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x401ef8
    bool v2; // 0x401ed0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401ed0
    int64_t v5 = result - 6; // 0x401ed0
    int64_t v6 = 7; // 0x401f06
    unsigned char v7 = *(char *)v5; // 0x401f06
    char v8 = *(char *)v4; // 0x401f06
    char v9 = v8; // 0x401f06
    bool v10 = false; // 0x401f06
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
    int64_t v12 = (int64_t)"lt-"; // 0x401f10
    int64_t v13 = v1; // 0x401f10
    int64_t v14 = 3; // 0x401f10
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401f39
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401f22
    char v16 = *(char *)v12; // 0x401f22
    char v17 = v16; // 0x401f22
    bool v18 = false; // 0x401f22
    while (v15 == v16) {
        // 0x401f12
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
    int64_t v20 = v1; // 0x401f2c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401f2e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x401f39
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x401f70 - 0x402062
int64_t function_401f70(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401f84
    int64_t result = (int64_t)v1; // 0x401f84
    if (result != a1) {
        // 0x401f91
        return result;
    }
    int64_t v2 = function_405270(); // 0x401fa0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402056
    if (v3 == 85) {
        // 0x401fb0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402048
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x401fde
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x401feb
        // 0x401f91
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402048
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40202d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40203a
    // 0x401f91
    return result4;
}
// Address range: 0x402070 - 0x4020c7
int64_t function_402070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402070
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4020b8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4020c7 - 0x403291
int64_t function_4020c7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402111
    int64_t v3 = 0; // 0x402111
    int64_t v4; // 0x4020c7
    int64_t v5; // 0x4020c7
    int64_t v6; // 0x4020c7
    int64_t v7; // 0x4020c7
    int64_t v8; // 0x4020c7
    int64_t v9; // 0x4020c7
    int64_t v10; // 0x4020c7
    int64_t v11; // 0x4020c7
    int64_t v12; // 0x4020c7
    int64_t v13; // 0x4020c7
    int64_t v14; // 0x4020c7
    int64_t v15; // 0x4020c7
    int64_t v16; // 0x4020c7
    int64_t v17; // 0x4020c7
    int64_t v18; // 0x4020c7
    int64_t result; // 0x4020c7
    int64_t v19; // 0x4020c7
    int32_t wc; // bp+132, 0x4020c7
    int64_t ps; // bp+136, 0x4020c7
    char v20; // 0x402680
    int64_t v21; // 0x402680
    int64_t v22; // 0x402a28
    int64_t v23; // 0x4020c7
    int64_t v24; // 0x402a47
    int32_t v25; // 0x4020c7
    while (true) {
      lab_0x402118_2:
        // 0x402118
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4020c7
        int64_t v27; // 0x40214c
        while (true) {
          lab_0x402118:
            // 0x402118
            v5 = v26;
            bool v28 = v15 == v5; // 0x402123
            if (v15 == -1) {
                // 0x402125
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402133
            if (v28) {
                // break (via goto) -> 0x402898
                goto lab_0x402898;
            }
            // 0x40213c
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
                    // 0x40272b
                    if (v25 % 2 == 0) {
                        goto lab_0x402271;
                    }
                    // 0x402b4d
                    v26 = v5 + 1;
                    goto lab_0x402118;
                }
                case 7: {
                    goto lab_0x402271;
                }
                case 8: {
                    goto lab_0x402271;
                }
                case 9: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402271;
                }
                case 12: {
                    goto lab_0x402271;
                }
                case 13: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40223d;
                }
                case 36: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402271;
                }
                case 38: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402271;
                }
                case 44: {
                    goto lab_0x402271;
                }
                case 45: {
                    goto lab_0x402271;
                }
                case 46: {
                    goto lab_0x402271;
                }
                case 47: {
                    goto lab_0x402271;
                }
                case 48: {
                    goto lab_0x402271;
                }
                case 49: {
                    goto lab_0x402271;
                }
                case 50: {
                    goto lab_0x402271;
                }
                case 51: {
                    goto lab_0x402271;
                }
                case 52: {
                    goto lab_0x402271;
                }
                case 53: {
                    goto lab_0x402271;
                }
                case 54: {
                    goto lab_0x402271;
                }
                case 55: {
                    goto lab_0x402271;
                }
                case 56: {
                    goto lab_0x402271;
                }
                case 57: {
                    goto lab_0x402271;
                }
                case 58: {
                    goto lab_0x402271;
                }
                case 59: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402271;
                }
                case 66: {
                    goto lab_0x402271;
                }
                case 67: {
                    goto lab_0x402271;
                }
                case 68: {
                    goto lab_0x402271;
                }
                case 69: {
                    goto lab_0x402271;
                }
                case 70: {
                    goto lab_0x402271;
                }
                case 71: {
                    goto lab_0x402271;
                }
                case 72: {
                    goto lab_0x402271;
                }
                case 73: {
                    goto lab_0x402271;
                }
                case 74: {
                    goto lab_0x402271;
                }
                case 75: {
                    goto lab_0x402271;
                }
                case 76: {
                    goto lab_0x402271;
                }
                case 77: {
                    goto lab_0x402271;
                }
                case 78: {
                    goto lab_0x402271;
                }
                case 79: {
                    goto lab_0x402271;
                }
                case 80: {
                    goto lab_0x402271;
                }
                case 81: {
                    goto lab_0x402271;
                }
                case 82: {
                    goto lab_0x402271;
                }
                case 83: {
                    goto lab_0x402271;
                }
                case 84: {
                    goto lab_0x402271;
                }
                case 85: {
                    goto lab_0x402271;
                }
                case 86: {
                    goto lab_0x402271;
                }
                case 87: {
                    goto lab_0x402271;
                }
                case 88: {
                    goto lab_0x402271;
                }
                case 89: {
                    goto lab_0x402271;
                }
                case 90: {
                    goto lab_0x402271;
                }
                case 91: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402271;
                }
                case 94: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402271;
                }
                case 96: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402271;
                }
                case 98: {
                    goto lab_0x402271;
                }
                case 99: {
                    goto lab_0x402271;
                }
                case 100: {
                    goto lab_0x402271;
                }
                case 101: {
                    goto lab_0x402271;
                }
                case 102: {
                    goto lab_0x402271;
                }
                case 103: {
                    goto lab_0x402271;
                }
                case 104: {
                    goto lab_0x402271;
                }
                case 105: {
                    goto lab_0x402271;
                }
                case 106: {
                    goto lab_0x402271;
                }
                case 107: {
                    goto lab_0x402271;
                }
                case 108: {
                    goto lab_0x402271;
                }
                case 109: {
                    goto lab_0x402271;
                }
                case 110: {
                    goto lab_0x402271;
                }
                case 111: {
                    goto lab_0x402271;
                }
                case 112: {
                    goto lab_0x402271;
                }
                case 113: {
                    goto lab_0x402271;
                }
                case 114: {
                    goto lab_0x402271;
                }
                case 115: {
                    goto lab_0x402271;
                }
                case 116: {
                    goto lab_0x402271;
                }
                case 117: {
                    goto lab_0x402271;
                }
                case 118: {
                    goto lab_0x402271;
                }
                case 119: {
                    goto lab_0x402271;
                }
                case 120: {
                    goto lab_0x402271;
                }
                case 121: {
                    goto lab_0x402271;
                }
                case 122: {
                    goto lab_0x402271;
                }
                case 123: {
                    goto lab_0x402215;
                }
                case 124: {
                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402215;
                }
                case 126: {
                    goto lab_0x40223d;
                }
                default: {
                    goto lab_0x402615;
                }
            }
        }
      lab_0x402615:
        if (v23 != 1) {
            // 0x402980
            ps = 0;
            int64_t len = v15; // 0x402990
            if (v15 == -1) {
                // 0x402992
                len = strlen((char *)str);
            }
            // 0x4029be
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402a1f:
                // 0x402a1f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402a24
                int64_t v30 = v29 + str;
                v24 = function_405130(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402f9a_2;
                    }
                    case -1: {
                        goto lab_0x402f9a_2;
                    }
                    case -2: {
                        // 0x40307d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4030b7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4030ba
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4030c7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4030c0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402f9a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402f9a_2;
                    }
                    case 1: {
                        goto lab_0x4029f0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402a9c
                        char v34 = *(char *)v33; // 0x402aad
                        unsigned char v35; // 0x4020c7
                        if (v34 < 125) {
                            // 0x402ab8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402acf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402070(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402aa0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402aad
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402ab8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402acf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402070(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402aa0
                            v33++;
                        }
                        goto lab_0x4029f0;
                    }
                }
            }
            goto lab_0x402f9a_2;
        } else {
            // 0x402664
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402271;
        }
    }
  lab_0x402898:
    // 0x402898
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40319a
        if (v8 > result) {
            // 0x4031a3
            *(char *)(v12 + result) = 0;
        }
        // 0x4024c7
        return result;
    }
    return function_402070(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402271:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402280
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40248a_2;
        }
    }
    int64_t v39 = result; // 0x402381
    char v40 = v20; // 0x402381
    int64_t v41 = v38; // 0x402381
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402381
    int64_t v43 = v36; // 0x402381
    goto lab_0x4022fd;
  lab_0x40248a_2:
    // 0x4024c7
    return function_402070(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402f9a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402271;
    } else {
        uint64_t v49 = v46 + v5; // 0x402b6e
        int64_t v50 = v5 + 1; // 0x402c51
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402c58
        char v52 = v20; // 0x402c58
        int64_t v53 = result; // 0x402c58
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402c21
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402c25
            int64_t v56 = v54 + 1; // 0x402c2a
            int64_t v57 = v51 + 1; // 0x402c51
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402c1c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402c21
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402c25
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
        goto lab_0x4022fd;
    }
  lab_0x4029f0:
    // 0x4029f0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402a0f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402a12
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402f9a
        goto lab_0x402f9a_2;
    }
    goto lab_0x402a1f;
  lab_0x40223d:
    // 0x40223d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40248a_2;
    }
    goto lab_0x402271;
  lab_0x402215:;
    bool v60 = v15 == 1; // 0x402220
    if (v15 == -1) {
        // 0x402222
        v60 = *(char *)v1 == 0;
    }
    // 0x40222e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402271;
    } else {
        goto lab_0x40223d;
    }
  lab_0x4022fd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402302
        *(char *)(v44 + v45) = v40;
    }
    // 0x402306
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402118_2;
}
// Address range: 0x4032a0 - 0x40343e
int64_t function_4032a0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4032a2
    int32_t * v3 = __errno_location(); // 0x4032bc
    int64_t v4 = (int64_t)g20; // 0x4032c1
    int32_t v5 = *v3; // 0x4032cb
    int64_t v6 = v4; // 0x4032e1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403439
            function_404300(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4032f0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4032f7
        int64_t v9; // 0x4032a0
        if (g20 == &g21) {
            int64_t v10 = function_404110(0, v8); // 0x40341a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40341f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404110(v4, v8); // 0x40330b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40331a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40331a
        int32_t v14 = v7; // 0x403321
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403351
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40335b
    int64_t * v17 = (int64_t *)v15; // 0x40335e
    uint64_t v18 = *v17; // 0x40335e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403361
    int64_t result = *v19; // 0x403361
    int64_t v20; // 0x4032a0
    uint64_t v21 = function_402070(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403384
    if (v18 > v21) {
        // 0x4033fb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403397
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x4033a7
        free((int64_t *)result);
    }
    int64_t result2 = function_4040b0(v22); // 0x4033c1
    *v19 = result2;
    int64_t v23; // 0x4032a0
    function_402070(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4033fb
    *v3 = v5;
    return result2;
}
// Address range: 0x403440 - 0x403474
int64_t function_403440(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403447
    int64_t result = function_4042b0(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x403466
    return result;
}
// Address range: 0x403480 - 0x40348f
int64_t function_403480(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x40348c
    return result;
}
// Address range: 0x403490 - 0x40349f
int64_t function_403490(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x403498
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x4034a0 - 0x4034d3
int64_t function_4034a0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x4034b9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4034be
    uint32_t v3 = *v2; // 0x4034be
    uint32_t v4 = (int32_t)a2 % 32; // 0x4034c2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4034e0 - 0x4034f3
int64_t function_4034e0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x4034ec
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403500 - 0x40352b
int64_t function_403500(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x403508
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403525
        abort();
        // UNREACHABLE
    }
    // 0x40351c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x403530 - 0x4035a2
int64_t function_403530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x403552
    int32_t * v2 = __errno_location(); // 0x40355b
    uint32_t v3 = *(int32_t *)v1; // 0x40357b
    int64_t result = function_402070(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40358a
    return result;
}
// Address range: 0x4035b0 - 0x403691
int64_t function_4035b0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x4035d2
    int32_t * v2 = __errno_location(); // 0x4035d8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4035f7
    int32_t * v4 = (int32_t *)v1; // 0x4035fa
    int64_t v5 = function_402070(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403615
    int64_t v6 = v5 + 1; // 0x40361a
    int64_t result = function_4040b0(v6); // 0x40362f
    function_402070(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403674
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40367d
    return result;
}
// Address range: 0x4036a0 - 0x4036aa
int64_t function_4036a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4036a0
    return function_4035b0(a1, a2, 0, a3);
}
// Address range: 0x4036b0 - 0x403745
int64_t function_4036b0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x4036b0
    int64_t v2 = v1; // 0x4036b0
    int64_t v3 = v2; // 0x4036c4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x4036e3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g48;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4036e0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g48;
        }
    }
    int64_t v6 = v3; // 0x4036fd
    if (g21 != 0x6092a0) {
        // 0x4036ff
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g37;
        v6 = &g48;
    }
    int64_t result = v6; // 0x403721
    if (g20 != &g21) {
        // 0x403723
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g48;
    }
    // 0x403736
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403750 - 0x403761
int64_t function_403750(void) {
    // 0x403750
    int64_t v1; // 0x403750
    return function_4032a0(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x403770 - 0x40377a
int64_t function_403770(void) {
    // 0x403770
    int64_t v1; // 0x403770
    return function_4032a0(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x403780 - 0x403796
int64_t function_403780(int64_t a1) {
    // 0x403780
    return function_4032a0(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x4037a0 - 0x4037b2
int64_t function_4037a0(int64_t a1, int64_t a2) {
    // 0x4037a0
    return function_4032a0(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x4037c0 - 0x403828
int64_t function_4037c0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4037d0
    return function_4032a0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403830 - 0x403894
int64_t function_403830(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403840
    return function_4032a0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4038a0 - 0x4038ac
int64_t function_4038a0(int64_t a1, int64_t a2) {
    // 0x4038a0
    return function_4037c0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4038b0 - 0x4038bf
int64_t function_4038b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4038b0
    return function_403830(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4038c0 - 0x403930
int64_t function_4038c0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4038cd
    int128_t v2 = __asm_movdqa(g39); // 0x4038d5
    int128_t v3 = __asm_movdqa(g40); // 0x4038dd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4038f2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403908
    uint32_t v6 = *v5; // 0x403908
    uint32_t v7 = (int32_t)a3 % 32; // 0x40390d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4032a0(0, a1, a2, &v4);
}
// Address range: 0x403930 - 0x40393d
int64_t function_403930(int64_t a1, int64_t a2) {
    // 0x403930
    return function_4038c0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403940 - 0x403951
int64_t function_403940(int64_t a1) {
    // 0x403940
    return function_4038c0(a1, -1, 58);
}
// Address range: 0x403960 - 0x40396a
int64_t function_403960(void) {
    // 0x403960
    int64_t v1; // 0x403960
    return function_4038c0(v1, v1, 58);
}
// Address range: 0x403970 - 0x4039de
int64_t function_403970(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40398a
    return function_4032a0(a1, a3, -1, &v1);
}
// Address range: 0x4039e0 - 0x403a4c
int64_t function_4039e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4039e7
    int128_t v2 = __asm_movdqa(g39); // 0x4039ef
    int128_t v3 = __asm_movdqa(g40); // 0x4039f7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403a19
    if (a2 == 0 || a3 == 0) {
        // 0x403a47
        abort();
        // UNREACHABLE
    }
    // 0x403a2a
    return function_4032a0(a1, a4, a5, &v4);
}
// Address range: 0x403a50 - 0x403a59
int64_t function_403a50(void) {
    // 0x403a50
    int64_t v1; // 0x403a50
    return function_4039e0(v1, v1, v1, v1, -1);
}
// Address range: 0x403a60 - 0x403a77
int64_t function_403a60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a60
    return function_4039e0(0, a1, a2, a3, -1);
}
// Address range: 0x403a80 - 0x403a93
int64_t function_403a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403a80
    return function_4039e0(0, a1, a2, a3, a4);
}
// Address range: 0x403aa0 - 0x403aaa
int64_t function_403aa0(void) {
    // 0x403aa0
    int64_t v1; // 0x403aa0
    return function_4032a0(v1, v1, v1, &g19);
}
// Address range: 0x403ab0 - 0x403ac2
int64_t function_403ab0(int64_t a1, int64_t a2) {
    // 0x403ab0
    return function_4032a0(0, a1, a2, &g19);
}
// Address range: 0x403ad0 - 0x403ae1
int64_t function_403ad0(void) {
    // 0x403ad0
    int64_t v1; // 0x403ad0
    return function_4032a0(v1, v1, -1, &g19);
}
// Address range: 0x403af0 - 0x403b06
int64_t function_403af0(int64_t a1) {
    // 0x403af0
    return function_4032a0(0, a1, -1, &g19);
}
// Address range: 0x403b10 - 0x403eed
int64_t function_403b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403ba8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403b2c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403b46
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403b8b
    if (a6 < 10) {
        // 0x403b9a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403c92
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403ef0 - 0x403f10
int64_t function_403ef0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403ef0
    if (a5 == 0) {
        // 0x403f0b
        return function_403b10(a1, a2, a3, a4, a5, 0, (int64_t)&g48);
    }
    int64_t v1 = 0; // 0x403ef7
    v1++;
    int64_t v2 = v1; // 0x403f09
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403f00
        v1++;
        v2 = v1;
    }
    // 0x403f0b
    return function_403b10(a1, a2, a3, a4, a5, v2, (int64_t)&g48);
}
// Address range: 0x403f10 - 0x403f70
int64_t function_403f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403f10
    int64_t v3 = &v2; // 0x403f10
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403f43
    int64_t v6; // 0x403f2d
    int64_t * v7; // 0x403f4b
    int64_t v8; // 0x403f4b
    int64_t v9; // 0x403f57
    if (v5 < 48) {
        // 0x403f20
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403f63
            break;
        }
    } else {
        // 0x403f4b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403f63
            break;
        }
    }
    int64_t v10 = 10; // 0x403f41
    while (v4 != 9) {
        // 0x403f39
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403f20
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403f63
                break;
            }
        } else {
            // 0x403f4b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403f63
                break;
            }
        }
        // 0x403f39
        v10 = 10;
    }
    // 0x403f63
    return function_403b10(a1, a2, a3, a4, v3, v10, (int64_t)&g48);
}
// Address range: 0x403f70 - 0x40402c
int64_t function_403f70(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x403f70
    int64_t v1; // bp-168, 0x403f70
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403f70
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403f70
    int64_t v8; // 0x403f70
    int64_t v9; // bp-56, 0x403f70
    int64_t v10; // 0x403fd5
    int64_t v11; // 0x403ff9
    if ((int32_t)v6 < 48) {
        // 0x403fc0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404010
            break;
        }
    } else {
        // 0x403ff2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404010
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403fea
    int64_t v13 = 10; // 0x403fea
    while (v5 != 9) {
        // 0x403fec
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403fc0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404010
                break;
            }
        } else {
            // 0x403ff2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404010
                break;
            }
        }
        // 0x403fe2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404010
    int64_t v14; // bp-136, 0x403f70
    int64_t result = function_403b10(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g48); // 0x40401f
    return result;
}
// Address range: 0x404030 - 0x4040a4
int64_t function_404030(int64_t a1) {
    // 0x404030
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404093
    return fputs_unlocked(v1, g29);
}
// Address range: 0x4040b0 - 0x4040ca
int64_t function_4040b0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4040b4
    if (size != 0 != (mem == NULL)) {
        // 0x4040c3
        return (int64_t)mem;
    }
    // 0x4040c5
    function_404300(size);
    // UNREACHABLE
}
// Address range: 0x4040d0 - 0x4040f1
int64_t function_4040d0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4040d3
    int64_t v2 = v1; // 0x4040d3
    if (v2 < 0) {
        // 0x4040eb
        function_404300(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4040e9
        return function_4040b0(v2);
    }
    // 0x4040eb
    function_404300(v2);
    // UNREACHABLE
}
// Address range: 0x404100 - 0x404102
int64_t function_404100(void) {
    // 0x404100
    int64_t v1; // 0x404100
    return function_4040b0(v1);
}
// Address range: 0x404110 - 0x404146
int64_t function_404110(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404138
        free(v1);
        return (int32_t)&g48 ^ (int32_t)&g48;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404121
    if (a2 != 0 != (mem == NULL)) {
        // 0x404130
        return (int64_t)mem;
    }
    // 0x404141
    function_404300(a1);
    // UNREACHABLE
}
// Address range: 0x404150 - 0x404171
int64_t function_404150(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404153
    int64_t v2 = v1; // 0x404153
    if (v2 < 0) {
        // 0x40416b
        function_404300(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404169
        return function_404110(a1, v2);
    }
    // 0x40416b
    function_404300(a1);
    // UNREACHABLE
}
// Address range: 0x404180 - 0x404206
int64_t function_404180(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4041db
            function_404300(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404110(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4041c3
    if (a2 == 0) {
        // 0x4041e8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4041c8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4041db
        function_404300(a1);
        // UNREACHABLE
    }
    // 0x4041aa
    *(int64_t *)a2 = v2;
    return function_404110(a1, v2 * a3);
}
// Address range: 0x404210 - 0x404260
int64_t function_404210(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404210
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40425a
            function_404300(a1);
            // UNREACHABLE
        }
        // 0x404232
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404110(a1, v1);
    }
    if (a2 == 0) {
        // 0x404245
        *(int64_t *)a2 = 128;
        return function_404110(0, 128);
    }
    // 0x404258
    if (a2 < 0) {
        // 0x40425a
        function_404300(a1);
        // UNREACHABLE
    }
    // 0x404232
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404110(a1, v1);
}
// Address range: 0x404260 - 0x404277
int64_t function_404260(int64_t a1, int64_t a2) {
    // 0x404260
    return (int64_t)memset((int64_t *)function_4040b0(a1), 0, (int32_t)a1);
}
// Address range: 0x404280 - 0x4042ae
int64_t function_404280(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404287
    if ((int64_t)v1 < 0) {
        // 0x4042a9
        function_404300(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4042a9
        function_404300(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40429a
    if (mem != NULL) {
        // 0x4042a4
        return (int64_t)mem;
    }
    // 0x4042a9
    function_404300(nmemb);
    // UNREACHABLE
}
// Address range: 0x4042b0 - 0x4042d8
int64_t function_4042b0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4040b0(a2); // 0x4042bf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4042e0 - 0x4042f3
int64_t function_4042e0(int64_t str) {
    // 0x4042e0
    return function_4042b0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404300 - 0x404331
int64_t function_404300(int64_t a1) {
    // 0x404300
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404340 - 0x404358
int64_t function_404340(void) {
    // 0x404340
    int64_t str; // 0x404340
    char * v1 = strndup((char *)str, (int32_t)str); // 0x404344
    if (v1 != NULL) {
        // 0x40434e
        return (int64_t)v1;
    }
    // 0x404353
    function_404300(str);
    // UNREACHABLE
}
// Address range: 0x404360 - 0x40443f
int64_t function_404360(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40436c
    uint32_t v2 = *v1; // 0x40436c
    int64_t v3 = a2 & 0xffffffff; // 0x404371
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404374
    uint64_t v5 = (int64_t)*v4; // 0x404374
    int64_t v6; // 0x4043e2
    if (v3 <= v5) {
      lab_0x4043dc_2:
        // 0x4043dc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404362
    int64_t v8 = v2; // 0x404360
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4043dc
        goto lab_0x4043dc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404398
    int64_t v17; // 0x4043a6
    int64_t * v18; // 0x4043c0
    int64_t * v19; // 0x4043c3
    int64_t v20; // 0x4043ce
    int64_t v21; // 0x4043a6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4043a3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4043c0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4043d7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4043dc
            goto lab_0x4043dc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4043dc
            goto lab_0x4043dc_2;
        }
        // 0x404392
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40441b
    int64_t * v23 = (int64_t *)v22; // 0x404420
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404423
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404420
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404437
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40438d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4043dc
            goto lab_0x4043dc_2;
        }
        // 0x404392
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4043a3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4043c0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4043d7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4043dc
                goto lab_0x4043dc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4043dc
                goto lab_0x4043dc_2;
            }
            // 0x404392
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404400
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404420
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404437
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4043dc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404440 - 0x404a5c
int64_t function_404440(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40445f
    int64_t v2 = *v1; // 0x40445f
    char * str2 = (char *)v2; // 0x40446c
    char c = *str2; // 0x40446c
    int64_t v3 = v2; // 0x404498
    int64_t v4 = 0; // 0x404440
    int32_t v5; // 0x404440
    int64_t v6; // 0x404440
    int64_t v7; // 0x404440
    int64_t v8; // 0x404440
    int64_t v9; // 0x404440
    int64_t v10; // 0x404440
    int64_t v11; // 0x404440
    int64_t v12; // 0x404440
    int64_t v13; // 0x404440
    int64_t str3; // 0x404440
    int64_t v14; // 0x404440
    int64_t v15; // 0x404440
    int64_t v16; // 0x404440
    int64_t v17; // 0x404440
    int32_t v18; // 0x404440
    int32_t v19; // 0x404440
    int32_t v20; // 0x404440
    int32_t v21; // 0x404440
    int32_t v22; // 0x404440
    int32_t v23; // 0x404440
    int32_t v24; // 0x404440
    int32_t v25; // 0x404440
    int32_t v26; // 0x404440
    int32_t v27; // 0x404440
    int32_t v28; // 0x404440
    int32_t v29; // 0x404440
    int64_t nmemb; // 0x404440
    int64_t v30; // 0x404440
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40449c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404498
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4044a8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4044ae
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404478
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4044dc
                int64_t v34; // 0x404440
                int64_t v35; // 0x404440
                if (strncmp(str, str2, n) == 0) {
                    // 0x4044e5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404660;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4044f6
                int64_t v37 = *(int64_t *)v36; // 0x4044fa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4044d0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4044e5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404660;
                        }
                    }
                    // 0x4044f6
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
                  lab_0x404546:
                    // 0x404546
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
                        goto lab_0x4045a0;
                    } else {
                        if (v11 == 0) {
                            // 0x404710
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4045a0;
                        } else {
                            if (v39 == 0) {
                                // 0x4046c0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40456a;
                                } else {
                                    // 0x4046cc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40456a;
                                    } else {
                                        // 0x4046da
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40456a;
                                        } else {
                                            goto lab_0x4045a0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40456a;
                            }
                        }
                    }
                }
              lab_0x4045b1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404786
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404932
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x404952
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40499f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x4049b9
                            int64_t v45; // 0x4049bb
                            if (*(char *)v42 != 0) {
                                // 0x4049bb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4049b3
                            while (v17 + nmemb != v42) {
                                // 0x4049b5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4049bb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x4049a8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4049e0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x404794
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4048ef
                        free((int64_t *)v17);
                    }
                    // 0x4047e9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404800
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4046ae
                    return 63;
                }
                // 0x4045d0
                v5 = v39;
                if (v13 != 0) {
                    // 0x404654
                    v35 = v13;
                    v34 = v25;
                  lab_0x404660:;
                    int32_t * v49 = (int32_t *)a7; // 0x404670
                    uint32_t v50 = *v49; // 0x404670
                    int64_t v51 = v50; // 0x404670
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40467a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404683
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4048af
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40485a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4046ae
                            return 63;
                        }
                        // 0x4046f8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404a0f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40490d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404920
                                // 0x4046ae
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40481e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404832
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40469b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40469e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4046a2
                    int64_t result = v59; // 0x4046a8
                    if (v58 != 0) {
                        // 0x4046aa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4046ae
                    return result;
                }
            } else {
                // 0x4044ae
                v5 = v32;
            }
            // break -> 0x4045d5
            break;
        }
    }
    // 0x4045d5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4045ed
        if (*(char *)(v60 + 1) != 45) {
            // 0x4045f7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4046ae
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404739
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404626
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404636
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4045a0:
    // 0x4045a0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4045a0
    int64_t v63 = *(int64_t *)v62; // 0x4045a4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4045b1
        goto lab_0x4045b1;
    }
    goto lab_0x404546;
  lab_0x40456a:
    // 0x40456a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404440
    int32_t v65; // 0x404440
    int32_t v66; // 0x404440
    if (v27 != 0) {
        goto lab_0x4045a0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404720
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4045a0;
            } else {
                goto lab_0x404591;
            }
        } else {
            // 0x404585
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40487c
                int64_t v67 = (int64_t)mem; // 0x40487c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4045a0;
                } else {
                    // 0x40488f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404591;
                }
            } else {
                goto lab_0x404591;
            }
        }
    }
  lab_0x404591:
    // 0x404591
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4045a0;
}
// Address range: 0x404a60 - 0x405026
int64_t function_404a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404a81
    if (v3 < 1) {
        // 0x404c3e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404a7d
    int32_t v5 = *(int32_t *)a7; // 0x404a89
    uint64_t v6 = a1 & 0xffffffff; // 0x404a8b
    int64_t v7 = v2; // 0x404a90
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404a93
    *v8 = 0;
    int64_t v9; // 0x404a60
    int64_t v10; // 0x404a60
    int64_t v11; // 0x404a60
    int64_t v12; // 0x404a60
    int64_t str; // 0x404a60
    int64_t v13; // 0x404a60
    int64_t v14; // 0x404a60
    int64_t v15; // 0x404a60
    int64_t v16; // 0x404a60
    int64_t v17; // 0x404a60
    int32_t v18; // 0x404a60
    char v19; // 0x404a60
    if (v5 == 0) {
        // 0x404c78
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404aaa;
    } else {
        // 0x404aa3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404af0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404af3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404bb8;
            } else {
                int64_t v22 = v7 + 1; // 0x404b06
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404b16
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404bcc;
                } else {
                    goto lab_0x404b28;
                }
            }
        } else {
            goto lab_0x404aaa;
        }
    }
  lab_0x404aaa:
    // 0x404aaa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404ab0
    *v24 = 0;
    int64_t v25; // 0x404a60
    int64_t v26; // 0x404a60
    int64_t v27; // 0x404a60
    switch (*(char *)&v2) {
        case 45: {
            // 0x404ba0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404bad;
        }
        case 43: {
            // 0x404eb0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404bad;
        }
        default: {
            // 0x404acc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404e2f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404f48
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404bad;
                } else {
                    // 0x404e3d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404ada;
                }
            } else {
                goto lab_0x404ada;
            }
        }
    }
  lab_0x404bb8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404bbf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404b28;
    } else {
        goto lab_0x404bcc;
    }
  lab_0x404ada:
    // 0x404ada
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404bad;
  lab_0x404bad:
    // 0x404bad
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404bb8;
  lab_0x404b28:;
    uint32_t v30 = *(int32_t *)a7; // 0x404b28
    int64_t v31 = v30; // 0x404b28
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404b2a
    if ((int64_t)*v32 > v31) {
        // 0x404b2f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404b32
    if (*v33 > v30) {
        // 0x404b37
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404b3a
    int64_t v35 = v31; // 0x404b3e
    int64_t v36 = v15; // 0x404b3e
    int64_t v37; // 0x404a60
    int64_t v38; // 0x404a60
    int64_t v39; // 0x404a60
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404ca8
        int64_t v41 = v40; // 0x404ca8
        v2 = v41;
        int64_t v42; // 0x404a60
        if (*v33 == v40) {
            // 0x404e90
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404e98
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404cb4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404cc8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404cd1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404cda
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404cf1
            int64_t v47 = v45 & 0xffffffff; // 0x404cf5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404cfe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404d04
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404d06;
                }
            }
            int64_t v48 = v47 + 1; // 0x404ce0
            int64_t v49 = v48 & 0xffffffff; // 0x404ce0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404cf1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404cfe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404d04
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404d06;
                    }
                }
                // 0x404ce0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404ea8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404d06;
    } else {
        goto lab_0x404b44;
    }
  lab_0x404bcc:
    // 0x404bcc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404bcf
    int64_t v51 = v12; // 0x404bcf
    int64_t v52 = v14; // 0x404bcf
    if (*(char *)v10 == 0) {
        goto lab_0x404b28;
    } else {
        goto lab_0x404bd5;
    }
  lab_0x404b44:;
    int32_t v53 = v35; // 0x404b44
    int64_t v54; // 0x404a60
    int64_t v55; // 0x404a60
    int64_t v56; // 0x404a60
    int64_t v57; // 0x404a60
    int64_t v58; // 0x404a60
    int64_t v59; // 0x404a60
    char * v60; // 0x404a60
    int64_t v61; // 0x404a60
    int64_t v62; // 0x404b59
    int64_t v63; // 0x404a60
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404c93
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404c96;
    } else {
        // 0x404b4c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404a60
        int64_t v66 = v65 ? -1 : 1; // 0x404b60
        int64_t v67 = (int64_t)"--"; // 0x404a60
        int64_t v68 = v62; // 0x404a60
        int64_t v69 = 3; // 0x404b60
        unsigned char v70 = *(char *)v68; // 0x404b60
        char v71 = *(char *)v67; // 0x404b60
        char v72 = v71; // 0x404b60
        bool v73 = false; // 0x404b60
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
            // 0x404c50
            if (*(char *)v62 == 45) {
                // 0x404d10
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404d10
                if (c == 0) {
                    goto lab_0x404c5a;
                } else {
                    // 0x404d1d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404da0;
                    } else {
                        if (c == 45) {
                            // 0x404f83
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404df5;
                        } else {
                            // 0x404d2e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404da0;
                            } else {
                                // 0x404d33
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404d54;
                                } else {
                                    // 0x404d3a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404da0;
                                    } else {
                                        goto lab_0x404d54;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404c5a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404b70
            v2 = v75;
            int32_t v76 = *v32; // 0x404b73
            int64_t v77 = v35 + 1; // 0x404b76
            int32_t v78 = v77; // 0x404b79
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404ee0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404b87
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404b95
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404c96;
        }
    }
  lab_0x404bd5:;
    // 0x404bd5
    int64_t v79; // bp-104, 0x404a60
    int64_t v80 = &v79; // 0x404a6a
    int64_t v81 = v50 + 1; // 0x404bd5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404bdc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404be1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404be5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404be9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404bf1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404bf6
    int32_t c2 = v84; // 0x404bf6
    char * found_char_pos = strchr(str2, c2); // 0x404bf6
    int64_t v87 = *v82; // 0x404bfb
    v2 = v87;
    int64_t v88 = *v85; // 0x404c05
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404c10
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404f00
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404ecd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404c3e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404bf6
    char v91 = *(char *)(v90 + 1); // 0x404c2b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404be5
        if (v91 != 58) {
            // 0x404c3e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404e54
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404f58
                *v8 = 0;
            } else {
                // 0x404f3c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404e7e
            *v83 = 0;
            // 0x404c3e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404e5e
        if (v93 != 0) {
            // 0x404ef0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404e7e
            *v83 = 0;
            // 0x404c3e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404e71
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404e7e
            *v83 = 0;
            // 0x404c3e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404fba
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404f6a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404f71
        // 0x404e7e
        *v83 = 0;
        // 0x404c3e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404dc9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404dcb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404ff0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404fa1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404fa8
            // 0x404c3e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404dd6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404dda
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404df5;
  lab_0x404d06:
    // 0x404d06
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404b44;
  lab_0x404df5:;
    int64_t v99 = function_404440(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404e13
    // 0x404c3e
    return v99 & 0xffffffff;
  lab_0x404c96:;
    int32_t v100 = v55; // 0x404c96
    if (v100 != (int32_t)v59) {
        // 0x404c9a
        *(int32_t *)a7 = v100;
    }
    // 0x404c3e
    return 0xffffffff;
  lab_0x404c5a:
    // 0x404c5a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404c61
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404c3e
    return v99 & 0xffffffff;
  lab_0x404da0:
    // 0x404da0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404bd5;
  lab_0x404d54:
    // 0x404d54
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404440(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x404d7a
    if ((int32_t)v101 != -1) {
        // 0x404c3e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404d8f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404da0;
}
// Address range: 0x405030 - 0x405086
int64_t function_405030(int64_t a1) {
    // 0x405030
    *(int32_t *)&g41 = g26;
    *(int32_t *)&g42 = g25;
    int64_t v1; // 0x405030
    int64_t result = function_404a60(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x405056
    g26 = *(int32_t *)&g41;
    g46 = g44;
    *(int32_t *)&g24 = g43;
    return result;
}
// Address range: 0x405090 - 0x4050a8
int64_t function_405090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405090
    return function_405030(1);
}
// Address range: 0x4050b0 - 0x4050c3
int64_t function_4050b0(int64_t a1, int64_t a2, char * a3, char (**a4)[9], int32_t a5, int64_t a6) {
    // 0x4050b0
    return function_405030(0);
}
// Address range: 0x4050d0 - 0x4050e5
int64_t function_4050d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4050d0
    return function_404a60(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4050f0 - 0x405106
int64_t function_4050f0(void) {
    // 0x4050f0
    return function_405030(0);
}
// Address range: 0x405110 - 0x405128
int64_t function_405110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405110
    return function_404a60(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405130 - 0x4051aa
int64_t function_405130(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40513b
    int64_t v2 = (int64_t)&g10; // 0x40513b
    int32_t * pwc; // 0x405130
    int64_t v3; // 0x405130
    int64_t n; // 0x405130
    if (a2 == 0) {
        goto lab_0x405182;
    } else {
        // 0x40513d
        if (a3 == 0) {
            // 0x405168
            return -2;
        }
        // 0x405149
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405182;
        } else {
            goto lab_0x405154;
        }
    }
  lab_0x405182:
    // 0x405182
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405130
    pwc = (int32_t *)&v4;
    goto lab_0x405154;
  lab_0x405154:;
    char * wstr = (char *)v3; // 0x40515a
    int64_t ps; // 0x405130
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40515a
    int64_t result = v5; // 0x40515a
    if (v5 < 0xfffffffe) {
        // 0x405168
        return result;
    }
    int64_t result2 = result; // 0x405199
    if ((char)function_405210(0, v3) == 0) {
        // 0x40519b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405168
    return result2;
}
// Address range: 0x4051b0 - 0x40520d
int64_t function_4051b0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4051b7
    int64_t v2; // 0x4051b0
    int64_t result = function_4057e0(a1, v2); // 0x4051c8
    if ((v2 & 32) != 0) {
        // 0x4051f0
        if ((int32_t)result == 0) {
            // 0x4051f4
            *__errno_location() = 0;
        }
        // 0x4051ea
        return 0xffffffff;
    }
    // 0x4051d1
    if ((int32_t)result == 0) {
        // 0x4051ea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4051d8
    if (v1 == 0) {
        // 0x4051da
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4051ea
    return result2;
}
// Address range: 0x405210 - 0x40526e
int64_t function_405210(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405216
    if (locale == NULL) {
        // 0x405243
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405216
    bool v2; // 0x405210
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405210
    int64_t v5 = v1; // 0x405210
    int64_t v6 = 2; // 0x405235
    unsigned char v7 = *(char *)v5; // 0x405235
    char v8 = *(char *)v4; // 0x405235
    char v9 = v8; // 0x405235
    bool v10 = false; // 0x405235
    while (v7 == v8) {
        // 0x405228
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405241
    int64_t v13 = v1; // 0x405241
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405243
        return 0;
    }
    int64_t v14 = 6; // 0x405241
    unsigned char v15 = *(char *)v13; // 0x40525d
    char v16 = *(char *)v12; // 0x40525d
    char v17 = v16; // 0x40525d
    bool v18 = false; // 0x40525d
    while (v15 == v16) {
        // 0x405250
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
// Address range: 0x405270 - 0x4057d2
int64_t function_405270(void) {
    char * v1 = nl_langinfo(14); // 0x405286
    char * v2 = g45; // 0x40528b
    char * v3; // 0x405270
    int64_t v4; // 0x405270
    int64_t v5; // 0x405270
    int64_t v6; // 0x405270
    int64_t v7; // 0x405270
    int32_t size; // 0x405270
    int32_t size2; // 0x405270
    int32_t len; // 0x405342
    int64_t v8; // 0x405342
    char * env_val; // 0x40532d
    if (v2 == NULL) {
        // 0x405328
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405395;
        } else {
            // 0x40533a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405395;
            } else {
                // 0x40533f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40532d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4057c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405395;
                    } else {
                        // 0x405739
                        size2 = len + 14;
                        goto lab_0x40535b;
                    }
                } else {
                    goto lab_0x40535b;
                }
            }
        }
    } else {
        // 0x405270
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4052aa;
    }
  lab_0x4055dc:;
    // 0x4055dc
    struct _IO_FILE * stream; // 0x40541b
    int32_t v10 = __uflow(stream); // 0x4055df
    int64_t v11; // 0x405270
    int64_t v12 = v11; // 0x4055e9
    int64_t v13; // 0x405270
    int64_t v14 = v13; // 0x4055e9
    int32_t v15 = v10; // 0x4055e9
    int64_t v16; // 0x405270
    int64_t v17 = v16; // 0x4055e9
    int64_t v18 = v11; // 0x4055e9
    int64_t v19 = v13; // 0x4055e9
    int64_t v20 = v16; // 0x4055e9
    if (v10 == -1) {
        // break -> 0x4055ef
        goto lab_0x4055ef;
    }
    goto lab_0x405469;
  lab_0x40545e:;
    // 0x40545e
    int64_t v90; // 0x405270
    int64_t * v32; // 0x405450
    *v32 = v90 + 1;
    int64_t v89; // 0x405270
    v12 = v89;
    int64_t v91; // 0x405270
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405270
    v17 = v92;
    goto lab_0x405469;
  lab_0x405469:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405270
    int32_t v25; // bp-120, 0x405270
    int32_t v26; // bp-184, 0x405270
    int64_t v27; // 0x40541b
    int64_t v28; // 0x405438
    int64_t v29; // 0x40543d
    int64_t * v30; // 0x405454
    switch (c) {
        case 32: {
            goto lab_0x405450;
        }
        case 10: {
            goto lab_0x405450;
        }
        case 9: {
            goto lab_0x405450;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405641
            int32_t v33; // 0x405270
            char v34; // 0x405270
            int32_t v35; // 0x40564e
            if (v31 < *v30) {
                // 0x405620
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40564b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405641
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405620
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40564b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405630
                v36 = v33;
            }
            // 0x40571f
            if (v36 == -1) {
                // break -> 0x4055ef
                break;
            }
            goto lab_0x405450;
        }
        default: {
            // 0x40547f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4055ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4054a8
            int64_t v39 = v37 + 4; // 0x4054aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4054b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4054b8
            while (v41 == 0) {
                // 0x4054a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4054d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4054e2
            int64_t v45 = v43 + 4; // 0x4054e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4054f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4054f2
            while (v47 == 0) {
                // 0x4054e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4054df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405508
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405518
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40551c
            int64_t v52 = v51 + v48; // 0x405525
            int64_t * mem; // 0x405270
            int64_t v53; // 0x405270
            int64_t v54; // 0x405270
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40565b
                int64_t v56 = v55 + 3; // 0x405667
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405541
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405550
            if (mem == NULL) {
                // 0x40577c
                free((int64_t *)v21);
                function_4057e0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x4053f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405568
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405572
            uint32_t v62 = (int32_t)v59; // 0x405575
            int64_t v63; // 0x405270
            if (v62 >= 8) {
                // 0x405684
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40569e
                int64_t v66 = v61 - v65; // 0x4056a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4056ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4056be
                    int64_t v70 = v69 & 0xffffffff; // 0x4056be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4056bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40574f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405587
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40558b
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
            int64_t v73 = v51 + 1; // 0x40559b
            int64_t v74 = v60 - 1; // 0x40559f
            uint32_t v75 = (int32_t)v73; // 0x4055a4
            int64_t v76; // 0x405270
            if (v75 >= 8) {
                // 0x4056d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4056dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4056ec
                int64_t v80 = v74 - v79; // 0x4056f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4056fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40570b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405709
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405766
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40576e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4055b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4055ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4057b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4055ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40545e;
            } else {
                goto lab_0x4055dc;
            }
        }
    }
  lab_0x405450:;
    int64_t v93 = v23; // 0x405270
    int64_t v94 = v22; // 0x405270
    int64_t v95 = v21; // 0x405270
    goto lab_0x405450_2;
  lab_0x405395:;
    int64_t * mem3 = malloc(size); // 0x405395
    int64_t v97 = (int64_t)&g10; // 0x4053a0
    int64_t v98; // 0x405270
    int64_t path; // 0x405270
    if (mem3 == NULL) {
        goto lab_0x405372;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405395
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4053b6;
    }
  lab_0x4052aa:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40529d
    char v100 = *v3; // 0x4052aa
    int64_t v101; // 0x405270
    if (v100 == 0) {
        // 0x405304
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405270
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405270
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4052f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4052f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4052c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4052cd
        char v107 = *(char *)v106; // 0x4052d2
        v102 = v107;
        if (v107 == 0) {
            // 0x405304
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4052db
    v104 = v103 + 1;
  lab_0x4052f7:
    // 0x405304
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405372:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4052aa;
  lab_0x4053b6:;
    int64_t v109 = v98 + path; // 0x4053b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4053e2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x405411
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405742
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x405435
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405450_2:;
                uint64_t v96 = *v32; // 0x405450
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4055dc;
                } else {
                    goto lab_0x40545e;
                }
            }
          lab_0x4055ef:
            // 0x4055ef
            function_4057e0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40560e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4053f4;
  lab_0x40535b:;
    int64_t * mem4 = malloc(size2); // 0x40535b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405401
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4053b6;
    } else {
        goto lab_0x405372;
    }
  lab_0x4053f4:
    // 0x4053f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405372;
}
// Address range: 0x4057e0 - 0x40585b
int64_t function_4057e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4057e7
    if (fileno(stream) < 0) {
        // 0x405847
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4057fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40582b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405847
            return fclose(stream);
        }
    }
    // 0x4057fc
    if ((int32_t)function_405860(a1, v1) == 0) {
        // 0x405847
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405808
    int32_t v3 = *v2; // 0x405810
    int64_t result = fclose(stream); // 0x40581e
    if (v3 != 0) {
        // 0x405850
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405820
    return result;
}
// Address range: 0x405860 - 0x4058a0
int64_t function_405860(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40587a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40587a
        return fflush(stream);
    }
    // 0x405888
    function_4058a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4058a0 - 0x4058f7
int64_t function_4058a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4058a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4058aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4058db
    int64_t result = -1; // 0x4058e4
    if (v1 != -1) {
        // 0x4058e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4058f2
    return result;
}
// Address range: 0x405900 - 0x40595d
int64_t function_405900(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405900
    return function_401270();
}
// Address range: 0x405960 - 0x405961
int64_t function_405960(void) {
    // 0x405960
    int64_t result; // 0x405960
    return result;
}
// Address range: 0x405970 - 0x405988
int64_t function_405970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405970
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x405988 - 0x4059a8
int64_t function_405988(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x405992
    while (*(int64_t *)v1 != -1) {
        // 0x405993
        v1 -= 8;
    }
    // 0x4059a4
    return result;
}
