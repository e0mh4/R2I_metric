// Address range: 0x401ba0 - 0x401ba5
int64_t function_401ba0(void) {
    // 0x401ba0
    abort();
    // UNREACHABLE
}
// Address range: 0x401ba5 - 0x401baa
int64_t function_401ba5(void) {
    // 0x401ba5
    abort();
    // UNREACHABLE
}
// Address range: 0x401baa - 0x401baf
int64_t function_401baa(void) {
    // 0x401baa
    abort();
    // UNREACHABLE
}
// Address range: 0x401baf - 0x401bb4
int64_t function_401baf(void) {
    // 0x401baf
    abort();
    // UNREACHABLE
}
// Address range: 0x401bb4 - 0x401bb9
int64_t function_401bb4(void) {
    // 0x401bb4
    abort();
    // UNREACHABLE
}
// Address range: 0x401bb9 - 0x401bbe
int64_t function_401bb9(void) {
    // 0x401bb9
    abort();
    // UNREACHABLE
}
// Address range: 0x401bbe - 0x401bc3
int64_t function_401bbe(void) {
    // 0x401bbe
    abort();
    // UNREACHABLE
}
// Address range: 0x401bc3 - 0x401bc8
int64_t function_401bc3(void) {
    // 0x401bc3
    abort();
    // UNREACHABLE
}
// Address range: 0x401bd0 - 0x401d85
int64_t function_401bd0(int64_t a1, int64_t a2) {
    // 0x401bd0
    function_4041a0(a2);
    setlocale(LC_ALL, (char *)&g24);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g35 = 3;
    int64_t v1; // 0x401bd0
    function_416460(0x403a90, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    function_403bd0(a1 & 0xffffffff, a2, "expr", "GNU coreutils", "8.29", 0x402220);
    uint32_t v2 = (int32_t)a1; // 0x401c56
    char * format; // 0x401d63
    if (v2 < 2) {
        // 0x401d57
        format = dcgettext(NULL, "missing operand", 5);
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
        function_402220(2);
        // UNREACHABLE
    }
    int64_t str = a2 + 8;
    int64_t v3 = str; // 0x401c73
    if (strcmp((char *)*(int64_t *)str, "--") == 0) {
        if (v2 == 2) {
            // 0x401d57
            format = dcgettext(NULL, "missing operand", 5);
            error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
            function_402220(2);
            // UNREACHABLE
        }
        // 0x401c79
        v3 = a2 + 16;
    }
    // 0x401c82
    g50 = v3;
    int64_t v4 = function_4039c0(1); // 0x401c92
    int64_t v5 = *(int64_t *)g50; // 0x401ca1
    if (v5 != 0) {
        // 0x401d23
        function_405a90(0, 8, v5);
        error(2, (int32_t)"syntax error: unexpected argument %s" ^ (int32_t)"syntax error: unexpected argument %s", dcgettext(NULL, "syntax error: unexpected argument %s", 5));
        // 0x401d57
        format = dcgettext(NULL, "missing operand", 5);
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
        function_402220(2);
        // UNREACHABLE
    }
    int32_t v6 = *(int32_t *)v4; // 0x401ca9
    if (v6 != 0) {
        if (v6 != 1) {
            // 0x401d80
            abort();
            // UNREACHABLE
        }
        // 0x401cb8
        puts((char *)*(int64_t *)(v4 + 8));
        // 0x401cc1
        return function_402090(v4) % 256;
    }
    // 0x401cd3
    int64_t v7; // bp-56, 0x401bd0
    int64_t v8 = function_403b30(*(int64_t *)(v4 + 8), &v7); // 0x401ce1
    fputs_unlocked((char *)v8, g45);
    int64_t v9 = (int64_t)g45; // 0x401cf1
    int64_t * v10 = (int64_t *)(v9 + 40); // 0x401cf8
    uint64_t v11 = *v10; // 0x401cf8
    if (v11 >= *(int64_t *)(v9 + 48)) {
        // 0x401d17
        __overflow(g45, 10);
    } else {
        // 0x401d02
        *v10 = v11 + 1;
        *(char *)v11 = 10;
    }
    // 0x401cc1
    return function_402090(v4) % 256;
}
// Address range: 0x401d90 - 0x401dbb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401d90
    int64_t v1; // 0x401d90
    __libc_start_main(0x401bd0, (int32_t)a4, (char **)&v1, (void (*)())0x4163f0, (void (*)())0x416450, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401dbb - 0x401dda
int64_t function_401dbb(void) {
    // 0x401dbb
    return &g44;
}
// Address range: 0x401dda - 0x401e11
int64_t function_401dda(void) {
    // 0x401dda
    return 0;
}
// Address range: 0x401e11 - 0x401e68
int64_t function_401e11(void) {
    // 0x401e11
    if (g48 != 0) {
        // 0x401e67
        int64_t result; // 0x401e11
        return result;
    }
    int64_t v1 = g49; // 0x401e44
    int64_t result2; // 0x401e56
    if (g49 >= ((int64_t)&g32 - (int64_t)&g31 >> 3) - 1) {
        // 0x401e56
        result2 = function_401dbb();
        g48 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g32 - (int64_t)&g31 >> 3) - 1) {
        // 0x401e46
        v1++;
    }
    // 0x401e3a
    g49 = v1;
    // 0x401e56
    result2 = function_401dbb();
    g48 = 1;
    return result2;
}
// Address range: 0x401e68 - 0x401e6d
int64_t function_401e68(void) {
    // 0x401e68
    return function_401dda();
}
// Address range: 0x401e70 - 0x401ea1
int64_t function_401e70(int64_t a1, uint64_t a2, uint64_t a3) {
    if (a2 == -0x8000000000000000 == a3 == -1) {
        // 0x401e8d
        *(int64_t *)a1 = 0;
        return -0x8000000000000000;
    }
    // 0x401e98
    *(int64_t *)a1 = a2 % a3;
    return a2 / a3;
}
// Address range: 0x401eb0 - 0x401edf
int64_t function_401eb0(int64_t * str2) {
    int64_t str = *(int64_t *)g50; // 0x401ebd
    int64_t result = 0; // 0x401ec3
    if (str != 0) {
        int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x401ec5
        int64_t v1 = strcmp_rc == 0; // 0x401ecc
        g50 += 8 * v1;
        result = (int64_t)(strcmp_rc & -256) | v1;
    }
    // 0x401edd
    return result;
}
// Address range: 0x401ee0 - 0x401fd0
int64_t function_401ee0(int64_t a1) {
    // 0x401ee0
    error(3, ERANGE, "%c", (char)a1);
    int64_t v1 = *(int64_t *)34; // 0x401f00
    int64_t v2 = v1 - 0x6325; // 0x401f09
    if ((0x6324 - v1 & v1) >= 0) {
        // 0x401f1a
        *(int64_t *)3 = v2;
        return 0;
    }
    // 0x401f1e
    function_401ee0(45);
    int64_t v3 = *(int64_t *)34; // 0x401f30
    uint64_t v4 = *(int64_t *)v2; // 0x401f33
    int64_t v5 = v4 + v3; // 0x401f36
    int64_t v6 = -v4; // 0x401f3a
    int64_t result = v4 / 0x8000000000000000; // 0x401f40
    if ((char)(v6 < 0 == ((v5 ^ v3) & (v3 ^ v6)) < 0 == (v4 != 0)) == (char)result) {
        // 0x401f48
        *(int64_t *)45 = v5;
        return result;
    }
    // 0x401f4c
    function_401ee0(43);
    uint64_t result2 = *(int64_t *)34; // 0x401f60
    uint64_t v7 = *(int64_t *)v5; // 0x401f63
    uint64_t v8 = v7 * result2; // 0x401f69
    if (result2 == 0 || v7 == 0) {
        // 0x401f8d
        *(int64_t *)43 = v8;
        return result2;
    }
    int64_t v9 = v7 / 0x8000000000000000; // 0x401f7e
    int64_t v10 = v8 / 0x8000000000000000; // 0x401f82
    int64_t result3 = v9 ^ result2 / 0x8000000000000000;
    if ((char)result3 == (char)v10) {
        // 0x401f8d
        *(int64_t *)43 = v8;
        return result3;
    }
    // 0x401f91
    function_401ee0(42);
    uint64_t v11 = *(int64_t *)v10; // 0x401fa0
    uint64_t v12 = *(int64_t *)v9; // 0x401fa3
    if (v11 == -0x8000000000000000 == v12 == -1) {
        // 0x401fc4
        return function_401ee0(47);
    }
    uint64_t result4 = v11 / v12;
    *(int64_t *)42 = result4;
    return result4;
}
// Address range: 0x401fd0 - 0x402020
int64_t function_401fd0(int64_t a1) {
    // 0x401fd0
    if (*(int64_t *)g50 != 0) {
        // 0x401fdd
        return g50;
    }
    // 0x401fde
    function_405a90(0, 8, *(int64_t *)(g50 - 8));
    error(2, (int32_t)"syntax error: missing argument after %s" ^ (int32_t)"syntax error: missing argument after %s", dcgettext(NULL, "syntax error: missing argument after %s", 5));
    return &g67;
}
// Address range: 0x402020 - 0x40204a
int64_t function_402020(int64_t a1) {
    if ((int32_t)a1 != 1) {
        // 0x402029
        free((int64_t *)a1);
        return &g67;
    }
    // 0x402038
    free((int64_t *)*(int64_t *)(a1 + 8));
    free((int64_t *)a1);
    return &g67;
}
// Address range: 0x402050 - 0x402082
int64_t function_402050(int64_t a1) {
    int64_t result = function_406620(16); // 0x40205e
    *(int32_t *)result = 1;
    *(int64_t *)(result + 8) = function_406850(a1);
    return result;
}
// Address range: 0x402090 - 0x4020ec
int64_t function_402090(int64_t a1) {
    int32_t v1 = a1;
    if (v1 == 0) {
        // 0x402096
        return a1 & 0xffffff00 | (int64_t)(*(int64_t *)(a1 + 8) == 0);
    }
    if (v1 != 1) {
        // 0x4020e6
        abort();
        // UNREACHABLE
    }
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x4020a5
    char v3 = *(char *)v2; // 0x4020ae
    if (v3 == 0) {
        // 0x4020da
        return 1;
    }
    int64_t v4 = v2 + (int64_t)(v3 == 45); // 0x4020bd
    int64_t v5 = v4; // 0x4020c3
    char v6 = *(char *)v4; // 0x4020c3
    int64_t result = 0; // 0x4020d6
    while (v6 == 48) {
        // 0x4020c8
        v5++;
        v6 = *(char *)v5;
        result = 1;
        if (v6 == 0) {
            // break -> 0x4020da
            break;
        }
        result = 0;
    }
    // 0x4020da
    return result;
}
// Address range: 0x4020f0 - 0x4021c2
int64_t function_4020f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4020f0
    __assert_fail("iter->cur.wc == 0", "./lib/mbuiter.h", 179, "mbuiter_multi_next");
    abort();
    // UNREACHABLE
}
// Address range: 0x4021d0 - 0x402212
int64_t function_4021d0(int64_t a1) {
    int32_t v1 = a1;
    if (v1 != 0) {
        // 0x402208
        if (v1 == 1) {
            // 0x4021fc
            return 1;
        }
        // 0x40220d
        abort();
        // UNREACHABLE
    }
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4021de
    int64_t v3; // bp-40, 0x4021d0
    int64_t v4 = function_403b30(*v2, &v3); // 0x4021e5
    int64_t result = function_406850(v4); // 0x4021ed
    *(int32_t *)a1 = 1;
    *v2 = result;
    // 0x4021fc
    return result;
}
// Address range: 0x402220 - 0x402630
int64_t function_402220(int64_t a1) {
    int32_t status = a1; // 0x402236
    if (status != 0) {
        // 0x40223a
        __fprintf_chk(g47, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40225f
        exit(status);
        // UNREACHABLE
    }
    // 0x402266
    __printf_chk(1, dcgettext(NULL, "Usage: %s EXPRESSION\n  or:  %s OPTION\n", 5));
    int64_t v1 = (int64_t)g45; // 0x402287
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x40228e
    uint64_t v3 = *v2; // 0x40228e
    if (v3 >= *(int64_t *)(v1 + 48)) {
        // 0x402621
        __overflow(g45, 10);
    } else {
        // 0x40229c
        *v2 = v3 + 1;
        *(char *)v3 = 10;
    }
    // 0x4022a7
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\nPrint the value of EXPRESSION to standard output.  A blank line below\nseparates increasing precedence groups.  EXPRESSION may be:\n\n  ARG1 | ARG2       ARG1 if it is neither null nor 0, otherwise ARG2\n\n  ARG1 & ARG2       ARG1 if neither argument is null or 0, otherwise 0\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\n  ARG1 < ARG2       ARG1 is less than ARG2\n  ARG1 <= ARG2      ARG1 is less than or equal to ARG2\n  ARG1 = ARG2       ARG1 is equal to ARG2\n  ARG1 != ARG2      ARG1 is unequal to ARG2\n  ARG1 >= ARG2      ARG1 is greater than or equal to ARG2\n  ARG1 > ARG2       ARG1 is greater than ARG2\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\n  ARG1 + ARG2       arithmetic sum of ARG1 and ARG2\n  ARG1 - ARG2       arithmetic difference of ARG1 and ARG2\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\n  ARG1 * ARG2       arithmetic product of ARG1 and ARG2\n  ARG1 / ARG2       arithmetic quotient of ARG1 divided by ARG2\n  ARG1 % ARG2       arithmetic remainder of ARG1 divided by ARG2\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\n  STRING : REGEXP   anchored pattern match of REGEXP in STRING\n\n  match STRING REGEXP        same as STRING : REGEXP\n  substr STRING POS LENGTH   substring of STRING, POS counted from 1\n  index STRING CHARS         index in STRING where any CHARS is found, or 0\n  length STRING              length of STRING\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "  + TOKEN                    interpret TOKEN as a string, even if it is a\n                               keyword like 'match' or an operator like '/'\n\n  ( EXPRESSION )             value of EXPRESSION\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\nBeware that many operators need to be escaped or quoted for shells.\nComparisons are arithmetic if both ARGs are numbers, else lexicographical.\nPattern matches return the string matched between \\( and \\) or null; if\n\\( and \\) are not used, they return the number of characters matched or 0.\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\nExit status is 0 if EXPRESSION is neither null nor 0, 1 if EXPRESSION is null\nor 0, 2 if EXPRESSION is syntactically invalid, and 3 if an error occurred.\n", 5), g45);
    int64_t v4 = &g1; // bp-136, 0x402405
    bool v5; // 0x402220
    int64_t v6 = v5 ? -1 : 1;
    int64_t v7 = &v4;
    int64_t v8 = v7 + 16; // 0x402488
    int64_t v9 = *(int64_t *)v8; // 0x40248c
    int64_t v10 = 5; // 0x402492
    while (v9 != 0) {
        int64_t v11 = (int64_t)"expr";
        int64_t v12 = v9;
        unsigned char v13 = *(char *)v11; // 0x40249e
        char v14 = *(char *)v12; // 0x40249e
        char v15 = v14; // 0x40249e
        bool v16 = false; // 0x40249e
        while (v13 == v14) {
            // 0x402494
            v10--;
            int64_t v17 = v12 + v6; // 0x40249e
            int64_t v18 = v11 + v6; // 0x40249e
            v15 = v13;
            v16 = true;
            if (v10 == 0) {
                // break -> 
                break;
            }
            v11 = v18;
            v12 = v17;
            v13 = *(char *)v11;
            v14 = *(char *)v12;
            v15 = v14;
            v16 = false;
        }
        unsigned char v19 = v15;
        if ((v13 >= v19 && !v16) == v13 < v19) {
            // break -> 0x4024aa
            break;
        }
        v7 = v8;
        v8 = v7 + 16;
        v9 = *(int64_t *)v8;
        v10 = 5;
    }
    // 0x4024aa
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v7 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4025e7;
        } else {
            // 0x4025d1
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402578
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402508;
            } else {
                goto lab_0x4025e7;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402508;
        } else {
            // 0x4024f2
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402578
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402508;
            } else {
                goto lab_0x402508;
            }
        }
    }
  lab_0x4025e7:
    // 0x4025e7
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402548
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40225f
    exit(status);
    // UNREACHABLE
  lab_0x402508:
    // 0x402508
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402548
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40225f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402630 - 0x402a10
int64_t function_402630(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t str = *(int64_t *)(a2 + 8); // 0x402650
    int64_t v1 = 0; // bp-456, 0x40265c
    int64_t v2 = 0; // bp-424, 0x40267e
    g64 = 710;
    int32_t len = strlen((char *)str); // 0x4026a4
    int64_t v3 = function_415280(str, (int64_t)len, &v2); // 0x4026b4
    int32_t v4; // 0x402630
    int64_t v5; // 0x402630
    int64_t v6; // 0x402630
    int64_t v7; // 0x402630
    int64_t result3; // 0x402630
    int32_t v8; // bp-324, 0x402630
    int64_t v9; // 0x402630
    int64_t ps; // bp-356, 0x402630
    char v10; // 0x402630
    char v11; // 0x402630
    char v12; // 0x402630
    char * str3; // 0x402630
    int64_t v13; // 0x402630
    int64_t v14; // 0x402630
    int64_t v15; // 0x4026e3
    if (v3 != 0) {
        // 0x402980
        error(2, 0, "%s", (char *)v3);
        goto lab_0x402996;
    } else {
        int64_t * v16 = (int64_t *)(a1 + 8); // 0x4026c2
        int64_t str2 = *v16; // 0x4026c2
        int32_t len2 = strlen((char *)str2); // 0x4026ce
        v15 = function_415be0(&v2, str2, (int64_t)len2, 0, &v1);
        int64_t v17; // 0x402630
        if (v15 < 0) {
            // 0x402798
            v7 = v15;
            if (v15 != -1) {
                goto lab_0x4029af;
            } else {
                if (v17 == 0) {
                    int64_t v18 = function_406620(16); // 0x4027c5
                    *(int32_t *)v18 = 0;
                    *(int64_t *)(v18 + 8) = 0;
                    result3 = v18;
                } else {
                    // 0x4027aa
                    result3 = function_402050((int64_t)&g24);
                }
                goto lab_0x402724;
            }
        } else {
            if (v17 == 0) {
                // 0x402750
                if (__ctype_get_mb_cur_max() != 1) {
                    while (true) {
                      lab_0x402877:
                        // 0x402877
                        v14 = v13;
                        v6 = v5;
                        char v19 = v11;
                        str3 = (char *)v14;
                        v12 = v19;
                        if (v19 == 0) {
                            unsigned char v20 = *str3; // 0x402805
                            int32_t v21 = *(int32_t *)((int64_t)(4 * v20 / 32) + (int64_t)&g16); // 0x402810
                            if ((1 << (int32_t)(v20 % 32) & v21) == 0) {
                                int32_t v22 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40291d
                                v12 = 1;
                                if (v22 == 0) {
                                    // break -> 0x402996
                                    break;
                                }
                                goto lab_0x40287e;
                            } else {
                                int32_t v23 = v20; // 0x402835
                                v8 = v23;
                                v4 = v23;
                                v10 = 0;
                                v9 = 1;
                                goto lab_0x402841;
                            }
                        } else {
                            goto lab_0x40287e;
                        }
                    }
                } else {
                    goto lab_0x40275f_2;
                }
            } else {
                // 0x4026fe
                *(char *)(*(int64_t *)8 + *v16) = 0;
                result3 = function_402050(*v16 + *(int64_t *)8);
                goto lab_0x402724;
            }
        }
    }
  lab_0x40275f_2:;
    int64_t result = function_406620(16); // 0x402764
    *(int32_t *)result = 0;
    *(int64_t *)(result + 8) = v15;
    int64_t result2 = result; // 0x40277b
    if (v1 == 0) {
        // 0x40272b
        function_415af0(&v2);
        return result;
    }
    goto lab_0x40277d;
  lab_0x40287e:;
    char v24 = v12;
    int64_t v25 = function_405de0(v14, (int64_t)__ctype_get_mb_cur_max()); // 0x40288e
    int64_t v26 = function_407dd0(&v8, v14, v25); // 0x4028a7
    char v27 = v24; // 0x402630
    int64_t len3 = 1; // 0x402630
    switch (v26) {
        case -1: {
            goto lab_0x402855;
        }
        case -2: {
            // 0x402950
            v27 = v24;
            len3 = strlen(str3);
            goto lab_0x402855;
        }
        default: {
            int64_t v28 = v26; // 0x4028c4
            if (v26 == 0) {
                char v29 = *str3; // 0x4028d4
                if (v29 != 0) {
                    // 0x4029e9
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
                int32_t v30 = v8; // 0x4028dd
                v28 = 1;
                if (v30 != 0) {
                    // 0x4029e9
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
            }
            int64_t v31 = v28;
            int32_t v32 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4028f9
            char v33 = v32 == 0 ? v24 : 0;
            int32_t v34 = v8;
            v4 = v34;
            v10 = v33;
            v9 = v31;
            goto lab_0x402841;
        }
    }
  lab_0x402855:;
    // 0x402855
    int64_t v35; // 0x4027e0
    if (v14 - v35 >= v15) {
        goto lab_0x40275f_2;
    }
    int64_t v36 = len3;
    char v37 = v27;
    v11 = v37;
    v5 = v6 + 1;
    v13 = v36 + v14;
    goto lab_0x402877;
  lab_0x402841:;
    int64_t v38 = v9;
    char v39 = v10;
    int32_t v40 = v4; // 0x402841
    v27 = v39;
    len3 = v38;
    if (v40 == 0) {
        goto lab_0x40275f_2;
    }
    goto lab_0x402855;
  lab_0x402996:
    // 0x402996
    __assert_fail("mbsinit (&iter->state)", "./lib/mbuiter.h", 150, "mbuiter_multi_next");
    v7 = str;
    goto lab_0x4029af;
  lab_0x4029af:;
    char * format = dcgettext(NULL, "error in regular expression matcher", 5); // 0x4029bb
    int32_t err_num = 75; // 0x4029cc
    if (v7 == -2) {
        // 0x4029ce
        err_num = *__errno_location();
    }
    // 0x4029d5
    error(3, err_num, format);
    // 0x4029e9
    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
    return &g67;
  lab_0x402724:
    // 0x402724
    result2 = result3;
    if (v1 == 0) {
        // 0x40272b
        function_415af0(&v2);
        return result3;
    }
    goto lab_0x40277d;
  lab_0x40277d:
    // 0x40277d
    free(NULL);
    free(NULL);
    // 0x40272b
    function_415af0(&v2);
    return result2;
}
// Address range: 0x402a10 - 0x403470
int64_t function_402a10(uint64_t a1) {
    // 0x402a10
    int32_t v1; // 0x402a10
    int64_t v2; // 0x402a10
    int64_t result2; // 0x402a10
    int64_t result3; // 0x402a10
    int64_t reject; // 0x402a10
    int64_t v3; // 0x402a10
    int64_t v4; // 0x402a10
    int64_t v5; // 0x402a10
    int64_t v6; // 0x402a10
    int64_t v7; // 0x402a10
    uint64_t v8; // 0x402a10
    int64_t v9; // 0x402a10
    int64_t v10; // 0x402a10
    int64_t v11; // 0x402a10
    int64_t v12; // 0x402a10
    int64_t v13; // 0x402a10
    int64_t v14; // 0x402a10
    char * str7; // 0x402a10
    int64_t v15; // 0x402a10
    int64_t v16; // 0x402a10
    int64_t ps; // bp-116, 0x402a10
    char v17; // 0x402a10
    char v18; // 0x402a10
    char v19; // 0x402a10
    int64_t v20; // 0x402a10
    int64_t v21; // 0x402a10
    int64_t v22; // 0x402a10
    int64_t v23; // 0x402a10
    int64_t v24; // 0x402a10
    int32_t v25; // bp-84, 0x402a10
    int32_t v26; // 0x402a10
    int64_t v27; // 0x402a87
    int64_t v28; // 0x402a92
    int64_t v29; // 0x402a9d
    int64_t v30; // 0x402b78
    if ((char)function_401eb0(&g3) != 0) {
        // 0x402d98
        function_401fd0((int64_t)&g3);
        goto lab_0x402d9d;
    } else {
        uint64_t v31 = a1 % 256; // 0x402a3a
        if ((char)function_401eb0((int64_t *)"length") != 0) {
            int64_t v32 = function_402a10(v31); // 0x402d43
        }
        // 0x402a4b
        if ((char)function_401eb0((int64_t *)"match") != 0) {
            int64_t v33 = function_402a10(v31); // 0x402e5b
            int64_t v34 = function_402a10(v31); // 0x402e66
            v11 = v34;
            result2 = v33;
            if ((char)a1 != 0) {
                // 0x402e72
                int64_t v35; // 0x402a10
                int64_t v36 = function_402630(v33, v34, v35, v35); // 0x402e78
                function_402020(v33);
                v11 = v34;
                result2 = v36;
            }
            goto lab_0x402e16;
        } else {
            int64_t v37 = function_401eb0((int64_t *)"index"); // 0x402a62
            if ((char)v37 != 0) {
                int64_t v38 = function_402a10(v31); // 0x402dc3
                int64_t v39 = function_402a10(v31); // 0x402dce
                int64_t v40 = *(int64_t *)(v39 + 8); // 0x402de6
                v13 = 0;
                v10 = v39;
                v6 = v38;
                v12 = v39;
                reject = v40;
                v7 = v38;
                if (*(char *)v40 != 0) {
                    goto lab_0x402f18;
                } else {
                    goto lab_0x402df7_2;
                }
            } else {
                // 0x402a72
                if ((char)function_401eb0((int64_t *)"substr") == 0) {
                    int64_t v41 = v37 & 0xffffffff; // 0x402a67
                    function_401fd0((int64_t)"substr");
                    if ((char)function_401eb0(&g4) == 0) {
                        // 0x403090
                        if ((char)function_401eb0(&g23) == 0) {
                            goto lab_0x402d9d;
                        } else {
                            // 0x4030a2
                            error(2, (int32_t)"syntax error: unexpected ')'" ^ (int32_t)"syntax error: unexpected ')'", dcgettext(NULL, "syntax error: unexpected ')'", 5));
                            v14 = a1 & 0xffffffff;
                            v3 = v41;
                            goto lab_0x4030c8;
                        }
                    } else {
                        int64_t result = function_4039c0(v31); // 0x402eaa
                        v9 = g50;
                        if (*(int64_t *)g50 == 0) {
                            goto lab_0x403410;
                        } else {
                            // 0x402ec3
                            if ((char)function_401eb0(&g23) != 0) {
                                // 0x402d7e
                                return result;
                            }
                            // 0x402ed5
                            function_405a90(0, 8, *(int64_t *)g50);
                            error(2, (int32_t)"syntax error: expecting ')' instead of %s" ^ (int32_t)"syntax error: expecting ')' instead of %s", dcgettext(NULL, "syntax error: expecting ')' instead of %s", 5));
                            reject = result;
                            v7 = v41;
                            goto lab_0x402f18;
                        }
                    }
                } else {
                    // 0x402a84
                    v27 = function_402a10(v31);
                    v28 = function_402a10(v31);
                    v29 = function_402a10(v31);
                    if ((char)v29 == 0) {
                        // 0x402e28
                        result3 = function_402050((int64_t)&g24);
                        goto lab_0x402e35;
                    } else {
                        int64_t v42 = *(int64_t *)(v28 + 8); // 0x402acd
                        int64_t v43 = *(int64_t *)(v29 + 8); // 0x402ae7
                        int64_t str = *(int64_t *)(v27 + 8); // 0x402aec
                        int64_t len = strlen((char *)str); // 0x402b06
                        if (__ctype_get_mb_cur_max() >= 2) {
                            // branch -> 0x402b29
                        }
                        // 0x402b29
                        v8 = v42 < 0 ? -1 : v42;
                        if (len < v8) {
                            // 0x403310
                            v20 = function_406850((int64_t)&g24);
                            goto lab_0x40331f;
                        } else {
                            // 0x402b32
                            if ((char)(v42 < 0 ? v37 : (int64_t)(v42 == 0)) != 0) {
                                int64_t v44 = function_406850((int64_t)&g24); // 0x403315
                            } else {
                                struct _TYPEDEF___mbstate_t * v45 = v43 >= 0 ? (struct _TYPEDEF___mbstate_t *)v43 : (struct _TYPEDEF___mbstate_t *)-1; // 0x402b01
                                uint64_t v46 = (int64_t)v45; // 0x402b3b
                                if (v45 == (struct _TYPEDEF___mbstate_t *)-2 || v46 < 0xfffffffffffffffe) {
                                    uint64_t v47 = len - v8 + 1; // 0x402b56
                                    int64_t v48 = v47 > v46 ? v46 : v47; // 0x402b5d
                                    if (__ctype_get_mb_cur_max() == 1) {
                                        int64_t v49 = function_406620(v48 + 1); // 0x4033a3
                                        v24 = (int64_t)mempcpy((int64_t *)v49, (int64_t *)(v8 - 1 + str), (int32_t)v48);
                                        v21 = v49;
                                      lab_0x4033c1_2:
                                        // 0x4033c1
                                        *(char *)v24 = 0;
                                        v20 = v21;
                                        goto lab_0x40331f;
                                    } else {
                                        // 0x402b70
                                        v30 = function_406620(len + 1);
                                        ps = 0;
                                        v22 = v30;
                                        v15 = str;
                                        v18 = 0;
                                        v2 = 1;
                                        v4 = v48;
                                        while (true) {
                                          lab_0x402c71:
                                            // 0x402c71
                                            v5 = v4;
                                            v16 = v15;
                                            v23 = v22;
                                            str7 = (char *)v16;
                                            v19 = v18;
                                            if (v18 == 0) {
                                                unsigned char v50 = *str7; // 0x402bc0
                                                int32_t v51 = *(int32_t *)((int64_t)(4 * v50 / 32) + (int64_t)&g16); // 0x402bcb
                                                if ((1 << (int32_t)(v50 % 32) & v51) == 0) {
                                                    int32_t v52 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4032f0
                                                    v19 = 1;
                                                    if (v52 == 0) {
                                                        // break -> 0x4033f7
                                                        break;
                                                    }
                                                    goto lab_0x402c7f;
                                                } else {
                                                    int32_t v53 = v50; // 0x402bf3
                                                    v25 = v53;
                                                    v1 = v53;
                                                    v17 = 0;
                                                    v26 = 1;
                                                    goto lab_0x402c02;
                                                }
                                            } else {
                                                goto lab_0x402c7f;
                                            }
                                        }
                                        // 0x4033f7
                                        __assert_fail("mbsinit (&iter->state)", "./lib/mbuiter.h", 150, "mbuiter_multi_next");
                                        v9 = &g67;
                                        goto lab_0x403410;
                                    }
                                } else {
                                    // 0x403310
                                    v20 = function_406850((int64_t)&g24);
                                    goto lab_0x40331f;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x402fc8:;
    // 0x402fc8
    char * v54; // 0x402a10
    int64_t v55; // 0x402a10
    char * v56 = (char *)(v55 + (int64_t)v54); // 0x402fd5
    int64_t v57; // 0x402a10
    int64_t v58 = v57; // 0x402fda
    struct _TYPEDEF___mbstate_t * v59; // 0x402a10
    struct _TYPEDEF___mbstate_t * v60 = v59; // 0x402fda
    char * v61 = v56; // 0x402fda
    int64_t v62; // 0x402a10
    int64_t v63 = v62; // 0x402fda
    int64_t v64; // 0x402a10
    int64_t v65 = v64; // 0x402fda
    int64_t v66; // 0x402a10
    int64_t v67 = v66; // 0x402fda
    int64_t v68; // 0x402a10
    int64_t v69 = v68; // 0x402fda
    int64_t v70 = v57; // 0x402fda
    struct _TYPEDEF___mbstate_t * v71 = v59; // 0x402fda
    char * v72 = v56; // 0x402fda
    char v73; // 0x402a10
    char v74 = v73; // 0x402fda
    int64_t v75 = v62; // 0x402fda
    int64_t v76 = v64; // 0x402fda
    int64_t v77 = v66; // 0x402fda
    int64_t v78 = v68; // 0x402fda
    if (v73 == 0) {
        goto lab_0x402f62;
    } else {
        goto lab_0x402fdc;
    }
  lab_0x402df7_2:;
    int64_t v79 = function_406620(16); // 0x402dfc
    *(int32_t *)v79 = 0;
    *(int64_t *)(v79 + 8) = v13;
    function_402020(v6);
    v11 = v10;
    result2 = v79;
    goto lab_0x402e16;
  lab_0x40316b:;
    // 0x40316b
    char v114; // 0x402a10
    char v141 = v114;
    int32_t v142 = __ctype_get_mb_cur_max(); // 0x40316b
    int64_t str5; // 0x402a10
    int32_t * v109; // 0x402a10
    int64_t v143 = function_407dd0(v109, str5, function_405de0(str5, (int64_t)v142)); // 0x40318d
    char v144 = v141; // 0x402a10
    int32_t len3 = 1; // 0x402a10
    int32_t v119; // 0x402a10
    int32_t v81; // bp-148, 0x402a10
    int32_t v121; // 0x402a10
    char * str4; // 0x402a10
    int64_t ps3; // bp-180, 0x402a10
    char v120; // 0x402a10
    switch (v143) {
        case -1: {
            goto lab_0x40320e;
        }
        case -2: {
            // 0x403260
            v144 = v141;
            len3 = strlen(str4);
            goto lab_0x40320e;
        }
        default: {
            int32_t v145 = v143; // 0x4031aa
            if (v143 == 0) {
                // 0x4031ac
                if (*str4 != 0) {
                    // 0x40344d
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
                // 0x4031c3
                v145 = 1;
                if (v81 != 0) {
                    // 0x40344d
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
            }
            int32_t v146 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x4031dd
            v119 = v81;
            v120 = v146 == 0 ? v141 : 0;
            v121 = v145;
            goto lab_0x403131;
        }
    }
  lab_0x40320e:;
    int32_t n = len3;
    char v147 = v144;
    int64_t v148 = n; // 0x40320e
    char v149 = v147; // 0x403218
    int64_t v150 = v148; // 0x403218
    int64_t v100; // 0x402a10
    int64_t v102; // 0x402a10
    int64_t v103; // 0x402a10
    int64_t v107; // 0x402a10
    char * str6; // 0x402a10
    if (v107 == v148) {
        // 0x40321e
        v13 = v103;
        v10 = v102;
        v6 = v100;
        v149 = v147;
        v150 = v148;
        if (memcmp((int64_t *)str5, (int64_t *)str6, n) == 0) {
            goto lab_0x402df7_2;
        }
    }
    goto lab_0x40315a;
  lab_0x403131:;
    int32_t v161 = v119; // 0x403131
    int64_t v110; // 0x402a10
    v57 = v110;
    struct _TYPEDEF___mbstate_t * v139; // 0x402a10
    v59 = v139;
    char v140; // 0x402a10
    v73 = v140;
    v62 = v103;
    v64 = v102;
    v54 = str6;
    int64_t v112; // 0x402a10
    v66 = v112;
    v68 = v100;
    v55 = v107;
    if (v161 == 0) {
        goto lab_0x402fc8;
    }
    int32_t v162 = v121;
    char v163 = v120;
    v144 = v163;
    len3 = v162;
    int32_t v99; // bp-212, 0x402a10
    char v105; // 0x402a10
    if (v105 == 0) {
        goto lab_0x40320e;
    } else {
        // 0x40314b
        v13 = v103;
        v10 = v102;
        v6 = v100;
        if (v99 == v161) {
            goto lab_0x402df7_2;
        }
        // 0x403155
        v149 = v163;
        v150 = v162;
        goto lab_0x40315a;
    }
  lab_0x40315a:;
    int64_t v111 = v150 + str5; // 0x40315f
    char v113 = v149; // 0x40315f
    goto lab_0x403164;
  lab_0x402c7f:;
    char v151 = v19;
    int64_t v152 = function_405de0(v16, (int64_t)__ctype_get_mb_cur_max()); // 0x402c97
    int64_t v153 = function_407dd0(&v25, v16, v152); // 0x402cbb
    char v154; // 0x402a10
    int32_t len4; // 0x402a10
    switch (v153) {
        case -1: {
            goto lab_0x402c11;
        }
        case -2: {
            // 0x4033cd
            v154 = v151;
            len4 = strlen(str7);
            goto lab_0x402c11;
        }
        default: {
            int32_t v155 = v153; // 0x402cdf
            if (v153 == 0) {
                // 0x402ce1
                if (*str7 != 0) {
                    // 0x40344d
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
                // 0x402cfe
                v155 = 1;
                if (v25 != 0) {
                    // 0x40344d
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
            }
            int32_t v156 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402d1d
            v1 = v25;
            v17 = v156 == 0 ? v151 : 0;
            v26 = v155;
            goto lab_0x402c02;
        }
    }
  lab_0x402c11:
    // 0x402c11
    v24 = v23;
    v21 = v30;
    if (v5 == 0) {
        goto lab_0x4033c1_2;
    }
    int32_t v157 = len4;
    int64_t v158 = v23; // 0x402c2d
    int64_t v159 = v5; // 0x402c2d
    if (v8 <= v2) {
        // 0x402c2f
        v158 = (int64_t)mempcpy((int64_t *)v23, (int64_t *)v16, v157);
        v159 = v5 - 1;
    }
    // 0x402c5a
    v22 = v158;
    v15 = v16 + (int64_t)v157;
    v18 = v154;
    v2++;
    v4 = v159;
    goto lab_0x402c71;
  lab_0x402c02:
    // 0x402c02
    v154 = v17;
    len4 = v26;
    v24 = v23;
    v21 = v30;
    if (v1 == 0) {
        goto lab_0x4033c1_2;
    }
    goto lab_0x402c11;
  lab_0x402d9d:;
    int64_t v160 = *(int64_t *)g50; // 0x402da4
    g50 += 8;
    // 0x402d7e
    return function_402050(v160);
  lab_0x402e16:
    // 0x402e16
    function_402020(v11);
    // 0x402d7e
    return result2;
  lab_0x402f18:;
    int64_t v80 = *(int64_t *)(v7 + 8); // 0x402f18
    char * str2 = (char *)v80;
    int64_t ps4; // bp-244, 0x402a10
    if (__ctype_get_mb_cur_max() < 2) {
        int64_t ini_seg_bytes = strcspn(str2, (char *)reject); // 0x4032a6
        v13 = *(char *)(v80 + ini_seg_bytes) == 0 ? 0 : ini_seg_bytes + 1;
        v10 = v12;
        v6 = v7;
        goto lab_0x402df7_2;
    } else {
        // 0x402f2b
        ps4 = 0;
        v58 = &v81;
        v60 = (struct _TYPEDEF___mbstate_t *)&ps4;
        v61 = str2;
        v63 = 0;
        v65 = v12;
        v67 = reject;
        v69 = v7;
        goto lab_0x402f62;
    }
  lab_0x402f62:;
    int64_t v82 = v69;
    int64_t v83 = v67;
    int64_t v84 = v65;
    int64_t v85 = v63;
    char * v86 = v61;
    struct _TYPEDEF___mbstate_t * ps2 = v60;
    int64_t v87 = v58;
    unsigned char v88 = *v86; // 0x402f67
    int32_t v89 = *(int32_t *)((int64_t)(4 * v88 / 32) + (int64_t)&g16); // 0x402f74
    char * v90; // 0x402a10
    int64_t v91; // 0x402a10
    int64_t v92; // 0x402a10
    int64_t v93; // 0x402a10
    int64_t v94; // 0x402a10
    char v95; // 0x402a10
    struct _TYPEDEF___mbstate_t * v96; // 0x402a10
    int64_t v97; // 0x402a10
    if ((1 << (int32_t)(v88 % 32) & v89) == 0) {
        int32_t v98 = mbsinit(ps2); // 0x403285
        v70 = v87;
        v71 = ps2;
        v72 = v86;
        v74 = 1;
        v75 = v85;
        v76 = v84;
        v77 = v83;
        v78 = v82;
        if (v98 == 0) {
            // 0x4033f7
            __assert_fail("mbsinit (&iter->state)", "./lib/mbuiter.h", 150, "mbuiter_multi_next");
            v9 = &g67;
            goto lab_0x403410;
        } else {
            goto lab_0x402fdc;
        }
    } else {
        // 0x402f85
        v99 = v88;
        v13 = 0;
        v10 = v84;
        v6 = v82;
        if (v88 == 0) {
            goto lab_0x402df7_2;
        } else {
            // 0x402fa9
            v97 = v87;
            v96 = ps2;
            v95 = 0;
            v94 = v85 + 1;
            v93 = v84;
            v90 = v86;
            v91 = v83;
            v92 = v82;
            goto lab_0x402fad;
        }
    }
  lab_0x403410:
    // 0x403410
    function_405a90(0, 8, *(int64_t *)(v9 - 8));
    error(2, (int32_t)"syntax error: expecting ')' after %s" ^ (int32_t)"syntax error: expecting ')' after %s", dcgettext(NULL, "syntax error: expecting ')' after %s", 5));
    // 0x40344d
    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
    return &g67;
  lab_0x402e35:
    // 0x402e35
    function_402020(v27);
    function_402020(v28);
    function_402020(v29);
    // 0x402d7e
    return result3;
  lab_0x4030c8:
    // 0x4030c8
    v100 = v3;
    int64_t v101; // 0x402a10
    v102 = v101;
    v103 = v14;
    char v104; // 0x402a10
    v105 = v104;
    int64_t v106; // 0x402a10
    v107 = v106;
    char * v108; // 0x402a10
    str6 = v108;
    ps3 = 0;
    v109 = (int32_t *)v110;
    v111 = v112;
    v113 = 0;
    while (true) {
      lab_0x403164:
        // 0x403164
        str5 = v111;
        str4 = (char *)str5;
        v114 = v113;
        if (v113 == 0) {
            unsigned char v115 = *str4; // 0x4030f5
            int32_t v116 = *(int32_t *)((int64_t)(4 * v115 / 32) + (int64_t)&g16); // 0x403100
            if ((1 << (int32_t)(v115 % 32) & v116) == 0) {
                int32_t v117 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x403243
                v114 = 1;
                if (v117 == 0) {
                    // break -> 0x4033f7
                    break;
                }
                goto lab_0x40316b;
            } else {
                int32_t v118 = v115; // 0x403125
                v81 = v118;
                v119 = v118;
                v120 = 0;
                v121 = 1;
                goto lab_0x403131;
            }
        } else {
            goto lab_0x40316b;
        }
    }
    // 0x4033f7
    __assert_fail("mbsinit (&iter->state)", "./lib/mbuiter.h", 150, "mbuiter_multi_next");
    v9 = &g67;
    goto lab_0x403410;
  lab_0x40331f:;
    int64_t v122 = function_402050(v20); // 0x403327
    free((int64_t *)v20);
    result3 = v122;
    goto lab_0x402e35;
  lab_0x402fdc:;
    int64_t v123 = v78;
    int64_t v124 = v77;
    int64_t v125 = v76;
    int64_t v126 = v75;
    char v127 = v74;
    char * str3 = v72;
    struct _TYPEDEF___mbstate_t * v128 = v71;
    int64_t v129 = v70;
    int64_t v130 = (int64_t)str3; // 0x402fe1
    int64_t v131 = function_405de0(v130, (int64_t)__ctype_get_mb_cur_max()); // 0x402fec
    int64_t v132 = function_407dd0(&v99, v130, v131); // 0x403001
    char v133; // 0x402a10
    int64_t len2; // 0x402a10
    char v134; // 0x402a10
    switch (v132) {
        case -1: {
            // 0x4032c0
            v97 = v129;
            v96 = v128;
            v95 = v127;
            v94 = v126 + 1;
            v93 = v125;
            v90 = str3;
            v91 = v124;
            v92 = v123;
            goto lab_0x402fad;
        }
        case -2: {
            // 0x403340
            v134 = v127;
            len2 = strlen(str3);
            v133 = 0;
            goto lab_0x403072;
        }
        default: {
            int64_t v135 = v132; // 0x403022
            if (v132 == 0) {
                // 0x403024
                if (*str3 != 0) {
                    // 0x40344d
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
                // 0x40303d
                v135 = 1;
                if (v99 != 0) {
                    // 0x40344d
                    __assert_fail("*iter->cur.ptr == '\\0'", "./lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g67;
                }
            }
            int32_t v136 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x403053
            v13 = 0;
            v10 = v125;
            v6 = v123;
            v134 = v136 == 0 ? v127 : 0;
            len2 = v135;
            v133 = 1;
            if (v99 == 0) {
                goto lab_0x402df7_2;
            } else {
                goto lab_0x403072;
            }
        }
    }
  lab_0x402fad:;
    int64_t v137 = function_403d90(v91, *v90); // 0x402fb5
    v13 = v94;
    v10 = v93;
    v6 = v92;
    v57 = v97;
    v59 = v96;
    v73 = v95;
    v62 = v94;
    v64 = v93;
    v54 = v90;
    v66 = v91;
    v68 = v92;
    v55 = 1;
    if (v137 != 0) {
        goto lab_0x402df7_2;
    } else {
        goto lab_0x402fc8;
    }
  lab_0x403072:;
    int64_t v138 = v126 + 1; // 0x403072
    v97 = v129;
    v96 = v128;
    v95 = v134;
    v94 = v138;
    v93 = v125;
    v90 = str3;
    v91 = v124;
    v92 = v123;
    v110 = v129;
    v139 = v128;
    v108 = str3;
    v140 = v134;
    v106 = len2;
    v104 = v133;
    v14 = v138;
    v101 = v125;
    v112 = v124;
    v3 = v123;
    if (len2 != 1) {
        goto lab_0x4030c8;
    } else {
        goto lab_0x402fad;
    }
}
// Address range: 0x403470 - 0x4034dc
int64_t function_403470(uint64_t a1) {
    uint64_t v1 = a1 % 256; // 0x40347a
    int64_t result = function_402a10(v1); // 0x403481
    if ((char)function_401eb0(&g6) == 0) {
        // 0x4034d0
        return result;
    }
    int64_t v2 = function_402a10(v1); // 0x4034a8
    int64_t v3 = result; // 0x4034b3
    int64_t v4; // 0x403470
    if ((char)a1 != 0) {
        // 0x4034b5
        v3 = function_402630(result, v2, v4, v4);
        function_402020(result);
    }
    int64_t result2 = v3;
    function_402020(v2);
    int64_t v5 = function_401eb0(&g6); // 0x40349d
    while ((char)v5 != 0) {
        int64_t v6 = result2;
        v2 = function_402a10(v1);
        v3 = v6;
        if ((char)a1 != 0) {
            // 0x4034b5
            v3 = function_402630(v6, v2, v4, v4);
            function_402020(v6);
        }
        // 0x403490
        result2 = v3;
        function_402020(v2);
        v5 = function_401eb0(&g6);
    }
    // 0x4034d0
    return result2;
}
// Address range: 0x4034e0 - 0x403610
int64_t function_4034e0(uint64_t a1) {
    uint64_t v1 = a1 % 256; // 0x4034e9
    int64_t result = function_403470(v1); // 0x4034f2
    while (true) {
        int64_t v2 = function_401eb0(&g7); // 0x403581
        int32_t v3 = 0; // 0x403588
        if ((char)v2 == 0) {
            int64_t v4 = function_401eb0(&g17); // 0x40350a
            v3 = 2;
            if ((char)v4 == 0) {
                int64_t v5 = function_401eb0(&g8); // 0x4035a5
                v3 = 2;
                if ((char)v5 == 0) {
                    // break -> 0x4035b8
                    break;
                }
            }
        }
        int64_t v6 = function_403470(v1); // 0x40351a
        if ((char)a1 != 0) {
            if ((char)v6 == 0) {
                // 0x4035c4
                error(2, (int32_t)"non-integer argument" ^ (int32_t)"non-integer argument", dcgettext(NULL, "non-integer argument", 5));
                goto lab_0x4035e6;
            }
            // 0x403547
            if (v3 != 0) {
                // 0x40354b
                if (*(int64_t *)(v6 + 8) == 0) {
                  lab_0x4035e6:
                    // 0x4035e6
                    error(2, (int32_t)"division by zero" ^ (int32_t)"division by zero", dcgettext(NULL, "division by zero", 5));
                    return &g67;
                }
            }
        }
        // 0x403574
        function_402020(v6);
    }
    // 0x4035b8
    return result;
}
// Address range: 0x403610 - 0x4036e0
int64_t function_403610(uint64_t a1) {
    uint64_t v1 = a1 % 256; // 0x40361a
    int64_t result = function_4034e0(v1); // 0x403621
    while (true) {
        // 0x403692
        if ((char)function_401eb0(&g3) == 0) {
            // 0x403630
            if ((char)function_401eb0(&g14) == 0) {
                // break -> 0x4036a8
                break;
            }
        }
        int64_t v2 = function_4034e0(v1); // 0x403646
        if ((char)a1 != 0 == (char)v2 == 0) {
            // 0x4036b4
            error(2, (int32_t)"non-integer argument" ^ (int32_t)"non-integer argument", dcgettext(NULL, "non-integer argument", 5));
            return &g67;
        }
        // 0x40368a
        function_402020(v2);
    }
    // 0x4036a8
    return result;
}
// Address range: 0x4036e0 - 0x403909
int64_t function_4036e0(uint64_t a1) {
    uint64_t v1 = a1 % 256; // 0x4036e9
    int64_t v2 = function_403610(v1); // 0x403700
    char * str2; // 0x4036e0
    int64_t v3; // 0x4036e0
    bool v4; // 0x4036e0
    char v5; // 0x4036e0
    int64_t v6; // 0x4036e0
    int64_t v7; // 0x4036e0
    char * v8; // 0x4036e0
    int64_t v9; // 0x403726
    char * str; // 0x403786
    while (true) {
      lab_0x40375a:
        // 0x40375a
        v6 = v2;
        int64_t v10 = function_401eb0(&g9); // 0x40375f
        v3 = 0;
        if ((char)v10 == 0) {
            // 0x403708
            v3 = 1;
            if ((char)function_401eb0((int64_t *)"<=") == 0) {
                int64_t v11 = function_401eb0(&g10); // 0x403845
                v3 = 2;
                if ((char)v11 == 0) {
                    // 0x4038a0
                    v3 = 2;
                    if ((char)function_401eb0((int64_t *)"==") == 0) {
                        // 0x4038ae
                        v3 = 3;
                        if ((char)function_401eb0((int64_t *)"!=") == 0) {
                            // 0x4038c6
                            v3 = 4;
                            if ((char)function_401eb0((int64_t *)">=") == 0) {
                                int64_t v12 = function_401eb0(&g11); // 0x4038e3
                                v3 = 5;
                                if ((char)v12 == 0) {
                                    // break -> 0x4038f7
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        // 0x403720
        v9 = function_403610(v1);
        v4 = false;
        if ((char)a1 != 0) {
            int64_t v13 = *(int64_t *)(v6 + 8); // 0x403780
            str = (char *)v13;
            int64_t v14 = v13 + (int64_t)(*str == 45); // 0x40378d
            char v15 = *(char *)v14; // 0x403793
            int64_t v16 = v14; // 0x403793
            while ((int32_t)v15 < 58) {
                // 0x403798
                v16++;
                v15 = *(char *)v16;
                if (v15 == 0) {
                    int64_t v17 = *(int64_t *)(v9 + 8); // 0x403860
                    v8 = (char *)v17;
                    int64_t v18 = v17 + (int64_t)(*v8 == 45); // 0x40386c
                    v5 = *(char *)v18;
                    v7 = v18;
                    goto lab_0x403878;
                }
            }
            // 0x4037af
            str2 = (char *)*(int64_t *)(v9 + 8);
            goto lab_0x4037b3;
        } else {
            goto lab_0x403733;
        }
    }
  lab_0x403733:
    // 0x403733
    function_402020(v6);
    function_402020(v9);
    v2 = function_406620(16);
    *(int32_t *)v2 = 0;
    *(int64_t *)(v2 + 8) = (int64_t)v4;
    goto lab_0x40375a;
  lab_0x4037b3:
    // 0x4037b3
    *__errno_location() = 0;
    int64_t strcoll_rc = strcoll(str, str2); // 0x4037cb
    goto lab_0x4037d0;
  lab_0x4037d0:;
    int64_t v19 = strcoll_rc;
    g65 = v3;
    switch (v3) {
        case 1: {
            // 0x403810
            v4 = (int32_t)v19 < 1;
            // break -> 0x403733
            break;
        }
        case 2: {
            // 0x403800
            v4 = (int32_t)v19 == 0;
            // break -> 0x403733
            break;
        }
        case 3: {
            // 0x4037f0
            v4 = (int32_t)v19 != 0;
            // break -> 0x403733
            break;
        }
        case 4: {
            // 0x4037e0
            v4 = v19 > -1;
            // break -> 0x403733
            break;
        }
        case 5: {
            int32_t v20 = v19; // 0x403823
            v4 = v20 >= 0 == (v20 != 0);
            // break -> 0x403733
            break;
        }
        default: {
            // 0x403830
            v4 = v19 < 0;
            // break -> 0x403733
            break;
        }
    }
    goto lab_0x403733;
  lab_0x403878:
    // 0x403878
    str2 = v8;
    if ((int32_t)v5 < 58) {
        int64_t v21 = v7 + 1; // 0x403884
        char v22 = *(char *)v21; // 0x403888
        v5 = v22;
        v7 = v21;
        if (v22 != 0) {
            goto lab_0x403878;
        } else {
            // 0x40388f
            strcoll_rc = function_405e20();
            goto lab_0x4037d0;
        }
    } else {
        goto lab_0x4037b3;
    }
}
// Address range: 0x403910 - 0x4039bd
int64_t function_403910(uint64_t a1) {
    int64_t v1 = function_4036e0(a1 % 256); // 0x40391b
    int64_t v2 = function_401eb0(&g12); // 0x403928
    int64_t result = v1; // 0x40392f
    if ((char)v2 == 0) {
      lab_0x40399f:
        // 0x40399f
        return result;
    }
    int64_t v3 = v1; // 0x40397b
    int64_t result2; // 0x403910
    int64_t v4; // 0x403910
    int64_t v5; // 0x403946
    int64_t v6; // 0x403996
    while (true) {
        // 0x403931
        result2 = v3;
        v4 = 0;
        if ((char)a1 != 0) {
            // 0x403938
            v4 = function_402090(result2) % 256 ^ 1;
        }
        // 0x403946
        v5 = function_4036e0(v4);
        if ((char)function_402090(result2) == 0) {
            // 0x40395a
            if ((char)function_402090(v5) == 0) {
                // break -> 0x4039b0
                break;
            }
        }
        // 0x403966
        function_402020(result2);
        function_402020(v5);
        v3 = function_406620(16);
        *(int32_t *)v3 = 0;
        *(int64_t *)(v3 + 8) = 0;
        v6 = function_401eb0(&g12);
        result = v3;
        if ((char)v6 == 0) {
            return result;
        }
    }
    // 0x4039b0
    function_402020(v5);
    int64_t v7 = function_401eb0(&g12); // 0x403928
    while ((char)v7 != 0) {
        // 0x403931
        v3 = result2;
        while (true) {
            // 0x403931
            result2 = v3;
            v4 = 0;
            if ((char)a1 != 0) {
                // 0x403938
                v4 = function_402090(result2) % 256 ^ 1;
            }
            // 0x403946
            v5 = function_4036e0(v4);
            if ((char)function_402090(result2) == 0) {
                // 0x40395a
                if ((char)function_402090(v5) == 0) {
                    // break -> 0x4039b0
                    break;
                }
            }
            // 0x403966
            function_402020(result2);
            function_402020(v5);
            v3 = function_406620(16);
            *(int32_t *)v3 = 0;
            *(int64_t *)(v3 + 8) = 0;
            v6 = function_401eb0(&g12);
            result = v3;
            if ((char)v6 == 0) {
                return result;
            }
        }
        // 0x4039b0
        function_402020(v5);
        v7 = function_401eb0(&g12);
    }
    // 0x40399f
    return result2;
}
// Address range: 0x4039c0 - 0x403a6d
int64_t function_4039c0(uint64_t a1) {
    int64_t v1 = function_403910(a1 % 256); // 0x4039cb
    int64_t v2 = function_401eb0(&g13); // 0x4039dd
    int64_t result = v1; // 0x4039e4
    if ((char)v2 == 0) {
      lab_0x403a54:
        // 0x403a54
        return result;
    }
    int64_t v3 = v1;
    while (true) {
        int64_t v4 = v3;
        int64_t v5 = 0; // 0x4039eb
        if ((char)a1 != 0) {
            // 0x4039ed
            v5 = function_402090(v4) % 256;
        }
        int64_t v6 = function_403910(v5); // 0x4039f8
        int64_t v7; // 0x4039c0
        while ((char)function_402090(v4) != 0) {
            // 0x403a0c
            function_402020(v4);
            int64_t v8 = function_402090(v6); // 0x403a1a
            v7 = v6;
            if ((char)v8 == 0) {
                goto lab_0x4039d8;
            }
            // 0x403a23
            function_402020(v6);
            int64_t v9 = function_406620(16); // 0x403a30
            *(int32_t *)v9 = 0;
            *(int64_t *)(v9 + 8) = 0;
            int64_t v10 = function_401eb0(&g13); // 0x403a4b
            result = v9;
            if ((char)v10 == 0) {
                return result;
            }
            v4 = v9;
            v5 = 0;
            if ((char)a1 != 0) {
                // 0x4039ed
                v5 = function_402090(v4) % 256;
            }
            // 0x4039f8
            v6 = function_403910(v5);
        }
        // 0x403a60
        function_402020(v6);
        v7 = v4;
      lab_0x4039d8:
        // 0x4039d8
        v3 = v7;
        int64_t v11 = function_401eb0(&g13); // 0x4039dd
        result = v3;
        if ((char)v11 == 0) {
            // break -> 0x403a54
            break;
        }
    }
    // 0x403a54
    return result;
}
// Address range: 0x403a70 - 0x403a78
int64_t function_403a70(int64_t a1) {
    // 0x403a70
    g52 = a1;
    int64_t result; // 0x403a70
    return result;
}
// Address range: 0x403a80 - 0x403a88
int64_t function_403a80(int64_t a1) {
    // 0x403a80
    g51 = a1;
    int64_t result; // 0x403a80
    return result;
}
// Address range: 0x403a90 - 0x403b2e
int64_t function_403a90(void) {
    // 0x403a90
    int32_t * err_num; // 0x403aa6
    if ((int32_t)function_415ca0((int64_t)g45) == 0) {
        goto lab_0x403abc;
    } else {
        // 0x403aa6
        err_num = __errno_location();
        if (g51 == 0) {
            goto lab_0x403ad3;
        } else {
            // 0x403ab7
            if (*err_num != 32) {
                goto lab_0x403ad3;
            } else {
                goto lab_0x403abc;
            }
        }
    }
  lab_0x403abc:;
    int64_t result = function_415ca0((int64_t)g47); // 0x403ac3
    if ((int32_t)result == 0) {
        // 0x403acc
        return result;
    }
    // 0x403b0e
    _exit(g35);
    // UNREACHABLE
  lab_0x403ad3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x403adf
    if (g52 == 0) {
        // 0x403b19
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403af3
        error(0, *err_num, "%s: %s", (char *)function_405c10((int64_t)g52), v1);
    }
    // 0x403b0e
    _exit(g35);
    // UNREACHABLE
}
// Address range: 0x403b30 - 0x403bcc
int64_t function_403b30(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x403b30
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403b55
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x403b86
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x403ba8
    int64_t v4 = v2 - 1; // 0x403bb8
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x403bc0
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x403bd0 - 0x403cd2
int64_t function_403bd0(int64_t a1, int64_t a2, char * a3, char * a4, char * a5, int64_t a6) {
    // 0x403bd0
    int64_t v1; // 0x403bd0
    if ((char)v1 != 0) {
        // 0x403be3
        int128_t v2; // 0x403bd0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g42; // 0x403c1a
    g42 = 0;
    if ((int32_t)a1 != 2) {
        // 0x403c2f
        g42 = v3;
        *(int32_t *)0x61d2bc = 0;
        int64_t result; // 0x403bd0
        return result;
    }
    int64_t result2 = function_407d50(a1, a2, &g3, &g15, 0, a6); // 0x403c69
    int32_t v4 = result2; // 0x403c6e
    switch (v4) {
        default: {
            // 0x403c78
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x403c9a
                function_406480((int64_t)g45, (int64_t)a3, (int64_t)a4, (int64_t)a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x403c2f
            g42 = v3;
            *(int32_t *)0x61d2bc = 0;
            return result2;
        }
    }
}
// Address range: 0x403ce0 - 0x403d01
int64_t function_403ce0(int64_t a1) {
    int32_t wc = a1; // 0x403ce3
    int32_t result = wcwidth(wc); // 0x403ce3
    if (result < 0) {
        // 0x403cf0
        return iswcntrl(wc) == 0;
    }
    // 0x403cec
    return result;
}
// Address range: 0x403d10 - 0x403d66
int64_t function_403d10(int64_t a1, int64_t a2) {
    // 0x403d10
    *(int64_t *)a1 = a2;
    char v1 = *(char *)(a2 + 16); // 0x403d2f
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(char *)(a1 + 16) = v1;
    int64_t result = 0; // 0x403d3c
    if (v1 != 0) {
        uint32_t v2 = *(int32_t *)(a2 + 20); // 0x403d3e
        *(int32_t *)(a1 + 20) = v2;
        result = v2;
    }
    // 0x403d44
    return result;
}
// Address range: 0x403d70 - 0x403d87
int64_t function_403d70(uint64_t a1) {
    uint32_t v1 = *(int32_t *)((a1 / 8 & 28) + (int64_t)&g16); // 0x403d7a
    return (v1 >> (int32_t)a1 % 32) % 2;
}
// Address range: 0x403d90 - 0x403fd0
int64_t function_403d90(int64_t str, unsigned char c) {
    // 0x403d90
    if (c < 48 | (uint32_t)__ctype_get_mb_cur_max() < 2) {
        // 0x403dac
        return (int64_t)strchr((char *)str, (int32_t)c);
    }
    int64_t ps = 0; // bp-84, 0x403dc9
    char v1 = 0; // 0x403dd7
    int64_t v2 = str; // 0x403dd7
    char * v3; // 0x403d90
    int64_t v4; // 0x403d90
    int32_t v5; // bp-52, 0x403d90
    int64_t str2; // 0x403d90
    char v6; // 0x403d90
    char v7; // 0x403d90
    while (true) {
      lab_0x403e46:
        // 0x403e46
        str2 = v2;
        v7 = v1;
        if (v1 == 0) {
            char * v8 = (char *)str2;
            unsigned char v9 = *v8; // 0x403de5
            int32_t v10 = *(int32_t *)((int64_t)(4 * v9 / 32) + (int64_t)&g16); // 0x403df0
            if ((1 << (int32_t)(v9 % 32) & v10) == 0) {
                int32_t v11 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403f05
                v7 = 1;
                if (v11 == 0) {
                    // break -> 0x403f84
                    break;
                }
                goto lab_0x403e4c;
            } else {
                // 0x403e02
                v5 = v9;
                v3 = v8;
                v6 = 0;
                v4 = 1;
                if (v9 == 0) {
                    // 0x403f46
                    return 0;
                }
                goto lab_0x403e2c;
            }
        } else {
            goto lab_0x403e4c;
        }
    }
    // 0x403f84
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x403f9d
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
    // 0x403fb6
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return &g67;
  lab_0x403e4c:;
    char v12 = v7;
    int64_t v13 = function_405de0(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x403e5c
    int64_t v14 = function_407dd0(&v5, str2, v13); // 0x403e71
    int64_t result; // 0x403d90
    int64_t v15; // 0x403d90
    int64_t len; // 0x403d90
    char v16; // 0x403d90
    switch (v14) {
        case -1: {
            // 0x403f20
            v1 = v12;
            v15 = 1;
            result = str2;
            if (*(char *)str2 == c) {
                // 0x403f46
                return result;
            }
            goto lab_0x403e38;
        }
        case -2: {
            // 0x403f50
            v16 = v12;
            len = strlen((char *)str2);
            goto lab_0x403ee4;
        }
        default: {
            int64_t v17 = v14; // 0x403e92
            if (v14 == 0) {
                // 0x403e94
                if (*(char *)str2 != 0) {
                    // 0x403f9d
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    // 0x403fb6
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return &g67;
                }
                // 0x403eab
                v17 = 1;
                if (v5 != 0) {
                    // 0x403fb6
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return &g67;
                }
            }
            // 0x403eb7
            v16 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0 ? v12 : 0;
            len = v17;
            if (v5 == 0) {
                // 0x403f46
                return 0;
            }
            goto lab_0x403ee4;
        }
    }
  lab_0x403e2c:
    // 0x403e2c
    v1 = v6;
    v15 = v4;
    result = str2;
    if (*v3 == c) {
        // 0x403f46
        return result;
    }
    goto lab_0x403e38;
  lab_0x403ee4:;
    int64_t v18 = len;
    char v19 = v16;
    v1 = v19;
    v15 = v18;
    if (v18 != 1) {
        goto lab_0x403e38;
    } else {
        // 0x403ee4
        v3 = (char *)str2;
        v6 = v19;
        v4 = v18;
        goto lab_0x403e2c;
    }
  lab_0x403e38:
    // 0x403e38
    v2 = v15 + str2;
    goto lab_0x403e46;
}
// Address range: 0x403fd0 - 0x4041a0
int64_t function_403fd0(int64_t str) {
    // 0x403fd0
    if ((uint32_t)__ctype_get_mb_cur_max() < 2) {
        // 0x403fef
        return strlen((char *)str);
    }
    int64_t ps = 0; // bp-84, 0x40400b
    char v1 = 0; // 0x404019
    int64_t v2 = str; // 0x404019
    int64_t v3 = 0; // 0x404019
    int32_t v4; // 0x403fd0
    int64_t v5; // 0x403fd0
    int32_t v6; // bp-52, 0x403fd0
    int64_t v7; // 0x403fd0
    int64_t str2; // 0x403fd0
    char v8; // 0x403fd0
    char v9; // 0x403fd0
    while (true) {
      lab_0x404071:
        // 0x404071
        v5 = v3;
        str2 = v2;
        v9 = v1;
        if (v1 == 0) {
            unsigned char v10 = *(char *)str2; // 0x404025
            int32_t v11 = *(int32_t *)((int64_t)(4 * v10 / 32) + (int64_t)&g16); // 0x404030
            if ((1 << (int32_t)(v10 % 32) & v11) == 0) {
                int32_t v12 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404105
                v9 = 1;
                if (v12 == 0) {
                    // break -> 0x404151
                    break;
                }
                goto lab_0x404077;
            } else {
                int32_t v13 = v10; // 0x404052
                v6 = v13;
                v4 = v13;
                v8 = 0;
                v7 = 1;
                goto lab_0x404056;
            }
        } else {
            goto lab_0x404077;
        }
    }
    // 0x404151
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x40416a
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
    // 0x404183
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return &g67;
  lab_0x404077:;
    char v14 = v9;
    int64_t v15 = function_405de0(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x404087
    int64_t v16 = function_407dd0(&v6, str2, v15); // 0x40409c
    v1 = v14;
    int64_t len = 1; // 0x403fd0
    switch (v16) {
        case -1: {
            goto lab_0x40405e;
        }
        case -2: {
            // 0x404138
            v1 = v14;
            len = strlen((char *)str2);
            goto lab_0x40405e;
        }
        default: {
            int64_t v17 = v16; // 0x4040b9
            if (v16 == 0) {
                // 0x4040bb
                if (*(char *)str2 != 0) {
                    // 0x40416a
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    // 0x404183
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return &g67;
                }
                // 0x4040d2
                v17 = 1;
                if (v6 != 0) {
                    // 0x404183
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return &g67;
                }
            }
            int32_t v18 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4040e8
            v4 = v6;
            v8 = v18 == 0 ? v14 : 0;
            v7 = v17;
            goto lab_0x404056;
        }
    }
  lab_0x40405e:
    // 0x40405e
    v2 = len + str2;
    v3 = v5 + 1;
    goto lab_0x404071;
  lab_0x404056:;
    int64_t result = v5; // 0x40405c
    v1 = v8;
    len = v7;
    if (v4 == 0) {
        // 0x403fef
        return result;
    }
    goto lab_0x40405e;
}
// Address range: 0x4041a0 - 0x404239
int64_t function_4041a0(int64_t str) {
    // 0x4041a0
    if (str == 0) {
        // 0x404219
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g47);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4041ae
    int64_t result = (int64_t)found_char_pos; // 0x4041ae
    if (found_char_pos == NULL) {
        // 0x404209
        g53 = str;
        g46 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4041b8
    if (v1 - str < 7) {
        // 0x404209
        g53 = str;
        g46 = str;
        return result;
    }
    // 0x4041c8
    bool v2; // 0x4041a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4041a0
    int64_t v5 = result - 6; // 0x4041a0
    int64_t v6 = 7; // 0x4041d6
    unsigned char v7 = *(char *)v5; // 0x4041d6
    char v8 = *(char *)v4; // 0x4041d6
    char v9 = v8; // 0x4041d6
    bool v10 = false; // 0x4041d6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4041e0
    int64_t v13 = v1; // 0x4041e0
    int64_t v14 = 3; // 0x4041e0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x404209
        g53 = str;
        g46 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4041f2
    char v16 = *(char *)v12; // 0x4041f2
    char v17 = v16; // 0x4041f2
    bool v18 = false; // 0x4041f2
    while (v15 == v16) {
        // 0x4041e2
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
    int64_t v20 = v1; // 0x4041fc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4041fe
        v20 = result + 4;
        g44 = v20;
    }
    // 0x404209
    g53 = v20;
    g46 = v20;
    return result;
}
// Address range: 0x404240 - 0x404332
int64_t function_404240(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x404254
    int64_t result = (int64_t)v1; // 0x404254
    if (result != a1) {
        // 0x404261
        return result;
    }
    int64_t v2 = function_415d60(); // 0x404270
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x404326
    if (v3 == 85) {
        // 0x404280
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x404318
            result2 = (int32_t)a2 != 9 ? (int64_t)&g5 : (int64_t)&g18;
            return result2;
        }
        char v4 = *v1; // 0x4042ae
        int64_t result3 = v4 != 96 ? (int64_t)&g19 : (int64_t)&g22; // 0x4042bb
        // 0x404261
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x404318
        result2 = (int32_t)a2 != 9 ? (int64_t)&g5 : (int64_t)&g18;
        return result2;
    }
    char v5 = *v1; // 0x4042fd
    int64_t result4 = v5 != 96 ? (int64_t)&g20 : (int64_t)&g21; // 0x40430a
    // 0x404261
    return result4;
}
// Address range: 0x404340 - 0x404397
int64_t function_404340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x404340
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x404388
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x404397 - 0x405561
int64_t function_404397(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4043e1
    int64_t v3 = 0; // 0x4043e1
    int64_t v4; // 0x404397
    int64_t v5; // 0x404397
    int64_t v6; // 0x404397
    int64_t v7; // 0x404397
    int64_t v8; // 0x404397
    int64_t v9; // 0x404397
    int64_t v10; // 0x404397
    int64_t v11; // 0x404397
    int64_t v12; // 0x404397
    int64_t v13; // 0x404397
    int64_t v14; // 0x404397
    int64_t v15; // 0x404397
    int64_t v16; // 0x404397
    int64_t v17; // 0x404397
    int64_t v18; // 0x404397
    int64_t result; // 0x404397
    int64_t v19; // 0x404397
    int32_t wc; // bp+132, 0x404397
    int64_t ps; // bp+136, 0x404397
    char v20; // 0x404950
    int64_t v21; // 0x404950
    int64_t v22; // 0x404cf8
    int64_t v23; // 0x404397
    int64_t v24; // 0x404d17
    int32_t v25; // 0x404397
    while (true) {
      lab_0x4043e8_2:
        // 0x4043e8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x404397
        int64_t v27; // 0x40441c
        while (true) {
          lab_0x4043e8:
            // 0x4043e8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4043f3
            if (v15 == -1) {
                // 0x4043f5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x404403
            if (v28) {
                // break (via goto) -> 0x404b68
                goto lab_0x404b68;
            }
            // 0x40440c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g75 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4049fb
                    if (v25 % 2 == 0) {
                        goto lab_0x404541;
                    }
                    // 0x404e1d
                    v26 = v5 + 1;
                    goto lab_0x4043e8;
                }
                case 7: {
                    goto lab_0x404541;
                }
                case 8: {
                    goto lab_0x404541;
                }
                case 9: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x404541;
                }
                case 12: {
                    goto lab_0x404541;
                }
                case 13: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40450d;
                }
                case 36: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x404541;
                }
                case 38: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x404541;
                }
                case 44: {
                    goto lab_0x404541;
                }
                case 45: {
                    goto lab_0x404541;
                }
                case 46: {
                    goto lab_0x404541;
                }
                case 47: {
                    goto lab_0x404541;
                }
                case 48: {
                    goto lab_0x404541;
                }
                case 49: {
                    goto lab_0x404541;
                }
                case 50: {
                    goto lab_0x404541;
                }
                case 51: {
                    goto lab_0x404541;
                }
                case 52: {
                    goto lab_0x404541;
                }
                case 53: {
                    goto lab_0x404541;
                }
                case 54: {
                    goto lab_0x404541;
                }
                case 55: {
                    goto lab_0x404541;
                }
                case 56: {
                    goto lab_0x404541;
                }
                case 57: {
                    goto lab_0x404541;
                }
                case 58: {
                    goto lab_0x404541;
                }
                case 59: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x404541;
                }
                case 66: {
                    goto lab_0x404541;
                }
                case 67: {
                    goto lab_0x404541;
                }
                case 68: {
                    goto lab_0x404541;
                }
                case 69: {
                    goto lab_0x404541;
                }
                case 70: {
                    goto lab_0x404541;
                }
                case 71: {
                    goto lab_0x404541;
                }
                case 72: {
                    goto lab_0x404541;
                }
                case 73: {
                    goto lab_0x404541;
                }
                case 74: {
                    goto lab_0x404541;
                }
                case 75: {
                    goto lab_0x404541;
                }
                case 76: {
                    goto lab_0x404541;
                }
                case 77: {
                    goto lab_0x404541;
                }
                case 78: {
                    goto lab_0x404541;
                }
                case 79: {
                    goto lab_0x404541;
                }
                case 80: {
                    goto lab_0x404541;
                }
                case 81: {
                    goto lab_0x404541;
                }
                case 82: {
                    goto lab_0x404541;
                }
                case 83: {
                    goto lab_0x404541;
                }
                case 84: {
                    goto lab_0x404541;
                }
                case 85: {
                    goto lab_0x404541;
                }
                case 86: {
                    goto lab_0x404541;
                }
                case 87: {
                    goto lab_0x404541;
                }
                case 88: {
                    goto lab_0x404541;
                }
                case 89: {
                    goto lab_0x404541;
                }
                case 90: {
                    goto lab_0x404541;
                }
                case 91: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x404541;
                }
                case 94: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x404541;
                }
                case 96: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x404541;
                }
                case 98: {
                    goto lab_0x404541;
                }
                case 99: {
                    goto lab_0x404541;
                }
                case 100: {
                    goto lab_0x404541;
                }
                case 101: {
                    goto lab_0x404541;
                }
                case 102: {
                    goto lab_0x404541;
                }
                case 103: {
                    goto lab_0x404541;
                }
                case 104: {
                    goto lab_0x404541;
                }
                case 105: {
                    goto lab_0x404541;
                }
                case 106: {
                    goto lab_0x404541;
                }
                case 107: {
                    goto lab_0x404541;
                }
                case 108: {
                    goto lab_0x404541;
                }
                case 109: {
                    goto lab_0x404541;
                }
                case 110: {
                    goto lab_0x404541;
                }
                case 111: {
                    goto lab_0x404541;
                }
                case 112: {
                    goto lab_0x404541;
                }
                case 113: {
                    goto lab_0x404541;
                }
                case 114: {
                    goto lab_0x404541;
                }
                case 115: {
                    goto lab_0x404541;
                }
                case 116: {
                    goto lab_0x404541;
                }
                case 117: {
                    goto lab_0x404541;
                }
                case 118: {
                    goto lab_0x404541;
                }
                case 119: {
                    goto lab_0x404541;
                }
                case 120: {
                    goto lab_0x404541;
                }
                case 121: {
                    goto lab_0x404541;
                }
                case 122: {
                    goto lab_0x404541;
                }
                case 123: {
                    goto lab_0x4044e5;
                }
                case 124: {
                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4044e5;
                }
                case 126: {
                    goto lab_0x40450d;
                }
                default: {
                    goto lab_0x4048e5;
                }
            }
        }
      lab_0x4048e5:
        if (v23 != 1) {
            // 0x404c50
            ps = 0;
            int64_t len = v15; // 0x404c60
            if (v15 == -1) {
                // 0x404c62
                len = strlen((char *)str);
            }
            // 0x404c8e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x404cef:
                // 0x404cef
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404cf4
                int64_t v30 = v29 + str;
                v24 = function_407dd0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40526a_2;
                    }
                    case -1: {
                        goto lab_0x40526a_2;
                    }
                    case -2: {
                        // 0x40534d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x405387
                            v19 = v18;
                            int64_t v31 = v18; // 0x40538a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x405397
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x405390
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40526a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40526a_2;
                    }
                    case 1: {
                        goto lab_0x404cc0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x404d6c
                        char v34 = *(char *)v33; // 0x404d7d
                        unsigned char v35; // 0x404397
                        if (v34 < 125) {
                            // 0x404d88
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x404d9f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_404340(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404d70
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x404d7d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404d88
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x404d9f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_404340(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404d70
                            v33++;
                        }
                        goto lab_0x404cc0;
                    }
                }
            }
            goto lab_0x40526a_2;
        } else {
            // 0x404934
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404541;
        }
    }
  lab_0x404b68:
    // 0x404b68
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40546a
        if (v8 > result) {
            // 0x405473
            *(char *)(v12 + result) = 0;
        }
        // 0x404797
        return result;
    }
    return function_404340(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404541:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x404550
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40475a_2;
        }
    }
    int64_t v39 = result; // 0x404651
    char v40 = v20; // 0x404651
    int64_t v41 = v38; // 0x404651
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404651
    int64_t v43 = v36; // 0x404651
    goto lab_0x4045cd;
  lab_0x40475a_2:
    // 0x404797
    return function_404340(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40526a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x404541;
    } else {
        uint64_t v49 = v46 + v5; // 0x404e3e
        int64_t v50 = v5 + 1; // 0x404f21
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404f28
        char v52 = v20; // 0x404f28
        int64_t v53 = result; // 0x404f28
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404ef1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404ef5
            int64_t v56 = v54 + 1; // 0x404efa
            int64_t v57 = v51 + 1; // 0x404f21
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x404eec
                v54 = v56;
                if (v47 > v54) {
                    // 0x404ef1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404ef5
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
        goto lab_0x4045cd;
    }
  lab_0x404cc0:
    // 0x404cc0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x404cdf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404ce2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40526a
        goto lab_0x40526a_2;
    }
    goto lab_0x404cef;
  lab_0x40450d:
    // 0x40450d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40475a_2;
    }
    goto lab_0x404541;
  lab_0x4044e5:;
    bool v60 = v15 == 1; // 0x4044f0
    if (v15 == -1) {
        // 0x4044f2
        v60 = *(char *)v1 == 0;
    }
    // 0x4044fe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x404541;
    } else {
        goto lab_0x40450d;
    }
  lab_0x4045cd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4045d2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4045d6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4043e8_2;
}
// Address range: 0x405570 - 0x40570e
int64_t function_405570(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405572
    int32_t * v3 = __errno_location(); // 0x40558c
    int64_t v4 = (int64_t)g37; // 0x405591
    int32_t v5 = *v3; // 0x40559b
    int64_t v6 = v4; // 0x4055b1
    if (v2 >= (int64_t)*(int32_t *)&g40) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x405709
            function_406870(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4055c0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4055c7
        int64_t v9; // 0x405570
        if (g37 == &g38) {
            int64_t v10 = function_406680(0, v8); // 0x4056ea
            int128_t v11 = __asm_movdqa(*(int128_t *)&g38); // 0x4056ef
            *(int64_t *)&g37 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406680(v4, v8); // 0x4055db
            *(int64_t *)&g37 = v12;
            v9 = v12;
        }
        // 0x4055ea
        v6 = v9;
        int32_t v13 = *(int32_t *)&g40; // 0x4055ea
        int32_t v14 = v7; // 0x4055f1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g40 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x405621
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40562b
    int64_t * v17 = (int64_t *)v15; // 0x40562e
    uint64_t v18 = *v17; // 0x40562e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x405631
    int64_t result = *v19; // 0x405631
    int64_t v20; // 0x405570
    uint64_t v21 = function_404340(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x405654
    if (v18 > v21) {
        // 0x4056cb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x405667
    *v17 = v22;
    if (result != (int64_t)&g54) {
        // 0x405677
        free((int64_t *)result);
    }
    int64_t result2 = function_406620(v22); // 0x405691
    *v19 = result2;
    int64_t v23; // 0x405570
    function_404340(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4056cb
    *v3 = v5;
    return result2;
}
// Address range: 0x405710 - 0x405744
int64_t function_405710(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405717
    int64_t result = function_406820(a1 == 0 ? (int64_t)&g55 : a1, 56); // 0x405736
    return result;
}
// Address range: 0x405750 - 0x40575f
int64_t function_405750(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g55 : a1); // 0x40575c
    return result;
}
// Address range: 0x405760 - 0x40576f
int64_t function_405760(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g55 : a1; // 0x405768
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g55;
}
// Address range: 0x405770 - 0x4057a3
int64_t function_405770(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g55 + 8 : a1 + 8; // 0x405789
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40578e
    uint32_t v3 = *v2; // 0x40578e
    uint32_t v4 = (int32_t)a2 % 32; // 0x405792
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4057b0 - 0x4057c3
int64_t function_4057b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g55 + 4 : a1 + 4); // 0x4057bc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4057d0 - 0x4057fb
int64_t function_4057d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g55 : a1; // 0x4057d8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4057f5
        abort();
        // UNREACHABLE
    }
    // 0x4057ec
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g55;
}
// Address range: 0x405800 - 0x405872
int64_t function_405800(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g55 : a5; // 0x405822
    int32_t * v2 = __errno_location(); // 0x40582b
    uint32_t v3 = *(int32_t *)v1; // 0x40584b
    int64_t result = function_404340(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40585a
    return result;
}
// Address range: 0x405880 - 0x405961
int64_t function_405880(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g55 : a4; // 0x4058a2
    int32_t * v2 = __errno_location(); // 0x4058a8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4058c7
    int32_t * v4 = (int32_t *)v1; // 0x4058ca
    int64_t v5 = function_404340(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4058e5
    int64_t v6 = v5 + 1; // 0x4058ea
    int64_t result = function_406620(v6); // 0x4058ff
    function_404340(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405944
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40594d
    return result;
}
// Address range: 0x405970 - 0x40597a
int64_t function_405970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405970
    return function_405880(a1, a2, 0, a3);
}
// Address range: 0x405980 - 0x405a15
int64_t function_405980(void) {
    uint32_t v1 = *(int32_t *)&g40; // 0x405980
    int64_t v2 = v1; // 0x405980
    int64_t v3 = v2; // 0x405994
    if (v1 >= 2) {
        int64_t v4 = &g40;
        int64_t v5 = v4 + 16; // 0x4059b3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g67;
        while (v5 != (int64_t)g37 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4059b0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g67;
        }
    }
    int64_t v6 = v3; // 0x4059cd
    if (g38 != 0x61d320) {
        // 0x4059cf
        free((int64_t *)g38);
        g38 = 256;
        *(int64_t *)&g39 = (int64_t)&g54;
        v6 = &g67;
    }
    int64_t result = v6; // 0x4059f1
    if (g37 != &g38) {
        // 0x4059f3
        free(g37);
        *(int64_t *)&g37 = (int64_t)&g38;
        result = &g67;
    }
    // 0x405a06
    *(int32_t *)&g40 = 1;
    return result;
}
// Address range: 0x405a20 - 0x405a31
int64_t function_405a20(void) {
    // 0x405a20
    int64_t v1; // 0x405a20
    return function_405570(v1, v1, -1, (int64_t *)&g55);
}
// Address range: 0x405a40 - 0x405a4a
int64_t function_405a40(void) {
    // 0x405a40
    int64_t v1; // 0x405a40
    return function_405570(v1, v1, v1, (int64_t *)&g55);
}
// Address range: 0x405a50 - 0x405a66
int64_t function_405a50(int64_t a1) {
    // 0x405a50
    return function_405570(0, a1, -1, (int64_t *)&g55);
}
// Address range: 0x405a70 - 0x405a82
int64_t function_405a70(int64_t a1, int64_t a2) {
    // 0x405a70
    return function_405570(0, a1, a2, (int64_t *)&g55);
}
// Address range: 0x405a90 - 0x405af8
int64_t function_405a90(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405aa0
    return function_405570((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405b00 - 0x405b64
int64_t function_405b00(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405b10
    return function_405570((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405b70 - 0x405b7c
int64_t function_405b70(int64_t a1, int64_t a2) {
    // 0x405b70
    return function_405a90(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405b80 - 0x405b8f
int64_t function_405b80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405b80
    return function_405b00(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405b90 - 0x405c00
int64_t function_405b90(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g55); // 0x405b9d
    int128_t v2 = __asm_movdqa(g56); // 0x405ba5
    int128_t v3 = __asm_movdqa(g57); // 0x405bad
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x405bc2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405bd8
    uint32_t v6 = *v5; // 0x405bd8
    uint32_t v7 = (int32_t)a3 % 32; // 0x405bdd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405570(0, a1, a2, &v4);
}
// Address range: 0x405c00 - 0x405c0d
int64_t function_405c00(int64_t a1, int64_t a2) {
    // 0x405c00
    return function_405b90(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405c10 - 0x405c21
int64_t function_405c10(int64_t a1) {
    // 0x405c10
    return function_405b90(a1, -1, 58);
}
// Address range: 0x405c30 - 0x405c3a
int64_t function_405c30(void) {
    // 0x405c30
    int64_t v1; // 0x405c30
    return function_405b90(v1, v1, 58);
}
// Address range: 0x405c40 - 0x405cae
int64_t function_405c40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405c5a
    return function_405570(a1, a3, -1, &v1);
}
// Address range: 0x405cb0 - 0x405d1c
int64_t function_405cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g55); // 0x405cb7
    int128_t v2 = __asm_movdqa(g56); // 0x405cbf
    int128_t v3 = __asm_movdqa(g57); // 0x405cc7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405ce9
    if (a2 == 0 || a3 == 0) {
        // 0x405d17
        abort();
        // UNREACHABLE
    }
    // 0x405cfa
    return function_405570(a1, a4, a5, &v4);
}
// Address range: 0x405d20 - 0x405d29
int64_t function_405d20(void) {
    // 0x405d20
    int64_t v1; // 0x405d20
    return function_405cb0(v1, v1, v1, v1, -1);
}
// Address range: 0x405d30 - 0x405d47
int64_t function_405d30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405d30
    return function_405cb0(0, a1, a2, a3, -1);
}
// Address range: 0x405d50 - 0x405d63
int64_t function_405d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405d50
    return function_405cb0(0, a1, a2, a3, a4);
}
// Address range: 0x405d70 - 0x405d7a
int64_t function_405d70(void) {
    // 0x405d70
    int64_t v1; // 0x405d70
    return function_405570(v1, v1, v1, &g36);
}
// Address range: 0x405d80 - 0x405d92
int64_t function_405d80(int64_t a1, int64_t a2) {
    // 0x405d80
    return function_405570(0, a1, a2, &g36);
}
// Address range: 0x405da0 - 0x405db1
int64_t function_405da0(void) {
    // 0x405da0
    int64_t v1; // 0x405da0
    return function_405570(v1, v1, -1, &g36);
}
// Address range: 0x405dc0 - 0x405dd6
int64_t function_405dc0(int64_t a1) {
    // 0x405dc0
    return function_405570(0, a1, -1, &g36);
}
// Address range: 0x405de0 - 0x405e11
int64_t function_405de0(int64_t a1, int64_t a2) {
    int64_t v1 = function_407e50(a1, 0, a2); // 0x405df1
    return v1 != 0 ? 1 - a1 + v1 : a2;
}
// Address range: 0x405e20 - 0x406071
int64_t function_405e20(void) {
    // 0x405e20
    int64_t v1; // 0x405e20
    uint64_t v2 = v1;
    char v3 = v2;
    char v4 = v1;
    int64_t v5 = v1 % 256; // 0x405e23
    int64_t v6; // 0x405e20
    int64_t v7; // 0x405e20
    int64_t v8; // 0x405e20
    int64_t v9; // 0x405e20
    int64_t v10; // 0x405e20
    int64_t v11; // 0x405e20
    int64_t v12; // 0x405e20
    int64_t v13; // 0x405e20
    int64_t v14; // 0x405e20
    int64_t v15; // 0x405e20
    int64_t v16; // 0x405e20
    int64_t v17; // 0x405e20
    int64_t v18; // 0x405e20
    int64_t v19; // 0x405e20
    if (v3 == 45) {
        int64_t v20; // 0x405e20
        int64_t v21 = v20 + 1; // 0x405ed0
        unsigned char v22 = *(char *)v21; // 0x405ed4
        v20 = v21;
        while (v22 == 48) {
            // 0x405ed0
            v21 = v20 + 1;
            v22 = *(char *)v21;
            v20 = v21;
        }
        int64_t v23 = (int64_t)v22 + 0xffffffd0; // 0x405edf
        if (v4 != 45) {
            // 0x405ee8
            if ((int32_t)v23 < 10) {
                // 0x405f28
                return 0xffffffff;
            }
            // 0x405ef8
            if (v4 != 48) {
                // 0x405f01
                return (int32_t)v5 < 58 ? 0xffffffff : 0;
            }
            int64_t v24; // 0x405e20
            int64_t v25 = v24 + 1; // 0x406000
            unsigned char v26 = *(char *)v25; // 0x406004
            v24 = v25;
            while (v26 == 48) {
                // 0x406000
                v25 = v24 + 1;
                v26 = *(char *)v25;
                v24 = v25;
            }
            // 0x405f01
            return (int32_t)(int64_t)v26 < 58 ? 0xffffffff : 0;
        }
        int64_t v27; // 0x405e20
        int64_t v28 = v27 + 1; // 0x405f50
        unsigned char v29 = *(char *)v28; // 0x405f54
        v27 = v28;
        while (v29 == 48) {
            // 0x405f50
            v28 = v27 + 1;
            v29 = *(char *)v28;
            v27 = v28;
        }
        int64_t v30 = v29; // 0x405f54
        v8 = v28;
        v9 = v21;
        v19 = v30;
        v13 = v23;
        if (v22 != v29) {
            goto lab_0x405f82;
        } else {
            // 0x405f60
            v11 = v28;
            v18 = v30;
            if ((int32_t)v23 < 10) {
                int64_t v31 = v21 + 1; // 0x405f6a
                int64_t v32 = v28 + 1; // 0x405f6e
                unsigned char v33 = *(char *)v31; // 0x405f72
                int64_t v34 = v33;
                while (v33 == *(char *)v32) {
                    // 0x405f60
                    v11 = v32;
                    v18 = v34;
                    if ((int32_t)(v34 + 0xffffffd0) >= 10) {
                        goto lab_0x406058;
                    }
                    v31++;
                    v32++;
                    v33 = *(char *)v31;
                    v34 = v33;
                }
            } else {
                goto lab_0x406058;
            }
        }
    } else {
        int64_t v35 = v2 % 256; // 0x405e20
        if (v4 == 45) {
            int64_t v36; // 0x405e20
            int64_t v37 = v36 + 1; // 0x405f10
            unsigned char v38 = *(char *)v37; // 0x405f14
            v36 = v37;
            while (v38 == 48) {
                // 0x405f10
                v37 = v36 + 1;
                v38 = *(char *)v37;
                v36 = v37;
            }
            // 0x405f1b
            if ((int32_t)v38 < 58) {
                // 0x405f28
                return 1;
            }
            // 0x405f37
            if (v3 != 48) {
                // 0x405f3c
                return (int32_t)v35 < 58;
            }
            int64_t v39; // 0x405e20
            int64_t v40 = v39 + 1; // 0x405f30
            unsigned char v41 = *(char *)v40; // 0x405f34
            v39 = v40;
            while (v41 == 48) {
                // 0x405f30
                v40 = v39 + 1;
                v41 = *(char *)v40;
                v39 = v40;
            }
            // 0x405f3c
            return (int32_t)(int64_t)v41 < 58;
        }
        int64_t v42 = v35; // 0x405e43
        int64_t v43; // 0x405e20
        if (v3 == 48) {
            int64_t v44; // 0x405e20
            int64_t v45 = v44 + 1; // 0x405ff0
            unsigned char v46 = *(char *)v45; // 0x405ff4
            v44 = v45;
            while (v46 == 48) {
                // 0x405ff0
                v45 = v44 + 1;
                v46 = *(char *)v45;
                v44 = v45;
            }
            // 0x405e40
            v43 = v45;
            v42 = v46;
        }
        int64_t v47 = v5; // 0x405e4c
        int64_t v48; // 0x405e20
        if (v4 == 48) {
            int64_t v49; // 0x405e20
            int64_t v50 = v49 + 1; // 0x405fe0
            unsigned char v51 = *(char *)v50; // 0x405fe4
            v49 = v50;
            while (v51 == 48) {
                // 0x405fe0
                v50 = v49 + 1;
                v51 = *(char *)v50;
                v49 = v50;
            }
            // 0x405e49
            v48 = v50;
            v47 = v51;
        }
        int64_t v52 = v42 + 0xffffffd0; // 0x405e55
        v6 = v48;
        v7 = v43;
        v15 = v42;
        v17 = v47;
        v12 = v52;
        if ((char)v47 != (char)v42) {
            goto lab_0x405e80;
        } else {
            // 0x405e60
            v10 = v48;
            v14 = v42;
            v16 = v47;
            if ((int32_t)v52 < 10) {
                int64_t v53 = v43 + 1; // 0x405e6a
                int64_t v54 = v48 + 1; // 0x405e6e
                unsigned char v55 = *(char *)v53; // 0x405e72
                int64_t v56 = v55;
                unsigned char v57 = *(char *)v54; // 0x405e75
                int64_t v58 = v56 + 0xffffffd0; // 0x405e78
                while (v55 == v57) {
                    // 0x405e60
                    v10 = v54;
                    v14 = v56;
                    v16 = v56;
                    if ((int32_t)v58 >= 10) {
                        goto lab_0x406040;
                    }
                    v53++;
                    v54++;
                    v55 = *(char *)v53;
                    v56 = v55;
                    v57 = *(char *)v54;
                    v58 = v56 + 0xffffffd0;
                }
                // 0x405e80
                v6 = v54;
                v7 = v53;
                v15 = v56;
                v17 = v57;
                v12 = v58;
                goto lab_0x405e80;
            } else {
                goto lab_0x406040;
            }
        }
    }
  lab_0x406058:;
    int64_t v59 = v11; // 0x40605d
    int64_t v60 = v18; // 0x40605d
    goto lab_0x406060;
  lab_0x406040:;
    int64_t v73 = v10; // 0x406040
    int64_t v74 = v14 - v16 & 0xffffffff; // 0x406040
    int64_t v75 = v16; // 0x406040
    goto lab_0x406042;
  lab_0x405f82:
    // 0x405f82
    v59 = v8;
    v60 = v19;
    int64_t v61; // 0x405e20
    if ((int32_t)v13 < 10) {
        int64_t v76 = 1;
        unsigned char v77 = *(char *)(v76 + v9); // 0x405fa0
        while (v77 == 57 || (int32_t)v77 < 57) {
            // 0x405fa0
            int64_t v78; // 0x405e20
            v76 = v78 + 1;
            v77 = *(char *)(v76 + v9);
            v78 = v76;
        }
        // 0x405fb2
        v61 = v8;
        if ((int32_t)v19 >= 58) {
            // 0x406029
            return v76 != 0 ? 0xffffffff : 0;
        }
        goto lab_0x405fba;
    } else {
        goto lab_0x406060;
    }
  lab_0x405e80:;
    int64_t v79 = v15 - v17 & 0xffffffff; // 0x405e80
    v73 = v6;
    v74 = v79;
    v75 = v17;
    int64_t v69; // 0x405e20
    int64_t v71; // 0x405e20
    int64_t v72; // 0x405e20
    if ((int32_t)v12 < 10) {
        int64_t v80 = 1;
        int64_t v81 = v80; // 0x405ea0
        while ((int32_t)*(char *)(v80 + v7) < 58) {
            // 0x405e90
            v80 = v81 + 1;
            v81 = v80;
        }
        // 0x405ea2
        v69 = v6;
        v72 = v79;
        v71 = v80;
        if ((int32_t)v17 >= 58) {
            // 0x406020
            return v80 != 0;
        }
        goto lab_0x405eae;
    } else {
        goto lab_0x406042;
    }
  lab_0x406060:
    // 0x406060
    v61 = v59;
    if ((int32_t)v60 >= 58) {
        // 0x405f28
        return 0;
    }
    goto lab_0x405fba;
  lab_0x406042:
    // 0x406042
    v69 = v73;
    v72 = v74;
    v71 = 0;
    if ((int32_t)v75 >= 58) {
        // 0x405f28
        return 0;
    }
    goto lab_0x405eae;
  lab_0x405fba:;
    int64_t v62 = 1;
    unsigned char v63 = *(char *)(v62 + v61); // 0x405fc0
    int64_t v64 = v62; // 0x405fcf
    while (v63 == 57 || (int32_t)v63 < 57) {
        // 0x405fc0
        v62 = v64 + 1;
        v63 = *(char *)(v62 + v61);
        v64 = v62;
    }
    // 0x405fd1
    int64_t v65; // 0x405e20
    if (v65 != v62) {
        // 0x405fd6
        return v65 < v62 ? 1 : 0xffffffff;
    }
    // 0x406010
    int64_t v66; // 0x405e20
    return v65 == 0 ? 0 : v66 & 0xffffffff;
  lab_0x405eae:;
    int64_t v67 = 1;
    unsigned char v68 = *(char *)(v67 + v69); // 0x405eb0
    int64_t v70 = v67; // 0x405ebf
    while (v68 == 57 || (int32_t)v68 < 57) {
        // 0x405eb0
        v67 = v70 + 1;
        v68 = *(char *)(v67 + v69);
        v70 = v67;
    }
    // 0x405ec1
    if (v71 == v67) {
        // 0x406010
        return v71 == 0 ? 0 : v72 & 0xffffffff;
    }
    // 0x405eca
    return v71 < v67 ? 0xffffffff : 1;
}
// Address range: 0x406080 - 0x40645d
int64_t function_406080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x406118
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40609c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4060b6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4060fb
    if (a6 < 10) {
        // 0x40610a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x406202
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x406460 - 0x406480
int64_t function_406460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406460
    if (a5 == 0) {
        // 0x40647b
        return function_406080(a1, a2, a3, a4, a5, 0, (int64_t)&g67);
    }
    int64_t v1 = 0; // 0x406467
    v1++;
    int64_t v2 = v1; // 0x406479
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406470
        v1++;
        v2 = v1;
    }
    // 0x40647b
    return function_406080(a1, a2, a3, a4, a5, v2, (int64_t)&g67);
}
// Address range: 0x406480 - 0x4064e0
int64_t function_406480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x406480
    int64_t v4 = &v3; // 0x406480
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x4064b3
    int64_t v7; // 0x40649d
    int64_t * v8; // 0x4064bb
    int64_t v9; // 0x4064bb
    int64_t v10; // 0x4064c7
    if (v6 < 48) {
        // 0x406490
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x4064d3
            break;
        }
    } else {
        // 0x4064bb
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x4064d3
            break;
        }
    }
    int64_t v11 = 10; // 0x4064b1
    while (v5 != 9) {
        // 0x4064a9
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x406490
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x4064d3
                break;
            }
        } else {
            // 0x4064bb
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x4064d3
                break;
            }
        }
        // 0x4064a9
        v11 = 10;
    }
    // 0x4064d3
    return function_406080(a1, a2, a3, a4, v4, v11, (int64_t)&g67);
}
// Address range: 0x4064e0 - 0x40659c
int64_t function_4064e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4064e0
    int64_t v1; // bp-168, 0x4064e0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4064e0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4064e0
    int64_t v8; // 0x4064e0
    int64_t v9; // bp-56, 0x4064e0
    int64_t v10; // 0x406545
    int64_t v11; // 0x406569
    if ((int32_t)v6 < 48) {
        // 0x406530
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406580
            break;
        }
    } else {
        // 0x406562
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406580
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40655a
    int64_t v13 = 10; // 0x40655a
    while (v5 != 9) {
        // 0x40655c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x406530
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406580
                break;
            }
        } else {
            // 0x406562
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406580
                break;
            }
        }
        // 0x406552
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406580
    int64_t v14; // bp-136, 0x4064e0
    int64_t result = function_406080(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g67); // 0x40658f
    return result;
}
// Address range: 0x4065a0 - 0x406614
int64_t function_4065a0(int64_t a1) {
    // 0x4065a0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406603
    return fputs_unlocked(v1, g45);
}
// Address range: 0x406620 - 0x40663a
int64_t function_406620(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406624
    if (size != 0 != (mem == NULL)) {
        // 0x406633
        return (int64_t)mem;
    }
    // 0x406635
    function_406870(size);
    // UNREACHABLE
}
// Address range: 0x406640 - 0x406661
int64_t function_406640(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x406643
    int64_t v2 = v1; // 0x406643
    if (v2 < 0) {
        // 0x40665b
        function_406870(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406659
        return function_406620(v2);
    }
    // 0x40665b
    function_406870(v2);
    // UNREACHABLE
}
// Address range: 0x406670 - 0x406672
int64_t function_406670(void) {
    // 0x406670
    int64_t v1; // 0x406670
    return function_406620(v1);
}
// Address range: 0x406680 - 0x4066b6
int64_t function_406680(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4066a8
        free(v1);
        return (int32_t)&g67 ^ (int32_t)&g67;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406691
    if (a2 != 0 != (mem == NULL)) {
        // 0x4066a0
        return (int64_t)mem;
    }
    // 0x4066b1
    function_406870(a1);
    // UNREACHABLE
}
// Address range: 0x4066c0 - 0x4066e1
int64_t function_4066c0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4066c3
    int64_t v2 = v1; // 0x4066c3
    if (v2 < 0) {
        // 0x4066db
        function_406870(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4066d9
        return function_406680(a1, v2);
    }
    // 0x4066db
    function_406870(a1);
    // UNREACHABLE
}
// Address range: 0x4066f0 - 0x406776
int64_t function_4066f0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40674b
            function_406870(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406680(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406733
    if (a2 == 0) {
        // 0x406758
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406738
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40674b
        function_406870(a1);
        // UNREACHABLE
    }
    // 0x40671a
    *(int64_t *)a2 = v2;
    return function_406680(a1, v2 * a3);
}
// Address range: 0x406780 - 0x4067d0
int64_t function_406780(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406780
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4067ca
            function_406870(a1);
            // UNREACHABLE
        }
        // 0x4067a2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406680(a1, v1);
    }
    if (a2 == 0) {
        // 0x4067b5
        *(int64_t *)a2 = 128;
        return function_406680(0, 128);
    }
    // 0x4067c8
    if (a2 < 0) {
        // 0x4067ca
        function_406870(a1);
        // UNREACHABLE
    }
    // 0x4067a2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406680(a1, v1);
}
// Address range: 0x4067d0 - 0x4067e7
int64_t function_4067d0(int64_t a1, int64_t a2) {
    // 0x4067d0
    return (int64_t)memset((int64_t *)function_406620(a1), 0, (int32_t)a1);
}
// Address range: 0x4067f0 - 0x40681e
int64_t function_4067f0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4067f7
    if ((int64_t)v1 < 0) {
        // 0x406819
        function_406870(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406819
        function_406870(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40680a
    if (mem != NULL) {
        // 0x406814
        return (int64_t)mem;
    }
    // 0x406819
    function_406870(nmemb);
    // UNREACHABLE
}
// Address range: 0x406820 - 0x406848
int64_t function_406820(int64_t a1, int64_t a2) {
    int64_t v1 = function_406620(a2); // 0x40682f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406850 - 0x406863
int64_t function_406850(int64_t str) {
    // 0x406850
    return function_406820(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406870 - 0x4068a1
int64_t function_406870(int64_t a1) {
    // 0x406870
    error(g35, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4068b0 - 0x4070df
int64_t function_4068b0(int64_t a1, int32_t a2, int64_t a3, char * a4, int32_t a5) {
    uint32_t v1 = (int32_t)a3; // 0x4068c2
    if (v1 >= 37) {
        // 0x40707c
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoimax");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    int64_t str = a5;
    int64_t v2; // bp-64, 0x4068b0
    int64_t v3 = a2 == 0 ? (int64_t)&v2 : (int64_t)a2; // 0x4068d8
    int32_t * v4 = __errno_location(); // 0x4068e2
    *v4 = 0;
    char * v5 = (char *)a1;
    int32_t v6 = __strtol_internal(v5, (char **)v3, v1, 0); // 0x4068fa
    int64_t * v7 = (int64_t *)v3; // 0x4068ff
    int64_t v8 = *v7; // 0x4068ff
    int64_t v9; // 0x4068b0
    int64_t v10; // 0x4068b0
    int64_t v11; // 0x4068b0
    char v12; // 0x4068b0
    int64_t v13; // 0x4068b0
    int64_t v14; // 0x4068b0
    int64_t v15; // 0x4068b0
    if (v8 == a1) {
        // 0x406958
        if (a5 == 0) {
            // 0x40692e
            return 4;
        }
        char c = *v5; // 0x406961
        if (c == 0) {
            // 0x40692e
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x40697f
        v14 = 1;
        v10 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x40692e
            return 4;
        }
        goto lab_0x40698d;
    } else {
        int32_t v16 = *v4; // 0x40690a
        int64_t v17 = 0; // 0x406910
        if (v16 != 0) {
            // 0x406940
            v17 = 1;
            if (v16 != 34) {
                // 0x40692e
                return 4;
            }
        }
        int64_t v18 = v6; // 0x4068fa
        v13 = v18;
        v9 = v17;
        if (a5 == 0) {
            goto lab_0x406927;
        } else {
            char c2 = *(char *)v8; // 0x40691a
            v13 = v18;
            v9 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x406a27
                v14 = v18;
                v10 = v17;
                v12 = c2;
                v15 = v18;
                v11 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40698d;
                } else {
                    goto lab_0x406a35;
                }
            } else {
                goto lab_0x406927;
            }
        }
    }
  lab_0x40698d:;
    int64_t v19 = v10;
    int64_t v20 = v14;
    unsigned char v21 = v12 - 69;
    int64_t v22 = 1024; // 0x406994
    int64_t v23 = 1; // 0x406994
    int64_t v24; // 0x4068b0
    int64_t v25; // 0x4068b0
    int64_t v26; // 0x4068b0
    int64_t v27; // 0x4068b0
    int64_t v28; // 0x4068b0
    int64_t v29; // 0x4068b0
    int64_t v30; // 0x4068b0
    int64_t v31; // 0x4068b0
    int64_t v32; // 0x4068b0
    int64_t v33; // 0x4068b0
    int64_t v34; // 0x4068b0
    int64_t v35; // 0x4068b0
    int64_t v36; // 0x4068b0
    int64_t v37; // 0x4068b0
    int64_t v38; // 0x4068b0
    int64_t v39; // 0x4068b0
    int64_t v40; // 0x4068b0
    int64_t v41; // 0x4068b0
    int64_t v42; // 0x4068b0
    if (v21 < 48) {
        // 0x4069c0
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4069a0;
        } else {
            // 0x4069d4
            v22 = 1024;
            v23 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4069a0;
            } else {
                // 0x4069e6
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x4069a0;
                    }
                    case 105: {
                        char v43 = *(char *)(v8 + 2); // 0x406fc2
                        v22 = 1024;
                        v23 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x4069a0;
                    }
                    default: {
                        // 0x4069fb
                        g69 = v21;
                        v22 = 1000;
                        v23 = 2;
                        v15 = v20;
                        v11 = v19;
                        v25 = v20;
                        v32 = 1;
                        v24 = v19;
                        v26 = 1024;
                        v33 = 1;
                        v37 = -0x20000000000000;
                        v38 = 1;
                        v27 = 1024;
                        v34 = 1;
                        v40 = -0x20000000000000;
                        v28 = 1024;
                        v35 = 1;
                        v42 = -0x20000000000000;
                        v29 = 1024;
                        v36 = 1;
                        v41 = -0x20000000000000;
                        v30 = 1024;
                        v31 = 1;
                        v39 = -0x20000000000000;
                        switch (v12) {
                            case 69: {
                                goto lab_0x406c88;
                            }
                            case 70: {
                                goto lab_0x406a35;
                            }
                            case 71: {
                                goto lab_0x406cf0;
                            }
                            case 72: {
                                goto lab_0x406a35;
                            }
                            case 73: {
                                goto lab_0x406a35;
                            }
                            case 74: {
                                goto lab_0x406a35;
                            }
                            case 75: {
                                goto lab_0x406ad5;
                            }
                            case 76: {
                                goto lab_0x406a35;
                            }
                            case 77: {
                                goto lab_0x406b18;
                            }
                            case 78: {
                                goto lab_0x406a35;
                            }
                            case 79: {
                                goto lab_0x406a35;
                            }
                            case 80: {
                                goto lab_0x406bb8;
                            }
                            case 81: {
                                goto lab_0x406a35;
                            }
                            case 82: {
                                goto lab_0x406a35;
                            }
                            case 83: {
                                goto lab_0x406a35;
                            }
                            case 84: {
                                goto lab_0x406c20;
                            }
                            case 85: {
                                goto lab_0x406a35;
                            }
                            case 86: {
                                goto lab_0x406a35;
                            }
                            case 87: {
                                goto lab_0x406a35;
                            }
                            case 88: {
                                goto lab_0x406a35;
                            }
                            case 89: {
                                goto lab_0x406d58;
                            }
                            case 90: {
                                goto lab_0x406dc0;
                            }
                            case 91: {
                                goto lab_0x406a35;
                            }
                            case 92: {
                                goto lab_0x406a35;
                            }
                            case 93: {
                                goto lab_0x406a35;
                            }
                            case 94: {
                                goto lab_0x406a35;
                            }
                            case 95: {
                                goto lab_0x406a35;
                            }
                            case 96: {
                                goto lab_0x406a35;
                            }
                            case 97: {
                                goto lab_0x406a35;
                            }
                            case 98: {
                                goto lab_0x406b85;
                            }
                            case 99: {
                                goto lab_0x406a78;
                            }
                            case 100: {
                                goto lab_0x406a35;
                            }
                            case 101: {
                                goto lab_0x406a35;
                            }
                            case 102: {
                                goto lab_0x406a35;
                            }
                            case 103: {
                                goto lab_0x406cf0;
                            }
                            case 104: {
                                goto lab_0x406a35;
                            }
                            case 105: {
                                goto lab_0x406a35;
                            }
                            case 106: {
                                goto lab_0x406a35;
                            }
                            case 107: {
                                goto lab_0x406ad5;
                            }
                            case 108: {
                                goto lab_0x406a35;
                            }
                            case 109: {
                                goto lab_0x406b18;
                            }
                            case 110: {
                                goto lab_0x406a35;
                            }
                            case 111: {
                                goto lab_0x406a35;
                            }
                            case 112: {
                                goto lab_0x406a35;
                            }
                            case 113: {
                                goto lab_0x406a35;
                            }
                            case 114: {
                                goto lab_0x406a35;
                            }
                            case 115: {
                                goto lab_0x406a35;
                            }
                            case 116: {
                                goto lab_0x406c20;
                            }
                            default: {
                                goto lab_0x4069a0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4069a0;
    }
  lab_0x406927:
    // 0x406927
    *(int64_t *)a4 = v13;
    // 0x40692e
    return v9 & 0xffffffff;
  lab_0x4069a0:
    // 0x4069a0
    g68 = v12 - 66;
    v15 = v20;
    v11 = v19;
    v25 = v20;
    v32 = v23;
    v24 = v19;
    v38 = v23;
    switch (v12) {
        case 66: {
            // 0x406a71
            v25 = 1024 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x406a78;
        }
        case 69: {
            // 0x406c70
            v29 = v22;
            v36 = v23;
            v41 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x406c88;
        }
        case 71: {
            goto lab_0x406cf0;
        }
        case 75: {
            goto lab_0x406ad5;
        }
        case 77: {
            goto lab_0x406b00;
        }
        case 80: {
            // 0x406ba0
            v27 = v22;
            v34 = v23;
            v40 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x406bb8;
        }
        case 84: {
            goto lab_0x406c08;
        }
        case 89: {
            // 0x406d40
            goto lab_0x406d58;
        }
        case 90: {
            // 0x406da8
            v30 = v22;
            v31 = v23;
            v39 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x406dc0;
        }
        case 98: {
            goto lab_0x406b85;
        }
        case 99: {
            goto lab_0x406a78;
        }
        case 103: {
            goto lab_0x406cf0;
        }
        case 107: {
            goto lab_0x406ad5;
        }
        case 109: {
            goto lab_0x406b00;
        }
        case 116: {
            goto lab_0x406c08;
        }
        case 119: {
            // 0x406ab9
            v25 = 2 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x406a78;
        }
        default: {
            goto lab_0x406a35;
        }
    }
    // 0x406cd8
    goto lab_0x406cf0;
    // 0x406ac0
    goto lab_0x406ad5;
  lab_0x406b00:
    // 0x406b00
    v26 = v22;
    v33 = v23;
    v37 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x406b18;
  lab_0x406c08:
    // 0x406c08
    v28 = v22;
    v35 = v23;
    v42 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x406c20;
  lab_0x406b85:
    // 0x406b85
    v25 = 512 * v20;
    v32 = v38;
    v24 = v19;
    goto lab_0x406a78;
  lab_0x406a78:;
    int64_t v63 = v24;
    int64_t v64 = v32 + v8; // 0x406a78
    *v7 = v64;
    v13 = v25;
    v9 = (*(char *)v64 != 0 ? v63 | 2 : v63) & 0xffffffff;
    goto lab_0x406927;
  lab_0x406a35:
    // 0x406a35
    *(int64_t *)a4 = v15;
    // 0x40692e
    return (v11 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x406c88:;
    uint64_t v65 = v29;
    int64_t v66 = v20;
    int64_t v67 = -0x8000000000000000; // 0x406cc1
    int64_t v68 = 1; // 0x406cc1
    if (v66 >= v41) {
        // 0x406ca0
        v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
        v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : 0;
    }
    int32_t v69 = 5; // 0x406cb5
    int32_t v70 = v69; // 0x406cb8
    int64_t v71 = v68; // 0x406cb8
    int64_t v59 = v67; // 0x406cb8
    int64_t v61 = v36; // 0x406cb8
    int64_t v62 = v68; // 0x406cb8
    while (v69 != 0) {
        // 0x406cbe
        v66 = v67;
        v67 = -0x8000000000000000;
        v68 = 1;
        if (v66 >= v41) {
            // 0x406ca0
            v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
            v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : v71;
        }
        // 0x406cb5
        v69 = v70 - 1;
        v70 = v69;
        v71 = v68;
        v59 = v67;
        v61 = v36;
        v62 = v68;
    }
    goto lab_0x406ef0;
  lab_0x406cf0:
    // 0x406cf0
    while (true) {
        // 0x406d26
        int32_t v44; // 0x4068b0
        int32_t v45 = v44;
        int64_t v46; // 0x4068b0
        int64_t v47 = v46;
        int64_t v48 = -0x8000000000000000; // 0x406d29
        int64_t v49 = 1; // 0x406d29
        int64_t v50; // 0x4068b0
        uint64_t v51; // 0x4068b0
        if (v47 >= v51) {
            int64_t v52 = v50;
            uint64_t v53; // 0x4068b0
            int64_t v54 = v47 > 0x7fffffffffffffff / v53 ? 0x7fffffffffffffff : v47 * v53;
            int64_t v55 = v47 > 0x7fffffffffffffff / v53 ? 1 : v52;
            v48 = v54;
            v49 = v55;
        }
        int64_t v56 = v49;
        int64_t v57 = v48;
        int32_t v58 = v45 - 1; // 0x406d1d
        v46 = v57;
        v44 = v58;
        v50 = v56;
        v59 = v57;
        int64_t v60; // 0x4068b0
        v61 = v60;
        v62 = v56;
        if (v58 == 0) {
            // break -> 0x406ef0
            break;
        }
    }
    goto lab_0x406ef0;
  lab_0x406ad5:;
    int64_t v76 = 1;
    v25 = -0x8000000000000000;
    v32 = v76;
    v24 = 1;
    int64_t v73; // 0x4068b0
    int64_t v74; // 0x4068b0
    int64_t v75; // 0x4068b0
    int64_t v72; // 0x4068b0
    if (v20 < -0x20000000000000) {
        goto lab_0x406a78;
    } else {
        int64_t v77 = 1024;
        v73 = 0x7fffffffffffffff / v77;
        v75 = v77;
        v74 = v20;
        v72 = v76;
        goto lab_0x406aec;
    }
  lab_0x406b18:
    // 0x406b18
    v25 = -0x8000000000000000;
    v32 = v33;
    v24 = 1;
    if (v20 < v37) {
        goto lab_0x406a78;
    } else {
        int64_t v78 = 0x7fffffffffffffff / v26;
        v25 = 0x7fffffffffffffff;
        v32 = v33;
        v24 = 1;
        if (v20 > v78) {
            goto lab_0x406a78;
        } else {
            int64_t v79 = v26 * v20; // 0x406b38
            v25 = -0x8000000000000000;
            v32 = v33;
            v24 = 1;
            v73 = v78;
            v75 = v26;
            v74 = v79;
            v72 = v33;
            if (v79 < v37) {
                goto lab_0x406a78;
            } else {
                goto lab_0x406aec;
            }
        }
    }
  lab_0x406bb8:;
    uint64_t v80 = v27;
    int64_t v81 = v20;
    int64_t v82 = -0x8000000000000000; // 0x406bf1
    int64_t v83 = 1; // 0x406bf1
    if (v40 <= v81) {
        // 0x406bd0
        v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
        v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : 0;
    }
    int32_t v84 = 4; // 0x406be5
    int32_t v85 = v84; // 0x406be8
    int64_t v86 = v83; // 0x406be8
    v59 = v82;
    v61 = v34;
    v62 = v83;
    while (v84 != 0) {
        // 0x406bee
        v81 = v82;
        v82 = -0x8000000000000000;
        v83 = 1;
        if (v40 <= v81) {
            // 0x406bd0
            v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
            v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : v86;
        }
        // 0x406be5
        v84 = v85 - 1;
        v85 = v84;
        v86 = v83;
        v59 = v82;
        v61 = v34;
        v62 = v83;
    }
    goto lab_0x406ef0;
  lab_0x406c20:;
    uint64_t v87 = v28;
    int64_t v88 = v20;
    int64_t v89 = -0x8000000000000000; // 0x406c59
    int64_t v90 = 1; // 0x406c59
    if (v42 <= v88) {
        // 0x406c38
        v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
        v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : 0;
    }
    int32_t v91 = 3; // 0x406c4d
    int32_t v92 = v91; // 0x406c50
    int64_t v93 = v90; // 0x406c50
    v59 = v89;
    v61 = v35;
    v62 = v90;
    while (v91 != 0) {
        // 0x406c56
        v88 = v89;
        v89 = -0x8000000000000000;
        v90 = 1;
        if (v42 <= v88) {
            // 0x406c38
            v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
            v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : v93;
        }
        // 0x406c4d
        v91 = v92 - 1;
        v92 = v91;
        v93 = v90;
        v59 = v89;
        v61 = v35;
        v62 = v90;
    }
    goto lab_0x406ef0;
  lab_0x406d58:
    // 0x406d58
    while (true) {
        // 0x406d8e
        int32_t v94; // 0x4068b0
        int32_t v95 = v94;
        int64_t v96; // 0x4068b0
        int64_t v97 = v96;
        int64_t v98 = -0x8000000000000000; // 0x406d91
        int64_t v99 = 1; // 0x406d91
        int64_t v100; // 0x4068b0
        uint64_t v101; // 0x4068b0
        if (v101 <= v97) {
            int64_t v102 = v100;
            uint64_t v103; // 0x4068b0
            int64_t v104 = v97 > 0x7fffffffffffffff / v103 ? 0x7fffffffffffffff : v97 * v103;
            int64_t v105 = v97 > 0x7fffffffffffffff / v103 ? 1 : v102;
            v98 = v104;
            v99 = v105;
        }
        int64_t v106 = v99;
        int64_t v107 = v98;
        int32_t v108 = v95 - 1; // 0x406d85
        v96 = v107;
        v94 = v108;
        v100 = v106;
        v59 = v107;
        int64_t v109; // 0x4068b0
        v61 = v109;
        v62 = v106;
        if (v108 == 0) {
            // break -> 0x406ef0
            break;
        }
    }
    goto lab_0x406ef0;
  lab_0x406dc0:;
    uint64_t v110 = v30;
    int64_t v111 = v20;
    int64_t v112 = -0x8000000000000000; // 0x406df9
    int64_t v113 = 1; // 0x406df9
    if (v39 <= v111) {
        // 0x406dd8
        v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
        v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : 0;
    }
    int32_t v114 = 6; // 0x406ded
    int32_t v115 = v114; // 0x406df0
    int64_t v116 = v113; // 0x406df0
    v59 = v112;
    v61 = v31;
    v62 = v113;
    while (v114 != 0) {
        // 0x406df6
        v111 = v112;
        v112 = -0x8000000000000000;
        v113 = 1;
        if (v39 <= v111) {
            // 0x406dd8
            v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
            v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : v116;
        }
        // 0x406ded
        v114 = v115 - 1;
        v115 = v114;
        v116 = v113;
        v59 = v112;
        v61 = v31;
        v62 = v113;
    }
    goto lab_0x406ef0;
  lab_0x406ef0:
    // 0x406ef0
    v25 = v59;
    v32 = v61;
    v24 = (v62 | v19) & 0xffffffff;
    goto lab_0x406a78;
  lab_0x406aec:
    // 0x406aec
    v25 = 0x7fffffffffffffff;
    v32 = v72;
    v24 = 1;
    if (v73 >= v74) {
        // 0x406af5
        v25 = v74 * v75;
        v32 = v72;
        v24 = v19;
    }
    goto lab_0x406a78;
}
// Address range: 0x4070e0 - 0x4076fc
int64_t function_4070e0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4070ff
    int64_t v2 = *v1; // 0x4070ff
    char * str2 = (char *)v2; // 0x40710c
    char c = *str2; // 0x40710c
    int64_t v3 = v2; // 0x407138
    int64_t v4 = 0; // 0x4070e0
    int32_t v5; // 0x4070e0
    int64_t v6; // 0x4070e0
    int64_t v7; // 0x4070e0
    int64_t v8; // 0x4070e0
    int64_t v9; // 0x4070e0
    int64_t v10; // 0x4070e0
    int64_t v11; // 0x4070e0
    int64_t v12; // 0x4070e0
    int64_t v13; // 0x4070e0
    int64_t str3; // 0x4070e0
    int64_t v14; // 0x4070e0
    int64_t v15; // 0x4070e0
    int64_t v16; // 0x4070e0
    int64_t v17; // 0x4070e0
    int32_t v18; // 0x4070e0
    int32_t v19; // 0x4070e0
    int32_t v20; // 0x4070e0
    int32_t v21; // 0x4070e0
    int32_t v22; // 0x4070e0
    int32_t v23; // 0x4070e0
    int32_t v24; // 0x4070e0
    int32_t v25; // 0x4070e0
    int32_t v26; // 0x4070e0
    int32_t v27; // 0x4070e0
    int32_t v28; // 0x4070e0
    int32_t v29; // 0x4070e0
    int64_t nmemb; // 0x4070e0
    int64_t v30; // 0x4070e0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40713c
            while (v31 != 0 == (v31 != 61)) {
                // 0x407138
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407148
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40714e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x407118
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40717c
                int64_t v34; // 0x4070e0
                int64_t v35; // 0x4070e0
                if (strncmp(str, str2, n) == 0) {
                    // 0x407185
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x407300;
                    }
                }
                int64_t v36 = a4 + 32; // 0x407196
                int64_t v37 = *(int64_t *)v36; // 0x40719a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407170
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407185
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x407300;
                        }
                    }
                    // 0x407196
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
                  lab_0x4071e6:
                    // 0x4071e6
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
                        goto lab_0x407240;
                    } else {
                        if (v11 == 0) {
                            // 0x4073b0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407240;
                        } else {
                            if (v39 == 0) {
                                // 0x407360
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40720a;
                                } else {
                                    // 0x40736c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40720a;
                                    } else {
                                        // 0x40737a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40720a;
                                        } else {
                                            goto lab_0x407240;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40720a;
                            }
                        }
                    }
                }
              lab_0x407251:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x407426
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4075d2
                            flockfile(g47);
                            int64_t v41 = *v1; // 0x4075f2
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40763f
                            int64_t v43 = (int64_t)g47;
                            int64_t v44 = v43; // 0x407659
                            int64_t v45; // 0x40765b
                            if (*(char *)v42 != 0) {
                                // 0x40765b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g47;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x407653
                            while (v17 + nmemb != v42) {
                                // 0x407655
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40765b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g47;
                                }
                                // 0x407648
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x407680
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g47);
                            v40 = *v1;
                        } else {
                            // 0x407434
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40758f
                        free((int64_t *)v17);
                    }
                    // 0x407489
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4074a0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40734e
                    return 63;
                }
                // 0x407270
                v5 = v39;
                if (v13 != 0) {
                    // 0x4072f4
                    v35 = v13;
                    v34 = v25;
                  lab_0x407300:;
                    int32_t * v49 = (int32_t *)a7; // 0x407310
                    uint32_t v50 = *v49; // 0x407310
                    int64_t v51 = v50; // 0x407310
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40731a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x407323
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40754f
                                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4074fa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40734e
                            return 63;
                        }
                        // 0x407398
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4076af
                                    __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4075ad
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4075c0
                                // 0x40734e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4074be
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4074d2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40733b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40733e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x407342
                    int64_t result = v59; // 0x407348
                    if (v58 != 0) {
                        // 0x40734a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40734e
                    return result;
                }
            } else {
                // 0x40714e
                v5 = v32;
            }
            // break -> 0x407275
            break;
        }
    }
    // 0x407275
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40728d
        if (*(char *)(v60 + 1) != 45) {
            // 0x407297
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40734e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4073d9
        __fprintf_chk(g47, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4072c6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4072d6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407240:
    // 0x407240
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407240
    int64_t v63 = *(int64_t *)v62; // 0x407244
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407251
        goto lab_0x407251;
    }
    goto lab_0x4071e6;
  lab_0x40720a:
    // 0x40720a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4070e0
    int32_t v65; // 0x4070e0
    int32_t v66; // 0x4070e0
    if (v27 != 0) {
        goto lab_0x407240;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4073c0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407240;
            } else {
                goto lab_0x407231;
            }
        } else {
            // 0x407225
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40751c
                int64_t v67 = (int64_t)mem; // 0x40751c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407240;
                } else {
                    // 0x40752f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x407231;
                }
            } else {
                goto lab_0x407231;
            }
        }
    }
  lab_0x407231:
    // 0x407231
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407240;
}
// Address range: 0x407700 - 0x407cc6
int64_t function_407700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x407721
    if (v3 < 1) {
        // 0x4078de
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40771d
    int32_t v5 = *(int32_t *)a7; // 0x407729
    uint64_t v6 = a1 & 0xffffffff; // 0x40772b
    int64_t v7 = v2; // 0x407730
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x407733
    *v8 = 0;
    int64_t v9; // 0x407700
    int64_t v10; // 0x407700
    int64_t v11; // 0x407700
    int64_t v12; // 0x407700
    int64_t str; // 0x407700
    int64_t v13; // 0x407700
    int64_t v14; // 0x407700
    int64_t v15; // 0x407700
    int64_t v16; // 0x407700
    int64_t v17; // 0x407700
    int32_t v18; // 0x407700
    char v19; // 0x407700
    if (v5 == 0) {
        // 0x407918
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40774a;
    } else {
        // 0x407743
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x407790
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x407793
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x407858;
            } else {
                int64_t v22 = v7 + 1; // 0x4077a6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4077b6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40786c;
                } else {
                    goto lab_0x4077c8;
                }
            }
        } else {
            goto lab_0x40774a;
        }
    }
  lab_0x40774a:
    // 0x40774a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x407750
    *v24 = 0;
    int64_t v25; // 0x407700
    int64_t v26; // 0x407700
    int64_t v27; // 0x407700
    switch (*(char *)&v2) {
        case 45: {
            // 0x407840
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40784d;
        }
        case 43: {
            // 0x407b50
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40784d;
        }
        default: {
            // 0x40776c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x407acf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407be8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40784d;
                } else {
                    // 0x407add
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40777a;
                }
            } else {
                goto lab_0x40777a;
            }
        }
    }
  lab_0x407858:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40785f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4077c8;
    } else {
        goto lab_0x40786c;
    }
  lab_0x40777a:
    // 0x40777a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40784d;
  lab_0x40784d:
    // 0x40784d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x407858;
  lab_0x4077c8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4077c8
    int64_t v31 = v30; // 0x4077c8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4077ca
    if ((int64_t)*v32 > v31) {
        // 0x4077cf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4077d2
    if (*v33 > v30) {
        // 0x4077d7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4077da
    int64_t v35 = v31; // 0x4077de
    int64_t v36 = v15; // 0x4077de
    int64_t v37; // 0x407700
    int64_t v38; // 0x407700
    int64_t v39; // 0x407700
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x407948
        int64_t v41 = v40; // 0x407948
        v2 = v41;
        int64_t v42; // 0x407700
        if (*v33 == v40) {
            // 0x407b30
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407b38
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x407954
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x407968
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x407971
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40797a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407991
            int64_t v47 = v45 & 0xffffffff; // 0x407995
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40799e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4079a4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4079a6;
                }
            }
            int64_t v48 = v47 + 1; // 0x407980
            int64_t v49 = v48 & 0xffffffff; // 0x407980
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407991
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40799e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4079a4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4079a6;
                    }
                }
                // 0x407980
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x407b48
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4079a6;
    } else {
        goto lab_0x4077e4;
    }
  lab_0x40786c:
    // 0x40786c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40786f
    int64_t v51 = v12; // 0x40786f
    int64_t v52 = v14; // 0x40786f
    if (*(char *)v10 == 0) {
        goto lab_0x4077c8;
    } else {
        goto lab_0x407875;
    }
  lab_0x4077e4:;
    int32_t v53 = v35; // 0x4077e4
    int64_t v54; // 0x407700
    int64_t v55; // 0x407700
    int64_t v56; // 0x407700
    int64_t v57; // 0x407700
    int64_t v58; // 0x407700
    int64_t v59; // 0x407700
    char * v60; // 0x407700
    int64_t v61; // 0x407700
    int64_t v62; // 0x4077f9
    int64_t v63; // 0x407700
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x407933
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x407936;
    } else {
        // 0x4077ec
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x407700
        int64_t v66 = v65 ? -1 : 1; // 0x407800
        int64_t v67 = (int64_t)"--"; // 0x407700
        int64_t v68 = v62; // 0x407700
        int64_t v69 = 3; // 0x407800
        unsigned char v70 = *(char *)v68; // 0x407800
        char v71 = *(char *)v67; // 0x407800
        char v72 = v71; // 0x407800
        bool v73 = false; // 0x407800
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
            // 0x4078f0
            if (*(char *)v62 == 45) {
                // 0x4079b0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4079b0
                if (c == 0) {
                    goto lab_0x4078fa;
                } else {
                    // 0x4079bd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x407a40;
                    } else {
                        if (c == 45) {
                            // 0x407c23
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x407a95;
                        } else {
                            // 0x4079ce
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x407a40;
                            } else {
                                // 0x4079d3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4079f4;
                                } else {
                                    // 0x4079da
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x407a40;
                                    } else {
                                        goto lab_0x4079f4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4078fa;
            }
        } else {
            uint32_t v75 = *v33; // 0x407810
            v2 = v75;
            int32_t v76 = *v32; // 0x407813
            int64_t v77 = v35 + 1; // 0x407816
            int32_t v78 = v77; // 0x407819
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x407b80
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407827
                    v2 = (int64_t)*v33;
                }
            }
            // 0x407835
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x407936;
        }
    }
  lab_0x407875:;
    // 0x407875
    int64_t v79; // bp-104, 0x407700
    int64_t v80 = &v79; // 0x40770a
    int64_t v81 = v50 + 1; // 0x407875
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40787c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x407881
    *v83 = v81;
    char v84 = *(char *)v2; // 0x407885
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x407889
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407891
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407896
    int32_t c2 = v84; // 0x407896
    char * found_char_pos = strchr(str2, c2); // 0x407896
    int64_t v87 = *v82; // 0x40789b
    v2 = v87;
    int64_t v88 = *v85; // 0x4078a5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4078b0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x407ba0
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x407b6d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4078de
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407896
    char v91 = *(char *)(v90 + 1); // 0x4078cb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x407885
        if (v91 != 58) {
            // 0x4078de
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x407af4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x407bf8
                *v8 = 0;
            } else {
                // 0x407bdc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x407b1e
            *v83 = 0;
            // 0x4078de
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x407afe
        if (v93 != 0) {
            // 0x407b90
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x407b1e
            *v83 = 0;
            // 0x4078de
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407b11
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x407b1e
            *v83 = 0;
            // 0x4078de
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x407c5a
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x407c0a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407c11
        // 0x407b1e
        *v83 = 0;
        // 0x4078de
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x407a69
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x407a6b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x407c90
                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x407c41
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x407c48
            // 0x4078de
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x407a76
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x407a7a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x407a95;
  lab_0x4079a6:
    // 0x4079a6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4077e4;
  lab_0x407a95:;
    int64_t v99 = function_4070e0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x407ab3
    // 0x4078de
    return v99 & 0xffffffff;
  lab_0x407936:;
    int32_t v100 = v55; // 0x407936
    if (v100 != (int32_t)v59) {
        // 0x40793a
        *(int32_t *)a7 = v100;
    }
    // 0x4078de
    return 0xffffffff;
  lab_0x4078fa:
    // 0x4078fa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407901
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4078de
    return v99 & 0xffffffff;
  lab_0x407a40:
    // 0x407a40
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x407875;
  lab_0x4079f4:
    // 0x4079f4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4070e0(v6, a2, str, a4, a5, v57, v1, v11, &g14); // 0x407a1a
    if ((int32_t)v101 != -1) {
        // 0x4078de
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x407a2f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x407a40;
}
// Address range: 0x407cd0 - 0x407d26
int64_t function_407cd0(int64_t a1) {
    // 0x407cd0
    *(int32_t *)&g58 = g43;
    *(int32_t *)&g59 = g42;
    int64_t v1; // 0x407cd0
    int64_t result = function_407700(v1, v1, v1, v1, v1, v1, &g58, a1 & 0xffffffff); // 0x407cf6
    g43 = *(int32_t *)&g58;
    g63 = g61;
    *(int32_t *)&g41 = g60;
    return result;
}
// Address range: 0x407d30 - 0x407d48
int64_t function_407d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407d30
    return function_407cd0(1);
}
// Address range: 0x407d50 - 0x407d63
int64_t function_407d50(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x407d50
    return function_407cd0(0);
}
// Address range: 0x407d70 - 0x407d85
int64_t function_407d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407d70
    return function_407700(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x407d90 - 0x407da6
int64_t function_407d90(void) {
    // 0x407d90
    return function_407cd0(0);
}
// Address range: 0x407db0 - 0x407dc8
int64_t function_407db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407db0
    return function_407700(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407dd0 - 0x407e4a
int64_t function_407dd0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x407ddb
    int64_t v2 = (int64_t)&g24; // 0x407ddb
    int32_t * pwc; // 0x407dd0
    int64_t v3; // 0x407dd0
    int64_t n; // 0x407dd0
    if (a2 == 0) {
        goto lab_0x407e22;
    } else {
        // 0x407ddd
        if (a3 == 0) {
            // 0x407e08
            return -2;
        }
        // 0x407de9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407e22;
        } else {
            goto lab_0x407df4;
        }
    }
  lab_0x407e22:
    // 0x407e22
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407dd0
    pwc = (int32_t *)&v4;
    goto lab_0x407df4;
  lab_0x407df4:;
    char * wstr = (char *)v3; // 0x407dfa
    int64_t ps; // 0x407dd0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x407dfa
    int64_t result = v5; // 0x407dfa
    if (v5 < 0xfffffffe) {
        // 0x407e08
        return result;
    }
    int64_t result2 = result; // 0x407e39
    if ((char)function_415d00(0, v3) == 0) {
        // 0x407e3b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407e08
    return result2;
}
// Address range: 0x407e50 - 0x407f54
int64_t function_407e50(int64_t result, int32_t a2, int64_t a3) {
    // 0x407e50
    if (a3 == 0) {
        // 0x407e89
        return 0;
    }
    int64_t v1 = result; // 0x407e5c
    int64_t v2 = a3; // 0x407e5c
    int64_t result2; // 0x407e50
    if (result % 8 != 0) {
        char v3 = a2; // 0x407e5e
        int64_t v4 = result; // 0x407e61
        if ((char)result == v3) {
            // 0x407e89
            return result;
        }
        int64_t v5 = a3; // 0x407e61
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x407e70
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x407e90;
            }
            // 0x407e76
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x407e89
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x407e89
        return result2;
    }
  lab_0x407e90:;
    int64_t result3 = v1; // 0x407ebd
    int64_t v6 = v2; // 0x407ebd
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x407e9f
        int64_t v9 = 0x10000 * v8 | v8; // 0x407eac
        int64_t v10 = 0x100000000 * v9 | v9; // 0x407eb6
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x407ed6
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x407f05
            int64_t v13 = v1 + 8; // 0x407f09
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x407ef3
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x407f1c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x407f13
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x407e89
                return 0;
            }
        }
    }
  lab_0x407f1c:;
    char v15 = a2; // 0x407f1c
    if (*(char *)result3 == v15) {
        // 0x407e89
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x407f30
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x407e89
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x407e89
    return result2;
}
// Address range: 0x407f60 - 0x407fa3
int64_t function_407f60(int64_t a1, int64_t a2, int64_t a3) {
    bool v1 = a1 == 0 | a2 == 0;
    if (v1) {
        // 0x407f7a
        return 0;
    }
    // 0x407f70
    int64_t v2; // 0x407f60
    int64_t result = v2 & -256 | (int64_t)v1; // 0x407f6c
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x407f70
    if (v3 != *(int64_t *)(a2 + 8)) {
        // 0x407f7a
        return result;
    }
    int64_t v4 = v3; // 0x407f92
    v4--;
    int64_t result2 = 1; // 0x407f96
    while (v4 >= 0) {
        int64_t v5 = 8 * v4; // 0x407f88
        int64_t v6 = *(int64_t *)(*(int64_t *)(a1 + 16) + v5); // 0x407f8c
        result2 = result;
        if (v6 != *(int64_t *)(*(int64_t *)(a2 + 16) + v5)) {
            // break -> 0x407f7a
            break;
        }
        v4--;
        result2 = 1;
    }
    // 0x407f7a
    return result2;
}
// Address range: 0x407fb0 - 0x40801b
int64_t function_407fb0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a1; // 0x407fbd
    int64_t result; // 0x407fb0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = *(int64_t *)(v2 + 8); // 0x407fc3
        v1 = v3;
        if (v3 == 0) {
            int64_t v4 = *(int64_t *)(v2 + 16); // 0x407fcc
            v1 = v4;
            if (v4 == 0) {
                // 0x407fd5
                result = v4;
                if ((int32_t)v4 != 0) {
                    // break -> 0x408016
                    break;
                }
                int64_t v5 = *(int64_t *)v2; // 0x407fe8
                result = v4;
                if (v5 == 0) {
                    // break -> 0x408016
                    break;
                }
                int64_t v6 = v2;
                int64_t v7 = v5;
                int64_t v8 = *(int64_t *)(v7 + 16); // 0x407ff0
                v1 = v8;
                while (v8 == 0 || v8 == v6) {
                    // 0x408009
                    result = v8;
                    if ((int32_t)v8 != 0) {
                        return result;
                    }
                    int64_t v9 = *(int64_t *)v7; // 0x407fe8
                    result = v8;
                    if (v9 == 0) {
                        return result;
                    }
                    v6 = v7;
                    v7 = v9;
                    v8 = *(int64_t *)(v7 + 16);
                    v1 = v8;
                }
            }
        }
    }
  lab_0x408016_2:
    // 0x408016
    return result;
}
// Address range: 0x408020 - 0x40814f
int64_t function_408020(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x408020
    uint64_t v3 = *v2; // 0x408020
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x4080b0
        *(char *)(v1 + 8) = 2;
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40802e
    char v5 = *(char *)(v4 + v3); // 0x408039
    *(char *)a1 = v5;
    if (*(int32_t *)(a2 + 144) >= 2) {
        // 0x408042
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x408048
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                // 0x408087
                *(char *)(v1 + 8) = 1;
                return 1;
            }
        }
    }
    switch (v5) {
        case 92: {
            if (a3 % 2 == 0) {
                // 0x408087
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            int64_t v6 = v3 + 1;
            if (v6 >= *(int64_t *)(a2 + 88)) {
                // 0x408087
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            // 0x408100
            *v2 = v6;
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = *(char *)(v4 + v6);
            return 1;
        }
        case 91: {
            uint64_t v7 = v3 + 1;
            if (v7 >= *(int64_t *)(a2 + 88)) {
                // 0x4080de
                *(char *)(v1 + 8) = 1;
                *(char *)a1 = 91;
                return 1;
            }
            char v8 = *(char *)(v4 + v7); // 0x4080ca
            *(char *)a1 = v8;
            switch (v8) {
                case 58: {
                    if ((a3 & 4) != 0) {
                        // 0x408145
                        *(char *)(v1 + 8) = 30;
                        return 2;
                    }
                    // 0x4080de
                    *(char *)(v1 + 8) = 1;
                    *(char *)a1 = 91;
                    return 1;
                }
                case 61: {
                    // 0x408130
                    *(char *)(v1 + 8) = 28;
                    return 2;
                }
                case 46: {
                    // 0x408120
                    *(char *)(v1 + 8) = 26;
                    return 2;
                }
            }
            // 0x4080de
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = 91;
            return 1;
        }
        case 93: {
            // 0x4080f0
            *(char *)(v1 + 8) = 21;
            return 1;
        }
    }
    if (v5 == 94) {
        // 0x40806b
        *(char *)(v1 + 8) = 25;
        return 1;
    }
    if (v5 == 45) {
        // 0x40809d
        *(char *)(v1 + 8) = 22;
        return 1;
    }
    // 0x408087
    *(char *)(v1 + 8) = 1;
    return 1;
}
// Address range: 0x408150 - 0x40816d
int64_t function_408150(int64_t a1, int64_t a2) {
    // 0x408150
    if (*(char *)(a2 + 48) != 17 || *(int64_t *)(a2 + 40) != a1) {
        // 0x408156
        return 0;
    }
    char * v1 = (char *)(a2 + 50); // 0x408166
    *v1 = *v1 | 8;
    return 0;
}
// Address range: 0x408170 - 0x40837f
int64_t function_408170(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x408185
    uint64_t v2 = 0x100000000 * a2 >> 32; // 0x408195
    int64_t v3 = *(int64_t *)(v1 + 48) + 24 * a4; // 0x40819d
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x4081a1
    int64_t v5 = *v4; // 0x4081a1
    if (v5 < 1) {
        // 0x40834d
        return (int32_t)v2 >> 1;
    }
    int64_t v6 = 1 << a3 % 64;
    int32_t v7 = v2;
    int64_t v8 = v5; // 0x4081ee
    int64_t v9 = 0; // 0x4081ee
    int64_t v10; // 0x4081f9
    int64_t v11; // 0x408170
    int64_t v12; // 0x408170
    int64_t v13; // 0x408170
    int64_t v14; // 0x408170
    while (true) {
      lab_0x408203_2:
        // 0x408203
        v13 = v9;
        v10 = v8;
        int64_t v15 = *(int64_t *)(*(int64_t *)(v3 + 16) + 8 * v13); // 0x408207
        int64_t v16 = 16 * v15 + *(int64_t *)v1; // 0x408212
        char v17 = *(char *)(v16 + 8); // 0x408215
        if (v17 == 8) {
            if (v7 % 2 != 0) {
                // 0x408250
                if (*(int64_t *)v16 == a3) {
                    // 0x408230
                    return 0xffffffff;
                }
            }
            goto lab_0x4081f5;
        } else {
            if (v17 != 9) {
                if (a5 == -1 || v17 != 4) {
                    goto lab_0x4081f5;
                } else {
                    // 0x40827a
                    v14 = 24 * v15 + 16;
                    v11 = *(int64_t *)(a1 + 216) + 40 * a5;
                    while (true) {
                      lab_0x4082b0:
                        // 0x4082b0
                        v12 = v11;
                        if (*(int64_t *)v12 != v15) {
                            goto lab_0x408320;
                        } else {
                            if (a3 > 63) {
                                goto lab_0x4082c9;
                            } else {
                                // 0x4082bc
                                if ((v6 & (int64_t)*(int16_t *)(v12 + 34)) == 0) {
                                    goto lab_0x408320;
                                } else {
                                    goto lab_0x4082c9;
                                }
                            }
                        }
                    }
                  lab_0x40832c:;
                    int64_t v18 = v13 + 1; // 0x40833f
                    uint64_t v19 = *v4; // 0x408343
                    v8 = v19;
                    v9 = v18;
                    if (v19 <= v18) {
                        // break -> 0x40834d
                        break;
                    }
                    goto lab_0x408203_2;
                }
            } else {
                if ((v7 & 2) != 0) {
                    // 0x40822b
                    if (*(int64_t *)v16 == a3) {
                        // 0x408230
                        return 0;
                    }
                }
                goto lab_0x4081f5;
            }
        }
    }
  lab_0x40834d:
    // 0x40834d
    return v7 >> 1;
  lab_0x408320:
    // 0x408320
    v11 = v12 + 40;
    if (*(char *)(v12 + 32) == 0) {
        // break -> 0x40832c
        goto lab_0x40832c;
    }
    goto lab_0x4082b0;
  lab_0x4082c9:;
    int64_t v20 = *(int64_t *)*(int64_t *)(v14 + *(int64_t *)(v1 + 40)); // 0x4082d2
    if (v20 == a4) {
        // 0x408368
        return -((v2 % 2)) & 0xffffffff;
    }
    int32_t v21 = function_408170(a1, v2 & 0xffffffff, a3, v20, a5); // 0x4082f3
    if (v21 == -1) {
        // 0x408230
        return 0xffffffff;
    }
    // 0x4082fc
    if ((v7 & 2) != 0 == v21 == 0) {
        // 0x408230
        return 0;
    }
    if (a3 <= 63) {
        int16_t * v22 = (int16_t *)(v12 + 34); // 0x408317
        *v22 = *v22 & -1 - (int16_t)v6;
    }
    goto lab_0x408320;
  lab_0x4081f5:;
    int64_t v23 = v13 + 1; // 0x4081f5
    v8 = v10;
    v9 = v23;
    if (v10 <= v23) {
        // break -> 0x40834d
        goto lab_0x40834d;
    }
    goto lab_0x408203;
  lab_0x408203:
    // 0x408203
    goto lab_0x408203_2;
}
// Address range: 0x408380 - 0x4083e6
int64_t function_408380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a1 + 216) + 40 * a2; // 0x40838b
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x40838f
    if (v2 > a5) {
        // 0x4083b6
        return 0xffffffff;
    }
    int64_t v3 = *(int64_t *)(v1 + 24); // 0x408398
    if (v3 < a5) {
        // 0x4083b6
        return 1;
    }
    if (v3 == a5) {
        // 0x4083c3
        return function_408170(a1, (int64_t)(v2 == a5) | 2, a3, a4, a6);
    }
    // 0x4083af
    if (v2 == a5) {
        // 0x4083c3
        return function_408170(a1, 1, a3, a4, a6);
    }
    // 0x4083b6
    return 0;
}
// Address range: 0x4083f0 - 0x40848c
int64_t function_4083f0(int64_t a1, uint64_t a2) {
    // 0x4083f0
    if (*(int32_t *)(a1 + 144) >= 2) {
        if (a2 >= 0x2000000000000000) {
            // 0x408480
            return 12;
        }
        int64_t * v1 = (int64_t *)(a1 + 16); // 0x408414
        int32_t v2 = a2;
        int64_t * mem = realloc((int64_t *)*v1, 4 * v2); // 0x408420
        if (mem == NULL) {
            // 0x408480
            return 12;
        }
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x40842a
        int64_t v4 = *v3; // 0x40842a
        *v1 = (int64_t)mem;
        if (v4 != 0) {
            int64_t * mem2 = realloc((int64_t *)v4, 8 * v2); // 0x40843f
            if (mem2 == NULL) {
                // 0x408480
                return 12;
            }
            // 0x408449
            *v3 = (int64_t)mem2;
        }
    }
    // 0x40844d
    if (*(char *)(a1 + 139) == 0) {
        // 0x408456
        *(int64_t *)(a1 + 64) = a2;
        return 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x408468
    int64_t * mem3 = realloc((int64_t *)*v5, (int32_t)a2); // 0x40846f
    if (mem3 == NULL) {
        // 0x408480
        return 12;
    }
    // 0x408479
    *v5 = (int64_t)mem3;
    // 0x408456
    *(int64_t *)(a1 + 64) = a2;
    return 0;
}
// Address range: 0x408490 - 0x4084f4
int64_t function_408490(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40849c
    int64_t v2 = *v1; // 0x40849c
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4084a0
    int64_t v4 = *v3; // 0x4084a0
    int64_t v5 = v4; // 0x4084a7
    int64_t v6 = v2; // 0x4084a7
    if (v2 == a1) {
        int64_t v7 = a1 + 1; // 0x4084c8
        *(int64_t *)a1 = 2 * v7;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)v7); // 0x4084da
        if (mem == NULL) {
            // 0x4084ba
            return 0;
        }
        // 0x4084e4
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    // 0x4084a9
    *v1 = v6 + 1;
    *(int64_t *)(8 * v6 + v5) = a2;
    // 0x4084ba
    return 1;
}
// Address range: 0x408500 - 0x40862c
int64_t function_408500(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x408538
        abort();
        // UNREACHABLE
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x408514
    int64_t v2 = *v1; // 0x408514
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x408518
    int64_t v4 = *v3; // 0x408518
    if (v2 == 0) {
        // 0x408521
        *(int64_t *)v4 = a2;
        *v1 = *v1 + 1;
        // 0x40852e
        return 1;
    }
    int64_t v5 = v4; // 0x408573
    int64_t v6 = v2; // 0x408573
    if (v2 == a1) {
        // 0x408600
        *(int64_t *)a1 = 2 * a1;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)a1); // 0x40860e
        if (mem == NULL) {
            // 0x40852e
            return 0;
        }
        // 0x408618
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    int64_t v7 = 8 * v6; // 0x408579
    int64_t v8; // 0x408500
    if (*(int64_t *)v5 > a2) {
        // 0x408586
        v8 = v7;
        if (v6 >= 1) {
            int64_t v9 = v7 + v5;
            int64_t v10 = v9 - 8; // 0x408590
            *(int64_t *)v9 = *(int64_t *)v10;
            v8 = 0;
            while (v10 != v5) {
                // 0x408590
                v9 = v10;
                v10 = v9 - 8;
                *(int64_t *)v9 = *(int64_t *)v10;
                v8 = 0;
            }
        }
    } else {
        int64_t v11 = v5 - 8; // 0x4085c0
        int64_t v12 = *(int64_t *)(v7 + v11); // 0x4085c0
        v8 = v7;
        if (v12 > a2) {
            *(int64_t *)(v7 + v5) = v12;
            int64_t v13 = v7 - 8; // 0x4085d4
            uint64_t v14 = *(int64_t *)(v13 + v11); // 0x4085d8
            v8 = v13;
            int64_t v15 = v13; // 0x4085e0
            while (v14 > a2) {
                // 0x4085d0
                *(int64_t *)(v15 + v5) = v14;
                v13 = v15 - 8;
                v14 = *(int64_t *)(v13 + v11);
                v8 = v13;
                v15 = v13;
            }
        }
    }
    // 0x4085a3
    *(int64_t *)(v8 + v5) = a2;
    *v1 = *v1 + 1;
    // 0x40852e
    return 1;
}
// Address range: 0x408630 - 0x40872b
int64_t function_408630(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 32; // 0x40863e
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x40864b
    int64_t v3 = *v2; // 0x40864b
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)v1 = v3;
    int64_t size = 8 * v3; // 0x40865e
    int64_t * mem = malloc((int32_t)size); // 0x408666
    *(int64_t *)(a2 + 48) = (int64_t)mem;
    if (mem == NULL) {
        // 0x4086ae
        return 12;
    }
    if (v3 >= 0 == (v3 != 0)) {
        int64_t v4 = 0; // 0x408680
        int64_t v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4); // 0x40868e
        int64_t v6 = size; // 0x4086a0
        int64_t v7; // 0x4086a5
        if ((*(char *)(size + 8 + 16 * v5) & 8) == 0) {
            // 0x4086a2
            v7 = function_408490(v1, v5);
            v6 = v1;
            if ((char)v7 == 0) {
                // 0x4086ae
                return 12;
            }
        }
        // 0x408680
        v4++;
        int64_t v8 = v6; // 0x408688
        while (*v2 > v4) {
            // 0x40868a
            v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4);
            v6 = v8;
            if ((*(char *)(v8 + 8 + 16 * v5) & 8) == 0) {
                // 0x4086a2
                v7 = function_408490(v1, v5);
                v6 = v1;
                if ((char)v7 == 0) {
                    // 0x4086ae
                    return 12;
                }
            }
            // 0x408680
            v4++;
            v8 = v6;
        }
    }
    int64_t v9 = 24 * (*(int64_t *)(a1 + 136) & a3) + *(int64_t *)(a1 + 64); // 0x4086d8
    int64_t * v10 = (int64_t *)v9; // 0x4086dc
    uint64_t v11 = *v10; // 0x4086dc
    int64_t * v12 = (int64_t *)(v9 + 16); // 0x4086df
    int64_t v13 = *v12; // 0x4086df
    int64_t v14 = v11 + 1; // 0x4086e3
    int64_t * v15 = (int64_t *)(v9 + 8); // 0x4086e7
    int64_t v16 = v13; // 0x4086eb
    int64_t v17 = v11; // 0x4086eb
    int64_t v18 = v14; // 0x4086eb
    if (*v15 <= v11) {
        int64_t * mem2 = realloc((int64_t *)v13, 16 * (int32_t)v14); // 0x408710
        if (mem2 == NULL) {
            // 0x4086ae
            return 12;
        }
        // 0x40871a
        v16 = (int64_t)mem2;
        v17 = *v10;
        *v12 = v16;
        *v15 = 2 * v14;
        v18 = v17 + 1;
    }
    // 0x4086ed
    *v10 = v18;
    *(int64_t *)(8 * v17 + v16) = a2;
    return 0;
}
// Address range: 0x408730 - 0x408756
int64_t function_408730(uint64_t a1, int64_t a2) {
    uint64_t wc = a1 % 256; // 0x408735
    int32_t v1 = btowc((int32_t)wc); // 0x40873f
    int64_t v2 = v1; // 0x40873f
    int64_t result = v2; // 0x408747
    if (v1 == -1) {
        // 0x408749
        result = (a2 == 0 ? wc : v2) & 0xffffffff;
    }
    // 0x40874f
    return result;
}
// Address range: 0x408760 - 0x4087e0
int64_t function_408760(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x408762
    int64_t v2 = *(int64_t *)(a1 + 64); // 0x408767
    int64_t v3 = v2 - v1; // 0x408767
    uint64_t v4 = v3 == 0 | v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0 ? v2 : v1; // 0x40876f
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x408774
    uint64_t v6 = *v5; // 0x408774
    if (v4 <= v6) {
        // 0x4087d0
        *(int64_t *)(a1 + 56) = v6;
        int64_t result; // 0x408760
        return result;
    }
    int32_t ** v7 = __ctype_toupper_loc(); // 0x40877d
    int64_t v8 = v6; // 0x408782
    int64_t v9 = *(int64_t *)(a1 + 120); // 0x40878c
    int64_t v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40)); // 0x408797
    int64_t v11 = v10; // 0x40879d
    if (v9 != 0) {
        // 0x4087c8
        v11 = (int64_t)*(char *)(v9 + v10);
    }
    int32_t v12 = *(int32_t *)(4 * v11 + (int64_t)*v7); // 0x4087a6
    *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
    v8++;
    while (v4 != v8) {
        // 0x408788
        v9 = *(int64_t *)(a1 + 120);
        v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40));
        v11 = v10;
        if (v9 != 0) {
            // 0x4087c8
            v11 = (int64_t)*(char *)(v9 + v10);
        }
        // 0x40879f
        v12 = *(int32_t *)(4 * v11 + (int64_t)*v7);
        *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
        v8++;
    }
    // 0x4087b5
    *v5 = v4;
    *(int64_t *)(a1 + 56) = v4;
    return (int64_t)v7;
}
// Address range: 0x4087e0 - 0x408986
int64_t function_4087e0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x4087ef
    int64_t v2 = *v1; // 0x4087ef
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x4087f3
    int64_t v4 = *v3; // 0x4087f3
    int64_t * v5 = (int64_t *)(a1 + 64); // 0x4087f7
    int64_t v6 = *v5; // 0x4087f7
    int64_t v7 = v6 - v2; // 0x4087f7
    uint64_t v8 = v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0 ? v6 : v2; // 0x4087fb
    int64_t result; // 0x4087e0
    if (v8 <= v4) {
        // 0x408898
        *v3 = v4;
        *(int64_t *)(a1 + 56) = v4;
        return result;
    }
    int64_t * v9 = (int64_t *)(a1 + 120); // 0x408810
    int64_t * v10 = (int64_t *)(a1 + 32);
    int64_t * v11 = (int64_t *)(a1 + 40);
    int32_t * v12 = (int32_t *)(a1 + 144);
    int64_t v13; // bp-104, 0x4087e0
    int64_t v14 = &v13;
    int64_t v15 = v4; // 0x4087e0
    int64_t v16; // 0x4087e0
    int64_t v17; // 0x4087e0
    int64_t v18; // 0x4087e0
    int32_t v19; // bp-108, 0x4087e0
    int64_t v20; // 0x408817
    int64_t result2; // 0x408958
    while (true) {
      lab_0x408810:
        // 0x408810
        v17 = v15;
        int64_t v21 = *v9; // 0x408810
        v20 = *v10;
        int64_t v22 = v8 - v17; // 0x40881b
        int64_t v23; // 0x4087e0
        if (v21 != 0) {
            // 0x4088f0
            v23 = v14;
            if (*v12 >= 1) {
                // 0x4088fe
                v23 = v14;
                int64_t v24 = 0; // 0x408908
                int64_t v25 = v21; // 0x408908
                if (v22 >= 0 == (v22 != 0)) {
                    int64_t v26 = v24 + v17;
                    unsigned char v27 = *(char *)(v26 + v25 + *v11); // 0x40892e
                    char v28 = *(char *)(v25 + (int64_t)v27); // 0x408931
                    *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                    *(char *)(v24 + v14) = v28;
                    int64_t v29 = v24 + 1; // 0x408942
                    v23 = v14;
                    while (!((v22 == v29 | (v29 & 0xffffffff) >= (int64_t)*v12))) {
                        // 0x40891d
                        v25 = *v9;
                        v26 = v29 + v17;
                        v27 = *(char *)(v26 + v25 + *v11);
                        v28 = *(char *)(v25 + (int64_t)v27);
                        *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                        *(char *)(v29 + v14) = v28;
                        v29++;
                        v23 = v14;
                    }
                }
            }
        } else {
            // 0x408827
            v23 = v21 + v17 + *v11;
        }
        int64_t v30 = function_407dd0(&v19, v23, v22); // 0x408839
        if (v30 < 0xffffffffffffffff) {
            // 0x408848
            v16 = v30;
            v18 = v19;
            if (v30 == -2) {
                // 0x408958
                result2 = *v1;
                if (*v5 < result2) {
                    // break -> 0x408966
                    break;
                }
                goto lab_0x4088b0;
            } else {
                goto lab_0x408856;
            }
        } else {
            goto lab_0x4088b0;
        }
    }
    // 0x408966
    *v10 = v20;
    // 0x408898
    *v3 = v17;
    *(int64_t *)(a1 + 56) = v17;
    return result2;
  lab_0x4088b0:;
    int64_t v31 = *v9; // 0x4088b3
    unsigned char v32 = *(char *)(v17 + (int64_t)&v19 + *v11); // 0x4088be
    int64_t v33 = v32; // 0x4088be
    v19 = v32;
    int64_t v34 = v33; // 0x4088c8
    if (v31 != 0) {
        unsigned char v35 = *(char *)(v31 + v33); // 0x40896f
        v19 = v35;
        v34 = v35;
    }
    // 0x4088ce
    *v10 = v20;
    v16 = 1;
    v18 = v34;
    goto lab_0x408856;
  lab_0x408856:;
    int64_t v36 = v16;
    int64_t v37 = *(int64_t *)(a1 + 16); // 0x408856
    int64_t v38 = v17 + 1; // 0x40885a
    int64_t v39 = v37 + 4 * v17;
    *(int32_t *)v39 = (int32_t)v18;
    int64_t v40 = v36 + v17; // 0x408869
    int64_t v41; // 0x4087e0
    if (v38 < v40) {
        int64_t v42 = v39 + 4; // 0x40887a
        *(int32_t *)v42 = -1;
        v42 += 4;
        while (v37 + 4 * v40 != v42) {
            // 0x408880
            *(int32_t *)v42 = -1;
            v42 += 4;
        }
        // 0x40888f
        v15 = v40;
        result = v36;
        v41 = v40;
        if (v40 >= v8) {
            // 0x408898
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    } else {
        // 0x4088e0
        v15 = v38;
        result = v36;
        v41 = v38;
        if (v38 >= v8) {
            // 0x408898
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    }
    // 0x408810
    goto lab_0x408810;
}
// Address range: 0x408990 - 0x408f8d
int64_t function_408990(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x4089a1
    int64_t v2 = *v1; // 0x4089a1
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x4089a5
    int64_t v4 = *v3; // 0x4089a5
    int64_t v5 = v4 - v2; // 0x4089a5
    int64_t v6 = v5 == 0 | v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0 ? v4 : v2; // 0x4089a9
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x4089b5
    int64_t v8 = *v7; // 0x4089b5
    int64_t * v9; // 0x408990
    int64_t * v10; // 0x408990
    int64_t v11; // 0x408990
    int64_t v12; // 0x408990
    int64_t v13; // 0x408990
    int64_t v14; // 0x408990
    int64_t v15; // 0x408990
    int64_t v16; // 0x408990
    int64_t v17; // 0x408990
    int64_t v18; // 0x408990
    int64_t v19; // 0x408990
    int64_t v20; // 0x408990
    int64_t wstr; // bp-120, 0x408990
    struct _TYPEDEF___mbstate_t * v21; // bp-132, 0x408990
    int32_t * v22; // 0x408990
    int64_t v23; // 0x408990
    int64_t * v24; // 0x408b50
    int64_t * v25; // 0x408990
    int64_t * v26; // 0x408990
    int64_t * v27; // 0x408990
    int64_t v28; // 0x408b5a
    int64_t v29; // 0x408b87
    if (*(char *)(a1 + 138) != 0) {
        goto lab_0x4089c6;
    } else {
        int64_t * v30 = (int64_t *)(a1 + 120);
        if (*v30 == 0) {
            // 0x408b30
            if (*(char *)(a1 + 140) != 0) {
                goto lab_0x4089c6;
            } else {
                // 0x408b3d
                v16 = v8;
                if (v8 < v6) {
                    while (true) {
                      lab_0x408b50:
                        // 0x408b50
                        v14 = v13;
                        v28 = v14 + v19 + *v24;
                        unsigned char v31 = *(char *)v28; // 0x408b5d
                        if (v31 <= -1) {
                            goto lab_0x408b79;
                        } else {
                            // 0x408b68
                            struct _TYPEDEF___mbstate_t * ps; // 0x408b4a
                            if (mbsinit(ps) != 0) {
                                int32_t v32 = *(int32_t *)(4 * (int64_t)v31 + (int64_t)*__ctype_toupper_loc()); // 0x408c84
                                *(char *)(*v25 + v14) = (char)v32;
                                unsigned char v33 = *(char *)(*v25 + v14); // 0x408c94
                                *(int32_t *)(*v26 + 4 * v14) = (int32_t)v33;
                                int64_t v34; // 0x408990
                                v20 = v34;
                                v15 = v14 + 1;
                                goto lab_0x408c3a;
                            } else {
                                goto lab_0x408b79;
                            }
                        }
                    }
                  lab_0x408d70:
                    // 0x408d70
                    v10 = v30;
                    v9 = v27;
                    v22 = (int32_t *)&v21;
                    v23 = v29;
                    v17 = v6;
                    v18 = &wstr;
                    v11 = v14;
                    v12 = v14;
                    goto lab_0x4089f0;
                } else {
                    goto lab_0x408c43;
                }
            }
        } else {
            goto lab_0x4089c6;
        }
    }
  lab_0x408c43:
    // 0x408c43
    *v7 = v16;
    *(int64_t *)(a1 + 56) = v16;
    // 0x408b1a
    return 0;
  lab_0x4089ca:;
    // 0x4089ca
    int64_t v35; // 0x408990
    int64_t v36 = v35;
    int64_t v37; // 0x408990
    int64_t v38 = v37;
    int64_t v39; // 0x408990
    int64_t v40 = v39;
    int64_t v41 = v38; // 0x4089cd
    int64_t v42 = v36; // 0x4089cd
    int64_t v43; // 0x408990
    if (v40 > v36) {
        // 0x4089d3
        v10 = (int64_t *)(a1 + 120);
        v9 = (int64_t *)(a1 + 32);
        v22 = (int32_t *)&v21;
        v23 = v40 - v36;
        v17 = v40;
        v18 = v43;
        v11 = v38;
        v12 = v36;
        goto lab_0x4089f0;
    } else {
        goto lab_0x408b10;
    }
  lab_0x408b79:
    // 0x408b79
    v29 = v6 - v14;
    int32_t ps2 = (int32_t)*v27; // bp-128, 0x408b8a
    uint64_t v44 = function_407dd0((int32_t *)&v21, v28, v29); // 0x408ba1
    if (v44 < 0xfffffffffffffffe) {
        int32_t wc = (int64_t)v21; // 0x408bb7
        int32_t wc2 = towupper(wc); // 0x408bbd
        int64_t v45; // 0x408bf7
        if (wc2 == wc) {
            int64_t v46 = *v25; // 0x408c58
            int64_t v47 = *v24; // 0x408c5c
            int64_t v48 = v46 + v14; // 0x408c66
            memcpy((int64_t *)v48, (int64_t *)(v47 + v14 + v48), (int32_t)v44);
        } else {
            int32_t v49 = wcrtomb((char *)&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x408bdd
            if (v44 != (int64_t)v49) {
                // break -> 0x408d70
                goto lab_0x408d70;
            }
            // 0x408beb
            v45 = *v25 + v14;
            memcpy((int64_t *)v45, &wstr, (int32_t)v44);
        }
        int64_t v50 = v45;
        int64_t v51 = *v26; // 0x408bff
        int64_t v52 = v14 + 1; // 0x408c0b
        int64_t v53 = v51 + 4 * v14;
        *(int32_t *)v53 = wc2;
        int64_t v54 = v44 + v14; // 0x408c13
        v20 = v50;
        v15 = v52;
        if (v52 < v54) {
            int64_t v55 = v53 + 4; // 0x408c24
            *(int32_t *)v55 = -1;
            v55 += 4;
            v20 = v50;
            v15 = v54;
            while (v51 + 4 * v54 != v55) {
                // 0x408c28
                *(int32_t *)v55 = -1;
                v55 += 4;
                v20 = v50;
                v15 = v54;
            }
        }
    } else {
        int64_t v56; // 0x408990
        if (v44 != -2) {
            unsigned char v57 = *(char *)(v14 + v56 + *v24); // 0x408cef
            *(char *)(*v25 + v14) = v57;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v57;
            *v27 = (int64_t)ps2;
            v20 = v56;
            v15 = v14 + 1;
        } else {
            // 0x408cae
            if (*v3 < *v1) {
                // 0x408f27
                *v27 = (int64_t)ps2;
                v16 = v14;
                goto lab_0x408c43;
            }
            unsigned char v58 = *(char *)(v14 + v56 + *v24); // 0x408cca
            *(char *)(*v25 + v14) = v58;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v58;
            v20 = v56;
            v15 = v14 + 1;
        }
    }
    goto lab_0x408c3a;
  lab_0x408c3a:
    // 0x408c3a
    v19 = v20;
    v13 = v15;
    v16 = v15;
    if (v6 <= v15) {
        goto lab_0x408c43;
    }
    goto lab_0x408b50;
  lab_0x4089c6:
    // 0x4089c6
    v39 = v6;
    v43 = a1;
    v37 = *(int64_t *)(a1 + 56);
    v35 = v8;
    goto lab_0x4089ca;
  lab_0x408b10:
    // 0x408b10
    *v7 = v42;
    *(int64_t *)(a1 + 56) = v41;
    // 0x408b1a
    return 0;
  lab_0x4089f0:;
    int64_t v59 = v12;
    int64_t v60 = v11;
    int64_t v61 = v17;
    int64_t v62 = v23;
    int64_t * v63 = v9;
    int64_t * v64 = v10;
    int64_t v65 = *v64; // 0x4089f4
    ps2 = (int32_t)*v63;
    int64_t v66; // 0x408990
    if (v65 != 0) {
        int32_t v67 = *(int32_t *)(a1 + 144); // 0x408d0f
        if (v62 < 1 || v67 < 1) {
            // 0x408d0f
            v66 = &wstr;
        } else {
            int64_t v68 = &wstr;
            int64_t v69 = 2 * (*(int64_t *)(a1 + 40) + v60); // 0x408d3c
            int64_t v70 = 0;
            char v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69)); // 0x408d50
            *(char *)(v70 + v68) = v71;
            v66 = v68;
            while (v70 != (int64_t)(v67 - 1)) {
                int64_t v72 = v70 + 1; // 0x408d41
                v66 = v68;
                if (v62 == v72) {
                    // break -> 0x408a15
                    break;
                }
                v70 = v72;
                v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69));
                *(char *)(v70 + v68) = v71;
                v66 = v68;
            }
        }
    } else {
        // 0x408a06
        v66 = v60 + v18 + *(int64_t *)(a1 + 40);
    }
    int64_t v73 = v66;
    uint64_t v74 = function_407dd0(v22, v73, v62); // 0x408a28
    int64_t v75; // 0x408990
    int32_t wc4; // 0x408a43
    if (v74 < 0xfffffffffffffffe) {
        int32_t wc3 = (int64_t)v21; // 0x408a3e
        wc4 = towupper(wc3);
        if (wc4 == wc3) {
            goto lab_0x408d78;
        } else {
            int32_t v76 = wcrtomb((char *)&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x408a71
            int64_t v77 = v76; // 0x408a71
            if (v74 != v77) {
                if (v76 == -1) {
                    goto lab_0x408d78;
                } else {
                    int64_t v78 = v59 + v77; // 0x408e4b
                    uint64_t v79 = *v3; // 0x408e56
                    if (v78 > v79) {
                        goto lab_0x408aff;
                    } else {
                        int64_t * v80 = (int64_t *)(a1 + 24); // 0x408e63
                        int64_t v81 = *v80; // 0x408e63
                        int64_t v82 = v81; // 0x408e68
                        if (v81 == 0) {
                            int64_t * mem = malloc(8 * (int32_t)v79); // 0x408f47
                            int64_t v83 = (int64_t)mem; // 0x408f47
                            *v80 = v83;
                            v82 = v83;
                            if (mem == NULL) {
                                // 0x408b1a
                                return 12;
                            }
                        }
                        char * v84 = (char *)(a1 + 140); // 0x408e6e
                        if (*v84 == 0) {
                            int64_t v85 = v82; // 0x408e7d
                            if (v59 != 0) {
                                int64_t v86 = 0;
                                *(int64_t *)(8 * v86 + v85) = v86;
                                int64_t v87 = v86 + 1; // 0x408e87
                                while (v59 != v87) {
                                    // 0x408e83
                                    v86 = v87;
                                    *(int64_t *)(8 * v86 + v85) = v86;
                                    v87 = v86 + 1;
                                }
                            }
                            // 0x408e90
                            *v84 = 1;
                        }
                        // 0x408e98
                        memcpy((int64_t *)(*(int64_t *)(a1 + 8) + v59), &wstr, v76);
                        int64_t v88 = v74 - 1; // 0x408eb8
                        int64_t v89 = *(int64_t *)(a1 + 16) + 4 * v59; // 0x408ebc
                        *(int32_t *)v89 = wc4;
                        int64_t v90 = *v80 + 8 * v59; // 0x408ec7
                        *(int64_t *)v90 = v60;
                        if (v76 >= 2) {
                            uint64_t v91 = 1;
                            int64_t v92 = v91 >= v74 ? v88 : v91; // 0x408edf
                            *(int64_t *)(8 * v91 + v90) = v92 + v60;
                            *(int32_t *)(4 * v91 + v89) = -1;
                            int64_t v93 = v91 + 1; // 0x408ef1
                            while (v93 != v77) {
                                // 0x408ed9
                                v91 = v93;
                                v92 = v91 >= v74 ? v88 : v91;
                                *(int64_t *)(8 * v91 + v90) = v92 + v60;
                                *(int32_t *)(4 * v91 + v89) = -1;
                                v93 = v91 + 1;
                            }
                        }
                        int64_t v94 = v77 - v74; // 0x408efe
                        int64_t v95 = *v1 + v94; // 0x408f01
                        *v1 = v95;
                        if (v60 < *(int64_t *)(a1 + 96)) {
                            int64_t * v96 = (int64_t *)(a1 + 104); // 0x408f0e
                            *v96 = *v96 + v94;
                        }
                        int64_t v97 = *v3; // 0x408f12
                        int64_t v98 = v97 - v95; // 0x408f12
                        int64_t v99 = v98 == 0 | v98 < 0 != ((v98 ^ v97) & (v97 ^ v95)) < 0 ? v97 : v95; // 0x408f1a
                        v39 = v99;
                        v43 = v88;
                        v37 = v74 + v60;
                        v35 = v78;
                        goto lab_0x4089ca;
                    }
                }
            } else {
                int64_t v100 = *(int64_t *)(a1 + 8) + v59; // 0x408a99
                memcpy((int64_t *)v100, &wstr, (int32_t)v74);
                v75 = v100;
                goto lab_0x408aa5;
            }
        }
    } else {
        if (v74 != -2) {
            goto lab_0x408dad;
        } else {
            // 0x408d9f
            if (*v3 < *v1) {
                goto lab_0x408aff;
            } else {
                goto lab_0x408dad;
            }
        }
    }
  lab_0x408d78:;
    int64_t v101 = *(int64_t *)(a1 + 8) + v59; // 0x408d88
    memcpy((int64_t *)v101, (int64_t *)v73, (int32_t)v74);
    v75 = v101;
    goto lab_0x408aa5;
  lab_0x408dad:;
    int64_t v114 = (int64_t)&v21; // 0x408a23
    int64_t v115 = *v64; // 0x408db0
    int64_t v116 = (int64_t)*(char *)(v60 + v114 + *(int64_t *)(a1 + 40)); // 0x408dbb
    int64_t v117 = v116; // 0x408dc1
    if (v115 != 0) {
        // 0x408f84
        v117 = (int64_t)*(char *)(v115 + v116);
    }
    // 0x408dc7
    *(char *)(*(int64_t *)(a1 + 8) + v59) = (char)v117;
    if (*(char *)(a1 + 140) != 0) {
        // 0x408f77
        *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v59) = v60;
    }
    int64_t v118 = *(int64_t *)(a1 + 16); // 0x408de0
    int64_t v119 = v60 + 1; // 0x408de4
    int64_t v120 = v59 + 1; // 0x408de8
    *(int32_t *)(v118 + 4 * v59) = (int32_t)v117;
    v39 = v61;
    v43 = v114;
    v37 = v119;
    v35 = v120;
    if (v74 == -1) {
        // 0x408df9
        *v63 = (int64_t)ps2;
        v39 = v61;
        v43 = v114;
        v37 = v119;
        v35 = v120;
    }
    goto lab_0x4089ca;
  lab_0x408aa5:;
    int64_t v102 = v75;
    int64_t v103; // 0x408990
    if (*(char *)(a1 + 140) != 0) {
        // 0x408e10
        v103 = v60;
        if (v74 != 0) {
            int64_t v104 = v74 + v60; // 0x408e23
            int64_t v105 = v59 - v60; // 0x408e28
            int64_t v106 = v60;
            *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
            int64_t v107 = v106 + 1; // 0x408e33
            v103 = v104;
            while (v104 != v107) {
                // 0x408e2f
                v106 = v107;
                *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
                v107 = v106 + 1;
                v103 = v104;
            }
        }
    } else {
        // 0x408ab3
        v103 = v74 + v60;
    }
    int64_t v108 = v103;
    int64_t v109 = *(int64_t *)(a1 + 16); // 0x408aba
    int64_t v110 = v59 + 1; // 0x408abe
    int64_t v111 = v74 + v59; // 0x408ac2
    int64_t v112 = v109 + 4 * v59;
    *(int32_t *)v112 = wc4;
    v39 = v61;
    v43 = v102;
    v37 = v108;
    v35 = v110;
    if (v110 < v111) {
        int64_t v113 = v112 + 4; // 0x408ae4
        while (true) {
            // 0x408ae8
            *(int32_t *)v113 = -1;
            v113 += 4;
            v39 = v61;
            v43 = v102;
            v37 = v108;
            v35 = v111;
            if (v109 + 4 * v111 == v113) {
                goto lab_0x4089ca;
            }
        }
    }
    goto lab_0x4089ca;
  lab_0x408aff:
    // 0x408aff
    *v63 = (int64_t)ps2;
    v41 = v60;
    v42 = v59;
    goto lab_0x408b10;
}
// Address range: 0x408f90 - 0x4090de
int64_t function_408f90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x408fa0
    uint64_t v2 = *v1; // 0x408fa0
    if (v2 >= 0xfffffffffffffff) {
        // 0x40903b
        return 12;
    }
    int64_t * v3 = (int64_t *)(a1 + 88); // 0x408fad
    int64_t v4 = *v3; // 0x408fad
    int64_t v5 = 2 * v2; // 0x408fb1
    int64_t v6 = 0x100000000 * a2 >> 32; // 0x408fb4
    int64_t v7 = v5 - v4; // 0x408fba
    int64_t v8 = v7 < 0 == ((v7 ^ v5) & (v4 ^ v5)) < 0 == (v7 != 0) ? v4 : v5; // 0x408fbd
    int64_t v9 = v8 - v6; // 0x408fc1
    int64_t v10 = function_4083f0(a1, v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v8 : v6); // 0x408fc8
    int64_t result = v10 & 0xffffffff; // 0x408fcd
    if ((int32_t)v10 != 0) {
        // 0x40903b
        return result;
    }
    int64_t * v11 = (int64_t *)(a1 + 184); // 0x408fd3
    int64_t v12 = *v11; // 0x408fd3
    if (v12 != 0) {
        int64_t * mem = realloc((int64_t *)v12, 8 * (int32_t)*v1 + 8); // 0x408feb
        if (mem == NULL) {
            // 0x40903b
            return 12;
        }
        // 0x408ff9
        *v11 = (int64_t)mem;
    }
    int32_t v13 = *(int32_t *)(a1 + 144); // 0x409007
    if (*(char *)(a1 + 136) != 0) {
        if (v13 >= 2) {
            // 0x40901b
            return function_408990(a1);
        }
        // 0x4090b8
        function_408760(a1);
        return result;
    }
    if (v13 > 1) {
        // 0x4090a0
        function_4087e0(a1);
        return result;
    }
    int64_t * v14 = (int64_t *)(a1 + 120); // 0x40904d
    int64_t v15 = *v14; // 0x40904d
    if (v15 == 0) {
        // 0x40903b
        return result;
    }
    int64_t v16 = *v3; // 0x409056
    int64_t * v17 = (int64_t *)(a1 + 48); // 0x40905a
    uint64_t v18 = *v17; // 0x40905a
    int64_t v19 = *v1; // 0x40905e
    int64_t v20 = v19 - v16; // 0x40905e
    uint64_t v21 = v20 == 0 | v20 < 0 != ((v20 ^ v19) & (v19 ^ v16)) < 0 ? v19 : v16; // 0x409062
    if (v21 <= v18) {
        // 0x40906c
        *(int64_t *)(a1 + 56) = v18;
        // 0x40903b
        return result;
    }
    int64_t * v22 = (int64_t *)(a1 + 40); // 0x40907a
    unsigned char v23 = *(char *)(v18 + v12 + *v22); // 0x40907e
    int64_t * v24 = (int64_t *)(a1 + 8); // 0x409085
    *(char *)(*v24 + v18) = *(char *)(v15 + (int64_t)v23);
    int64_t v25 = v18 + 1; // 0x40908c
    int64_t v26 = v25; // 0x409093
    if (v21 != v25) {
        unsigned char v27 = *(char *)(v26 + v12 + *v22); // 0x40907e
        *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
        v26++;
        while (v21 != v26) {
            // 0x409070
            v27 = *(char *)(v26 + v12 + *v22);
            *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
            v26++;
        }
    }
    // 0x409095
    *v17 = v21;
    *(int64_t *)(a1 + 56) = v21;
    // 0x40903b
    return result;
}
// Address range: 0x4090e0 - 0x409166
int64_t function_4090e0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x4090e7
    int64_t * v2 = (int64_t *)(a1 + 192); // 0x4090ee
    int64_t v3 = *v2; // 0x4090ee
    if (v1 > a2) {
        goto lab_0x409120;
    } else {
        // 0x4090fa
        if (v1 < *(int64_t *)(a1 + 88)) {
            int64_t result = function_408f90(a1, a2 + 1 & 0xffffffff); // 0x409106
            if ((int32_t)result != 0) {
                // 0x409116
                return result;
            }
            goto lab_0x40910f;
        } else {
            goto lab_0x409120;
        }
    }
  lab_0x409120:;
    uint64_t v4 = *(int64_t *)(a1 + 48); // 0x409120
    if (v4 <= a2) {
        // 0x409129
        if (v4 < *(int64_t *)(a1 + 88)) {
            int64_t result2 = function_408f90(a1, a2 + 1 & 0xffffffff); // 0x409135
            if ((int32_t)result2 != 0) {
                // 0x409116
                return result2;
            }
        }
    }
    goto lab_0x40910f;
  lab_0x40910f:
    // 0x40910f
    if (v3 < a2) {
        int64_t v5 = *(int64_t *)(a1 + 184); // 0x409140
        memset((int64_t *)(8 * v3 + 8 + v5), 0, 8 * (int32_t)(a2 - v3));
        *v2 = a2;
    }
    // 0x409116
    return 0;
}
// Address range: 0x409170 - 0x40918e
int64_t function_409170(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x409177
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g67;
}
// Address range: 0x409190 - 0x4091b8
int64_t function_409190(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 + 8) & 0x400ff; // 0x409193
    switch (result) {
        case 6: {
            // 0x4091a8
            return function_409170(a1);
        }
        case 3: {
            // 0x4091b0
            free((int64_t *)a1);
            return &g67;
        }
    }
    // 0x4091a2
    return result;
}
// Address range: 0x4091c0 - 0x4091d4
int64_t function_4091c0(int64_t a1, int64_t a2) {
    // 0x4091c0
    function_409190(a2 + 40);
    return 0;
}
// Address range: 0x4091e0 - 0x4093ae
int64_t function_4091e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4091e0
    int128_t v1; // 0x4091e0
    int128_t v2 = v1;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4091f4
    uint64_t v4 = *v3; // 0x4091f4
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x4091f8
    uint64_t v6 = *v5; // 0x4091f8
    int64_t v7; // 0x4091e0
    int64_t v8; // 0x4091e0
    int64_t v9; // 0x4091e0
    if (v4 >= v6) {
        uint64_t v10 = 2 * v6; // 0x4092ba
        if (v10 >= 0xaaaaaaaaaaaaaab) {
            // 0x409298
            return -1;
        }
        int32_t v11 = v6;
        int64_t * mem = realloc((int64_t *)v4, 32 * v11); // 0x4092d7
        if (mem == NULL) {
            // 0x409298
            return -1;
        }
        // 0x4092e5
        *(int64_t *)a1 = (int64_t)mem;
        int64_t * v12 = (int64_t *)(a1 + 24); // 0x4092eb
        int32_t v13 = 16 * v11; // 0x4092fd
        int64_t * mem2 = realloc((int64_t *)*v12, v13); // 0x4092fd
        int64_t * v14 = (int64_t *)(a1 + 32); // 0x409302
        int64_t * mem3 = realloc((int64_t *)*v14, v13); // 0x40930c
        int64_t * v15 = (int64_t *)(a1 + 40); // 0x409311
        int32_t v16 = 48 * v11; // 0x40931c
        int64_t * mem4 = realloc((int64_t *)*v15, v16); // 0x40931c
        int64_t * v17 = (int64_t *)(a1 + 48); // 0x409321
        int64_t * mem5 = realloc((int64_t *)*v17, v16); // 0x40932b
        if (mem2 == NULL | mem3 == NULL || mem4 == NULL || mem5 == NULL) {
            // 0x409370
            free(mem2);
            free(mem3);
            free(mem4);
            free(mem5);
            // 0x409298
            return -1;
        }
        int64_t v18 = (int64_t)mem2; // 0x4092fd
        int64_t v19 = (int64_t)mem4; // 0x40931c
        *v12 = v18;
        *v14 = (int64_t)mem3;
        *v15 = v19;
        *v17 = (int64_t)mem5;
        *v5 = v10;
        v9 = *v3;
        v7 = v18;
        v8 = v19;
    } else {
        // 0x409205
        v9 = v4;
        v7 = *(int64_t *)(a1 + 24);
        v8 = *(int64_t *)(a1 + 40);
    }
    int64_t v20 = 17 * v9; // 0x40921c
    char v21 = a3; // 0x40921f
    int64_t v22 = v20 + 8; // 0x409222
    *(int64_t *)v22 = a3;
    *(int64_t *)v20 = a2;
    *(int32_t *)v22 = (int32_t)a3 & -0x3ff01;
    bool v23 = v21 == 6; // 0x409232
    if (v21 == 5) {
        int32_t v24 = *(int32_t *)(a1 + 180); // 0x409234
        int32_t v25 = v24 - 1; // 0x409234
        v23 = v25 < 0 == (v24 & -v24) < 0 == (v25 != 0);
    }
    char * v26 = (char *)(v20 + 10); // 0x40923e
    int128_t v27 = __asm_pxor(v2, v2); // 0x409245
    *v26 = 16 * (char)v23 | *v26 & -17;
    *(int64_t *)(v7 + 8 * v9) = -1;
    int64_t v28 = 24 * *v3 + v8; // 0x409261
    __asm_movups(*(int128_t *)v28, v27);
    *(int64_t *)(v28 + 16) = 0;
    int64_t v29 = *(int64_t *)(a1 + 48) + 24 * *v3; // 0x40927d
    __asm_movups(*(int128_t *)v29, v27);
    *(int64_t *)(v29 + 16) = 0;
    int64_t result = *v3; // 0x40928c
    *v3 = result + 1;
    // 0x409298
    return result;
}
// Address range: 0x4093b0 - 0x40944f
int64_t function_4093b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 16 * a2; // 0x4093b7
    int64_t v2 = v1 + a1;
    int64_t result = function_4091e0(a1, *(int64_t *)v2, *(int64_t *)(v2 + 8)); // 0x4093d6
    if (result != -1) {
        int64_t v3 = a3 & 0xffffffff; // 0x4093bb
        int64_t v4 = 16 * result + v3; // 0x4093f5
        int32_t v5 = 256 * (int32_t)a3; // 0x4093f8
        int32_t * v6 = (int32_t *)(v4 + 8); // 0x409403
        int32_t v7 = *v6 & -0x3ff01; // 0x409406
        *v6 = v7 | v5 & 0x3ff00;
        uint32_t v8 = (*(int32_t *)((v1 | 8) + v3) | v5) & 0x3ff00 | v7; // 0x40942a
        *v6 = v8;
        *(char *)(v4 + 10) = (char)(v8 / 0x10000) | 4;
        *(int64_t *)(*(int64_t *)(a1 + 32) + 8 * result) = a2;
    }
    // 0x409444
    return result;
}
// Address range: 0x409450 - 0x4096d4
int64_t function_409450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 40);
    int64_t * v2 = (int64_t *)(a1 + 24);
    int64_t v3 = a1; // 0x40946a
    int64_t v4 = a2; // 0x40946a
    int64_t v5 = a3; // 0x40946a
    int64_t v6 = a5 & 0xffffffff;
    int32_t v7 = v6;
    int64_t v8; // 0x409450
    int64_t v9; // 0x409450
    int64_t v10; // 0x409450
    int64_t v11; // 0x409450
    int64_t result; // 0x409450
    int64_t v12; // 0x409450
    int64_t v13; // 0x409450
    int64_t v14; // 0x409450
    int64_t v15; // 0x409450
    int64_t v16; // 0x409604
    int64_t v17; // 0x409608
    int64_t v18; // 0x409608
    int64_t v19; // 0x40961f
    int64_t v20; // 0x409491
    int64_t v21; // 0x409495
    int64_t v22; // 0x409499
    int64_t v23; // 0x409635
    int64_t v24; // 0x4096a8
    int64_t v25; // 0x4094af
    int64_t v26; // 0x4094b3
    int64_t v27; // 0x4094cb
    int64_t v28; // 0x4094cf
    int64_t v29; // 0x4094d6
    int64_t v30; // 0x4094da
    int64_t v31; // 0x409659
    int64_t v32; // 0x409450
    int64_t v33; // 0x409693
    int64_t v34; // 0x409508
    int64_t v35; // 0x40950b
    int64_t v36; // 0x409475
    int64_t v37; // 0x409483
    while (true) {
        // 0x40946f
        v8 = v5;
        v10 = v4;
        v13 = v3;
        v36 = *v1;
        v37 = v13 + 8 + 16 * v10;
        if (*(char *)v37 == 4) {
            // 0x4095f0
            v16 = 24 * v8;
            v17 = 8 * v10;
            v18 = *(int64_t *)(*v2 + v17);
            *(int64_t *)(v36 + 8 + v16) = 0;
            v19 = function_4093b0(a1, v18, v6);
            if (v19 == -1) {
                return 12;
            }
            // 0x409635
            v23 = *v2;
            *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
            v15 = v18;
            v12 = v16;
            v9 = v19;
            goto lab_0x40956a;
        } else {
            // 0x40948d
            v20 = 24 * v10;
            v21 = v36 + v20;
            v22 = *(int64_t *)(v21 + 8);
            if (v22 == 0) {
                // 0x4096a8
                v24 = *v2;
                *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                result = 0;
                return result;
            }
            // 0x4094a6
            v25 = 24 * v8;
            v26 = v36 + v25;
            v4 = *(int64_t *)*(int64_t *)(v21 + 16);
            *(int64_t *)(v26 + 8) = 0;
            if (v22 == 1) {
                // break -> 0x4095a0
                break;
            }
            // 0x4094cb
            v27 = *(int64_t *)(a1 + 16);
            v28 = v27 - 1;
            v29 = 16 * v28;
            v30 = v29 + v13;
            if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                // 0x4094f0
                v32 = 16 * v27 - 32 - v29;
                v14 = v28;
                v11 = v30;
                if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                    // 0x409528
                    if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                        // 0x409539
                        if ((char)function_408500(v26, v14) == 0) {
                            return 12;
                        } else {
                            goto lab_0x409542;
                        }
                    }
                }
                // 0x409508
                v34 = v32 + v11;
                v35 = v14 - 1;
                while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                    // 0x409522
                    v14 = v35;
                    v11 = v34;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x409528
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x409539
                            if ((char)function_408500(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x409542;
                            }
                        }
                    }
                    // 0x409508
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                }
            }
            // 0x409650
            v31 = function_4093b0(a1, v4, v6);
            if (v31 == -1) {
                return 12;
            }
            // 0x40966b
            if ((char)function_408500(*v1 + v25, v31) == 0) {
                return 12;
            }
            // 0x409682
            v33 = function_409450(a1, v4, v31, a4, v6);
            result = v33;
            if ((int32_t)v33 != 0) {
                // 0x40958a
                return result;
            }
            goto lab_0x409542;
        }
    }
    if (v10 == a4 == (v10 != v8)) {
        // 0x4096bb
        result = 0;
        if ((char)function_408500(v26, v4) != 0) {
            return result;
        } else {
            return 12;
        }
    }
    int64_t v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7); // 0x4095c1
    v5 = function_4093b0(a1, v4, v38);
    while (v5 != -1) {
        // 0x4095d5
        v3 = *v1 + v25;
        if ((char)function_408500(v3, v5) == 0) {
            // break -> 0x409585
            break;
        }
        v6 = v38;
        v7 = v6;
        while (true) {
            // 0x40946f
            v8 = v5;
            v10 = v4;
            v13 = v3;
            v36 = *v1;
            v37 = v13 + 8 + 16 * v10;
            if (*(char *)v37 == 4) {
                // 0x4095f0
                v16 = 24 * v8;
                v17 = 8 * v10;
                v18 = *(int64_t *)(*v2 + v17);
                *(int64_t *)(v36 + 8 + v16) = 0;
                v19 = function_4093b0(a1, v18, v6);
                if (v19 == -1) {
                    return 12;
                }
                // 0x409635
                v23 = *v2;
                *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
                v15 = v18;
                v12 = v16;
                v9 = v19;
                goto lab_0x40956a;
            } else {
                // 0x40948d
                v20 = 24 * v10;
                v21 = v36 + v20;
                v22 = *(int64_t *)(v21 + 8);
                if (v22 == 0) {
                    // 0x4096a8
                    v24 = *v2;
                    *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                    result = 0;
                    return result;
                }
                // 0x4094a6
                v25 = 24 * v8;
                v26 = v36 + v25;
                v4 = *(int64_t *)*(int64_t *)(v21 + 16);
                *(int64_t *)(v26 + 8) = 0;
                if (v22 == 1) {
                    // break -> 0x4095a0
                    break;
                }
                // 0x4094cb
                v27 = *(int64_t *)(a1 + 16);
                v28 = v27 - 1;
                v29 = 16 * v28;
                v30 = v29 + v13;
                if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                    // 0x4094f0
                    v32 = 16 * v27 - 32 - v29;
                    v14 = v28;
                    v11 = v30;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x409528
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x409539
                            if ((char)function_408500(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x409542;
                            }
                        }
                    }
                    // 0x409508
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                    while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                        // 0x409522
                        v14 = v35;
                        v11 = v34;
                        if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                            // 0x409528
                            if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                                // 0x409539
                                if ((char)function_408500(v26, v14) == 0) {
                                    return 12;
                                } else {
                                    goto lab_0x409542;
                                }
                            }
                        }
                        // 0x409508
                        v34 = v32 + v11;
                        v35 = v14 - 1;
                    }
                }
                // 0x409650
                v31 = function_4093b0(a1, v4, v6);
                if (v31 == -1) {
                    return 12;
                }
                // 0x40966b
                if ((char)function_408500(*v1 + v25, v31) == 0) {
                    return 12;
                }
                // 0x409682
                v33 = function_409450(a1, v4, v31, a4, v6);
                result = v33;
                if ((int32_t)v33 != 0) {
                    // 0x40958a
                    return result;
                }
                goto lab_0x409542;
            }
        }
        if (v10 == a4 == (v10 != v8)) {
            // 0x4096bb
            result = 0;
            if ((char)function_408500(v26, v4) != 0) {
                return result;
            } else {
                return 12;
            }
        }
        // 0x4095b0
        v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7);
        v5 = function_4093b0(a1, v4, v38);
    }
  lab_0x409585_5:
    // 0x40958a
    return 12;
  lab_0x40956a:;
    int64_t v39 = *v1 + v12; // 0x409571
    if ((char)function_408500(v39, v9) == 0) {
        return 12;
    }
    goto lab_0x40946f;
  lab_0x409542:;
    int64_t v40 = *(int64_t *)(*(int64_t *)(v20 + 16 + *v1) + 8); // 0x409551
    int64_t v41 = function_4093b0(a1, v40, v6); // 0x40955c
    v15 = v40;
    v12 = v25;
    v9 = v41;
    if (v41 == -1) {
        // break (via goto) -> 0x409585
        goto lab_0x409585_5;
    }
    goto lab_0x40956a;
}
// Address range: 0x4096e0 - 0x409739
int64_t function_4096e0(int64_t a1) {
    // 0x4096e0
    free((int64_t *)*(int64_t *)(a1 + 48));
    free((int64_t *)*(int64_t *)(a1 + 72));
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x4096f6
    int64_t v2 = *v1; // 0x4096f6
    if (v2 != a1 + 8) {
        // 0x409703
        free((int64_t *)*(int64_t *)(v2 + 16));
        free((int64_t *)*v1);
    }
    // 0x409715
    free((int64_t *)*(int64_t *)(a1 + 24));
    free((int64_t *)*(int64_t *)(a1 + 96));
    free((int64_t *)*(int64_t *)(a1 + 88));
    free((int64_t *)a1);
    return &g67;
}
// Address range: 0x409740 - 0x409772
int64_t function_409740(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    free((int64_t *)*(int64_t *)(v1 + 16));
    free((int64_t *)*(int64_t *)(v1 + 24));
    if (*(char *)(v1 + 139) == 0) {
        // 0x40975f
        return &g67;
    }
    // 0x409768
    free((int64_t *)*(int64_t *)(v1 + 8));
    return &g67;
}
// Address range: 0x409780 - 0x409838
int64_t function_409780(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 232); // 0x40978b
    if (*v2 < 1) {
        // 0x409819
        *v2 = 0;
        *(int64_t *)(v1 + 200) = 0;
        int64_t result; // 0x409780
        return result;
    }
    int64_t v3 = 0; // 0x409807
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3); // 0x4097a7
    int64_t * v5 = (int64_t *)(v4 + 32); // 0x4097ab
    int64_t * v6 = (int64_t *)(v4 + 40);
    int64_t v7 = 0; // 0x4097b1
    int64_t v8; // 0x4097bd
    int64_t v9; // 0x4097c1
    if (*v5 >= 1) {
        v8 = *(int64_t *)(*v6 + 8 * v7);
        v9 = v7 + 1;
        free((int64_t *)*(int64_t *)(v8 + 32));
        free((int64_t *)v8);
        v7 = v9;
        while (*v5 > v9) {
            // 0x4097b8
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
        }
    }
    // 0x4097dd
    free((int64_t *)*v6);
    int64_t * v10 = (int64_t *)(v4 + 16); // 0x4097e7
    int64_t v11 = *v10; // 0x4097e7
    if (v11 != 0) {
        // 0x4097f1
        free((int64_t *)*(int64_t *)(v11 + 16));
        free((int64_t *)*v10);
    }
    // 0x409804
    v3++;
    free((int64_t *)v4);
    while (*v2 > v3) {
        // 0x4097a0
        v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3);
        v5 = (int64_t *)(v4 + 32);
        v6 = (int64_t *)(v4 + 40);
        v7 = 0;
        if (*v5 >= 1) {
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
            while (*v5 > v9) {
                // 0x4097b8
                v8 = *(int64_t *)(*v6 + 8 * v7);
                v9 = v7 + 1;
                free((int64_t *)*(int64_t *)(v8 + 32));
                free((int64_t *)v8);
                v7 = v9;
            }
        }
        // 0x4097dd
        free((int64_t *)*v6);
        v10 = (int64_t *)(v4 + 16);
        v11 = *v10;
        if (v11 != 0) {
            // 0x4097f1
            free((int64_t *)*(int64_t *)(v11 + 16));
            free((int64_t *)*v10);
        }
        // 0x409804
        v3++;
        free((int64_t *)v4);
    }
    // 0x409819
    *v2 = 0;
    *(int64_t *)(v1 + 200) = 0;
    return &g67;
}
// Address range: 0x409840 - 0x409ac0
int64_t function_409840(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 48); // 0x409844
    int64_t v2 = v1; // 0x409844
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x409848
    g66 = v2;
    int64_t v4 = v3; // 0x409853
    switch (v1) {
        case 2: {
            // 0x409918
            if (*(int64_t *)(a2 + 32) == 0) {
                // 0x40987a
                return 0;
            }
            // 0x409923
            __assert_fail("node->next == NULL", "lib/regcomp.c", 1449, "link_nfa_nodes");
            v4 = 1449;
        }
        case 4: {
            // 0x409940
            *(int64_t *)(8 * v4 + 0x312d203e) = *(int64_t *)0x203e207466656c38;
            // 0x40987a
            return 0;
        }
        case 8: {
        }
        case 9: {
        }
        case 12: {
            int64_t v5 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x4099b5
            int64_t * v6 = (int64_t *)v5; // 0x4099b9
            *v6 = 1;
            int64_t * v7 = (int64_t *)(v5 + 8); // 0x4099c0
            *v7 = 1;
            int64_t * mem = malloc(8); // 0x4099c8
            *(int64_t *)(v5 + 16) = (int64_t)mem;
            if (mem != NULL) {
                // 0x4099d6
                *mem = *(int64_t *)(*(int64_t *)(a2 + 32) + 56);
                return 0;
            }
            // 0x409a30
            *v7 = 0;
            *v6 = 0;
            // 0x40987a
            return 12;
        }
        case 10: {
        }
        case 11: {
            char * v8 = (char *)(a1 + 176); // 0x409880
            *v8 = *v8 | 1;
            int64_t v9 = *(int64_t *)(a2 + 8); // 0x409887
            int64_t v10 = a2 + 32;
            int64_t v11 = *(int64_t *)(*(int64_t *)(v9 == 0 ? v10 : v9 + 24) + 56);
            if (v11 < 0) {
                // 0x409aa6
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g67;
            }
            int64_t v12 = *(int64_t *)(a2 + 16); // 0x40989c
            int64_t v13 = *(int64_t *)(*(int64_t *)(v12 == 0 ? v10 : v12 + 24) + 56);
            if (v13 < 0) {
                // 0x409a8d
                __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
                // 0x409aa6
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g67;
            }
            int64_t v14 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x4098d0
            *(int64_t *)v14 = 2;
            int64_t * mem2 = malloc(16); // 0x4098db
            int64_t v15 = (int64_t)mem2; // 0x4098db
            *(int64_t *)(v14 + 16) = v15;
            if (mem2 == NULL) {
                // 0x40987a
                return 12;
            }
            int64_t * v16 = (int64_t *)(v14 + 8);
            if (v11 == v13) {
                // 0x4099e0
                *v16 = 1;
                *mem2 = v11;
                // 0x40987a
                return 0;
            }
            // 0x4098f6
            *v16 = 2;
            if (v11 < v13) {
                // 0x409904
                *mem2 = v11;
                *(int64_t *)(v15 + 8) = v13;
            } else {
                // 0x409a18
                *mem2 = v13;
                *(int64_t *)(v15 + 8) = v11;
            }
            // 0x40987a
            return 0;
        }
        case 16: {
            // 0x40987a
            return 0;
        }
        default: {
            if ((v2 & 8) == 0) {
                int64_t v17 = *(int64_t *)(*(int64_t *)(a2 + 32) + 56); // 0x40986c
                *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v3) = v17;
                // 0x40987a
                return 0;
            }
            // 0x409a74
            __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 1484, "link_nfa_nodes");
            // 0x409a8d
            __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
            // 0x409aa6
            __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
            return &g67;
        }
    }
}
// Address range: 0x409ac0 - 0x409b0e
int64_t function_409ac0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 48); // 0x409ac0
    uint64_t v2 = a2 + 1; // 0x409ac4
    if (v2 >= v1) {
        // 0x409b02
        return 1;
    }
    int64_t v3 = *(int64_t *)(a1 + 16) + 4 * v2;
    if (*(int32_t *)v3 != -1) {
        // 0x409b02
        return 1;
    }
    int64_t v4 = 2;
    while (v4 != v1 - a2) {
        int64_t v5 = v4 + 1; // 0x409af0
        if (*(int32_t *)(v3 - 8 + 4 * v5) != -1) {
            // break -> 0x409b02
            break;
        }
        v4 = v5;
    }
    // 0x409b02
    return v4 & 0xffffffff;
}
// Address range: 0x409b10 - 0x409b75
int64_t function_409b10(int64_t a1, int64_t a2, uint64_t a3) {
    if (a1 < 1) {
        // 0x409b55
        return 0;
    }
    int64_t v1 = a1 - 1; // 0x409b1a
    int64_t v2 = 0; // 0x409b23
    if (v1 != 0) {
        int64_t v3 = 0;
        int64_t v4 = (v3 + v1) / 2; // 0x409b29
        int64_t v5 = v4; // 0x409b30
        int64_t v6 = v4; // 0x409b30
        int64_t v7 = v1; // 0x409b30
        int64_t v8; // 0x409b10
        int64_t v9; // 0x409b3c
        if (*(int64_t *)(8 * v4 + a2) >= a3) {
            v2 = v3;
            if (v3 >= v5) {
                // break (via goto) -> 0x409b4d
                goto lab_0x409b4d;
            }
            // 0x409b38
            v9 = (v5 + v3) / 2;
            v6 = v9;
            v7 = v5;
            while (*(int64_t *)(8 * v9 + a2) >= a3) {
                // 0x409b48
                v8 = v9;
                v2 = v3;
                if (v3 >= v8) {
                    // break (via goto) -> 0x409b4d
                    goto lab_0x409b4d;
                }
                // 0x409b38
                v9 = (v8 + v3) / 2;
                v6 = v9;
                v7 = v8;
            }
        }
        int64_t v10 = v7;
        int64_t v11 = v6 + 1; // 0x409b60
        v2 = v11;
        while (v11 < v10) {
            // 0x409b25
            v3 = v11;
            v4 = (v3 + v10) / 2;
            v5 = v4;
            v6 = v4;
            v7 = v10;
            if (*(int64_t *)(8 * v4 + a2) >= a3) {
                v2 = v3;
                if (v3 >= v5) {
                    // break (via goto) -> 0x409b4d
                    goto lab_0x409b4d;
                }
                // 0x409b38
                v9 = (v5 + v3) / 2;
                v6 = v9;
                v7 = v5;
                while (*(int64_t *)(8 * v9 + a2) >= a3) {
                    // 0x409b48
                    v8 = v9;
                    v2 = v3;
                    if (v3 >= v8) {
                        // break (via goto) -> 0x409b4d
                        goto lab_0x409b4d;
                    }
                    // 0x409b38
                    v9 = (v8 + v3) / 2;
                    v6 = v9;
                    v7 = v8;
                }
            }
            // 0x409b60
            v10 = v7;
            v11 = v6 + 1;
            v2 = v11;
        }
    }
  lab_0x409b4d:
    // 0x409b4d
    if (*(int64_t *)(8 * v2 + a2) == a3) {
        // 0x409b70
        return v2 + 1;
    }
    // 0x409b55
    return 0;
}
// Address range: 0x409b80 - 0x409c79
int64_t function_409b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 16; // 0x409b87
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x409ba1
    int64_t v3 = *v2; // 0x409ba1
    if (function_409b10(v3, v1, a3) != 0) {
      lab_0x409c68:
        // 0x409c55
        return 0;
    }
    int32_t v4 = a5;
    int64_t * v5 = (int64_t *)(a1 + 40);
    int64_t v6 = a3;
    int64_t v7 = 16 * v6 + v3; // 0x409bc0
    int64_t result; // 0x409b80
    if ((int32_t)*(char *)(v7 + 8) == v4) {
        // 0x409bcd
        if (*(int64_t *)v7 == a4) {
            if (v4 != 9) {
                return 0;
            } else {
                // 0x409c3e
                result = 12;
                if ((char)function_408500(a2, v6) != 0) {
                    return 0;
                } else {
                    return result;
                }
            }
        }
    }
    // 0x409bd2
    result = 12;
    while ((char)function_408500(a2, v6) != 0) {
        int64_t v8 = 24 * v6; // 0x409bea
        int64_t v9 = *v5 + v8; // 0x409bee
        int64_t v10 = *(int64_t *)(v9 + 8); // 0x409bf1
        if (v10 == 0) {
            // 0x409c55
            return 0;
        }
        int64_t v11 = *(int64_t *)(v9 + 16); // 0x409bfa
        int64_t v12 = v11; // 0x409c02
        if (v10 == 2) {
            int64_t v13 = function_409b80(a1, a2, *(int64_t *)(v11 + 8), a4, a5 & 0xffffffff); // 0x409c20
            result = v13;
            if ((int32_t)v13 != 0) {
                // break -> 0x409c55
                break;
            }
            // 0x409c29
            v12 = *(int64_t *)(v8 + 16 + *v5);
        }
        int64_t v14 = *(int64_t *)v12; // 0x409c04
        int64_t v15 = *v2; // 0x409ba1
        if (function_409b10(v15, v1, v14) != 0) {
            // 0x409c55
            return 0;
        }
        v6 = v14;
        v7 = 16 * v6 + v15;
        if ((int32_t)*(char *)(v7 + 8) == v4) {
            // 0x409bcd
            if (*(int64_t *)v7 == a4) {
                if (v4 != 9) {
                    return 0;
                } else {
                    // 0x409c3e
                    result = 12;
                    if ((char)function_408500(a2, v6) != 0) {
                        return 0;
                    } else {
                        return result;
                    }
                }
            }
        }
        // 0x409bd2
        result = 12;
    }
  lab_0x409c55:
    // 0x409c55
    return result;
}
// Address range: 0x409c80 - 0x409ca3
int64_t function_409c80(uint64_t a1, int64_t result2, uint64_t a3) {
    // 0x409c80
    if (a3 >= a1) {
        // 0x409ca2
        int64_t result; // 0x409c80
        return result;
    }
    int64_t v1 = a3; // 0x409c83
    int64_t v2 = 8 * v1 + result2;
    *(int64_t *)v2 = *(int64_t *)(v2 + 8);
    v1++;
    while (v1 != a1) {
        // 0x409c90
        v2 = 8 * v1 + result2;
        *(int64_t *)v2 = *(int64_t *)(v2 + 8);
        v1++;
    }
    // 0x409ca2
    return result2;
}
// Address range: 0x409cb0 - 0x409d3b
int64_t function_409cb0(int64_t a1, int64_t a2) {
    // 0x409cb0
    int64_t * v1; // 0x409cc0
    int64_t v2; // 0x409cc0
    switch (*(char *)(a2 + 48)) {
        case 4: {
            int64_t v3 = *(int64_t *)(a1 + 224); // 0x409d10
            if (v3 == 0) {
                // 0x409cbc
                return 0;
            }
            int64_t v4 = a2 + 40; // 0x409d1c
            int64_t v5 = *(int64_t *)(8 * (int64_t)*(int32_t *)v4 + v3); // 0x409d20
            *(int64_t *)v4 = v5;
            int64_t * v6 = (int64_t *)(a1 + 160); // 0x409d31
            *v6 = *v6 | (int64_t)(1 << (int32_t)v5 % 32);
            return 0;
        }
        case 17: {
            // 0x409cc0
            v1 = (int64_t *)(a2 + 8);
            v2 = *v1;
            if (v2 == 0 || *(char *)(v2 + 48) != 17) {
                // 0x409cbc
                return 0;
            }
            // break -> 0x409ccf
            break;
        }
        default: {
            // 0x409cbc
            return 0;
        }
    }
    uint64_t v7 = *(int64_t *)(v2 + 40); // 0x409ccf
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x409cd3
    *v1 = v8;
    if (v8 != 0) {
        // 0x409ce0
        *(int64_t *)v8 = a2;
    }
    int64_t v9 = *(int64_t *)(a1 + 224); // 0x409ce3
    int64_t v10 = *(int64_t *)(8 * *(int64_t *)(a2 + 40) + v9); // 0x409cee
    *(int64_t *)(v9 + 8 * v7) = v10;
    if (v7 > 63) {
        // 0x409cbc
        return 0;
    }
    uint64_t v11 = v7 % 64; // 0x409d03
    int64_t v12 = -2; // 0x409d03
    if (v11 != 0) {
        v12 = 0xfffffffffffffffe >> 64 - v11 | -2 << v11;
    }
    int64_t * v13 = (int64_t *)(a1 + 160); // 0x409d06
    *v13 = *v13 & v12;
    // 0x409cbc
    return 0;
}
// Address range: 0x409d40 - 0x409d97
int64_t function_409d40(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x409d44
    switch (*(char *)(a2 + 48)) {
        case 11: {
            // 0x409d78
            *(int64_t *)(v1 + 32) = a2;
            return 0;
        }
        case 16: {
            int64_t v2 = *(int64_t *)(a2 + 16); // 0x409d80
            *(int64_t *)(v1 + 32) = *(int64_t *)(v2 + 24);
            *(int64_t *)(v2 + 32) = *(int64_t *)(a2 + 32);
            return 0;
        }
    }
    if (v1 != 0) {
        // 0x409d55
        *(int64_t *)(v1 + 32) = *(int64_t *)(a2 + 32);
    }
    int64_t v3 = *(int64_t *)(a2 + 16); // 0x409d5d
    if (v3 != 0) {
        // 0x409d66
        *(int64_t *)(v3 + 32) = *(int64_t *)(a2 + 32);
    }
    // 0x409d6e
    return 0;
}
// Address range: 0x409da0 - 0x409fee
int64_t function_409da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, uint64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x409db7
    int64_t v2 = -1; // 0x409dd1
    int64_t v3 = -1; // 0x409dd1
    if (v1 > 0) {
        int64_t v4 = *(int64_t *)(a1 + 216); // 0x409dd7
        int64_t v5 = v4 + 8;
        int64_t v6 = 0;
        uint64_t v7 = v6 + v1; // 0x409dd3
        int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x409de8
        int64_t v9 = v8; // 0x409df4
        int64_t v10 = v1; // 0x409df4
        int64_t v11 = v8; // 0x409df4
        int64_t v12; // 0x409da0
        int64_t v13; // 0x409da0
        uint64_t v14; // 0x409e00
        int64_t v15; // 0x409e0e
        if (*(int64_t *)(40 * v8 + v5) >= a5) {
            v13 = v6;
            if (v6 >= v9) {
                // break (via goto) -> 0x409e2b
                goto lab_0x409e2b;
            }
            // 0x409e00
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v9;
            v11 = v15;
            while (*(int64_t *)(40 * v15 + v5) >= a5) {
                // 0x409e26
                v12 = v15;
                v13 = v6;
                if (v6 >= v12) {
                    // break (via goto) -> 0x409e2b
                    goto lab_0x409e2b;
                }
                // 0x409e00
                v14 = v12 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v12;
                v11 = v15;
            }
        }
        int64_t v16 = v10;
        int64_t v17 = v11 + 1; // 0x409f98
        v13 = v17;
        while (v17 < v16) {
            // 0x409dd3
            v6 = v17;
            v7 = v6 + v16;
            v8 = (v7 / 0x8000000000000000 + v7) / 2;
            v9 = v8;
            v10 = v16;
            v11 = v8;
            if (*(int64_t *)(40 * v8 + v5) >= a5) {
                v13 = v6;
                if (v6 >= v9) {
                    // break (via goto) -> 0x409e2b
                    goto lab_0x409e2b;
                }
                // 0x409e00
                v14 = v9 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v9;
                v11 = v15;
                while (*(int64_t *)(40 * v15 + v5) >= a5) {
                    // 0x409e26
                    v12 = v15;
                    v13 = v6;
                    if (v6 >= v12) {
                        // break (via goto) -> 0x409e2b
                        goto lab_0x409e2b;
                    }
                    // 0x409e00
                    v14 = v12 + v6;
                    v15 = (v14 / 0x8000000000000000 + v14) / 2;
                    v10 = v12;
                    v11 = v15;
                }
            }
            // 0x409f98
            v16 = v10;
            v17 = v11 + 1;
            v13 = v17;
        }
      lab_0x409e2b:;
        int64_t v18 = v13;
        int64_t v19 = -1; // 0x409e2e
        if (v1 > v18) {
            // 0x409e34
            v19 = *(int64_t *)(40 * v18 + 8 + v4) != a5 ? -1 : v18;
        }
        int64_t v20 = 0;
        uint64_t v21 = v1 + v20; // 0x409e5c
        int64_t v22 = (v21 / 0x8000000000000000 + v21) / 2; // 0x409e72
        int64_t v23 = v22; // 0x409e7e
        int64_t v24 = v1; // 0x409e7e
        int64_t v25 = v22; // 0x409e7e
        int64_t v26; // 0x409da0
        int64_t v27; // 0x409da0
        uint64_t v28; // 0x409e88
        int64_t v29; // 0x409e97
        if (*(int64_t *)(40 * v22 + v5) >= a7) {
            v27 = v20;
            if (v20 >= v23) {
                // break (via goto) -> 0x409eb4
                goto lab_0x409eb4;
            }
            // 0x409e88
            v28 = v23 + v20;
            v29 = (v28 / 0x8000000000000000 + v28) / 2;
            v24 = v23;
            v25 = v29;
            while (*(int64_t *)(40 * v29 + v5) >= a7) {
                // 0x409eaf
                v26 = v29;
                v27 = v20;
                if (v20 >= v26) {
                    // break (via goto) -> 0x409eb4
                    goto lab_0x409eb4;
                }
                // 0x409e88
                v28 = v26 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v26;
                v25 = v29;
            }
        }
        int64_t v30 = v24;
        int64_t v31 = v25 + 1; // 0x409fb0
        v27 = v31;
        while (v31 < v30) {
            // 0x409e5c
            v20 = v31;
            v21 = v30 + v20;
            v22 = (v21 / 0x8000000000000000 + v21) / 2;
            v23 = v22;
            v24 = v30;
            v25 = v22;
            if (*(int64_t *)(40 * v22 + v5) >= a7) {
                v27 = v20;
                if (v20 >= v23) {
                    // break (via goto) -> 0x409eb4
                    goto lab_0x409eb4;
                }
                // 0x409e88
                v28 = v23 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v23;
                v25 = v29;
                while (*(int64_t *)(40 * v29 + v5) >= a7) {
                    // 0x409eaf
                    v26 = v29;
                    v27 = v20;
                    if (v20 >= v26) {
                        // break (via goto) -> 0x409eb4
                        goto lab_0x409eb4;
                    }
                    // 0x409e88
                    v28 = v26 + v20;
                    v29 = (v28 / 0x8000000000000000 + v28) / 2;
                    v24 = v26;
                    v25 = v29;
                }
            }
            // 0x409fb0
            v30 = v24;
            v31 = v25 + 1;
            v27 = v31;
        }
      lab_0x409eb4:;
        int64_t v32 = v27;
        v2 = v19;
        v3 = -1;
        if (v1 > v32) {
            // 0x409ebd
            v2 = v19;
            v3 = *(int64_t *)(40 * v32 + 8 + v4) != a7 ? -1 : v32;
        }
    }
    // 0x409edc
    if (a2 < 1) {
        // 0x409f7e
        return 0;
    }
    int64_t * v33 = (int64_t *)(a1 + 216); // 0x409f14
    int64_t * v34 = (int64_t *)*(int64_t *)(a1 + 152); // 0x409f45
    int64_t v35 = 0; // 0x409fc5
    int64_t v36 = 8 * v35; // 0x409f28
    int64_t v37 = *(int64_t *)(v36 + a3); // 0x409f28
    int64_t v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34); // 0x409f48
    int64_t v39 = function_408380(a1, v37, v38, a4, a5, v2); // 0x409f4e
    uint64_t v40 = *(int64_t *)(v38 + v36); // 0x409f6c
    int64_t result = 1; // 0x409f77
    while ((int32_t)v39 == (int32_t)function_408380(a1, v40, v38, a6, a7, v3)) {
        // 0x409fc0
        v35++;
        result = 0;
        if (v35 >= v40) {
            // break -> 0x409f7e
            break;
        }
        v36 = 8 * v35;
        v37 = *(int64_t *)(v36 + v38);
        v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34);
        v39 = function_408380(a1, v37, v38, a4, a5, v2);
        v40 = *(int64_t *)(v38 + v36);
        result = 1;
    }
    // 0x409f7e
    return result;
}
// Address range: 0x409ff0 - 0x40a041
int64_t function_409ff0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409ff0
    int64_t result; // 0x409ff0
    if ((int32_t)result != 0) {
        // 0x40a03c
        return result;
    }
    int64_t v1 = a1; // 0x40a00e
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x40a010
        int64_t v3 = v2; // 0x40a019
        int64_t v4 = 0; // 0x40a019
        int64_t v5 = v1; // 0x40a019
        if (v2 == 0) {
            int64_t v6 = v5;
            int64_t v7 = *(int64_t *)(v6 + 16); // 0x40a023
            v3 = v7;
            while (v7 != v4 != v7 != 0) {
                int64_t v8 = *(int64_t *)v6; // 0x40a031
                v4 = v6;
                if (v8 == 0) {
                    return result;
                }
                v6 = v8;
                v7 = *(int64_t *)(v6 + 16);
                v3 = v7;
            }
        }
        // 0x40a000
        v1 = v3;
    }
}
// Address range: 0x40a050 - 0x40a213
int64_t function_40a050(int64_t * a1, int128_t * a2) {
    // 0x40a050
    if (a2 == NULL) {
        // 0x40a154
        return 0;
    }
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40a059
    int64_t v3 = *v2; // 0x40a059
    if (v3 == 0) {
        // 0x40a154
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x40a06d
    int64_t v6 = *v5; // 0x40a06d
    int64_t v7 = v6 + 2 * v3;
    int64_t v8; // 0x40a050
    int64_t * v9; // 0x40a050
    int64_t v10; // 0x40a050
    int64_t v11; // 0x40a050
    int64_t v12; // 0x40a050
    if (v7 > v4) {
        int64_t v13 = v3 + v4; // 0x40a1b0
        int64_t * v14 = (int64_t *)(v4 + 16);
        int64_t * mem = realloc((int64_t *)*v14, 16 * (int32_t)v13); // 0x40a1c2
        if (mem == NULL) {
            // 0x40a154
            return 12;
        }
        int64_t v15 = *v5; // 0x40a1cc
        *v14 = (int64_t)mem;
        *a1 = 2 * v13;
        int64_t v16 = *v2; // 0x40a1d7
        v9 = v14;
        v11 = v16;
        if (v15 != 0) {
            // 0x40a1cc
            v8 = 2 * v16 + v15;
            v10 = v16;
            v12 = v15;
            goto lab_0x40a08d;
        } else {
            goto lab_0x40a1e5;
        }
    } else {
        // 0x40a084
        v8 = v7;
        v10 = v3;
        v12 = v6;
        if (v6 == 0) {
            // 0x40a084
            v9 = (int64_t *)(v4 + 16);
            v11 = v3;
            goto lab_0x40a1e5;
        } else {
            goto lab_0x40a08d;
        }
    }
  lab_0x40a1e5:;
    int64_t v17 = *v9; // 0x40a1e5
    int64_t v18 = *(int64_t *)(v1 + 16); // 0x40a1e9
    *v5 = v11;
    memcpy((int64_t *)v17, (int64_t *)v18, 8 * (int32_t)*v2);
    // 0x40a154
    return 0;
  lab_0x40a08d:;
    int64_t v19 = v10 - 1; // 0x40a091
    int64_t v20 = -v10; // 0x40a09c
    int64_t v21 = v19; // 0x40a0a3
    int64_t v22 = v8; // 0x40a0a3
    if (v20 < 0) {
        int64_t v23 = v12; // 0x40a050
        int64_t v24 = v20;
        int64_t v25 = v8; // 0x40a050
        int64_t v26 = v19;
        while (true) {
            int64_t v27 = v23 - 1;
            int64_t v28 = v24; // 0x40a0d6
            v21 = v26;
            v22 = v25;
            if (v27 < 0) {
                // break (via goto) -> 0x40a0e0
                goto lab_0x40a0e0_2;
            }
            int64_t v29 = v25;
            int64_t v30 = v26;
            int64_t v31 = *(int64_t *)(v4 + 16); // 0x40a0af
            uint64_t v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30); // 0x40a0b3
            uint64_t v33 = *(int64_t *)(v31 + 8 * v27); // 0x40a0b7
            int64_t v34; // 0x40a050
            int64_t v35; // 0x40a050
            while (v33 != v32) {
                // 0x40a0c1
                v34 = v30;
                v35 = v28;
                if (v33 >= v32) {
                    goto lab_0x40a0a0;
                }
                int64_t v36 = v30 - 1; // 0x40a0c7
                int64_t v37 = v29 - 1; // 0x40a0cb
                *(int64_t *)(v31 + 8 * v37) = v32;
                v28 = -v30;
                v21 = v36;
                v22 = v37;
                if (v28 >= 0) {
                    // break (via goto) -> 0x40a0e0
                    goto lab_0x40a0e0_2;
                }
                v21 = v26;
                v22 = v25;
                if (v27 < 0) {
                    // break (via goto) -> 0x40a0e0
                    goto lab_0x40a0e0_2;
                }
                // 0x40a0aa
                v29 = v37;
                v30 = v36;
                v31 = *(int64_t *)(v4 + 16);
                v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30);
                v33 = *(int64_t *)(v31 + 8 * v27);
            }
            // 0x40a180
            v34 = v30 - 1;
            v35 = -v30;
          lab_0x40a0a0:
            // 0x40a0a0
            v24 = v35;
            v26 = v34;
            v23 = v27;
            v25 = v29;
            v21 = v26;
            v22 = v29;
            if (v24 >= 0) {
                // break -> 0x40a0e0
                break;
            }
        }
    }
  lab_0x40a0e0_2:;
    int64_t v38 = v22; // 0x40a0e3
    if (v21 >= 0) {
        int64_t v39 = v21 + 1; // 0x40a0e5
        int64_t v40 = *(int64_t *)(v4 + 16); // 0x40a0e9
        int64_t v41 = *(int64_t *)(v1 + 16); // 0x40a0ed
        int64_t v42 = v22 - v39; // 0x40a0f2
        memcpy((int64_t *)(v40 + 8 * v42), (int64_t *)v41, 8 * (int32_t)v39);
        v38 = v42;
    }
    int64_t v43 = *v5; // 0x40a106
    int64_t v44 = v43 - 1; // 0x40a10f
    int64_t v45 = 2 * *v2 + v44; // 0x40a10f
    int64_t v46 = v45 - v38 + 1; // 0x40a11a
    if (v46 == 0) {
      lab_0x40a154:
        // 0x40a154
        return 0;
    }
    int64_t v47 = *(int64_t *)(v4 + 16); // 0x40a127
    *v5 = v46 + v43;
    int64_t v48 = v44; // 0x40a12f
    int64_t v49 = v46; // 0x40a12f
    int64_t v50 = v45; // 0x40a12f
    while (true) {
        int64_t v51 = v50;
        int64_t v52 = v49;
        uint64_t v53 = *(int64_t *)(8 * v51 + v47); // 0x40a130
        uint64_t v54 = *(int64_t *)(8 * v48 + v47); // 0x40a134
        int64_t v55 = 8 * (v52 + v48) + v47; // 0x40a13c
        while (v53 > v54) {
            // 0x40a145
            *(int64_t *)v55 = v53;
            int64_t v56 = v52 - 1; // 0x40a14c
            if (v56 == 0) {
                return 0;
            }
            v51--;
            v52 = v56;
            v53 = *(int64_t *)(8 * v51 + v47);
            v54 = *(int64_t *)(8 * v48 + v47);
            v55 = 8 * (v52 + v48) + v47;
        }
        // 0x40a160
        *(int64_t *)v55 = v54;
        int64_t v57 = v48 - 1; // 0x40a163
        v48 = v57;
        v49 = v52;
        v50 = v51;
        if (v57 < 0) {
            // 0x40a169
            memcpy((int64_t *)v47, (int64_t *)(v47 + 8 * v38), 8 * (int32_t)v52);
            return 0;
        }
    }
    // 0x40a154
    int64_t v58; // 0x40a050
    int64_t result = v58;
    return result;
}
// Address range: 0x40a220 - 0x40a474
int64_t function_40a220(int128_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 24 * a3; // 0x40a234
    int64_t * v2 = (int64_t *)(a2 + 40); // 0x40a23c
    int64_t v3 = *v2 + v1; // 0x40a244
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x40a24b
    int64_t v5 = *v4 + 1; // 0x40a258
    int128_t v6 = v5; // bp-120, 0x40a25c
    int64_t * mem = malloc(8 * (int32_t)v5); // 0x40a265
    if (mem == NULL) {
        // 0x40a34a
        return 12;
    }
    int64_t v7 = (int64_t)mem; // 0x40a265
    int64_t * v8 = (int64_t *)(a2 + 48); // 0x40a278
    int64_t v9 = v1 + 8;
    *(int64_t *)(*v8 + v9) = -1;
    int64_t v10 = a2 + 8 + 16 * a3;
    uint32_t v11 = *(int32_t *)v10; // 0x40a293
    int64_t v12 = v10; // 0x40a29e
    if ((v11 & 0x3ff00) != 0) {
        // 0x40a3c0
        if (*v4 == 0) {
            goto lab_0x40a410;
        } else {
            int64_t v13 = *(int64_t *)*(int64_t *)(v3 + 16); // 0x40a3cb
            v12 = v10;
            if ((*(char *)(a2 + 10 + 16 * v13) & 4) == 0) {
                int64_t result = function_409450(a2, a3, a3, a3, (int64_t)(v11 / 256 % 1024)); // 0x40a3f4
                if ((int32_t)result != 0) {
                    // 0x40a34a
                    return result;
                }
                // 0x40a401
                v12 = 17 * a3 + 8;
            }
            goto lab_0x40a2a4;
        }
    } else {
        goto lab_0x40a2a4;
    }
  lab_0x40a2a4:;
    // 0x40a2a4
    int64_t v14; // 0x40a220
    int64_t v15; // 0x40a220
    if ((*(char *)v12 & 8) == 0) {
        goto lab_0x40a410;
    } else {
        int64_t v16 = *v2; // 0x40a2ae
        int64_t v17 = v16 + v1; // 0x40a2b2
        if (*(int64_t *)(v17 + 8) < 1) {
            goto lab_0x40a410;
        } else {
            int64_t v18 = 0;
            int64_t v19 = *(int64_t *)(*(int64_t *)(v17 + 16) + 8 * v18); // 0x40a317
            int64_t v20 = *v8; // 0x40a31b
            int64_t v21 = 24 * v19; // 0x40a323
            int64_t v22 = v20 + v21; // 0x40a327
            int64_t v23 = *(int64_t *)(v22 + 8); // 0x40a32a
            int64_t v24 = 0; // 0x40a332
            int64_t v25 = v18; // 0x40a332
            int64_t v26 = v19; // 0x40a332
            int64_t v27 = v21; // 0x40a332
            int64_t v28 = v22; // 0x40a332
            int64_t v29 = v23; // 0x40a332
            int64_t v30; // 0x40a220
            int64_t v31; // 0x40a378
            int64_t v32; // 0x40a382
            int64_t v33; // 0x40a317
            int64_t v34; // 0x40a323
            int64_t v35; // 0x40a327
            int64_t v36; // 0x40a32a
            if (v23 == -1) {
                // 0x40a378
                v31 = v16 + v1;
                v32 = v18;
                v32++;
                v30 = 1;
                if (*(int64_t *)(v31 + 8) <= v32) {
                    // break (via goto) -> 0x40a38c
                    goto lab_0x40a38c;
                }
                // 0x40a313
                v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                v34 = 24 * v33;
                v35 = v34 + v20;
                v36 = *(int64_t *)(v35 + 8);
                v24 = 1;
                v25 = v32;
                v26 = v33;
                v27 = v34;
                v28 = v35;
                v29 = v36;
                while (v36 == -1) {
                    // 0x40a378
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x40a38c
                        goto lab_0x40a38c;
                    }
                    // 0x40a313
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                }
            }
            int64_t v37 = v29;
            int64_t result2; // 0x40a220
            int64_t v38; // 0x40a220
            int128_t v39; // bp-88, 0x40a220
            int64_t v40; // 0x40a341
            if (v37 != 0) {
                // 0x40a2d0
                v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                v38 = *(int64_t *)(v28 + 16);
            } else {
                // 0x40a339
                v40 = function_40a220(&v39, a2, v26, v37);
                int64_t v41; // 0x40a220
                v38 = v41;
                result2 = v40;
                if ((int32_t)v40 != 0) {
                    // 0x40a34a
                    return result2;
                }
            }
            int64_t v42 = function_40a050((int64_t *)&v6, &v39); // 0x40a2ec
            result2 = v42;
            while ((int32_t)v42 == 0) {
                int64_t v43 = v38;
                int64_t v44 = v24; // 0x40a2ff
                if (*(int64_t *)(v27 + 8 + *v8) == 0) {
                    // 0x40a360
                    free((int64_t *)v43);
                    v44 = 1;
                }
                int64_t v45 = *v2; // 0x40a301
                int64_t v46 = v25 + 1; // 0x40a305
                int64_t v47 = v45 + v1; // 0x40a309
                int64_t v48 = v45; // 0x40a311
                if (*(int64_t *)(v47 + 8) <= v46) {
                    // break -> 0x40a38c
                    break;
                }
                v18 = v46;
                int64_t v49 = v43;
                v19 = *(int64_t *)(*(int64_t *)(v47 + 16) + 8 * v18);
                v20 = *v8;
                v21 = 24 * v19;
                v22 = v20 + v21;
                v23 = *(int64_t *)(v22 + 8);
                v24 = v44;
                v25 = v18;
                v26 = v19;
                v27 = v21;
                v28 = v22;
                v29 = v23;
                if (v23 == -1) {
                    // 0x40a378
                    v31 = v48 + v1;
                    v32 = v18;
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x40a38c
                        goto lab_0x40a38c;
                    }
                    // 0x40a313
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                    while (v36 == -1) {
                        // 0x40a378
                        v32++;
                        v30 = 1;
                        if (*(int64_t *)(v31 + 8) <= v32) {
                            // break (via goto) -> 0x40a38c
                            goto lab_0x40a38c;
                        }
                        // 0x40a313
                        v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                        v34 = 24 * v33;
                        v35 = v34 + v20;
                        v36 = *(int64_t *)(v35 + 8);
                        v24 = 1;
                        v25 = v32;
                        v26 = v33;
                        v27 = v34;
                        v28 = v35;
                        v29 = v36;
                    }
                }
                // 0x40a334
                v37 = v29;
                if (v37 != 0) {
                    // 0x40a2d0
                    v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                    v38 = *(int64_t *)(v28 + 16);
                } else {
                    // 0x40a339
                    v40 = function_40a220(&v39, a2, v26, v37);
                    v38 = v49;
                    result2 = v40;
                    if ((int32_t)v40 != 0) {
                        // 0x40a34a
                        return result2;
                    }
                }
                // 0x40a2e2
                v42 = function_40a050((int64_t *)&v6, &v39);
                result2 = v42;
            }
            // 0x40a34a
            return result2;
          lab_0x40a38c:
            // 0x40a38c
            if ((char)function_408500((int64_t)&v6, a3) == 0) {
                // 0x40a34a
                return 12;
            }
            int64_t v50 = *v8; // 0x40a3a1
            v15 = v50;
            if ((char)a4 == 1 || (char)v30 == 0) {
                goto lab_0x40a425;
            } else {
                // 0x40a3b5
                *(int64_t *)(v50 + v9) = 0;
                v14 = 0x100000000 * v7 >> 32;
                goto lab_0x40a439;
            }
        }
    }
  lab_0x40a410:
    // 0x40a410
    if ((char)function_408500((int64_t)&v6, a3) == 0) {
        // 0x40a34a
        return 12;
    }
    // 0x40a421
    v15 = *v8;
    goto lab_0x40a425;
  lab_0x40a425:;
    int128_t v51 = __asm_movdqa(0); // 0x40a425
    int64_t v52 = v15 + v1;
    __asm_movups(*(int128_t *)v52, v51);
    int64_t v53 = 0x100000000 * v7 >> 32;
    *(int64_t *)(v52 + 16) = v53;
    v14 = v53;
    goto lab_0x40a439;
  lab_0x40a439:;
    int128_t v54 = __asm_movdqa(0); // 0x40a442
    *(int64_t *)((int64_t)a1 + 16) = v14;
    *a1 = (int128_t)__asm_movaps(v54);
    return 0;
}
// Address range: 0x40a480 - 0x40a5bf
int64_t function_40a480(int64_t a1, int64_t * a2, int64_t a3, uint32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40a497
    int64_t v3 = *v2; // 0x40a497
    int64_t size = 8 * v3; // 0x40a4a4
    int128_t v4 = v3; // bp-72, 0x40a4ac
    int64_t * mem = malloc((int32_t)size); // 0x40a4b1
    if (mem == NULL) {
        // 0x40a5ad
        return 12;
    }
    int64_t * v5 = (int64_t *)(v1 + 16);
    if (v3 < 1) {
      lab_0x40a54d:
        // 0x40a54d
        free((int64_t *)*v5);
        int128_t v6 = __asm_movdqa(0); // 0x40a55b
        *v5 = (int64_t)mem;
        *(int128_t *)a2 = (int128_t)__asm_movaps(v6);
        return 0;
    }
    int64_t v7 = &v4;
    int64_t v8 = size; // 0x40a480
    int64_t v9 = 0; // 0x40a543
    int64_t v10; // 0x40a480
    int64_t v11; // 0x40a480
    int64_t v12; // 0x40a4e0
    while (true) {
      lab_0x40a4d0:;
        int64_t v13 = *(int64_t *)(*v5 + 8 * v9); // 0x40a4d4
        v12 = *(int64_t *)(a1 + 48) + 24 * v13;
        uint64_t v14 = *(int64_t *)(v12 + 8); // 0x40a4e4
        if (v14 >= 1) {
            int64_t v15 = 0;
            int64_t v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16)); // 0x40a509
            int64_t v17 = 16 * v16 + v8; // 0x40a514
            int64_t v18; // 0x40a53a
            if ((int32_t)*(char *)(v17 + 8) == a4) {
                // 0x40a521
                if (*(int64_t *)v17 == a3) {
                    if (v16 == -1) {
                        goto lab_0x40a580;
                    } else {
                        // 0x40a52c
                        v18 = function_409b80(a1, v7, v13, a3, (int64_t)a4);
                        v11 = a1;
                        v10 = v18;
                        if ((int32_t)v18 != 0) {
                            goto lab_0x40a58e_2;
                        } else {
                            goto lab_0x40a543;
                        }
                    }
                }
            }
            int64_t v19 = v15 + 1; // 0x40a500
            while (v14 != v19) {
                // 0x40a509
                v15 = v19;
                v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16));
                v17 = 16 * v16 + v8;
                if ((int32_t)*(char *)(v17 + 8) == a4) {
                    // 0x40a521
                    if (*(int64_t *)v17 == a3) {
                        if (v16 == -1) {
                            goto lab_0x40a580;
                        } else {
                            // 0x40a52c
                            v18 = function_409b80(a1, v7, v13, a3, (int64_t)a4);
                            v11 = a1;
                            v10 = v18;
                            if ((int32_t)v18 != 0) {
                                goto lab_0x40a58e_2;
                            } else {
                                goto lab_0x40a543;
                            }
                        }
                    }
                }
                // 0x40a500
                v19 = v15 + 1;
            }
        }
        goto lab_0x40a580;
    }
  lab_0x40a58e_2:
    // 0x40a58e
    free(mem);
    return v10 & 0xffffffff;
  lab_0x40a580:;
    int64_t v20 = function_40a050((int64_t *)&v4, (int128_t *)v12); // 0x40a585
    v11 = v7;
    v10 = v20;
    if ((int32_t)v20 != 0) {
        // break -> 0x40a58e
        goto lab_0x40a58e_2;
    }
    goto lab_0x40a543;
  lab_0x40a543:
    // 0x40a543
    v9++;
    v8 = v11;
    if (*v2 <= v9) {
        goto lab_0x40a54d;
    }
    goto lab_0x40a4d0;
}
// Address range: 0x40a5c0 - 0x40a772
int64_t function_40a5c0(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40a5c0
    int64_t v2 = *v1; // 0x40a5c0
    if (v2 == 0) {
        // 0x40a688
        return 0;
    }
    int64_t * v3 = (int64_t *)(a3 + 8); // 0x40a5cf
    int64_t v4 = *v3; // 0x40a5cf
    if (v4 == 0) {
        // 0x40a688
        return 0;
    }
    int64_t v5 = (int64_t)a1;
    int64_t v6 = v4 + v2; // 0x40a5de
    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40a5f3
    int64_t v8 = *v7; // 0x40a5f3
    int64_t * v9 = (int64_t *)(v5 + 16); // 0x40a5fa
    int64_t v10 = *v9; // 0x40a5fa
    int64_t v11 = v8; // 0x40a605
    int64_t v12 = v10; // 0x40a605
    int64_t v13 = v4; // 0x40a605
    int64_t v14 = v2; // 0x40a605
    if (v8 + v6 > v5) {
        int64_t v15 = v6 + v5; // 0x40a73a
        int64_t * mem = realloc((int64_t *)v10, 8 * (int32_t)v15); // 0x40a745
        if (mem == NULL) {
            // 0x40a688
            return 12;
        }
        // 0x40a752
        v12 = (int64_t)mem;
        v11 = *v7;
        v14 = *v1;
        *v9 = v12;
        *(int64_t *)a1 = v15;
        v13 = *v3;
    }
    int64_t v16 = *(int64_t *)(a2 + 16); // 0x40a60b
    int64_t v17 = *(int64_t *)(a3 + 16); // 0x40a60f
    int64_t v18 = v13 - 1; // 0x40a618
    int64_t v19 = v18; // 0x40a62c
    int64_t v20 = v11 - 1; // 0x40a62c
    int64_t v21 = *(int64_t *)(v17 + 8 * v18); // 0x40a62c
    int64_t v22 = v13 + v11 + v14; // 0x40a62c
    int64_t v23 = v14 - 1; // 0x40a62c
    int64_t v24; // 0x40a5c0
    int64_t v25; // 0x40a5c0
    int64_t v26; // 0x40a5c0
    int64_t v27; // 0x40a5c0
    int64_t v28; // 0x40a5c0
    int64_t v29; // 0x40a5c0
    int64_t v30; // 0x40a5c0
    int64_t v31; // 0x40a5c0
    int64_t v32; // 0x40a5c0
    int64_t v33; // 0x40a5c0
    int64_t v34; // 0x40a5c0
    int64_t v35; // 0x40a5c0
    int64_t v36; // 0x40a5c0
    int64_t v37; // 0x40a5c0
    while (true) {
      lab_0x40a630:;
        int64_t v38 = v21;
        int64_t v39 = *(int64_t *)(8 * v23 + v16);
        v26 = v24;
        v27 = v25;
        v32 = v19;
        v34 = v20;
        v21 = v38;
        v36 = v22;
        v30 = v39;
        v28 = v23;
        v33 = v19;
        v35 = v20;
        v37 = v22;
        v31 = v38;
        v29 = v23;
        if (v39 == v38) {
            goto lab_0x40a646;
        } else {
            goto lab_0x40a635;
        }
    }
  lab_0x40a6a0_4:;
    int64_t v40 = *v7; // 0x40a6a0
    int64_t v41 = *v1 + v40 + *v3; // 0x40a6ab
    int64_t v42 = v40 - 1; // 0x40a6b0
    int64_t v43; // 0x40a5c0
    int64_t v44 = v41 - v43; // 0x40a6b8
    *v7 = v44 + v40;
    int64_t v45; // 0x40a5c0
    int64_t v46; // 0x40a5c0
    if (v42 < 0 || v44 < 1) {
        // 0x40a720
        v46 = 8 * v44;
        v45 = v12;
    } else {
        int64_t v47 = v42; // 0x40a5c0
        int64_t v48 = v44; // 0x40a5c0
        int64_t v49 = v41 - 1; // 0x40a5c0
        while (true) {
            int64_t v50 = v47;
            int64_t v51 = v49;
            int64_t v52 = v48;
            uint64_t v53 = *(int64_t *)(8 * v51 + v12); // 0x40a6d0
            uint64_t v54 = *(int64_t *)(8 * v50 + v12); // 0x40a6d4
            int64_t v55 = 8 * (v52 + v50) + v12; // 0x40a6dc
            while (v53 > v54) {
                // 0x40a6e5
                *(int64_t *)v55 = v53;
                int64_t v56 = v52 - 1; // 0x40a6ec
                if (v56 == 0) {
                    // break (via goto) -> 0x40a6f2
                    goto lab_0x40a6f2;
                }
                v51--;
                v52 = v56;
                v53 = *(int64_t *)(8 * v51 + v12);
                v54 = *(int64_t *)(8 * v50 + v12);
                v55 = 8 * (v52 + v50) + v12;
            }
            // 0x40a700
            *(int64_t *)v55 = v54;
            v47 = v50 - 1;
            v48 = v52;
            v49 = v51;
            if (v50 == 0) {
                // 0x40a70d
                v46 = 8 * v52;
                v45 = *v9;
                goto lab_0x40a724;
            }
        }
      lab_0x40a6f2:
        // 0x40a6f2
        v46 = 0;
        v45 = *v9;
    }
    goto lab_0x40a724;
  lab_0x40a668:;
    // 0x40a668
    int64_t v58; // 0x40a5c0
    int64_t v59 = v58 - 1; // 0x40a668
    uint64_t v60; // 0x40a5c0
    *(int64_t *)(8 * v59 + v12) = v60;
    int64_t v61; // 0x40a5c0
    int64_t v62 = v61; // 0x40a66c
    int64_t v63 = v59; // 0x40a66c
    goto lab_0x40a670;
  lab_0x40a646:
    // 0x40a646
    v60 = v31;
    v58 = v37;
    int64_t v72 = v35; // 0x40a649
    v61 = v35;
    if (v35 >= 0) {
        int64_t v73 = v72;
        uint64_t v74 = *(int64_t *)(8 * v73 + v12); // 0x40a65a
        while (v74 > v60) {
            // 0x40a650
            v72 = v73 - 1;
            v61 = -1;
            if (v73 == 0) {
                goto lab_0x40a668;
            }
            v73 = v72;
            v74 = *(int64_t *)(8 * v73 + v12);
        }
        // 0x40a663
        v61 = v73;
        v62 = v73;
        v63 = v58;
        if (v74 == v60) {
            goto lab_0x40a670;
        } else {
            goto lab_0x40a668;
        }
    } else {
        goto lab_0x40a668;
    }
  lab_0x40a635:;
    int64_t v75 = v28;
    v22 = v36;
    v20 = v34;
    v19 = v32;
    int64_t v76 = v27;
    int64_t v77 = v26;
    int64_t v70; // 0x40a5c0
    int64_t v69; // 0x40a5c0
    int64_t v66; // 0x40a5c0
    int64_t v67; // 0x40a5c0
    int64_t v68; // 0x40a5c0
    if (v77 < v76) {
        int64_t v78 = v19 - 1; // 0x40a637
        v66 = v78;
        v67 = v20;
        v68 = v22;
        v69 = v30;
        v70 = v75;
        if (v78 < 0) {
            // break -> 0x40a6a0
            goto lab_0x40a6a0_4;
        }
        goto lab_0x40a63d;
    } else {
        // 0x40a690
        v23 = v75 - 1;
        v24 = v77;
        v25 = v76;
        v43 = v22;
        if (v23 < 0) {
            // break -> 0x40a6a0
            goto lab_0x40a6a0_4;
        }
        goto lab_0x40a630;
    }
  lab_0x40a670:;
    int64_t v64 = v29 - 1; // 0x40a670
    v43 = v63;
    if (v64 < 0) {
        // break -> 0x40a6a0
        goto lab_0x40a6a0_4;
    }
    int64_t v65 = v33 - 1; // 0x40a676
    v43 = v63;
    if (v65 < 0) {
        // break -> 0x40a6a0
        goto lab_0x40a6a0_4;
    }
    // 0x40a67c
    v66 = v65;
    v67 = v62;
    v68 = v63;
    v69 = *(int64_t *)(8 * v64 + v16);
    v70 = v64;
    goto lab_0x40a63d;
  lab_0x40a63d:;
    int64_t v71 = *(int64_t *)(8 * v66 + v17); // 0x40a63d
    v26 = v69;
    v27 = v71;
    v32 = v66;
    v34 = v67;
    v21 = v71;
    v36 = v68;
    v30 = v69;
    v28 = v70;
    v33 = v66;
    v35 = v67;
    v37 = v68;
    v31 = v69;
    v29 = v70;
    if (v69 != v71) {
        goto lab_0x40a635;
    } else {
        goto lab_0x40a646;
    }
  lab_0x40a724:;
    int64_t v57 = v45;
    memcpy((int64_t *)v57, (int64_t *)(v57 + 8 * v43), (int32_t)v46);
    // 0x40a688
    return 0;
}
// Address range: 0x40a780 - 0x40a857
int64_t function_40a780(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t v2 = a2;
    int64_t v3; // 0x40a780
    int64_t v4; // 0x40a780
    int32_t v5; // 0x40a780
    int64_t v6; // 0x40a780
    if (v2 == 15) {
        int64_t * mem = malloc(968); // 0x40a818
        if (mem == NULL) {
            // 0x40a7f9
            return 0;
        }
        int64_t v7 = (int64_t)mem; // 0x40a818
        *(int64_t *)a1 = v7;
        *mem = 968;
        v5 = 1;
        v6 = 0;
        v4 = 8;
        v3 = v7;
    } else {
        int64_t v8 = 0x100000000 * a2;
        int64_t v9 = v8 >> 26; // 0x40a799
        v5 = v2 + 1;
        v6 = v9;
        v4 = v9 | 8;
        v3 = v8 >> 32;
    }
    int64_t v10 = a3;
    int64_t v11 = a4;
    *(int32_t *)a2 = v5;
    int64_t result = v3 + v4; // 0x40a7a6
    int64_t v12 = v3 + v6;
    *(int64_t *)(v12 + 8) = 0;
    *(int64_t *)(v12 + 16) = v10;
    *(int64_t *)(v12 + 24) = v11;
    __asm_movups(*(int128_t *)(v12 + 48), __asm_movdqu(*(int128_t *)&v1));
    char * v13 = (char *)(v12 + 58); // 0x40a7cb
    *v13 = *v13 & -13;
    *(int64_t *)(v12 + 32) = 0;
    *(int64_t *)(v12 + 40) = 0;
    *(int64_t *)(v12 + 64) = -1;
    if (a3 != 0) {
        // 0x40a7ee
        *(int64_t *)v10 = result;
    }
    // 0x40a7f1
    if (a4 != 0) {
        // 0x40a7f6
        *(int64_t *)v11 = result;
    }
    // 0x40a7f9
    return result;
}
// Address range: 0x40a860 - 0x40a909
int64_t function_40a860(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 112; // 0x40a864
    int64_t v2 = a2 + 128; // 0x40a86a
    int64_t v3 = function_40a780(v1, v2, 0, 0, a1 + 40); // 0x40a89d
    int64_t v4 = v3; // bp-48, 0x40a8a2
    if (v3 == 0) {
        // 0x40a8ed
        return 0;
    }
    *(int64_t *)v3 = a1;
    int64_t v5 = *&v4; // 0x40a8ad
    char * v6 = (char *)(v5 + 50); // 0x40a8b0
    *v6 = *v6 | 4;
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x40a8b4
    int64_t v8; // 0x40a860
    int64_t v9; // 0x40a860
    int64_t result; // 0x40a860
    int64_t v10; // 0x40a860
    int64_t v11; // 0x40a860
    int64_t v12; // 0x40a860
    int64_t v13; // 0x40a860
    int64_t v14; // 0x40a860
    int64_t v15; // 0x40a8d9
    int64_t v16; // 0x40a8dc
    int64_t v17; // 0x40a8cb
    int64_t v18; // 0x40a8cb
    if (v7 != 0) {
        // 0x40a888
        v13 = v7;
        v10 = v5;
        v9 = v5 + 8;
    } else {
        // 0x40a8cb
        v18 = *(int64_t *)(a1 + 16);
        v11 = v5;
        v12 = v5;
        v8 = v18;
        if (v18 != 0 != v18 != 0) {
            v14 = a1;
            v15 = *(int64_t *)v14;
            if (v15 == 0) {
                // 0x40a8e8
                result = v4;
                return result;
            }
            // 0x40a8c8
            v16 = *(int64_t *)v11;
            v17 = *(int64_t *)(v15 + 16);
            v11 = v16;
            v12 = v16;
            v8 = v17;
            while (v17 != 0 != v17 != v14) {
                // 0x40a8d9
                v14 = v15;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x40a8e8
                    result = v4;
                    return result;
                }
                // 0x40a8c8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
            }
        }
        // 0x40a900
        v13 = v8;
        v10 = v12;
        v9 = v12 + 16;
    }
    int64_t v19 = v13;
    int64_t v20 = function_40a780(v1, v2, 0, 0, v19 + 40); // 0x40a89d
    int64_t * v21 = (int64_t *)v9; // 0x40a8a2
    *v21 = v20;
    result = 0;
    while (v20 != 0) {
        int64_t v22 = v19;
        *(int64_t *)v20 = v10;
        v5 = *v21;
        v6 = (char *)(v5 + 50);
        *v6 = *v6 | 4;
        v7 = *(int64_t *)(v22 + 8);
        if (v7 != 0) {
            // 0x40a888
            v13 = v7;
            v10 = v5;
            v9 = v5 + 8;
        } else {
            // 0x40a8cb
            v18 = *(int64_t *)(v22 + 16);
            v11 = v5;
            int64_t v23 = v22; // 0x40a8d2
            v12 = v5;
            v8 = v18;
            if (v18 != 0 != v18 != 0) {
                v14 = v23;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x40a8e8
                    result = v4;
                    return result;
                }
                // 0x40a8c8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
                while (v17 != 0 != v17 != v14) {
                    // 0x40a8d9
                    v14 = v15;
                    v15 = *(int64_t *)v14;
                    if (v15 == 0) {
                        // 0x40a8e8
                        result = v4;
                        return result;
                    }
                    // 0x40a8c8
                    v16 = *(int64_t *)v11;
                    v17 = *(int64_t *)(v15 + 16);
                    v11 = v16;
                    v12 = v16;
                    v8 = v17;
                }
            }
            // 0x40a900
            v13 = v8;
            v10 = v12;
            v9 = v12 + 16;
        }
        // 0x40a88f
        v19 = v13;
        v20 = function_40a780(v1, v2, 0, 0, v19 + 40);
        v21 = (int64_t *)v9;
        *v21 = v20;
        result = 0;
    }
  lab_0x40a8ed:
    // 0x40a8ed
    return result;
}
// Address range: 0x40a910 - 0x40ab2a
int64_t function_40a910(int32_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = *(int64_t *)(a3 + 8); // 0x40a924
    int64_t v1; // 0x40a910
    int64_t v2; // 0x40a910
    int64_t v3; // 0x40a910
    int64_t v4; // 0x40a910
    int64_t v5; // 0x40a910
    int64_t v6; // bp-72, 0x40a910
    int64_t v7; // 0x40a910
    int64_t v8; // 0x40a95f
    int64_t v9; // 0x40a966
    int64_t v10; // 0x40a910
    int64_t v11; // 0x40a989
    int64_t v12; // 0x40a9a3
    if ((*(char *)(a2 + 56) & 16) == 0) {
        int64_t v13 = a2 + 128; // 0x40aab8
        int64_t v14 = a2 + 112; // 0x40aabf
        int64_t v15 = &v6;
        int64_t v16 = function_40a780(v14, v13, 0, 0, v15); // 0x40aae2
        int64_t v17 = function_40a780(v14, v13, 0, 0, v15); // 0x40aafc
        v10 = v15;
        v8 = v13;
        v11 = v16;
        v9 = v14;
        v12 = v17;
        v1 = v15;
        v7 = v13;
        v5 = v16;
        v2 = v17;
        v3 = v14;
        v4 = v17;
        if (result != 0) {
            goto lab_0x40a9ab;
        } else {
            goto lab_0x40a9c9;
        }
    } else {
        if (result == 0) {
            int64_t v18 = a2 + 128; // 0x40aa60
            int64_t v19 = a2 + 112; // 0x40aa67
            int64_t v20 = &v6;
            int64_t v21 = function_40a780(v19, v18, 0, 0, v20); // 0x40aa8a
            int64_t v22 = function_40a780(v19, v18, 0, 0, v20); // 0x40aaa4
            v1 = v20;
            v7 = v18;
            v5 = v21;
            v2 = v22;
            v3 = v19;
            v4 = v22;
            goto lab_0x40a9c9;
        } else {
            uint64_t v23 = *(int64_t *)(a3 + 40); // 0x40a940
            if (v23 > 63 || (*(int64_t *)(a2 + 160) & 1 << v23 % 64) == 0) {
                // 0x40aa47
                return result;
            }
            // 0x40a95f
            v8 = a2 + 128;
            v9 = a2 + 112;
            v10 = &v6;
            v11 = function_40a780(v9, v8, 0, 0, v10);
            v12 = function_40a780(v9, v8, 0, 0, v10);
            goto lab_0x40a9ab;
        }
    }
  lab_0x40a9ab:;
    int64_t v24 = function_40a780(v9, v8, (int32_t)result, (int32_t)v12, v10); // 0x40a9c1
    v1 = v10;
    v7 = v8;
    v5 = v11;
    v2 = v24;
    v3 = v9;
    v4 = v12;
    goto lab_0x40a9c9;
  lab_0x40a9c9:;
    int64_t v25 = function_40a780(v3, v7, (int32_t)v5, (int32_t)v2, v1); // 0x40a9e4
    int64_t result2; // 0x40a910
    if (v4 == 0 || v5 == 0 || v2 == 0 || v25 == 0) {
        // 0x40ab18
        *a1 = 12;
        result2 = 0;
    } else {
        int64_t v26 = *(int64_t *)(a3 + 40); // 0x40aa15
        *(int64_t *)(v4 + 40) = v26;
        *(int64_t *)(v5 + 40) = v26;
        char * v27 = (char *)(v4 + 50); // 0x40aa28
        char v28 = *(char *)(a3 + 50) & 8;
        *v27 = *v27 & -9 | v28;
        char * v29 = (char *)(v5 + 50); // 0x40aa3b
        *v29 = *v29 & -9 | v28;
        result2 = v25;
    }
    // 0x40aa47
    return result2;
}
// Address range: 0x40ab30 - 0x40abab
int64_t function_40ab30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40ab3c
    int64_t v2 = *v1; // 0x40ab3c
    int32_t result = 0; // bp-28, 0x40ab40
    int64_t v3; // 0x40ab30
    if (v2 != 0) {
        // 0x40ab4d
        if (*(char *)(v2 + 48) == 17) {
            int64_t v4 = function_40a910(&result, a1, v2, v3); // 0x40ab78
            *v1 = v4;
            if (v4 != 0) {
                // 0x40ab86
                *(int64_t *)v4 = a2;
            }
        }
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x40ab53
    int64_t v6 = *v5; // 0x40ab53
    if (v6 == 0 || *(char *)(v6 + 48) != 17) {
        // 0x40ab62
        return result;
    }
    int64_t v7 = function_40a910(&result, a1, v6, v3); // 0x40ab98
    *v5 = v7;
    if (v7 != 0) {
        // 0x40aba6
        *(int64_t *)v7 = a2;
    }
    // 0x40ab62
    return result;
}
// Address range: 0x40abb0 - 0x40ac2f
int64_t function_40abb0(int64_t a1, int64_t a2) {
    // 0x40abb0
    int128_t v1; // 0x40abb0
    int128_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40abb0
    *(int64_t *)(a1 + 8) = v4;
    if (v4 < 1) {
        int128_t v5 = __asm_pxor(v2, v2); // 0x40ac00
        *(int64_t *)(v3 + 16) = 0;
        __asm_movups(*(int128_t *)&v3, v5);
        return 0;
    }
    int64_t * v6 = (int64_t *)v3; // 0x40abcf
    *v6 = v4;
    int32_t size = 8 * (int32_t)v4; // 0x40abd5
    int64_t * mem = malloc(size); // 0x40abd5
    *(int64_t *)(v3 + 16) = (int64_t)mem;
    int64_t result; // 0x40abb0
    if (mem == NULL) {
        // 0x40ac18
        *(int64_t *)(v3 + 8) = 0;
        *v6 = 0;
        result = 12;
    } else {
        // 0x40abe3
        memcpy(mem, (int64_t *)*(int64_t *)(a2 + 16), size);
        result = 0;
    }
    // 0x40abf5
    return result;
}
// Address range: 0x40ac30 - 0x40adb2
int64_t function_40ac30(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40ac30
    int128_t v1; // 0x40ac30
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    if (a2 != 0) {
        int64_t * v4 = (int64_t *)(a2 + 8); // 0x40ac47
        int64_t v5 = *v4; // 0x40ac47
        if (a3 != 0 && v5 >= 1) {
            int64_t * v6 = (int64_t *)(a3 + 8); // 0x40ac5d
            uint64_t v7 = *v6; // 0x40ac5d
            if (v7 < 1) {
                // 0x40ad33
                return function_40abb0(v3, a2);
            }
            int64_t v8 = v7 + v5; // 0x40ac6d
            *a1 = v8;
            int64_t * mem = malloc(8 * (int32_t)v8); // 0x40ac7f
            int64_t v9 = (int64_t)mem; // 0x40ac7f
            *(int64_t *)(v3 + 16) = v9;
            if (mem == NULL) {
                // 0x40ad1a
                return 12;
            }
            int64_t v10 = *(int64_t *)(a2 + 16); // 0x40ac94
            int64_t v11 = 0;
            int64_t v12 = 0;
            int64_t v13 = v9;
            int64_t v14 = *(int64_t *)(a3 + 16); // 0x40acd8
            int64_t v15 = *(int64_t *)v10; // 0x40acdc
            int64_t v16 = *(int64_t *)(v14 + 8 * v11); // 0x40ace3
            int64_t v17; // 0x40ac30
            int64_t v18; // 0x40ac30
            if (v15 > v16) {
                // 0x40acec
                *(int64_t *)v13 = v16;
                v17 = v11 + 1;
                v18 = v12;
            } else {
                // 0x40aca8
                *(int64_t *)v13 = v15;
                v17 = v11 + (int64_t)(v15 == v16);
                v18 = v12 + 1;
            }
            int64_t v19 = 1; // 0x40acdf
            int64_t v20 = v18;
            int64_t v21 = v17;
            uint64_t v22 = *v4; // 0x40acba
            int64_t v23; // 0x40ac30
            while (v22 > v20) {
                int64_t v24 = v13 + 8; // 0x40acbe
                int64_t v25 = 8 * v20 + v10; // 0x40accb
                if (v7 <= v21) {
                    int64_t v26 = v22 - v20; // 0x40ad90
                    memcpy((int64_t *)v24, (int64_t *)v25, 8 * (int32_t)v26);
                    v23 = v26 + v19;
                    goto lab_0x40ad59;
                }
                v11 = v21;
                v12 = v20;
                v13 = v24;
                v14 = *(int64_t *)(a3 + 16);
                v15 = *(int64_t *)v25;
                v16 = *(int64_t *)(v14 + 8 * v11);
                if (v15 > v16) {
                    // 0x40acec
                    *(int64_t *)v13 = v16;
                    v17 = v11 + 1;
                    v18 = v12;
                } else {
                    // 0x40aca8
                    *(int64_t *)v13 = v15;
                    v17 = v11 + (int64_t)(v15 == v16);
                    v18 = v12 + 1;
                }
                // 0x40acba
                v19++;
                v20 = v18;
                v21 = v17;
                v22 = *v4;
            }
            int64_t v27 = *v6; // 0x40ad50
            v23 = v19;
            if (v27 > v21) {
                int64_t v28 = v27 - v21; // 0x40ad7b
                memcpy((int64_t *)(8 * v19 + v9), (int64_t *)(8 * v21 + v14), 8 * (int32_t)v28);
                v23 = v28 + v19;
            }
          lab_0x40ad59:
            // 0x40ad59
            *(int64_t *)(v3 + 8) = v23;
            return 0;
        }
        // 0x40acf8
        if (v5 >= 0 == (v5 != 0)) {
            // 0x40ad33
            return function_40abb0(v3, a2);
        }
    }
    if (a3 != 0) {
        int64_t v29 = *(int64_t *)(a3 + 8); // 0x40ad02
        if (v29 >= 0 == (v29 != 0)) {
            // 0x40ad33
            return function_40abb0(v3, a3);
        }
    }
    // 0x40ad09
    *(int64_t *)(v3 + 16) = 0;
    *(int128_t *)a1 = (int128_t)__asm_movaps(__asm_pxor(v2, v2));
    // 0x40ad1a
    return 0;
}
// Address range: 0x40adc0 - 0x40b0c0
int64_t function_40adc0(int128_t * a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40adce
    uint64_t v3 = *v2; // 0x40adce
    if (v3 == 0) {
        // 0x40b098
        *(int32_t *)a1 = 0;
        // 0x40ae67
        return 0;
    }
    uint64_t v4 = (int64_t)a4;
    int64_t v5 = v3 + (v4 & 0xffffffff); // 0x40adde
    int64_t v6 = v5; // 0x40ade2
    if (v3 >= 1) {
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x40ade4
        int64_t v8 = v7; // 0x40adec
        int64_t v9 = v5; // 0x40adec
        v9 += *(int64_t *)v8;
        v8 += 8;
        v6 = v9;
        while (v7 + 8 * v3 != v8) {
            // 0x40adf0
            v9 += *(int64_t *)v8;
            v8 += 8;
            v6 = v9;
        }
    }
    int64_t v10 = *(int64_t *)(a2 + 136) & v6; // 0x40ae11
    int64_t v11 = 24 * v10 + *(int64_t *)(a2 + 64); // 0x40ae1c
    uint64_t v12 = *(int64_t *)v11; // 0x40ae20
    if (v12 >= 1) {
        int64_t v13 = 0; // 0x40ae32
        int64_t v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16)); // 0x40ae41
        int64_t result; // 0x40adc0
        if (*(int64_t *)v14 == v6) {
            // 0x40ae4a
            if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                // 0x40ae57
                result = v14;
                if ((char)function_407f60(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                    // 0x40ae67
                    return result;
                }
            }
        }
        // 0x40ae38
        v13++;
        while (v13 != v12) {
            // 0x40ae41
            v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16));
            if (*(int64_t *)v14 == v6) {
                // 0x40ae4a
                if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                    // 0x40ae57
                    result = v14;
                    if ((char)function_407f60(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                        // 0x40ae67
                        return result;
                    }
                }
            }
            // 0x40ae38
            v13++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40ae8a
    if (mem == NULL) {
        // 0x40b018
        *(int32_t *)a1 = 12;
        // 0x40ae67
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40ae8a
    int64_t v15 = result2 + 8; // 0x40ae9b
    if ((int32_t)function_40abb0(v15, v1) != 0) {
        // 0x40b0b3
        free(mem);
        // 0x40b018
        *(int32_t *)a1 = 12;
        // 0x40ae67
        return 0;
    }
    char * v16 = (char *)(result2 + 104); // 0x40aeb6
    *v16 = *v16 & -16 | (char)a4 % 16;
    int64_t * v17 = (int64_t *)(result2 + 80); // 0x40aed6
    *v17 = v15;
    int64_t v18; // 0x40adc0
    int64_t v19; // 0x40adc0
    int64_t v20; // 0x40adc0
    int64_t v21; // 0x40adc0
    int64_t v22; // 0x40adc0
    int64_t v23; // 0x40adc0
    int64_t v24; // 0x40adc0
    int64_t v25; // 0x40adc0
    int64_t v26; // 0x40aee0
    int64_t v27; // 0x40adc0
    int64_t * v28; // 0x40adc0
    uint64_t v29; // 0x40af1a
    if (*v2 >= 1) {
        // 0x40aee0
        v26 = result2 + 24;
        v27 = result2 + 16;
        v28 = (int64_t *)v27;
        v23 = v1;
        v18 = 0;
        v21 = 0;
        while (true) {
          lab_0x40af00:
            // 0x40af00
            v22 = v21;
            int64_t v30 = v18;
            int64_t v31 = 16 * *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v22) + v23; // 0x40af0c
            int64_t v32 = v31 + 8; // 0x40af10
            uint32_t v33 = *(int32_t *)v32; // 0x40af10
            unsigned char v34 = *(char *)v32; // 0x40af13
            v25 = 1;
            v20 = v30;
            if (v34 == 1 == (v33 & 0x3ff00) == 0) {
                goto lab_0x40afde;
            } else {
                char v35 = 2 * *(char *)(v31 + 10) & 32 | *v16;
                *v16 = v35;
                if (v34 == 2) {
                    // 0x40b030
                    *v16 = v35 | 16;
                } else {
                    if (v34 == 4) {
                        // 0x40af64
                        *v16 = v35 | 64;
                    }
                }
                int64_t v36 = v34; // 0x40af13
                v25 = v36;
                v20 = v30;
                if ((v33 & 0x3ff00) == 0) {
                    goto lab_0x40afde;
                } else {
                    int64_t v37 = v36; // 0x40af79
                    int64_t v38 = v30; // 0x40af79
                    if (v15 == *v17) {
                        int64_t * mem2 = malloc(24); // 0x40b065
                        int64_t v39 = (int64_t)mem2; // 0x40b065
                        *v17 = v39;
                        if (mem2 == NULL) {
                            // 0x40b0a6
                            function_4096e0(result2);
                            goto lab_0x40b018;
                        }
                        // 0x40b074
                        if ((int32_t)function_40abb0(v39, v1) != 0) {
                          lab_0x40b018:
                            // 0x40b018
                            *(int32_t *)a1 = 12;
                            // 0x40ae67
                            return 0;
                        }
                        // 0x40b083
                        *v16 = *v16 | -128;
                        v37 = v1;
                        v38 = 0;
                    }
                    // 0x40af7f
                    v29 = (int64_t)(v33 / 256 & 0xff03ff);
                    v19 = v38;
                    v24 = v37;
                    if (v29 % 2 == 0) {
                        if (v4 % 2 == 0 || (v29 & 2) == 0) {
                            goto lab_0x40af93;
                        } else {
                            goto lab_0x40afb0;
                        }
                    } else {
                        if (v4 % 2 == 0) {
                            goto lab_0x40afb0;
                        } else {
                            if ((v29 & 2) != 0) {
                                goto lab_0x40afb0;
                            } else {
                                goto lab_0x40af93;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x40aff4:
    // 0x40aff4
    if ((int32_t)function_408630(a2, result2, v6) == 0) {
        // 0x40ae67
        return result2;
    }
    // 0x40b00a
    function_4096e0(result2);
    // 0x40b018
    *(int32_t *)a1 = 12;
    // 0x40ae67
    return 0;
  lab_0x40afde:;
    int64_t v40 = v22 + 1; // 0x40afde
    v23 = v25;
    v18 = v20;
    v21 = v40;
    if (v40 >= *v2) {
        // break -> 0x40aff4
        goto lab_0x40aff4;
    }
    goto lab_0x40af00;
  lab_0x40af93:
    if ((v4 & 2) == 0 == ((v29 & 16) != 0)) {
        goto lab_0x40afb0;
    } else {
        // 0x40af9e
        v25 = v24;
        v20 = v19;
        if ((v4 & 4) != 0 || (v29 & 64) == 0) {
            goto lab_0x40afde;
        } else {
            goto lab_0x40afb0;
        }
    }
  lab_0x40afb0:;
    int64_t v41 = v22 - v19; // 0x40afb3
    int64_t v42 = v24; // 0x40afb6
    if (v41 >= 0) {
        int64_t v43 = *v28; // 0x40afb8
        v42 = v24;
        if (v41 < v43) {
            // 0x40afc2
            *v28 = v43 - 1;
            function_409c80(v27, v26, v41);
            v42 = v26;
        }
    }
    // 0x40afda
    v25 = v42;
    v20 = v19 + 1;
    goto lab_0x40afde;
}
// Address range: 0x40b0c0 - 0x40b2a8
int64_t function_40b0c0(int32_t * a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40b0ce
    int64_t v3 = *v2; // 0x40b0ce
    if (v3 == 0) {
        // 0x40b294
        *a1 = 0;
        // 0x40b23f
        return 0;
    }
    int64_t v4 = v3; // 0x40b0db
    if (v3 >= 1) {
        int64_t v5 = *(int64_t *)(v1 + 16); // 0x40b0dd
        int64_t v6 = v5; // 0x40b0e5
        int64_t v7 = v3; // 0x40b0e5
        v7 += *(int64_t *)v6;
        v6 += 8;
        v4 = v7;
        while (v5 + 8 * v3 != v6) {
            // 0x40b0e8
            v7 += *(int64_t *)v6;
            v6 += 8;
            v4 = v7;
        }
    }
    int64_t v8 = *(int64_t *)(a2 + 136) & v4; // 0x40b104
    int64_t v9 = 24 * v8 + *(int64_t *)(a2 + 64); // 0x40b10f
    uint64_t v10 = *(int64_t *)v9; // 0x40b113
    if (v10 >= 1) {
        int64_t v11 = 0; // 0x40b122
        int64_t v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16)); // 0x40b128
        int64_t result; // 0x40b0c0
        int64_t v13; // 0x40b138
        if (*(int64_t *)v12 == v4) {
            // 0x40b131
            v13 = function_407f60(v12 + 8, v1, 3 * v8);
            result = v12;
            if ((char)v13 != 0) {
                // 0x40b23f
                return result;
            }
        }
        // 0x40b145
        v11++;
        while (v10 != v11) {
            // 0x40b128
            v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16));
            if (*(int64_t *)v12 == v4) {
                // 0x40b131
                v13 = function_407f60(v12 + 8, v1, 3 * v8);
                result = v12;
                if ((char)v13 != 0) {
                    // 0x40b23f
                    return result;
                }
            }
            // 0x40b145
            v11++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40b158
    if (mem == NULL) {
        // 0x40b288
        *a1 = 12;
        // 0x40b23f
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40b158
    int64_t v14 = result2 + 8; // 0x40b169
    if ((int32_t)function_40abb0(v14, v1) != 0) {
        // 0x40b280
        free(mem);
        // 0x40b288
        *a1 = 12;
        // 0x40b23f
        return 0;
    }
    uint64_t v15 = *v2; // 0x40b180
    *(int64_t *)(result2 + 80) = v14;
    char v16; // 0x40b0c0
    int64_t v17; // 0x40b0c0
    int64_t v18; // 0x40b0c0
    int64_t v19; // 0x40b199
    char * v20; // 0x40b0c0
    if (v15 >= 1) {
        int64_t v21 = *(int64_t *)(v1 + 16); // 0x40b191
        v19 = v21 + 8 * v15;
        v20 = (char *)(result2 + 104);
        v17 = v21;
        while (true) {
          lab_0x40b1e4_2:
            // 0x40b1e4
            v18 = v17;
            int64_t v22 = 16 * *(int64_t *)v18 + v21; // 0x40b1eb
            int64_t v23 = v22 + 8; // 0x40b1ee
            char v24 = *(char *)v23; // 0x40b1ee
            if (v24 != 1) {
                char v25 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                *v20 = v25;
                if (v24 == 2) {
                    // 0x40b258
                    *v20 = v25 | 16;
                    goto lab_0x40b1db;
                } else {
                    if (v24 != 4) {
                        // 0x40b268
                        v16 = v25;
                        if (v24 == 12) {
                            goto lab_0x40b220;
                        } else {
                            // 0x40b26d
                            v16 = v25;
                            if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                                goto lab_0x40b1db;
                            } else {
                                goto lab_0x40b220;
                            }
                        }
                    } else {
                        // 0x40b1d5
                        *v20 = v25 | 64;
                        goto lab_0x40b1db;
                    }
                }
            } else {
                // 0x40b1f7
                if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                    goto lab_0x40b1db;
                } else {
                    char v26 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                    *v20 = v26;
                    v16 = v26;
                    goto lab_0x40b220;
                }
            }
        }
    }
  lab_0x40b22d_2:
    // 0x40b22d
    if ((int32_t)function_408630(a2, result2, v4) == 0) {
        // 0x40b23f
        return result2;
    }
    // 0x40b29e
    function_4096e0(result2);
    // 0x40b288
    *a1 = 12;
    // 0x40b23f
    return 0;
  lab_0x40b1db:;
    int64_t v27 = v18 + 8; // 0x40b1db
    if (v19 == v27) {
        // break -> 0x40b22d
        goto lab_0x40b22d_2;
    }
    // 0x40b1e4
    v17 = v27;
    goto lab_0x40b1e4_2;
  lab_0x40b220:;
    int64_t v28 = v18 + 8; // 0x40b220
    *v20 = v16 | -128;
    if (v19 == v28) {
        // break -> 0x40b22d
        goto lab_0x40b22d_2;
    }
    // 0x40b1e4
    v17 = v28;
    goto lab_0x40b1e4_2;
}
// Address range: 0x40b2b0 - 0x40b358
int64_t function_40b2b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40b2b0
    if (a4 < 1) {
        // 0x40b348
        return 0;
    }
    int64_t v1 = 0; // 0x40b2b0
    int64_t result; // 0x40b2b0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = 8 * v2; // 0x40b329
        int64_t * v4 = (int64_t *)(v3 + a2); // 0x40b329
        int64_t v5 = *v4; // 0x40b329
        int64_t v6 = *(int64_t *)(v3 + a3); // 0x40b32e
        if (v5 != 0) {
            if (v6 != 0) {
                // 0x40b2dd
                int64_t v7; // bp-72, 0x40b2b0
                int64_t v8 = function_40ac30(&v7, v5 + 8, v6 + 8, a4); // 0x40b2ea
                int32_t v9 = v8; // 0x40b2ef
                int32_t v10 = v9; // bp-76, 0x40b2ef
                result = v8;
                if (v9 != 0) {
                    // break -> 0x40b348
                    break;
                }
                // 0x40b2f7
                int64_t v11; // 0x40b2b0
                *v4 = function_40b0c0(&v10, a1, &v7, a4, v11, v11);
                free((int64_t *)v11);
                uint32_t v12 = v10; // 0x40b318
                if (v12 != 0) {
                    // 0x40b348
                    result = v12;
                    return result;
                }
            }
            int64_t v13 = v2 + 1; // 0x40b320
            v1 = v13;
            result = 0;
            if (v13 == a4) {
                // break -> 0x40b348
                break;
            }
        } else {
            // 0x40b338
            *v4 = v6;
            int64_t v14 = v2 + 1; // 0x40b33d
            v1 = v14;
            result = 0;
            if (v14 == a4) {
                // break -> 0x40b348
                break;
            }
        }
    }
  lab_0x40b348_2:
    // 0x40b348
    return result;
}
// Address range: 0x40b360 - 0x40b6e2
int64_t function_40b360(int64_t a1, int128_t * a2, uint64_t a3, int64_t a4, int32_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 200); // 0x40b371
    if (v1 <= 0) {
        // 0x40b662
        return 0;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(a1 + 216); // 0x40b384
    int64_t v4 = *v3; // 0x40b384
    int64_t v5 = v4 + 8; // 0x40b39c
    int64_t v6 = 0;
    uint64_t v7 = v6 + v1; // 0x40b380
    int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x40b395
    int64_t v9 = v8; // 0x40b3a1
    int64_t v10 = v8; // 0x40b3a1
    int64_t v11 = v1; // 0x40b3a1
    int64_t v12; // 0x40b360
    int64_t v13; // 0x40b360
    uint64_t v14; // 0x40b3b0
    int64_t v15; // 0x40b3be
    if (*(int64_t *)(40 * v8 + v5) >= a3) {
        v12 = v6;
        if (v9 <= v6) {
            // break (via goto) -> 0x40b3db
            goto lab_0x40b3db;
        }
        // 0x40b3b0
        v14 = v9 + v6;
        v15 = (v14 / 0x8000000000000000 + v14) / 2;
        v10 = v15;
        v11 = v9;
        while (*(int64_t *)(40 * v15 + v5) >= a3) {
            // 0x40b3d6
            v13 = v15;
            v12 = v6;
            if (v13 <= v6) {
                // break (via goto) -> 0x40b3db
                goto lab_0x40b3db;
            }
            // 0x40b3b0
            v14 = v13 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v13;
        }
    }
    int64_t v16 = v10 + 1; // 0x40b650
    v12 = v16;
    while (v16 < v11) {
        // 0x40b380
        v6 = v16;
        v7 = v6 + v11;
        v8 = (v7 / 0x8000000000000000 + v7) / 2;
        v9 = v8;
        v10 = v8;
        if (*(int64_t *)(40 * v8 + v5) >= a3) {
            v12 = v6;
            if (v9 <= v6) {
                // break (via goto) -> 0x40b3db
                goto lab_0x40b3db;
            }
            // 0x40b3b0
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v9;
            while (*(int64_t *)(40 * v15 + v5) >= a3) {
                // 0x40b3d6
                v13 = v15;
                v12 = v6;
                if (v13 <= v6) {
                    // break (via goto) -> 0x40b3db
                    goto lab_0x40b3db;
                }
                // 0x40b3b0
                v14 = v13 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v15;
                v11 = v13;
            }
        }
        // 0x40b650
        v16 = v10 + 1;
        v12 = v16;
    }
  lab_0x40b3db:
    // 0x40b3db
    if (v1 <= v12) {
        // 0x40b662
        return 0;
    }
    int64_t v17 = 40 * v12; // 0x40b3ef
    if (v12 == -1 | *(int64_t *)(v17 + 8 + v4) != a3) {
        // 0x40b662
        return 0;
    }
    int64_t v18 = v2 + 16; // 0x40b416
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x40b425
    int64_t * v20 = (int64_t *)(a1 + 184);
    int64_t v21; // bp-88, 0x40b360
    int64_t v22 = &v21;
    int64_t v23 = v4; // 0x40b42f
    int64_t * v24; // 0x40b360
    int64_t v25; // 0x40b360
    int64_t v26; // 0x40b360
    int64_t result; // 0x40b360
    int64_t v27; // 0x40b360
    int64_t v28; // 0x40b360
    int64_t v29; // 0x40b360
    int64_t v30; // 0x40b360
    int32_t v31; // bp-92, 0x40b360
    int64_t v32; // 0x40b538
    int64_t v33; // 0x40b453
    int64_t v34; // 0x40b457
    int64_t v35; // 0x40b467
    while (true) {
        // 0x40b433
        int64_t v36; // 0x40b360
        v29 = v36;
        v25 = v23 + v17;
        int64_t v37; // 0x40b562
        while (true) {
          lab_0x40b518:
            // 0x40b518
            v26 = v25;
            v30 = v29;
            int64_t v38 = *(int64_t *)v26; // 0x40b518
            int64_t v39 = *(int64_t *)(v2 + 8); // 0x40b51b
            v28 = v30;
            if (function_409b10(v39, v18, v38) == 0) {
                goto lab_0x40b509;
            } else {
                // 0x40b534
                v32 = *(int64_t *)(v26 + 24) + a3;
                int64_t v40 = v32 - *(int64_t *)(v26 + 16); // 0x40b53e
                if (v40 != a3) {
                    // 0x40b448
                    v33 = *(int64_t *)(*(int64_t *)(v19 + 24) + 8 * v38);
                    v34 = 8 * v40;
                    int64_t * v41 = (int64_t *)(*v20 + v34);
                    v35 = *v41;
                    if (v35 == 0) {
                        // 0x40b600
                        v21 = 1;
                        int64_t * mem = malloc(8); // 0x40b61c
                        if (mem == NULL) {
                            // 0x40b6a2
                            result = 12;
                            return result;
                        }
                        // 0x40b62b
                        v31 = 0;
                        *mem = v33;
                        v24 = v41;
                        v27 = (int64_t)mem;
                        goto lab_0x40b4ce;
                    } else {
                        // 0x40b478
                        v28 = v30;
                        if (function_409b10(*(int64_t *)(v35 + 16), v35 + 24, v33) != 0) {
                            goto lab_0x40b509;
                        } else {
                            // 0x40b48d
                            v31 = function_40abb0(v22, v35 + 8);
                            int64_t v42 = function_408500(v22, v33); // 0x40b4a9
                            if (v31 != 0) {
                                goto lab_0x40b690_2;
                            }
                            if ((char)v42 != 1) {
                                goto lab_0x40b690_2;
                            }
                            // 0x40b4c2
                            v24 = (int64_t *)(*v20 + v34);
                            v27 = v30;
                            goto lab_0x40b4ce;
                        }
                    }
                } else {
                    int64_t v43 = *(int64_t *)(v19 + 40); // 0x40b54b
                    v37 = *(int64_t *)*(int64_t *)(24 * v38 + 16 + v43);
                    v28 = v30;
                    if (function_409b10(v39, v18, v37) == 0) {
                        // break -> 0x40b572
                        break;
                    }
                    goto lab_0x40b509;
                }
            }
        }
        // 0x40b572
        v21 = 1;
        int64_t * mem2 = malloc(8); // 0x40b589
        int32_t v44; // 0x40b360
        if (mem2 == NULL) {
            // 0x40b6c6
            v21 = 0;
            v44 = 12;
        } else {
            // 0x40b59c
            *mem2 = v37;
            v44 = 0;
        }
        // 0x40b5a1
        v31 = v44;
        int64_t v45 = function_40a480(v19, &v21, a4, a5); // 0x40b5b6
        int64_t v46 = function_40a050((int64_t *)a2, (int128_t *)&v21); // 0x40b5c6
        free(mem2);
        uint32_t v47 = v31; // 0x40b5d8
        if ((v47 || (int32_t)(v46 || v45)) != 0) {
            // 0x40b6b6
            result = v47;
            if (v47 != 0) {
                return result;
            } else {
                // 0x40b6ba
                result = ((int32_t)v45 != 0 ? v45 : v46) & 0xffffffff;
                return result;
            }
        }
        // 0x40b5ea
        v36 = (int64_t)mem2;
        v23 = *v3;
    }
  lab_0x40b662:
    // 0x40b662
    return result;
  lab_0x40b690_2:
    // 0x40b690
    free((int64_t *)v30);
    result = v31;
    if (v31 != 0) {
        return result;
    } else {
        // 0x40b6a2
        result = 12;
        return result;
    }
  lab_0x40b509:
    // 0x40b509
    v29 = v28;
    v25 = v26 + 40;
    result = 0;
    if (*(char *)(v26 + 32) == 0) {
        return result;
    }
    goto lab_0x40b518;
  lab_0x40b4ce:;
    int64_t v48 = v27;
    *v24 = function_40b0c0(&v31, v19, &v21, v33, v32, v35);
    free((int64_t *)v48);
    v28 = v48;
    if (*(int64_t *)(*v20 + v34) == 0) {
        uint32_t v49 = v31; // 0x40b678
        v28 = v48;
        if (v49 != 0) {
            // 0x40b662
            result = v49;
            goto lab_0x40b662;
        }
    }
    goto lab_0x40b509;
}
// Address range: 0x40b6f0 - 0x40b831
int64_t function_40b6f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x40b702
    if (a2 < 1) {
      lab_0x40b7d2:
        // 0x40b7d2
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 232);
    int64_t * v3 = (int64_t *)(a1 + 248);
    int64_t * v4 = (int64_t *)(a1 + 240);
    int64_t v5 = 0; // 0x40b720
    int64_t v6; // 0x40b6f0
    int64_t v7; // 0x40b730
    int64_t v8; // 0x40b73b
    uint64_t v9; // 0x40b745
    while (true) {
        // 0x40b72d
        v6 = v5;
        v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
        v8 = 16 * v7 + *(int64_t *)v1;
        if (*(char *)(v8 + 8) == 8) {
            // 0x40b745
            v9 = *(int64_t *)v8;
            if (v9 <= 63) {
                // 0x40b74e
                if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                    // break -> 0x40b75c
                    break;
                }
            }
        }
        // 0x40b720
        v5 = v6 + 1;
        if (v5 >= a2) {
            return 0;
        }
    }
    int64_t v10 = *v2; // 0x40b75c
    int64_t v11 = *v3; // 0x40b763
    int64_t v12 = v10; // 0x40b771
    int64_t v13 = v11; // 0x40b771
    int64_t * mem; // 0x40b800
    if (v10 == *v4) {
        // 0x40b7e8
        mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
        if (mem == NULL) {
            // break -> 0x40b7d2
            break;
        }
        // 0x40b812
        v13 = (int64_t)mem;
        *v3 = v13;
        v12 = *v2;
        *v4 = 2 * v10;
    }
    int64_t * mem2 = calloc(1, 48); // 0x40b78c
    int64_t v14 = (int64_t)mem2; // 0x40b78c
    *(int64_t *)(v13 + 8 * v12) = v14;
    int64_t result = 12; // 0x40b7a2
    while (mem2 != NULL) {
        // 0x40b7a4
        *mem2 = a4;
        int64_t v15 = v6 + 1; // 0x40b7b0
        *(int64_t *)(v14 + 8) = v7;
        *v2 = v12 + 1;
        result = 0;
        if (v15 >= 48) {
            // break -> 0x40b7d2
            break;
        }
        v5 = v15;
        while (true) {
            // 0x40b72d
            v6 = v5;
            v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
            v8 = 16 * v7 + *(int64_t *)v1;
            if (*(char *)(v8 + 8) == 8) {
                // 0x40b745
                v9 = *(int64_t *)v8;
                if (v9 <= 63) {
                    // 0x40b74e
                    if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                        // break -> 0x40b75c
                        break;
                    }
                }
            }
            // 0x40b720
            v5 = v6 + 1;
            if (v5 >= 48) {
                return 0;
            }
        }
        // 0x40b75c
        v10 = *v2;
        v11 = *v3;
        v12 = v10;
        v13 = v11;
        if (v10 == *v4) {
            // 0x40b7e8
            mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
            result = 12;
            if (mem == NULL) {
                // break -> 0x40b7d2
                break;
            }
            // 0x40b812
            v13 = (int64_t)mem;
            *v3 = v13;
            v12 = *v2;
            *v4 = 2 * v10;
        }
        // 0x40b773
        mem2 = calloc(1, 48);
        v14 = (int64_t)mem2;
        *(int64_t *)(v13 + 8 * v12) = v14;
        result = 12;
    }
    // 0x40b7d2
    return result;
}
// Address range: 0x40b840 - 0x40b92e
int64_t function_40b840(int64_t a1, int64_t a2, int32_t a3) {
    if (a2 < 0) {
        // 0x40b8f0
        return (int64_t)*(int32_t *)(a1 + 112);
    }
    // 0x40b852
    if (*(int64_t *)(a1 + 88) == a2) {
        // 0x40b896
        return a3 & 2 ^ 10;
    }
    // 0x40b85c
    if (*(int32_t *)(a1 + 144) < 2) {
        unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a2); // 0x40b8ab
        int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 128) + (int64_t)(8 * v1 / 64)); // 0x40b8b6
        if ((1 << (int64_t)(v1 % 64) & v2) != 0) {
            // 0x40b896
            return 1;
        }
        // 0x40b8ca
        if (v1 != 10) {
            // 0x40b896
            return 0;
        }
        // 0x40b8d1
        return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
    }
    int64_t v3 = a2;
    int32_t wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16)); // 0x40b87a
    while (wc == -1) {
        // 0x40b870
        if (v3 == 0) {
            // 0x40b8f0
            return (int64_t)*(int32_t *)(a1 + 112);
        }
        v3--;
        wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16));
    }
    // 0x40b882
    if (*(char *)(a1 + 142) != 0) {
        // 0x40b910
        if (wc != 95 != (iswalnum(wc) == 0)) {
            // 0x40b896
            return 1;
        }
    }
    // 0x40b88f
    if (wc != 10) {
        // 0x40b896
        return 0;
    }
    // 0x40b8d1
    return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
}
// Address range: 0x40b930 - 0x40ba5b
int64_t function_40b930(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a3); // 0x40b934
    int64_t v2 = a2 + 8;
    unsigned char v3 = *(char *)v2; // 0x40b938
    if (v3 == 3) {
        uint64_t v4 = (int64_t)v1; // 0x40b934
        if ((*(int64_t *)((v4 / 8 & 24) + a2) & 1 << v4 % 64) == 0) {
            // 0x40b9df
            return 0;
        }
    } else {
        if (v3 < 4) {
            // 0x40b9e8
            if (v1 == (char)a2 != (v3 == 1)) {
                // 0x40b9df
                return 0;
            }
        } else {
            if (v3 != 5) {
                // 0x40b94e
                if (v1 < 0 || v3 != 7) {
                    // 0x40b9df
                    return 0;
                }
            }
            if (v1 == 10) {
                // 0x40ba40
                if ((*(char *)(*(int64_t *)(a1 + 152) + 216) & 64) == 0) {
                    // 0x40b9df
                    return 0;
                }
            } else {
                if (v1 == 0) {
                    // 0x40b970
                    if (*(char *)(*(int64_t *)(a1 + 152) + 216) <= -1) {
                        // 0x40b9df
                        return 0;
                    }
                }
            }
        }
    }
    uint32_t v5 = *(int32_t *)v2; // 0x40b983
    if ((v5 & 0x3ff00) == 0) {
        // 0x40b9df
        return 1;
    }
    int64_t v6 = v5; // 0x40b983
    uint64_t v7 = function_40b840(a1, a3, *(int32_t *)(a1 + 160)); // 0x40b99f
    if ((v6 & 1024) != 0) {
        // 0x40ba30
        if ((v6 & 2048) == 0 != v7 % 2 != 0) {
            // 0x40b9df
            return 0;
        }
    } else {
        if ((v6 & 2048) != 0) {
            // 0x40b9b7
            if (v7 % 2 != 0) {
                // 0x40b9df
                return 0;
            }
        }
    }
    int64_t result = 0; // 0x40b9c2
    if ((v6 & 0x2000) != 0 != ((v7 & 2) == 0)) {
        // 0x40b9cb
        result = (char)(v5 / 256) <= -1 ? v7 / 8 % 2 : 1;
    }
    // 0x40b9df
    return result;
}
// Address range: 0x40ba60 - 0x40bb28
int64_t function_40ba60(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = function_40b840(v1, a4, *(int32_t *)(v1 + 160)); // 0x40ba76
    if (a2 < 1) {
        // 0x40bafc
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + 152); // 0x40ba84
    int64_t v4 = 0; // 0x40baa6
    int64_t result; // 0x40ba60
    uint32_t v5; // 0x40babe
    uint32_t v6; // 0x40bac1
    int64_t v7; // 0x40bab0
    while (true) {
      lab_0x40bab0:
        // 0x40bab0
        v7 = *(int64_t *)(8 * v4 + v3);
        int64_t v8 = *(int64_t *)v3 + 8 + 16 * v7; // 0x40babe
        if (*(char *)v8 != 2) {
            goto lab_0x40bb18;
        } else {
            // 0x40bad1
            v5 = *(int32_t *)v8;
            result = v7;
            if ((v5 & 0x3ff00) == 0) {
                // break -> 0x40bafc
                break;
            }
            // 0x40bad6
            v6 = v5 / 256;
            int64_t v9 = v6; // 0x40bac1
            if ((v9 & 4) == 0) {
                if (v2 % 2 == 0 || (v9 & 8) == 0) {
                    goto lab_0x40bae5;
                } else {
                    goto lab_0x40bb18;
                }
            } else {
                if (v2 % 2 == 0) {
                    goto lab_0x40bb18;
                } else {
                    if ((v9 & 8) != 0) {
                        goto lab_0x40bb18;
                    } else {
                        goto lab_0x40bae5;
                    }
                }
            }
        }
    }
  lab_0x40bafc_2:
    // 0x40bafc
    return result;
  lab_0x40bb18:
    // 0x40bb18
    v4++;
    result = 0;
    if (v4 == a2) {
        return result;
    }
    goto lab_0x40bab0;
  lab_0x40bae5:
    if ((v2 & 2) == 0 != (v5 & 0x2000) != 0) {
        // 0x40baf0
        result = v7;
        if ((v2 & 8) == 0 != (char)v6 < 0) {
            // break -> 0x40bafc
            goto lab_0x40bafc_2;
        }
    }
    goto lab_0x40bb18;
}
// Address range: 0x40bb30 - 0x40c317
int64_t function_40bb30(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x40bb4a
    int64_t v3 = *v2; // 0x40bb4a
    int64_t v4 = a2 - v3; // 0x40bb54
    int64_t * v5; // 0x40bb30
    char * v6; // 0x40bb30
    int64_t * v7; // 0x40bb30
    int32_t * v8; // 0x40bb30
    int64_t * v9; // 0x40bb30
    int64_t * v10; // 0x40bb30
    int64_t v11; // 0x40bb30
    if (v3 > a2) {
        int32_t * v12 = (int32_t *)(v1 + 144);
        if (*v12 >= 2) {
            // 0x40bb5f
            *(int64_t *)(v1 + 32) = 0;
        }
        int64_t * v13 = (int64_t *)(v1 + 48);
        *v13 = 0;
        *v2 = 0;
        int64_t * v14 = (int64_t *)(v1 + 88);
        *v14 = *(int64_t *)(v1 + 80);
        int64_t * v15 = (int64_t *)(v1 + 56);
        *v15 = 0;
        int64_t * v16 = (int64_t *)(v1 + 104);
        *v16 = *(int64_t *)(v1 + 96);
        char * v17 = (char *)(v1 + 140);
        *v17 = 0;
        *(int32_t *)(v1 + 112) = 2 * a3 & 2 ^ 6;
        v4 = a2;
        if (*(char *)(v1 + 139) == 0) {
            // 0x40bc80
            *(int64_t *)(v1 + 8) = v1;
            v7 = v13;
            v6 = v17;
            v5 = v15;
            v11 = a2;
            v10 = v16;
            v9 = v14;
            v8 = v12;
            if (a2 != 0) {
                goto lab_0x40bbc3;
            } else {
                goto lab_0x40bc90;
            }
        } else {
            goto lab_0x40bbba;
        }
    } else {
        goto lab_0x40bbba;
    }
  lab_0x40c1b8:
    // 0x40c1b8
    *v7 = 0;
    int64_t v18; // 0x40bfb7
    int64_t v19 = v18; // 0x40c1c2
    int64_t v20; // 0x40bfba
    int64_t v21 = v20; // 0x40c1c2
    int64_t v22 = 0; // 0x40c1c2
    int64_t v23 = v1; // 0x40c1c2
    goto lab_0x40c05f;
  lab_0x40bdb1:;
    // 0x40bdb1
    int64_t v41; // 0x40bb30
    int64_t v38; // 0x40bb30
    int64_t v42 = v41 + v38; // 0x40bdb1
    int64_t v43; // 0x40bb30
    int64_t v44; // 0x40bb30
    int64_t v39; // 0x40bb30
    int64_t v45; // 0x40bb30
    int64_t v46; // 0x40bb30
    int32_t v47; // bp-64, 0x40bb30
    if (v42 < a2) {
        int64_t * v48 = (int64_t *)(v1 + 32); // 0x40bde4
        int64_t v49 = &v47;
        int64_t v50 = *(int64_t *)(v1 + 80) - v42; // 0x40bded
        int64_t v51 = function_407dd0(&v47, v42 + v39, v50); // 0x40be00
        int64_t v52 = v51; // 0x40be16
        int64_t v53 = v47; // 0x40be16
        int64_t v54; // 0x40bb30
        if (v51 >= 0xfffffffffffffffe) {
            // 0x40c245
            v54 = 0;
            if (v50 != 0 && v51 != 0) {
                // 0x40c24f
                v54 = (int64_t)*(char *)(v42 + v49);
            }
            // 0x40c257
            v52 = 1;
            v53 = v54;
        }
        int64_t v55 = v52 + v42; // 0x40be1c
        int64_t v56 = v49; // 0x40be22
        while (v55 < a2) {
            int64_t v57 = v55;
            v50 = *(int64_t *)(v1 + 80) - v57;
            v51 = function_407dd0(&v47, v57 + v56, v50);
            v52 = v51;
            v53 = v47;
            if (v51 >= 0xfffffffffffffffe) {
                // 0x40c245
                v54 = 0;
                if (v50 != 0 && v51 != 0) {
                    // 0x40c24f
                    v54 = (int64_t)*(char *)(v57 + v49);
                }
                // 0x40c257
                v52 = 1;
                v53 = v54;
            }
            // 0x40be1c
            v55 = v52 + v57;
            v56 = v49;
        }
        int64_t v58 = v55 - a2; // 0x40be24
        *v7 = v58;
        v46 = v53;
        v45 = v49;
        v43 = v58;
        v44 = v58;
        if ((int32_t)v53 == -1) {
            goto lab_0x40c1d1;
        } else {
            goto lab_0x40be37;
        }
    } else {
        int64_t v59 = v42 - a2; // 0x40c1c7
        *v7 = v59;
        v44 = v59;
        goto lab_0x40c1d1;
    }
  lab_0x40bbba:
    // 0x40bbba
    if (v4 == 0) {
        // 0x40bbba
        v10 = (int64_t *)(v1 + 104);
        v9 = (int64_t *)(v1 + 88);
        v8 = (int32_t *)(v1 + 144);
        goto lab_0x40bc90;
    } else {
        // 0x40bbba
        v7 = (int64_t *)(v1 + 48);
        v6 = (char *)(v1 + 140);
        v5 = (int64_t *)(v1 + 56);
        v11 = v4;
        goto lab_0x40bbc3;
    }
  lab_0x40bbc3:;
    int64_t v60 = v11;
    int64_t * v24 = v5;
    int64_t v61 = *v24; // 0x40bbc3
    char v62 = *v6; // 0x40bbc7
    int64_t v63 = *v7; // 0x40bbce
    char * v64; // 0x40bb30
    int64_t v30; // 0x40bb30
    int64_t v65; // 0x40bb30
    int64_t v31; // 0x40bb30
    int64_t v66; // 0x40bb30
    int64_t v33; // 0x40bb30
    int64_t v67; // 0x40bb30
    char v68; // 0x40bb30
    int32_t v32; // 0x40bb30
    int64_t v40; // 0x40c0d9
    int64_t * v69; // 0x40be78
    int64_t v70; // 0x40be78
    int64_t v71; // 0x40bea5
    uint64_t v72; // 0x40bea8
    if (v61 > v60) {
        if (v62 != 0) {
            // 0x40be78
            v69 = (int64_t *)(v1 + 24);
            v70 = *v69;
            int64_t v73 = 0; // 0x40be81
            uint64_t v74 = v73 + v63; // 0x40be97
            v71 = (v74 / 0x8000000000000000 + v74) / 2;
            v72 = *(int64_t *)(8 * v71 + v70);
            int64_t v75 = v71; // 0x40beb3
            int64_t v76 = v73; // 0x40beb3
            if (v72 <= v60) {
                if (v72 >= v60) {
                    // 0x40c1a0
                    goto lab_0x40bef5;
                }
                // 0x40be8e
                v75 = v63;
                v76 = v71 + 1;
            }
            // 0x40be92
            v73 = v76;
            int64_t v77 = v75;
            while (v73 < v77) {
                int64_t v78 = v77;
                v74 = v73 + v78;
                v71 = (v74 / 0x8000000000000000 + v74) / 2;
                v72 = *(int64_t *)(8 * v71 + v70);
                v75 = v71;
                v76 = v73;
                if (v72 <= v60) {
                    if (v72 >= v60) {
                        // 0x40c1a0
                        goto lab_0x40bef5;
                    }
                    // 0x40be8e
                    v75 = v78;
                    v76 = v71 + 1;
                }
                // 0x40be92
                v73 = v76;
                v77 = v75;
            }
            // 0x40bee8
            goto lab_0x40bef5;
        } else {
            // 0x40bbe3
            *(int32_t *)(v1 + 112) = (int32_t)function_40b840(v1, v60 - 1, a3);
            if (*(int32_t *)(v1 + 144) > 1) {
                int64_t v79 = *(int64_t *)(v1 + 16); // 0x40bca0
                int64_t v80; // 0x40bbed
                memmove((int64_t *)v79, (int64_t *)(v79 + 4 * v60), 4 * (int32_t)v80);
            }
            int64_t v81 = v63 - v60;
            char * v82 = (char *)(v1 + 139); // 0x40bc05
            char v83 = *v82; // 0x40bc05
            char v84 = v83; // 0x40bc0e
            int64_t v85 = v1; // 0x40bc0e
            int64_t v86 = v81; // 0x40bc0e
            if (v83 != 0) {
                // 0x40bec0
                v85 = *(int64_t *)(v1 + 8);
                memmove((int64_t *)v85, (int64_t *)(v85 + v60), (int32_t)v81);
                v84 = *v82;
                v86 = *v7 - v60;
            }
            // 0x40bc14
            *v24 = *v24 - v60;
            *v7 = v86;
            v68 = v84;
            v66 = v85;
            goto lab_0x40bc1c;
        }
    } else {
        if (v62 != 0) {
            // 0x40c21d
            *v6 = 0;
            int64_t v87 = v60 - a2;
            *(int64_t *)(v1 + 88) = *(int64_t *)(v1 + 80) + v87;
            *(int64_t *)(v1 + 104) = *(int64_t *)(v1 + 96) + v87;
        }
        int32_t v88 = *(int32_t *)(v1 + 144); // 0x40bd88
        int64_t v89 = *v2; // 0x40bd8f
        *v7 = 0;
        if (v88 < 2) {
            int64_t v90 = (int64_t)*(char *)(v60 - 1 + v1 + v89); // 0x40bcde
            int64_t v91 = *(int64_t *)(v1 + 120); // 0x40bce4
            *v24 = 0;
            int64_t v92 = v90; // 0x40bcf3
            if (v91 != 0) {
                // 0x40bcf5
                v92 = (int64_t)*(char *)(v91 + v90);
            }
            int64_t v93 = *(int64_t *)((v92 / 8 & 24) + *(int64_t *)(v1 + 128)); // 0x40bd07
            int32_t v94 = 1; // 0x40bd15
            if ((v93 & 1 << v92 % 64) == 0) {
                // 0x40bd17
                v94 = 0;
                if (v92 == 10) {
                    // 0x40bd1e
                    v94 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
                }
            }
            int64_t * v95 = (int64_t *)(v1 + 88); // 0x40bd30
            int64_t * v96 = (int64_t *)(v1 + 104); // 0x40bd34
            *(int32_t *)(v1 + 112) = v94;
            int64_t v97 = *v95 - v60; // 0x40bd3b
            int64_t v98 = *v96 - v60; // 0x40bd3e
            char * v99 = (char *)(v1 + 139);
            v30 = v97;
            v31 = v98;
            v32 = v88;
            v33 = v1;
            if (*v99 == 0) {
                goto lab_0x40bc34;
            } else {
                // 0x40bd4e
                *v2 = a2;
                *v95 = v97;
                *v96 = v98;
                v64 = v99;
                v65 = v97;
                v67 = v1;
                goto lab_0x40bd60;
            }
        } else {
            // 0x40bda4
            v38 = v61;
            v39 = v1;
            v41 = v89;
            if (*(char *)(v1 + 137) != 0) {
                int64_t v100 = v89 + v1; // 0x40c081
                uint64_t v101 = v60 - (int64_t)v88 + v100; // 0x40c085
                int64_t v102 = v60 - 1 + v100; // 0x40c088
                uint64_t v103 = v101 > v1 ? v101 : v1; // 0x40c090
                v38 = v61;
                v39 = v1;
                v41 = v89;
                if (v103 > v102) {
                    goto lab_0x40bdb1;
                } else {
                    int64_t v104 = v102;
                    while ((*(char *)v104 & -64) == -128) {
                        int64_t v105 = v104 - 1; // 0x40c0a0
                        v38 = v61;
                        v39 = v1;
                        v41 = v89;
                        if (v103 > v105) {
                            goto lab_0x40bdb1;
                        }
                        v104 = v105;
                    }
                    int64_t v106 = *(int64_t *)(v1 + 120); // 0x40c0be
                    int64_t v107 = *(int64_t *)(v1 + 88) + v100 - v104; // 0x40c0c8
                    int64_t v108 = v104; // 0x40c0ce
                    if (v106 != 0) {
                        int64_t v109 = v107 - 6; // 0x40c2e2
                        int32_t v110 = v109 == 0 | v109 < 0 != (5 - v107 & v107) < 0 ? (int32_t)v107 - 1 : 5; // 0x40c2ef
                        if (v110 >= 0) {
                            int64_t v111 = v110; // 0x40c305
                            char v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104)); // 0x40c2fc
                            int64_t v113; // bp-120, 0x40bb30
                            *(char *)((int64_t)&v113 + 50 + v111) = v112;
                            v111--;
                            while ((int32_t)v111 >= 0) {
                                // 0x40c2f7
                                v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104));
                                *(char *)((int64_t)&v113 + 50 + v111) = v112;
                                v111--;
                            }
                        }
                        // 0x40c30d
                        int64_t v114; // bp-70, 0x40bb30
                        v108 = &v114;
                    }
                    // 0x40c0d4
                    int32_t v115; // bp-76, 0x40bb30
                    v40 = &v115;
                    v47 = 0;
                    uint64_t v116 = function_407dd0(&v115, v108, v107); // 0x40c0ef
                    uint64_t v117 = v100 + v60 - v104; // 0x40c0fe
                    if (v116 >= v117 == v116 < 0xfffffffffffffffe) {
                        int64_t v118 = v116 - v117; // 0x40c1e8
                        *(int64_t *)(v1 + 32) = 0;
                        *v7 = v118;
                        v46 = v115;
                        v45 = v40;
                        v43 = v118;
                        if (v115 != -1) {
                            goto lab_0x40be37;
                        } else {
                            goto lab_0x40c110;
                        }
                    } else {
                        goto lab_0x40c110;
                    }
                }
            } else {
                goto lab_0x40bdb1;
            }
        }
    }
  lab_0x40bc90:;
    int64_t v34 = *v9; // 0x40bc9e
    int64_t v35 = *v10; // 0x40bc9e
    int32_t v36 = *v8; // 0x40bc9e
    int64_t v37 = v1; // 0x40bc9e
    goto lab_0x40bc38;
  lab_0x40bc38:
    // 0x40bc38
    *v2 = a2;
    *(int64_t *)(v1 + 88) = v34;
    *(int64_t *)(v1 + 104) = v35;
    if (v36 >= 2) {
        // 0x40bc4d
        if (*(char *)(v1 + 136) != 0) {
            int64_t result = function_408990(v1); // 0x40bcc8
            if ((int32_t)result != 0) {
                // 0x40bc68
                return result;
            }
        } else {
            // 0x40bc59
            function_4087e0(v1);
        }
        // 0x40bc5e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40bc68
        return 0;
    }
    // 0x40bc38
    v64 = (char *)(v1 + 139);
    v65 = v34;
    v67 = v37;
    goto lab_0x40bd60;
  lab_0x40bd60:;
    int64_t v119 = v65;
    if (*v64 == 0) {
        // 0x40bd6d
        *(int64_t *)(v1 + 48) = v119;
        // 0x40bc5e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40bc68
        return 0;
    }
    // 0x40c130
    if (*(char *)(v1 + 136) != 0) {
        // 0x40c210
        function_408760(v1);
        // 0x40bc5e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40bc68
        return 0;
    }
    int64_t * v120 = (int64_t *)(v1 + 120); // 0x40c13d
    int64_t v121 = *v120; // 0x40c13d
    if (v121 == 0) {
        // 0x40bc5e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40bc68
        return 0;
    }
    int64_t v122 = *(int64_t *)(v1 + 64); // 0x40c14a
    int64_t v123 = v122 - v119; // 0x40c14a
    int64_t * v124 = (int64_t *)(v1 + 48); // 0x40c14e
    int64_t v125 = *v124; // 0x40c14e
    int64_t v126 = v123 == 0 | v123 < 0 != ((v123 ^ v122) & (v122 ^ v119)) < 0 ? v122 : v119; // 0x40c152
    int64_t v127 = v125; // 0x40c15a
    if (v126 > v125) {
        unsigned char v128 = *(char *)(v67 + a2 + v125); // 0x40c176
        int64_t * v129 = (int64_t *)(v1 + 8); // 0x40c17f
        *(char *)(*v129 + v125) = *(char *)(v121 + (int64_t)v128);
        int64_t v130 = v125 + 1; // 0x40c187
        v127 = v126;
        if (v126 != v130) {
            unsigned char v131 = *(char *)(v130 + v67 + *v2); // 0x40c176
            *(char *)(*v129 + v130) = *(char *)(*v120 + (int64_t)v131);
            int64_t v132 = v130 + 1; // 0x40c187
            int64_t v133 = v132; // 0x40c18e
            v127 = v126;
            while (v126 != v132) {
                // 0x40c168
                v131 = *(char *)(v133 + v67 + *v2);
                *(char *)(*v129 + v133) = *(char *)(*v120 + (int64_t)v131);
                v132 = v133 + 1;
                v133 = v132;
                v127 = v126;
            }
        }
    }
    // 0x40c190
    *v124 = v127;
    *(int64_t *)(v1 + 56) = v127;
    // 0x40bc5e
    *(int64_t *)(v1 + 72) = 0;
    // 0x40bc68
    return 0;
  lab_0x40bef5:;
    int64_t v134 = v71 + (int64_t)(v72 < v60);
    int64_t v135 = v71 + (int64_t)(v72 >= v60);
    *(int32_t *)(v1 + 112) = (int32_t)function_40b840(v1, v135, a3);
    int64_t v25; // 0x40bb30
    int64_t v26; // 0x40bb30
    int64_t v28; // 0x40bb30
    char v27; // 0x40bb30
    if (v63 > v60 == v60 == v134) {
        int64_t v136 = 8 * v60;
        if (*(int64_t *)(v70 + v136) != v60) {
            goto lab_0x40bfa8;
        } else {
            int64_t v137 = *(int64_t *)(v1 + 16); // 0x40bf20
            memmove((int64_t *)v137, (int64_t *)(v137 + 4 * v60), 4 * (int32_t)(v63 - v60));
            int64_t v138 = *(int64_t *)(v1 + 8); // 0x40bf3b
            int64_t v139 = *v7; // 0x40bf3f
            memmove((int64_t *)v138, (int64_t *)(v138 + v60), (int32_t)(v139 - v60));
            *v24 = *v24 - v60;
            uint64_t v140 = *v7 - v60; // 0x40bf57
            *v7 = v140;
            if (v140 >= 1) {
                for (int64_t i = 0; i < *v7; i++) {
                    int64_t v141 = 8 * i + *v69;
                    *(int64_t *)v141 = *(int64_t *)(v141 + v136) - v60;
                }
            }
            // 0x40bf85
            v25 = *(int64_t *)(v1 + 88) - v60;
            v26 = *(int64_t *)(v1 + 104) - v60;
            v27 = *(char *)(v1 + 139);
            v28 = v138;
            goto lab_0x40bc30;
        }
    } else {
        goto lab_0x40bfa8;
    }
  lab_0x40bc1c:
    // 0x40bc1c
    v25 = *(int64_t *)(v1 + 88) - v60;
    v26 = *(int64_t *)(v1 + 104) - v60;
    v27 = v68;
    v28 = v66;
    goto lab_0x40bc30;
  lab_0x40bc34:;
    int64_t * v142 = (int64_t *)(v1 + 8); // 0x40bc34
    *v142 = *v142 + v60;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    goto lab_0x40bc38;
  lab_0x40bfa8:
    // 0x40bfa8
    *v6 = 0;
    v18 = *(int64_t *)(v1 + 80) - a2;
    v20 = *(int64_t *)(v1 + 96) - a2;
    int64_t * v143 = (int64_t *)(v1 + 88); // 0x40bfc1
    *v143 = v18 + v60;
    int64_t * v144 = (int64_t *)(v1 + 104); // 0x40bfc9
    *v144 = v20 + v60;
    int64_t v145 = v134; // 0x40bfd0
    if (v134 >= 0 == (v134 != 0)) {
        int64_t v146 = v134; // 0x40bfd8
        v145 = v146;
        while (*(int64_t *)(v70 - 8 + 8 * v146) == v60) {
            // 0x40bfd8
            v146--;
            if (v146 == 0) {
                // break -> 0x40bfe5
                break;
            }
            v145 = v146;
        }
    }
    // 0x40bfe5
    int64_t v147; // 0x40bb30
    if (v145 < v63) {
        int64_t v148 = v145; // 0x40bff2
        v147 = v148;
        while (*(int32_t *)(4 * v148 + *(int64_t *)(v1 + 16)) == -1) {
            // 0x40bff8
            v148++;
            if (v148 == v63) {
                goto lab_0x40c1b8;
            }
            v147 = v148;
        }
        goto lab_0x40c00c;
    } else {
        // 0x40c1ac
        v147 = v145;
        if (v145 != v63) {
            goto lab_0x40c00c;
        } else {
            goto lab_0x40c1b8;
        }
    }
  lab_0x40bc30:;
    int32_t v29 = *(int32_t *)(v1 + 144);
    v30 = v25;
    v31 = v26;
    v32 = v29;
    v33 = v28;
    v34 = v25;
    v35 = v26;
    v36 = v29;
    v37 = v28;
    if (v27 != 0) {
        goto lab_0x40bc38;
    } else {
        goto lab_0x40bc34;
    }
  lab_0x40c110:
    // 0x40c110
    v38 = *v24;
    v39 = v40;
    v41 = *v2;
    goto lab_0x40bdb1;
  lab_0x40c1d1:
    // 0x40c1d1
    *(int32_t *)(v1 + 112) = (int32_t)function_40b840(v1, v63 - 1, a3);
    int64_t v149 = v1; // 0x40c1e3
    int64_t v150 = v44; // 0x40c1e3
    goto lab_0x40be5c;
  lab_0x40be37:;
    int64_t v164 = v46; // 0x40be3e
    int64_t v163 = v45; // 0x40be3e
    int32_t v161; // 0x40bb30
    int64_t v162; // 0x40bb30
    if (*(char *)(v1 + 142) != 0) {
        int64_t v165 = v46 & 0xffffffff; // 0x40c2b4
        int32_t wc = v46; // 0x40c2b6
        v164 = v165;
        v163 = v165;
        v161 = 1;
        v162 = v165;
        if (wc != 95 == iswalnum(wc) == 0) {
            goto lab_0x40be44;
        } else {
            goto lab_0x40be59;
        }
    } else {
        goto lab_0x40be44;
    }
  lab_0x40c00c:;
    uint64_t v166 = *(int64_t *)(8 * v147 + v70) - v60; // 0x40c011
    *v7 = v166;
    v19 = v18;
    v21 = v20;
    v22 = 0;
    v23 = v1;
    if (v166 != 0) {
        if (v166 >= 1) {
            int64_t v167 = *(int64_t *)(v1 + 16); // 0x40c01f
            int64_t v168 = v167; // 0x40c027
            *(int32_t *)v168 = -1;
            v168 += 4;
            while (v167 + 4 * v166 != v168) {
                // 0x40c030
                *(int32_t *)v168 = -1;
                v168 += 4;
            }
        }
        int64_t v169 = *(int64_t *)(v1 + 8); // 0x40c03f
        memset((int64_t *)v169, 255, (int32_t)v166);
        v19 = *v143 - v60;
        v21 = *v144 - v60;
        v22 = *v7;
        v23 = v169;
    }
    goto lab_0x40c05f;
  lab_0x40be5c:;
    // 0x40be5c
    char * v151; // 0x40bb30
    int64_t v152; // 0x40bb30
    int64_t v153; // 0x40bb30
    int64_t v154; // 0x40bb30
    int64_t v155; // 0x40bb30
    char v156; // 0x40bb30
    if (v150 != 0) {
        if (v150 >= 1) {
            int64_t v157 = *(int64_t *)(v1 + 16); // 0x40c26c
            int64_t v158 = v157; // 0x40c274
            *(int32_t *)v158 = -1;
            v158 += 4;
            while (v157 + 4 * v150 != v158) {
                // 0x40c278
                *(int32_t *)v158 = -1;
                v158 += 4;
            }
        }
        char * v159 = (char *)(v1 + 139);
        v156 = 0;
        v155 = v149;
        v153 = v150;
        if (*v159 == 0) {
            goto lab_0x40be6c;
        } else {
            int64_t v160 = *(int64_t *)(v1 + 8); // 0x40c296
            memset((int64_t *)v160, 255, (int32_t)v150);
            v151 = v159;
            v154 = v160;
            v152 = *v7;
            goto lab_0x40be65;
        }
    } else {
        // 0x40be5c
        v151 = (char *)(v1 + 139);
        v154 = v149;
        v152 = v150;
        goto lab_0x40be65;
    }
  lab_0x40be44:
    // 0x40be44
    v161 = 0;
    v162 = v163;
    if ((int32_t)v164 == 10) {
        // 0x40be4b
        v161 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
        v162 = v163;
    }
    goto lab_0x40be59;
  lab_0x40c05f:
    // 0x40c05f
    *v24 = v22;
    v25 = v19;
    v26 = v21;
    v27 = *(char *)(v1 + 139);
    v28 = v23;
    goto lab_0x40bc30;
  lab_0x40be59:
    // 0x40be59
    *(int32_t *)(v1 + 112) = v161;
    v149 = v162;
    v150 = v43;
    goto lab_0x40be5c;
  lab_0x40be6c:
    // 0x40be6c
    *v24 = v153;
    v68 = v156;
    v66 = v155;
    goto lab_0x40bc1c;
  lab_0x40be65:
    // 0x40be65
    v156 = *v151;
    v155 = v154;
    v153 = v152;
    goto lab_0x40be6c;
}
// Address range: 0x40c320 - 0x40c545
int64_t function_40c320(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40c320
    int128_t v1; // 0x40c320
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x40c322
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40c339
    int128_t v5 = __asm_movaps(v3); // bp-88, 0x40c33d
    int64_t v6 = *v4 + 24 * a2; // 0x40c342
    int64_t v7 = 0; // bp-72, 0x40c34b
    int64_t * v8 = (int64_t *)(v6 + 8); // 0x40c354
    int64_t v9 = *v8; // 0x40c354
    if (v9 < 1) {
        // 0x40c501
        free(NULL);
        return (int32_t)&g67 ^ (int32_t)&g67;
    }
    int64_t v10 = v6 + 16; // 0x40c3c5
    int64_t * v11 = (int64_t *)v10;
    int64_t v12 = a3 + 8;
    int64_t * v13 = (int64_t *)v12;
    int64_t v14 = a3 + 16;
    int64_t v15 = 0; // 0x40c3b8
    int64_t v16 = a1; // 0x40c320
    int64_t v17 = v9;
    int64_t v18; // 0x40c320
    int64_t v19; // 0x40c320
    int64_t v20; // 0x40c320
    int64_t v21; // 0x40c3f3
    int64_t v22; // 0x40c3fd
    while (true) {
      lab_0x40c3c5:
        // 0x40c3c5
        v19 = v17;
        int64_t v23 = v16;
        int64_t v24 = *(int64_t *)(*v11 + 8 * v15); // 0x40c3c9
        v16 = v23;
        v18 = v19;
        if (v24 == a2) {
            goto lab_0x40c3b8;
        } else {
            // 0x40c3d2
            v16 = v23;
            v18 = v19;
            if ((*(char *)(v23 + 8 + 16 * v24) & 8) == 0) {
                goto lab_0x40c3b8;
            } else {
                // 0x40c3e3
                v21 = 24 * v24;
                int64_t v25 = *(int64_t *)(a1 + 40) + v21; // 0x40c3fa
                v22 = *(int64_t *)(v25 + 16);
                int64_t v26 = *(int64_t *)v22; // 0x40c406
                int64_t v27 = function_409b10(v19, v10, v26); // 0x40c411
                if (*(int64_t *)(v25 + 8) > 1) {
                    // 0x40c370
                    v20 = v19;
                    if (v27 != 0) {
                        goto lab_0x40c450;
                    } else {
                        int64_t v28 = *v13; // 0x40c379
                        int64_t v29 = function_409b10(v28, v14, v26); // 0x40c384
                        v20 = v28;
                        if (v29 == 0) {
                            goto lab_0x40c450;
                        } else {
                            goto lab_0x40c392;
                        }
                    }
                } else {
                    // 0x40c42b
                    v16 = v19;
                    v18 = v19;
                    if (v27 != 0) {
                        goto lab_0x40c3b8;
                    } else {
                        int64_t v30 = *v13; // 0x40c430
                        int64_t v31 = function_409b10(v30, v14, v26); // 0x40c43b
                        v16 = v30;
                        v18 = v19;
                        if (v31 != 0) {
                            goto lab_0x40c392;
                        } else {
                            goto lab_0x40c3b8;
                        }
                    }
                }
            }
        }
    }
  lab_0x40c490:
    if (v17 < 1) {
        // 0x40c501
        free((int64_t *)v7);
        return (int32_t)&g67 ^ (int32_t)&g67;
    }
    int64_t v32 = 0; // 0x40c320
    int64_t v33 = *(int64_t *)(*v11 + 8 * v32); // 0x40c4ac
    int64_t v34; // 0x40c320
    int64_t v35; // 0x40c4bd
    int64_t v36; // 0x40c4d0
    if (function_409b10(v34, (int64_t)&v7, v33) == 0) {
        // 0x40c4bd
        v35 = *v13;
        v36 = function_409b10(v35, v14, v33) - 1;
        if (v36 > -1 == v36 < v35) {
            // 0x40c4de
            *v13 = v35 - 1;
            function_409c80(v12, v14, v36);
        }
    }
    int64_t v37 = v32 + 1; // 0x40c4f2
    v32 = v37;
    while (*v8 > v37) {
        // 0x40c4a0
        v33 = *(int64_t *)(*v11 + 8 * v32);
        if (function_409b10(v34, (int64_t)&v7, v33) == 0) {
            // 0x40c4bd
            v35 = *v13;
            v36 = function_409b10(v35, v14, v33) - 1;
            if (v36 > -1 == v36 < v35) {
                // 0x40c4de
                *v13 = v35 - 1;
                function_409c80(v12, v14, v36);
            }
        }
        // 0x40c4f2
        v37 = v32 + 1;
        v32 = v37;
    }
    // 0x40c501
    free((int64_t *)v7);
    return (int32_t)&g67 ^ (int32_t)&g67;
  lab_0x40c3b8:
    // 0x40c3b8
    v17 = v18;
    v15++;
    if (v17 <= v15) {
        // break -> 0x40c490
        goto lab_0x40c490;
    }
    goto lab_0x40c3c5;
  lab_0x40c450:;
    int64_t v38 = *(int64_t *)(v22 + 8); // 0x40c450
    v16 = v20;
    v18 = v19;
    if (v38 < 1) {
        goto lab_0x40c3b8;
    } else {
        int64_t v39 = function_409b10(v19, v10, v38); // 0x40c466
        v16 = v19;
        v18 = v19;
        if (v39 != 0) {
            goto lab_0x40c3b8;
        } else {
            int64_t v40 = *v13; // 0x40c474
            int64_t v41 = function_409b10(v40, v14, v38); // 0x40c47c
            v16 = v40;
            v18 = v19;
            if (v41 == 0) {
                goto lab_0x40c3b8;
            } else {
                goto lab_0x40c392;
            }
        }
    }
  lab_0x40c392:;
    int64_t v42 = function_40a5c0(&v5, a4, *v4 + v21); // 0x40c3a4
    if ((int32_t)v42 != 0) {
        // 0x40c520
        free((int64_t *)v7);
        return v42 & 0xffffffff;
    }
    // 0x40c3b1
    v16 = &v5;
    v18 = *v8;
    goto lab_0x40c3b8;
}
// Address range: 0x40c550 - 0x40d05d
int64_t function_40c550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40c550
    int128_t v1; // 0x40c550
    int128_t v2 = v1;
    int64_t * mem = malloc(0x3800); // 0x40c56e
    if (mem == NULL) {
        // 0x40c912
        return 0;
    }
    int128_t v3 = __asm_pxor(v2, v2); // 0x40c58b
    int128_t v4 = __asm_movaps(v3); // bp-152, 0x40c58f
    int64_t v5 = __asm_movaps(v3); // 0x40c59f
    int64_t * v6 = (int64_t *)(a2 + 88); // 0x40c5a9
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 96); // 0x40c5b1
    *v7 = 0;
    int64_t v8; // 0x40c550
    int64_t v9; // 0x40c550
    int64_t v10; // 0x40c550
    int64_t v11; // 0x40c550
    int64_t v12; // 0x40c550
    int64_t v13; // 0x40c550
    int64_t v14; // 0x40c550
    int64_t v15; // 0x40c550
    int64_t v16; // 0x40c550
    int64_t v17; // 0x40c550
    int64_t v18; // 0x40c550
    int64_t v19; // 0x40c550
    int64_t v20; // 0x40c550
    int64_t v21; // 0x40c550
    int64_t v22; // 0x40c550
    int128_t v23; // 0x40c550
    int128_t v24; // 0x40c550
    int128_t v25; // 0x40c550
    int128_t v26; // 0x40c550
    int64_t v27; // 0x40c550
    int64_t v28; // 0x40c550
    int128_t v29; // bp-88, 0x40c550
    int64_t v30; // 0x40c56e
    int64_t v31; // 0x40c594
    int64_t v32; // 0x40c550
    int64_t v33; // 0x40c550
    int64_t v34; // 0x40cf92
    int64_t v35; // 0x40c7f7
    int128_t * v36; // 0x40c550
    int64_t v37; // 0x40c5d2
    int64_t v38; // 0x40c5eb
    uint32_t v39; // 0x40c5ee
    char v40; // 0x40c5f2
    int64_t * mem2; // 0x40c659
    int32_t size2; // 0x40c698
    int64_t * mem3; // 0x40c69d
    int64_t v41; // 0x40c69d
    int64_t v42; // 0x40c6ca
    int64_t v43; // 0x40c6da
    int128_t v44; // 0x40c550
    int128_t v45; // 0x40c550
    int128_t v46; // 0x40c550
    int128_t v47; // 0x40c550
    int128_t v48; // 0x40c550
    if (*(int64_t *)(a2 + 16) < 1) {
        // 0x40cf32
        free(mem);
        goto lab_0x40cf3c;
    } else {
        // 0x40c5bf
        v30 = (int64_t)mem;
        v31 = v30 + 0x1800;
        v32 = &v4;
        v33 = &v29;
        v36 = (int128_t *)(v32 + 16);
        v23 = v5;
        v28 = 0;
        v44 = v3;
        v14 = a1;
        v18 = a2;
        v10 = 0;
        while (true) {
          lab_0x40c5cd:
            // 0x40c5cd
            v11 = v10;
            v19 = v18;
            v15 = v14;
            int128_t v49 = v44;
            int128_t v50 = v23;
            v37 = 8 * v28;
            int64_t v51 = *(int64_t *)(*(int64_t *)(v19 + 24) + v37); // 0x40c5e3
            v38 = 16 * v51 + *(int64_t *)v15;
            int64_t v52 = v38 + 8; // 0x40c5ee
            v39 = *(int32_t *)v52;
            v40 = *(char *)v52;
            v24 = v50;
            v45 = v49;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            switch (v40) {
                case 1: {
                    unsigned char v53 = *(char *)v38; // 0x40c928
                    unsigned char v54 = v53 % 64;
                    int64_t * v55 = (int64_t *)((int64_t)(v53 / 8 & 24) + v32); // 0x40c943
                    *v55 = (v54 == 0 ? 1 : 1 << (int64_t)v54) | *v55;
                    v25 = v50;
                    v47 = v49;
                    goto lab_0x40c947;
                }
                case 3: {
                    int64_t v56 = 0;
                    int64_t * v57 = (int64_t *)(v56 + v32); // 0x40cdb2
                    *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                    v25 = v50;
                    v47 = v49;
                    int64_t v58 = v56 + 8; // 0x40cdc6
                    while (v56 != 24) {
                        // 0x40cdb2
                        v56 = v58;
                        v57 = (int64_t *)(v56 + v32);
                        *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                        v25 = v50;
                        v47 = v49;
                        v58 = v56 + 8;
                    }
                    goto lab_0x40c947;
                }
                case 5: {
                    // 0x40cc60
                    if (*(int32_t *)(v15 + 180) < 2) {
                        int128_t v59 = __asm_pcmpeqd(v49, v49); // 0x40ccf0
                        v4 = __asm_movaps(v59);
                        v26 = __asm_movaps(v59);
                        v48 = v59;
                    } else {
                        int64_t v60 = 0;
                        int64_t * v61 = (int64_t *)(v60 + v32); // 0x40cc79
                        *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                        int64_t v62 = v60 + 8; // 0x40cc8d
                        v26 = v50;
                        v48 = v49;
                        while (v60 != 24) {
                            // 0x40cc79
                            v60 = v62;
                            v61 = (int64_t *)(v60 + v32);
                            *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                            v62 = v60 + 8;
                            v26 = v50;
                            v48 = v49;
                        }
                    }
                    goto lab_0x40cc8f;
                }
                case 7: {
                    int128_t v63 = __asm_pcmpeqd(v49, v49); // 0x40cd90
                    v4 = __asm_movaps(v63);
                    v26 = v50;
                    v48 = v63;
                    goto lab_0x40cc8f;
                }
                default: {
                    goto lab_0x40c622;
                }
            }
        }
      lab_0x40c633:
        if (v13 < 1) {
            // 0x40d045
            free(mem);
            if (v13 != 0) {
                // 0x40c912
                return 0;
            }
            goto lab_0x40cf3c;
        } else {
            int64_t v64 = v13 + 1; // 0x40c648
            int128_t v65 = v64; // bp-120, 0x40c64d
            int64_t size = 8 * v64; // 0x40c652
            mem2 = malloc((int32_t)size);
            if (mem2 == NULL) {
                goto lab_0x40ce07;
            } else {
                // 0x40c672
                v4 = 0;
                if (v13 > 0xaaaaaaaaaaaa855) {
                    goto lab_0x40ce07;
                } else {
                    // 0x40c68d
                    size2 = 24 * (int32_t)v13;
                    mem3 = malloc(size2);
                    if (mem3 == NULL) {
                        goto lab_0x40ce07;
                    } else {
                        // 0x40c6b0
                        v41 = (int64_t)mem3;
                        int64_t v66 = size - 8; // 0x40c6b5
                        int128_t v67 = __asm_pxor(v46, v46); // 0x40c6b9
                        v42 = v66 + v41;
                        v43 = v42 + v66;
                        v29 = __asm_movaps(v67);
                        __asm_movaps(v67);
                        int64_t * v68 = (int64_t *)(v17 + 48);
                        int64_t v69 = 0; // 0x40c6f6
                        int64_t v70 = v30 + 8; // 0x40c6f6
                        int64_t v71 = v30; // 0x40c6f6
                        int64_t v72 = 0; // 0x40c6f6
                        while (true) {
                            int64_t v73 = v70;
                            int64_t v74 = v69;
                            int64_t * v75 = (int64_t *)v73; // 0x40c70a
                            uint64_t v76 = *v75; // 0x40c70a
                            if (v76 >= 1) {
                                int64_t v77 = v76; // 0x40c754
                                for (int64_t i = 0; i < v77; i++) {
                                    int64_t v78 = *(int64_t *)(v73 + 8); // 0x40c718
                                    int64_t v79 = *(int64_t *)(v17 + 24); // 0x40c720
                                    int64_t v80 = *(int64_t *)(v79 + 8 * *(int64_t *)(v78 + 8 * i)); // 0x40c725
                                    int64_t v81 = v77; // 0x40c72d
                                    if (v80 != -1) {
                                        int64_t v82 = function_40a050((int64_t *)&v65, (int128_t *)(*v68 + 24 * v80)); // 0x40c73f
                                        int32_t v83 = v82; // 0x40c744
                                        v4 = v83;
                                        if (v83 != 0) {
                                            // 0x40cdf5
                                            free(mem3);
                                            goto lab_0x40ce07;
                                        }
                                        // 0x40c72f
                                        v81 = *v75;
                                    }
                                    // 0x40c750
                                    v77 = v81;
                                }
                            }
                            int64_t v84 = function_40adc0(&v4, v17, (int64_t *)&v65, 0); // 0x40c767
                            int64_t v85 = 8 * v72; // 0x40c771
                            int64_t * v86 = (int64_t *)(v85 + v41); // 0x40c771
                            *v86 = v84;
                            if (v84 == 0) {
                                // 0x40cec8
                                if ((int32_t)v4 != 0) {
                                    // break -> 0x40cdf5
                                    break;
                                }
                            }
                            // 0x40c77e
                            int64_t v87; // 0x40c550
                            if (*(char *)(v84 + 104) < 0) {
                                int64_t v88 = function_40adc0(&v4, v17, (int64_t *)&v65, 1); // 0x40ce50
                                *(int64_t *)(v85 + v42) = v88;
                                if (v88 == 0) {
                                    // 0x40cde0
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40cdf5
                                        break;
                                    }
                                }
                                int64_t v89 = v74; // 0x40ce70
                                if (v88 != *v86) {
                                    int32_t v90 = *(int32_t *)(v17 + 180); // 0x40ce7c
                                    v89 = v90 < 2 == (1 - v90 & v90) < 0 ? 1 : 0x100000000000000 * v74 >> 56;
                                }
                                int64_t v91 = v89;
                                int64_t v92 = function_40adc0(&v4, v17, (int64_t *)&v65, 2); // 0x40ce9d
                                *(int64_t *)(v85 + v43) = v92;
                                v87 = v91;
                                if (v92 == 0) {
                                    // 0x40ceb4
                                    v87 = v91;
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40cdf5
                                        break;
                                    }
                                }
                            } else {
                                // 0x40c788
                                *(int64_t *)(v85 + v42) = v84;
                                *(int64_t *)(v85 + v43) = v84;
                                v87 = v74;
                            }
                            // 0x40c79a
                            v27 = v87;
                            int64_t v93 = 0;
                            int64_t * v94 = (int64_t *)(v93 + v33); // 0x40c7a4
                            *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                            int64_t v95 = v93 + 8; // 0x40c7bc
                            while (v93 != 24) {
                                // 0x40c7a4
                                v93 = v95;
                                v94 = (int64_t *)(v93 + v33);
                                *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                                v95 = v93 + 8;
                            }
                            // 0x40c7be
                            v72++;
                            v69 = v27;
                            v70 = v73 + 24;
                            v71 += 32;
                            if (v72 == v13) {
                                if ((char)v27 != 0) {
                                    int64_t * mem4 = calloc(8, 512); // 0x40cf92
                                    v34 = (int64_t)mem4;
                                    *v7 = v34;
                                    if (mem4 == NULL) {
                                        // 0x40cdf5
                                        free(mem3);
                                        goto lab_0x40ce07;
                                    } else {
                                        // 0x40cfac
                                        v22 = v33;
                                        v21 = v34;
                                        v9 = v30 + 0x1820;
                                        goto lab_0x40cfd2;
                                    }
                                } else {
                                    int64_t * mem5 = calloc(8, 256); // 0x40c7f7
                                    v35 = (int64_t)mem5;
                                    *v6 = v35;
                                    if (mem5 == NULL) {
                                        // 0x40cdf5
                                        free(mem3);
                                        goto lab_0x40ce07;
                                    } else {
                                        // 0x40c811
                                        v8 = 0;
                                        goto lab_0x40c82f;
                                    }
                                }
                            }
                        }
                        // 0x40cdf5
                        free(mem3);
                        goto lab_0x40ce07;
                    }
                }
            }
        }
    }
  lab_0x40cc23:;
    int64_t v96 = v30 + 16; // 0x40cc28
    int64_t v97; // 0x40c550
    int64_t v98 = v97 + v96; // 0x40cc30
    int64_t v99 = v96; // 0x40cc34
    goto lab_0x40cc38;
  lab_0x40ca6d:;
    // 0x40ca6d
    int64_t v145; // 0x40c550
    int64_t v146; // 0x40ca86
    while (true) {
        // 0x40ca76
        int64_t v147; // 0x40c550
        int64_t v148 = v147;
        int64_t v149; // 0x40c550
        int64_t v150 = v149;
        int64_t v151 = 8 * v150; // 0x40ca76
        int64_t v152 = *(int64_t *)(v151 + v32); // 0x40ca76
        int64_t v153 = *(int64_t *)(v151 + v145); // 0x40ca7a
        int64_t v154 = v153 & v152; // 0x40ca7a
        int64_t v155; // 0x40c550
        *(int64_t *)(v151 + v155) = v154;
        int64_t v156 = v150 + 1; // 0x40ca82
        v146 = v154 | v148;
        v149 = v156;
        v147 = v146;
        if (v156 == 4) {
            // break -> 0x40ca8f
            break;
        }
    }
    int64_t v157 = 0; // 0x40ca92
    int64_t v158 = 0; // 0x40ca92
    int64_t v159 = 0; // 0x40ca92
    int64_t v160; // 0x40c550
    int64_t v161; // 0x40c550
    int64_t v162; // 0x40c550
    if (v146 != 0) {
        int64_t v163 = v159;
        int64_t v164 = v158;
        int64_t v165 = v157;
        int64_t v166 = 8 * v165; // 0x40caa2
        int64_t * v167 = (int64_t *)(v166 + v32); // 0x40caa2
        int64_t v168 = *v167; // 0x40caa2
        int64_t v169 = *(int64_t *)(v166 + v145); // 0x40caa6
        int64_t v170 = v169 & -1 - v168; // 0x40cab0
        int64_t v171 = v168 & -1 - v169; // 0x40cab6
        *(int64_t *)(v166 + v33) = v170;
        int64_t v172 = v170 | v163; // 0x40cabd
        *v167 = v171;
        int64_t v173 = v165 + 1; // 0x40cac4
        int64_t v174 = v171 | v164; // 0x40cac8
        v157 = v173;
        v158 = v174;
        v159 = v172;
        while (v173 != 4) {
            // 0x40caa2
            v163 = v159;
            v164 = v158;
            v165 = v157;
            v166 = 8 * v165;
            v167 = (int64_t *)(v166 + v32);
            v168 = *v167;
            v169 = *(int64_t *)(v166 + v145);
            v170 = v169 & -1 - v168;
            v171 = v168 & -1 - v169;
            *(int64_t *)(v166 + v33) = v170;
            v172 = v170 | v163;
            *v167 = v171;
            v173 = v165 + 1;
            v174 = v171 | v164;
            v157 = v173;
            v158 = v174;
            v159 = v172;
        }
        // 0x40cad1
        int64_t v175; // 0x40c550
        int64_t v176 = 24 * v175 + v30; // 0x40cadb
        int64_t v177 = v176; // 0x40cae2
        int64_t v178; // 0x40c550
        int64_t v179 = v178; // 0x40cae2
        if (v172 != 0) {
            int128_t v180 = v29; // 0x40cae4
            int128_t v181 = __asm_movdqa(v180); // 0x40cae4
            int64_t v182 = 32 * v178 + v31; // 0x40caf9
            int128_t v183 = *(int128_t *)v182; // 0x40cafe
            __asm_movups(v183, v181);
            int128_t v184; // 0x40c550
            int128_t v185 = __asm_movdqa(v184); // 0x40cb01
            int128_t v186 = *(int128_t *)(v182 + 16); // 0x40cb0a
            __asm_movups(v186, v185);
            int128_t v187 = __asm_movdqa(0); // 0x40cb0e
            int64_t v188 = 24 * v178;
            int128_t v189 = *(int128_t *)v145; // 0x40cb20
            __asm_movups(v189, v187);
            int128_t v190; // 0x40c550
            int128_t v191 = __asm_movdqa(v190); // 0x40cb25
            int128_t v192 = *(int128_t *)(v145 + 16); // 0x40cb2e
            __asm_movups(v192, v191);
            if ((int32_t)function_40abb0(v188 + v30, v176) != 0) {
                goto lab_0x40cc23;
            }
            // 0x40cb41
            v177 = 0x100000000 * v176 >> 32;
            v179 = v178 + 1;
        }
        int64_t v193 = v179;
        int64_t v194 = v177;
        int64_t * v195; // 0x40c550
        int64_t v196 = *v195; // 0x40cb54
        int64_t v197 = *(int64_t *)(v196 + v37); // 0x40cb58
        if ((char)function_408500(v194, v197) == 0) {
            // 0x40cb4a
            goto lab_0x40cc23;
        }
        // 0x40cb6c
        int64_t v198; // 0x40c550
        v162 = v198;
        v160 = v193;
        v161 = v175;
        if (v174 == 0) {
            // break -> 0x40cb85
            goto lab_0x40cb85_2;
        }
    }
    goto lab_0x40ca4e;
  lab_0x40ca4e:;
    // 0x40ca4e
    int64_t v199; // 0x40c550
    int64_t v200 = v199;
    int64_t v201; // 0x40c550
    int64_t v202 = v201 + 1; // 0x40ca4e
    v199 = v200;
    int64_t v203; // 0x40c550
    v203 += 32;
    v201 = v202;
    v162 = 0x100000000000000 * v19 >> 56;
    v160 = v200;
    v161 = v202;
    if (v202 >= v200) {
        // break -> 0x40cb85
        goto lab_0x40cb85_2;
    }
    goto lab_0x40ca5f;
  lab_0x40c622:
    // 0x40c622
    v13 = v12;
    v17 = v16;
    v46 = v45;
    int64_t v206 = v28 + 1; // 0x40c622
    v23 = v24;
    v28 = v206;
    v44 = v46;
    v14 = v17;
    v18 = v20;
    v10 = v13;
    if (v206 >= *(int64_t *)(v20 + 16)) {
        // break -> 0x40c633
        goto lab_0x40c633;
    }
    goto lab_0x40c5cd;
  lab_0x40c947:;
    uint32_t v207 = v39 / 256; // 0x40c5f7
    uint32_t v208 = v207 & 0xff03ff;
    int128_t v209 = v47;
    int128_t v210 = v25;
    int128_t v211 = v209; // 0x40c94a
    int64_t v212; // 0x40c5fa
    int128_t v213; // 0x40c550
    if ((int16_t)v208 == 0) {
        goto lab_0x40ca00;
    } else {
        // 0x40c950
        v212 = v208;
        v213 = v209;
        if ((v212 & 32) != 0) {
            int128_t v214 = v4; // 0x40ccc0
            int128_t v215 = __asm_pxor(v209, v209); // 0x40ccc5
            v4 = __asm_movaps(v215);
            *v36 = (int128_t)__asm_movaps(v215);
            v24 = v210;
            v45 = v215;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            if ((v214 & 1024) == 0) {
                goto lab_0x40c622;
            } else {
                // 0x40ccd9
                v4 = 1024;
                v213 = v215;
                goto lab_0x40c958;
            }
        } else {
            goto lab_0x40c958;
        }
    }
  lab_0x40cc8f:;
    int128_t v216 = v48;
    int128_t v217 = v26;
    int64_t v218 = *(int64_t *)(v15 + 216); // 0x40cc8f
    if ((v218 & 64) == 0) {
        // 0x40cc9b
        v4 = (int64_t)v4 & -1025;
    }
    // 0x40cca4
    v25 = v217;
    v47 = v216;
    if ((char)v218 <= 255) {
        // 0x40ccb0
        v4 = (int64_t)v4 & -2;
        v25 = v217;
        v47 = v216;
    }
    goto lab_0x40c947;
  lab_0x40ca00:;
    int128_t v219 = v211;
    v162 = v19;
    v160 = v11;
    v161 = 0;
    if (v11 >= 1) {
        // 0x40ca11
        v199 = v11;
        v203 = v31;
        v201 = 0;
        while (true) {
          lab_0x40ca5f:
            // 0x40ca5f
            if (v40 == 1) {
                unsigned char v204 = *(char *)v38; // 0x40ca30
                int64_t v205 = *(int64_t *)(32 * v201 + v31 + (int64_t)(v204 / 8 & 24)); // 0x40ca43
                if ((1 << (int64_t)(v204 % 64) & v205) != 0) {
                    goto lab_0x40ca6d;
                } else {
                    goto lab_0x40ca4e;
                }
            } else {
                goto lab_0x40ca6d;
            }
        }
    }
  lab_0x40cb85_2:;
    int64_t v220 = v160;
    int64_t v221 = v162;
    v24 = v210;
    v45 = v219;
    v16 = v15;
    v20 = v221;
    v12 = v220;
    int64_t v222; // 0x40c550
    int64_t v223; // 0x40c550
    int64_t v224; // 0x40c550
    int64_t result; // 0x40c550
    int128_t v225; // 0x40c550
    if (v220 != v161) {
        goto lab_0x40c622;
    } else {
        int128_t v226 = __asm_movdqa(v4); // 0x40cb8e
        int64_t v227 = 32 * v220 + v31; // 0x40cba5
        __asm_movups(*(int128_t *)v227, v226);
        __asm_movups(*(int128_t *)(v227 + 16), __asm_movdqa(v210));
        v97 = 24 * v220;
        int64_t v228 = v97 + v30; // 0x40cbcd
        int64_t * v229 = (int64_t *)v228;
        *v229 = 1;
        int64_t * v230 = (int64_t *)(v228 + 8);
        *v230 = 1;
        int64_t * mem6 = malloc(8); // 0x40cbe6
        *(int64_t *)(v228 + 16) = (int64_t)mem6;
        if (mem6 == NULL) {
            // 0x40c8eb
            *v230 = 0;
            *v229 = 0;
            if (v220 != 0) {
                goto lab_0x40cc23;
            } else {
                // 0x40c904
                free(mem);
                result = 0;
                goto lab_0x40c912;
            }
        }
        // 0x40cc02
        *mem6 = *(int64_t *)(*(int64_t *)(v221 + 24) + v37);
        v225 = v219;
        v223 = 0x100000000000000 * v15 >> 56;
        v224 = v221;
        v222 = v220 + 1;
        goto lab_0x40cc09;
    }
  lab_0x40c958:;
    int128_t v231 = v213;
    v225 = v231;
    v223 = v15;
    v224 = v19;
    v222 = v11;
    if ((char)v207 <= -1) {
        goto lab_0x40cc09;
    } else {
        if ((v212 & 4) == 0) {
            goto lab_0x40c9b0;
        } else {
            if (v40 == 1) {
                // 0x40cd70
                v225 = v231;
                v223 = v15;
                v224 = v19;
                v222 = v11;
                if ((*(char *)(v38 + 10) & 64) == 0) {
                    goto lab_0x40cc09;
                } else {
                    // 0x40cd7b
                    if (*(int32_t *)(v15 + 180) > 1) {
                        goto lab_0x40c97b;
                    } else {
                        goto lab_0x40cd40;
                    }
                }
            } else {
                // 0x40c96d
                if (*(int32_t *)(v15 + 180) < 2) {
                    goto lab_0x40cd40;
                } else {
                    goto lab_0x40c97b;
                }
            }
        }
    }
  lab_0x40cc09:;
    int128_t v232 = v225;
    int128_t v233 = __asm_pxor(v232, v232); // 0x40cc09
    v4 = __asm_movaps(v233);
    *v36 = (int128_t)__asm_movaps(v233);
    v24 = v210;
    v45 = v233;
    v16 = v223;
    v20 = v224;
    v12 = v222;
    goto lab_0x40c622;
  lab_0x40c9b0:
    // 0x40c9b0
    v211 = v231;
    if ((v212 & 8) == 0) {
        goto lab_0x40ca00;
    } else {
        if (v40 == 1) {
            // 0x40cdd0
            v225 = v231;
            v223 = v15;
            v224 = v19;
            v222 = v11;
            if ((*(char *)(v38 + 10) & 64) == 0) {
                goto lab_0x40c9bd;
            } else {
                goto lab_0x40cc09;
            }
        } else {
            goto lab_0x40c9bd;
        }
    }
  lab_0x40c9bd:
    // 0x40c9bd
    if (*(int32_t *)(v15 + 180) < 2) {
        int64_t v234 = 0; // 0x40cd1f
        int64_t v235 = 8 * v234; // 0x40cd0c
        int64_t * v236 = (int64_t *)(v235 + v32); // 0x40cd17
        int64_t v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235); // 0x40cd17
        *v236 = v237;
        v234++;
        int64_t v238 = v237; // 0x40cd23
        int64_t v239 = v238; // 0x40cd2a
        while (v234 != 4) {
            // 0x40cd0c
            v235 = 8 * v234;
            v236 = (int64_t *)(v235 + v32);
            v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235);
            *v236 = v237;
            v234++;
            v238 = v237 | v239;
            v239 = v238;
        }
        // 0x40cd2c
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v238 == 0) {
            goto lab_0x40c622;
        } else {
            goto lab_0x40ca00;
        }
    } else {
        int64_t v240 = 0; // 0x40c9d1
        int64_t v241 = 8 * v240; // 0x40c9d3
        int64_t v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120)); // 0x40c9db
        int64_t * v243 = (int64_t *)(v241 + v32); // 0x40c9e2
        int64_t v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241)); // 0x40c9e2
        *v243 = v244;
        v240++;
        int64_t v245 = v244; // 0x40c9ee
        int64_t v246 = v245; // 0x40c9f5
        while (v240 != 4) {
            // 0x40c9d3
            v241 = 8 * v240;
            v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120));
            v243 = (int64_t *)(v241 + v32);
            v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241));
            *v243 = v244;
            v240++;
            v245 = v244 | v246;
            v246 = v245;
        }
        // 0x40c9f7
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v245 == 0) {
            goto lab_0x40c622;
        } else {
            goto lab_0x40ca00;
        }
    }
  lab_0x40cd40:;
    int64_t v247 = 0; // 0x40cd42
    int64_t v248 = 8 * v247; // 0x40cd44
    int64_t * v249 = (int64_t *)(v248 + v32); // 0x40cd44
    int64_t v250 = *(int64_t *)(v15 + 184 + v248) & *v249; // 0x40cd48
    *v249 = v250;
    int64_t v251 = v247 + 1; // 0x40cd54
    int64_t v252 = v250; // 0x40cd58
    v247 = v251;
    int64_t v253 = v252; // 0x40cd5f
    while (v251 != 4) {
        // 0x40cd44
        v248 = 8 * v247;
        v249 = (int64_t *)(v248 + v32);
        v250 = *(int64_t *)(v15 + 184 + v248) & *v249;
        *v249 = v250;
        v251 = v247 + 1;
        v252 = v250 | v253;
        v247 = v251;
        v253 = v252;
    }
    // 0x40cd61
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v252 != 0) {
        goto lab_0x40c9b0;
    } else {
        goto lab_0x40c622;
    }
  lab_0x40c97b:;
    int64_t v254 = 0; // 0x40c981
    int64_t v255 = 8 * v254; // 0x40c983
    int64_t v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120)); // 0x40c983
    int64_t * v257 = (int64_t *)(v255 + v32); // 0x40c992
    int64_t v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257; // 0x40c992
    *v257 = v258;
    int64_t v259 = v254 + 1; // 0x40c99a
    int64_t v260 = v258; // 0x40c99e
    v254 = v259;
    int64_t v261 = v260; // 0x40c9a5
    while (v259 != 4) {
        // 0x40c983
        v255 = 8 * v254;
        v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120));
        v257 = (int64_t *)(v255 + v32);
        v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257;
        *v257 = v258;
        v259 = v254 + 1;
        v260 = v258 | v261;
        v254 = v259;
        v261 = v260;
    }
    // 0x40c9a7
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v260 == 0) {
        goto lab_0x40c622;
    } else {
        goto lab_0x40c9b0;
    }
  lab_0x40cf3c:;
    int64_t * mem7 = calloc(8, 256); // 0x40cf46
    int64_t v262 = (int64_t)mem7; // 0x40cf46
    *v6 = v262;
    // 0x40c912
    return v262 & -256 | (int64_t)(mem7 != NULL);
  lab_0x40ce07:
    // 0x40ce07
    free(mem2);
    int64_t v263 = v30 + 16; // 0x40ce14
    int64_t v264 = v263 + 24; // 0x40ce23
    free((int64_t *)*(int64_t *)v263);
    int64_t v265 = v264; // 0x40ce2f
    while (v264 != 24 * v13 + v263) {
        // 0x40ce20
        v264 = v265 + 24;
        free((int64_t *)*(int64_t *)v265);
        v265 = v264;
    }
    // 0x40ce31
    free(mem);
    result = 0;
  lab_0x40c912:
    // 0x40c912
    return result;
  lab_0x40cc38:;
    int64_t v100 = v99 + 24; // 0x40cc3b
    free((int64_t *)*(int64_t *)v99);
    v99 = v100;
    if (v98 != v100) {
        goto lab_0x40cc38;
    } else {
        // 0x40cc49
        free(mem);
        result = 0;
        goto lab_0x40c912;
    }
  lab_0x40cfd2:;
    int64_t v101 = v9;
    int64_t v102 = v21;
    int64_t v103 = *(int64_t *)v22; // 0x40cfd2
    int64_t v104; // 0x40c550
    int64_t v105; // 0x40c550
    int64_t v106; // 0x40c550
    int64_t * v107; // 0x40c550
    if (v103 == 0) {
        goto lab_0x40cff2;
    } else {
        // 0x40cfe2
        v107 = (int64_t *)(v101 - 32);
        v105 = v103;
        v106 = 1;
        v104 = v102;
        goto lab_0x40cfe2_2;
    }
  lab_0x40c82f:;
    int64_t v108 = v8;
    int64_t v109 = *(int64_t *)(v108 + v33); // 0x40c832
    int64_t v110; // 0x40c550
    int64_t v111; // 0x40c550
    int64_t v112; // 0x40c550
    int64_t * v113; // 0x40c550
    int64_t v114; // 0x40c550
    int64_t * v115; // 0x40c550
    if (v109 == 0) {
        goto lab_0x40c864;
    } else {
        // 0x40c850
        v113 = (int64_t *)(v108 + v31);
        v114 = v30 + 0x1820 + v108;
        v115 = (int64_t *)(v17 + 184 + v108);
        v110 = v109;
        v111 = 1;
        v112 = 64 * v108 + v35;
        goto lab_0x40c850_2;
    }
  lab_0x40cff2:;
    int64_t v116 = v22 + 8; // 0x40cff2
    int64_t v117 = v34; // 0x40d004
    v22 = v116;
    v21 = v102 + 512;
    v9 = v101 + 8;
    int64_t v118; // bp-56, 0x40c550
    if (v116 != (int64_t)&v118) {
        goto lab_0x40cfd2;
    } else {
        goto lab_0x40c86e;
    }
  lab_0x40c864:
    // 0x40c864
    v8 = v108 + 8;
    v117 = v35;
    if (v108 != 24) {
        goto lab_0x40c82f;
    } else {
        goto lab_0x40c86e;
    }
  lab_0x40c86e:;
    int64_t v119; // 0x40c550
    char v120; // 0x40c550
    if ((v120 & 4) == 0) {
        goto lab_0x40c89d;
    } else {
        // 0x40c87f
        v119 = 0;
        goto lab_0x40c87f_2;
    }
  lab_0x40cfe2_2:;
    int64_t v121 = v104;
    int64_t v122 = v106;
    uint64_t v123 = v105;
    int64_t v124; // 0x40c550
    int64_t v125; // 0x40c550
    int64_t v126; // 0x40c550
    if (v123 % 2 != 0) {
        // 0x40d00b
        v126 = 0;
        v125 = v101;
        v124 = 0;
        if ((*v107 & v122) != 0) {
            goto lab_0x40d02c;
        } else {
            goto lab_0x40d016;
        }
    } else {
        goto lab_0x40cfe6;
    }
  lab_0x40c850_2:;
    int64_t v127 = v112;
    int64_t v128 = v111;
    uint64_t v129 = v110;
    int64_t v130; // 0x40c550
    int64_t v131; // 0x40c550
    int64_t v132; // 0x40c550
    if (v129 % 2 != 0) {
        // 0x40cee0
        v131 = v114;
        v130 = 0;
        v132 = 0;
        if ((*v113 & v128) != 0) {
            goto lab_0x40cf0f;
        } else {
            goto lab_0x40cef8;
        }
    } else {
        goto lab_0x40c858;
    }
  lab_0x40c89d:
    // 0x40c89d
    free(mem3);
    free(mem2);
    int64_t v133 = v30 + 16; // 0x40c8be
    int64_t v134 = v133; // 0x40c8c5
    goto lab_0x40c8c8;
  lab_0x40cfe6:
    // 0x40cfe6
    v105 = v123 / 2;
    v106 = 2 * v122;
    v104 = v121 + 8;
    if (v123 >= 2) {
        goto lab_0x40cfe2_2;
    } else {
        goto lab_0x40cff2;
    }
  lab_0x40c858:
    // 0x40c858
    v110 = v129 / 2;
    v111 = 2 * v128;
    v112 = v127 + 8;
    if (v129 >= 2) {
        goto lab_0x40c850_2;
    } else {
        goto lab_0x40c864;
    }
  lab_0x40c8c8:;
    int64_t v135 = v134 + 24; // 0x40c8cc
    free((int64_t *)*(int64_t *)v134);
    v134 = v135;
    if (v133 + (int64_t)size2 != v135) {
        goto lab_0x40c8c8;
    } else {
        // 0x40c8da
        free(mem);
        result = 1;
        goto lab_0x40c912;
    }
  lab_0x40c87f_2:;
    int64_t v136 = v119;
    if ((*(char *)(v30 + 0x1801 + 32 * v136) & 4) != 0) {
        int64_t v137 = *(int64_t *)(8 * v136 + v43); // 0x40cf6e
        *(int64_t *)(v117 + 80) = v137;
        if ((char)v27 == 0) {
            goto lab_0x40c89d;
        } else {
            // 0x40cf7c
            *(int64_t *)(v117 + 2128) = v137;
            goto lab_0x40c89d;
        }
    } else {
        int64_t v138 = v136 + 1; // 0x40c894
        v119 = v138;
        if (v138 != v13) {
            goto lab_0x40c87f_2;
        } else {
            goto lab_0x40c89d;
        }
    }
  lab_0x40d02c:;
    int64_t v139 = 8 * v124; // 0x40d02c
    *(int64_t *)v121 = *(int64_t *)(v139 + v41);
    *(int64_t *)(v121 + 2048) = *(int64_t *)(v139 + v42);
    goto lab_0x40cfe6;
  lab_0x40d016:;
    int64_t v140 = v125;
    int64_t v141 = v126 + 1; // 0x40d019
    v126 = v141;
    v125 = v140 + 32;
    v124 = v141;
    if ((*(int64_t *)v140 & v122) == 0) {
        goto lab_0x40d016;
    } else {
        goto lab_0x40d02c;
    }
  lab_0x40cf0f:;
    int64_t v142 = v132;
    if ((*v115 & v128) == 0) {
        // 0x40cf25
        *(int64_t *)v127 = *(int64_t *)(v142 + v41);
        goto lab_0x40c858;
    } else {
        // 0x40cf19
        *(int64_t *)v127 = *(int64_t *)(v142 + v42);
        goto lab_0x40c858;
    }
  lab_0x40cef8:;
    int64_t v143 = v131;
    int64_t v144 = v130 + 1; // 0x40cefb
    v131 = v143 + 32;
    v130 = v144;
    if ((*(int64_t *)v143 & v128) == 0) {
        goto lab_0x40cef8;
    } else {
        // 0x40cf0b
        v132 = 8 * v144;
        goto lab_0x40cf0f;
    }
}
// Address range: 0x40d060 - 0x40d0e7
int64_t function_40d060(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 48; // 0x40d060
    char * v2 = (char *)v1; // 0x40d060
    if (*v2 == 16) {
        int64_t v3 = *(int64_t *)(a2 + 8); // 0x40d066
        *(int64_t *)(a2 + 24) = *(int64_t *)(v3 + 24);
        *(int64_t *)(a2 + 56) = *(int64_t *)(v3 + 56);
        return 0;
    }
    // 0x40d080
    *(int64_t *)(a2 + 24) = a2;
    int64_t v4 = a2 + 40; // 0x40d094
    int64_t v5 = function_4091e0(a1, *(int64_t *)v4, *(int64_t *)v1); // 0x40d098
    *(int64_t *)(a2 + 56) = v5;
    if (v5 == -1) {
        // 0x40d0d6
        return 12;
    }
    // 0x40d0aa
    if (*v2 == 12) {
        int32_t * v6 = (int32_t *)(a1 + 8 + 16 * v5); // 0x40d0c8
        *v6 = *v6 & -0x3ff01 | 256 * *(int32_t *)v4 & 0x3ff00;
    }
    // 0x40d0d6
    return 0;
}
// Address range: 0x40d0f0 - 0x40d26c
int64_t function_40d0f0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        int64_t v2 = 0; // 0x40d10b
        if (*v1 != 0) {
            int64_t v3 = v2 + 1; // 0x40d11f
            int64_t v4 = a1 + 16 * v2; // 0x40d127
            function_409190(v4);
            v2 = v3;
            int64_t v5 = v4; // 0x40d134
            while (*v1 > v3) {
                // 0x40d11c
                v3 = v2 + 1;
                v4 = v5 + 16 * v2;
                function_409190(v4);
                v2 = v3;
                v5 = v4;
            }
        }
    }
    // 0x40d136
    free((int64_t *)*(int64_t *)(a1 + 24));
    int64_t * v6; // 0x40d0f0
    int64_t * v7; // 0x40d0f0
    int64_t * v8; // 0x40d0f0
    if (*v1 == 0) {
        // 0x40d136
        v7 = (int64_t *)(a1 + 56);
        v6 = (int64_t *)(a1 + 48);
        v8 = (int64_t *)(a1 + 40);
    } else {
        int64_t * v9 = (int64_t *)(a1 + 48);
        int64_t * v10 = (int64_t *)(a1 + 56);
        int64_t * v11 = (int64_t *)(a1 + 40);
        int64_t v12 = 0;
        int64_t v13 = *v9; // 0x40d150
        if (v13 != 0) {
            // 0x40d15a
            free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
        }
        int64_t v14 = *v10; // 0x40d168
        if (v14 != 0) {
            // 0x40d172
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
        }
        int64_t v15 = *v11; // 0x40d180
        if (v15 != 0) {
            // 0x40d18a
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
        }
        int64_t v16 = v12 + 1; // 0x40d198
        v7 = v10;
        v6 = v9;
        v8 = v11;
        while (*v1 > v16) {
            // 0x40d150
            v12 = v16;
            v13 = *v9;
            if (v13 != 0) {
                // 0x40d15a
                free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
            }
            // 0x40d168
            v14 = *v10;
            if (v14 != 0) {
                // 0x40d172
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
            }
            // 0x40d180
            v15 = *v11;
            if (v15 != 0) {
                // 0x40d18a
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
            }
            // 0x40d198
            v16 = v12 + 1;
            v7 = v10;
            v6 = v9;
            v8 = v11;
        }
    }
    // 0x40d1a3
    free((int64_t *)*v8);
    free((int64_t *)*v6);
    int64_t * v17 = (int64_t *)*v7; // 0x40d1bf
    free(v17);
    free(v17);
    int64_t * v18 = (int64_t *)(a1 + 64); // 0x40d1cd
    int64_t v19 = *v18; // 0x40d1cd
    int64_t * v20 = NULL; // 0x40d1d5
    if (v19 != 0) {
        int64_t v21 = 0; // 0x40d213
        int64_t v22 = 24 * v21 + v19; // 0x40d1e7
        int64_t * v23 = (int64_t *)v22; // 0x40d1eb
        int64_t * v24 = (int64_t *)(v22 + 16);
        int64_t v25 = 0; // 0x40d1f0
        int64_t v26; // 0x40d200
        if (*v23 >= 1) {
            v26 = v25 + 1;
            function_4096e0(*(int64_t *)(*v24 + 8 * v25));
            v25 = v26;
            while (v26 < *v23) {
                // 0x40d1f8
                v26 = v25 + 1;
                function_4096e0(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
            }
        }
        // 0x40d20f
        v21++;
        free((int64_t *)*v24);
        int64_t v27 = *v18;
        while (*(int64_t *)(a1 + 136) >= v21) {
            // 0x40d1e0
            v22 = 24 * v21 + v27;
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 16);
            v25 = 0;
            if (*v23 >= 1) {
                v26 = v25 + 1;
                function_4096e0(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
                while (v26 < *v23) {
                    // 0x40d1f8
                    v26 = v25 + 1;
                    function_4096e0(*(int64_t *)(*v24 + 8 * v25));
                    v25 = v26;
                }
            }
            // 0x40d20f
            v21++;
            free((int64_t *)*v24);
            v27 = *v18;
        }
        // 0x40d235
        v20 = (int64_t *)v27;
    }
    // 0x40d235
    free(v20);
    int64_t v28 = *(int64_t *)(a1 + 120); // 0x40d23a
    if (v28 != (int64_t)&g26) {
        // 0x40d248
        free((int64_t *)v28);
    }
    // 0x40d24d
    free((int64_t *)*(int64_t *)(a1 + 224));
    free((int64_t *)a1);
    return &g67;
}
// Address range: 0x40d270 - 0x40d2be
int64_t function_40d270(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 < 1) {
        // 0x40d2b0
        free((int64_t *)*v1);
        return &g67;
    }
    int64_t v2 = 0;
    int64_t v3 = v2 + 1; // 0x40d289
    int64_t v4 = 48 * v2; // 0x40d28d
    free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
    uint64_t v5 = *(int64_t *)(v4 + 16 + *v1); // 0x40d2a0
    free((int64_t *)v5);
    while (v3 < v5) {
        // 0x40d280
        v2 = v3;
        v3 = v2 + 1;
        v4 = 48 * v2;
        free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
        v5 = *(int64_t *)(v4 + 16 + *v1);
        free((int64_t *)v5);
    }
    // 0x40d2b0
    free((int64_t *)*v1);
    return &g67;
}
// Address range: 0x40d2c0 - 0x40d350
int64_t function_40d2c0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int128_t * a6) {
    int64_t v1 = a1 - 1; // 0x40d2c7
    *(int64_t *)a1 = v1;
    if (v1 < 0) {
        // 0x40d332
        __assert_fail("num >= 0", "lib/regexec.c", 1359, "pop_fail_stack");
        return &g67;
    }
    int64_t v2 = 48 * v1; // 0x40d2de
    int64_t v3 = v2 + a2; // 0x40d2e8
    *a3 = *(int64_t *)v3;
    int64_t v4 = *(int64_t *)(v3 + 16); // 0x40d2f1
    memcpy((int64_t *)a5, (int64_t *)v4, 16 * (int32_t)a4);
    int64_t * v5 = (int64_t *)((int64_t)a6 + 16); // 0x40d2fd
    free((int64_t *)*v5);
    int64_t v6 = v4 + v2;
    free((int64_t *)*(int64_t *)(v6 + 16));
    *a6 = (int128_t)__asm_movaps(__asm_movdqu(*(int128_t *)(v6 + 24)));
    *v5 = *(int64_t *)(v6 + 40);
    return *(int64_t *)(v6 + 8);
}
// Address range: 0x40d350 - 0x40d39c
int64_t function_40d350(int64_t a1, int64_t str) {
    // 0x40d350
    int64_t v1; // 0x40d350
    uint64_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x40d35f
    if (len != 1) {
        // 0x40d390
        return 3;
    }
    int64_t * v3 = (int64_t *)((v2 / 8 & 24) + a1); // 0x40d37a
    *v3 = *v3 | (int64_t)len << v2 % 64;
    return 0;
}
// Address range: 0x40d3a0 - 0x40db66
int64_t function_40d3a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = a4; // 0x40d3c1
    int64_t v3 = a6; // 0x40d3c1
    int64_t v4; // 0x40d3a0
    int64_t v5; // 0x40d3a0
    int64_t v6; // 0x40d3a0
    int64_t v7; // 0x40d3a0
    int64_t v8; // 0x40d3a0
    bool v9; // 0x40d3a0
    if ((a7 & 0x400000) == 0) {
        goto lab_0x40d3e5;
    } else {
        int64_t v10 = v9 ? -1 : 1;
        int64_t v11 = (int64_t)"upper"; // 0x40d3a0
        int64_t v12 = a6; // 0x40d3a0
        unsigned char v13 = *(char *)v12; // 0x40d3d0
        char v14 = *(char *)v11; // 0x40d3d0
        v2 = 5;
        char v15 = v14; // 0x40d3d0
        bool v16 = false; // 0x40d3d0
        while (v13 == v14) {
            // 0x40d3c3
            v11 += v10;
            v12 += v10;
            v15 = v13;
            v16 = true;
            if (v2 == 0) {
                // break -> 
                break;
            }
            v13 = *(char *)v12;
            v14 = *(char *)v11;
            v2--;
            v15 = v14;
            v16 = false;
        }
        unsigned char v17 = v15;
        v3 = (int64_t)"alpha";
        int64_t v18 = (int64_t)"lower"; // 0x40d3d9
        int64_t v19 = a6; // 0x40d3d9
        if ((v13 >= v17 && !v16) != v13 < v17) {
            unsigned char v20 = *(char *)v19; // 0x40d4e3
            char v21 = *(char *)v18; // 0x40d4e3
            int64_t v22 = 5; // 0x40d4e3
            char v23 = v21; // 0x40d4e3
            bool v24 = false; // 0x40d4e3
            while (v20 == v21) {
                // 0x40d4d6
                v18 += v10;
                v19 += v10;
                v23 = v20;
                v24 = true;
                if (v22 == 0) {
                    // break -> 
                    break;
                }
                v20 = *(char *)v19;
                v21 = *(char *)v18;
                v22--;
                v23 = v21;
                v24 = false;
            }
            unsigned char v25 = v23;
            int64_t v26 = !((v20 < v25 | v24)) == v20 < v25 ? (int64_t)"alpha" : a6; // 0x40d4f5
            v6 = a3;
            v8 = v22;
            v4 = v26;
            v7 = v22;
            v5 = v26;
            if (v22 != v1) {
                goto lab_0x40d3f5;
            } else {
                goto lab_0x40d505;
            }
        } else {
            goto lab_0x40d3e5;
        }
    }
  lab_0x40d3e5:
    // 0x40d3e5
    v6 = a3;
    v8 = v2;
    v4 = v3;
    v7 = v1;
    v5 = v3;
    if (v2 == v1) {
        goto lab_0x40d505;
    } else {
        goto lab_0x40d3f5;
    }
  lab_0x40d505:;
    int64_t v27 = 2 * v7 | 1; // 0x40d505
    int64_t * v28 = (int64_t *)a3; // 0x40d51e
    int64_t * mem = realloc(v28, 8 * (int32_t)v27); // 0x40d51e
    if (mem == NULL) {
        // 0x40d486
        return 12;
    }
    int64_t v29 = (int64_t)mem; // 0x40d51e
    *v28 = v29;
    *a5 = v27;
    v6 = v29;
    v8 = v7;
    v4 = v5;
    goto lab_0x40d3f5;
  lab_0x40d3f5:
    // 0x40d3f5
    *(int64_t *)a4 = v8 + 1;
    char * name = (char *)v4; // 0x40d404
    *(int64_t *)(8 * v8 + v6) = (int64_t)wctype(name);
    int64_t v30 = v9 ? -1 : 1;
    int64_t v31 = (int64_t)"alnum"; // 0x40d3a0
    int64_t v32 = v4; // 0x40d3a0
    int64_t v33 = 6; // 0x40d3a0
    unsigned char v34 = *(char *)v32; // 0x40d41a
    char v35 = *(char *)v31; // 0x40d41a
    char v36 = v35; // 0x40d41a
    bool v37 = false; // 0x40d41a
    while (v34 == v35) {
        int64_t v38 = v33 - 1; // 0x40d41a
        v31 += v30;
        v32 += v30;
        v33 = v38;
        v36 = v34;
        v37 = true;
        if (v38 == 0) {
            // break -> 
            break;
        }
        v34 = *(char *)v32;
        v35 = *(char *)v31;
        v36 = v35;
        v37 = false;
    }
    unsigned char v39 = v36;
    int64_t v40 = (int64_t)"cntrl"; // 0x40d423
    int64_t v41 = v4; // 0x40d423
    int64_t v42 = 6; // 0x40d423
    if ((v34 >= v39 && !v37) == v34 < v39) {
        int64_t v43 = (int64_t)*__ctype_b_loc(); // 0x40d4a4
        if (a1 != 0) {
            int64_t v44 = 0;
            unsigned char v45; // 0x40d6ce
            unsigned char v46; // 0x40d3a0
            int64_t * v47; // 0x40d6e3
            if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                // 0x40d6ce
                v45 = *(char *)(v44 + a1);
                v46 = v45 % 64;
                v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
            }
            int64_t v48 = v44 + 1; // 0x40d6f1
            while (v44 != 255) {
                // 0x40d6c8
                v44 = v48;
                if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                    // 0x40d6ce
                    v45 = *(char *)(v44 + a1);
                    v46 = v45 % 64;
                    v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                    *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
                }
                // 0x40d6e7
                v48 = v44 + 1;
            }
        } else {
            int64_t v49 = 0;
            int64_t * v50; // 0x40d4c3
            if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                // 0x40d4b6
                v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                *v50 = *v50 | 1 << v49 % 64;
            }
            int64_t v51 = v49 + 1; // 0x40d4d2
            while (v49 != 255) {
                // 0x40d4b0
                v49 = v51;
                if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                    // 0x40d4b6
                    v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                    *v50 = *v50 | 1 << v49 % 64;
                }
                // 0x40d4c7
                v51 = v49 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v52 = *(char *)v41; // 0x40d432
    char v53 = *(char *)v40; // 0x40d432
    char v54 = v53; // 0x40d432
    bool v55 = false; // 0x40d432
    while (v52 == v53) {
        int64_t v56 = v42 - 1; // 0x40d432
        v40 += v30;
        v41 += v30;
        v42 = v56;
        v54 = v52;
        v55 = true;
        if (v56 == 0) {
            // break -> 
            break;
        }
        v52 = *(char *)v41;
        v53 = *(char *)v40;
        v54 = v53;
        v55 = false;
    }
    unsigned char v57 = v54;
    int64_t v58 = (int64_t)"lower"; // 0x40d43b
    int64_t v59 = v4; // 0x40d43b
    int64_t v60 = 6; // 0x40d43b
    if ((v52 >= v57 && !v55) == v52 < v57) {
        int64_t v61 = (int64_t)*__ctype_b_loc(); // 0x40d44d
        if (a1 != 0) {
            int64_t v62 = 0;
            unsigned char v63; // 0x40d706
            unsigned char v64; // 0x40d3a0
            int64_t * v65; // 0x40d71b
            if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                // 0x40d706
                v63 = *(char *)(v62 + a1);
                v64 = v63 % 64;
                v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
            }
            int64_t v66 = v62 + 1; // 0x40d729
            while (v62 != 255) {
                // 0x40d700
                v62 = v66;
                if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                    // 0x40d706
                    v63 = *(char *)(v62 + a1);
                    v64 = v63 % 64;
                    v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                    *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
                }
                // 0x40d71f
                v66 = v62 + 1;
            }
        } else {
            int64_t v67 = 0;
            int64_t * v68; // 0x40d473
            if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                // 0x40d466
                v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                *v68 = *v68 | 1 << v67 % 64;
            }
            int64_t v69 = v67 + 1; // 0x40d482
            while (v67 != 255) {
                // 0x40d460
                v67 = v69;
                if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                    // 0x40d466
                    v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                    *v68 = *v68 | 1 << v67 % 64;
                }
                // 0x40d477
                v69 = v67 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v70 = *(char *)v59; // 0x40d551
    char v71 = *(char *)v58; // 0x40d551
    char v72 = v71; // 0x40d551
    bool v73 = false; // 0x40d551
    while (v70 == v71) {
        int64_t v74 = v60 - 1; // 0x40d551
        v58 += v30;
        v59 += v30;
        v60 = v74;
        v72 = v70;
        v73 = true;
        if (v74 == 0) {
            // break -> 
            break;
        }
        v70 = *(char *)v59;
        v71 = *(char *)v58;
        v72 = v71;
        v73 = false;
    }
    unsigned char v75 = v72;
    int64_t v76 = (int64_t)"space"; // 0x40d55a
    int64_t v77 = v4; // 0x40d55a
    int64_t v78 = 6; // 0x40d55a
    if ((v70 >= v75 && !v73) == v70 < v75) {
        int64_t v79 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v80 = 0;
            unsigned char v81; // 0x40d73f
            unsigned char v82; // 0x40d3a0
            int64_t * v83; // 0x40d754
            if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                // 0x40d73f
                v81 = *(char *)(v80 + a1);
                v82 = v81 % 64;
                v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
            }
            int64_t v84 = v80 + 1; // 0x40d762
            while (v80 != 255) {
                // 0x40d738
                v80 = v84;
                if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                    // 0x40d73f
                    v81 = *(char *)(v80 + a1);
                    v82 = v81 % 64;
                    v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                    *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
                }
                // 0x40d758
                v84 = v80 + 1;
            }
        } else {
            int64_t v85 = 0;
            int64_t * v86; // 0x40d5ec
            if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                // 0x40d5df
                v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                *v86 = *v86 | 1 << v85 % 64;
            }
            int64_t v87 = v85 + 1; // 0x40d5fb
            while (v85 != 255) {
                // 0x40d5d8
                v85 = v87;
                if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                    // 0x40d5df
                    v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                    *v86 = *v86 | 1 << v85 % 64;
                }
                // 0x40d5f0
                v87 = v85 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v88 = *(char *)v77; // 0x40d569
    char v89 = *(char *)v76; // 0x40d569
    char v90 = v89; // 0x40d569
    bool v91 = false; // 0x40d569
    while (v88 == v89) {
        // 0x40d55c
        v78--;
        v76 += v30;
        v77 += v30;
        v90 = v88;
        v91 = true;
        if (v78 == 0) {
            // break -> 
            break;
        }
        v88 = *(char *)v77;
        v89 = *(char *)v76;
        v90 = v89;
        v91 = false;
    }
    unsigned char v92 = v90;
    int64_t v93 = (int64_t)"alpha"; // 0x40d572
    int64_t v94 = v4; // 0x40d572
    int64_t v95 = 6; // 0x40d572
    if ((v88 >= v92 && !v91) == v88 < v92) {
        int64_t v96 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v97 = 0;
            unsigned char v98; // 0x40d8c7
            unsigned char v99; // 0x40d3a0
            int64_t * v100; // 0x40d8dc
            if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                // 0x40d8c7
                v98 = *(char *)(v97 + a1);
                v99 = v98 % 64;
                v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
            }
            int64_t v101 = v97 + 1; // 0x40d8ea
            while (v97 != 255) {
                // 0x40d8c0
                v97 = v101;
                if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                    // 0x40d8c7
                    v98 = *(char *)(v97 + a1);
                    v99 = v98 % 64;
                    v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                    *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
                }
                // 0x40d8e0
                v101 = v97 + 1;
            }
        } else {
            int64_t v102 = 0;
            int64_t * v103; // 0x40d5a4
            if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                // 0x40d597
                v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                *v103 = *v103 | 1 << v102 % 64;
            }
            int64_t v104 = v102 + 1; // 0x40d5b3
            while (v102 != 255) {
                // 0x40d590
                v102 = v104;
                if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                    // 0x40d597
                    v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                    *v103 = *v103 | 1 << v102 % 64;
                }
                // 0x40d5a8
                v104 = v102 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v105 = *(char *)v94; // 0x40d60f
    char v106 = *(char *)v93; // 0x40d60f
    char v107 = v106; // 0x40d60f
    bool v108 = false; // 0x40d60f
    while (v105 == v106) {
        int64_t v109 = v95 - 1; // 0x40d60f
        v93 += v30;
        v94 += v30;
        v95 = v109;
        v107 = v105;
        v108 = true;
        if (v109 == 0) {
            // break -> 
            break;
        }
        v105 = *(char *)v94;
        v106 = *(char *)v93;
        v107 = v106;
        v108 = false;
    }
    unsigned char v110 = v107;
    int64_t v111 = (int64_t)"digit"; // 0x40d618
    int64_t v112 = v4; // 0x40d618
    int64_t v113 = 6; // 0x40d618
    if ((v105 >= v110 && !v108) == v105 < v110) {
        int64_t v114 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v115 = 0;
            unsigned char v116; // 0x40d894
            unsigned char v117; // 0x40d3a0
            int64_t * v118; // 0x40d8a9
            if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                // 0x40d894
                v116 = *(char *)(v115 + a1);
                v117 = v116 % 64;
                v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
            }
            int64_t v119 = v115 + 1; // 0x40d8b7
            while (v115 != 255) {
                // 0x40d88d
                v115 = v119;
                if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                    // 0x40d894
                    v116 = *(char *)(v115 + a1);
                    v117 = v116 % 64;
                    v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                    *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
                }
                // 0x40d8ad
                v119 = v115 + 1;
            }
        } else {
            int64_t v120 = 0;
            int64_t * v121; // 0x40d6ac
            if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                // 0x40d69f
                v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                *v121 = *v121 | 1 << v120 % 64;
            }
            int64_t v122 = v120 + 1; // 0x40d6bb
            while (v120 != 255) {
                // 0x40d698
                v120 = v122;
                if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                    // 0x40d69f
                    v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                    *v121 = *v121 | 1 << v120 % 64;
                }
                // 0x40d6b0
                v122 = v120 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v123 = *(char *)v112; // 0x40d627
    char v124 = *(char *)v111; // 0x40d627
    char v125 = v124; // 0x40d627
    bool v126 = false; // 0x40d627
    while (v123 == v124) {
        // 0x40d61a
        v113--;
        v111 += v30;
        v112 += v30;
        v125 = v123;
        v126 = true;
        if (v113 == 0) {
            // break -> 
            break;
        }
        v123 = *(char *)v112;
        v124 = *(char *)v111;
        v125 = v124;
        v126 = false;
    }
    unsigned char v127 = v125;
    int64_t v128 = (int64_t)"print"; // 0x40d630
    int64_t v129 = v4; // 0x40d630
    int64_t v130 = 6; // 0x40d630
    if ((v123 >= v127 && !v126) == v123 < v127) {
        int64_t v131 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v132 = 0;
            unsigned char v133; // 0x40d8fa
            unsigned char v134; // 0x40d3a0
            int64_t * v135; // 0x40d90f
            if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                // 0x40d8fa
                v133 = *(char *)(v132 + a1);
                v134 = v133 % 64;
                v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
            }
            int64_t v136 = v132 + 1; // 0x40d91d
            while (v132 != 255) {
                // 0x40d8f3
                v132 = v136;
                if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                    // 0x40d8fa
                    v133 = *(char *)(v132 + a1);
                    v134 = v133 % 64;
                    v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                    *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
                }
                // 0x40d913
                v136 = v132 + 1;
            }
        } else {
            int64_t v137 = 0;
            int64_t * v138; // 0x40d664
            if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                // 0x40d657
                v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                *v138 = *v138 | 1 << v137 % 64;
            }
            int64_t v139 = v137 + 1; // 0x40d673
            while (v137 != 255) {
                // 0x40d650
                v137 = v139;
                if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                    // 0x40d657
                    v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                    *v138 = *v138 | 1 << v137 % 64;
                }
                // 0x40d668
                v139 = v137 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v140 = *(char *)v129; // 0x40d776
    char v141 = *(char *)v128; // 0x40d776
    char v142 = v141; // 0x40d776
    bool v143 = false; // 0x40d776
    while (v140 == v141) {
        int64_t v144 = v130 - 1; // 0x40d776
        v128 += v30;
        v129 += v30;
        v130 = v144;
        v142 = v140;
        v143 = true;
        if (v144 == 0) {
            // break -> 
            break;
        }
        v140 = *(char *)v129;
        v141 = *(char *)v128;
        v142 = v141;
        v143 = false;
    }
    unsigned char v145 = v142;
    int64_t v146 = (int64_t)"upper"; // 0x40d77f
    int64_t v147 = v4; // 0x40d77f
    int64_t v148 = 6; // 0x40d77f
    if ((v140 >= v145 && !v143) == v140 < v145) {
        int64_t v149 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v150 = 0;
            unsigned char v151; // 0x40dad1
            unsigned char v152; // 0x40d3a0
            int64_t * v153; // 0x40dae6
            if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                // 0x40dad1
                v151 = *(char *)(v150 + a1);
                v152 = v151 % 64;
                v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
            }
            int64_t v154 = v150 + 1; // 0x40daf4
            while (v150 != 255) {
                // 0x40daca
                v150 = v154;
                if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                    // 0x40dad1
                    v151 = *(char *)(v150 + a1);
                    v152 = v151 % 64;
                    v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                    *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
                }
                // 0x40daea
                v154 = v150 + 1;
            }
        } else {
            int64_t v155 = 0;
            int64_t * v156; // 0x40d7b4
            if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                // 0x40d7a7
                v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                *v156 = *v156 | 1 << v155 % 64;
            }
            int64_t v157 = v155 + 1; // 0x40d7c3
            while (v155 != 255) {
                // 0x40d7a0
                v155 = v157;
                if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                    // 0x40d7a7
                    v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                    *v156 = *v156 | 1 << v155 % 64;
                }
                // 0x40d7b8
                v157 = v155 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v158 = *(char *)v147; // 0x40d7d7
    char v159 = *(char *)v146; // 0x40d7d7
    char v160 = v159; // 0x40d7d7
    bool v161 = false; // 0x40d7d7
    while (v158 == v159) {
        int64_t v162 = v148 - 1; // 0x40d7d7
        v146 += v30;
        v147 += v30;
        v148 = v162;
        v160 = v158;
        v161 = true;
        if (v162 == 0) {
            // break -> 
            break;
        }
        v158 = *(char *)v147;
        v159 = *(char *)v146;
        v160 = v159;
        v161 = false;
    }
    unsigned char v163 = v160;
    int64_t v164 = (int64_t)"blank"; // 0x40d7e0
    int64_t v165 = v4; // 0x40d7e0
    int64_t v166 = 6; // 0x40d7e0
    if ((v158 >= v163 && !v161) == v158 < v163) {
        int64_t v167 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v168 = 0;
            unsigned char v169; // 0x40db3b
            unsigned char v170; // 0x40d3a0
            int64_t * v171; // 0x40db50
            if (*(char *)(2 * v168 + v167) % 2 != 0) {
                // 0x40db3b
                v169 = *(char *)(v168 + a1);
                v170 = v169 % 64;
                v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
            }
            int64_t v172 = v168 + 1; // 0x40db5f
            while (v168 != 255) {
                // 0x40db34
                v168 = v172;
                if (*(char *)(2 * v168 + v167) % 2 != 0) {
                    // 0x40db3b
                    v169 = *(char *)(v168 + a1);
                    v170 = v169 % 64;
                    v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                    *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
                }
                // 0x40db54
                v172 = v168 + 1;
            }
        } else {
            int64_t v173 = 0;
            int64_t * v174; // 0x40d80e
            if (*(char *)(2 * v173 + v167) % 2 != 0) {
                // 0x40d801
                v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                *v174 = *v174 | 1 << v173 % 64;
            }
            int64_t v175 = v173 + 1; // 0x40d81d
            while (v173 != 255) {
                // 0x40d7fa
                v173 = v175;
                if (*(char *)(2 * v173 + v167) % 2 != 0) {
                    // 0x40d801
                    v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                    *v174 = *v174 | 1 << v173 % 64;
                }
                // 0x40d812
                v175 = v173 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v176 = *(char *)v165; // 0x40d83b
    char v177 = *(char *)v164; // 0x40d83b
    char v178 = v177; // 0x40d83b
    bool v179 = false; // 0x40d83b
    while (v176 == v177) {
        int64_t v180 = v166 - 1; // 0x40d83b
        v164 += v30;
        v165 += v30;
        v166 = v180;
        v178 = v176;
        v179 = true;
        if (v180 == 0) {
            // break -> 
            break;
        }
        v176 = *(char *)v165;
        v177 = *(char *)v164;
        v178 = v177;
        v179 = false;
    }
    unsigned char v181 = v178;
    int64_t v182 = (int64_t)"graph"; // 0x40d844
    int64_t v183 = v4; // 0x40d844
    int64_t v184 = 6; // 0x40d844
    if ((v176 >= v181 && !v179) == v176 < v181) {
        int64_t v185 = (int64_t)*__ctype_b_loc(); // 0x40d856
        if (a1 != 0) {
            int64_t v186 = 0;
            unsigned char v187; // 0x40db08
            unsigned char v188; // 0x40d3a0
            int64_t * v189; // 0x40db1d
            if (*(char *)(2 * v186 + v185) % 2 != 0) {
                // 0x40db08
                v187 = *(char *)(v186 + a1);
                v188 = v187 % 64;
                v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
            }
            int64_t v190 = v186 + 1; // 0x40db2b
            while (v186 != 255) {
                // 0x40db02
                v186 = v190;
                if (*(char *)(2 * v186 + v185) % 2 != 0) {
                    // 0x40db08
                    v187 = *(char *)(v186 + a1);
                    v188 = v187 % 64;
                    v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                    *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
                }
                // 0x40db21
                v190 = v186 + 1;
            }
        } else {
            int64_t v191 = 0;
            int64_t * v192; // 0x40d875
            if (*(char *)(2 * v191 + v185) % 2 != 0) {
                // 0x40d868
                v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                *v192 = *v192 | 1 << v191 % 64;
            }
            int64_t v193 = v191 + 1; // 0x40d884
            while (v191 != 255) {
                // 0x40d862
                v191 = v193;
                if (*(char *)(2 * v191 + v185) % 2 != 0) {
                    // 0x40d868
                    v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                    *v192 = *v192 | 1 << v191 % 64;
                }
                // 0x40d879
                v193 = v191 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    unsigned char v194 = *(char *)v183; // 0x40d931
    char v195 = *(char *)v182; // 0x40d931
    char v196 = v195; // 0x40d931
    bool v197 = false; // 0x40d931
    while (v194 == v195) {
        int64_t v198 = v184 - 1; // 0x40d931
        v182 += v30;
        v183 += v30;
        v184 = v198;
        v196 = v194;
        v197 = true;
        if (v198 == 0) {
            // break -> 
            break;
        }
        v194 = *(char *)v183;
        v195 = *(char *)v182;
        v196 = v195;
        v197 = false;
    }
    unsigned char v199 = v196;
    if ((v194 >= v199 && !v197) == v194 < v199) {
        int64_t v200 = (int64_t)*__ctype_b_loc(); // 0x40d948
        if (a1 != 0) {
            int64_t v201 = 0;
            unsigned char v202; // 0x40d988
            unsigned char v203; // 0x40d3a0
            int64_t * v204; // 0x40d99d
            if (*(int16_t *)(2 * v201 + v200) < 0) {
                // 0x40d988
                v202 = *(char *)(v201 + a1);
                v203 = v202 % 64;
                v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
            }
            int64_t v205 = v201 + 1; // 0x40d9ab
            while (v201 != 255) {
                // 0x40d981
                v201 = v205;
                if (*(int16_t *)(2 * v201 + v200) < 0) {
                    // 0x40d988
                    v202 = *(char *)(v201 + a1);
                    v203 = v202 % 64;
                    v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                    *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
                }
                // 0x40d9a1
                v205 = v201 + 1;
            }
        } else {
            int64_t v206 = 0;
            int64_t * v207; // 0x40d964
            if (*(int16_t *)(2 * v206 + v200) < 0) {
                // 0x40d957
                v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                *v207 = *v207 | 1 << v206 % 64;
            }
            int64_t v208 = v206 + 1; // 0x40d973
            while (v206 != 255) {
                // 0x40d950
                v206 = v208;
                if (*(int16_t *)(2 * v206 + v200) < 0) {
                    // 0x40d957
                    v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                    *v207 = *v207 | 1 << v206 % 64;
                }
                // 0x40d968
                v208 = v206 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    // 0x40d9b2
    if (strcmp(name, "punct") == 0) {
        int64_t v209 = (int64_t)*__ctype_b_loc(); // 0x40d9cf
        if (a1 != 0) {
            int64_t v210 = 0;
            unsigned char v211; // 0x40da0d
            unsigned char v212; // 0x40d3a0
            int64_t * v213; // 0x40da22
            if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                // 0x40da0d
                v211 = *(char *)(v210 + a1);
                v212 = v211 % 64;
                v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
            }
            int64_t v214 = v210 + 1; // 0x40da30
            while (v210 != 255) {
                // 0x40da07
                v210 = v214;
                if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                    // 0x40da0d
                    v211 = *(char *)(v210 + a1);
                    v212 = v211 % 64;
                    v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                    *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
                }
                // 0x40da26
                v214 = v210 + 1;
            }
        } else {
            int64_t v215 = 0;
            int64_t * v216; // 0x40d9ea
            if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                // 0x40d9dd
                v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                *v216 = *v216 | 1 << v215 % 64;
            }
            int64_t v217 = v215 + 1; // 0x40d9f9
            while (v215 != 255) {
                // 0x40d9d7
                v215 = v217;
                if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                    // 0x40d9dd
                    v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                    *v216 = *v216 | 1 << v215 % 64;
                }
                // 0x40d9ee
                v217 = v215 + 1;
            }
        }
        // 0x40d486
        return 0;
    }
    // 0x40da37
    if (strcmp(name, "xdigit") != 0) {
        // 0x40d486
        return 4;
    }
    int64_t v218 = (int64_t)*__ctype_b_loc() + 1;
    if (a1 == 0) {
        int64_t v219 = 0;
        int64_t * v220; // 0x40da70
        if ((*(char *)(2 * v219 + v218) & 16) != 0) {
            // 0x40da63
            v220 = (int64_t *)(8 * (v219 >> 6) + a2);
            *v220 = *v220 | 1 << v219 % 64;
        }
        int64_t v221 = v219 + 1; // 0x40da7f
        while (v219 != 255) {
            // 0x40da5c
            v219 = v221;
            if ((*(char *)(2 * v219 + v218) & 16) != 0) {
                // 0x40da63
                v220 = (int64_t *)(8 * (v219 >> 6) + a2);
                *v220 = *v220 | 1 << v219 % 64;
            }
            // 0x40da74
            v221 = v219 + 1;
        }
        // 0x40d486
        return 0;
    }
    int64_t v222 = 0;
    unsigned char v223; // 0x40da94
    unsigned char v224; // 0x40d3a0
    int64_t * v225; // 0x40daa9
    if ((*(char *)(2 * v222 + v218) & 16) != 0) {
        // 0x40da94
        v223 = *(char *)(v222 + a1);
        v224 = v223 % 64;
        v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
        *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
    }
    int64_t v226 = v222 + 1; // 0x40dab7
    while (v222 != 255) {
        // 0x40da8d
        v222 = v226;
        if ((*(char *)(2 * v222 + v218) & 16) != 0) {
            // 0x40da94
            v223 = *(char *)(v222 + a1);
            v224 = v223 % 64;
            v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
            *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
        }
        // 0x40daad
        v226 = v222 + 1;
    }
    // 0x40d486
    return 0;
}
// Address range: 0x40db70 - 0x40dda5
int64_t function_40db70(int64_t a1, int64_t a2, char * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-96, 0x40db9d
    int64_t * mem = calloc(32, 1); // 0x40dba6
    if (mem == NULL) {
        // 0x40dd40
        *(int32_t *)a6 = 12;
        // 0x40dd19
        return 0;
    }
    int64_t * mem2 = calloc(80, 1); // 0x40dbc1
    if (mem2 == NULL) {
        // 0x40dd60
        free(mem);
        *(int32_t *)a6 = 12;
        // 0x40dd19
        return 0;
    }
    int64_t v2 = (int64_t)mem; // 0x40dba6
    int64_t v3 = (int64_t)mem2; // 0x40dbc1
    char * v4 = (char *)(v3 + 32); // 0x40dbd6
    unsigned char v5 = (char)a5; // 0x40dbda
    *v4 = *v4 & -2 | v5 % 2;
    int64_t v6 = function_40d3a0(a2, v2, v3 + 24, v3 + 72, &v1, (int64_t)a3, 0); // 0x40dc03
    int32_t v7 = v6; // 0x40dc0a
    if (v7 != 0) {
        // 0x40dd80
        free(mem);
        function_409170(v3);
        *(int32_t *)a6 = v7;
        // 0x40dd19
        return 0;
    }
    // 0x40dc12
    int64_t v8; // 0x40db70
    char v9 = *(char *)&v8; // 0x40dc12
    int64_t v10 = v9; // 0x40dc12
    v8 = v10;
    v8 = v10;
    int64_t v11 = (int64_t)a4; // 0x40dc1e
    if (v9 != 0) {
        int64_t v12 = v8;
        v11++;
        char v13 = *(char *)v11; // 0x40dc4d
        v8 = v13;
        int64_t * v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2); // 0x40dc52
        *v14 = *v14 | 1 << v12 % 64;
        while (v13 != 0) {
            v12 = v8;
            v11++;
            v13 = *(char *)v11;
            v8 = v13;
            v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2);
            *v14 = *v14 | 1 << v12 % 64;
        }
    }
    if (v5 != 0) {
        int64_t v15 = v2;
        int64_t * v16 = (int64_t *)v15; // 0x40dc66
        *v16 = -1 - *v16;
        int64_t v17 = v15 + 8; // 0x40dc70
        while (v2 + 24 != v15) {
            // 0x40dc66
            v15 = v17;
            v16 = (int64_t *)v15;
            *v16 = -1 - *v16;
            v17 = v15 + 8;
        }
    }
    int32_t * v18 = (int32_t *)(a1 + 180); // 0x40dc72
    if (*v18 >= 2) {
        int64_t v19 = *(int64_t *)(a1 + 120); // 0x40dc7b
        v8 = v19;
        *mem = *mem & *(int64_t *)v19;
        int64_t v20 = 0; // 0x40dc89
        v20 += 8;
        int64_t * v21 = (int64_t *)(v20 + v2); // 0x40dc85
        *v21 = *v21 & *(int64_t *)(v20 + v19);
        while (v20 != 24) {
            // 0x40dc81
            v20 += 8;
            v21 = (int64_t *)(v20 + v2);
            *v21 = *v21 & *(int64_t *)(v20 + v8);
        }
    }
    int64_t v22 = a1 + 112; // 0x40dc93
    int64_t v23 = a1 + 128; // 0x40dc97
    v8 = 0;
    int64_t v24; // bp-88, 0x40db70
    int64_t v25 = &v24; // 0x40dca2
    v24 = v2;
    int64_t result = function_40a780(v22, v23, 0, 0, v25); // 0x40dcb7
    if (result != 0) {
        // 0x40dcc4
        if (*v18 < 2) {
            // 0x40dd50
            function_409170(v3);
            // 0x40dd19
            return result;
        }
        char * v26 = (char *)(a1 + 176); // 0x40dcd1
        *v26 = *v26 | 2;
        v24 = v3;
        int64_t v27 = function_40a780(v22, v23, 0, 0, v25); // 0x40dcf1
        if (v27 != 0) {
            // 0x40dcfb
            int64_t v28; // bp-72, 0x40db70
            int64_t result2 = function_40a780(v22, v23, (int32_t)result, (int32_t)v27, (int64_t)&v28); // 0x40dd11
            // 0x40dd19
            return result2;
        }
    }
    // 0x40dd30
    free(mem);
    function_409170(v3);
    // 0x40dd40
    *(int32_t *)a6 = 12;
    // 0x40dd19
    return 0;
}
// Address range: 0x40ddb0 - 0x40e288
int64_t function_40ddb0(int64_t result, int64_t result2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(result + 180); // 0x40ddc7
    int32_t v3 = 0; // 0x40ddd2
    if (*v2 == 1) {
        // 0x40ddd4
        v3 = (int32_t)(*(int64_t *)(result + 24) / 0x400000) % 2;
    }
    // 0x40dde3
    if (result2 < 1) {
        // 0x40dfa3
        return result;
    }
    char * v4 = (char *)(result + 26);
    int64_t * v5 = (int64_t *)(result + 16);
    char wstr; // bp-312, 0x40ddb0
    int64_t v6 = &wstr;
    char ps; // bp-320, 0x40ddb0
    int64_t v7 = &ps;
    int64_t v8 = a3; // 0x40de01
    int64_t v9 = 0; // 0x40de01
    int64_t v10 = result; // 0x40de01
    int64_t v11; // 0x40ddb0
    int64_t v12; // 0x40ddb0
    int64_t v13; // 0x40ddb0
    int64_t v14; // 0x40ddb0
    int64_t v15; // 0x40ddb0
    int64_t v16; // 0x40ddb0
    unsigned char v17; // 0x40de64
    int64_t v18; // 0x40dfb9
    while (true) {
      lab_0x40de41_2:
        // 0x40de41
        v13 = v10;
        v11 = v9;
        int64_t v19 = *(int64_t *)(8 * v11 + v8); // 0x40de49
        v1 = v13;
        int64_t v20 = 16 * v19; // 0x40de57
        v16 = v20 + v13;
        v17 = *(char *)(v16 + 8);
        if (v17 != 1) {
            int64_t v21 = v17; // 0x40de64
            char * v22 = NULL; // 0x40ddb0
            int64_t v23 = v13; // 0x40ddb0
            switch (v17) {
                case 3: {
                    int64_t v24 = (int64_t)v22; // 0x40e108
                    int64_t v25 = *(int64_t *)(*(int64_t *)(v23 + v20) + v24); // 0x40e10d
                    int64_t v26 = 0; // 0x40e119
                    int64_t v27 = 8 * v24;
                    int64_t v28 = v23;
                    int64_t v29 = v28; // 0x40e124
                    char * v30; // 0x40ddb0
                    char * v31; // 0x40ddb0
                    int64_t v32; // 0x40e134
                    int32_t v33; // 0x40e14b
                    if ((1 << v26 % 64 & v25) != 0) {
                        // 0x40e126
                        v31 = (char *)(v27 + a4);
                        *v31 = 1;
                        v29 = v28;
                        if (v3 != 0) {
                            // 0x40e134
                            v32 = v27 + 128;
                            v30 = v31;
                            if ((int32_t)v32 < 384) {
                                // 0x40e143
                                v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                v30 = (char *)((int64_t)v33 + a4);
                            }
                            // 0x40e152
                            *v30 = 1;
                            v29 = v32 & 0xffffffff;
                        }
                    }
                    int64_t v34 = v29;
                    int64_t v35 = v27 + 1; // 0x40e159
                    v26 = v26 + 1 & 0xffffffff;
                    while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                        // 0x40e120
                        v27 = v35;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40e126
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40e134
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40e143
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40e152
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40e155
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                    }
                    // 0x40e163
                    v14 = v21;
                    v15 = v16;
                    v12 = v34;
                    while (v22 != (char *)24) {
                        // 0x40e178
                        v1 = v34;
                        v22 = (char *)(v24 + 8);
                        v24 = (int64_t)v22;
                        v25 = *(int64_t *)(*(int64_t *)(v34 + v20) + v24);
                        v26 = 0;
                        v27 = 8 * v24;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40e126
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40e134
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40e143
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40e152
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40e155
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                        while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                            // 0x40e120
                            v27 = v35;
                            v28 = v34;
                            v29 = v28;
                            if ((1 << v26 % 64 & v25) != 0) {
                                // 0x40e126
                                v31 = (char *)(v27 + a4);
                                *v31 = 1;
                                v29 = v28;
                                if (v3 != 0) {
                                    // 0x40e134
                                    v32 = v27 + 128;
                                    v30 = v31;
                                    if ((int32_t)v32 < 384) {
                                        // 0x40e143
                                        v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                        v30 = (char *)((int64_t)v33 + a4);
                                    }
                                    // 0x40e152
                                    *v30 = 1;
                                    v29 = v32 & 0xffffffff;
                                }
                            }
                            // 0x40e155
                            v34 = v29;
                            v35 = v27 + 1;
                            v26 = v26 + 1 & 0xffffffff;
                        }
                        // 0x40e163
                        v14 = v21;
                        v15 = v16;
                        v12 = v34;
                    }
                    goto lab_0x40de2f;
                }
                case 6: {
                    // 0x40dfb5
                    v18 = *(int64_t *)v16;
                    if (*v2 < 2) {
                        goto lab_0x40dfe6;
                    } else {
                        // 0x40dfc5
                        if (*(int64_t *)(v18 + 72) != 0) {
                            goto lab_0x40e0ac;
                        } else {
                            // 0x40dfd0
                            if (*(char *)(v18 + 32) % 2 != 0) {
                                goto lab_0x40e0ac;
                            } else {
                                // 0x40dfdb
                                if (*(int64_t *)(v18 + 64) != 0) {
                                    goto lab_0x40e0ac;
                                } else {
                                    goto lab_0x40dfe6;
                                }
                            }
                        }
                    }
                }
                default: {
                    int64_t v36 = v21 & 253; // 0x40de1a
                    if (v36 == 5) {
                        // break -> 0x40e184
                        break;
                    }
                    // 0x40de26
                    v14 = v36;
                    v15 = v16;
                    v12 = v13;
                    if (v17 == 2) {
                        int128_t v37 = __asm_movdqa(g28); // 0x40e200
                        __asm_movups(*(int128_t *)&v1, v37);
                        __asm_movups(*(int128_t *)(a4 + 16), v37);
                        __asm_movups(*(int128_t *)(a4 + 32), v37);
                        __asm_movups(*(int128_t *)(a4 + 48), v37);
                        __asm_movups(*(int128_t *)(a4 + 64), v37);
                        __asm_movups(*(int128_t *)(a4 + 80), v37);
                        __asm_movups(*(int128_t *)(a4 + 96), v37);
                        __asm_movups(*(int128_t *)(a4 + 112), v37);
                        __asm_movups(*(int128_t *)(a4 + 128), v37);
                        __asm_movups(*(int128_t *)(a4 + 144), v37);
                        __asm_movups(*(int128_t *)(a4 + 160), v37);
                        __asm_movups(*(int128_t *)(a4 + 176), v37);
                        __asm_movups(*(int128_t *)(a4 + 192), v37);
                        __asm_movups(*(int128_t *)(a4 + 208), v37);
                        __asm_movups(*(int128_t *)(a4 + 224), v37);
                        __asm_movups(*(int128_t *)(a4 + 240), v37);
                        goto lab_0x40e26f;
                    }
                    goto lab_0x40de2f;
                }
            }
        } else {
            char * v38 = (char *)v16; // 0x40de6f
            int64_t v39 = (int64_t)*v38; // 0x40de6f
            *(char *)(v39 + a4) = 1;
            if (v3 != 0) {
                int32_t v40 = *(int32_t *)(4 * v39 + (int64_t)*__ctype_tolower_loc()); // 0x40de8e
                *(char *)((int64_t)v40 + a4) = 1;
            }
            // 0x40de97
            v14 = v39;
            v15 = v16;
            v12 = v13;
            if ((*v4 & 64) == 0) {
                goto lab_0x40de2f;
            } else {
                // 0x40dea2
                v14 = v39;
                v15 = v16;
                v12 = v13;
                if (*v2 < 2) {
                    goto lab_0x40de2f;
                } else {
                    // 0x40deaf
                    v1 = v20;
                    wstr = *v38;
                    int64_t v41 = v19 + 1; // 0x40dec2
                    int64_t v42 = 1; // 0x40deca
                    if (*v5 > v41) {
                        // 0x40ded0
                        v42 = 1;
                        if ((*(int32_t *)(v16 + 24) & 0x2000ff) == 0x200001) {
                            int64_t v43 = v41; // 0x40df1e
                            int64_t v44; // bp-311, 0x40ddb0
                            int64_t v45 = &v44; // 0x40ddb0
                            int64_t v46 = v45 + 1; // 0x40df1a
                            v43++;
                            *(char *)v45 = *(char *)(v16 + 16);
                            while (*v5 > v43) {
                                int64_t v47 = 16 * v43 + v13; // 0x40df03
                                v45 = v46;
                                if ((*(int32_t *)(v47 + 8) & 0x2000ff) != 0x200001) {
                                    // break -> 0x40df2f
                                    break;
                                }
                                v46 = v45 + 1;
                                v43++;
                                *(char *)v45 = *(char *)v47;
                            }
                            // 0x40df2f
                            v42 = v46 - v6;
                        }
                    }
                    // 0x40df3a
                    ps = 0;
                    int32_t wc; // bp-324, 0x40ddb0
                    int64_t v48 = function_407dd0(&wc, v6, v42); // 0x40df55
                    v14 = v42;
                    v15 = v6;
                    v12 = &wc;
                    if (v48 != v42) {
                        goto lab_0x40de2f;
                    } else {
                        uint32_t wc2 = towlower(wc); // 0x40df67
                        int64_t v49 = wc2; // 0x40df76
                        int32_t v50 = wcrtomb(&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40df78
                        v14 = v7;
                        v15 = v49;
                        v12 = v6;
                        if (v50 == -1) {
                            goto lab_0x40de2f;
                        } else {
                            int64_t v51 = v11 + 1; // 0x40df8c
                            *(char *)((int64_t)wstr + a4) = 1;
                            v8 = v7;
                            v9 = v51;
                            v10 = v6;
                            if (v51 >= v49) {
                                // 0x40dfa3
                                return result2;
                            }
                            goto lab_0x40de41_2;
                        }
                    }
                }
            }
        }
    }
    if (v17 != 2) {
        // 0x40dfa3
    }
  lab_0x40de2f:;
    int64_t v52 = v11 + 1; // 0x40de34
    v8 = v14;
    v9 = v52;
    v10 = v12;
    if (v52 >= v15) {
        // 0x40dfa3
        return result2;
    }
    goto lab_0x40de41_2;
  lab_0x40dfe6:;
    int64_t * v53 = (int64_t *)(v18 + 40); // 0x40dfe9
    int64_t v54 = *v53; // 0x40dfe9
    v14 = 6;
    v15 = v16;
    v12 = v13;
    if (v54 >= 0 == (v54 != 0)) {
        int64_t * v55 = (int64_t *)v18; // 0x40e00f
        int64_t v56 = 0; // 0x40dff8
        ps = 0;
        int64_t v57 = 4 * v56; // 0x40e01d
        uint32_t wc3 = *(int32_t *)(*v55 + v57); // 0x40e025
        int32_t v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40e029
        int64_t v59 = v7; // 0x40e032
        int32_t v60; // 0x40e055
        int64_t v61; // 0x40e034
        if (v58 != -1) {
            // 0x40e034
            v61 = wstr;
            *(char *)(v61 + a4) = 1;
            v59 = v61;
            if (v3 != 0) {
                // 0x40e048
                v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                *(char *)((int64_t)v60 + a4) = 1;
                v59 = v61;
            }
        }
        int64_t v62 = wc3; // 0x40e025
        int64_t v63 = v59;
        int64_t v64 = v63; // 0x40e067
        int64_t v65 = v62; // 0x40e067
        uint32_t wc4; // 0x40e07d
        int64_t v66; // 0x40e08c
        int32_t v67; // 0x40e08e
        if ((*v4 & 64) != 0) {
            // 0x40e069
            v64 = v63;
            v65 = v62;
            if (*v2 >= 2) {
                // 0x40e076
                wc4 = towlower(*(int32_t *)(*v55 + v57));
                v66 = wc4;
                v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                v64 = v7;
                v65 = v66;
                if (v67 != -1) {
                    // 0x40e09d
                    *(char *)((int64_t)wstr + a4) = 1;
                    v64 = v7;
                    v65 = v66;
                }
            }
        }
        // 0x40dff8
        v56++;
        v14 = v64;
        v15 = v65;
        v12 = v6;
        while (v56 < *v53) {
            // 0x40e006
            ps = 0;
            v57 = 4 * v56;
            wc3 = *(int32_t *)(*v55 + v57);
            v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps);
            v59 = v7;
            if (v58 != -1) {
                // 0x40e034
                v61 = wstr;
                *(char *)(v61 + a4) = 1;
                v59 = v61;
                if (v3 != 0) {
                    // 0x40e048
                    v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                    *(char *)((int64_t)v60 + a4) = 1;
                    v59 = v61;
                }
            }
            // 0x40e05e
            v62 = wc3;
            v63 = v59;
            v64 = v63;
            v65 = v62;
            if ((*v4 & 64) != 0) {
                // 0x40e069
                v64 = v63;
                v65 = v62;
                if (*v2 >= 2) {
                    // 0x40e076
                    wc4 = towlower(*(int32_t *)(*v55 + v57));
                    v66 = wc4;
                    v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                    v64 = v7;
                    v65 = v66;
                    if (v67 != -1) {
                        // 0x40e09d
                        *(char *)((int64_t)wstr + a4) = 1;
                        v64 = v7;
                        v65 = v66;
                    }
                }
            }
            // 0x40dff8
            v56++;
            v14 = v64;
            v15 = v65;
            v12 = v6;
        }
    }
    goto lab_0x40de2f;
    // 0x40de41
    goto lab_0x40de41_2;
  lab_0x40e0ac:
    // 0x40e0ac
    ps = 0;
    wstr = 0;
    if (function_407dd0(NULL, v7, 1) == -2) {
        // 0x40e0dd
        *(char *)((int64_t)ps + a4) = 1;
    }
    char v68 = ps + 1; // 0x40e0e7
    ps = v68;
    v14 = 1;
    v15 = v7;
    v12 = 0;
    while (v68 != 0) {
        // 0x40e0b8
        wstr = 0;
        if (function_407dd0(NULL, v7, 1) == -2) {
            // 0x40e0dd
            *(char *)((int64_t)ps + a4) = 1;
        }
        // 0x40e0e7
        v68 = ps + 1;
        ps = v68;
        v14 = 1;
        v15 = v7;
        v12 = 0;
    }
    goto lab_0x40de2f;
  lab_0x40e26f:;
    char * v69 = (char *)(result + 56); // 0x40e274
    *v69 = *v69 | 1;
    // 0x40dfa3
    return result;
}
// Address range: 0x40e290 - 0x40e514
int64_t function_40e290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a3 + a1; // 0x40e298
    char v2 = *(char *)(v1 + 8); // 0x40e2a2
    if (v2 == 7) {
        int64_t v3 = *(int64_t *)(a4 + 8); // 0x40e3b8
        int64_t v4 = v3 + a5; // 0x40e3bc
        unsigned char v5 = *(char *)v4; // 0x40e3bc
        if (v5 < 194) {
            // 0x40e2e0
            return 0;
        }
        uint64_t v6 = *(int64_t *)(a4 + 88); // 0x40e3ca
        uint64_t v7 = a5 + 1;
        if (v7 >= v6) {
            // 0x40e2e0
            return 0;
        }
        int64_t v8 = v3 + v7;
        unsigned char v9 = *(char *)v8; // 0x40e3db
        if (v5 < 224) {
            // 0x40e4b3
            if (v9 == -65 || (v9 ^ -128) < 63) {
                // 0x40e2e0
                return 2;
            }
            // 0x40e2e0
            return 0;
        }
        int64_t v10; // 0x40e290
        if (v5 < 240) {
            // 0x40e3f3
            v10 = 3;
            if (v5 == -32 == v9 < 160) {
                // 0x40e2e0
                return 0;
            }
        } else {
            if (v5 < 248) {
                // 0x40e495
                v10 = 4;
                if (v5 == -16 == v9 < 144) {
                    // 0x40e2e0
                    return 0;
                }
            } else {
                if (v5 < 252) {
                    // 0x40e4cf
                    v10 = 5;
                    if (v5 == -8 == v9 < 136) {
                        // 0x40e2e0
                        return 0;
                    }
                } else {
                    if (v5 >= 254) {
                        // 0x40e2e0
                        return 0;
                    }
                    // 0x40e4f6
                    v10 = 6;
                    if (v5 == -4 == v9 < 132) {
                        // 0x40e2e0
                        return 0;
                    }
                }
            }
        }
        // 0x40e40c
        if (v6 < v10 + a5) {
            // 0x40e2e0
            return 0;
        }
        // 0x40e419
        if (v9 != -65 && (v9 ^ -128) >= 63) {
            // 0x40e2e0
            return 0;
        }
        int64_t v11 = v8; // 0x40e43e
        v11++;
        while (v10 + v4 != v11) {
            char v12 = *(char *)v11;
            if (v12 != -65 && (v12 ^ -128) >= 63) {
                // 0x40e2e0
                return 0;
            }
            v11++;
        }
        // 0x40e2e0
        return v10 & 0xffffffff;
    }
    // 0x40e2b1
    if (*(int32_t *)(a4 + 144) == 1) {
        // 0x40e2e0
        return 0;
    }
    int64_t v13 = function_409ac0(a4, a5); // 0x40e2c6
    int64_t v14 = v13 & 0xffffffff; // 0x40e2cb
    if (v2 == 5) {
        if ((int32_t)v13 < 2) {
            // 0x40e2e0
            return 0;
        }
        if ((a5 & 64) == 0) {
            // 0x40e2fc
            if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 10) {
                // 0x40e2e0
                return 0;
            }
        }
        // 0x40e307
        if ((char)a5 > -1) {
            // 0x40e2e0
            return v14 & 0xffffffff;
        }
        // 0x40e30b
        if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 0) {
            // 0x40e2e0
            return 0;
        }
        // 0x40e2e0
        return v14 & 0xffffffff;
    }
    if (v2 == 6 != (int32_t)v13 > 1) {
        // 0x40e2e0
        return 0;
    }
    int64_t v15 = *(int64_t *)v1; // 0x40e320
    int64_t * v16 = (int64_t *)(v15 + 64); // 0x40e323
    int64_t v17 = *v16; // 0x40e323
    int64_t v18 = *(int64_t *)(v15 + 40); // 0x40e327
    if (v17 != 0) {
        goto lab_0x40e33d;
    } else {
        // 0x40e330
        if ((*(int64_t *)(v15 + 72) || v18) == 0) {
            goto lab_0x40e47d;
        } else {
            goto lab_0x40e33d;
        }
    }
  lab_0x40e3a2_2:
    // 0x40e3a2
    if (*(char *)(v15 + 32) % 2 == 0) {
        // 0x40e2e0
        return v14 & 0xffffffff;
    }
    // 0x40e2e0
    return 0;
  lab_0x40e33d:;
    uint32_t wc = *(int32_t *)(*(int64_t *)(a4 + 16) + 4 * a5); // 0x40e341
    if (v18 < 1) {
        goto lab_0x40e36f;
    } else {
        int64_t v19 = *(int64_t *)v15; // 0x40e34a
        if (*(int32_t *)v19 == wc) {
            goto lab_0x40e3a2_2;
        } else {
            int64_t v20 = 1; // 0x40e366
            while (v18 != v20) {
                // 0x40e360
                if (*(int32_t *)(4 * v20 + v19) == wc) {
                    goto lab_0x40e3a2_2;
                }
                v20++;
            }
            goto lab_0x40e36f;
        }
    }
  lab_0x40e36f:;
    int64_t * v21 = (int64_t *)(v15 + 72); // 0x40e36f
    int64_t v22 = v17; // 0x40e376
    if (*v21 < 1) {
        goto lab_0x40e44c;
    } else {
        int64_t v23 = 0; // 0x40e380
        int64_t v24 = *(int64_t *)(v15 + 24); // 0x40e38e
        while (iswctype(wc, (int32_t)*(int64_t *)(v24 + 8 * v23)) == 0) {
            // 0x40e380
            v23++;
            if (v23 >= *v21) {
                // 0x40e448
                v22 = *v16;
                goto lab_0x40e44c;
            }
            v24 = *(int64_t *)(v15 + 24);
        }
        goto lab_0x40e3a2_2;
    }
  lab_0x40e47d:
    // 0x40e47d
    if (*(char *)(v15 + 32) % 2 != 0) {
        // 0x40e2e0
        return v14 & 0xffffffff;
    }
    // 0x40e2e0
    return 0;
  lab_0x40e44c:
    // 0x40e44c
    if (v22 >= 1) {
        int64_t v25 = 0; // 0x40e457
        int64_t v26 = 4 * v25; // 0x40e460
        if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
            // 0x40e466
            if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                goto lab_0x40e3a2_2;
            }
        }
        // 0x40e474
        v25++;
        while (v25 != v22) {
            // 0x40e460
            v26 = 4 * v25;
            if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
                // 0x40e466
                if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                    goto lab_0x40e3a2_2;
                }
            }
            // 0x40e474
            v25++;
        }
    }
    goto lab_0x40e47d;
}
// Address range: 0x40e520 - 0x40ec3f
int64_t function_40e520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x40e520
    int128_t v1; // 0x40e520
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x40e541
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x40e548
    int64_t v5 = *v4; // 0x40e548
    int64_t v6 = *(int64_t *)(*(int64_t *)v3 + 16 * a3); // 0x40e559
    int32_t * v7 = (int32_t *)(a1 + 224); // 0x40e56b
    int32_t result = 0; // bp-128, 0x40e572
    int64_t v8 = (int64_t)*v7 + a6; // 0x40e57a
    int64_t * v9; // 0x40e520
    int64_t v10; // 0x40e520
    if (v8 < v5) {
        // 0x40e520
        v9 = (int64_t *)(a2 + 16);
        v10 = a2;
    } else {
        int64_t v11 = v8 + 1; // 0x40eb70
        if (0x7fffffffffffffff - v5 < v11) {
            // 0x40e9e6
            return 12;
        }
        uint64_t v12 = v11 + v5; // 0x40eb90
        if (v12 >= 0x2000000000000000) {
            // 0x40e9e6
            return 12;
        }
        int64_t * v13 = (int64_t *)(a2 + 16);
        int64_t * mem = realloc((int64_t *)*v13, 8 * (int32_t)v12); // 0x40ebaa
        if (mem == NULL) {
            // 0x40e9e6
            return 12;
        }
        int64_t v14 = (int64_t)mem; // 0x40ebaa
        *v13 = v14;
        *v4 = v12;
        memset((int64_t *)(8 * v5 + v14), 0, 8 * (int32_t)v11);
        v9 = v13;
        v10 = 0;
    }
    int64_t * v15 = (int64_t *)(a1 + 184); // 0x40e586
    int64_t v16 = *v15; // 0x40e586
    int32_t * v17 = (int32_t *)(a1 + 160); // 0x40e593
    int32_t v18 = *v17; // 0x40e593
    int64_t v19 = *v9; // 0x40e59e
    int64_t * v20 = (int64_t *)(a1 + 72); // 0x40e5a7
    int64_t v21 = *v20; // 0x40e5a7
    *v15 = v19;
    int128_t v22; // bp-120, 0x40e520
    int32_t v23; // 0x40e520
    int64_t v24; // 0x40e5df
    if (v10 == 0) {
        // 0x40eae0
        *v20 = a4;
        v23 = function_40b840(a1, a4 - 1, v18);
        goto lab_0x40eaf4;
    } else {
        // 0x40e5c2
        *v20 = v10;
        v23 = function_40b840(a1, v10 - 1, v18);
        if (v10 == a4) {
            goto lab_0x40eaf4;
        } else {
            // 0x40e5df
            v24 = *(int64_t *)(v19 + 8 * v10);
            if (v24 == 0) {
                goto lab_0x40e5f3;
            } else {
                // 0x40e5e8
                if ((*(char *)(v24 + 104) & 64) != 0) {
                    int64_t v25 = function_40abb0((int64_t)&v22, v24 + 8); // 0x40ea0f
                } else {
                    goto lab_0x40e5f3;
                }
            }
        }
    }
  lab_0x40e9c0_2:
    // 0x40e9c0
    free(NULL);
    result = 12;
    int64_t v26; // 0x40e520
    int64_t v27 = v26; // 0x40e9cd
    goto lab_0x40e9d5_2;
  lab_0x40e830_2:
    // 0x40e830
    free(NULL);
    int32_t v52; // bp-124, 0x40e520
    int32_t v53 = v52; // 0x40e842
    result = v53;
    int128_t v54; // 0x40e692
    int128_t v45 = v54; // 0x40e84c
    v27 = v26;
    if (v53 != 0) {
        goto lab_0x40e9d5_2;
    } else {
        goto lab_0x40e8bc;
    }
  lab_0x40e92d_2:
    // 0x40e92d
    free((int64_t *)v26);
    int64_t v55 = *(int64_t *)(*v15 + 8 * a6); // 0x40e947
    int64_t result2; // 0x40e520
    int64_t v33; // 0x40e520
    if (v55 == 0) {
        // 0x40ec08
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = 1;
    } else {
        // 0x40e954
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = function_409b10(*(int64_t *)(v55 + 16), v55 + 24, a5) == 0;
    }
    // 0x40e9e6
    return result2;
  lab_0x40e6e0:;
    // 0x40e6e0
    int64_t v56; // 0x40e520
    int64_t v57 = v56;
    int64_t v58; // 0x40e520
    if ((char)function_40b930(a1, v57, v58) == 0) {
        goto lab_0x40e71f;
    } else {
        goto lab_0x40e6fd;
    }
  lab_0x40e71f:;
    // 0x40e71f
    int64_t v59; // 0x40e520
    int64_t v60 = v59 + 1; // 0x40e71f
    int64_t * v61; // 0x40e696
    uint64_t v62 = *v61; // 0x40e723
    int64_t v63 = v60; // 0x40e727
    if (v60 >= v62) {
        // break -> 0x40ea9d
        goto lab_0x40ea9d;
    }
    goto lab_0x40e72d;
  lab_0x40e6fd:;
    // 0x40e6fd
    int64_t * v77; // 0x40e520
    int64_t v92 = *v77; // 0x40e6fd
    int64_t v68; // 0x40e735
    int64_t v93 = *(int64_t *)(v92 + 8 * v68); // 0x40e70e
    int64_t v94; // 0x40e520
    if ((char)function_408500(v94, v93) == 0) {
        goto lab_0x40e9c0_2;
    }
    goto lab_0x40e71f;
  lab_0x40e692:;
    // 0x40e692
    int128_t v40; // 0x40e520
    v54 = __asm_pxor(v40, v40);
    v52 = 0;
    int128_t v83 = __asm_movaps(v54); // bp-88, 0x40e6ab
    int64_t v39; // 0x40e520
    if (*(int64_t *)(v39 + 40) >= 1) {
        // 0x40e6c5
        int64_t v88; // 0x40e69b
        int64_t v73 = v88 + 216; // 0x40e6c7
        int64_t * v65 = (int64_t *)(v39 + 48); // 0x40e72d
        int64_t * v67 = (int64_t *)v88; // 0x40e731
        int32_t v95; // 0x40e652
        v58 = v95;
        v77 = (int64_t *)(v88 + 24);
        v63 = 0;
        while (true) {
          lab_0x40e72d:
            // 0x40e72d
            v59 = v63;
            int64_t v64 = *v65; // 0x40e72d
            int64_t v66 = *v67; // 0x40e731
            v68 = *(int64_t *)(v64 + 8 * v59);
            int64_t v69 = 16 * v68; // 0x40e73c
            int64_t v70 = v69 + v66; // 0x40e740
            char v71 = *(char *)(v70 + 10); // 0x40e744
            v56 = v70;
            if ((v71 & 16) == 0) {
                goto lab_0x40e6e0;
            } else {
                int64_t v72 = function_40e290(v66, v73, v68, a1, v58); // 0x40e759
                int32_t v74 = v72; // 0x40e761
                if (v74 < 2) {
                    if (v74 != 0) {
                        goto lab_0x40e6fd;
                    } else {
                        int64_t v75 = *v67; // 0x40e998
                        v56 = v75 + v69;
                        goto lab_0x40e6e0;
                    }
                } else {
                    int64_t v76 = *v77; // 0x40e775
                    int64_t v78 = *v15; // 0x40e782
                    int64_t v79 = *(int64_t *)(v76 + 8 * v68); // 0x40e78a
                    int64_t v80 = 8 * ((0x100000000 * v72 >> 32) + v58); // 0x40e78e
                    int64_t v81 = *(int64_t *)(v78 + v80); // 0x40e796
                    if (v81 != 0) {
                        int64_t v82 = function_40a050((int64_t *)&v83, (int128_t *)(v81 + 8)); // 0x40e7bc
                        int32_t v84 = v82; // 0x40e7c6
                        v52 = v84;
                        if (v84 != 0) {
                            goto lab_0x40e830_2;
                        }
                    }
                    // 0x40e7ce
                    int64_t v85; // 0x40e520
                    if ((char)function_408500(v85, v79) == 0) {
                        goto lab_0x40e9c0_2;
                    }
                    int64_t v86 = *v15; // 0x40e7f6
                    int64_t v87 = function_40b0c0(&v52, v88, (int64_t *)&v83, v58, v58, a6); // 0x40e7fe
                    *(int64_t *)(v86 + v80) = v87;
                    int64_t v89 = *v15; // 0x40e807
                    int64_t v90 = *(int64_t *)(v89 + v80); // 0x40e80f
                    int32_t v91 = v52; // 0x40e81a
                    if (v90 == 0 && v91 != 0) {
                        goto lab_0x40e830_2;
                    }
                    goto lab_0x40e6fd;
                }
            }
        }
    }
  lab_0x40ea9d:
    // 0x40ea9d
    free(NULL);
    result = 0;
    v45 = v54;
    goto lab_0x40e8bc;
  lab_0x40e8bc:;
    // 0x40e8bc
    int64_t v42; // 0x40e520
    int64_t v96 = function_40b840(a1, (int64_t)((int32_t)v42 - 1), *v17); // 0x40e8cb
    int64_t v97 = function_40adc0((int128_t *)&result, v3, (int64_t *)&v22, (int32_t)v96); // 0x40e8e4
    int64_t v98; // 0x40e520
    int64_t v41; // 0x40e520
    int64_t v99; // 0x40e520
    int64_t v43; // 0x40e642
    if (v97 == 0) {
        // 0x40eab0
        v27 = v26;
        if (result != 0) {
            // break -> 0x40e9d5
            goto lab_0x40e9d5_2;
        }
        int64_t v100 = *v15; // 0x40eabc
        *(int64_t *)(v100 + v43) = 0;
        v99 = v41 + 1;
        v98 = v100;
    } else {
        int64_t v101 = *v15; // 0x40e8f5
        *(int64_t *)(v101 + v43) = v97;
        v99 = 0;
        v98 = v101;
    }
    // 0x40e90f
    v33 = v42;
    if (v42 >= a6) {
        goto lab_0x40e92d_2;
    }
    int64_t v34 = v99; // 0x40e927
    int128_t v35 = v45; // 0x40e927
    int64_t v36 = v98; // 0x40e927
    int64_t v37 = v42; // 0x40e927
    int64_t v38 = v97; // 0x40e927
    v33 = v42;
    if (v99 > (int64_t)*v7) {
        goto lab_0x40e92d_2;
    }
    goto lab_0x40e63e;
  lab_0x40eaf4:
    // 0x40eaf4
    v22 = 1;
    int64_t * mem2 = malloc(8); // 0x40eb11
    if (mem2 == NULL) {
        // 0x40e9e6
        return 12;
    }
    int64_t v102 = (int64_t)mem2; // 0x40eb11
    *mem2 = a3;
    int32_t v103 = 0x100000000 * a7 >> 32;
    result = 0;
    int32_t v104 = function_40a480(v3, (int64_t *)&v22, v6, v103); // 0x40eb56
    result = v104;
    v27 = v102;
    if (v104 == 0) {
        goto lab_0x40ea32;
    } else {
        goto lab_0x40e9d5_2;
    }
  lab_0x40ea32:;
    int32_t v105 = function_40b360(a1, &v22, a4, v6, v103); // 0x40ea4d
    result = v105;
    v27 = v102;
    int64_t v51 = a4; // 0x40ea53
    int64_t v50 = v102; // 0x40ea53
    int32_t v49 = v23; // 0x40ea53
    if (v105 != 0) {
        goto lab_0x40e9d5_2;
    } else {
        goto lab_0x40ea55;
    }
  lab_0x40e9d5_2:
    // 0x40e9d5
    free((int64_t *)v27);
    // 0x40e9e6
    return result;
  lab_0x40e5f3:;
    int128_t v28 = __asm_pxor(v2, v2); // 0x40e5ff
    v22 = __asm_movaps(v28);
    int64_t v29 = 0; // 0x40e603
    int128_t v30 = v28; // 0x40e603
    int64_t v31 = v10; // 0x40e603
    int64_t v32 = v24; // 0x40e603
    goto lab_0x40e60b;
  lab_0x40ea55:;
    int64_t v48 = function_40adc0((int128_t *)&result, v3, (int64_t *)&v22, v49); // 0x40ea65
    v27 = v50;
    if (v48 != 0 || result == 0) {
        // 0x40ea76
        *(int64_t *)(*v15 + 8 * v51) = v48;
        v29 = v50;
        v31 = v51;
        v32 = v48;
        goto lab_0x40e60b;
    } else {
        goto lab_0x40e9d5_2;
    }
  lab_0x40e60b:
    // 0x40e60b
    v26 = v29;
    v33 = v31;
    if (v31 < a6) {
        // 0x40e616
        v33 = v31;
        if (*v7 < 0) {
            goto lab_0x40e92d_2;
        } else {
            // 0x40e626
            v34 = 0;
            v35 = v30;
            v36 = *v15;
            v37 = v31;
            v38 = v32;
            while (true) {
              lab_0x40e63e:
                // 0x40e63e
                v39 = v38;
                v40 = v35;
                v41 = v34;
                v42 = v37 + 1;
                v43 = 8 * v42;
                int64_t v44 = *(int64_t *)(v43 + v36); // 0x40e642
                if (v44 == 0) {
                    // 0x40e9a8
                    v45 = v40;
                    if (v39 != 0) {
                        goto lab_0x40e692;
                    } else {
                        goto lab_0x40e8bc;
                    }
                } else {
                    int64_t v46 = function_40a050((int64_t *)&v22, (int128_t *)(v44 + 8)); // 0x40e678
                    int32_t v47 = v46; // 0x40e67d
                    result = v47;
                    v27 = v26;
                    if (v47 != 0) {
                        // break -> 0x40e9d5
                        break;
                    }
                    // 0x40e689
                    v45 = v40;
                    if (v39 == 0) {
                        goto lab_0x40e8bc;
                    } else {
                        goto lab_0x40e692;
                    }
                }
            }
            goto lab_0x40e9d5_2;
        }
    } else {
        goto lab_0x40e92d_2;
    }
}
// Address range: 0x40ec40 - 0x40f503
int64_t function_40ec40(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40ec40
    int128_t v1; // 0x40ec40
    int128_t v2 = v1;
    int64_t v3 = 0; // bp-88, 0x40ec64
    int64_t v4 = 0; // 0x40ec86
    if ((char)a5 != 0) {
        int64_t * mem = malloc(96); // 0x40ec95
        v4 = &v3;
        if (mem == NULL) {
            // 0x40efa9
            return 12;
        }
    }
    int128_t v5 = __asm_pxor(v2, v2); // 0x40ecb5
    int64_t v6 = 0; // bp-104, 0x40ecb9
    int128_t v7 = __asm_movaps(v5); // bp-120, 0x40ecc1
    uint64_t v8 = 16 * a3; // 0x40ecd3
    int32_t size = v8; // 0x40ecd7
    int64_t result; // 0x40ec40
    int64_t v9; // 0x40ec40
    char v10; // 0x40ec40
    if (v8 < 4031) {
        // 0x40ecea
        v10 = 0;
        int64_t v11; // bp-216, 0x40ec40
        v9 = (int64_t)&v11 + -1 - v8 & -16;
    } else {
        int64_t * mem2 = malloc(size); // 0x40f427
        v10 = 1;
        v9 = (int64_t)mem2;
        if (mem2 == NULL) {
            // 0x40f443
            result = 12;
            if (v4 != 0) {
                // 0x40f453
                function_40d270(v4);
                result = 12;
            }
          lab_0x40efa9:
            // 0x40efa9
            return result;
        }
    }
    int64_t * v12 = (int64_t *)v9; // 0x40ed19
    int64_t * v13 = (int64_t *)a4; // 0x40ed19
    memcpy(v12, v13, size);
    int64_t v14 = a4; // bp-128, 0x40ed2a
    int64_t * v15 = (int64_t *)(a4 + 8); // 0x40ee19
    int64_t v16 = *v15; // 0x40ee19
    if (v16 < a4) {
      lab_0x40ef80_2:
        // 0x40ef80
        free((int64_t *)v6);
        if (v10 != 0) {
            // 0x40f45d
            free(v12);
            if (v4 == 0) {
                // 0x40efa9
                return 0;
            }
        } else {
            // 0x40ef96
            if (v4 == 0) {
                // 0x40efa9
                return 0;
            }
        }
        // 0x40efa2
        function_40d270(v4);
        // 0x40efa9
        return 0;
    }
    int64_t v17 = (int64_t)a2;
    int64_t v18 = v4 + 16;
    int64_t v19 = &v7;
    int64_t * v20 = (int64_t *)(v17 + 184);
    int64_t * v21 = (int64_t *)v4;
    int64_t * v22 = (int64_t *)(v4 + 8);
    int64_t * v23 = (int64_t *)v18;
    int64_t v24 = v16; // 0x40ee19
    int64_t v25 = *(int64_t *)(a1 + 144); // 0x40ec40
    int64_t v26 = a4; // 0x40ee15
    int64_t v27; // 0x40ec40
    int64_t v28; // 0x40ec40
    int64_t v29; // 0x40ec40
    int64_t v30; // 0x40ec40
    int64_t v31; // 0x40ec40
    int64_t v32; // 0x40ec40
    int64_t v33; // 0x40ec40
    int64_t v34; // 0x40ec40
    int64_t v35; // 0x40ec40
    int64_t v36; // 0x40ee33
    int64_t v37; // 0x40efd8
    while (true) {
        // 0x40ee26
        int64_t v38; // 0x40ec40
        v34 = v38;
        v28 = v24;
        v31 = v26;
        v29 = v25;
        while (true) {
          lab_0x40ee26:
            // 0x40ee26
            v30 = v29;
            v32 = v31;
            int64_t v39 = v28;
            v35 = v34;
            v36 = 16 * v30;
            int64_t v40 = v36 + a1; // 0x40ee3a
            char v41 = *(char *)(v40 + 8); // 0x40ee3d
            if (v41 != 8) {
                // 0x40ed40
                v27 = v39;
                if (v41 == 9) {
                    int64_t v42 = *(int64_t *)v40 + 1; // 0x40efc3
                    v27 = v39;
                    if (v42 < a3) {
                        int64_t v43 = 16 * v42; // 0x40efd4
                        v37 = v43 + a4;
                        if (*(int64_t *)v37 < v32) {
                            // 0x40f350
                            *(int64_t *)(v37 + 8) = v32;
                            memcpy(v12, v13, size);
                            v27 = *v15;
                            goto lab_0x40ed49;
                        } else {
                            // 0x40efe6
                            if ((*(char *)(v40 + 10) & 8) == 0) {
                                goto lab_0x40effe;
                            } else {
                                // 0x40efec
                                if (*(int64_t *)(v43 + v9) != -1) {
                                    // 0x40f390
                                    memcpy(v13, v12, size);
                                    int64_t v44 = *v15; // 0x40f3ad
                                    v27 = v44;
                                    goto lab_0x40ed49;
                                } else {
                                    goto lab_0x40effe;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40ed49;
                    }
                } else {
                    goto lab_0x40ed49;
                }
            } else {
                int64_t v45 = *(int64_t *)v40 + 1; // 0x40ee4d
                v27 = v39;
                if (v45 < a3) {
                    int64_t v46 = 16 * v45 + a4; // 0x40ee62
                    *(int64_t *)(v46 + 8) = -1;
                    *(int64_t *)v46 = v32;
                    v27 = *v15;
                }
                goto lab_0x40ed49;
            }
        }
      lab_0x40ee15_2:
        // 0x40ee15
        v26 = v14;
        v24 = *v15;
        v38 = v33;
        if (v24 < v26) {
            goto lab_0x40ef80_2;
        }
    }
  lab_0x40f310_3:
    // 0x40f310
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40f480
        free(v12);
        goto lab_0x40f326;
    } else {
        goto lab_0x40f326;
    }
  lab_0x40f21a_3:
    // 0x40f21a
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40f4f2
        free(v12);
        // 0x40f230
        function_40d270(v4);
        result = 0;
        return result;
    } else {
        // 0x40f230
        function_40d270(v4);
        result = 0;
        return result;
    }
  lab_0x40ed49:;
    int64_t v47 = v30; // 0x40ed4c
    int64_t v48 = v36; // 0x40ed4c
    if (v32 == v27) {
        // 0x40ed4e
        v47 = v30;
        v48 = v36;
        if (*(int64_t *)(v17 + 176) == v30) {
            if (v4 == 0) {
                // 0x40f4c9
                free((int64_t *)v6);
                result = 0;
                if (v10 == 0) {
                    return result;
                } else {
                    // 0x40f4df
                    free(v12);
                    result = (int32_t)&g67 ^ (int32_t)&g67;
                    return result;
                }
            }
            int64_t v49 = a4; // 0x40f1f0
            int64_t v50 = 0; // 0x40f1f0
            if (a3 == 0) {
                goto lab_0x40f21a_3;
            }
            int64_t v51; // 0x40ec40
            while (true) {
                // 0x40f200
                v51 = v50;
                int64_t v52 = v49;
                if (*(int64_t *)v52 >= 0) {
                    // 0x40f206
                    if (*(int64_t *)(v52 + 8) == -1) {
                        // break -> 0x40f248
                        break;
                    }
                }
                // 0x40f20d
                v50 = v51 + 1;
                v49 = v52 + 16;
                if (v50 == a3) {
                    goto lab_0x40f21a_3;
                }
            }
            if (v51 == a3) {
                goto lab_0x40f21a_3;
            }
            int64_t v53 = function_40d2c0(v4, v18, &v14, a3, a4, &v7); // 0x40f26e
            v47 = v53;
            v48 = 16 * v53;
        }
    }
    int64_t v54 = v48;
    int64_t v55 = v47;
    int64_t v56 = *(int64_t *)(v17 + 152); // 0x40ed5c
    int64_t * v57 = (int64_t *)v56; // 0x40ed64
    int64_t v58 = *v57; // 0x40ed64
    int64_t v59 = v58 + v54; // 0x40ed67
    char v60 = *(char *)(v59 + 8); // 0x40ed6b
    int64_t v61; // 0x40ec40
    int64_t v62; // 0x40ec40
    int64_t v63; // 0x40ec40
    int64_t v64; // 0x40ec40
    int64_t v65; // 0x40ec40
    int64_t v66; // 0x40ec40
    int64_t v67; // 0x40ec40
    int64_t v68; // 0x40ec40
    int64_t v69; // 0x40ec40
    int64_t v70; // 0x40ec40
    int64_t v71; // 0x40ec40
    int64_t v72; // 0x40ec40
    int64_t v73; // 0x40f10e
    int64_t v74; // 0x40eef0
    if ((v60 & 8) != 0) {
        int64_t v75 = *(int64_t *)(8 * v14 + *v20); // 0x40ee93
        if ((char)function_408500(v19, v55) == 0) {
            // break (via goto) -> 0x40f310
            goto lab_0x40f310_3;
        }
        int64_t v76 = *(int64_t *)(v56 + 40) + 24 * v55; // 0x40eea6
        int64_t v77 = *(int64_t *)(v76 + 8); // 0x40eebe
        v71 = v35;
        if (v77 < 1) {
            goto lab_0x40ef3a;
        } else {
            // 0x40eec7
            v61 = -1;
            int64_t v78 = 0;
            v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
            int64_t v79 = v61; // 0x40ef05
            int64_t v80; // 0x40f115
            int64_t v81; // 0x40ec40
            int64_t * mem3; // 0x40f3e2
            int64_t v82; // 0x40f3e2
            int64_t v83; // 0x40f0f0
            if (function_409b10(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                // 0x40ef07
                v79 = v74;
                if (v61 != -1) {
                    // 0x40f0d8
                    v83 = function_409b10(v35, (int64_t)&v6, v61);
                    v69 = v35;
                    v63 = v83 != 0 ? v74 : v61;
                    if (v4 == 0 || v83 != 0) {
                        goto lab_0x40ee0c;
                    } else {
                        // 0x40f10e
                        v73 = *v21;
                        v80 = v73 + 1;
                        *v21 = v80;
                        v81 = *v23;
                        v62 = v81;
                        if (v80 == *v22) {
                            // 0x40f3c8
                            mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                            if (mem3 == NULL) {
                                goto lab_0x40f180;
                            } else {
                                // 0x40f3f0
                                v82 = (int64_t)mem3;
                                *v22 = 2 * *v22;
                                *v23 = v82;
                                v62 = v82;
                                goto lab_0x40f12a;
                            }
                        } else {
                            goto lab_0x40f12a;
                        }
                    }
                }
            }
            int64_t v84 = v79;
            int64_t v85 = v78 + 1; // 0x40ef14
            while (v77 != v85) {
                // 0x40eef0
                v61 = v84;
                v78 = v85;
                v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
                v79 = v61;
                if (function_409b10(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                    // 0x40ef07
                    v79 = v74;
                    if (v61 != -1) {
                        // 0x40f0d8
                        v83 = function_409b10(v35, (int64_t)&v6, v61);
                        v69 = v35;
                        v63 = v83 != 0 ? v74 : v61;
                        if (v4 == 0 || v83 != 0) {
                            goto lab_0x40ee0c;
                        } else {
                            // 0x40f10e
                            v73 = *v21;
                            v80 = v73 + 1;
                            *v21 = v80;
                            v81 = *v23;
                            v62 = v81;
                            if (v80 == *v22) {
                                // 0x40f3c8
                                mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                                if (mem3 == NULL) {
                                    goto lab_0x40f180;
                                } else {
                                    // 0x40f3f0
                                    v82 = (int64_t)mem3;
                                    *v22 = 2 * *v22;
                                    *v23 = v82;
                                    v62 = v82;
                                    goto lab_0x40f12a;
                                }
                            } else {
                                goto lab_0x40f12a;
                            }
                        }
                    }
                }
                // 0x40ef14
                v84 = v79;
                v85 = v78 + 1;
            }
            // 0x40ef1d
            v33 = v35;
            v25 = v84;
            v70 = v35;
            v64 = v84;
            if (v84 >= 0) {
                // break -> 0x40ee15
                goto lab_0x40ee15_2;
            }
            goto lab_0x40ef30;
        }
    } else {
        // 0x40ed77
        if ((*(char *)(v59 + 10) & 16) != 0) {
            int64_t v86 = 0x100000000 * function_40e290(v58, v56 + 216, v55, v17, v14);
            v67 = v86 >> 32;
            if (v86 != 0) {
                goto lab_0x40f1c9;
            } else {
                // 0x40f039
                v65 = v14;
                v68 = *v57 + v54;
                goto lab_0x40ed8d;
            }
        } else {
            if (v60 == 4) {
                int64_t v87 = a4 + 16 + 16 * *(int64_t *)v59; // 0x40f05b
                int64_t v88 = *(int64_t *)(v87 + 8); // 0x40f05e
                int64_t v89 = *(int64_t *)v87; // 0x40f062
                int64_t n = v88 - v89; // 0x40f068
                if (v4 == 0) {
                    // 0x40f1c0
                    v67 = n;
                    if (n == 0) {
                        goto lab_0x40f288;
                    } else {
                        goto lab_0x40f1c9;
                    }
                } else {
                    // 0x40f079
                    v72 = v35;
                    if (v88 == -1 || v89 == -1) {
                        goto lab_0x40ef48;
                    } else {
                        if (n == 0) {
                            goto lab_0x40f288;
                        } else {
                            int64_t v90 = *(int64_t *)(v17 + 8); // 0x40f096
                            int32_t memcmp_rc = memcmp((int64_t *)(v90 + v89), (int64_t *)(v14 + v90), (int32_t)n); // 0x40f0b0
                            v72 = v35;
                            v66 = n;
                            if (memcmp_rc != 0) {
                                goto lab_0x40ef48;
                            } else {
                                goto lab_0x40f0c4;
                            }
                        }
                    }
                }
            } else {
                // 0x40ed89
                v65 = v14;
                v68 = v59;
                goto lab_0x40ed8d;
            }
        }
    }
  lab_0x40ef3a:
    // 0x40ef3a
    v72 = v71;
    if (v4 == 0) {
        // 0x40f491
        free((int64_t *)v6);
        result = 1;
        if (v10 == 0) {
            return result;
        } else {
            // 0x40f4ac
            free(v12);
            result = 1;
            return result;
        }
    }
    goto lab_0x40ef48;
  lab_0x40effe:
    // 0x40effe
    *(int64_t *)(v37 + 8) = v32;
    v27 = *v15;
    goto lab_0x40ed49;
  lab_0x40ef48:;
    int64_t v91 = function_40d2c0(v4, v18, &v14, a3, a4, &v7); // 0x40ef65
    int64_t v92 = *v15; // 0x40ef71
    v34 = v72;
    v28 = v92;
    v31 = v14;
    v29 = v91;
    if (v92 < v14) {
        goto lab_0x40ef80_2;
    }
    goto lab_0x40ee26;
  lab_0x40ef30:
    // 0x40ef30
    v71 = v70;
    if (v64 == -2) {
        // break (via goto) -> 0x40f310
        goto lab_0x40f310_3;
    }
    goto lab_0x40ef3a;
  lab_0x40f1c9:
    // 0x40f1c9
    v66 = v67;
    goto lab_0x40f0c4;
  lab_0x40f0c4:;
    int64_t v93 = v14 + v66; // 0x40f0d0
    goto lab_0x40edba;
  lab_0x40ed8d:
    // 0x40ed8d
    if ((char)function_40b930(v17, v68, v65) == 0) {
        goto lab_0x40ef3a;
    } else {
        // 0x40edae
        v93 = v65 + 1;
        goto lab_0x40edba;
    }
  lab_0x40edba:;
    int64_t v94 = v93;
    int64_t v95 = *(int64_t *)(*(int64_t *)(v56 + 24) + 8 * v55);
    v14 = v94;
    v69 = 0;
    v63 = v95;
    if (v4 == 0) {
        goto lab_0x40ee0c;
    } else {
        // 0x40edc8
        v72 = v35;
        if (v94 > *(int64_t *)(v17 + 168)) {
            goto lab_0x40ef48;
        } else {
            int64_t v96 = *(int64_t *)(*v20 + 8 * v94); // 0x40edde
            v72 = v35;
            if (v96 == 0) {
                goto lab_0x40ef48;
            } else {
                int64_t v97 = function_409b10(*(int64_t *)(v96 + 16), v96 + 24, v95); // 0x40edf6
                v69 = 0;
                v63 = v95;
                v72 = v35;
                if (v97 == 0) {
                    goto lab_0x40ef48;
                } else {
                    goto lab_0x40ee0c;
                }
            }
        }
    }
  lab_0x40f288:
    // 0x40f288
    if ((char)function_408500(v19, v55) == 0) {
        // break (via goto) -> 0x40f310
        goto lab_0x40f310_3;
    }
    int64_t v98 = v14; // 0x40f2a7
    int64_t v99 = *(int64_t *)(24 * v55 + 16 + *(int64_t *)(v56 + 40)); // 0x40f2b6
    int64_t v100 = *(int64_t *)v99; // 0x40f2ba
    int64_t v101 = *(int64_t *)(*v20 + 8 * v98); // 0x40f2c5
    int64_t v102 = function_409b10(*(int64_t *)(v101 + 16), v101 + 24, v100); // 0x40f2d4
    v69 = v35;
    v63 = v100;
    if (v102 != 0) {
        goto lab_0x40ee0c;
    } else {
        // 0x40f2e2
        v65 = v98;
        v68 = *v57 + v54;
        goto lab_0x40ed8d;
    }
  lab_0x40ee0c:
    // 0x40ee0c
    v33 = v69;
    v25 = v63;
    v70 = v69;
    v64 = v63;
    if (v63 >= 0) {
        // break -> 0x40ee15
        goto lab_0x40ee15_2;
    }
    goto lab_0x40ef30;
  lab_0x40f326:
    // 0x40f326
    if (v4 != 0) {
      lab_0x40f196:
        // 0x40f196
        function_40d270(v4);
        return 12;
    }
    // 0x40efa9
    return 12;
  lab_0x40f12a:;
    int64_t v103 = v62 + 48 * v73; // 0x40f132
    *(int64_t *)(v103 + 8) = v74;
    *(int64_t *)v103 = v14;
    int64_t * mem4 = malloc(size); // 0x40f146
    *(int64_t *)(v103 + 16) = (int64_t)mem4;
    if (mem4 == NULL) {
        goto lab_0x40f180;
    } else {
        // 0x40f154
        memcpy(mem4, v13, size);
        v69 = v35;
        v63 = v61;
        if ((int32_t)function_40abb0(v103 + 24, v19) == 0) {
            goto lab_0x40ee0c;
        } else {
            goto lab_0x40f180;
        }
    }
  lab_0x40f180:
    // 0x40f180
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40f480
        free(v12);
        goto lab_0x40f326;
    } else {
        goto lab_0x40f196;
    }
}
// Address range: 0x40f510 - 0x40f6a6
int64_t function_40f510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + 16; // 0x40f524
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x40f537
    int64_t result = function_40e520(a1, v1, a3, *v2, a4, a5, 8); // 0x40f540
    if ((int32_t)result != 0) {
        // 0x40f54b
        return result;
    }
    int64_t v3 = *v2; // 0x40f560
    int64_t * v4 = (int64_t *)(a1 + 200); // 0x40f564
    uint64_t v5 = *v4; // 0x40f564
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x40f56b
    uint64_t v7 = *v6; // 0x40f56b
    int64_t * v8 = (int64_t *)(a1 + 216); // 0x40f576
    int64_t v9 = *v8; // 0x40f576
    int64_t v10 = v5; // 0x40f583
    int64_t v11 = v9; // 0x40f583
    if (v5 >= v7) {
        int64_t * mem = realloc((int64_t *)v9, 80 * (int32_t)v7); // 0x40f62d
        if (mem == NULL) {
            // 0x40f690
            free((int64_t *)*v8);
            // 0x40f54b
            return 12;
        }
        int64_t v12 = (int64_t)mem; // 0x40f62d
        *v8 = v12;
        memset((int64_t *)(40 * *v4 + v12), 0, 40 * (int32_t)*v6);
        *v6 = 2 * *v6;
        v10 = *v4;
        v11 = *v8;
    }
    int64_t v13 = 40 * v10; // 0x40f58d
    int64_t v14; // 0x40f510
    if (v10 < 1) {
        // 0x40f589
        v14 = v11 + v13;
    } else {
        int64_t v15 = v13 + v11;
        v14 = v15;
        if (*(int64_t *)(v15 - 32) == a5) {
            // 0x40f610
            *(char *)(v15 - 8) = 1;
            v14 = v15;
        }
    }
    // 0x40f5a1
    *(int64_t *)v14 = a4;
    *(int64_t *)(v14 + 8) = a5;
    *(int16_t *)(v14 + 34) = (int16_t)(v3 == v1);
    *(int64_t *)(v14 + 16) = v1;
    *(int64_t *)(v14 + 24) = v3;
    *v4 = v10 + 1;
    *(char *)(v14 + 32) = 0;
    int32_t * v16 = (int32_t *)(a1 + 224); // 0x40f5d3
    if (v3 - v1 > (int64_t)*v16) {
        // 0x40f5e2
        *v16 = (int32_t)v3 - (int32_t)v1;
    }
    // 0x40f5ec
    return function_4090e0(a1, 0);
}
// Address range: 0x40f6b0 - 0x40ff22
int64_t function_40f6b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40f6b0
    if (a2 >= 0 != a2 != 0) {
        // 0x40fb3b
        return 0;
    }
    // 0x40f749
    int64_t v1; // bp-232, 0x40f6b0
    int64_t v2 = &v1; // 0x40f6bd
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x40f74e
    int64_t * v4 = (int64_t *)(v2 + 56); // 0x40f75a
    int32_t * v5 = (int32_t *)(a1 + 160);
    int64_t * v6 = (int64_t *)(a1 + 200);
    int64_t * v7 = (int64_t *)(a1 + 216);
    int64_t * v8 = (int64_t *)(a1 + 232);
    int64_t * v9 = (int64_t *)(v2 + 104);
    int64_t * v10 = (int64_t *)(v2 + 96);
    int64_t * v11 = (int64_t *)(a1 + 8);
    int64_t * v12 = (int64_t *)(v2 + 24);
    int64_t * v13 = (int64_t *)(v2 + 16);
    int64_t * v14 = (int64_t *)(v2 + 32);
    int64_t * v15 = (int64_t *)(v2 + 64);
    int64_t * v16 = (int64_t *)(v2 + 112);
    int64_t v17 = v2 + 40;
    int64_t * v18 = (int64_t *)v17;
    int64_t * v19 = (int64_t *)(v2 + 120);
    int64_t * v20 = (int64_t *)(v2 + 48);
    int64_t * v21 = (int64_t *)(a1 + 184);
    int64_t v22 = v2 + 140;
    int32_t * v23 = (int32_t *)v22;
    int64_t * v24 = (int64_t *)(v2 + 88);
    int32_t * v25 = (int32_t *)v17;
    int64_t * v26 = (int64_t *)(v2 + 144);
    int128_t * v27 = (int128_t *)v22;
    int64_t * v28 = (int64_t *)(v2 + 160);
    int64_t v29 = *v3; // 0x40f735
    int64_t v30 = *(int64_t *)(a1 + 72); // 0x40f6b0
    int64_t v31; // 0x40f6b0
    int64_t v32; // 0x40f756
    int64_t v33; // 0x40f765
    uint32_t v34; // 0x40f772
    int64_t v35; // 0x40f772
    uint64_t v36; // 0x40f78d
    while (true) {
      lab_0x40f749:
        // 0x40f749
        v31 = v30;
        v32 = *(int64_t *)(*(int64_t *)*(int64_t *)(v2 + 72) + 8 * v29);
        v33 = 16 * v32;
        int64_t v37 = (v33 | 8) + *(int64_t *)*v4; // 0x40f76c
        v30 = v31;
        if (*(char *)v37 != 4) {
            goto lab_0x40f730_3;
        } else {
            // 0x40f772
            v34 = *(int32_t *)v37;
            if ((v34 & 0x3ff00) == 0) {
                goto lab_0x40f7c0;
            } else {
                // 0x40f77d
                v35 = v34;
                v36 = function_40b840(a1, v31, *v5);
                if ((v35 & 1024) != 0) {
                    // 0x40f700
                    v30 = v31;
                    if (v36 % 2 == 0) {
                        goto lab_0x40f730_3;
                    } else {
                        // 0x40f704
                        v30 = v31;
                        if ((v35 & 2048) != 0) {
                            goto lab_0x40f730_3;
                        } else {
                            goto lab_0x40f709;
                        }
                    }
                } else {
                    // 0x40f7a4
                    v30 = v31;
                    if ((v35 & 2048) == 0 || v36 % 2 == 0) {
                        goto lab_0x40f709;
                    } else {
                        goto lab_0x40f730_3;
                    }
                }
            }
        }
    }
  lab_0x40fb3b_7:;
    // 0x40fb3b
    int64_t result; // 0x40f6b0
    return result;
  lab_0x40f888:;
    int64_t v38 = *(int64_t *)(a1 + 152); // 0x40f888
    int64_t v39 = *(int64_t *)v38; // 0x40f897
    *v9 = v38;
    *v10 = *(int64_t *)(v39 + v33);
    int64_t v40; // 0x40f6b0
    int64_t v41; // 0x40f6b0
    int64_t v42; // 0x40f6b0
    int64_t v43; // 0x40f6b0
    int64_t v44; // 0x40f6b0
    int64_t v45; // 0x40f6b0
    int64_t v46; // 0x40f6b0
    int64_t v47; // 0x40f6b0
    int64_t v48; // 0x40f6b0
    int64_t v49; // 0x40f6b0
    int64_t v50; // 0x40f6b0
    int64_t v51; // 0x40f6b0
    int64_t v52; // 0x40f6b0
    int64_t v53; // 0x40f6b0
    int64_t v54; // 0x40f7c0
    int64_t v55; // 0x40f8dc
    int64_t * v56; // 0x40f8e0
    int64_t * v57; // 0x40fb50
    int64_t * v58; // 0x40fb55
    int64_t v59; // 0x40f910
    if (*v8 < 1) {
        // 0x40f85f
        *v23 = 0;
        v30 = v31;
        goto lab_0x40f730_3;
    } else {
        // 0x40f8aa
        *v12 = v31;
        *v13 = 0;
        *v14 = *v11;
        *v15 = v32;
        *v16 = v54;
        v40 = *v13;
        v51 = v39;
        while (true) {
          lab_0x40f8cb:
            // 0x40f8cb
            v55 = *(int64_t *)(*(int64_t *)(a1 + 248) + 8 * v40);
            v56 = (int64_t *)(v55 + 8);
            if (*v10 == *(int64_t *)(16 * *v56 + v51)) {
                // 0x40fb50
                v57 = (int64_t *)(v55 + 32);
                v58 = (int64_t *)v55;
                int64_t v60 = *v58; // 0x40fb55
                int64_t v61 = *v12; // 0x40fb58
                v41 = v61;
                v42 = v60;
                if (*v57 < 1) {
                    goto lab_0x40fd03;
                } else {
                    int64_t v62 = v61;
                    v49 = 0;
                    int64_t v63 = v60;
                    int64_t v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49); // 0x40fb90
                    int64_t v65 = *(int64_t *)(v64 + 8); // 0x40fb94
                    int64_t v66 = v65 - v63; // 0x40fb9b
                    int64_t v67 = v66 + v62; // 0x40fb9e
                    int64_t v68 = v64; // 0x40fba5
                    int64_t v69; // 0x40f6b0
                    int64_t v70; // 0x40f6b0
                    int32_t memcmp_rc; // 0x40fbc8
                    int64_t v71; // 0x40fca4
                    int64_t v72; // 0x40fcb1
                    int64_t n; // 0x40fcb5
                    int64_t v73; // 0x40fcba
                    int64_t v74; // 0x40fcbf
                    int64_t v75; // 0x40fcc4
                    if (v66 >= 1) {
                        // 0x40fba7
                        v69 = *v14;
                        v75 = v63;
                        n = v66;
                        v74 = v62;
                        v73 = v64;
                        v72 = v69;
                        if (*(int64_t *)(a1 + 48) < v67) {
                            // 0x40fc80
                            *v18 = v66;
                            *v14 = v64;
                            v50 = v63;
                            v48 = v62;
                            v43 = v69;
                            if (*(int64_t *)(a1 + 88) < v67) {
                                goto lab_0x40fe90_2;
                            }
                            // 0x40fc94
                            *v19 = v62;
                            *v20 = v63;
                            v71 = function_4090e0(a1, v67);
                            result = v71;
                            if ((int32_t)v71 != 0) {
                                // break (via goto) -> 0x40fb3b
                                goto lab_0x40fb3b_7;
                            }
                            // 0x40fcb1
                            v72 = *v11;
                            n = *v18;
                            v73 = *v14;
                            v74 = *v19;
                            v75 = *v20;
                        }
                        // 0x40fbb1
                        v70 = v72;
                        *v20 = v73;
                        *v18 = v75;
                        *v14 = v74;
                        memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                        v68 = *v20;
                        v50 = *v18;
                        v48 = *v14;
                        v43 = v70;
                        if (memcmp_rc != 0) {
                            goto lab_0x40fe90_2;
                        }
                    }
                    int64_t v76 = function_40f510(a1, v55, v68, *v15, *v12); // 0x40fbf7
                    int64_t v77 = *v11; // 0x40fbfc
                    result = v76;
                    if ((int32_t)v76 >= 2) {
                        // break (via goto) -> 0x40fb3b
                        goto lab_0x40fb3b_7;
                    }
                    int64_t v78 = v49 + 1; // 0x40fb78
                    while (v78 < *v57) {
                        // 0x40fb8c
                        v62 = v67;
                        v49 = v78;
                        v63 = v65;
                        v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49);
                        v65 = *(int64_t *)(v64 + 8);
                        v66 = v65 - v63;
                        v67 = v66 + v62;
                        v68 = v64;
                        if (v66 >= 1) {
                            // 0x40fba7
                            v69 = v77;
                            v75 = v63;
                            n = v66;
                            v74 = v62;
                            v73 = v64;
                            v72 = v69;
                            if (*(int64_t *)(a1 + 48) < v67) {
                                // 0x40fc80
                                *v18 = v66;
                                *v14 = v64;
                                v50 = v63;
                                v48 = v62;
                                v43 = v69;
                                if (*(int64_t *)(a1 + 88) < v67) {
                                    goto lab_0x40fe90_2;
                                }
                                // 0x40fc94
                                *v19 = v62;
                                *v20 = v63;
                                v71 = function_4090e0(a1, v67);
                                result = v71;
                                if ((int32_t)v71 != 0) {
                                    // break (via goto) -> 0x40fb3b
                                    goto lab_0x40fb3b_7;
                                }
                                // 0x40fcb1
                                v72 = *v11;
                                n = *v18;
                                v73 = *v14;
                                v74 = *v19;
                                v75 = *v20;
                            }
                            // 0x40fbb1
                            v70 = v72;
                            *v20 = v73;
                            *v18 = v75;
                            *v14 = v74;
                            memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                            v68 = *v20;
                            v50 = *v18;
                            v48 = *v14;
                            v43 = v70;
                            if (memcmp_rc != 0) {
                                goto lab_0x40fe90_2;
                            }
                        }
                        // 0x40fbe4
                        v76 = function_40f510(a1, v55, v68, *v15, *v12);
                        v77 = *v11;
                        result = v76;
                        if ((int32_t)v76 >= 2) {
                            // break (via goto) -> 0x40fb3b
                            goto lab_0x40fb3b_7;
                        }
                        // 0x40fb78
                        v78 = v49 + 1;
                    }
                    // 0x40fcf7
                    *v14 = v77;
                    v44 = v65;
                    v47 = v67;
                    goto lab_0x40fcfc;
                }
            } else {
                goto lab_0x40f8f2_2;
            }
        }
      lab_0x40f910:
        // 0x40f910
        v59 = *v12;
        int64_t v79 = *v15; // 0x40f915
        *v23 = 0;
        int64_t v80 = *v16; // 0x40f925
        v30 = v59;
        if (v80 < *v6) {
            int64_t v81 = *v4; // 0x40f93f
            *v15 = 8 * v79;
            *v10 = 24 * v79;
            int64_t * v82 = (int64_t *)(v81 + 48);
            int64_t * v83 = (int64_t *)(v81 + 24);
            int64_t * v84 = (int64_t *)(v81 + 40);
            v45 = v80;
            while (true) {
              lab_0x40fa99_2:
                // 0x40fa99
                v46 = v45;
                int64_t v85 = *v7 + 40 * v46; // 0x40faa4
                if (v79 != *(int64_t *)v85) {
                    goto lab_0x40fa88;
                } else {
                    // 0x40faad
                    if (v59 != *(int64_t *)(v85 + 8)) {
                        goto lab_0x40fa88;
                    } else {
                        int64_t v86 = *(int64_t *)(v85 + 24); // 0x40fab3
                        int64_t v87 = *(int64_t *)(v85 + 16); // 0x40fab7
                        int64_t v88 = v86 - v87; // 0x40fac3
                        *v14 = v88;
                        int64_t v89; // 0x40f6b0
                        if (v88 == 0) {
                            // 0x40f968
                            v89 = *(int64_t *)(*v84 + 16 + *v10);
                        } else {
                            // 0x40fad1
                            v89 = *v15 + *v83;
                        }
                        // 0x40f987
                        *v12 = 24 * *(int64_t *)v89 + *v82;
                        int64_t v90 = v86 + v59 - v87; // 0x40f993
                        int64_t v91 = function_40b840(a1, v90 - 1, *v5); // 0x40f99a
                        int64_t v92 = 8 * v90; // 0x40f9a4
                        *v13 = 0;
                        int64_t v93 = *v21; // 0x40f9b7
                        int64_t v94 = v93 + v92; // 0x40f9be
                        int64_t v95 = *(int64_t *)(v93 + *v24); // 0x40f9c2
                        int64_t v96 = *(int64_t *)v94; // 0x40f9c6
                        if (v95 != 0) {
                            // 0x40f9ce
                            *v13 = *(int64_t *)(v95 + 16);
                        }
                        if (v96 == 0) {
                            // 0x40faf8
                            *v18 = v94;
                            int64_t v97 = function_40adc0(v27, v81, (int64_t *)*v12, (int32_t)v91); // 0x40fb0d
                            int64_t v98 = *v21; // 0x40fb17
                            *(int64_t *)*v18 = v97;
                            v52 = v98;
                            v53 = v98;
                            if (*(int64_t *)(v98 + v92) != 0) {
                                goto lab_0x40fa62;
                            } else {
                                goto lab_0x40fb2c;
                            }
                        } else {
                            // 0x40f9e0
                            *v25 = (int32_t)v91;
                            *v20 = v92;
                            int64_t v99 = function_40ac30(v26, *(int64_t *)(v96 + 80), *v12, v91 & 0xffffffff); // 0x40f9fa
                            int32_t v100 = v99; // 0x40fa08
                            *v23 = v100;
                            if (v100 != 0) {
                                // 0x40fcd0
                                free((int64_t *)*v28);
                                result = (int64_t)*v23;
                                goto lab_0x40fb3b_7;
                            }
                            // 0x40fa17
                            *v18 = *v21 + *v20;
                            *(int64_t *)*v18 = function_40adc0(v27, v81, v26, *v25);
                            free((int64_t *)*v28);
                            int64_t v101 = *v21; // 0x40fa50
                            v52 = v101;
                            v53 = v101;
                            if (*(int64_t *)(v101 + v92) == 0) {
                                goto lab_0x40fb2c;
                            } else {
                                goto lab_0x40fa62;
                            }
                        }
                    }
                }
            }
        }
        goto lab_0x40f730_3;
    }
  lab_0x40fe90_2:;
    int64_t v102 = v48;
    int64_t v103 = v50;
    *v14 = v43;
    if (*v57 > v49) {
        goto lab_0x40f8f2_2;
    } else {
        // 0x40fea5
        v44 = v103;
        v47 = v102;
        v41 = v102;
        v42 = v103;
        if (v49 == 0) {
            goto lab_0x40fd03;
        } else {
            goto lab_0x40fcfc;
        }
    }
  lab_0x40fe44:;
    // 0x40fe44
    int64_t v104; // 0x40f6b0
    int64_t v105 = v104 + 1; // 0x40fe44
    int64_t v106 = v105; // 0x40fe4d
    if (*v12 < v105) {
        // break -> 0x40f8f2
        goto lab_0x40f8f2_2;
    }
    goto lab_0x40fd20;
  lab_0x40fa88:;
    int64_t v130 = v46 + 1; // 0x40fa88
    v30 = v59;
    int64_t v131 = v130; // 0x40fa93
    if (v130 >= *v6) {
        // break -> 0x40f730
        goto lab_0x40f730_3;
    }
    // 0x40fa99
    v45 = v131;
    goto lab_0x40fa99_2;
  lab_0x40fa62:
    // 0x40fa62
    if (*v14 != 0) {
        goto lab_0x40fa88;
    } else {
        // 0x40fa6a
        if (*(int64_t *)(*(int64_t *)(*v24 + v52) + 16) > *v13) {
            int64_t v132 = *v12; // 0x40fc10
            int64_t v133 = v132 + 16; // 0x40fc1b
            int64_t v134 = v132 + 8; // 0x40fc1f
            *v13 = v133;
            int64_t v135 = function_40b6f0(a1, v134, v133, v59); // 0x40fc2e
            int32_t v136 = v135; // 0x40fc33
            *v23 = v136;
            result = v135;
            if (v136 != 0) {
                // break (via goto) -> 0x40fb3b
                goto lab_0x40fb3b_7;
            }
            int64_t v137 = function_40f6b0(a1, v134, *v13); // 0x40fc50
            int32_t v138 = v137; // 0x40fc55
            *v23 = v138;
            result = v137;
            if (v138 != 0) {
                // break (via goto) -> 0x40fb3b
                goto lab_0x40fb3b_7;
            }
            int64_t v139 = v46 + 1; // 0x40fc64
            v30 = v59;
            v131 = v139;
            if (v139 >= *v6) {
                // break -> 0x40f730
                goto lab_0x40f730_3;
            }
            // 0x40fa99
            v45 = v131;
            goto lab_0x40fa99_2;
        } else {
            goto lab_0x40fa88;
        }
    }
  lab_0x40fb2c:;
    uint32_t v140 = *v23; // 0x40fb2c
    v52 = v53;
    if (v140 != 0) {
        // 0x40fb3b
        result = v140;
        goto lab_0x40fb3b_7;
    }
    goto lab_0x40fa62;
  lab_0x40f8f2_2:;
    int64_t v141 = *v13 + 1; // 0x40f8f2
    *v13 = v141;
    if (v141 >= *v8) {
        // break -> 0x40f910
        goto lab_0x40f910;
    }
    // 0x40f906
    v40 = v141;
    v51 = *(int64_t *)*v9;
    goto lab_0x40f8cb;
  lab_0x40fd03:;
    int64_t v142 = v42;
    int64_t v122; // 0x40fd95
    int64_t v128; // 0x40fe6c
    int64_t v127; // 0x40fe71
    int64_t * v143; // 0x40f6b0
    int64_t * v144; // 0x40f6b0
    if (*v12 >= v142) {
        int64_t * v126 = (int64_t *)(v55 + 16);
        v143 = (int64_t *)(v55 + 24);
        v144 = (int64_t *)(v55 + 40);
        v106 = v142;
        int64_t v145 = v41; // 0x40fd16
        while (true) {
          lab_0x40fd20:
            // 0x40fd20
            v104 = v106;
            if (v104 - *v58 >= 1) {
                // 0x40fd2b
                int64_t * v107; // 0x40f6b0
                int64_t v108 = *v107; // 0x40fd2b
                int64_t v109; // 0x40f6b0
                int64_t v110; // 0x40f6b0
                if (v108 > v110) {
                    int64_t v111 = *v14;
                    v109 = v111;
                } else {
                    // 0x40fec0
                    int64_t * v112; // 0x40f6b0
                    uint64_t v113 = *v112; // 0x40fec0
                    if (v113 <= v110) {
                        // break -> 0x40f8f2
                        break;
                    }
                    int64_t v114 = function_408f90(a1, v110 + 1 & 0xffffffff); // 0x40fed1
                    result = v114;
                    if ((int32_t)v114 != 0) {
                        // break (via goto) -> 0x40fb3b
                        goto lab_0x40fb3b_7;
                    }
                    int64_t v115 = *v11; // 0x40fede
                    *v14 = v115;
                    v109 = v115;
                }
                int64_t v116 = v109; // 0x40fd35
                char v117 = *(char *)(v104 - 1 + v116); // 0x40fd3e
                char v118 = *(char *)(v116 + v110); // 0x40fd44
                if (v118 != v117) {
                    // break -> 0x40f8f2
                    break;
                }
            }
            int64_t v119 = *(int64_t *)(*v21 + 8 * v104); // 0x40fd58
            if (v119 != 0) {
                uint64_t v120 = *(int64_t *)(v119 + 16); // 0x40fd65
                if (v120 >= 1) {
                    int64_t v121 = 0;
                    v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                    int64_t v123 = 16 * v122 + *(int64_t *)*v9; // 0x40fda0
                    int64_t v124; // 0x40fdb8
                    int64_t v125; // 0x40fdbc
                    int64_t * mem; // 0x40fe6c
                    if (*(char *)(v123 + 8) == 9) {
                        // 0x40fda9
                        if (*v10 == *(int64_t *)v123) {
                            if (v122 == -1) {
                                goto lab_0x40fe44;
                            } else {
                                // 0x40fdb8
                                v124 = *v126;
                                v127 = *v58;
                                v128 = v124;
                                if (v124 == 0) {
                                    // 0x40fe58
                                    *v18 = v125;
                                    mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                    v128 = (int64_t)mem;
                                    v127 = *v18;
                                    *v126 = v128;
                                    result = 12;
                                    if (mem != NULL) {
                                        goto lab_0x40fdc8;
                                    } else {
                                        goto lab_0x40fb3b_7;
                                    }
                                } else {
                                    goto lab_0x40fdc8;
                                }
                            }
                        }
                    }
                    int64_t v129 = v121 + 1; // 0x40fd88
                    while (v120 != v129) {
                        // 0x40fd95
                        v121 = v129;
                        v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                        v123 = 16 * v122 + *(int64_t *)*v9;
                        if (*(char *)(v123 + 8) == 9) {
                            // 0x40fda9
                            if (*v10 == *(int64_t *)v123) {
                                if (v122 == -1) {
                                    goto lab_0x40fe44;
                                } else {
                                    // 0x40fdb8
                                    v124 = *v126;
                                    v125 = *v58;
                                    v127 = v125;
                                    v128 = v124;
                                    if (v124 == 0) {
                                        // 0x40fe58
                                        *v18 = v125;
                                        mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                        v128 = (int64_t)mem;
                                        v127 = *v18;
                                        *v126 = v128;
                                        result = 12;
                                        if (mem != NULL) {
                                            goto lab_0x40fdc8;
                                        } else {
                                            goto lab_0x40fb3b_7;
                                        }
                                    } else {
                                        goto lab_0x40fdc8;
                                    }
                                }
                            }
                        }
                        // 0x40fd88
                        v129 = v121 + 1;
                    }
                }
            }
            goto lab_0x40fe44;
        }
    }
    goto lab_0x40f8f2_2;
  lab_0x40fcfc:
    // 0x40fcfc
    v41 = v47;
    v42 = v44 + 1;
    goto lab_0x40fd03;
  lab_0x40f730_3:
    // 0x40f730
    v29 = *v3 + 1;
    *v3 = v29;
    if (v29 >= *(int64_t *)*(int64_t *)(v2 + 80)) {
        // break -> 0x40fb3b
        goto lab_0x40fb3b_7;
    }
    goto lab_0x40f749;
  lab_0x40f7c0:
    // 0x40f7c0
    v54 = *v6;
    if (v54 > 0) {
        int64_t v146 = *v7; // 0x40f7d5
        int64_t v147 = v146 + 8; // 0x40f7ed
        int64_t v148 = 0;
        uint64_t v149 = v148 + v54; // 0x40f7d1
        int64_t v150 = (v149 / 0x8000000000000000 + v149) / 2; // 0x40f7e6
        int64_t v151 = v150; // 0x40f7f2
        int64_t v152 = v54; // 0x40f7f2
        int64_t v153 = v150; // 0x40f7f2
        int64_t v154; // 0x40f6b0
        int64_t v155; // 0x40f6b0
        uint64_t v156; // 0x40f800
        int64_t v157; // 0x40f80e
        if (v31 <= *(int64_t *)(40 * v150 + v147)) {
            v155 = v151;
            v154 = v148;
            if (v155 <= v148) {
                // break (via goto) -> 0x40f827
                goto lab_0x40f827;
            }
            // 0x40f800
            v156 = v155 + v148;
            v157 = (v156 / 0x8000000000000000 + v156) / 2;
            v152 = v155;
            v153 = v157;
            while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                // 0x40f822
                v155 = v157;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40f827
                    goto lab_0x40f827;
                }
                // 0x40f800
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
            }
        }
        int64_t v158 = v152;
        int64_t v159 = v153 + 1; // 0x40f878
        v154 = v159;
        while (v159 < v158) {
            // 0x40f7d1
            v148 = v159;
            v149 = v148 + v158;
            v150 = (v149 / 0x8000000000000000 + v149) / 2;
            v151 = v150;
            v152 = v158;
            v153 = v150;
            if (v31 <= *(int64_t *)(40 * v150 + v147)) {
                v155 = v151;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40f827
                    goto lab_0x40f827;
                }
                // 0x40f800
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
                while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                    // 0x40f822
                    v155 = v157;
                    v154 = v148;
                    if (v155 <= v148) {
                        // break (via goto) -> 0x40f827
                        goto lab_0x40f827;
                    }
                    // 0x40f800
                    v156 = v155 + v148;
                    v157 = (v156 / 0x8000000000000000 + v156) / 2;
                    v152 = v155;
                    v153 = v157;
                }
            }
            // 0x40f878
            v158 = v152;
            v159 = v153 + 1;
            v154 = v159;
        }
      lab_0x40f827:;
        int64_t v160 = v154;
        if (v54 > v160) {
            int64_t v161 = v146 + 40 * v160; // 0x40f837
            int64_t v162 = v161; // 0x40f83f
            if (v160 != -1 == *(int64_t *)(v161 + 8) == v31) {
                int64_t v163 = v162;
                while (v32 != *(int64_t *)v163) {
                    // 0x40f850
                    v162 = v163 + 40;
                    if (*(char *)(v163 + 32) == 0) {
                        goto lab_0x40f888;
                    }
                    v163 = v162;
                }
                // 0x40f85f
                *v23 = 0;
                v30 = v31;
                goto lab_0x40f730_3;
            } else {
                goto lab_0x40f888;
            }
        } else {
            goto lab_0x40f888;
        }
    } else {
        goto lab_0x40f888;
    }
  lab_0x40f709:
    // 0x40f709
    v30 = v31;
    if ((v35 & 0x2000) != 0 == (v36 & 2) == 0) {
        goto lab_0x40f730_3;
    } else {
        if ((char)(v34 / 256) > -1) {
            goto lab_0x40f7c0;
        } else {
            // 0x40f71e
            v30 = v31;
            if ((v36 & 8) != 0) {
                goto lab_0x40f7c0;
            } else {
                goto lab_0x40f730_3;
            }
        }
    }
  lab_0x40fdc8:
    // 0x40fdc8
    *(int64_t *)(v2 - 16) = 9;
    int64_t v164 = function_40e520(a1, v128, *v56, v127, v122, v104, (int64_t)&g67); // 0x40fddb
    int32_t v165 = v164; // 0x40fde2
    if (v165 == 1) {
        goto lab_0x40fe44;
    } else {
        // 0x40fde7
        result = v164;
        if (v165 != 0) {
            goto lab_0x40fb3b_7;
        } else {
            int64_t v166 = *v143; // 0x40fdef
            if (*v57 == v166) {
                int64_t v167 = 2 * v166 | 1; // 0x40feec
                *v18 = v167;
                int64_t * mem2 = realloc((int64_t *)*v144, 8 * (int32_t)v167); // 0x40ff02
                result = 12;
                if (mem2 == NULL) {
                    goto lab_0x40fb3b_7;
                } else {
                    // 0x40ff10
                    *v144 = (int64_t)mem2;
                    *v143 = *v18;
                    goto lab_0x40fdfd;
                }
            } else {
                goto lab_0x40fdfd;
            }
        }
    }
  lab_0x40fdfd:;
    int64_t * mem3 = calloc(1, 40); // 0x40fe07
    result = 12;
    if (mem3 == NULL) {
        goto lab_0x40fb3b_7;
    } else {
        int64_t v168 = (int64_t)mem3; // 0x40fe07
        int64_t v169 = *v57; // 0x40fe11
        *(int64_t *)(*v144 + 8 * v169) = v168;
        *mem3 = v122;
        *(int64_t *)(v168 + 8) = v104;
        *v57 = v169 + 1;
        function_40f510(a1, v55, v168, *v15, *v12);
        goto lab_0x40fe44;
    }
}
// Address range: 0x40ff30 - 0x4100e7
int64_t function_40ff30(int32_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 72); // 0x40ff44
    int64_t v3 = *v2; // 0x40ff44
    int64_t * v4 = (int64_t *)(v1 + 184); // 0x40ff48
    int64_t v5 = *(int64_t *)(v1 + 152); // 0x40ff4f
    int64_t v6 = 8 * v3; // 0x40ff56
    int64_t * v7 = (int64_t *)(v1 + 192); // 0x40ff61
    int64_t * v8 = (int64_t *)(*v4 + v6);
    int64_t result; // 0x40ff30
    if (*v7 < v3) {
        // 0x40ff6a
        *v8 = a3;
        *v7 = v3;
        result = a3;
    } else {
        int64_t v9 = *v8; // 0x40ffa0
        if (v9 == 0) {
            // 0x410078
            *v8 = a3;
            result = a3;
        } else {
            int64_t v10 = *(int64_t *)(v9 + 80); // 0x40ffac
            int64_t v11; // bp-88, 0x40ff30
            if (a3 == 0) {
                // 0x410030
                v11 = __asm_movaps(__asm_movdqu(*(int128_t *)v10));
                int64_t v12 = function_40b840(v1, v3 - 1, *(int32_t *)(v1 + 160)); // 0x410050
                int64_t v13 = function_40adc0((int128_t *)a1, v5, &v11, (int32_t)v12); // 0x410062
                *v8 = v13;
                result = v13;
            } else {
                int64_t v14 = *(int64_t *)(a3 + 80); // 0x40ffb5
                int64_t v15; // 0x40ff30
                int32_t v16 = function_40ac30(&v11, v14, v10, v15); // 0x40ffc9
                *a1 = v16;
                if (v16 != 0) {
                    // 0x40ff85
                    return 0;
                }
                int64_t v17 = function_40b840(v1, *v2 - 1, *(int32_t *)(v1 + 160)); // 0x40ffe6
                int64_t v18 = function_40adc0((int128_t *)a1, v5, &v11, (int32_t)v17); // 0x410007
                *(int64_t *)(*v4 + v6) = v18;
                result = v18;
                if (v14 != 0) {
                    // 0x410020
                    free((int64_t *)v15);
                    result = v18;
                }
            }
        }
    }
    // 0x40ff77
    if (*(int64_t *)(v5 + 152) == 0) {
        // 0x40ff85
        return result;
    }
    // 0x410088
    if (result == 0) {
        // 0x40ff85
        return 0;
    }
    int64_t v19 = result + 16; // 0x41008d
    int64_t v20 = result + 24; // 0x410091
    int32_t v21 = function_40b6f0(v1, v19, v20, v3); // 0x4100a6
    *a1 = v21;
    if (v21 != 0) {
        // 0x40ff85
        return 0;
    }
    // 0x4100ae
    if ((*(char *)(result + 104) & 64) == 0) {
        // 0x40ff85
        return result;
    }
    int32_t v22 = function_40f6b0(v1, v19, v20); // 0x4100c6
    *a1 = v22;
    int64_t result2 = 0; // 0x4100cc
    if (v22 == 0) {
        // 0x4100ce
        result2 = *(int64_t *)(*v4 + v6);
    }
    // 0x40ff85
    return result2;
}
// Address range: 0x4100f0 - 0x410414
int64_t function_4100f0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 24); // 0x410109
    uint64_t v2 = *v1; // 0x410109
    int64_t * mem = malloc(8); // 0x410123
    if (mem == NULL) {
        // 0x410400
        return 12;
    }
    // 0x410136
    int64_t v3; // bp-152, 0x4100f0
    int64_t v4 = &v3; // 0x410105
    int64_t v5 = (int64_t)mem; // 0x410123
    *mem = *(int64_t *)(a2 + 16);
    int64_t v6 = v5; // 0x41014e
    int64_t v7; // 0x4100f0
    int64_t v8; // 0x4100f0
    int64_t v9; // 0x4100f0
    int64_t v10; // 0x4100f0
    int64_t * v11; // 0x4100f0
    int64_t * v12; // 0x4100f0
    int64_t v13; // 0x4100f0
    int64_t v14; // 0x4101ae
    int64_t * v15; // 0x4101c9
    int64_t * v16; // 0x4100f0
    int64_t v17; // 0x41029e
    if ((int32_t)v5 == 0) {
        // 0x410154
        v6 = 0;
        if (v2 >= 1) {
            // 0x41016e
            v11 = (int64_t *)(v4 + 16);
            int32_t * v18 = (int32_t *)(v4 + 28);
            int32_t * v19 = (int32_t *)(a1 + 224);
            int64_t * v20 = (int64_t *)(a1 + 152);
            v12 = (int64_t *)(v4 + 8);
            int64_t * v21 = (int64_t *)(v4 + 40);
            int64_t * v22 = (int64_t *)(v4 + 48);
            int64_t * v23 = (int64_t *)(v4 + 32);
            v13 = a2 + 40;
            int64_t v24 = v2; // 0x4100f0
            while (true) {
                int64_t v25 = 8 * v24; // 0x410171
                *v11 = v25;
                if (*(int64_t *)(v25 + a2) == 0) {
                    uint32_t v26 = *v18 + 1; // 0x4103c0
                    *v18 = v26;
                    if ((int64_t)*v19 < (int64_t)v26) {
                        // break -> 0x4103d6
                        break;
                    }
                } else {
                    // 0x410189
                    *v18 = 0;
                    if (*v19 < 0) {
                        // break -> 0x4103d6
                        break;
                    }
                }
                int64_t v27 = *(int64_t *)(a1 + 184); // 0x4101a2
                v14 = v24 - 1;
                *(int64_t *)(v4 + 72) = 0;
                int64_t v28 = *(int64_t *)(v27 - 8 + *v11); // 0x4101bb
                v9 = v27;
                if (v28 != 0) {
                    // 0x4101c9
                    v15 = (int64_t *)(v28 + 40);
                    int64_t v29 = *v20; // 0x4101ce
                    v9 = v27;
                    if (*v15 >= 1) {
                        // 0x4101db
                        *v12 = 0;
                        int64_t * v30 = (int64_t *)v29; // 0x41029a
                        v16 = (int64_t *)(v29 + 24);
                        v7 = 0;
                        while (true) {
                          lab_0x410291:
                            // 0x410291
                            v17 = *(int64_t *)(8 * v7 + *(int64_t *)(v28 + 48));
                            int64_t v31 = 16 * v17; // 0x4102a5
                            int64_t v32 = v31 + *v30; // 0x4102a9
                            v10 = v32;
                            if ((*(char *)(v32 + 10) & 16) == 0) {
                                goto lab_0x4101f0;
                            } else {
                                int64_t v33 = *v20; // 0x4102b6
                                *v21 = v31;
                                int64_t v34 = v33 + 216; // 0x4102d2
                                *v22 = v33;
                                *v23 = *v1;
                                int64_t v35 = function_40e290(*(int64_t *)v33, v34, v17, a1, v14); // 0x4102e3
                                int64_t v36 = *v21; // 0x4102e8
                                int32_t v37 = v35; // 0x4102ed
                                int64_t v38 = v35 & 0xffffffff; // 0x4102ef
                                if (v37 < 1) {
                                    // 0x410350
                                    v8 = v38;
                                    if (v37 != 0) {
                                        goto lab_0x410231;
                                    } else {
                                        // 0x410356
                                        v10 = *v30 + v36;
                                        goto lab_0x4101f0;
                                    }
                                } else {
                                    int64_t v39 = (0x100000000 * v35 >> 32) + v14; // 0x4102f6
                                    v8 = v38;
                                    if (*v23 < v39) {
                                        goto lab_0x410231;
                                    } else {
                                        int64_t v40 = *(int64_t *)(8 * v39 + v34); // 0x41030c
                                        if (v40 == 0) {
                                            // 0x410356
                                            v10 = *v30 + v36;
                                            goto lab_0x4101f0;
                                        } else {
                                            // 0x410315
                                            *v23 = v36;
                                            int64_t v41 = *(int64_t *)(*(int64_t *)(*v22 + 24) + 8 * v17); // 0x410326
                                            v8 = v38;
                                            if (function_409b10(*(int64_t *)(v40 + 16), v40 + 24, v41) != 0) {
                                                goto lab_0x410231;
                                            } else {
                                                // 0x410338
                                                v10 = *v30 + *v23;
                                                goto lab_0x4101f0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              lab_0x410368:
                // 0x410368
                v6 = v9;
                if ((int32_t)v9 != 0) {
                    goto lab_0x410395_3;
                }
                // 0x41037f
                v24 = v14;
                v6 = 0;
                if (v14 == 0) {
                    goto lab_0x410395_3;
                }
            }
            // 0x4103d6
            memset((int64_t *)a2, 0, (int32_t)*v11);
            free((int64_t *)*(int64_t *)(v4 + 80));
            return (int32_t)&g67 ^ (int32_t)&g67;
        }
    }
  lab_0x410395_3:;
    int32_t * v42 = (int32_t *)(v4 + 8); // 0x41039a
    *v42 = (int32_t)v6;
    free((int64_t *)*(int64_t *)(v4 + 80));
    return (int64_t)*v42;
  lab_0x4101f0:;
    int64_t v43 = v10;
    if ((char)function_40b930(a1, v43, v14) == 0) {
        goto lab_0x41027c;
    } else {
        int64_t v44 = *(int64_t *)(*v11 + v43); // 0x410207
        if (v44 == 0) {
            goto lab_0x41027c;
        } else {
            int64_t v45 = *(int64_t *)(*v16 + 8 * v17); // 0x41021d
            v8 = 1;
            if (function_409b10(*(int64_t *)(v44 + 16), v44 + 24, v45) == 0) {
                goto lab_0x41027c;
            } else {
                goto lab_0x410231;
            }
        }
    }
  lab_0x41027c:;
    int64_t v46 = *v12 + 1; // 0x41027c
    *v12 = v46;
    v7 = v46;
    v9 = v46;
    if (v46 >= *v15) {
        // break -> 0x410368
        goto lab_0x410368;
    }
    goto lab_0x410291;
  lab_0x410231:
    // 0x410231
    if (*(int64_t *)v13 == 0) {
        goto lab_0x410267;
    } else {
        int64_t v47 = *(int64_t *)(*v16 + 8 * v17); // 0x410252
        *(int64_t *)(v4 - 16) = v14;
        int64_t v48 = *(int64_t *)(v4 + 56); // 0x410257
        int64_t v49 = function_409da0(a1, v13, v48, v47, (0x100000000 * v8 >> 32) + v14, v17, (int64_t)&g67); // 0x41025c
        if ((char)v49 != 0) {
            goto lab_0x41027c;
        } else {
            goto lab_0x410267;
        }
    }
  lab_0x410267:
    // 0x410267
    v6 = 12;
    if ((char)function_408500(v4 + 64, v17) == 0) {
        goto lab_0x410395_3;
    }
    goto lab_0x41027c;
}
// Address range: 0x410420 - 0x4123a9
int64_t function_410420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9) {
    // 0x410420
    int64_t v1; // 0x410420
    int64_t v2 = v1;
    int64_t v3; // bp-312, 0x410420
    __asm_rep_stosq_memset((char *)&v3, 0, 32);
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x41046c
    char * v5 = (char *)v4; // 0x410478
    char * v6 = v5; // 0x410480
    if (v4 != 0) {
        unsigned char v7 = *(char *)(a1 + 56); // 0x410482
        v6 = NULL;
        if (a4 != a5 && (v7 & 8) != 0) {
            // 0x410498
            v6 = v7 % 2 == 0 ? v5 : NULL;
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x4104b5
    uint64_t v9 = *v8; // 0x4104b5
    int64_t v10 = 0; // 0x4104c1
    int64_t v11 = a7; // 0x4104c1
    if (v9 < a7) {
        // 0x4104c3
        v10 = -1 - v9 + a7;
        v11 = v9 + 1;
    }
    int64_t v12 = *(int64_t *)(a1 + 16); // 0x4104ed
    if (v12 == 0) {
        // 0x410e90
        return 1;
    }
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x4104fd
    int64_t v14 = *v13; // 0x4104fd
    if (v14 == 0) {
        // 0x410e90
        return 1;
    }
    int64_t * v15 = (int64_t *)(a1 + 80); // 0x41050a
    int64_t v16 = *v15; // 0x41050a
    if (v16 == 0) {
        // 0x410e90
        return 1;
    }
    int64_t * v17 = (int64_t *)(a1 + 88); // 0x410517
    int64_t v18 = *v17; // 0x410517
    if (v18 == 0) {
        // 0x410e90
        return 1;
    }
    int64_t * v19 = (int64_t *)(a1 + 96); // 0x410524
    if (*v19 == 0) {
        // 0x410e90
        return 1;
    }
    int64_t v20 = a4; // 0x410534
    int64_t v21 = a5; // 0x410534
    if (*(int64_t *)(v14 + 16) != 0) {
        goto lab_0x410568;
    } else {
        // 0x410536
        v20 = a4;
        v21 = a5;
        if (*(int64_t *)(v16 + 16) != 0) {
            goto lab_0x410568;
        } else {
            // 0x41053d
            if (*(int64_t *)(v18 + 16) == 0) {
                goto lab_0x41054a;
            } else {
                // 0x410544
                if (*(char *)(a1 + 56) < 0) {
                    goto lab_0x410568;
                } else {
                    goto lab_0x41054a;
                }
            }
        }
    }
  lab_0x410e70_9:;
    // 0x410e70
    int64_t v22; // 0x410420
    free((int64_t *)v22);
    int64_t * v23; // 0x410420
    int64_t v24; // 0x410420
    int64_t v25; // 0x410420
    if (*v23 != 0) {
        // 0x411688
        function_409780(&v3);
        free((int64_t *)v24);
        free((int64_t *)v25);
    }
    // 0x410e88
    function_409740(&v3);
    // 0x410e90
    int64_t v26; // 0x410420
    return v26 & 0xffffffff;
  lab_0x4113d8_3:;
    // 0x4113d8
    int32_t v27; // 0x410420
    int32_t v28 = v27; // bp-392, 0x4113d8
    int32_t v29; // 0x410420
    int32_t v30 = v29; // 0x4113e2
    int64_t v31; // 0x410420
    int64_t v32 = v31; // 0x4113e2
    int64_t v33 = 0; // 0x4113e2
    int64_t v34; // 0x410420
    int64_t v35 = v34; // 0x4113e2
    int64_t v36; // 0x410420
    int64_t v37 = v36; // 0x4113e2
    int64_t v38; // 0x410420
    int64_t v39 = v38; // 0x4113e2
    int64_t * v40; // 0x410420
    v23 = v40;
    v26 = 12;
    int64_t v41; // 0x410420
    v25 = v41;
    int64_t v42; // 0x410420
    v24 = v42;
    v22 = 0;
    int64_t v43; // 0x410420
    if (v43 == 0) {
        goto lab_0x410e70_9;
    } else {
        goto lab_0x410bc8;
    }
  lab_0x410c6f:;
    // 0x410c6f
    int64_t v44; // 0x410420
    int64_t v45 = v44;
    int64_t v46; // 0x410420
    int64_t v47 = v46;
    int64_t v48; // 0x410420
    int64_t v49 = v48;
    int32_t v50; // 0x410420
    int32_t v51 = v50;
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v52; // 0x410420
    int64_t v53 = v52; // 0x410420
    int128_t v54; // 0x410420
    int128_t v55 = v54; // 0x410420
    int64_t v56; // 0x410420
    int64_t v57 = v56; // 0x410420
    int32_t v58; // 0x410420
    int64_t v59; // 0x410420
    int64_t v60; // 0x410420
    int64_t v61; // 0x410420
    int64_t v62; // 0x410420
    int64_t v63; // 0x410420
    int64_t v64; // 0x410420
    int64_t v65; // 0x410420
    int64_t v66; // 0x410420
    int64_t v67; // bp-376, 0x410420
    int64_t v68; // 0x410420
    int64_t * mem; // 0x4114ef
    int64_t v69; // 0x410420
    int64_t * mem2; // 0x411516
    int64_t v70; // 0x411516
    int128_t v71; // 0x41153e
    int64_t v72; // 0x41061d
    char * v73; // 0x410420
    char * v74; // 0x410420
    int64_t v75; // 0x410420
    int128_t v76; // 0x410420
    switch (v45) {
        case -1: {
            goto lab_0x4112d0;
        }
        case -2: {
            goto lab_0x410e70_9;
        }
        default: {
            // 0x410c83
            int64_t v77; // 0x410420
            if (v11 < 2 | (*v73 & 16) != 0) {
                // 0x410e40
                v65 = v45;
                v64 = v43;
                if (*v40 == 0) {
                    goto lab_0x410e53_2;
                }
                int64_t v78 = *(int64_t *)(8 * v45 + v43); // 0x41149e
                int64_t v79 = function_40ba60(&v3, *(int64_t *)(v78 + 16), v78 + 24, v45); // 0x4114aa
                v77 = v79;
            } else {
                int64_t v80 = *(int64_t *)(8 * v45 + v43); // 0x410cb7
                int64_t v81 = function_40ba60(&v3, *(int64_t *)(v80 + 16), v80 + 24, v45); // 0x410cc3
                v77 = v81;
                if (*v74 % 2 == 0) {
                    // 0x410ce5
                    v65 = v45;
                    v64 = v43;
                    v77 = v81;
                    if (*v40 == 0) {
                        goto lab_0x410e53_2;
                    }
                }
            }
            // 0x4114bf
            if (v45 >= 0x1fffffffffffffff) {
                // break -> 0x410e70
                break;
            }
            int64_t v82 = v45 + 1; // 0x4114df
            int32_t size = 8 * (int32_t)v82; // 0x4114ef
            mem = malloc(size);
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if (mem == NULL) {
                // break -> 0x410e70
                break;
            }
            int64_t v83 = v77;
            v69 = (int64_t)mem;
            if (*v40 == 0) {
                int128_t v84 = __asm_pxor(v54, v54); // 0x411250
                v67 = v69;
                __asm_movaps(v84);
                int64_t v85 = function_4100f0(v72, v75); // 0x411297
                free(NULL);
                int32_t v86 = v85;
                v58 = v86;
                v68 = 0;
                v66 = v83;
                v76 = v84;
                v63 = v85;
                if (v86 != 0) {
                    goto lab_0x411a82;
                } else {
                    // 0x4112b5
                    v60 = v45;
                    if (*mem != 0) {
                        goto lab_0x411628;
                    }
                    // 0x4112bf
                    free(mem);
                    v53 = v83;
                    v55 = v84;
                    v57 = v69;
                    goto lab_0x4112d0;
                }
            } else {
                // 0x411513
                mem2 = malloc(size);
                v70 = (int64_t)mem2;
                int64_t v87 = v45; // 0x411526
                if (mem2 == NULL) {
                    // 0x411ac4
                    free(mem);
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    goto lab_0x410e70_9;
                }
                v61 = v83;
                v62 = v82;
                int128_t v88 = v54;
                memset(mem2, 0, 8 * (int32_t)v62);
                v71 = __asm_pxor(v88, v88);
                __asm_movaps(v71);
                v67 = v69;
                int64_t v89 = function_4100f0(v72, v75); // 0x411581
                free(NULL);
                int32_t v90 = v89;
                v58 = v90;
                v68 = v70;
                v66 = v61;
                v76 = v71;
                v63 = v89;
                while (v90 == 0) {
                    // 0x4115a3
                    v59 = v87;
                    if (*mem != 0) {
                        goto lab_0x4115fd_2;
                    }
                    // 0x4115a9
                    if (*mem2 != 0) {
                        goto lab_0x4115fd_2;
                    }
                    int64_t v91 = v59; // 0x4115c8
                    if (v59 == 0) {
                        goto lab_0x4116b0_2;
                    }
                    int64_t v92; // 0x410420
                    int64_t v93; // 0x410420
                    int64_t v94; // 0x4115ce
                    while (true) {
                        // 0x4115ce
                        v92 = v91;
                        v93 = v92 - 1;
                        v94 = *(int64_t *)(8 * v93 + v43);
                        if (v94 != 0) {
                            // 0x4115d7
                            if ((*(char *)(v94 + 104) & 16) != 0) {
                                // break -> 0x4115dd
                                break;
                            }
                        }
                        // 0x4115c0
                        v91 = v93;
                        if (v93 == 0) {
                            goto lab_0x4116b0_2;
                        }
                    }
                    int64_t v95 = function_40ba60(&v3, *(int64_t *)(v94 + 16), v94 + 24, v93); // 0x4115f0
                    v87 = v93;
                    v61 = v95;
                    v62 = v92;
                    v88 = v71;
                    memset(mem2, 0, 8 * (int32_t)v62);
                    v71 = __asm_pxor(v88, v88);
                    __asm_movaps(v71);
                    v67 = v69;
                    v89 = function_4100f0(v72, v75);
                    free(NULL);
                    v90 = v89;
                    v58 = v90;
                    v68 = v70;
                    v66 = v61;
                    v76 = v71;
                    v63 = v89;
                }
                goto lab_0x411a82;
            }
        }
    }
  lab_0x4110ee:;
    // 0x4110ee
    int64_t v96; // 0x410420
    int64_t v97 = v96 + 1; // 0x4110ee
    int64_t v98; // 0x410420
    int64_t v99 = v98; // 0x4110f6
    int64_t v100; // 0x410420
    int64_t v101 = v100; // 0x4110f6
    int64_t v102; // 0x410420
    int64_t v103 = v102; // 0x4110f6
    int64_t v104; // 0x410420
    int64_t v105 = v104; // 0x4110f6
    int64_t v106; // 0x410420
    int64_t v107 = v106; // 0x4110f6
    int64_t v108 = v97; // 0x4110f6
    int64_t v109 = v98; // 0x4110f6
    int64_t v110 = v100; // 0x4110f6
    int64_t v111 = v102; // 0x4110f6
    int64_t v112 = v106; // 0x4110f6
    int64_t v113 = v104; // 0x4110f6
    int64_t v114 = v106; // 0x4110f6
    int64_t v115 = v36; // 0x4110f6
    int64_t v116; // 0x410420
    int64_t v117 = v116; // 0x4110f6
    int64_t * v118; // 0x410f80
    if (v97 >= *v118) {
        // break -> 0x411443
        goto lab_0x411443;
    }
    goto lab_0x4110fc;
  lab_0x410fe0:;
    // 0x410fe0
    int64_t v119; // 0x410420
    int64_t v121; // 0x411104
    int64_t v135 = function_40e290(v36, a1 + 216, v121, v72, v119); // 0x410fee
    int64_t v120; // 0x410420
    v98 = v120;
    v100 = v72;
    v102 = v121;
    v104 = v36;
    int64_t v136; // 0x410420
    v106 = v136;
    v116 = v121;
    int64_t v137; // 0x410420
    int64_t v138; // 0x410420
    int64_t v139; // 0x410420
    int64_t v140; // 0x410420
    int32_t v141; // bp-388, 0x410420
    int64_t v142; // 0x41104e
    int64_t * v143; // 0x410592
    int32_t v127; // 0x410420
    int64_t v144; // 0x410420
    if ((int32_t)v135 == 0) {
        goto lab_0x4110ee;
    } else {
        int64_t v145 = (0x100000000 * v135 >> 32) + v136; // 0x410ffe
        int32_t v146 = function_4090e0(v72, v145);
        v141 = v146;
        v27 = v146;
        v31 = v120;
        v34 = v119;
        v38 = v121;
        if (v146 != 0) {
            goto lab_0x4113d8_3;
        }
        int64_t v147 = 8 * v145; // 0x411046
        v142 = v147 + v43;
        int64_t v148 = *v8 + 24 * *(int64_t *)(*v143 + 8 * v121); // 0x41105e
        int64_t * v149 = (int64_t *)v142; // 0x411062
        int64_t v150 = *v149; // 0x411062
        if (v150 == 0) {
            // 0x411180
            v67 = __asm_movaps(__asm_movdqu(*(int128_t *)v148));
            int64_t v151 = *(int64_t *)(v148 + 16); // 0x411193
            int64_t v152 = function_40b840(v72, v145 - 1, v127); // 0x4111a6
            int64_t v153 = v152 & 0xffffffff; // 0x4111be
            int64_t v154 = function_40adc0((int128_t *)&v141, a1, &v67, (int32_t)v152); // 0x4111c0
            *v149 = v154;
            v98 = v151;
            v100 = v153;
            v102 = v43;
            v104 = v144;
            v106 = v136;
            v116 = v147;
            v140 = v151;
            v138 = v153;
            v139 = v144;
            v137 = v147;
            if (v154 != 0) {
                goto lab_0x4110ee;
            } else {
                goto lab_0x4111e0;
            }
        } else {
            int64_t v155 = function_40ac30(&v67, *(int64_t *)(v150 + 80), v148, v72); // 0x41107a
            int32_t v156 = v155;
            v141 = v156;
            v27 = v156;
            v31 = v120;
            v34 = v142;
            v38 = v147;
            if (v156 != 0) {
                goto lab_0x4113d8_3;
            }
            int64_t v157 = function_40b840(v72, v145 - 1, v127); // 0x41109c
            int64_t v158 = v157 & 0xffffffff; // 0x4110b4
            int64_t v159 = function_40adc0((int128_t *)&v141, a1, &v67, (int32_t)v157); // 0x4110be
            *v149 = v159;
            free((int64_t *)v120);
            v98 = v120;
            v100 = v158;
            v102 = v43;
            v104 = v120;
            v106 = v136;
            v116 = v142;
            v140 = v120;
            v138 = v158;
            v139 = v120;
            v137 = v142;
            if (*v149 == 0) {
                goto lab_0x4111e0;
            } else {
                goto lab_0x4110ee;
            }
        }
    }
  lab_0x410fc1:;
    // 0x410fc1
    int64_t v132; // 0x410420
    int64_t v160 = v132;
    v98 = v120;
    int64_t v129; // 0x411154
    v100 = v129;
    v102 = v160;
    v104 = v72;
    v106 = v119;
    v116 = v121;
    uint64_t v125; // 0x411118
    uint64_t v126; // 0x41113e
    int64_t v128; // 0x41114f
    if ((v125 & 0x2000) != 0 == (v126 & 2) == 0) {
        goto lab_0x4110ee;
    } else {
        uint32_t v161 = (int32_t)v128 & 128; // 0x410fce
        if (v161 == 0) {
            goto lab_0x410fe0;
        } else {
            // 0x410fd6
            v98 = v120;
            v100 = v161;
            v102 = v160;
            v104 = v72;
            v106 = v119;
            v116 = v121;
            if ((v126 & 8) == 0) {
                goto lab_0x4110ee;
            } else {
                goto lab_0x410fe0;
            }
        }
    }
  lab_0x4111e0:
    // 0x4111e0
    v98 = v140;
    v100 = v138;
    v102 = v43;
    v104 = v139;
    v106 = v136;
    v116 = v137;
    v27 = v141;
    v31 = v140;
    v34 = v142;
    v38 = v137;
    if (v141 != 0) {
        goto lab_0x4113d8_3;
    }
    goto lab_0x4110ee;
  lab_0x410e53_2:;
    int64_t v162 = v64;
    v23 = v40;
    int64_t v163; // 0x4109a5
    v26 = v163;
    v25 = v41;
    v24 = v42;
    v22 = v162;
    int64_t v164; // 0x410420
    int64_t v165; // 0x410420
    int64_t v166; // 0x410420
    int64_t v167; // 0x410420
    int64_t v168; // 0x411817
    if (v11 != 0) {
        // 0x4117f8
        v165 = v65;
        v167 = a8 + 16;
        v168 = 16 * v11 + a8;
        v164 = v167;
        if (v11 < 2) {
            // 0x411b04
            *(int64_t *)a8 = 0;
            *(int64_t *)(a8 + 8) = v165;
            v166 = 0;
            goto lab_0x4118d2;
        } else {
            goto lab_0x411830;
        }
    } else {
        goto lab_0x410e70_9;
    }
  lab_0x411628:
    // 0x411628
    free((int64_t *)v43);
    v65 = v60;
    v64 = v69;
    goto lab_0x410e53_2;
  lab_0x4115fd_2:;
    int64_t v169 = function_40b2b0(a1, v69, v70, v62); // 0x41160b
    free(mem2);
    int32_t v170 = v169;
    v60 = v59;
    v58 = v170;
    v68 = 0;
    v66 = v61;
    v76 = v71;
    v63 = v169;
    if (v170 != 0) {
        goto lab_0x411a82;
    } else {
        goto lab_0x411628;
    }
  lab_0x4116b0_2:
    // 0x4116b0
    free(mem);
    free(mem2);
    function_409780(&v3);
    int32_t v171 = v51; // 0x4116d0
    int64_t v172 = v61; // 0x4116d0
    int128_t v173 = v71; // 0x4116d0
    int64_t v174; // bp-384, 0x410420
    int64_t v175 = v174; // 0x4116d0
    int64_t v176 = v49; // 0x4116d0
    int64_t v177 = v47; // 0x4116d0
    int64_t v178 = v69; // 0x4116d0
    goto lab_0x4112e0;
  lab_0x410b94:;
    // 0x410b94
    int64_t v300; // 0x410420
    int64_t v533 = v300;
    int64_t v299; // 0x410420
    int64_t v534 = v299;
    int64_t v298; // 0x410420
    int64_t v535 = v298;
    int64_t v295; // 0x410420
    int64_t v536 = v295;
    int64_t v293; // 0x410420
    int64_t v537 = v293;
    int64_t v296; // 0x410420
    int32_t v538 = (int32_t)v296 + 1; // 0x410b98
    int64_t v328; // 0x410420
    int64_t v539 = (int64_t)*(char *)(v296 + v328); // 0x410ba8
    int64_t v284; // 0x410420
    int64_t * v540 = (int64_t *)(v284 + 88); // 0x410bac
    int64_t v541 = *v540; // 0x410bac
    int64_t v297; // 0x410420
    int64_t v542 = v297; // 0x410bb3
    int64_t v543 = v541; // 0x410bb3
    int64_t v544; // 0x410420
    int64_t v294; // 0x410420
    int64_t v545; // 0x410420
    int64_t v546; // 0x410420
    int64_t v349; // 0x410420
    if (v541 == 0) {
        int64_t v547 = v294;
        int64_t v548 = *(int64_t *)(v284 + 96); // 0x4111f8
        while (v548 == 0) {
            // 0x4113f0
            if ((char)function_40c550(a1, v284, v536, v547, v535) == 0) {
                // 0x411408
                v28 = 12;
                v30 = v538;
                v32 = v537;
                v33 = 0;
                v35 = v535;
                v37 = v534;
                v39 = v533;
                v23 = v40;
                v26 = 12;
                v25 = v41;
                v24 = v42;
                v22 = 0;
                if (v43 != 0) {
                    goto lab_0x410bc8;
                } else {
                    goto lab_0x410e70_9;
                }
            }
            int64_t v549 = *v540; // 0x410bac
            v542 = a1;
            v543 = v549;
            if (v549 != 0) {
                goto lab_0x410bb9;
            }
            v548 = *(int64_t *)(v284 + 96);
        }
        int64_t v550 = v548 + 8 * v539;
        int64_t v551 = function_40b840(v72, (int64_t)v538 - 1, v127) % 2 == 0 ? v550 : v550 + 2048;
        v546 = v349;
        v544 = v551;
        v545 = v72;
    } else {
      lab_0x410bb9:
        // 0x410bb9
        v546 = v536;
        v544 = v543 + 8 * v539;
        v545 = v542;
    }
    int64_t v552 = *(int64_t *)v544;
    v30 = v538;
    v32 = v537;
    v33 = v552;
    v35 = v535;
    v37 = v534;
    v39 = v533;
    int32_t v553 = v538; // 0x410bc6
    int64_t v554 = v537; // 0x410bc6
    int64_t v555 = v546; // 0x410bc6
    int64_t v556 = v552; // 0x410bc6
    int64_t v557 = v545; // 0x410bc6
    int64_t v558 = v535; // 0x410bc6
    int64_t v559 = v534; // 0x410bc6
    int64_t v560 = v533; // 0x410bc6
    if (v43 == 0) {
        goto lab_0x410bde;
    } else {
        goto lab_0x410bc8;
    }
  lab_0x410f80:;
    // 0x410f80
    int64_t v302; // 0x410420
    int64_t v561 = v302;
    int64_t v301; // 0x410420
    int64_t v562 = v301;
    v118 = (int64_t *)(v284 + 16);
    int64_t v279; // 0x410420
    v109 = v279;
    int64_t v286; // 0x410b59
    v110 = v286;
    int64_t v280; // 0x410420
    v111 = v280;
    v112 = v562;
    v113 = v561;
    int64_t v282; // 0x410420
    v114 = v282;
    int64_t v283; // 0x410420
    v115 = v283;
    int64_t v285; // 0x410420
    v117 = v285;
    if (*v118 >= 1) {
        int64_t * v122 = (int64_t *)(v284 + 24); // 0x4110fc
        v136 = v29;
        v99 = v279;
        v101 = v286;
        v103 = v280;
        v105 = v561;
        v107 = v562;
        v108 = 0;
        while (true) {
          lab_0x4110fc:
            // 0x4110fc
            v96 = v108;
            v119 = v107;
            v36 = v105;
            v120 = v99;
            v121 = *(int64_t *)(*v122 + 8 * v96);
            int64_t v123 = 16 * v121 + v36; // 0x41110f
            v98 = v120;
            v100 = v101;
            v102 = v103;
            v104 = v36;
            v106 = v119;
            v116 = v121;
            if ((*(char *)(v123 + 10) & 16) == 0) {
                goto lab_0x4110ee;
            } else {
                uint32_t v124 = *(int32_t *)(v123 + 8); // 0x411118
                if ((v124 & 0x3ff00) == 0) {
                    goto lab_0x410fe0;
                } else {
                    // 0x411127
                    v125 = (int64_t)v124;
                    v126 = function_40b840(v72, v119, v127);
                    v128 = v125 / 256;
                    v129 = v128 & 0xff03ff;
                    if ((v125 & 1024) != 0) {
                        // 0x410fb0
                        v98 = v120;
                        v100 = v129;
                        v102 = v128;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v126 % 2 == 0) {
                            goto lab_0x4110ee;
                        } else {
                            uint32_t v130 = (int32_t)v128 & 8; // 0x410fb8
                            int64_t v131 = v130; // 0x410fb8
                            v132 = v131;
                            v98 = v120;
                            v100 = v129;
                            v102 = v131;
                            v104 = v72;
                            v106 = v119;
                            v116 = v121;
                            if (v130 != 0) {
                                goto lab_0x4110ee;
                            } else {
                                goto lab_0x410fc1;
                            }
                        }
                    } else {
                        uint32_t v133 = (int32_t)v128 & 8; // 0x411162
                        int64_t v134 = v133; // 0x411162
                        v132 = v134;
                        v98 = v120;
                        v100 = v129;
                        v102 = v134;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v133 == 0 || v126 % 2 == 0) {
                            goto lab_0x410fc1;
                        } else {
                            goto lab_0x4110ee;
                        }
                    }
                }
            }
        }
    }
  lab_0x411443:
    // 0x411443
    v28 = 0;
    v293 = v109;
    v294 = v110;
    v295 = v111;
    v296 = v112;
    v297 = v113;
    v298 = v114;
    v299 = v115;
    v300 = v117;
    goto lab_0x410b94;
  lab_0x410bde:;
    int64_t v563 = v560;
    int64_t v564 = v559;
    int64_t v565 = v558;
    int64_t v566 = v554;
    int32_t v567 = v553;
    int32_t v568 = v567; // 0x410be1
    int64_t v569 = v555; // 0x410be1
    int64_t v570 = v556; // 0x410be1
    int64_t v571 = v557; // 0x410be1
    int64_t v267; // 0x410420
    int64_t v265; // 0x410420
    int64_t v266; // 0x410420
    int32_t v263; // 0x410420
    int64_t v264; // 0x410420
    int64_t v262; // 0x410420
    int64_t v278; // 0x410420
    int64_t v261; // 0x410420
    int64_t v277; // 0x410420
    int64_t v276; // 0x410420
    int32_t v260; // 0x410420
    int32_t v274; // 0x410420
    int64_t v350; // 0x410420
    char v351; // 0x410420
    if (v556 == 0) {
        // 0x410be7
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 != 0) {
            // break (via goto) -> 0x410e70
            goto lab_0x410e70_9;
        }
        // 0x410bfe
        v260 = v274;
        v261 = v277;
        v262 = v278;
        v263 = v567;
        v264 = v566;
        v265 = v565;
        v266 = v564;
        v267 = v563;
        if (v43 == 0) {
            // break -> 0x410c5d
            goto lab_0x410c5d_6;
        }
        int32_t v572 = v567; // 0x410c16
        v260 = v274;
        v261 = v277;
        v262 = v278;
        v263 = v567;
        v264 = v566;
        v265 = v565;
        v266 = v564;
        v267 = v563;
        if ((v351 & (char)v276) != 0) {
            // break -> 0x410c5d
            goto lab_0x410c5d_6;
        }
        int32_t v573 = v572;
        v260 = v274;
        v261 = v277;
        v262 = v278;
        v263 = v573;
        v264 = v566;
        v265 = v565;
        v266 = v564;
        v267 = v563;
        if (v573 > -1) {
            // break (via goto) -> 0x410c5d
            goto lab_0x410c5d_6;
        }
        int64_t v574 = (int64_t)v573 + 1;
        int64_t v575; // 0x410c43
        while (*(int64_t *)(8 * v574 + v43) == 0) {
            // 0x410c43
            v575 = v574 + 1;
            v260 = v274;
            v261 = v277;
            v262 = v278;
            v263 = 0;
            v264 = v566;
            v265 = v565;
            v266 = v564;
            v267 = v563;
            if (v575 > 0) {
                // break (via goto) -> 0x410c5d
                goto lab_0x410c5d_6;
            }
            v574 = v575;
        }
        int64_t v576 = function_40ff30(&v28, &v3, 0); // 0x410ec5
        uint32_t v577 = v28; // 0x410eca
        int32_t v578 = v574;
        while (v577 == 0) {
            // 0x410ed5
            v572 = v578;
            if (v576 != 0) {
                // 0x410af0
                v568 = v578;
                v569 = v577;
                v570 = v576;
                v571 = v350;
                goto lab_0x410af0_2;
            }
            v573 = v572;
            v260 = v274;
            v261 = v277;
            v262 = v278;
            v263 = v573;
            v264 = v566;
            v265 = v565;
            v266 = v564;
            v267 = v563;
            if (v573 > -1) {
                // break (via goto) -> 0x410c5d
                goto lab_0x410c5d_6;
            }
            // 0x410c30
            v574 = (int64_t)v573 + 1;
            while (*(int64_t *)(8 * v574 + v43) == 0) {
                // 0x410c43
                v575 = v574 + 1;
                v260 = v274;
                v261 = v277;
                v262 = v278;
                v263 = 0;
                v264 = v566;
                v265 = v565;
                v266 = v564;
                v267 = v563;
                if (v575 > 0) {
                    // break (via goto) -> 0x410c5d
                    goto lab_0x410c5d_6;
                }
                v574 = v575;
            }
            // 0x410eb0
            v576 = function_40ff30(&v28, &v3, 0);
            v577 = v28;
            v578 = v574;
        }
        // 0x410ef0
        v568 = v578;
        v569 = v577;
        v570 = v576;
        v571 = v350;
        v260 = v274;
        v261 = v277;
        v262 = v278;
        v263 = v578;
        v264 = v566;
        v265 = v565;
        v266 = v564;
        v267 = v563;
        if (v576 == 0) {
            // break -> 0x410c5d
            goto lab_0x410c5d_6;
        }
    }
    goto lab_0x410af0_2;
  lab_0x410bc8:;
    int64_t v628 = function_40ff30(&v28, &v3, v33); // 0x410bd6
    v553 = v30;
    v554 = v32;
    v555 = v33;
    v556 = v628;
    v557 = v350;
    v558 = v35;
    v559 = v37;
    v560 = v39;
    goto lab_0x410bde;
  lab_0x410af0_2:;
    int64_t v579 = v571;
    int64_t v580 = v570;
    int64_t v581 = v569;
    int32_t v582 = v568;
    int64_t v583 = v582; // 0x410af3
    char v584 = *(char *)(v580 + 104); // 0x410b15
    int64_t v585 = v276; // 0x410b1b
    int64_t v586 = v277; // 0x410b1b
    int64_t v587 = v278; // 0x410b1b
    int64_t v588 = v581; // 0x410b1b
    int64_t v589 = v579; // 0x410b1b
    int64_t v590; // 0x410420
    int64_t v591; // 0x410420
    if ((v584 & 16) == 0) {
        goto lab_0x410b48;
    } else {
        // 0x410b1d
        v591 = v581;
        v590 = v579;
        if (v584 < 0) {
            int64_t v592 = v580 + 24; // 0x410f14
            int64_t v593 = function_40ba60(&v3, *(int64_t *)(v580 + 16), v592, v583); // 0x410f1e
            v591 = v592;
            v590 = v72;
            v585 = v276;
            v586 = v277;
            v587 = v278;
            v588 = v592;
            v589 = v72;
            if (v593 == 0) {
                goto lab_0x410b48;
            } else {
                goto lab_0x410b25;
            }
        } else {
            goto lab_0x410b25;
        }
    }
  lab_0x410b48:;
    // 0x410b48
    char v275; // 0x410420
    char v594 = v275 & (char)(v284 == v580); // 0x410afe
    int32_t v595 = v594 == 0 ? (int64_t)v274 : v286;
    int64_t v245 = v563; // 0x410b53
    int64_t v246 = v580; // 0x410b53
    int64_t v247 = v564; // 0x410b53
    int64_t v248 = v565; // 0x410b53
    int64_t v249 = v589; // 0x410b53
    int64_t v250 = v583; // 0x410b53
    int64_t v251 = v588; // 0x410b53
    int64_t v252 = v566; // 0x410b53
    int64_t v254 = v587; // 0x410b53
    int64_t v255 = v586; // 0x410b53
    int64_t v256 = v585; // 0x410b53
    char v257 = v594; // 0x410b53
    int32_t v258 = v582; // 0x410b53
    int32_t v259 = v595; // 0x410b53
    v260 = v595;
    v261 = v586;
    v262 = v587;
    v263 = v582;
    v264 = v566;
    v265 = v565;
    v266 = v564;
    v267 = v563;
    if (v583 >= a6) {
        // break -> 0x410c5d
        goto lab_0x410c5d_6;
    }
    goto lab_0x410b59;
  lab_0x410b25:
    // 0x410b25
    v585 = 1;
    v586 = v583;
    v587 = 0;
    v588 = v591;
    v589 = v590;
    v50 = v582;
    v52 = v566;
    v48 = v565;
    v46 = v564;
    v44 = v583;
    v56 = v563;
    int32_t v311; // 0x410420
    if (v311 == 0) {
        goto lab_0x410c6f;
    }
    goto lab_0x410b48;
  lab_0x410920:
    // 0x410920
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v355; // 0x410420
    int64_t v181; // 0x41080c
    if (v181 > v355) {
        // break -> 0x410e70
        goto lab_0x410e70_9;
    }
    char v596 = 0;
    int64_t v597 = v355;
    int64_t v598 = 0; // 0x41096f
    if (v597 < a3) {
        // 0x410971
        v598 = (int64_t)*(char *)(v597 + a2);
    }
    int64_t v599 = v598;
    int64_t v600 = v599; // 0x410979
    int64_t v315; // 0x41058e
    if (v315 != 0) {
        // 0x41097b
        v600 = (int64_t)*(char *)(v599 + v315);
    }
    int64_t v347; // 0x410420
    while (*(char *)(v600 + v347) == 0) {
        int64_t v601 = v597 - 1; // 0x410958
        if (v601 < v181) {
            // 0x411728
            v174 = v601;
            v23 = v40;
            v26 = 1;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            goto lab_0x410e70_9;
        }
        v596 = 1;
        v597 = v601;
        v598 = 0;
        if (v597 < a3) {
            // 0x410971
            v598 = (int64_t)*(char *)(v597 + a2);
        }
        // 0x410976
        v599 = v598;
        v600 = v599;
        if (v315 != 0) {
            // 0x41097b
            v600 = (int64_t)*(char *)(v599 + v315);
        }
    }
    // 0x410985
    int32_t v358; // 0x410420
    int32_t v237 = v358; // 0x410987
    int64_t v357; // 0x410420
    int64_t v238 = v357; // 0x410987
    int128_t v356; // 0x410420
    int128_t v239 = v356; // 0x410987
    int64_t v240 = v355; // 0x410987
    int64_t v241 = a3; // 0x410987
    int64_t v242 = v181; // 0x410987
    int64_t v352; // 0x410420
    int64_t v243 = v352; // 0x410987
    if (v596 != 0) {
        // 0x410989
        v174 = v597;
        v237 = v358;
        v238 = v357;
        v239 = v356;
        v240 = v597;
        v241 = a3;
        v242 = v181;
        v243 = v352;
    }
    goto lab_0x410998;
  lab_0x410998:;
    int64_t v602 = v240;
    v163 = function_40bb30(&v3, v602, v127);
    v23 = v40;
    v26 = v163;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if ((int32_t)v163 != 0) {
        // break -> 0x410e70
        goto lab_0x410e70_9;
    }
    int64_t v236 = v243;
    int64_t v235 = v242;
    int64_t v234 = v241;
    v54 = v239;
    int64_t v233 = v238;
    int32_t v217 = v237;
    int64_t v287; // 0x410420
    int32_t v341; // 0x41082f
    if (v287 == 0 || v341 == 1) {
        goto lab_0x4109dc;
    } else {
        // 0x4109cb
        v171 = v217;
        v172 = v233;
        v173 = v54;
        v175 = v602;
        v176 = v234;
        v177 = v235;
        v178 = v236;
        int32_t * v603; // 0x410420
        if (*v603 == -1) {
            goto lab_0x4112e0;
        } else {
            goto lab_0x4109dc;
        }
    }
  lab_0x41131c:;
    // 0x41131c
    int64_t v193; // 0x410420
    int64_t v604 = v193;
    uint64_t v605 = v604 - v1; // 0x411383
    int64_t v606; // 0x4113a7
    if (v287 <= v605) {
        // 0x411395
        v606 = function_40bb30(&v3, v604, v127);
        v23 = v40;
        v26 = v606;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if ((int32_t)v606 != 0) {
            // break (via goto) -> 0x410e70
            goto lab_0x410e70_9;
        }
    }
    int64_t v607 = v347; // 0x411346
    if (v604 < a3) {
        // 0x411348
        v607 = (int64_t)*(char *)(v605 + v328) + v347;
    }
    // 0x411357
    int32_t v190; // 0x410420
    v237 = v190;
    int64_t v191; // 0x410420
    v238 = v191;
    int128_t v192; // 0x410420
    v239 = v192;
    v240 = v604;
    int64_t v194; // 0x410420
    v241 = v194;
    int64_t v195; // 0x410420
    v242 = v195;
    v243 = v181;
    int64_t v182; // 0x41081b
    int64_t v180; // 0x410420
    while (*(char *)v607 == 0) {
        int64_t v608 = v604 + v180; // 0x411363
        v174 = v608;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v608 < v181 || v608 > v182) {
            // break (via goto) -> 0x410e70
            goto lab_0x410e70_9;
        }
        v604 = v608;
        v605 = v604 - v1;
        if (v287 <= v605) {
            // 0x411395
            v606 = function_40bb30(&v3, v604, v127);
            v23 = v40;
            v26 = v606;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if ((int32_t)v606 != 0) {
                // break (via goto) -> 0x410e70
                goto lab_0x410e70_9;
            }
        }
        // 0x411340
        v607 = v347;
        if (v604 < a3) {
            // 0x411348
            v607 = (int64_t)*(char *)(v605 + v328) + v347;
        }
        // 0x411357
        v237 = v190;
        v238 = v191;
        v239 = v192;
        v240 = v604;
        v241 = v194;
        v242 = v195;
        v243 = v181;
    }
    goto lab_0x410998;
  lab_0x410d7c:;
    // 0x410d7c
    int64_t v360; // 0x410420
    int64_t v609 = v360;
    int64_t v359; // 0x410420
    int64_t v610 = v359;
    v237 = v358;
    v238 = v357;
    v239 = v356;
    v240 = v610;
    v241 = v609;
    int64_t v353; // 0x410420
    v242 = v353;
    v243 = v352;
    char * v348; // 0x410420
    if (v182 == v610) {
        int64_t v611 = 0; // 0x410d93
        if (v182 < a3) {
            // 0x410d95
            v611 = (int64_t)*v348;
        }
        int64_t v612 = v611;
        int64_t v613 = v612; // 0x410da9
        if (v315 != 0) {
            // 0x410dab
            v613 = (int64_t)*(char *)(v612 + v315);
        }
        // 0x410daf
        v237 = v358;
        v238 = v357;
        v239 = v356;
        v240 = v610;
        v241 = v609;
        v242 = v353;
        v243 = v352;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (*(char *)(v613 + v347) == 0) {
            // break -> 0x410e70
            goto lab_0x410e70_9;
        }
    }
    goto lab_0x410998;
  lab_0x4109dc:;
    int64_t v614 = *v13; // 0x410a03
    v28 = 0;
    int64_t v220 = v349; // 0x410a37
    int64_t v222 = v72; // 0x410a37
    int64_t v224 = v614; // 0x410a37
    int64_t v225; // 0x410420
    int64_t v223; // 0x410420
    int64_t v221; // 0x410420
    if (*(char *)(v614 + 104) >= 0) {
        goto lab_0x410a80;
    } else {
        uint64_t v615 = function_40b840(v72, (int64_t)v217 - 1, v127); // 0x410a47
        if (v615 % 2 != 0) {
            // 0x4116d8
            v221 = v349;
            v223 = v72;
            v225 = *v15;
            goto lab_0x4116dc;
        } else {
            int32_t v616 = v615; // 0x410a54
            v220 = v349;
            v222 = v72;
            v224 = v614;
            if (v616 == 0) {
                goto lab_0x410a80;
            } else {
                int64_t v617 = v615 & 6; // 0x410a5a
                if (v617 == 6) {
                    // 0x411a70
                    v221 = 6;
                    v223 = v72;
                    v225 = *v19;
                    goto lab_0x4116dc;
                } else {
                    if ((v615 & 2) != 0) {
                        // 0x4117a0
                        v221 = v617;
                        v223 = v72;
                        v225 = *v17;
                        goto lab_0x4116dc;
                    } else {
                        // 0x410a6e
                        v220 = v617;
                        v222 = v72;
                        v224 = v614;
                        if ((v615 & 4) != 0) {
                            int64_t v618 = *(int64_t *)(v614 + 80); // 0x4117b0
                            int64_t v619 = function_40adc0((int128_t *)&v28, a1, (int64_t *)v618, v616); // 0x4117c1
                            v221 = v618;
                            v223 = v350;
                            v225 = v619;
                            goto lab_0x4116dc;
                        } else {
                            goto lab_0x410a80;
                        }
                    }
                }
            }
        }
    }
  lab_0x410a80:;
    int64_t v200 = v224;
    int64_t v204 = v222;
    int64_t v202 = v220;
    int64_t v244; // 0x410420
    char v199; // 0x410420
    int64_t v203; // 0x410420
    int64_t v201; // 0x410420
    char v198; // 0x410420
    if (v43 == 0) {
        goto lab_0x410aa4;
    } else {
        // 0x410a8d
        *(int64_t *)(8 * (int64_t)v217 + v43) = v200;
        if (*v40 != 0) {
            int64_t v620 = v200 + 16; // 0x411a28
            int64_t v621 = v200 + 24; // 0x411a2c
            int64_t v622 = function_40b6f0(v72, v620, v621, 0); // 0x411a3b
            int32_t v623 = v622; // 0x411a40
            v28 = v623;
            v244 = v622;
            if (v623 != 0) {
                goto lab_0x411b2e;
            } else {
                char * v624 = (char *)(v200 + 104); // 0x411a4f
                char v625 = *v624; // 0x411a4f
                v198 = 0;
                v199 = v625;
                v201 = v621;
                v203 = v72;
                if ((v625 & 64) != 0) {
                    int64_t v626 = function_40f6b0(v72, v620, v621); // 0x411aea
                    int32_t v627 = v626; // 0x411aef
                    v28 = v627;
                    v244 = v626;
                    if (v627 != 0) {
                        goto lab_0x411b2e;
                    } else {
                        // 0x411afa
                        v198 = 0;
                        v199 = *v624;
                        v201 = v621;
                        v203 = v72;
                        goto lab_0x410ab8;
                    }
                } else {
                    goto lab_0x410ab8;
                }
            }
        } else {
            goto lab_0x410aa4;
        }
    }
  lab_0x4112e0:;
    int64_t v179 = v175 + v180; // 0x4112e8
    v174 = v179;
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v179 < v181 || v179 > v182) {
        // break -> 0x410e70
        goto lab_0x410e70_9;
    }
    int32_t v183 = v171; // 0x411316
    int64_t v184 = v172; // 0x411316
    int128_t v185 = v173; // 0x411316
    int64_t v186 = v179; // 0x411316
    int64_t v187 = v176; // 0x411316
    int64_t v188 = v177; // 0x411316
    int64_t v189 = v178; // 0x411316
    v190 = v171;
    v191 = v172;
    v192 = v173;
    v193 = v179;
    v194 = v176;
    v195 = v177;
    int32_t v196; // 0x410420
    if (v196 < 9) {
        goto lab_0x4108e8;
    } else {
        goto lab_0x41131c;
    }
  lab_0x410aa4:;
    // 0x410aa4
    char v197; // 0x4108c6
    v198 = v197;
    v199 = *(char *)(v200 + 104);
    v201 = v202;
    v203 = v204;
    goto lab_0x410ab8;
  lab_0x410ab8:;
    int64_t v205 = v203;
    int64_t v206 = v201;
    char v207 = v198;
    int64_t v208; // 0x410420
    int64_t v209; // 0x410420
    int64_t v210; // 0x410420
    int64_t v211; // 0x410420
    int64_t v212; // 0x410420
    int64_t v213; // 0x410420
    int64_t v214; // 0x410420
    int64_t v215; // 0x410420
    if ((v199 & 16) != 0) {
        // 0x411748
        if (*(char *)(v200 + 104) < 0) {
            int64_t v216 = v217;
            int64_t v218 = v200 + 24; // 0x4117d9
            int64_t v219 = function_40ba60(&v3, *(int64_t *)(v200 + 16), v218, v216); // 0x4117e0
            v208 = v216;
            v215 = 0;
            v214 = v218;
            v212 = v72;
            v210 = -1;
            v209 = v216;
            v213 = v218;
            v211 = v72;
            if (v219 == 0) {
                goto lab_0x410ad0;
            } else {
                goto lab_0x411753;
            }
        } else {
            // 0x411748
            v209 = v217;
            v213 = v206;
            v211 = v205;
            goto lab_0x411753;
        }
    } else {
        // 0x410ab8
        v208 = v217;
        v215 = 0;
        v214 = v206;
        v212 = v205;
        v210 = -1;
        goto lab_0x410ad0;
    }
  lab_0x4116dc:
    // 0x4116dc
    v220 = v221;
    v222 = v223;
    v224 = v225;
    int64_t v226; // 0x410420
    int64_t v227; // 0x410420
    int64_t v228; // 0x410420
    int64_t v229; // 0x410420
    int32_t v230; // 0x410420
    int64_t v231; // 0x410420
    int128_t v232; // 0x410420
    if (v225 != 0) {
        goto lab_0x410a80;
    } else {
        // 0x4116e5
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 == 12) {
            // break -> 0x410e70
            goto lab_0x410e70_9;
        }
        // 0x4116f9
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1073, "check_matching");
        v230 = v217;
        v231 = v233;
        v232 = v54;
        v229 = a1;
        v227 = v234;
        v228 = v235;
        v226 = v236;
      lab_0x411718_2:
        // 0x411718
        v174 = v229;
        v237 = v230;
        v238 = v231;
        v239 = v232;
        v240 = v229;
        v241 = v227;
        v242 = v228;
        v243 = v226;
        goto lab_0x410998;
    }
  lab_0x411b2e:
    // 0x411b2e
    v50 = v217;
    v52 = v233;
    v48 = v234;
    v46 = v235;
    v44 = 0x100000000 * v244 >> 32;
    v56 = v236;
    goto lab_0x410c6f;
  lab_0x410ad0:
    // 0x410ad0
    v245 = v236;
    v246 = v200;
    v247 = v235;
    v248 = v234;
    v249 = v212;
    v250 = v208;
    v251 = v214;
    v252 = v233;
    int64_t v253; // 0x4108b7
    v254 = v253;
    v255 = v210;
    v256 = v215;
    v257 = v207;
    v258 = v217;
    v259 = v217;
    v260 = v217;
    v261 = v210;
    v262 = v253;
    v263 = v217;
    v264 = v233;
    v265 = v234;
    v266 = v235;
    v267 = v236;
    int64_t v268; // 0x410420
    int64_t v269; // bp-576, 0x410420
    int32_t v270; // bp-688, 0x410420
    int32_t result; // bp-692, 0x410420
    int64_t v271; // 0x411bbe
    int64_t v272; // 0x411c33
    int64_t * v273; // 0x411c33
    if (v208 < a6) {
        while (true) {
          lab_0x410b59:
            // 0x410b59
            v274 = v259;
            v29 = v258;
            v275 = v257;
            v276 = v256;
            v277 = v255;
            v278 = v254;
            v279 = v252;
            v280 = v251;
            int64_t v281 = v250;
            v282 = v248;
            v283 = v247;
            v284 = v246;
            v285 = v245;
            v286 = v281 + 1;
            if (v2 < a3 == v286 >= v2 || v287 < a3 == v286 >= v287) {
                int32_t v288 = function_408f90(v72, v281 + 2 & 0xffffffff);
                v28 = v288;
                if (v288 != 0) {
                    // 0x411468
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    if (v288 != 12) {
                        // 0x411b5d
                        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1128, "check_matching");
                        v269 = v285;
                        v271 = *(int64_t *)0x60000000000063d8;
                        result = 0;
                        if (v271 == 0) {
                            int64_t v289 = function_40b0c0(&result, 0x1800000000004098, (int64_t *)"check_matching", 0x60000000000063d8, v282, v283); // 0x41207b
                            *(int64_t *)0x656765722f628cac = v289;
                            // 0x411bf9
                            return result;
                        }
                        // 0x411c10
                        v270 = 0;
                        int64_t v290 = function_40b0c0(&v270, 0x1800000000004098, (int64_t *)"check_matching", 0x60000000000063d8, v282, v283); // 0x411c23
                        uint32_t result2 = v270; // 0x411c2b
                        if (result2 != 0) {
                            // 0x411bf9
                            return result2;
                        }
                        // 0x411c33
                        v272 = v290 + 56;
                        v273 = (int64_t *)v272;
                        int64_t v291 = *v273; // 0x411c33
                        if (v291 != 0) {
                            goto lab_0x411cc0;
                        } else {
                            // 0x411c45
                            *(int64_t *)(v290 + 64) = 0;
                            *v273 = 0x676e69686374;
                            int64_t * mem3 = malloc(0x4b431ba0); // 0x411c59
                            *(int64_t *)(v290 + 72) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x411bf9
                                return 12;
                            }
                            // 0x411c67
                            v270 = 0;
                            v268 = v291;
                            goto lab_0x411c8a;
                        }
                    } else {
                        goto lab_0x410e70_9;
                    }
                }
                int64_t v292 = v29; // 0x410f64
                v293 = v279;
                v294 = v286;
                v295 = v280;
                v296 = v292;
                v297 = v72;
                v298 = v282;
                v299 = v283;
                v300 = v285;
                v301 = v292;
                v302 = v72;
                if ((*(char *)(v284 + 104) & 32) == 0) {
                    goto lab_0x410b94;
                } else {
                    goto lab_0x410f80;
                }
            } else {
                // 0x410b89
                v293 = v279;
                v294 = v286;
                v295 = v280;
                v296 = v281;
                v297 = v249;
                v298 = v282;
                v299 = v283;
                v300 = v285;
                v301 = v281;
                v302 = v249;
                if ((*(char *)(v284 + 104) & 32) != 0) {
                    goto lab_0x410f80;
                } else {
                    goto lab_0x410b94;
                }
            }
        }
    }
  lab_0x410c5d_6:;
    int64_t v303 = v267;
    int64_t v304 = v266;
    int64_t v305 = v265;
    int64_t v306 = v264;
    int32_t v307 = v263;
    int64_t v308 = v262;
    int64_t v309 = v261;
    v50 = v307;
    v52 = v306;
    v48 = v305;
    v46 = v304;
    v44 = v309;
    v56 = v303;
    if (v308 != 0) {
        int64_t * v310 = (int64_t *)v308; // 0x410c6c
        *v310 = *v310 + (int64_t)v260;
        v50 = v307;
        v52 = v306;
        v48 = v305;
        v46 = v304;
        v44 = v309;
        v56 = v303;
    }
    goto lab_0x410c6f;
  lab_0x411753:
    // 0x411753
    v208 = v209;
    v215 = 1;
    v214 = v213;
    v212 = v211;
    v210 = v209;
    v50 = v217;
    v52 = v233;
    v48 = v234;
    v46 = v235;
    v44 = v209;
    v56 = v236;
    if (v311 != 0) {
        goto lab_0x410ad0;
    } else {
        goto lab_0x410c6f;
    }
  lab_0x4112d0:
    // 0x4112d0
    function_409780(&v3);
    v171 = v51;
    v172 = v53;
    v173 = v55;
    v175 = v174;
    v176 = v49;
    v177 = v47;
    v178 = v57;
    goto lab_0x4112e0;
  lab_0x411a82:
    // 0x411a82
    free(mem);
    free((int64_t *)v68);
    v53 = v66;
    v55 = v76;
    v57 = v69;
    if (v58 != 1) {
        // 0x410e70
        v23 = v40;
        v26 = v63 & 0xffffffff;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        goto lab_0x410e70_9;
    }
    goto lab_0x4112d0;
  lab_0x410568:;
    int64_t v312 = v21;
    int64_t v313 = v20;
    int32_t v314 = 1; // 0x410579
    if (v11 == 0) {
        // 0x4108f0
        v314 = *(int64_t *)(a1 + 152) != 0;
    }
    // 0x41057f
    v315 = *(int64_t *)(a1 + 40);
    v143 = (int64_t *)(a1 + 24);
    int32_t * v316 = (int32_t *)(a1 + 180); // 0x410596
    int64_t v317 = v12 + 1; // 0x4105ad
    int64_t v318 = (int64_t)*v316; // 0x4105b6
    int64_t v319 = v317 - v318; // 0x4105b9
    int64_t v320 = v319 < 0 == ((v319 ^ v317) & (v317 ^ v318)) < 0 ? v317 : v318; // 0x4105c4
    int64_t v321 = a3 + 1; // 0x4105c8
    int64_t v322 = v320 - v321; // 0x4105dc
    int64_t v323 = v322 < 0 == ((v322 ^ v320) & (v320 ^ v321)) < 0 == (v322 != 0) ? v321 : v320; // 0x4105e7
    v3 = a2;
    v72 = &v3;
    int64_t v324 = function_4083f0(v72, v323); // 0x41064c
    int64_t v325; // 0x410420
    int64_t v326; // 0x410420
    int64_t v327; // 0x410420
    if ((int32_t)v324 != 0) {
        // 0x41057f
        v23 = (int64_t *)(a1 + 152);
        v26 = v324;
        goto lab_0x410e70_9;
    } else {
        // 0x41065d
        v311 = v314;
        if ((*v143 & 0x400000 || v315) != 0) {
            goto lab_0x4106b3;
        } else {
            // 0x410693
            v325 = a2;
            v326 = a2;
            v327 = a3;
            if (*v316 < 2) {
                goto lab_0x4106b5;
            } else {
                goto lab_0x4106b3;
            }
        }
    }
  lab_0x4106b3:
    // 0x4106b3
    v326 = v325;
    v327 = 0;
    goto lab_0x4106b5;
  lab_0x41054a:
    // 0x41054a
    v20 = 0;
    v21 = 0;
    if (a4 != 0 == (a5 != 0)) {
        // 0x410e90
        return 1;
    }
    goto lab_0x410568;
  lab_0x4106b5:
    // 0x4106b5
    v287 = v327;
    v328 = v326;
    v40 = (int64_t *)(a1 + 152);
    int64_t v329 = *v40; // 0x4106f1
    int64_t v330 = 2 * v329; // 0x41070b
    int64_t v331; // 0x410420
    int64_t v332; // 0x410420
    if (v330 < 1) {
        goto lab_0x41076c;
    } else {
        // 0x41071b
        v23 = v40;
        v26 = 12;
        if (v330 > 0x666666666666666) {
            goto lab_0x410e70_9;
        } else {
            int32_t v333 = v329;
            int64_t * mem4 = malloc(80 * v333); // 0x410736
            int64_t v334 = (int64_t)mem4; // 0x410736
            int64_t * mem5 = malloc(16 * v333); // 0x41074d
            int64_t v335 = (int64_t)mem5; // 0x41074d
            v332 = v334;
            v331 = v335;
            v23 = v40;
            v26 = 12;
            v25 = v334;
            v24 = v335;
            if (mem4 == NULL || mem5 == NULL) {
                goto lab_0x410e70_9;
            } else {
                goto lab_0x41076c;
            }
        }
    }
  lab_0x41076c:
    // 0x41076c
    v42 = v331;
    v41 = v332;
    int64_t v336; // 0x410420
    if (v11 < 2) {
        // 0x411660
        v336 = 0;
        if ((*(char *)(a1 + 176) & 2) != 0) {
            goto lab_0x410796;
        } else {
            goto lab_0x4107d2;
        }
    } else {
        goto lab_0x410796;
    }
  lab_0x410796:
    // 0x410796
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    if (v2 < 0x1fffffffffffffff) {
        // 0x4107b1
        g74 = &v269;
        int64_t * mem6 = malloc(8 * (int32_t)v2 + 8); // 0x4107b9
        int64_t v337 = (int64_t)mem6; // 0x4107b9
        v336 = v337;
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v337;
        if (mem6 == NULL) {
            goto lab_0x410e70_9;
        } else {
            goto lab_0x4107d2;
        }
    } else {
        goto lab_0x410e70_9;
    }
  lab_0x4107d2:
    // 0x4107d2
    v43 = v336;
    v174 = v313;
    int64_t v338 = v313 - v312; // 0x4107f8
    bool v339 = v338 == 0 | v338 < 0 != ((v338 ^ v313) & (v312 ^ v313)) < 0;
    int32_t v340 = v339; // 0x4107fb
    v341 = *v316;
    int32_t v342 = 8; // 0x410841
    if (v6 != NULL) {
        int32_t v343 = 4; // 0x41084b
        if (v341 != 1) {
            // 0x41084d
            v343 = 4 * (int32_t)((*v143 & 0x400000 | v315) == 0);
        }
        // 0x410870
        v342 = 2 * v340 | (int32_t)(v315 != 0) | v343;
    }
    // 0x41088c
    v181 = v339 ? v313 : v312;
    v182 = v338 < 0 == ((v338 ^ v313) & (v312 ^ v313)) < 0 ? v313 : v312;
    int64_t v344 = v313 - v182; // 0x41088c
    int64_t v345 = v313 - v181; // 0x410894
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v344 < 0 == ((v344 ^ v313) & (v182 ^ v313)) < 0 != v344 != 0 && v345 < 0 == ((v345 ^ v313) & (v181 ^ v313)) < 0) {
        int64_t v346 = 0x100000000 * a9 >> 32;
        v196 = v342;
        v253 = v339 ? (int64_t)&v174 : 0;
        v197 = v253 != 0;
        v347 = (int64_t)v6;
        v348 = (char *)(v182 + a2);
        v127 = v346;
        v180 = (int32_t)!((v338 == 0 | v338 < 0 != ((v338 ^ v313) & (v312 ^ v313)) < 0)) + v340;
        v349 = v346 & 0xffffffff;
        v350 = &v28;
        v144 = &v141;
        v351 = (char)v311 ^ 1;
        v73 = (char *)(a1 + 56);
        v74 = (char *)(a1 + 176);
        v75 = &v67;
        v186 = v313;
        v187 = a5;
        v188 = a6;
        v189 = v329;
        while (true) {
          lab_0x4108e8:
            // 0x4108e8
            v352 = v189;
            v353 = v188;
            int64_t v354 = v187;
            v355 = v186;
            v356 = v185;
            v357 = v184;
            v358 = v183;
            v237 = v358;
            v238 = v357;
            v239 = v356;
            v240 = v355;
            v241 = v354;
            v242 = v353;
            v243 = v352;
            v190 = v358;
            v191 = v357;
            v192 = v356;
            v193 = v355;
            v194 = v354;
            v195 = v353;
            switch (g74) {
                case 0: {
                    goto lab_0x410920;
                }
                case 1: {
                    goto lab_0x410920;
                }
                case 2: {
                    // 0x410dd8
                    v359 = v355;
                    v360 = v354;
                    if (v182 > v355) {
                        // 0x410ddf
                        v237 = v358;
                        v238 = v357;
                        v239 = v356;
                        v240 = v355;
                        v241 = v354;
                        v242 = v353;
                        v243 = v352;
                        int64_t v361 = v355; // 0x410df5
                        if (*(char *)((int64_t)*(char *)(v355 + a2) + v347) != 0) {
                            goto lab_0x410998;
                        } else {
                            int64_t v362 = v361 + 1;
                            while (v182 != v362) {
                                // 0x410e10
                                v361 = v362;
                                v230 = v358;
                                v231 = v357;
                                v232 = v356;
                                v229 = v362;
                                v227 = v354;
                                v228 = v353;
                                v226 = v352;
                                if (*(char *)((int64_t)*(char *)(v362 + a2) + v347) != 0) {
                                    goto lab_0x411718_2;
                                }
                                v362 = v361 + 1;
                            }
                            // 0x410e2a
                            v174 = v182;
                            v359 = v362;
                            v360 = v354;
                            goto lab_0x410d7c;
                        }
                    } else {
                        goto lab_0x410d7c;
                    }
                }
                case 3: {
                    // 0x410d00
                    v359 = v355;
                    v360 = v354;
                    if (v182 > v355) {
                        unsigned char v363 = *(char *)(v315 + (int64_t)*(char *)(v355 + a2)); // 0x410d18
                        v237 = v358;
                        v238 = v357;
                        v239 = v356;
                        v240 = v355;
                        v241 = v354;
                        v242 = v353;
                        v243 = v352;
                        int64_t v364 = v355; // 0x410d29
                        if (*(char *)((int64_t)v363 + v347) != 0) {
                            goto lab_0x410998;
                        } else {
                            int64_t v365 = v364 + 1;
                            while (v182 != v365) {
                                unsigned char v366 = *(char *)(v315 + (int64_t)*(char *)(v365 + a2)); // 0x410d55
                                v364 = v365;
                                v230 = v358;
                                v231 = v357;
                                v232 = v356;
                                v229 = v365;
                                v227 = a2;
                                v228 = v353;
                                v226 = v352;
                                if (*(char *)((int64_t)v366 + v347) != 0) {
                                    goto lab_0x411718_2;
                                }
                                v365 = v364 + 1;
                            }
                            // 0x410d6f
                            v174 = v182;
                            v359 = v365;
                            v360 = a2;
                            goto lab_0x410d7c;
                        }
                    } else {
                        goto lab_0x410d7c;
                    }
                }
                case 4: {
                    goto lab_0x410998;
                }
                default: {
                    goto lab_0x41131c;
                }
            }
        }
    }
    goto lab_0x410e70_9;
  lab_0x411cc0:;
    // 0x411cc0
    int64_t v367; // bp-784, 0x410420
    int64_t v368 = &v367; // 0x411b9b
    int64_t v369 = v271 + 8; // 0x411ccd
    int64_t result3 = function_40a5c0((int128_t *)"check_matching", v369, v272); // 0x411cd9
    int32_t v370 = result3; // 0x411cde
    result = v370;
    int64_t v371 = v282; // 0x411ce4
    int64_t v372 = v283; // 0x411ce4
    int64_t v373 = 0; // 0x411ce4
    if (v370 != 0) {
        // 0x411bf9
        return result3;
    }
    goto lab_0x412170;
  lab_0x412170:;
    int64_t v374 = v372;
    int64_t v375 = v371;
    int64_t v376 = *(int64_t *)((int64_t)"lib/regexec.c" + 48); // 0x412170
    int64_t v377 = 40 * *(int64_t *)(v376 + 8 * v373); // 0x412181
    int64_t v378 = -0x7fffffffffffbf67; // 0x412189
    int64_t v379 = v375; // 0x412189
    int64_t v380 = v374; // 0x412189
    int64_t v381; // 0x410420
    int64_t v382; // 0x410420
    int64_t v383; // 0x410420
    int64_t v384; // 0x410420
    int64_t v385; // 0x410420
    int64_t v386; // 0x410420
    int64_t v387; // 0x41219c
    int64_t v388; // 0x4121a8
    if (*(int64_t *)(v377 - 0x7fffffffffffbf57) < 1128) {
        // 0x41218f
        v378 = -0x7fffffffffffbf67;
        v379 = v375;
        v380 = v374;
        if (*(int64_t *)(v377 - 0x7fffffffffffbf5f) < 1128) {
            goto lab_0x41222d;
        } else {
            // 0x412199
            v387 = *(int64_t *)0x1800000000004098;
            int64_t v389 = 16 * *(int64_t *)(v377 - 0x7fffffffffffbf67); // 0x4121a4
            v388 = *(int64_t *)(v387 + v389);
            v381 = v387;
            v384 = v389;
            v382 = 0;
            v385 = 0x61666e5f6b6e696c;
            v386 = -1;
            v383 = -1;
            if (*(int64_t *)(v377 - 0x7fffffffffffbf4f) == 1128) {
                goto lab_0x412286;
            } else {
                goto lab_0x4121de;
            }
        }
    } else {
        goto lab_0x41222d;
    }
  lab_0x41222d:;
    int64_t v390 = v380;
    int64_t v391 = v379;
    int64_t v392 = v373 + 1; // 0x41222d
    v371 = v391;
    v372 = v390;
    v373 = v392;
    int64_t v393; // 0x410420
    int64_t v394; // 0x410420
    if (v392 < *(int64_t *)((int64_t)"lib/regexec.c" + 40)) {
        goto lab_0x412170;
    } else {
        // 0x41223b
        result = 0;
        int64_t v395 = function_40b0c0(&result, 0x1800000000004098, (int64_t *)"check_matching", v378, v391, v390); // 0x411d08
        *(int64_t *)0x656765722f628cac = v395;
        if (result != 0) {
            // 0x411bf9
            return result;
        }
        // 0x411d1d
        v394 = 0x4098;
        v393 = 0;
        if ((*(char *)(*(int64_t *)0x60000000000063d8 + 104) & 64) == 0) {
            // 0x411bf9
            return 0;
        }
        goto lab_0x411d54;
    }
  lab_0x411c8a:;
    int64_t v396 = *(int64_t *)(8 * v268 + 0x61666e5f6b6e696c); // 0x411c91
    int64_t v397 = *(int64_t *)0x18000000000040d0; // 0x411c99
    int32_t v398 = function_40a050(v273, (int128_t *)(v397 + 24 * v396)); // 0x411ca7
    v270 = v398;
    if (v398 != 0) {
        // 0x411bf9
        return 12;
    }
    int64_t v399 = v268 + 1; // 0x411c80
    v268 = v399;
    if (v399 > 0x676e69686373) {
        goto lab_0x411cc0;
    } else {
        goto lab_0x411c8a;
    }
  lab_0x412286:;
    int64_t v400 = v386;
    int64_t v401 = v385; // 0x410420
    int64_t v402 = v383; // 0x410420
    goto lab_0x412286_2;
  lab_0x4121de:;
    int64_t v415 = v382;
    int64_t v419 = v384;
    int64_t v417 = v381;
    int64_t v427 = *(int64_t *)(8 * v415 + 0x61666e5f6b6e696c); // 0x4121e2
    int64_t v428 = 16 * v427 + v417; // 0x4121ed
    int64_t v416; // 0x410420
    int64_t v420; // 0x410420
    int64_t result4; // 0x410420
    int64_t v418; // 0x410420
    if ((*(char *)(v428 + 8) || 1) == 9) {
        // 0x4121fc
        if (v388 != *(int64_t *)v428) {
            goto lab_0x4121d0;
        } else {
            int64_t v429 = function_40c320(0x1800000000004098, v427, (int64_t)"check_matching", v369); // 0x41220c
            result4 = v429;
            if ((int32_t)v429 != 0) {
                // 0x411bf9
                return result4;
            }
            int64_t v430 = v415 + 1; // 0x412219
            v378 = v369;
            v379 = v388;
            v380 = v374;
            if (v430 < 0x676e69686374) {
                // 0x412219
                v416 = *(int64_t *)0x1800000000004098;
                v418 = v369;
                v420 = v430;
                goto lab_0x4121da;
            } else {
                goto lab_0x41222d;
            }
        }
    } else {
        goto lab_0x4121d0;
    }
  lab_0x412286_2:;
    int64_t v403 = v402;
    int64_t v404 = v401;
    int64_t v405 = *(int64_t *)v404; // 0x412286
    int64_t v406 = 16 * v405 + v387; // 0x412290
    char v407 = *(char *)(v406 + 8); // 0x412293
    int64_t v408; // 0x410420
    int64_t v409; // 0x410420
    int64_t v410; // 0x410420
    int64_t v411; // 0x412279
    if (v407 != 8) {
        // 0x412270
        v411 = v403;
        if (v407 != 9) {
            goto lab_0x41227d;
        } else {
            // 0x412276
            v411 = v388 == *(int64_t *)v406 ? v405 : v403;
            goto lab_0x41227d;
        }
    } else {
        int64_t v412 = v388 == *(int64_t *)v406 ? v405 : v400; // 0x4122a1
        int64_t v413 = v404 + 8; // 0x4122a5
        v385 = v413;
        v386 = v412;
        v383 = v403;
        v409 = v413;
        v410 = v412;
        v408 = v403;
        if (v413 != 0x6169a9d2b6b1850c) {
            goto lab_0x412286;
        } else {
            goto lab_0x4122ae;
        }
    }
  lab_0x4121d0:;
    int64_t v414 = v415 + 1; // 0x4121d0
    v416 = v417;
    v418 = v419;
    v420 = v414;
    v378 = v419;
    v379 = v388;
    v380 = v374;
    if (v414 > 0x676e69686373) {
        goto lab_0x41222d;
    } else {
        goto lab_0x4121da;
    }
  lab_0x411d54:;
    int64_t v421 = v393;
    uint64_t v422 = v421 + v394; // 0x411d54
    int64_t v423 = (v422 / 0x8000000000000000 + v422) / 2; // 0x411d6e
    int64_t v424 = v423; // 0x411d7a
    int64_t v425 = v394; // 0x411d7a
    int64_t v426 = v423; // 0x411d7a
    if (*(int64_t *)(40 * v423 - 0x7fffffffffffbf5f) < 1128) {
        goto lab_0x4120b0;
    } else {
        goto lab_0x411dae;
    }
  lab_0x4121da:
    // 0x4121da
    v381 = v416;
    v384 = v418;
    v382 = v420;
    goto lab_0x4121de;
  lab_0x4120b0:;
    int64_t v431 = v426 + 1; // 0x4120b0
    v394 = v425;
    v393 = v431;
    int64_t v432 = v431; // 0x411d52
    if (v431 < v425) {
        goto lab_0x411d54;
    } else {
        goto lab_0x411db3;
    }
  lab_0x411dae:;
    int64_t v433 = v424;
    v432 = v421;
    if (v421 < v433) {
        uint64_t v434 = v433 + v421; // 0x411d88
        int64_t v435 = (v434 / 0x8000000000000000 + v434) / 2; // 0x411d96
        v424 = v435;
        v425 = v433;
        v426 = v435;
        if (*(int64_t *)(40 * v435 - 0x7fffffffffffbf5f) < 1128) {
            goto lab_0x4120b0;
        } else {
            goto lab_0x411dae;
        }
    } else {
        goto lab_0x411db3;
    }
  lab_0x41227d:;
    int64_t v436 = v404 + 8; // 0x41227d
    v401 = v436;
    v402 = v411;
    v409 = 0x6169a9d2b6b1850c;
    v410 = v400;
    v408 = v411;
    if (v436 == 0x6169a9d2b6b1850c) {
        goto lab_0x4122ae;
    } else {
        goto lab_0x412286_2;
    }
  lab_0x4122ae:;
    int64_t v437 = v408;
    int64_t v438 = v410;
    int64_t v439; // 0x410420
    if (v438 >= 0) {
        int64_t v440 = function_40c320(0x1800000000004098, v438, (int64_t)"check_matching", v369); // 0x41235b
        result4 = v440;
        if ((int32_t)v440 != 0) {
            // 0x411bf9
            return result4;
        }
        // 0x412368
        v378 = v369;
        v379 = v388;
        v380 = v437;
        v439 = v369;
        if (v437 < 0) {
            goto lab_0x41222d;
        } else {
            goto lab_0x4122cb;
        }
    } else {
        // 0x4122bf
        v378 = v409;
        v379 = v388;
        v380 = v437;
        v439 = v409;
        if (v437 < 0) {
            goto lab_0x41222d;
        } else {
            goto lab_0x4122cb;
        }
    }
  lab_0x411db3:
    // 0x411db3
    if (v432 >= 0x4098) {
        // 0x411bf9
        return 0;
    }
    // 0x411dbc
    if (v432 == -1 || *(int64_t *)(40 * v432 - 0x7fffffffffffbf5f) != 1128) {
        // 0x411bf9
        return 0;
    }
    // 0x411dee
    v270 = 0;
    if (*(int64_t *)(v271 + 16) < 1) {
        // 0x411bf9
        return 0;
    }
    int64_t * v441 = (int64_t *)(v368 + 16); // 0x411e37
    int64_t * v442 = (int64_t *)(v368 + 48);
    int64_t v443 = v368 + 8;
    int64_t * v444 = (int64_t *)v443;
    int64_t * v445 = (int64_t *)(v368 + 72);
    int64_t * v446 = (int64_t *)(v368 + 40);
    int64_t * v447 = (int64_t *)(v368 + 32);
    int64_t v448 = v368 + 96;
    int64_t * v449 = (int64_t *)v448;
    int64_t v450 = v368 + 128;
    int64_t v451 = v368 + 112;
    int64_t v452 = v368 + 144;
    int64_t * v453 = (int64_t *)v452;
    int64_t * v454 = (int64_t *)(v368 + 24);
    int64_t v455 = v368 + 136;
    int64_t * v456 = (int64_t *)v455;
    goto lab_0x411e37_2;
  lab_0x4122cb:;
    int64_t v465 = v439; // 0x4122db
    int64_t v466 = 0; // 0x4122db
    goto lab_0x4122f2;
  lab_0x4122f2:;
    int64_t v524 = v466;
    int64_t v525 = v465;
    int64_t v526 = *(int64_t *)(8 * v524 + 0x61666e5f6b6e696c); // 0x4122f2
    int64_t v527 = 24 * v526; // 0x412302
    int64_t v528 = *(int64_t *)0x18000000000040d0 + v527; // 0x412306
    int64_t v529 = v527; // 0x412319
    int64_t v464; // 0x410420
    int64_t v467; // 0x410420
    int64_t v463; // 0x410420
    if (function_409b10(*(int64_t *)(v528 + 8), v528 + 16, v437) != 0) {
        goto lab_0x4122e0;
    } else {
        int64_t v530 = *(int64_t *)0x18000000000040c8 + v527; // 0x41231b
        int64_t v531 = function_409b10(*(int64_t *)(v530 + 8), v530 + 16, v437); // 0x412328
        v529 = v530;
        if (v531 != 0) {
            goto lab_0x4122e0;
        } else {
            int64_t v532 = function_40c320(0x1800000000004098, v526, (int64_t)"check_matching", v369); // 0x412340
            result4 = v532;
            v463 = v369;
            v467 = v524;
            v464 = v530;
            if ((int32_t)v532 != 0) {
                // 0x411bf9
                return result4;
            }
            goto lab_0x4122e4;
        }
    }
  lab_0x4122e0:
    // 0x4122e0
    v463 = v525;
    v467 = v524 + 1;
    v464 = v529;
    goto lab_0x4122e4;
  lab_0x411e37_2:;
    int64_t v457 = 0;
    int64_t v458 = *v441;
    int64_t v459 = *(int64_t *)(*(int64_t *)(v458 + 24) + 8 * v457); // 0x411e40
    char v460 = *(char *)(*(int64_t *)0x1800000000004098 + 8 + 16 * v459); // 0x411e4f
    int64_t v461; // 0x410420
    int64_t v462; // 0x410420
    if (v459 != *(int64_t *)((int64_t)"lib/regexec.c" + 16)) {
        // 0x411e20
        v461 = v458;
        v462 = v457;
        if (v460 == 4) {
            goto lab_0x411e68;
        } else {
            goto lab_0x411e24;
        }
    } else {
        // 0x411e59
        v461 = v458;
        v462 = v457;
        if (v460 != 4 | *v442 == *(int64_t *)((int64_t)"lib/regexec.c" + 24)) {
            goto lab_0x411e24;
        } else {
            goto lab_0x411e68;
        }
    }
  lab_0x4122e4:
    // 0x4122e4
    v378 = v463;
    v379 = v388;
    v380 = v464;
    v465 = v463;
    v466 = v467;
    if (v467 > 0x676e69686373) {
        goto lab_0x41222d;
    } else {
        goto lab_0x4122f2;
    }
  lab_0x411e68:
    // 0x411e68
    *v445 = v457;
    int64_t v468 = *v442; // 0x411e7c
    *v446 = 24 * v459;
    *v447 = 8 * v459;
    int64_t v469 = *(int64_t *)(*v444 + 216) + *(int64_t *)(v368 + 56); // 0x411ea3
    int64_t v470 = *(int64_t *)(v368 + 64); // 0x411ea3
    goto lab_0x412015;
  lab_0x411e24:;
    // 0x411e24
    int64_t v478; // 0x410420
    if (v462 + 1 < *(int64_t *)(v461 + 16)) {
        goto lab_0x411e37_2;
    } else {
        // 0x412090
        v478 = 0;
        if (*v449 == 0) {
            // 0x411bf9
            return 0;
        }
        goto lab_0x41211c;
    }
  lab_0x412015:;
    int64_t v471 = v470;
    int64_t v472 = v469;
    int64_t v473; // 0x410420
    int64_t v474; // 0x41201e
    if (v459 != *(int64_t *)v472) {
        goto lab_0x412000;
    } else {
        // 0x41201a
        v474 = *(int64_t *)(v472 + 24) - *(int64_t *)(v472 + 16);
        if (v474 != 0) {
            // 0x411eb0
            v473 = *v447 + *(int64_t *)0x18000000000040b0;
            goto lab_0x411ebd;
        } else {
            int64_t v475 = *(int64_t *)(*(int64_t *)0x18000000000040c0 + 16 + *v446); // 0x412035
            v473 = v475;
            goto lab_0x411ebd;
        }
    }
  lab_0x412000:;
    // 0x412000
    int64_t v476; // 0x410420
    if (*(char *)(v476 + 32) == 0) {
        // 0x412140
        v461 = *v441;
        v462 = *v445;
        goto lab_0x411e24;
    } else {
        // 0x412012
        v469 = v476 + 40;
        v470 = v471 + 1;
        goto lab_0x412015;
    }
  lab_0x41211c:;
    int32_t * v477 = (int32_t *)v443; // 0x412124
    *v477 = (int32_t)v478;
    free((int64_t *)*v453);
    // 0x411bf9
    return (int64_t)*v477;
  lab_0x411ebd:;
    int64_t v479 = v474 + v468; // 0x412022
    int64_t v480 = *(int64_t *)v473;
    v476 = v472;
    int64_t result5; // 0x410420
    if (v479 > *(int64_t *)((int64_t)"lib/regexec.c" + 24)) {
        goto lab_0x412000;
    } else {
        int64_t v481 = *(int64_t *)(8 * v479 + 0x656765722f62696c); // 0x411eca
        v476 = v472;
        if (v481 == 0) {
            goto lab_0x412000;
        } else {
            // 0x411ed7
            v476 = v472;
            if (function_409b10(*(int64_t *)(v481 + 16), v481 + 24, v480) == 0) {
                goto lab_0x412000;
            } else {
                // 0x411ef0
                *(int64_t *)(v368 - 16) = v479;
                int64_t v482 = *v444; // 0x411f00
                int64_t v483 = function_409da0(v482, (int64_t)"lib/regexec.c" + 40, (int64_t)"lib/regexec.c" + 48, v459, v468, v480, (int64_t)&g67); // 0x411f09
                v476 = v472;
                if ((char)v483 != 0) {
                    goto lab_0x412000;
                } else {
                    // 0x411f18
                    if (*v449 == 0) {
                        int128_t v484 = __asm_movdqa(0x632e636578656765722f62696c); // 0x4120c0
                        int128_t v485 = __asm_movdqa(*(int128_t *)((int64_t)"lib/regexec.c" + 16)); // 0x4120c5
                        int128_t v486 = __asm_movdqa(*(int128_t *)((int64_t)"lib/regexec.c" + 32)); // 0x4120d7
                        *(int128_t *)v448 = (int128_t)__asm_movaps(v484);
                        *(int128_t *)v451 = (int128_t)__asm_movaps(v485);
                        *(int128_t *)v450 = (int128_t)__asm_movaps(v486);
                        *v453 = *(int64_t *)((int64_t)"lib/regexec.c" + 48);
                        int64_t v487 = function_40abb0(v450, (int64_t)"lib/regexec.c" + 32); // 0x4120fb
                        result5 = v487;
                        if ((int32_t)v487 == 0) {
                            goto lab_0x411f24;
                        } else {
                            goto lab_0x412110;
                        }
                    } else {
                        goto lab_0x411f24;
                    }
                }
            }
        }
    }
  lab_0x411f24:
    // 0x411f24
    *(int64_t *)v451 = v459;
    *(int64_t *)(v368 + 120) = v468;
    result5 = 12;
    int64_t v488; // 0x410420
    if ((char)function_408500(v450, v471) == 0) {
        goto lab_0x412110;
    } else {
        int64_t v489 = function_4100f0(*v444, v448); // 0x411f5e
        result5 = v489;
        if ((int32_t)v489 != 0) {
            goto lab_0x412110;
        } else {
            int64_t v490 = *(int64_t *)((int64_t)"lib/regexec.c" + 8); // 0x411f6b
            int64_t v491 = *v449; // 0x411f6f
            v488 = v491;
            if (v490 == 0) {
                goto lab_0x411f92;
            } else {
                // 0x411f79
                if ((int32_t)function_40b2b0(0x1800000000004098, v490, v491, v468 + 1) != 0) {
                    goto lab_0x412110;
                } else {
                    // 0x411f8d
                    v488 = *v449;
                    goto lab_0x411f92;
                }
            }
        }
    }
  lab_0x412110:
    // 0x412110
    v478 = result5;
    if (*v449 == 0) {
        // 0x411bf9
        return result5;
    }
    goto lab_0x41211c;
  lab_0x411f92:;
    int64_t v492 = *v456; // 0x411f97
    *(int64_t *)(*v454 + v488) = *(int64_t *)(*v454 + *v449);
    int64_t v493 = function_409b10(v492, v452, v471) - 1; // 0x411fb9
    if (v493 > -1 == v492 > v493) {
        // 0x411fc7
        *v456 = v492 - 1;
        function_409c80(v455, v452, v493);
        goto lab_0x411fe3;
    } else {
        goto lab_0x411fe3;
    }
  lab_0x411fe3:
    // 0x411fe3
    v476 = *(int64_t *)(*v444 + 216) + 40 * v471;
    goto lab_0x412000;
  lab_0x411830:
    // 0x411830
    *(int64_t *)(v164 + 8) = -1;
    int64_t v494 = v164 + 16; // 0x411834
    *(int64_t *)v164 = -1;
    v164 = v494;
    int64_t v495; // 0x410420
    int64_t * v496; // 0x411851
    if (v168 != v494) {
        goto lab_0x411830;
    } else {
        // 0x411841
        v496 = (int64_t *)a8;
        *v496 = 0;
        *(int64_t *)(a8 + 8) = v165;
        v166 = 0;
        if (v11 == 1 | (*v73 & 16) != 0) {
            goto lab_0x4118d2;
        } else {
            // 0x411882
            v495 = 0;
            if (*v74 % 2 == 0) {
                goto lab_0x4118a2;
            } else {
                int64_t v497 = *v40; // 0x411896
                v495 = v497 >= 0 == (v497 != 0);
                goto lab_0x4118a2;
            }
        }
    }
  lab_0x4118d2:;
    int64_t v498 = a8; // 0x41190d
    int64_t v499 = 0; // 0x41190d
    int64_t v500 = v166; // 0x41190d
    goto lab_0x411913;
  lab_0x411913:;
    int64_t v501 = v500;
    int64_t v502 = v498;
    int64_t * v503; // 0x410420
    int64_t v504; // 0x410420
    int64_t v505; // 0x410420
    int64_t * v506; // 0x411919
    int64_t v507; // 0x411919
    int64_t v508; // 0x411b3b
    if (v501 == -1) {
        goto lab_0x411933;
    } else {
        // 0x411919
        v506 = (int64_t *)(v502 + 8);
        v507 = *v506;
        char v509; // 0x410420
        if (v509 != 0) {
            // 0x411b36
            v508 = v287;
            if (v287 == v501) {
                goto lab_0x411b3f;
            } else {
                // 0x411b3b
                v508 = *(int64_t *)(8 * v501 + v1);
                goto lab_0x411b3f;
            }
        } else {
            // 0x411919
            v503 = (int64_t *)v502;
            v504 = v501;
            v505 = v507;
            goto lab_0x411926;
        }
    }
  lab_0x411933:;
    int64_t v510 = v499 + 1; // 0x411933
    if (v510 != v11) {
        int64_t v511 = v502 + 16; // 0x411937
        v498 = v511;
        v499 = v510;
        v500 = *(int64_t *)v511;
        goto lab_0x411913;
    } else {
        if (v10 < 1) {
            goto lab_0x411998;
        } else {
            // 0x41194b
            goto lab_0x411988;
        }
    }
  lab_0x4118a2:;
    int64_t v512 = function_40ec40(a1, &v3, v11, a8, v495); // 0x4118ba
    v23 = v40;
    v26 = v512;
    v25 = v41;
    v24 = v42;
    v22 = v162;
    if ((int32_t)v512 != 0) {
        goto lab_0x410e70_9;
    } else {
        // 0x4118c7
        v166 = *v496;
        goto lab_0x4118d2;
    }
  lab_0x411998:;
    int64_t v513 = *(int64_t *)(a1 + 224); // 0x4119a5
    v23 = v40;
    v26 = v163;
    v25 = v41;
    v24 = v42;
    v22 = v162;
    int64_t v514; // 0x410420
    int64_t v515; // 0x4119bd
    int64_t v516; // 0x410420
    if (v513 == 0) {
        goto lab_0x410e70_9;
    } else {
        // 0x4119b5
        v515 = v11 - 1;
        v23 = v40;
        v26 = v163;
        v25 = v41;
        v24 = v42;
        v22 = v162;
        if (v515 != 0) {
            // 0x4119c8
            v516 = a8 + 24;
            v514 = 0;
            goto lab_0x4119c8_2;
        } else {
            goto lab_0x410e70_9;
        }
    }
  lab_0x411b3f:;
    int64_t v517 = v508;
    int64_t * v518 = (int64_t *)v502;
    *v518 = v517;
    v503 = v518;
    v504 = v517;
    v505 = v287;
    if (v287 == v507) {
        goto lab_0x411926;
    } else {
        // 0x411b47
        v503 = v518;
        v504 = v517;
        v505 = *(int64_t *)(8 * v507 + v1);
        goto lab_0x411926;
    }
  lab_0x411926:
    // 0x411926
    *v503 = v504 + v174;
    *v506 = v505 + v174;
    goto lab_0x411933;
  lab_0x411988:
    // 0x411988
    *(int64_t *)v168 = -1;
    *(int64_t *)(v168 + 8) = -1;
    if (16 * (v11 + v10) + a8 != v168 + 16) {
        goto lab_0x411988;
    } else {
        goto lab_0x411998;
    }
  lab_0x4119c8_2:;
    int64_t v519 = v514;
    int64_t * v520 = (int64_t *)(8 * v519 + v513); // 0x4119c8
    int64_t v521 = *v520; // 0x4119c8
    if (v521 == v519) {
        goto lab_0x411a17;
    } else {
        int64_t v522 = 16 * v519; // 0x4119f0
        *(int64_t *)(v522 + v167) = *(int64_t *)(16 * v521 + v167);
        *(int64_t *)(v522 + v516) = *(int64_t *)(16 * *v520 + v516);
        goto lab_0x411a17;
    }
  lab_0x411a17:;
    int64_t v523 = v519 + 1; // 0x411a17
    v23 = v40;
    v26 = v163;
    v25 = v41;
    v24 = v42;
    v22 = v162;
    v514 = v523;
    if (v523 != v515) {
        goto lab_0x4119c8_2;
    } else {
        goto lab_0x410e70_9;
    }
}
// Address range: 0x4123b0 - 0x4125cd
int64_t function_4123b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)(a2 + 144); // 0x4123c6
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x4123cd
    if (*v1 != 1) {
        int64_t v3 = function_409ac0(a2, a2); // 0x4123d9
        if ((int32_t)v3 > 1) {
            // 0x412428
            *(int32_t *)a1 = 1;
            *(int32_t *)(a1 + 8) = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * a2);
            *v2 = (0x100000000 * v3 >> 32) + a2;
            return 0;
        }
    }
    char * v4 = (char *)(a3 + 8); // 0x4123e3
    char v5 = *v4; // 0x4123e3
    int64_t v6 = a2 + (0x100000000 * a4 >> 32); // 0x4123e7
    *v2 = v6;
    int64_t v7; // 0x4123b0
    int64_t v8; // 0x4123b0
    char v9; // 0x4123b0
    int64_t v10; // 0x4123b0
    int64_t v11; // 0x4123b0
    char v12; // 0x4123b0
    int64_t v13; // 0x4123b0
    int64_t v14; // 0x4123b0
    int64_t v15; // 0x4123b0
    int64_t v16; // 0x4123b0
    int64_t * v17; // 0x412450
    int64_t * v18; // 0x4123b0
    int64_t * v19; // 0x4123b0
    int64_t * v20; // 0x4123b0
    switch (v5) {
        case 30: {
        }
        case 28: {
        }
        case 26: {
            // 0x412450
            v17 = (int64_t *)(a2 + 104);
            if (v6 >= *v17) {
                // 0x412418
                return 7;
            }
            // 0x41245a
            v18 = (int64_t *)(a2 + 40);
            v19 = (int64_t *)(a2 + 8);
            v20 = (int64_t *)(a1 + 8);
            v12 = v5;
            v14 = a2;
            v10 = 0;
            v7 = v6;
            while (true) {
              lab_0x412482:
                // 0x412482
                v8 = v7;
                v11 = v10;
                v15 = v14;
                if (v12 == 30) {
                    // 0x412500
                    if (*(char *)(a2 + 139) == 0) {
                        goto lab_0x412489;
                    } else {
                        // 0x41250e
                        if (*(char *)(a2 + 140) == 0) {
                            int64_t v21 = v8 + 1; // 0x412578
                            *v2 = v21;
                            v13 = v21;
                            v16 = v15;
                            v9 = *(char *)(v8 + v15 + *v18);
                            goto lab_0x41249a;
                        } else {
                            // 0x412518
                            if (v8 == *(int64_t *)(a2 + 48)) {
                                goto lab_0x41252d;
                            } else {
                                // 0x41251e
                                if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v8) == -1) {
                                    goto lab_0x412489;
                                } else {
                                    goto lab_0x41252d;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x412489;
                }
            }
          lab_0x412418_3:
            // 0x412418
            return 0;
        }
    }
    if ((char)a6 == 0 == v5 == 22) {
        // 0x412590
        int64_t v22; // bp-56, 0x4123b0
        function_408020(&v22, a2, a5);
        char v23; // 0x4123b0
        if (v23 != 21) {
            // 0x412418
            return 11;
        }
    }
    // 0x412409
    *(int32_t *)a1 = 0;
    int64_t v24; // 0x4123b0
    *(char *)(a1 + 8) = *(char *)&v24;
    // 0x412418
    return 0;
  lab_0x412489:;
    int64_t v25 = v8 + 1; // 0x41248d
    *v2 = v25;
    v13 = v25;
    v16 = v15;
    v9 = *(char *)(*v19 + v8);
    goto lab_0x41249a;
  lab_0x41249a:;
    uint64_t v26 = v13;
    if (*v17 <= v26) {
        // break -> 0x412418
        goto lab_0x412418_3;
    }
    // 0x4124a0
    if (*(char *)&v24 == v9) {
        // 0x4124a5
        if (*(char *)(*v19 + v26) == 93) {
            // 0x4124af
            *v2 = v26 + 1;
            *(char *)(*v20 + (0x100000000 * v11 >> 32)) = 0;
            unsigned char v27 = *v4; // 0x4124c0
            v24 = v27;
            switch (v27) {
                case 28: {
                    // 0x4125c0
                    *(int32_t *)a1 = 2;
                    goto lab_0x412418_3;
                }
                case 30: {
                    // 0x4125b3
                    *(int32_t *)a1 = 4;
                    goto lab_0x412418_3;
                }
                default: {
                    // 0x4124d6
                    if (v27 != 26) {
                        goto lab_0x412418_3;
                    } else {
                        // 0x4124e1
                        *(int32_t *)a1 = 3;
                        goto lab_0x412418_3;
                    }
                }
            }
        }
    }
    // 0x412468
    *(char *)(*v20 + v11) = v9;
    if (v11 == 31) {
        // break -> 0x412418
        goto lab_0x412418_3;
    }
    // 0x41247a
    v12 = *v4;
    v14 = v16;
    v10 = v11 + 1;
    v7 = *v2;
    goto lab_0x412482;
  lab_0x41252d:;
    int64_t v28 = *(int64_t *)(a2 + 24); // 0x41252d
    char v29 = *(char *)(*(int64_t *)(v28 + 8 * v8) + v15 + *v18); // 0x41253c
    if (v29 <= -1) {
        goto lab_0x412489;
    } else {
        int64_t v30 = 1; // 0x412557
        int64_t v31 = v15; // 0x412557
        if (*v1 != 1) {
            // 0x412559
            v30 = 0x100000000 * function_409ac0(a2, v8) >> 32;
            v31 = v8;
        }
        int64_t v32 = v30 + v8; // 0x412566
        *v2 = v32;
        v13 = v32;
        v16 = v31;
        v9 = v29;
        goto lab_0x41249a;
    }
}
// Address range: 0x4125d0 - 0x412c73
int64_t function_4125d0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x4125de
    uint64_t v3 = *v2; // 0x4125de
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x4126f8
        *(char *)(v1 + 8) = 2;
        // 0x4126fe
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x4125ef
    char * v5 = (char *)(v1 + 10); // 0x4125f3
    int32_t v6 = *(int32_t *)(a2 + 144); // 0x4125fb
    int64_t v7 = v4 + v3;
    unsigned char v8 = *(char *)v7; // 0x412604
    char v9 = *v5 & -97;
    *v5 = v9;
    *(char *)a1 = v8;
    char v10; // 0x4125d0
    if (v6 < 2) {
        if (v8 == 92) {
            goto lab_0x4126d0;
        } else {
            // 0x412696
            *(char *)(v1 + 8) = 1;
            uint16_t v11 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)*__ctype_b_loc()); // 0x4126ab
            v10 = 64 * ((char)(v11 / 8) % 2 | (char)(v8 == 95)) | v9;
            goto lab_0x412675;
        }
    } else {
        // 0x412619
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x41261f
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                int32_t * v12 = (int32_t *)(v1 + 8); // 0x412780
                *v12 = *v12 & -0x200100 | 0x200001;
                // 0x4126fe
                return 1;
            }
        }
        if (v8 == 92) {
            goto lab_0x4126d0;
        } else {
            // 0x412638
            *(char *)(v1 + 8) = 1;
            int32_t wc = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3); // 0x412645
            v10 = 64 * (char)(wc == 95 | iswalnum(wc) != 0) | *v5 & -65;
            goto lab_0x412675;
        }
    }
  lab_0x4126d0:;
    uint64_t v13 = v3 + 1;
    if (v13 >= *(int64_t *)(a2 + 88)) {
        // 0x4126db
        *(char *)(v1 + 8) = 36;
        return 1;
    }
    // 0x412710
    char v14; // 0x4125d0
    int32_t v15; // 0x412bd7
    if (*(char *)(a2 + 139) != 0) {
        if (v6 < 2) {
            goto lab_0x412bf2;
        } else {
            int64_t v16 = *(int64_t *)(a2 + 16) + 4 * v13;
            v15 = *(int32_t *)v16;
            if (v15 == -1) {
                goto lab_0x412c5b;
            } else {
                // 0x412bdf
                if (*(int64_t *)(a2 + 48) == v3 + 2) {
                    goto lab_0x412bf2;
                } else {
                    // 0x412bea
                    if (*(int32_t *)(v16 + 4) == -1) {
                        goto lab_0x412c5b;
                    } else {
                        goto lab_0x412bf2;
                    }
                }
            }
        }
    } else {
        // 0x41271e
        v14 = *(char *)(v4 + v13);
        goto lab_0x41272b;
    }
  lab_0x412675:
    // 0x412675
    *v5 = v10;
    g70 = v8 - 10;
    switch (v8) {
        case 10: {
            // 0x412908
            if ((a3 & 2048) == 0) {
                // 0x4126fe
                return 1;
            }
            // 0x41291a
            *(char *)(v1 + 8) = 10;
            // 0x4126fe
            return 1;
        }
        case 36: {
            if ((a3 & 8) != 0) {
                // 0x412970
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x4126fe
                return 1;
            }
            int64_t v17 = v3 + 1; // 0x412936
            if (v17 == *(int64_t *)(a2 + 88)) {
                // 0x412970
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x4126fe
                return 1;
            }
            // 0x412940
            *v2 = v17;
            int64_t v18; // bp-72, 0x4125d0
            function_4125d0(&v18, a2, a3);
            *v2 = *v2 - 1;
            char v19; // 0x4125d0
            if (v19 < 11) {
                // 0x412970
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x4126fe
                return 1;
            }
            // break -> 0x4126fe
            break;
        }
        case 40: {
            // 0x4127d8
            if ((a3 & 0x2000) == 0) {
                // 0x4126fe
                return 1;
            }
            // 0x4127ea
            *(char *)(v1 + 8) = 8;
            // 0x4126fe
            return 1;
        }
        case 41: {
            // 0x4127f8
            if ((a3 & 0x2000) == 0) {
                // 0x4126fe
                return 1;
            }
            // 0x41280a
            *(char *)(v1 + 8) = 9;
            // 0x4126fe
            return 1;
        }
        case 42: {
            // 0x412818
            *(char *)(v1 + 8) = 11;
            // 0x4126fe
            return 1;
        }
        case 43: {
            // 0x412830
            if ((a3 & 1026) != 0) {
                // 0x4126fe
                return 1;
            }
            // 0x412842
            *(char *)(v1 + 8) = 18;
            // 0x4126fe
            return 1;
        }
        case 46: {
            // 0x412850
            *(char *)(v1 + 8) = 5;
            // 0x4126fe
            return 1;
        }
        case 63: {
            // 0x412860
            if ((a3 & 1026) != 0) {
                // 0x4126fe
                return 1;
            }
            // 0x412872
            *(char *)(v1 + 8) = 19;
            // 0x4126fe
            return 1;
        }
        case 91: {
            // 0x412880
            *(char *)(v1 + 8) = 20;
            // 0x4126fe
            return 1;
        }
        case 94: {
            if ((a3 & 0x800008) == 0 == (v3 != 0)) {
                // 0x412c2a
                if ((a3 & 2048) == 0 | *(char *)(v7 - 1) != 10) {
                    // 0x4126fe
                    return 1;
                }
            }
            // 0x4128a2
            *(char *)(v1 + 8) = 12;
            *(int32_t *)a1 = 16;
            // 0x4126fe
            return 1;
        }
        case 123: {
            // 0x4128c0
            if ((a3 & 0x1200) != 0x1200) {
                // 0x4126fe
                return 1;
            }
            // 0x4128d9
            *(char *)(v1 + 8) = 23;
            // 0x4126fe
            return 1;
        }
        case 124: {
            // 0x4128e8
            if ((a3 & 0x8400) != 0x8000) {
                // 0x4126fe
                return 1;
            }
            // 0x41291a
            *(char *)(v1 + 8) = 10;
            // 0x4126fe
            return 1;
        }
        case 125: {
            // 0x412988
            if ((a3 & 0x1200) != 0x1200) {
                // 0x4126fe
                return 1;
            }
            // 0x4129a1
            *(char *)(v1 + 8) = 24;
            // 0x4126fe
            return 1;
        }
    }
    // 0x4126fe
    return 1;
  lab_0x412bf2:;
    int64_t v20 = *(int64_t *)(a2 + 40); // 0x412bfe
    if (*(char *)(a2 + 140) == 0) {
        // 0x412c48
        v14 = *(char *)(v20 + a2 + v13);
        goto lab_0x41272b;
    } else {
        int64_t v21 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v13); // 0x412c0b
        char v22 = *(char *)(v20 + a2 + v21); // 0x412c0f
        v14 = v22;
        if (v22 > -1) {
            goto lab_0x41272b;
        } else {
            // 0x41271e
            v14 = *(char *)(v4 + v13);
            goto lab_0x41272b;
        }
    }
  lab_0x41272b:;
    int64_t v23 = v14;
    int32_t v24 = v14;
    *(char *)a1 = v14;
    *(char *)(v1 + 8) = 1;
    int64_t v25; // 0x4125d0
    int64_t v26; // 0x4125d0
    int32_t wc2; // 0x4125d0
    int32_t v27; // 0x4125d0
    int32_t v28; // 0x4125d0
    char v29; // 0x4125d0
    if (v6 < 2) {
        uint16_t v30 = *(int16_t *)(2 * v23 + (int64_t)*__ctype_b_loc()); // 0x4127ac
        char v31 = *v5; // 0x4127c0
        v29 = 64 * ((char)(v30 / 8) % 2 | (char)(v14 == 95)) | v31 & -65;
        v28 = v24;
        v26 = v23;
        goto lab_0x412763;
    } else {
        // 0x412737
        v27 = v24;
        wc2 = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v13);
        v25 = v23;
        goto lab_0x41273e;
    }
  lab_0x412c5b:;
    unsigned char v32 = *(char *)(v4 + v13); // 0x412c5b
    *(char *)(v1 + 8) = 1;
    *(char *)a1 = v32;
    v27 = v32;
    wc2 = v15;
    v25 = v32;
    goto lab_0x41273e;
  lab_0x41273e:;
    int32_t v33 = iswalnum(wc2); // 0x412740
    v29 = 64 * (char)(wc2 == 95 | v33 != 0) | *v5 & -65;
    v28 = v27;
    v26 = v25;
    goto lab_0x412763;
  lab_0x412763:
    // 0x412763
    *v5 = v29;
    uint64_t v34 = v26 + 0xffffffd9; // 0x412763
    g71 = v34 % 256;
    switch ((char)v34) {
        case 0: {
            // 0x412b9b
            if ((a3 & 0x80000) == 0) {
                // 0x412bad
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 128;
            }
            // 0x4126fe
            return 2;
        }
        case 1: {
            // 0x412b84
            if ((a3 & 0x2000) != 0) {
                // 0x4126fe
                return 2;
            }
            // 0x4127ea
            *(char *)(v1 + 8) = 8;
            // 0x4126fe
            return 2;
        }
        case 2: {
            // 0x412b6d
            if ((a3 & 0x2000) != 0) {
                // 0x4126fe
                return 2;
            }
            // 0x41280a
            *(char *)(v1 + 8) = 9;
            // 0x4126fe
            return 2;
        }
        case 4: {
            // 0x412b52
            if ((a3 & 1026) != 2) {
                // 0x4126fe
                return 2;
            }
            // 0x412842
            *(char *)(v1 + 8) = 18;
            // 0x4126fe
            return 2;
        }
        case 10: {
        }
        case 11: {
        }
        case 12: {
        }
        case 13: {
        }
        case 14: {
        }
        case 15: {
        }
        case 16: {
        }
        case 17: {
        }
        case 18: {
            // 0x412b2a
            if ((a3 & 0x4000) == 0) {
                // 0x412b3c
                *(char *)(v1 + 8) = 4;
                *a1 = (int64_t)(v28 - 49);
            }
            // 0x4126fe
            return 2;
        }
        case 21: {
            // 0x412b09
            if ((a3 & 0x80000) == 0) {
                // 0x412b1b
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 6;
            }
            // 0x4126fe
            return 2;
        }
        case 23: {
            // 0x412ae8
            if ((a3 & 0x80000) == 0) {
                // 0x412afa
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 9;
            }
            // 0x4126fe
            return 2;
        }
        case 24: {
            // 0x412acd
            if ((a3 & 1026) != 2) {
                // 0x4126fe
                return 2;
            }
            // 0x412872
            *(char *)(v1 + 8) = 19;
            // 0x4126fe
            return 2;
        }
        case 27: {
            // 0x412aac
            if ((a3 & 0x80000) == 0) {
                // 0x412abe
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 512;
            }
            // 0x4126fe
            return 2;
        }
        case 44: {
            // 0x412a91
            if ((a3 & 0x80000) == 0) {
                // 0x412aa3
                *(char *)(v1 + 8) = 35;
            }
            // 0x4126fe
            return 2;
        }
        case 48: {
            // 0x412a76
            if ((a3 & 0x80000) == 0) {
                // 0x412a88
                *(char *)(v1 + 8) = 33;
            }
            // 0x4126fe
            return 2;
        }
        case 57: {
            // 0x412a55
            if ((a3 & 0x80000) == 0) {
                // 0x412a67
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 64;
            }
            // 0x4126fe
            return 2;
        }
        case 59: {
            // 0x412a34
            if ((a3 & 0x80000) == 0) {
                // 0x412a46
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 256;
            }
            // 0x4126fe
            return 2;
        }
        case 76: {
            // 0x412a19
            if ((a3 & 0x80000) == 0) {
                // 0x412a2b
                *(char *)(v1 + 8) = 34;
            }
            // 0x4126fe
            return 2;
        }
        case 80: {
            // 0x4129fe
            if ((a3 & 0x80000) == 0) {
                // 0x412a10
                *(char *)(v1 + 8) = 32;
            }
            // 0x4126fe
            return 2;
        }
        case 84: {
            // 0x4129e0
            if ((a3 & 0x1200) != 512) {
                // 0x4126fe
                return 2;
            }
            // 0x4128d9
            *(char *)(v1 + 8) = 23;
            // 0x4126fe
            return 2;
        }
        case 85: {
            // 0x4129c5
            if ((a3 & 0x8400) == 0) {
                // 0x4129d7
                *(char *)(v1 + 8) = 10;
            }
            // 0x4126fe
            return 2;
        }
        case 86: {
            // 0x4129aa
            if ((a3 & 0x1200) != 512) {
                // 0x4126fe
                return 2;
            }
            // 0x4129a1
            *(char *)(v1 + 8) = 24;
            // 0x4126fe
            return 2;
        }
    }
    // 0x4126fe
    return 2;
}
// Address range: 0x412c80 - 0x412d36
int64_t function_412c80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 72);
    int64_t result2 = -1;
    *v1 = (0x100000000 * function_4125d0((int64_t *)a2, a1, a3) >> 32) + *v1;
    char v2 = *(char *)(a2 + 8); // 0x412cb9
    int64_t result = result2; // 0x412c80
    switch (v2) {
        case 2: {
            // 0x412d17
            return -2;
        }
        case 24: {
            // 0x412d17
            return result;
        }
    }
    // 0x412cc6
    int64_t v3; // 0x412c80
    unsigned char v4 = (char)v3; // 0x412cae
    while (v4 != 44) {
        int64_t v5 = -2; // 0x412ccd
        if (v2 == 1) {
            // 0x412cd8
            v5 = -2;
            if (result2 != -2 && v4 <= 57) {
                int64_t v6 = v4; // 0x412cae
                if (result2 == -1) {
                    // 0x412d28
                    v5 = v6 - 48;
                } else {
                    int64_t v7 = 10 * result2 + v6; // 0x412cef
                    int64_t v8 = v7 - 0x8030; // 0x412cf8
                    v5 = v8 < 0 == (0x802f - v7 & v7) < 0 == (v8 != 0) ? 0x8000 : v7 - 48;
                }
            }
        }
        // 0x412ca0
        result2 = v5;
        *v1 = (0x100000000 * function_4125d0((int64_t *)a2, a1, a3) >> 32) + *v1;
        v2 = *(char *)(a2 + 8);
        result = result2;
        switch (v2) {
            case 2: {
                // 0x412d17
                return -2;
            }
            case 24: {
                // 0x412d17
                return result;
            }
        }
        // 0x412cc6
        int64_t v9; // 0x412c80
        v4 = *(char *)&v9;
    }
    // 0x412d17
    return result2;
}
// Address range: 0x412d40 - 0x414224
int64_t function_412d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412d40
    int128_t v1; // 0x412d40
    int128_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a3;
    int64_t v5; // bp-280, 0x412d40
    int64_t v6 = &v5; // 0x412d4a
    unsigned char v7 = *(char *)(a3 + 8); // 0x412d59
    int64_t v8 = v7; // 0x412d59
    int64_t v9 = v4; // 0x412d65
    v4 = v8;
    g72 = v8;
    int32_t v10 = v7;
    int64_t * v11; // 0x412d40
    int32_t v12; // 0x412d40
    int64_t v13; // 0x412d40
    int64_t v14; // bp-88, 0x412d40
    int64_t v15; // 0x412d40
    int64_t v16; // 0x413a9b
    char v17; // 0x413aa2
    int64_t * mem2; // 0x413489
    int64_t v18; // 0x413489
    int64_t * v19; // 0x4134b0
    char * v20; // 0x4134b7
    switch (v7) {
        case 1: {
            int64_t v21 = a2 + 112; // 0x413607
            int64_t v22 = a2 + 128; // 0x41360b
            int64_t v23 = function_40a780(v21, v22, 0, 0, v9); // 0x413618
            if (v23 == 0) {
                // 0x4136d1
                *(int32_t *)a6 = 12;
                // 0x412eb8
                *(int64_t *)(v6 + 24) = 0;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            // 0x41362b
            if (*(int32_t *)(a2 + 180) >= 2) {
                int64_t * v24 = (int64_t *)(a1 + 72); // 0x413648
                int64_t v25 = &v14;
                int64_t v26 = 0x100000000 * v23 >> 32; // 0x4136b5
                uint64_t v27 = *v24; // 0x413648
                while (*(int64_t *)(a1 + 104) > v27) {
                    // 0x413656
                    if (v27 == *(int64_t *)(a1 + 48)) {
                        // break -> 0x412de0
                        break;
                    }
                    // 0x413660
                    if (*(int32_t *)(*(int64_t *)(a1 + 16) + 4 * v27) != -1) {
                        // break -> 0x412de0
                        break;
                    }
                    // 0x41366e
                    *v24 = (0x100000000 * function_4125d0((int64_t *)v9, a1, a4) >> 32) + *v24;
                    int64_t v28 = function_40a780(v21, v22, 0, 0, v9); // 0x413691
                    v26 = function_40a780(v21, v22, (int32_t)v26, (int32_t)v28, v25);
                    if (v28 == 0 || v26 == 0) {
                        // 0x4136d1
                        *(int32_t *)a6 = 12;
                        // 0x412eb8
                        *(int64_t *)(v6 + 24) = 0;
                        // 0x412e0a
                        return *(int64_t *)(v6 + 24);
                    }
                    v27 = *v24;
                }
            }
            goto lab_0x412de0;
        }
        case 4: {
            int64_t v29 = 1 << v10 % 32; // 0x4136f1
            if ((*(int64_t *)(a2 + 168) & v29) == 0) {
                // 0x413d6c
                *(int32_t *)a6 = 6;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v30 = (int64_t *)(a2 + 160); // 0x41370c
            *v30 = *v30 | v29;
            if (function_40a780(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x4136d1
                *(int32_t *)a6 = 12;
                // 0x412eb8
                *(int64_t *)(v6 + 24) = 0;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v31 = (int64_t *)(a2 + 152); // 0x41372d
            *v31 = *v31 + 1;
            char * v32 = (char *)(a2 + 176); // 0x413735
            *v32 = *v32 | 2;
            goto lab_0x412de0;
        }
        case 5: {
            // 0x413741
            if (function_40a780(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x4136d1
                *(int32_t *)a6 = 12;
                // 0x412eb8
                *(int64_t *)(v6 + 24) = 0;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            // 0x41376b
            if (*(int32_t *)(a2 + 180) >= 2) {
                char * v33 = (char *)(a2 + 176); // 0x413778
                *v33 = *v33 | 2;
            }
            goto lab_0x412de0;
        }
        case 8: {
            int64_t * v34 = (int64_t *)(a2 + 48); // 0x412e21
            uint64_t v35 = *v34; // 0x412e21
            v5 = a5;
            *v34 = v35 + 1;
            int64_t v36 = function_4125d0((int64_t *)v9, a1, a4 | 0x800000); // 0x412e46
            int64_t * v37 = (int64_t *)(a1 + 72); // 0x412e4d
            *v37 = (0x100000000 * v36 >> 32) + *v37;
            char * v38 = (char *)(v9 + 8); // 0x412e53
            int64_t v39 = 0; // 0x412e59
            if (*v38 != 9) {
                // 0x412e5f
                v4 = v9;
                int64_t v40 = function_414370(a1, a2, v9, a4, v5 + 1, a6); // 0x412e7b
                if (*(int32_t *)&v3 != 0) {
                    // 0x412eb8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x412e0a
                    return *(int64_t *)(v6 + 24);
                }
                // 0x412e89
                v39 = v40;
                if (*v38 != 9) {
                    if (v40 != 0) {
                        // 0x412e9a
                        function_407fb0(v40, 0x4091c0, 0);
                    }
                    // 0x412ea9
                    *(int32_t *)a6 = 8;
                  lab_0x412eb8:
                    // 0x412eb8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x412e0a
                    return *(int64_t *)(v6 + 24);
                }
            }
            // 0x4138e2
            if (v35 < 9) {
                int32_t v41 = 1 << (int32_t)v35 % 32;
                v4 = v41;
                int64_t * v42 = (int64_t *)(a2 + 168); // 0x41393a
                *v42 = *v42 | (int64_t)v41;
            }
            int64_t v43 = function_40a780(a2 + 112, a2 + 128, (int32_t)v39, 0, (int64_t)&v14); // 0x41390d
            if (v43 == 0) {
                // 0x4136d1
                *(int32_t *)a6 = 12;
                // 0x412eb8
                *(int64_t *)(v6 + 24) = 0;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            // 0x413920
            *(int64_t *)(v43 + 40) = v35;
            goto lab_0x412de0;
        }
        case 9: {
            if ((a4 & 0x20000) == 0) {
                // 0x4138c9
                *(int32_t *)a6 = 16;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x412db0;
        }
        case 11: {
            goto lab_0x412d91;
        }
        case 12: {
            char * v44 = (char *)(a2 + 176); // 0x413796
            unsigned char v45 = *v44; // 0x413796
            if ((v45 & 16) != 0) {
                // 0x4137f0
            } else {
                int64_t v46 = v45; // 0x413796
                *v44 = v45 | 16;
                v13 = 0;
                v15 = 0;
                if ((v46 & 8) != 0) {
                    goto lab_0x413fe5;
                } else {
                    // 0x4137b7
                    *(int64_t *)(a2 + 184) = 0x3ff000000000000;
                    *(int64_t *)(a2 + 192) = 0x7fffffe87fffffe;
                    v13 = 128;
                    v15 = 2;
                    if ((v46 & 4) == 0) {
                        goto lab_0x413fe5;
                    } else {
                        // 0x4137e1
                        __asm_movups(*(int128_t *)(a2 + 200), __asm_pxor(v2, v2));
                        v12 = *(int32_t *)&v4;
                        goto lab_0x4137f0_2;
                    }
                }
            }
        }
        case 18: {
            goto lab_0x412d91;
        }
        case 19: {
            goto lab_0x412d91;
        }
        case 20: {
            int64_t * mem = calloc(32, 1); // 0x413473
            v5 = (int64_t)mem;
            mem2 = calloc(80, 1);
            if (mem == NULL || mem2 == NULL) {
                // 0x413d56
                free((int64_t *)v5);
                free(mem2);
                // 0x4136d1
                *(int32_t *)a6 = 12;
                // 0x412eb8
                *(int64_t *)(v6 + 24) = 0;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            // 0x4134a5
            v18 = (int64_t)mem2;
            v19 = (int64_t *)v9;
            int64_t v47 = function_408020(v19, a1, a4); // 0x4134b0
            v20 = (char *)(v9 + 8);
            char v48 = *v20; // 0x4134b7
            v17 = v48;
            v16 = v47;
            switch (v48) {
                case 2: {
                    // 0x413d2a
                    *(int32_t *)a6 = 2;
                    v11 = (int64_t *)(v6 + 48);
                    goto lab_0x4139fb_3;
                }
                case 25: {
                    char * v49 = (char *)(v18 + 32); // 0x413a6e
                    *v49 = *v49 | 1;
                    if ((a4 & 256) != 0) {
                        int64_t * v50 = (int64_t *)v5; // 0x413a82
                        *v50 = *v50 | 1024;
                    }
                    int64_t * v51 = (int64_t *)(a1 + 72); // 0x413a8c
                    *v51 = *v51 + (0x100000000 * v47 >> 32);
                    v16 = function_408020(v19, a1, a4);
                    v17 = *v20;
                    if (v17 == 2) {
                        // 0x413d2a
                        *(int32_t *)a6 = 2;
                        v11 = (int64_t *)(v6 + 48);
                        goto lab_0x4139fb_3;
                    } else {
                        goto lab_0x4134d2;
                    }
                }
                default: {
                    goto lab_0x4134d2;
                }
            }
        }
        case 23: {
            if ((a4 & 0x1000000) != 0) {
              lab_0x4130b5:
                // 0x4130b5
                *(int64_t *)(v6 + 24) = 0;
                *(int32_t *)*(int64_t *)(v6 + 48) = 13;
                // 0x412e0a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x412d91;
        }
        case 24: {
            goto lab_0x412db0;
        }
        case 32: {
            goto lab_0x413574;
        }
        case 33: {
            goto lab_0x413574;
        }
        case 34: {
            goto lab_0x4135c0;
        }
        case 35: {
            goto lab_0x4135c0;
        }
        case 36: {
            // 0x4135e2
            *(int32_t *)a6 = 5;
            // 0x412e0a
            return *(int64_t *)(v6 + 24);
        }
        default: {
            goto lab_0x412eb8;
        }
    }
  lab_0x4133cb:;
    // 0x4133cb
    int64_t * v52; // 0x412d40
    if (*v52 == 0) {
        goto lab_0x412eb8;
    } else {
        goto lab_0x41316b;
    }
  lab_0x41316b:
    // 0x41316b
    function_407fb0(*v52, 0x4091c0, 0);
    *v52 = 0;
    return *(int64_t *)(v6 + 24);
  lab_0x413262:;
    // 0x413262
    int64_t v53; // 0x412d40
    char * v54 = (char *)(v53 + 8);
    char * v55 = v54; // 0x41326b
    int128_t v56; // 0x412d40
    int128_t v57 = v56; // 0x41326b
    int64_t * v58; // 0x412de0
    int64_t * v59; // 0x412d40
    if ((*v58 & 0x200000) == 0) {
        // 0x413d3a
        if (*v54 != 2) {
            // 0x4133c0
            *(int32_t *)*v59 = 10;
            goto lab_0x4133cb;
        } else {
            // 0x413d46
            *(int32_t *)*v59 = 9;
            goto lab_0x4133cb;
        }
    }
    goto lab_0x413271;
  lab_0x413384:;
    // 0x413384
    int64_t v83; // 0x412d40
    int64_t v336 = v83; // 0x413386
    int64_t v337 = v336 - 0x7fff; // 0x413386
    int64_t v84; // 0x412d40
    int64_t v316 = v84; // 0x413394
    if (v337 < 0 == (0x7ffe - v336 & v336) < 0 == (v337 != 0)) {
        // 0x413396
        *(int32_t *)*v59 = 15;
        goto lab_0x4133cb;
    }
    goto lab_0x413329;
  lab_0x4132c9:;
    int64_t v338 = *v58; // 0x4132c9
    v4 = v338;
    int128_t v80; // 0x413235
    int128_t * v78; // 0x412d40
    *v78 = (int128_t)__asm_movaps(v80);
    int64_t v66; // 0x412d40
    int64_t v339 = function_412c80(v66, v53, v338); // 0x4132d9
    v5 = v339;
    v56 = __asm_movdqa(*v78);
    int64_t v81; // 0x412d40
    if (v339 == -2) {
        goto lab_0x413262;
    } else {
        int64_t v340 = v81;
        if (v339 != -1 == v339 < v340) {
            // 0x4133c0
            *(int32_t *)*v59 = 10;
            goto lab_0x4133cb;
        }
        // 0x413305
        if (*(char *)(v53 + 8) != 24) {
            // 0x4133c0
            *(int32_t *)*v59 = 10;
            goto lab_0x4133cb;
        }
        // 0x413311
        v83 = v339;
        v84 = v340;
        if (v339 != -1) {
            goto lab_0x413384;
        } else {
            int64_t v341 = v340 - 0x7fff; // 0x41331a
            v316 = v340;
            if (v341 < 0 == (0x7ffe - v340 & v340) < 0 == (v341 != 0)) {
                // 0x413396
                *(int32_t *)*v59 = 15;
                goto lab_0x4133cb;
            }
            goto lab_0x413329;
        }
    }
  lab_0x413271:;
    // 0x413271
    int64_t * v60; // 0x412ee6
    int64_t v61; // 0x412ee6
    *v60 = v61;
    int128_t * v62; // 0x412eea
    *v62 = (int128_t)__asm_movaps(v57);
    *v55 = 1;
    int64_t v63 = *v52; // 0x413285
    int64_t v64 = v53; // 0x413285
    int64_t v65 = v66; // 0x413285
    goto lab_0x41305e;
  lab_0x413290:
    // 0x413290
    if (*(int32_t *)*v59 != 0) {
        // 0x412eb8
        *(int64_t *)(v6 + 24) = 0;
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x41329f;
  lab_0x413329:;
    int64_t v315 = v316;
    int64_t v317 = *v58; // 0x413329
    v4 = v317;
    int64_t v318 = function_4125d0((int64_t *)v53, v66, v317); // 0x413334
    int64_t v319 = *v52; // 0x413339
    *v60 = *v60 + (0x100000000 * v318 >> 32);
    int64_t v127; // 0x412d40
    int64_t v99; // 0x412d40
    int64_t v132; // 0x412d40
    int64_t v128; // 0x412d40
    int64_t v101; // 0x412d40
    int64_t v135; // 0x412d40
    int64_t v102; // 0x412d40
    int64_t v103; // 0x412d40
    int64_t v136; // 0x412d40
    int64_t v129; // 0x412d40
    int64_t v134; // 0x412d40
    int64_t v100; // 0x412d40
    int64_t v133; // 0x412d40
    int64_t * v89; // 0x412d40
    int64_t * v110; // 0x412d40
    int64_t * v118; // 0x412d40
    int64_t v114; // 0x412d40
    char * v108; // 0x412d40
    if (v319 == 0) {
        goto lab_0x413290;
    } else {
        int64_t v320 = v5; // 0x41334d
        if ((v320 || v315) != 0) {
            if (v315 < 1) {
                // 0x414218
                v4 = 0;
                v132 = 0;
                v133 = v315;
                v134 = *v52;
                v135 = v53;
                v136 = v66;
                goto lab_0x413442;
            } else {
                int64_t v321; // 0x412d40
                int64_t v322; // 0x412d40
                int64_t v323; // 0x412d40
                int64_t v324; // 0x412d40
                int64_t v325; // 0x412d40
                if (v315 == 1) {
                    int64_t v326 = *v52; // 0x4141e7
                    v321 = v320;
                    v322 = v53;
                    v323 = v326;
                    v324 = v66;
                    v325 = v326;
                } else {
                    int64_t v327 = *v110; // 0x4130e3
                    int64_t v328 = *v52; // 0x4130e8
                    *v89 = v66;
                    *v118 = v53;
                    int64_t v329 = v327 + 112; // 0x4130ff
                    int64_t v330 = v327 + 128; // 0x413103
                    int64_t v331 = 2; // 0x41310d
                    int64_t v332 = function_40a860(v328, *v110); // 0x41312a
                    v4 = v328;
                    *v108 = 16;
                    int64_t v333 = function_40a780(v329, v330, (int32_t)v328, (int32_t)v332, v114); // 0x41314e
                    if (v332 == 0 || v333 == 0) {
                        // 0x413160
                        *(int32_t *)*v59 = 12;
                        goto lab_0x41316b;
                    }
                    // 0x413115
                    v331++;
                    int64_t v334 = v333; // 0x41311c
                    int64_t v335 = v332; // 0x41311c
                    while (v315 >= v331) {
                        // 0x413122
                        v332 = function_40a860(v335, *v110);
                        v4 = v334;
                        *v108 = 16;
                        v333 = function_40a780(v329, v330, (int32_t)v334, (int32_t)v332, v114);
                        if (v332 == 0 || v333 == 0) {
                            // 0x413160
                            *(int32_t *)*v59 = 12;
                            goto lab_0x41316b;
                        }
                        // 0x413115
                        v331++;
                        v334 = v333;
                        v335 = v332;
                    }
                    // 0x4133e0
                    v321 = v5;
                    v322 = *v118;
                    v323 = v332;
                    v324 = *v89;
                    v325 = v333;
                }
                // 0x4133f3
                v4 = v325;
                v127 = v325;
                v128 = v322;
                v129 = v324;
                v99 = v325;
                v100 = v315;
                v101 = v322;
                v102 = v323;
                v103 = v324;
                if (v315 != v321) {
                    goto lab_0x41341f;
                } else {
                    goto lab_0x413400;
                }
            }
        } else {
            // 0x41335a
            v4 = 0;
            function_407fb0(v319, 0x4091c0, 0);
            if (*(int32_t *)*v59 != 0) {
                goto lab_0x41316b;
            }
            goto lab_0x41329f;
        }
    }
  lab_0x41305e:;
    uint32_t v67 = *(int32_t *)*v59; // 0x413063
    v4 = v67;
    if (v63 == 0 == (v67 != 0)) {
        goto lab_0x4133cb;
    }
    // 0x413072
    *v52 = v63;
    int64_t v68 = v63; // 0x413072
    int64_t v69 = v64; // 0x413072
    int64_t v70 = v65; // 0x413072
    goto lab_0x413077;
  lab_0x41329f:
    // 0x41329f
    *v52 = 0;
    v68 = 0;
    v69 = v53;
    v70 = v66;
    goto lab_0x413077;
  lab_0x4131f8:;
    // 0x4131f8
    int64_t v96; // 0x412d40
    int64_t v104 = v96;
    function_407fb0(v104, 0x408150, (int32_t)*(int64_t *)(v104 + 40));
    goto lab_0x413209;
  lab_0x412f5a:;
    // 0x412f5a
    int64_t v94; // 0x412d40
    int64_t v105 = v94;
    int64_t v93; // 0x412d40
    int64_t v106 = v93;
    int64_t v92; // 0x412d40
    int64_t v107 = v92;
    char v90; // 0x412d40
    *v108 = v90;
    int64_t v109 = *v110; // 0x412f61
    int64_t v111 = v109 + 112; // 0x412f73
    int64_t v112 = v109 + 128; // 0x412f77
    int64_t v113 = function_40a780(v111, v112, (int32_t)v107, 0, v114); // 0x412f84
    v4 = v113;
    if (v113 == 0) {
        // 0x413160
        *(int32_t *)*v59 = 12;
        goto lab_0x41316b;
    }
    // 0x412f95
    int64_t v91; // 0x412d40
    int64_t v115 = v91 + 2; // 0x412f95
    int64_t v116 = v113; // 0x412f9d
    int64_t v117 = v106; // 0x412f9d
    if (v115 <= v5) {
        // 0x412fa3
        *v118 = v106;
        int64_t v119 = v115; // 0x412fab
        int64_t v120 = v107; // 0x412fab
        v120 = function_40a860(v120, *v110);
        v4 = v113;
        *v108 = 16;
        int64_t v121 = function_40a780(v111, v112, (int32_t)v113, (int32_t)v120, v114); // 0x412fda
        if (v120 == 0 || v121 == 0) {
            // 0x413160
            *(int32_t *)*v59 = 12;
            goto lab_0x41316b;
        }
        // 0x412ff1
        v4 = v121;
        *v108 = 10;
        int64_t v122 = function_40a780(v111, v112, (int32_t)v121, 0, v114); // 0x41300c
        if (v122 == 0) {
            // 0x413160
            *(int32_t *)*v59 = 12;
            goto lab_0x41316b;
        }
        // 0x41301d
        v119++;
        int64_t v123 = v122; // 0x413025
        while (v119 <= v5) {
            // 0x412fae
            v120 = function_40a860(v120, *v110);
            v4 = v123;
            *v108 = 16;
            v121 = function_40a780(v111, v112, (int32_t)v123, (int32_t)v120, v114);
            if (v120 == 0 || v121 == 0) {
                // 0x413160
                *(int32_t *)*v59 = 12;
                goto lab_0x41316b;
            }
            // 0x412ff1
            v4 = v121;
            *v108 = 10;
            v122 = function_40a780(v111, v112, (int32_t)v121, 0, v114);
            if (v122 == 0) {
                // 0x413160
                *(int32_t *)*v59 = 12;
                goto lab_0x41316b;
            }
            // 0x41301d
            v119++;
            v123 = v122;
        }
        // 0x413027
        v4 = v122;
        v116 = v122;
        v117 = *v118;
    }
    int64_t v124 = v117;
    int64_t v125 = v116; // 0x41303d
    int64_t v126 = *v89; // 0x41302f
    v127 = v125;
    v128 = v124;
    v129 = v105;
    if (v126 == 0) {
        goto lab_0x413400;
    } else {
        // 0x41303d
        *v108 = 16;
        v63 = function_40a780(v111, v112, (int32_t)v126, (int32_t)v125, v114);
        v64 = v124;
        v65 = v105;
        goto lab_0x41305e;
    }
  lab_0x413077:;
    unsigned char v71 = *(char *)(v69 + 8); // 0x413077
    if ((*v58 & 0x1000000) != 0) {
        if (v71 != 11 != v71 != 23) {
            // 0x41309c
            if (v68 == 0) {
                goto lab_0x4130b5;
            } else {
                // 0x4130a6
                function_407fb0(v68, 0x4091c0, 0);
                goto lab_0x4130b5;
            }
        }
    }
    char v72 = v71; // 0x412e04
    int64_t v73 = v70; // 0x412e04
    int64_t v74 = v69; // 0x412e04
    if (v71 >= 24) {
        // break -> 0x412e0a
        goto lab_0x412e0a_2;
    }
    goto lab_0x412ed0;
  lab_0x413209:
    // 0x413209
    v90 = v5 == -1 ? 11 : 10;
    int64_t v95; // 0x412d40
    v91 = v95;
    v92 = v104;
    int64_t v97; // 0x412d40
    v93 = v97;
    int64_t v98; // 0x412d40
    v94 = v98;
    goto lab_0x412f5a;
  lab_0x413400:
    // 0x413400
    *v52 = v127;
    v68 = v127;
    v69 = v128;
    v70 = v129;
    goto lab_0x413077;
  lab_0x41341f:
    // 0x41341f
    *v89 = v99;
    int64_t v130 = function_40a860(v102, *v110); // 0x41342c
    int64_t v131 = *v89; // 0x413431
    v4 = v131;
    v132 = v131;
    v133 = v100;
    v134 = v130;
    v135 = v101;
    v136 = v103;
    if (v130 == 0) {
        // 0x413160
        *(int32_t *)*v59 = 12;
        goto lab_0x41316b;
    }
    goto lab_0x413442;
  lab_0x413442:
    // 0x413442
    *v89 = v132;
    v95 = v133;
    v96 = v134;
    v97 = v135;
    v98 = v136;
    if (*(char *)(v134 + 48) != 17) {
        goto lab_0x413209;
    } else {
        goto lab_0x4131f8;
    }
  lab_0x41403a:;
    // 0x41403a
    uint64_t v137; // 0x412d40
    int64_t v138 = 1 << v137;
    v4 = v138;
    int64_t * v139; // 0x412d40
    *v139 = *v139 | v138;
    goto lab_0x414028;
  lab_0x414028:;
    int64_t v140 = v137 + 1; // 0x414030
    if (v137 == 63) {
        // break -> 0x414049
        goto lab_0x414049;
    }
    goto lab_0x414032;
  lab_0x4139fb_3:
    // 0x4139fb
    free((int64_t *)v5);
    function_409170(v18);
    if (*(int32_t *)*v11 != 0) {
        // 0x412eb8
        *(int64_t *)(v6 + 24) = 0;
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    // 0x413a1d
    *(int64_t *)(v6 + 24) = 0;
    goto lab_0x412de0;
  lab_0x413e9e:;
    // 0x413e9e
    int64_t * v177; // 0x412d40
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x4139fb_3;
  lab_0x4140a6_3:
    // 0x4140a6
    *(int32_t *)*v177 = 11;
    v11 = v177;
    goto lab_0x4139fb_3;
  lab_0x413fa5_5:
    // 0x413fa5
    *(int32_t *)*v177 = 3;
    v11 = v177;
    goto lab_0x4139fb_3;
  lab_0x413564:;
    // 0x413564
    int64_t v188; // 0x413539
    int64_t v254 = v188 & 0xffffffff; // 0x41353e
    int64_t v234; // 0x412d40
    int64_t v255; // 0x412d40
    int64_t v235; // 0x412d40
    int64_t * v152; // 0x413514
    int32_t * v168; // 0x412d40
    int64_t v178; // 0x412d40
    int64_t * v179; // 0x412d40
    int64_t * v180; // 0x412d40
    int64_t * v181; // 0x412d40
    int64_t * v182; // 0x412d40
    int64_t v148; // 0x4134e3
    int64_t * v149; // 0x4134fe
    int64_t v151; // 0x413514
    switch (g73) {
        case 0: {
            unsigned char v256 = *(char *)v151; // 0x4139a1
            unsigned char v257 = v256 % 64;
            int64_t v258 = v257 == 0 ? 1 : 1 << (int64_t)v257;
            v4 = v258;
            int64_t * v259 = (int64_t *)(v148 + (int64_t)(v256 / 8 & 24)); // 0x4139b8
            *v259 = v258 | *v259;
            v255 = v254;
            goto lab_0x41395f;
        }
        case 1: {
            int64_t v260 = *v181; // 0x41397d
            v4 = v260;
            int64_t v261 = *mem2; // 0x413981
            int64_t v262 = v260; // 0x41398a
            int64_t v263 = v261; // 0x41398a
            if (v260 == *v182) {
                int64_t v264 = 2 * v260 | 1; // 0x413da6
                *v182 = v264;
                int64_t * mem3 = realloc((int64_t *)v261, 4 * (int32_t)v264); // 0x413db8
                if (mem3 == NULL) {
                    goto lab_0x413e9e;
                }
                // 0x413dc6
                v263 = (int64_t)mem3;
                *mem2 = v263;
                v262 = *v181;
                v4 = v262;
            }
            // 0x413990
            *v181 = v262 + 1;
            *(int32_t *)(4 * v4 + v263) = *v168;
            v255 = v254;
            goto lab_0x41395f;
        }
        case 2: {
            int32_t v265 = function_40d350(v148, *v152); // 0x413955
            *(int32_t *)*v177 = v265;
            v255 = v254;
            v11 = v177;
            if (v265 != 0) {
                goto lab_0x4139fb_3;
            }
            goto lab_0x41395f;
        }
        case 3: {
            int32_t v266 = function_40d350(v148, *v152); // 0x413a3d
            *(int32_t *)*v177 = v266;
            v255 = v254;
            v11 = v177;
            if (v266 != 0) {
                goto lab_0x4139fb_3;
            }
            goto lab_0x41395f;
        }
        case 4: {
            int64_t v267 = *(int64_t *)(a1 + 120); // 0x4139c3
            *v179 = *v149;
            int64_t v268 = function_40d3a0(v267, v148, v18 + 24, v178, v180, *v152, (int64_t)&g67); // 0x4139e3
            int32_t v269 = v268; // 0x4139ed
            *(int32_t *)*v177 = v269;
            v3 = *v179;
            v255 = v254;
            v11 = v177;
            if (v269 != 0) {
                goto lab_0x4139fb_3;
            }
            goto lab_0x41395f;
        }
        default: {
            // 0x4141a4
            __assert_fail("0", "lib/regcomp.c", 3315, "parse_bracket_exp");
            v234 = &g67;
            v235 = (int64_t)"parse_bracket_exp";
            goto lab_0x4141bd_3;
        }
    }
  lab_0x413ac5:
    // 0x413ac5
    *(int32_t *)*v177 = 7;
    v11 = v177;
    goto lab_0x4139fb_3;
  lab_0x41395f:;
    int64_t v270 = v255;
    int64_t v183 = v270; // 0x412d40
    int64_t v184 = 0; // 0x412d40
    int64_t * v156; // 0x412d40
    int64_t * v163; // 0x412d40
    switch (*v20) {
        case 2: {
            goto lab_0x413ac5;
        }
        case 21: {
            // 0x413dd3
            *v156 = *v156 + (0x100000000 * v270 >> 32);
            if (*(char *)(v6 + 56) != 0) {
                // 0x413de1
                v4 = v5 + 32;
                int64_t v271 = v5; // 0x413de8
                int64_t * v272 = (int64_t *)v271; // 0x413dec
                *v272 = -1 - *v272;
                v271 += 8;
                while (v4 != v271) {
                    // 0x413dec
                    v272 = (int64_t *)v271;
                    *v272 = -1 - *v272;
                    v271 += 8;
                }
            }
            uint32_t v273 = *(int32_t *)(*v163 + 180); // 0x413dfd
            v4 = v273;
            if (v273 >= 2) {
                int64_t v274 = 0;
                int64_t * v275 = (int64_t *)(v274 + v5); // 0x413e1b
                *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                int64_t v276 = v274 + 8; // 0x413e27
                while (v274 != 24) {
                    // 0x413e17
                    v274 = v276;
                    v275 = (int64_t *)(v274 + v5);
                    *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                    v276 = v274 + 8;
                }
            }
            // 0x413e29
            if (*v181 != 0) {
                goto lab_0x413eae;
            } else {
                // 0x413e30
                if (*(int64_t *)(v18 + 48) != 0) {
                    goto lab_0x413eae;
                } else {
                    // 0x413e37
                    if (*(int64_t *)(v18 + 56) != 0) {
                        goto lab_0x413eae;
                    } else {
                        // 0x413e3e
                        if (*(int64_t *)(v18 + 64) != 0) {
                            goto lab_0x413eae;
                        } else {
                            int64_t v277 = v4; // 0x413e45
                            v4 = v277 + 0xffffffff & 0xffffffff;
                            if ((int32_t)v277 < 2) {
                                goto lab_0x413e58;
                            } else {
                                // 0x413e4a
                                if (*(int64_t *)v178 != 0) {
                                    goto lab_0x413eae;
                                } else {
                                    // 0x413e51
                                    if (*(char *)(v18 + 32) % 2 != 0) {
                                        goto lab_0x413eae;
                                    } else {
                                        goto lab_0x413e58;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        default: {
            goto lab_0x4134fe;
        }
    }
  lab_0x413c3f:;
    // 0x413c3f
    int64_t v203; // 0x412d40
    int64_t v278 = (int64_t)*(char *)v203;
    int64_t v220 = v278; // 0x413c41
    int64_t v216; // 0x412d40
    char v218; // 0x412d40
    int64_t v217; // 0x412d40
    int64_t v219; // 0x412d40
    int64_t * v162; // 0x412d40
    int32_t v197; // 0x413c06
    if (v197 == 0) {
        goto lab_0x414099;
    } else {
        // 0x413c47
        v218 = 0;
        v219 = v278;
        if (v197 != 3) {
            goto lab_0x413c5a;
        } else {
            int64_t v279 = *v162; // 0x413c4e
            v3 = v279;
            v216 = v279;
            v217 = v278;
            goto lab_0x413c56;
        }
    }
  lab_0x414099:;
    // 0x414099
    int64_t v161; // 0x412d40
    v218 = *(char *)v161;
    v219 = v220;
    goto lab_0x413c5a;
  lab_0x413c56:
    // 0x413c56
    v218 = *(char *)v216;
    v219 = v217;
    goto lab_0x413c5a;
  lab_0x413c5a:;
    int64_t v280 = v219;
    unsigned char v281 = v218;
    int64_t v282; // 0x412d40
    int64_t v283; // 0x412d40
    int32_t v284; // 0x412d40
    char * v165; // 0x412d40
    int32_t v195; // 0x413bdd
    if (v195 == 0) {
        goto lab_0x414064;
    } else {
        // 0x413c63
        v283 = v281;
        v284 = v197;
        v282 = (int64_t)*v168;
        if (*v165 != 0) {
            goto lab_0x414064;
        } else {
            goto lab_0x413c73;
        }
    }
  lab_0x414064:;
    // 0x414064
    int32_t * v170; // 0x412d40
    *v170 = (int32_t)v281;
    int64_t * v171; // 0x412d40
    *v171 = v4;
    int64_t v285 = function_408730(v280, v4); // 0x414070
    v4 = *v171;
    v283 = (int64_t)*v170;
    int32_t * v160; // 0x412d40
    v284 = *v160;
    v282 = v285 & 0xffffffff;
    goto lab_0x413c73;
  lab_0x413c73:;
    int64_t v286 = v282;
    int32_t v287 = v284;
    int64_t v288 = v283;
    int64_t v289; // 0x412d40
    int64_t v290; // 0x412d40
    if (v287 == 0) {
        goto lab_0x413fb5;
    } else {
        int64_t v291 = (int64_t)*(int32_t *)v161; // 0x413c7b
        v3 = v291;
        v289 = v291;
        v290 = v286;
        if (v287 == 3) {
            goto lab_0x413fb5;
        } else {
            goto lab_0x413c8c;
        }
    }
  lab_0x413fb5:
    // 0x413fb5
    *v170 = (int32_t)v286;
    *v171 = v4;
    int64_t v292 = function_408730(v288, v4); // 0x413fc4
    v4 = *v171;
    int64_t v293 = v292 & 0xffffffff; // 0x413fd3
    v3 = v293;
    v289 = v293;
    v290 = (int64_t)*v170;
    goto lab_0x413c8c;
  lab_0x413c8c:;
    int32_t v294 = v290;
    if (v294 == -1) {
        goto lab_0x413fa5_5;
    }
    uint32_t v295 = (int32_t)v289; // 0x413c96
    if (v295 == -1) {
        goto lab_0x413fa5_5;
    }
    // 0x413ca0
    if (v294 > v295 == ((*v149 & 0x10000) != 0)) {
        goto lab_0x4140a6_3;
    }
    int64_t v296 = v4; // 0x413cb4
    int32_t v297 = v294; // 0x413cb7
    int64_t * v172; // 0x412d40
    int32_t * v173; // 0x412d40
    int32_t * v174; // 0x412d40
    int64_t * v175; // 0x412d40
    int64_t * v176; // 0x412d40
    if (v296 != 0) {
        int64_t v298 = *(int64_t *)(v296 + 64); // 0x413cb9
        int64_t v299 = *(int64_t *)(v296 + 8); // 0x413cbd
        int32_t v300 = v294; // 0x413cc6
        int64_t v301 = v298; // 0x413cc6
        int64_t v302 = v299; // 0x413cc6
        if (v298 == *v172) {
            // 0x414122
            *v173 = v295;
            *v174 = v294;
            *v171 = v4;
            int64_t v303 = 2 * v298 | 1; // 0x41413c
            int64_t v304 = 4 * v303; // 0x414140
            *v172 = v303;
            *v175 = v304;
            *v176 = (int64_t)realloc((int64_t *)v299, (int32_t)v304);
            int64_t * mem4 = realloc((int64_t *)*(int64_t *)(*v171 + 16), (int32_t)*v175); // 0x414170
            int64_t v305 = *v176; // 0x414175
            if (v305 == 0) {
                // 0x4141bd
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x4141bd_3;
            }
            int64_t v306 = *v171; // 0x414182
            v4 = v306;
            v300 = *v174;
            v3 = (int64_t)*v173;
            if (mem4 == NULL) {
                // 0x4141bd
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x4141bd_3;
            }
            // 0x414193
            *(int64_t *)(v306 + 16) = (int64_t)mem4;
            v301 = *(int64_t *)(v4 + 64);
            *(int64_t *)(v4 + 8) = v305;
            v302 = v305;
        }
        int64_t v307 = 4 * v301; // 0x413ccc
        *(int32_t *)(v302 + v307) = v300;
        *(int64_t *)(v4 + 64) = v301 + 1;
        *(int32_t *)(*(int64_t *)(v4 + 16) + v307) = (int32_t)v3;
        v297 = v300;
    }
    int64_t v308 = 0;
    uint32_t v309 = (int32_t)v308; // 0x413cf2
    int64_t v310; // 0x413d02
    int64_t * v311; // 0x413d09
    if (v297 <= v309) {
        // 0x413cf7
        if ((int32_t)v3 >= v309) {
            // 0x413cfc
            v310 = v308 >> 6;
            v4 = v310;
            v311 = (int64_t *)(8 * v310 + v148);
            *v311 = *v311 | 1 << v308 % 64;
        }
    }
    int64_t v312 = v308 + 1; // 0x413d18
    while (v308 != 255) {
        // 0x413cf0
        v308 = v312;
        v309 = (int32_t)v308;
        if (v297 <= v309) {
            // 0x413cf7
            if ((int32_t)v3 >= v309) {
                // 0x413cfc
                v310 = v308 >> 6;
                v4 = v310;
                v311 = (int64_t *)(8 * v310 + v148);
                *v311 = *v311 | 1 << v308 % 64;
            }
        }
        // 0x413d0e
        v312 = v308 + 1;
    }
    // 0x413d1a
    *(int32_t *)*v177 = 0;
    int64_t v194; // 0x413bd8
    v255 = v194 & 0xffffffff;
    goto lab_0x41395f;
  lab_0x412d91:
    if ((a4 & 32) != 0) {
        // 0x4130b5
        *(int64_t *)(v6 + 24) = 0;
        *(int32_t *)*(int64_t *)(v6 + 48) = 13;
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    if ((a4 & 16) != 0) {
        // 0x413ad5
        v5 = a5;
        int64_t v313 = function_4125d0((int64_t *)v9, a1, a4); // 0x413ae5
        int64_t * v314 = (int64_t *)(a1 + 72); // 0x413af7
        *v314 = (0x100000000 * v313 >> 32) + *v314;
        function_412d40(a1, a2, v9, a4, v5, a6);
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x412db0;
  lab_0x412db0:
    // 0x412db0
    *(char *)(v9 + 8) = 1;
    if (function_40a780(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
        // 0x4136d1
        *(int32_t *)a6 = 12;
        // 0x412eb8
        *(int64_t *)(v6 + 24) = 0;
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x412de0;
  lab_0x413574:;
    int64_t v223 = &g2; // 0x413590
    int64_t v222 = (int64_t)"alnum"; // 0x413590
    bool v224 = v7 == 33; // 0x413590
    goto lab_0x413594;
  lab_0x4135c0:
    // 0x4135c0
    v223 = (int64_t)&g24;
    v222 = (int64_t)"space";
    v224 = v7 == 35;
    goto lab_0x413594;
  lab_0x412de0:
    // 0x412de0
    v58 = (int64_t *)(v6 + 8);
    int64_t v144 = function_4125d0((int64_t *)v9, a1, *v58); // 0x412deb
    unsigned char v145 = *(char *)(v9 + 8); // 0x412df0
    int64_t * v146 = (int64_t *)(a1 + 72); // 0x412df8
    *v146 = *v146 + (0x100000000 * v144 >> 32);
    if (v145 >= 24) {
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    // 0x412ed0
    v52 = (int64_t *)(v6 + 24);
    int64_t v147 = v6 + 32;
    v89 = (int64_t *)v147;
    v78 = (int128_t *)v147;
    v59 = (int64_t *)(v6 + 48);
    v110 = (int64_t *)(v6 + 16);
    v118 = (int64_t *)(v6 + 56);
    v114 = v6 + 192;
    v108 = (char *)(v6 + 200);
    v72 = v145;
    v73 = a1;
    v74 = v9;
    while (true) {
      lab_0x412ed0:;
        unsigned char v75 = v72;
        if ((1 << (int64_t)(v75 % 64) & 0x8c0800) == 0) {
            // break -> 0x412e0a
            break;
        }
        // 0x412ee6
        v53 = v74;
        v66 = v73;
        v60 = (int64_t *)(v66 + 72);
        v61 = *v60;
        v62 = (int128_t *)v53;
        int128_t v76 = __asm_movdqa(*v62); // 0x412eea
        if (v75 == 23) {
            int64_t v77 = *v58; // 0x413220
            v4 = v77;
            *v78 = (int128_t)__asm_movaps(v76);
            int64_t v79 = function_412c80(v66, v53, v77); // 0x413230
            v80 = __asm_movdqa(*v78);
            v5 = v79;
            v56 = v80;
            switch (v79) {
                case -1: {
                    // 0x4132b0
                    if (*(char *)(v53 + 8) != 1) {
                        // 0x4133c0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x4133cb;
                    }
                    // 0x4132bc
                    v81 = 0;
                    if (*(char *)v53 != 44) {
                        // 0x4133c0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x4133cb;
                    }
                    goto lab_0x4132c9;
                }
                case -2: {
                    goto lab_0x413262;
                }
                default: {
                    char * v82 = (char *)(v53 + 8);
                    v56 = v80;
                    v83 = v79;
                    v84 = v79;
                    switch (*v82) {
                        case 24: {
                            goto lab_0x413384;
                        }
                        case 1: {
                            // 0x4133a3
                            v81 = v79;
                            if (*(char *)v53 == 44) {
                                goto lab_0x4132c9;
                            } else {
                                // 0x4133ae
                                v55 = v82;
                                v57 = v80;
                                if ((*v58 & 0x200000) == 0) {
                                    // 0x4133c0
                                    *(int32_t *)*v59 = 10;
                                    goto lab_0x4133cb;
                                }
                                goto lab_0x413271;
                            }
                        }
                        default: {
                            goto lab_0x413262;
                        }
                    }
                }
            }
        } else {
            int64_t v85 = *v58;
            v4 = v85;
            int64_t v86 = function_4125d0((int64_t *)v53, v66, v85);
            *v60 = (0x100000000 * v86 >> 32) + *v60;
            int64_t v87 = *v52;
            if (v75 == 19) {
                if (v87 == 0) {
                    goto lab_0x413290;
                } else {
                    int64_t v88 = v75 == 18; // 0x412ed9
                    v5 = 1;
                    *v89 = 0;
                    v90 = 10;
                    v91 = v88;
                    v92 = v87;
                    v93 = v53;
                    v94 = v66;
                    v95 = v88;
                    v96 = v87;
                    v97 = v53;
                    v98 = v66;
                    if (*(char *)(v87 + 48) == 17) {
                        goto lab_0x4131f8;
                    } else {
                        goto lab_0x412f5a;
                    }
                }
            } else {
                if (v87 == 0) {
                    goto lab_0x413290;
                } else {
                    if (v75 == 18) {
                        // 0x41340a
                        v5 = -1;
                        v4 = v87;
                        v99 = v87;
                        v100 = 1;
                        v101 = v53;
                        v102 = v87;
                        v103 = v66;
                        goto lab_0x41341f;
                    } else {
                        // 0x412f33
                        v5 = -1;
                        if (*(char *)(v87 + 48) == 17) {
                            // 0x4131e0
                            *v89 = 0;
                            v95 = 0;
                            v96 = *v52;
                            v97 = v53;
                            v98 = v66;
                            goto lab_0x4131f8;
                        } else {
                            // 0x412f42
                            *v89 = 0;
                            v90 = 11;
                            v91 = 0;
                            v92 = v87;
                            v93 = v53;
                            v94 = v66;
                            goto lab_0x412f5a;
                        }
                    }
                }
            }
        }
    }
    // 0x412e0a
    return *(int64_t *)(v6 + 24);
  lab_0x4134d2:
    // 0x4134d2
    if (v17 == 21) {
        // 0x413aba
        *v20 = 1;
    }
    // 0x4134da
    v148 = v5;
    v149 = (int64_t *)(v6 + 8);
    int64_t v150 = v6 + 112; // 0x41350f
    v151 = v6 + 120;
    v152 = (int64_t *)v151;
    int64_t v153; // bp-120, 0x412d40
    int64_t v154 = &v153;
    int32_t * v155 = (int32_t *)v150; // 0x413519
    v156 = (int64_t *)(a1 + 72);
    int64_t v157 = v6 + 144;
    int64_t v158 = v6 + 192;
    int64_t v159 = v6 + 128;
    v160 = (int32_t *)v159;
    v161 = v6 + 136;
    v162 = (int64_t *)v161;
    v163 = (int64_t *)(v6 + 16);
    int64_t v164 = v6 + 64;
    v165 = (char *)v164;
    bool v166; // 0x412d40
    int64_t v167 = v166 ? -1 : 1;
    v168 = (int32_t *)v151;
    int64_t v169 = v6 + 72;
    v170 = (int32_t *)v169;
    v171 = (int64_t *)v164;
    v172 = (int64_t *)(v6 + 32);
    v173 = (int32_t *)(v6 + 92);
    v174 = (int32_t *)(v6 + 88);
    v175 = (int64_t *)(v6 + 80);
    v176 = (int64_t *)v169;
    v177 = (int64_t *)(v6 + 48);
    v178 = v18 + 72;
    v179 = (int64_t *)(v6 - 16);
    v180 = (int64_t *)(v6 + 104);
    v181 = (int64_t *)(v18 + 40);
    v182 = (int64_t *)(v6 + 24);
    v183 = v16 & 0xffffffff;
    v184 = 1;
    int32_t v185; // 0x412d40
    while (true) {
      lab_0x4134fe:
        // 0x4134fe
        v3 = v184;
        int64_t v186 = *v149; // 0x4134fe
        v3 = v184;
        *v152 = v154;
        *v155 = 3;
        int32_t v187 = function_4123b0(v150, a1, v9, v183, v186, (int32_t)v184);
        v185 = v187;
        if (v187 != 0) {
            // break -> 0x413b14
            break;
        }
        // 0x41352e
        g73 = v6 - 8;
        v188 = function_408020(v19, a1, *v149);
        if ((*v155 - 2 & -3) == 0) {
            goto lab_0x413564;
        } else {
            unsigned char v189 = *v20; // 0x41354c
            v4 = v189;
            switch (v189) {
                case 2: {
                    goto lab_0x413ac5;
                }
                case 22: {
                    int64_t v190 = 0x100000000 * v188;
                    *v156 = *v156 + (v190 >> 32);
                    int64_t v191 = *v149; // 0x413b5b
                    int64_t v192 = function_408020((int64_t *)v157, a1, v191); // 0x413b6b
                    unsigned char v193 = *(char *)(v6 + 152); // 0x413b70
                    v4 = v193;
                    switch (v193) {
                        case 2: {
                            goto lab_0x413ac5;
                        }
                        case 21: {
                            // 0x413d85
                            *v156 = *v156 + (-v190 >> 32);
                            *v20 = 1;
                            goto lab_0x413564;
                        }
                        default: {
                            // 0x413b8a
                            *v160 = 3;
                            *v162 = v158;
                            if ((int32_t)function_4123b0(v159, a1, v157, v192 & 0xffffffff, v191, 1) != 0) {
                                // break -> 0x413b14
                                break;
                            }
                            // 0x413bcd
                            v194 = function_408020(v19, a1, *v149);
                            v195 = *v155;
                            int32_t v196 = *(int32_t *)(*v163 + 180); // 0x413bee
                            v4 = v196 < 2 == (1 - v196 & v196) < 0 ? v18 : 0;
                            if ((v195 - 2 & -3) == 0) {
                                goto lab_0x4140a6_3;
                            }
                            // 0x413c06
                            v197 = *v160;
                            if ((v197 - 2 & -3) == 0) {
                                goto lab_0x4140a6_3;
                            }
                            // 0x413c19
                            *v165 = (char)(v195 == 3);
                            if (v195 == 3) {
                                int64_t v198 = *v152; // 0x4140ed
                                int64_t v199 = -1; // 0x4140fe
                                int64_t v200 = v198; // 0x4140fe
                                int64_t v201; // 0x412d40
                                while (v199 != 0) {
                                    int64_t v202 = v200;
                                    v199--;
                                    v200 = v202 + v167;
                                    v201 = v199;
                                    if (*(char *)v202 == 0) {
                                        // break -> 
                                        break;
                                    }
                                }
                                if (-v201 >= 4) {
                                    goto lab_0x413fa5_5;
                                }
                                // 0x414110
                                v203 = v198;
                                if (v197 == 3) {
                                    // 0x413f81
                                    int64_t v204; // 0x412d40
                                    while (v204 != 0) {
                                        int64_t v205; // 0x412d40
                                        int64_t v206 = v205;
                                        char v207 = *(char *)v206; // 0x413f8f
                                        int64_t v208; // 0x412d40
                                        int64_t v209 = v208 - 1; // 0x413f8f
                                        v204 = v209;
                                        v205 = v206 + v167;
                                        int64_t v210 = v209; // 0x413f8f
                                        if (v207 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v208 = v204;
                                        v210 = 0;
                                    }
                                    v203 = v198;
                                }
                                goto lab_0x413c3f;
                            } else {
                                if (v197 == 3) {
                                    int64_t v211 = *v162; // 0x4140b6
                                    v3 = v211;
                                    int64_t v212 = v211; // 0x4140c7
                                    int64_t v213 = -1; // 0x4140c7
                                    int64_t v214 = 0; // 0x4140c7
                                    while (v213 != 0) {
                                        int64_t v215 = v212;
                                        v213--;
                                        v212 = v215 + v167;
                                        v214 = v213;
                                        if (*(char *)v215 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v214 = 0;
                                    }
                                    if (-v214 >= 4) {
                                        goto lab_0x413fa5_5;
                                    }
                                    // 0x4140dd
                                    v203 = v151;
                                    v216 = v211;
                                    v217 = 0;
                                    if (v195 != 0) {
                                        goto lab_0x413c56;
                                    } else {
                                        goto lab_0x413c3f;
                                    }
                                } else {
                                    // 0x413c31
                                    v203 = v151;
                                    if (v195 != 0) {
                                        // 0x41408d
                                        v218 = 0;
                                        v219 = 0;
                                        v220 = 0;
                                        if (v197 != 0) {
                                            goto lab_0x413c5a;
                                        } else {
                                            goto lab_0x414099;
                                        }
                                    } else {
                                        goto lab_0x413c3f;
                                    }
                                }
                            }
                        }
                    }
                }
                default: {
                    goto lab_0x413564;
                }
            }
        }
    }
    // 0x413b14
    *(int32_t *)*v177 = v185;
    v11 = v177;
    goto lab_0x4139fb_3;
  lab_0x413594:;
    int64_t v221 = *(int64_t *)(a1 + 120);
    v4 = v222;
    v3 = a6;
    if (!(((int32_t)a6 == 0 | function_40db70(a2, v221, (char *)v222, (int64_t *)v223, (int64_t)v224, a6) != 0))) {
        // 0x412eb8
        *(int64_t *)(v6 + 24) = 0;
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x412de0;
  lab_0x413a49:;
    // 0x413a49
    int64_t v225; // 0x4137f5
    int64_t v226; // 0x4137f9
    if (function_40a780(v225, v226, 0, 0, v9) == 0) {
        // 0x4136d1
        *(int32_t *)a6 = 12;
        // 0x412eb8
        *(int64_t *)(v6 + 24) = 0;
        // 0x412e0a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x41389f;
  lab_0x413fe5:;
    int16_t * v250 = *__ctype_b_loc(); // 0x413ff9
    v3 = (v13 | 256) - 64 * v15;
    int64_t v251 = v13; // 0x41400f
    int64_t v252 = 8 * v15 + a2; // 0x41400f
    int64_t v141 = 2 * v13 + (int64_t)v250; // 0x41400f
    while (true) {
        int64_t v143 = v251;
        v139 = (int64_t *)(v252 + 184);
        v140 = 0;
        while (true) {
          lab_0x414032:
            // 0x414032
            v137 = v140;
            if ((*(char *)(2 * v137 + v141) & 8) == 0) {
                int64_t v142 = v137 + v143; // 0x414020
                v4 = v142 & 0xffffffff;
                if ((int32_t)v142 == 95) {
                    goto lab_0x41403a;
                } else {
                    goto lab_0x414028;
                }
            } else {
                goto lab_0x41403a;
            }
        }
      lab_0x414049:;
        int64_t v253 = v143 + 64; // 0x414049
        v12 = v10;
        v251 = v253 & 0xffffffff;
        v252 += 8;
        v141 += 128;
        if ((int32_t)v3 == (int32_t)v253) {
            // break -> 0x4137f0
            break;
        }
    }
    goto lab_0x4137f0_2;
  lab_0x41389f:;
    int64_t v227 = function_4125d0((int64_t *)v9, a1, a4); // 0x4138aa
    int64_t * v228 = (int64_t *)(a1 + 72); // 0x4138b1
    *v228 = (0x100000000 * v227 >> 32) + *v228;
    // 0x412e0a
    return *(int64_t *)(v6 + 24);
  lab_0x4137f0_2:;
    int32_t v229 = v12;
    v225 = a2 + 112;
    v226 = a2 + 128;
    if ((v229 - 256 & -257) != 0) {
        goto lab_0x413a49;
    } else {
        int32_t * v230 = (int32_t *)v9;
        int64_t v231; // 0x412d40
        if (v229 == 256) {
            // 0x413b2a
            *v230 = 6;
            v4 = 0;
            v231 = function_40a780(v225, v226, 0, 0, v9);
        } else {
            // 0x41381f
            *v230 = 5;
            v4 = 0;
            v231 = function_40a780(v225, v226, 0, 0, v9);
        }
        // 0x413844
        *v230 = 10;
        int64_t v232 = function_40a780(v225, v226, 0, 0, v9); // 0x413851
        int64_t v233 = function_40a780(v225, v226, (int32_t)v231, (int32_t)v232, (int64_t)&v14); // 0x413875
        if (v233 == 0 || v231 == 0 || v232 == 0) {
            // 0x4136d1
            *(int32_t *)a6 = 12;
            // 0x412eb8
            *(int64_t *)(v6 + 24) = 0;
            // 0x412e0a
            return *(int64_t *)(v6 + 24);
        }
        goto lab_0x41389f;
    }
  lab_0x4141bd_3:
    // 0x4141bd
    *v182 = v234;
    free((int64_t *)v235);
    free((int64_t *)*v182);
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x4139fb_3;
  lab_0x413eae:;
    int64_t v236 = *v163; // 0x413eae
    char * v237 = (char *)(v236 + 176); // 0x413eba
    *v237 = *v237 | 2;
    int64_t v238 = v236 + 112; // 0x413ec1
    int64_t v239 = v236 + 128; // 0x413ec5
    char * v240 = (char *)(v6 + 168); // 0x413ed2
    *v240 = 6;
    int64_t * v241 = (int64_t *)(v6 + 160); // 0x413eda
    *v241 = v18;
    int64_t v242 = function_40a780(v238, v239, 0, 0, v154); // 0x413ee2
    *v182 = v242;
    int64_t v243 = v5 + 32; // 0x413ef3
    v4 = v243;
    int64_t v244 = v5; // 0x413efd
    if (v242 == 0) {
        goto lab_0x413e9e;
    } else {
        while (*(int64_t *)v244 == 0) {
            int64_t v245 = v244 + 8; // 0x413f05
            v244 = v245;
            if (v243 == v245) {
                // 0x413f0e
                free((int64_t *)v5);
                goto lab_0x412de0;
            }
        }
        // 0x413f1c
        *v240 = 3;
        *v241 = v5;
        int64_t v246 = function_40a780(v238, v239, 0, 0, v154); // 0x413f3d
        if (v246 == 0) {
            goto lab_0x413e9e;
        } else {
            // 0x413f4b
            *(char *)(v6 + 200) = 10;
            int64_t v247 = function_40a780(v238, v239, (int32_t)v246, (int32_t)*v182, v158); // 0x413f69
            *v182 = v247;
            if (v247 != 0) {
                goto lab_0x412de0;
            } else {
                goto lab_0x413e9e;
            }
        }
    }
  lab_0x413e58:
    // 0x413e58
    function_409170(v18);
    *(char *)(v6 + 168) = 3;
    *(int64_t *)(v6 + 160) = v5;
    int64_t v248 = *v163; // 0x413e7b
    int64_t v249 = function_40a780(v248 + 112, v248 + 128, 0, 0, v154); // 0x413e8b
    *v182 = v249;
    if (v249 != 0) {
        goto lab_0x412de0;
    } else {
        goto lab_0x413e9e;
    }
}
// Address range: 0x414230 - 0x41436e
int64_t function_414230(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_412d40(a1, a2, a3, a4, a5, a6); // 0x41425a
    int64_t v1; // 0x414230
    if ((int32_t)v1 != 0 == result == 0) {
        // 0x414305
        return 0;
    }
    char * v2 = (char *)(a3 + 8); // 0x414278
    char v3 = *v2; // 0x414278
    if ((v3 & -9) == 2) {
        // 0x414305
        return result;
    }
    // 0x414286
    int64_t v4; // bp-72, 0x414230
    int64_t v5 = &v4;
    int64_t v6 = result;
    int64_t result2 = v6; // 0x414288
    if (a5 != 0 == v3 == 9) {
        return result2;
    }
    int64_t v7 = function_412d40(a1, a2, a3, a4, a5, a6); // 0x4142a3
    int32_t v8 = v7;
    if (v7 == 0 == (v8 != 0)) {
        // 0x41432c
        result2 = 0;
        if (v6 == 0) {
            return result2;
        } else {
            // 0x414331
            function_407fb0(v6, 0x4091c0, 0);
            result2 = 0;
            return result2;
        }
    }
    int64_t v9; // 0x4142e5
    char v10; // 0x4142f7
    while (v6 != 0 && v7 != 0) {
        // 0x4142c0
        v9 = function_40a780(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
        if (v9 == 0) {
            // 0x414345
            function_407fb0(v7, 0x4091c0, 0);
            function_407fb0(v6, 0x4091c0, 0);
            *(int32_t *)a6 = 12;
            result2 = 0;
            return result2;
        }
        // 0x4142f4
        v10 = *v2;
        result2 = v9;
        if ((v10 & -9) == 2) {
            return result2;
        }
        v6 = v9;
        result2 = v6;
        if (a5 != 0 == v10 == 9) {
            return result2;
        }
        // 0x41428f
        v7 = function_412d40(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x41432c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x414331
                function_407fb0(v6, 0x4091c0, 0);
                result2 = 0;
                return result2;
            }
        }
    }
    int64_t v11 = v6 == 0 ? v7 : v6; // 0x414323
    char v12 = *v2; // 0x414278
    result2 = v11;
    while ((v12 & -9) != 2) {
        // 0x414286
        v6 = v11;
        result2 = v6;
        if (a5 != 0 == v12 == 9) {
            return result2;
        }
        // 0x41428f
        v7 = function_412d40(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x41432c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x414331
                function_407fb0(v6, 0x4091c0, 0);
                result2 = 0;
                return result2;
            }
        }
        while (v6 != 0 && v7 != 0) {
            // 0x4142c0
            v9 = function_40a780(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
            if (v9 == 0) {
                // 0x414345
                function_407fb0(v7, 0x4091c0, 0);
                function_407fb0(v6, 0x4091c0, 0);
                *(int32_t *)a6 = 12;
                result2 = 0;
                return result2;
            }
            // 0x4142f4
            v10 = *v2;
            result2 = v9;
            if ((v10 & -9) == 2) {
                return result2;
            }
            v6 = v9;
            result2 = v6;
            if (a5 != 0 == v10 == 9) {
                return result2;
            }
            // 0x41428f
            v7 = function_412d40(a1, a2, a3, a4, a5, a6);
            v8 = v7;
            if (v7 == 0 == (v8 != 0)) {
                // 0x41432c
                result2 = 0;
                if (v6 == 0) {
                    return result2;
                } else {
                    // 0x414331
                    function_407fb0(v6, 0x4091c0, 0);
                    result2 = 0;
                    return result2;
                }
            }
        }
        // 0x414320
        v11 = v6 == 0 ? v7 : v6;
        v12 = *v2;
        result2 = v11;
    }
  lab_0x414305_2:
    // 0x414305
    return result2;
}
// Address range: 0x414370 - 0x4144c1
int64_t function_414370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a2 + 168); // 0x414392
    int64_t v2 = function_414230(a1, a2, a3, a4, a5, a6); // 0x4143a2
    int64_t v3; // 0x414370
    if ((int32_t)v3 != 0 && v2 == 0) {
        // 0x4143c1
        return 0;
    }
    char * v4 = (char *)(a3 + 8); // 0x414459
    int64_t * v5 = (int64_t *)(a1 + 72);
    int64_t v6 = a2 + 112;
    int64_t v7; // bp-72, 0x414370
    int64_t v8 = &v7;
    int64_t v9 = v2;
    int64_t result = v9; // 0x41445d
    while (*v4 == 10) {
        // 0x414463
        *v5 = (0x100000000 * function_4125d0((int64_t *)a3, a1, a4 | 0x800000) >> 32) + *v5;
        char v10 = *v4; // 0x41447f
        int64_t v11 = 0; // 0x41448b
        if ((v10 & -9) != 2 && a5 != 0 != (v10 == 9)) {
            // 0x4143e7
            v11 = function_414230(a1, a2, a3, a4, a5, a6);
            int64_t v12; // 0x414370
            if (v11 == 0 == (*(int32_t *)&v12 != 0)) {
                // 0x4144a4
                result = 0;
                if (v9 == 0) {
                    return result;
                } else {
                    // 0x4144ad
                    function_407fb0(v9, 0x4091c0, 0);
                    result = 0;
                    return result;
                }
            }
        }
        int64_t v13 = function_40a780(v6, a2 + 128, (int32_t)v9, (int32_t)v11, v8); // 0x41444c
        if (v13 == 0) {
            // 0x414498
            *(int32_t *)a6 = 12;
            result = 0;
            return result;
        }
        v9 = v13;
        result = v9;
    }
  lab_0x4143c1:
    // 0x4143c1
    return result;
}
// Address range: 0x4144d0 - 0x41527a
int64_t function_4144d0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4144d0
    int128_t v1; // 0x4144d0
    int128_t v2 = v1;
    int64_t v3; // 0x4144d0
    int64_t v4 = v3;
    char * v5 = (char *)(a1 + 56); // 0x4144ed
    *v5 = *v5 & -112;
    int64_t v6 = a1 + 8;
    int64_t * v7 = (int64_t *)v6; // 0x4144f1
    int32_t result = 0; // bp-268, 0x4144f9
    *(int64_t *)(a1 + 24) = a4;
    int64_t * v8 = (int64_t *)(a1 + 16); // 0x414508
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 48); // 0x414510
    *v9 = 0;
    int64_t v10 = v6; // 0x414518
    int64_t v11 = a1; // 0x414518
    if (*v7 < 232) {
        int64_t * v12 = (int64_t *)a1; // 0x415058
        int64_t * mem = realloc(v12, 232); // 0x415058
        if (mem == NULL) {
            // 0x414e1b
            return 12;
        }
        // 0x415069
        v11 = (int64_t)mem;
        *v7 = 232;
        *v12 = v11;
        v10 = v11 + 8;
    }
    // 0x41451e
    *v8 = 232;
    int64_t v13 = v10 & -8; // 0x41452f
    int64_t * v14 = (int64_t *)v11; // 0x414533
    *v14 = 0;
    *(int64_t *)(v11 + 224) = 0;
    __asm_rep_stosq_memset((char *)v13, 0, (v11 + 232 - v13) / 8 % 0x20000000);
    *(int32_t *)(v11 + 128) = 15;
    int64_t v15; // 0x4144d0
    int64_t v16; // 0x4144d0
    uint64_t v17; // 0x4144d0
    int64_t v18; // 0x4144d0
    int64_t v19; // 0x4144d0
    int64_t v20; // 0x414571
    int64_t * v21; // 0x4145bd
    int32_t * v22; // 0x4145cb
    char * v23; // 0x414628
    if (a3 < 0x555555555555555) {
        // 0x414571
        v20 = a3 + 1;
        *(int64_t *)v10 = v20;
        *v14 = (int64_t)malloc(16 * (int32_t)v20);
        int64_t size = 1; // 0x414591
        int64_t v24 = 0; // 0x414591
        if (a3 != 0) {
            int64_t v25 = 2; // 0x4145a0
            int64_t v26 = v25; // 0x4145a6
            while (v25 <= a3) {
                // 0x4145a0
                v25 = 2 * v26;
                v26 = v25;
            }
            // 0x4145a8
            size = v25;
            v24 = v25 - 1;
        }
        int64_t * mem2 = calloc(24, (int32_t)size); // 0x4145b1
        *(int64_t *)(v11 + 136) = v24;
        v21 = (int64_t *)(v11 + 64);
        *v21 = (int64_t)mem2;
        int32_t v27 = __ctype_get_mb_cur_max(); // 0x4145c1
        v22 = (int32_t *)(v11 + 180);
        *v22 = v27;
        char * v28 = nl_langinfo(14); // 0x4145d1
        if ((*v28 & -33) == 85) {
            int64_t v29 = (int64_t)v28; // 0x4145d1
            if ((*(char *)(v29 + 1) & -33) == 84) {
                // 0x4145ed
                if ((*(char *)(v29 + 2) & -33) == 70) {
                    int64_t v30 = v29 + 3; // 0x4145fb
                    bool v31; // 0x4144d0
                    int64_t v32 = v31 ? -1 : 1; // 0x414611
                    int64_t v33 = (int64_t)&g25; // 0x4144d0
                    int64_t v34 = v30 + (int64_t)(*(char *)v30 == 45); // 0x4144d0
                    int64_t v35 = 2; // 0x414611
                    unsigned char v36 = *(char *)v34; // 0x414611
                    char v37 = *(char *)v33; // 0x414611
                    char v38 = v37; // 0x414611
                    bool v39 = false; // 0x414611
                    while (v36 == v37) {
                        v35--;
                        v33 += v32;
                        v34 += v32;
                        v38 = v36;
                        v39 = true;
                        if (v35 == 0) {
                            // break -> 
                            break;
                        }
                        v36 = *(char *)v34;
                        v37 = *(char *)v33;
                        v38 = v37;
                        v39 = false;
                    }
                    unsigned char v40 = v38;
                    if ((v36 >= v40 && !v39) == v36 < v40) {
                        char * v41 = (char *)(v11 + 176); // 0x41461c
                        *v41 = *v41 | 4;
                    }
                }
            }
        }
        // 0x414628
        v23 = (char *)(v11 + 176);
        char v42 = *v23; // 0x414628
        *v23 = v42 & -9;
        if (*v22 < 2) {
            goto lab_0x414653;
        } else {
            if ((v42 & 4) == 0) {
                int64_t * mem3 = calloc(32, 1); // 0x414eca
                int64_t * v43 = (int64_t *)(v11 + 120); // 0x414ecf
                *v43 = (int64_t)mem3;
                int64_t v44 = 0; // 0x414ed6
                if (mem3 == NULL) {
                    // 0x414eb0
                    result = 12;
                    goto lab_0x414e8e;
                } else {
                    while (true) {
                        int64_t v45 = v44;
                        v16 = 0;
                        v18 = 8 * v45;
                        while (true) {
                          lab_0x414f06_2:
                            // 0x414f06
                            v19 = v18;
                            v17 = v16;
                            int32_t wc = v19; // 0x414f06
                            int32_t v46 = btowc(wc); // 0x414f0f
                            int64_t v47 = v19 & 0xffffff80; // 0x414f1d
                            if (v46 == -1) {
                                if (v47 != 0) {
                                    goto lab_0x414efb;
                                } else {
                                    // 0x414ef4
                                    *v23 = *v23 | 8;
                                    goto lab_0x414efb;
                                }
                            } else {
                                int64_t * v48 = (int64_t *)(*v43 + v45); // 0x414f35
                                *v48 = *v48 | 1 << v17 % 64;
                                if (v47 != 0) {
                                    goto lab_0x414efb;
                                } else {
                                    if (v46 != wc) {
                                        // 0x414ef4
                                        *v23 = *v23 | 8;
                                        goto lab_0x414efb;
                                    } else {
                                        int64_t v49 = v17 + 1; // 0x414f40
                                        v15 = v49;
                                        if ((int32_t)v49 == 64) {
                                            // break -> 0x414f50
                                            break;
                                        }
                                        goto lab_0x414f06;
                                    }
                                }
                            }
                        }
                      lab_0x414f50:
                        // 0x414f50
                        v44 = v45 + 8;
                        if (v45 == 24) {
                            // break -> 0x414653
                            break;
                        }
                    }
                    goto lab_0x414653;
                }
            } else {
                // 0x41464b
                *(int64_t *)(v11 + 120) = (int64_t)&g26;
                goto lab_0x414653;
            }
        }
    } else {
        // 0x414eb0
        result = 12;
        goto lab_0x414e8e;
    }
  lab_0x414efb:;
    int64_t v50 = v17 + 1; // 0x414efb
    v15 = v50;
    if ((int32_t)v50 == 64) {
        // break -> 0x414f50
        goto lab_0x414f50;
    }
    goto lab_0x414f06;
  lab_0x414f06:
    // 0x414f06
    v16 = v15 & 0xffffffff;
    v18 = v19 + 1 & 0xffffffff;
    goto lab_0x414f06_2;
  lab_0x415110_2:
    // 0x415110
    result = 0;
    int64_t v51; // 0x4144d0
    int64_t v52 = v51; // 0x415118
    int64_t v53 = v51; // 0x415118
    goto lab_0x414819;
  lab_0x414a00:;
    // 0x414a00
    int64_t * v83; // 0x4144d0
    int64_t v91 = *v83; // 0x414a00
    int64_t v92 = function_407fb0(v91, 0x40ab30, (int32_t)a1); // 0x414a0c
    int64_t v93 = v92; // 0x414a13
    int64_t v94 = v91; // 0x414a13
    int64_t v95; // 0x4144d0
    int64_t v73; // 0x4144d0
    int64_t v96; // bp-232, 0x4144d0
    int64_t v68; // bp-248, 0x4144d0
    int64_t * v80; // 0x414957
    int64_t * v97; // 0x4144d0
    if ((int32_t)v92 != 0) {
        goto lab_0x414c28_2;
    } else {
        int64_t v98 = *v83; // 0x414a19
        int64_t v99 = function_407fb0(v98, 0x40d060, (int32_t)v73); // 0x414a25
        v93 = v99;
        v94 = v98;
        if ((int32_t)v99 != 0) {
            goto lab_0x414c28_2;
        } else {
            // 0x414a32
            function_409ff0(*v83, 0x409d40, v73);
            int64_t v100 = *v83; // 0x414a43
            int64_t v101 = function_409ff0(v100, 0x409840, v73); // 0x414a4f
            v93 = v101;
            v94 = v100;
            if ((int32_t)v101 != 0) {
                goto lab_0x414c28_2;
            } else {
                // 0x414a68
                v97 = (int64_t *)(v73 + 16);
                int64_t v102 = 0; // 0x4144d0
                int64_t v103 = 0; // 0x4144d0
                int64_t v104; // 0x4144d0
                while (true) {
                    int64_t v105 = *v97; // 0x414a68
                    int64_t v106 = v105; // 0x414a6c
                    int64_t v107 = v102; // 0x414a6c
                    int64_t v108 = v103; // 0x414a6c
                    int64_t v109 = v103; // 0x414a6c
                    int64_t v110 = v102; // 0x414a6c
                    v104 = v103;
                    int64_t v111; // 0x4144d0
                    if (v105 == v103) {
                      lab_0x414a8c:
                        // 0x414a8c
                        v111 = v109;
                        if ((char)v110 == 0) {
                            // break -> 0x414b20
                            break;
                        }
                      lab_0x414a95:
                        // 0x414a95
                        v106 = v111;
                        v107 = 0;
                        v108 = 0;
                    }
                    int64_t v112 = v107;
                    int64_t v113 = v106; // 0x414a86
                    int64_t v114 = v108;
                    int64_t v115; // 0x414a82
                    while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                        // 0x414a82
                        v115 = v114 + 1;
                        v109 = v113;
                        v110 = v112;
                        v104 = v115;
                        if (v113 == v115) {
                            goto lab_0x414a8c;
                        }
                        v114 = v115;
                    }
                    int64_t v116 = function_40a220((int128_t *)&v68, v73, v114, 1); // 0x414ab3
                    if ((int32_t)v116 != 0) {
                        // 0x414c28
                        v93 = v116;
                        v94 = &v68;
                        goto lab_0x414c28_2;
                    }
                    int64_t v117 = v114 + 1; // 0x414ac9
                    v102 = v112;
                    v103 = v117;
                    while (*(int64_t *)((0x1800000000 * v114 >> 32) + 8 + *v80) == 0) {
                        // 0x414ad5
                        free((int64_t *)v96);
                        int64_t v118 = *v97; // 0x414ae5
                        v111 = v118;
                        if (v118 == v117) {
                            goto lab_0x414a95;
                        }
                        v112 = 1;
                        v113 = v118;
                        v114 = v117;
                        while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                            // 0x414a82
                            v115 = v114 + 1;
                            v109 = v113;
                            v110 = v112;
                            v104 = v115;
                            if (v113 == v115) {
                                goto lab_0x414a8c;
                            }
                            v114 = v115;
                        }
                        // 0x414aa0
                        v116 = function_40a220((int128_t *)&v68, v73, v114, 1);
                        if ((int32_t)v116 != 0) {
                            // 0x414c28
                            v93 = v116;
                            v94 = &v68;
                            goto lab_0x414c28_2;
                        }
                        // 0x414ac0
                        v117 = v114 + 1;
                        v102 = v112;
                        v103 = v117;
                    }
                }
                // 0x414b20
                v95 = v104;
                if ((*v5 & 16) != 0) {
                    goto lab_0x414c38;
                } else {
                    // 0x414b2a
                    if (*v9 == 0) {
                        goto lab_0x414c38;
                    } else {
                        // 0x414b35
                        if (*(char *)(v73 + 176) % 2 == 0) {
                            goto lab_0x414c38;
                        } else {
                            goto lab_0x414b43;
                        }
                    }
                }
            }
        }
    }
  lab_0x414c28_2:
    // 0x414c28
    result = v93;
    int64_t v67 = v94; // 0x414c30
    goto lab_0x414e38;
  lab_0x414cc8:;
    // 0x414cc8
    int64_t v140; // 0x4144d0
    int64_t v141 = v140 + 1; // 0x414cc8
    uint64_t v78; // 0x4144d0
    if (v78 <= v141) {
        // break -> 0x414d70
        goto lab_0x414d70;
    }
    int64_t v142 = v141; // 0x4144d0
    goto lab_0x414cd5_2;
  lab_0x414653:;
    // 0x414653
    int64_t v129; // bp-208, 0x4144d0
    int64_t v124; // bp-216, 0x4144d0
    int64_t * v158; // 0x414674
    int64_t v128; // 0x414674
    if (*v14 == 0) {
        // 0x414eb0
        result = 12;
        goto lab_0x414e8e;
    } else {
        // 0x41465d
        if (*v21 == 0) {
            // 0x414eb0
            result = 12;
            goto lab_0x414e8e;
        } else {
            // 0x414668
            v158 = (int64_t *)(a1 + 40);
            v128 = *v158;
            result = 0;
            __asm_rep_stosq_memset((char *)&v129, 0, 18);
            v124 = a2;
            if (a3 != 0) {
                int64_t v159 = &v124; // 0x414af5
                int64_t v160 = function_4083f0(v159, v20); // 0x414afa
                v93 = v160;
                v94 = v159;
                if ((int32_t)v160 != 0) {
                    goto lab_0x414c28_2;
                } else {
                    // 0x414b07
                    goto lab_0x414712;
                }
            } else {
                goto lab_0x414712;
            }
        }
    }
  lab_0x414e8e:
    // 0x414e8e
    function_40d0f0(v11);
    *(int64_t *)a1 = 0;
    *v7 = 0;
    // 0x414e1b
    return result;
  lab_0x414712:;
    int64_t v125 = a4 & 0x400000; // 0x414697
    int32_t v126 = *v22;
    int64_t v127 = (v128 | v125) == 0 ? a2 : v129;
    v129 = v127;
    if (v125 == 0) {
        if (v126 > 1) {
            int64_t v130 = &v124;
            function_4087e0(v130);
            result = 0;
            v52 = v130;
            v53 = v130;
        } else {
            if ((v128 || v125) != 0) {
                int64_t v131 = a3 - v4; // 0x4147a6
                int64_t v132 = v131 == 0 | v131 < 0 != ((v131 ^ a3) & (v4 ^ a3)) < 0 ? a3 : v4; // 0x4147b6
                if (v132 > v3) {
                    unsigned char v133 = *(char *)(2 * v3 + v124); // 0x4147ed
                    *(char *)(v127 + v3) = *(char *)(v128 + (int64_t)v133);
                    int64_t v134 = v3 + 1; // 0x4147f8
                    int64_t v135 = v134; // 0x4147ff
                    if (v132 != v134) {
                        unsigned char v136 = *(char *)(v135 + v3 + v124); // 0x4147ed
                        *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                        int64_t v137 = v135 + 1; // 0x4147f8
                        v135 = v137;
                        while (v132 != v137) {
                            // 0x4147d0
                            v136 = *(char *)(v135 + v3 + v124);
                            *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                            v137 = v135 + 1;
                            v135 = v137;
                        }
                    }
                }
            }
            // 0x414801
            result = 0;
            v52 = &v124;
            v53 = v126;
        }
        goto lab_0x414819;
    } else {
        // 0x414728
        v51 = &v124;
        if (v126 < 2) {
            // 0x415038
            function_408760(v51);
            result = 0;
            v52 = v51;
            v53 = v51;
            goto lab_0x414819;
        } else {
            int64_t v138 = function_408990(v51); // 0x414736
            v93 = v138;
            v94 = v51;
            // 0x414731
            while ((int32_t)v138 == 0) {
                if (v3 >= a3) {
                    goto lab_0x415110_2;
                }
                // 0x414751
                if (v4 > v3 + (int64_t)*v22) {
                    goto lab_0x415110_2;
                }
                int64_t v139 = function_4083f0(v51, 2 * v4); // 0x414779
                v93 = v139;
                v94 = v51;
                if ((int32_t)v139 != 0) {
                    // break -> 0x414c28
                    break;
                }
                v138 = function_408990(v51);
                v93 = v138;
                v94 = v51;
            }
            goto lab_0x414c28_2;
        }
    }
  lab_0x414e38:;
    int64_t * v119 = (int64_t *)(v67 + 112); // 0x414e38
    int64_t v120 = *v119; // 0x414e38
    if (v120 != 0) {
        int64_t * v121 = (int64_t *)v120; // 0x414e48
        int64_t v122 = *v121; // 0x414e48
        free(v121);
        while (v122 != 0) {
            // 0x414e48
            v121 = (int64_t *)v122;
            v122 = *v121;
            free(v121);
        }
    }
    // 0x414e58
    *v119 = 0;
    int64_t * v123 = (int64_t *)(v67 + 32); // 0x414e60
    *(int32_t *)(v67 + 128) = 15;
    *(int64_t *)(v67 + 104) = 0;
    free((int64_t *)*v123);
    *v123 = 0;
    function_409740(&v124);
    goto lab_0x414e8e;
  lab_0x414819:;
    int64_t v54 = v53;
    int64_t v55 = v52;
    *v9 = 0;
    *(int64_t *)(v54 + 216) = a4;
    int32_t v56; // bp-264, 0x4144d0
    function_4125d0((int64_t *)&v56, v55, a4 | 0x800000);
    int64_t v57 = &v56; // 0x414851
    int64_t v58 = function_414370(v55, a1, v57, a4, 0, (int64_t)&result); // 0x414868
    int64_t v59; // 0x4144d0
    int64_t v60; // 0x4144d0
    int64_t v61; // 0x4144d0
    int64_t v62; // 0x4144d0
    int64_t v63; // 0x4150b9
    int64_t v64; // 0x4150c7
    int64_t v65; // 0x4144d0
    int64_t v66; // 0x4150e2
    if (result != 0) {
        if (v58 == 0) {
            // 0x415232
            *(int64_t *)(v11 + 104) = 0;
            v67 = v55;
            goto lab_0x414e38;
        } else {
            // 0x4150b9
            v63 = v54 + 112;
            v64 = v54 + 128;
            v65 = &v68;
            v66 = function_40a780(v63, v64, 0, 0, v65);
            goto lab_0x4148b7;
        }
    } else {
        int64_t v69 = v54 + 112; // 0x414879
        int64_t v70 = v54 + 128; // 0x414887
        int64_t v71 = &v68;
        int64_t v72 = function_40a780(v69, v70, 0, 0, v71); // 0x4148a2
        v65 = v71;
        v64 = v70;
        v66 = v72;
        v63 = v69;
        v62 = 2;
        v61 = v72;
        v60 = v69;
        v59 = v72;
        if (v58 == 0) {
            goto lab_0x4148d6;
        } else {
            goto lab_0x4148b7;
        }
    }
  lab_0x4148d6:
    // 0x4148d6
    v73 = v60;
    int64_t * v74; // 0x4144d0
    int64_t * v75; // 0x4148f2
    int64_t * v76; // 0x41498d
    int64_t * v77; // 0x4144d0
    if (v61 == 0 || v59 == 0) {
        // 0x4150f8
        result = 12;
        *(int64_t *)(v11 + 104) = 0;
        v67 = v73;
        goto lab_0x414e38;
    } else {
        // 0x4148ee
        v78 = v62;
        v75 = (int64_t *)(v11 + 104);
        *v75 = v59;
        int32_t v79 = (int32_t)*(int64_t *)(v73 + 8);
        int32_t size2 = 8 * v79; // 0x41490f
        int64_t * mem4 = malloc(size2); // 0x41490f
        *(int64_t *)(v73 + 24) = (int64_t)mem4;
        int64_t * mem5 = malloc(size2); // 0x414923
        *(int64_t *)(v73 + 32) = (int64_t)mem5;
        int32_t size3 = 24 * v79; // 0x414934
        int64_t * mem6 = malloc(size3); // 0x414934
        *(int64_t *)(v73 + 40) = (int64_t)mem6;
        int64_t * mem7 = malloc(size3); // 0x414945
        v80 = (int64_t *)(v73 + 48);
        *v80 = (int64_t)mem7;
        if (mem4 == NULL | mem5 == NULL || mem6 == NULL || mem7 == NULL) {
            // 0x414e30
            result = 12;
            v67 = v73;
            goto lab_0x414e38;
        } else {
            int64_t v81 = *v9; // 0x41497c
            int64_t * mem8 = malloc(8 * (int32_t)v81); // 0x414988
            int64_t v82 = (int64_t)mem8; // 0x414988
            v76 = (int64_t *)(v73 + 224);
            *v76 = v82;
            if (mem8 == NULL) {
                // 0x41497c
                v83 = (int64_t *)(v73 + 104);
                goto lab_0x414a00;
            } else {
                // 0x414999
                if (v81 != 0) {
                    int64_t v84 = 0;
                    *(int64_t *)(8 * v84 + v82) = v84;
                    int64_t v85 = v84 + 1; // 0x4149a4
                    while (v85 != v81) {
                        // 0x4149a0
                        v84 = v85;
                        *(int64_t *)(8 * v84 + v82) = v84;
                        v85 = v84 + 1;
                    }
                }
                // 0x4149ad
                v77 = (int64_t *)(v73 + 104);
                function_409ff0(*v77, 0x409cb0, v73);
                int64_t v86 = *v9; // 0x4149be
                int64_t v87 = *v76;
                v74 = (int64_t *)v87;
                if (v86 == 0) {
                    goto lab_0x4149ef;
                } else {
                    // 0x4149cb
                    v83 = v77;
                    if (*v74 == 0) {
                        int64_t v88 = 1; // 0x4149e6
                        while (v88 != v86) {
                            int64_t v89 = v88; // 0x4149e4
                            v83 = v77;
                            if (*(int64_t *)(8 * v88 + v87) != v88) {
                                goto lab_0x414a00;
                            }
                            v88 = v89 + 1;
                        }
                        goto lab_0x4149ef;
                    } else {
                        goto lab_0x414a00;
                    }
                }
            }
        }
    }
  lab_0x4148b7:;
    int64_t v90 = function_40a780(v63, v64, (int32_t)v58, (int32_t)v66, v65); // 0x4148cb
    v62 = 16;
    v61 = v66;
    v60 = v63;
    v59 = v90;
    goto lab_0x4148d6;
  lab_0x4149ef:
    // 0x4149ef
    free(v74);
    *v76 = 0;
    v83 = v77;
    goto lab_0x414a00;
  lab_0x414c38:
    // 0x414c38
    if (*(int64_t *)(v73 + 152) != 0) {
        goto lab_0x414b43;
    } else {
        goto lab_0x414c46;
    }
  lab_0x414b43:;
    int64_t size4 = 24 * v95; // 0x414b47
    int64_t * mem9 = malloc((int32_t)size4); // 0x414b4b
    int64_t v161 = (int64_t)mem9; // 0x414b4b
    int64_t * v162 = (int64_t *)(v73 + 56); // 0x414b50
    *v162 = v161;
    if (mem9 == NULL) {
        // 0x415210
        result = 12;
        v67 = size4;
        goto lab_0x414e38;
    } else {
        if (v95 != 0) {
            int128_t v163 = __asm_pxor(v2, v2); // 0x414b78
            __asm_movups(*(int128_t *)mem9, v163);
            *(int64_t *)(v161 + 16) = 0;
            uint64_t v164 = *v97; // 0x414b8f
            int64_t v165 = 1; // 0x414b96
            int128_t v166 = v163; // 0x414b96
            int64_t v167 = v164; // 0x414b96
            if (v164 > 1) {
                int128_t v168 = v166;
                int128_t v169 = __asm_pxor(v168, v168); // 0x414b78
                int64_t v170 = v165 + 1; // 0x414b7c
                int64_t v171 = *v162 + 24 * v165; // 0x414b80
                __asm_movups(*(int128_t *)v171, v169);
                *(int64_t *)(v171 + 16) = 0;
                uint64_t v172 = *v97; // 0x414b8f
                v165 = v170;
                v167 = v172;
                while (v172 > v170) {
                    // 0x414b70
                    v168 = v169;
                    v169 = __asm_pxor(v168, v168);
                    v170 = v165 + 1;
                    v171 = *v162 + 24 * v165;
                    __asm_movups(*(int128_t *)v171, v169);
                    *(int64_t *)(v171 + 16) = 0;
                    v172 = *v97;
                    v165 = v170;
                    v167 = v172;
                }
            }
            int64_t v173 = v167;
            if (v173 != 0) {
                int64_t v174 = *v80; // 0x414baa
                int64_t v175 = 0;
                int64_t v176 = 24 * v175; // 0x414bba
                int64_t v177 = v176 + v174; // 0x414bc7
                int64_t v178 = *(int64_t *)(v177 + 8); // 0x414bca
                int64_t v179 = v173; // 0x414bd3
                int64_t v180 = v174; // 0x414bd3
                int64_t v181; // 0x4144d0
                int64_t v182; // 0x414c0e
                int64_t v183; // 0x414c17
                int64_t v184; // 0x414be0
                int64_t v185; // 0x414be9
                if (v178 >= 0 == (v178 != 0)) {
                    // 0x414bfd
                    v181 = *(int64_t *)(v177 + 16);
                    v185 = 0;
                    v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                    v183 = function_408490(v182, v175);
                    v93 = 12;
                    v94 = v182;
                    if ((char)v183 == 0) {
                        goto lab_0x414c28_2;
                    }
                    // 0x414be0
                    v184 = *v80;
                    v185++;
                    v181 = 0x100000000 * v181 >> 32;
                    while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                        // 0x414bfd
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_408490(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x414c28_2;
                        }
                        // 0x414be0
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                    }
                    // 0x415090
                    v179 = *v97;
                    v180 = v184;
                }
                // 0x415090
                v174 = v180;
                int64_t v186 = v179; // 0x41509b
                int64_t v187 = v175 + 1; // 0x415090
                while (v186 > v187) {
                    // 0x414bae
                    v175 = v187;
                    v176 = 24 * v175;
                    v177 = v176 + v174;
                    v178 = *(int64_t *)(v177 + 8);
                    v179 = v186;
                    v180 = v174;
                    if (v178 >= 0 == (v178 != 0)) {
                        // 0x414bfd
                        v181 = *(int64_t *)(v177 + 16);
                        v185 = 0;
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_408490(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x414c28_2;
                        }
                        // 0x414be0
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                        while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                            // 0x414bfd
                            v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                            v183 = function_408490(v182, v175);
                            v93 = 12;
                            v94 = v182;
                            if ((char)v183 == 0) {
                                goto lab_0x414c28_2;
                            }
                            // 0x414be0
                            v184 = *v80;
                            v185++;
                            v181 = 0x100000000 * v181 >> 32;
                        }
                        // 0x415090
                        v179 = *v97;
                        v180 = v184;
                    }
                    // 0x415090
                    v174 = v180;
                    v186 = v179;
                    v187 = v175 + 1;
                }
            }
        }
        goto lab_0x414c46;
    }
  lab_0x414c46:
    // 0x414c46
    result = 0;
    unsigned char result2 = *v23 / 4 & (char)(v125 == 0); // 0x414c60
    if (result2 != 0) {
        // 0x414f80
        if (*v158 == 0) {
            // 0x414f8b
            if (*(int64_t *)(v11 + 16) != 0) {
                // 0x414f98
                return result2;
            }
            int64_t v188 = *(int64_t *)(v11 + 152); // 0x415246
            *v22 = 1;
            *v23 = 2 * (char)(v188 >= 0 == (v188 != 0)) | *v23 & -7;
        }
    }
    int64_t v155 = &v68; // 0x414c6c
    int64_t v189 = *(int64_t *)(*(int64_t *)(*v75 + 24) + 56); // 0x414c73
    *(int64_t *)(v11 + 144) = v189;
    int64_t * v153 = (int64_t *)(v11 + 48); // 0x414c82
    int64_t v190 = function_40abb0(v155, *v153 + 24 * v189); // 0x414c8a
    int64_t v191 = v190 & 0xffffffff; // 0x414c8f
    int32_t v192 = v190; // 0x414c92
    v56 = v192;
    int64_t v154 = v155; // 0x414c98
    int64_t v156 = v191; // 0x414c98
    if (v192 != 0) {
        goto lab_0x414daf;
    } else {
        // 0x414c9e
        if (*(int64_t *)(v11 + 152) >= 1) {
            int64_t v152 = &v96;
            v142 = 0;
            while (true) {
              lab_0x414cd5_2:
                // 0x414cd5
                v140 = v142;
                int64_t v143 = *v14; // 0x414cda
                int64_t v144 = *(int64_t *)(v96 + 8 * v140); // 0x414cdd
                int64_t v145 = 16 * v144 + v143; // 0x414ce8
                if (*(char *)(v145 + 8) == 4) {
                    int64_t * v146 = (int64_t *)v145;
                    int64_t v147 = 0;
                    int64_t v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143; // 0x414d09
                    int64_t v149; // 0x414d1a
                    int64_t v150; // 0x414d30
                    int64_t v151; // 0x414d4f
                    if (*(char *)(v148 + 8) == 9) {
                        // 0x414d12
                        if (*(int64_t *)v148 == *v146) {
                            // 0x414d1a
                            v149 = *(int64_t *)(v11 + 40);
                            v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                            if (function_409b10(v78, v152, v150) != 0) {
                                goto lab_0x414cc8;
                            } else {
                                // 0x414d40
                                v151 = function_40a050(&v68, (int128_t *)(*v153 + 24 * v150));
                                if ((int32_t)v151 != 0) {
                                    // 0x4151d0
                                    v154 = v155;
                                    v156 = v151 & 0xffffffff;
                                    goto lab_0x414daf;
                                } else {
                                    // 0x414cd5
                                    v142 = 1;
                                    goto lab_0x414cd5_2;
                                }
                            }
                        }
                    }
                    int64_t v157 = v147 + 1; // 0x414cf8
                    while (v78 != v157) {
                        // 0x414d01
                        v147 = v157;
                        v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143;
                        if (*(char *)(v148 + 8) == 9) {
                            // 0x414d12
                            if (*(int64_t *)v148 == *v146) {
                                // 0x414d1a
                                v149 = *(int64_t *)(v11 + 40);
                                v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                                if (function_409b10(v78, v152, v150) != 0) {
                                    goto lab_0x414cc8;
                                } else {
                                    // 0x414d40
                                    v151 = function_40a050(&v68, (int128_t *)(*v153 + 24 * v150));
                                    if ((int32_t)v151 != 0) {
                                        // 0x4151d0
                                        v154 = v155;
                                        v156 = v151 & 0xffffffff;
                                        goto lab_0x414daf;
                                    } else {
                                        // 0x414cd5
                                        v142 = 1;
                                        goto lab_0x414cd5_2;
                                    }
                                }
                            }
                        }
                        // 0x414cf8
                        v157 = v147 + 1;
                    }
                }
                goto lab_0x414cc8;
            }
        }
      lab_0x414d70:;
        int64_t v193 = function_40adc0((int128_t *)&v56, v11, &v68, 0); // 0x414d7d
        *(int64_t *)(v11 + 72) = v193;
        if (v193 == 0) {
            goto lab_0x415028;
        } else {
            // 0x414d8f
            if (*(char *)(v193 + 104) < 0) {
                int64_t v194 = function_40adc0((int128_t *)&v56, v11, &v68, 1); // 0x414fd0
                int64_t * v195 = (int64_t *)(v11 + 80); // 0x414fe0
                *v195 = v194;
                int64_t v196 = function_40adc0((int128_t *)&v56, v11, &v68, 2); // 0x414fe9
                int64_t * v197 = (int64_t *)(v11 + 88); // 0x414ff9
                *v197 = v196;
                int64_t v198 = function_40adc0((int128_t *)&v56, v11, &v68, 6); // 0x415002
                *(int64_t *)(v11 + 96) = v198;
                if (*v195 == 0) {
                    goto lab_0x415028;
                } else {
                    // 0x415012
                    if (v198 != 0 == (*v197 != 0)) {
                        goto lab_0x414da5;
                    } else {
                        goto lab_0x415028;
                    }
                }
            } else {
                // 0x414d99
                *(int64_t *)(v11 + 96) = v193;
                *(int64_t *)(v11 + 88) = v193;
                *(int64_t *)(v11 + 80) = v193;
                goto lab_0x414da5;
            }
        }
    }
  lab_0x414daf:
    // 0x414daf
    result = v156;
    int64_t * v199 = (int64_t *)(v154 + 112); // 0x414db8
    int64_t v200 = *v199; // 0x414db8
    if (v200 != 0) {
        int64_t * v201 = (int64_t *)v200; // 0x414dc8
        int64_t v202 = *v201; // 0x414dc8
        free(v201);
        while (v202 != 0) {
            // 0x414dc8
            v201 = (int64_t *)v202;
            v202 = *v201;
            free(v201);
        }
    }
    // 0x414dd8
    *v199 = 0;
    int64_t * v203 = (int64_t *)(v154 + 32); // 0x414de1
    *(int32_t *)(v154 + 128) = 15;
    *(int64_t *)(v154 + 104) = 0;
    free((int64_t *)*v203);
    *v203 = 0;
    function_409740(&v124);
    if (result == 0) {
        // 0x414e1b
        return result;
    }
    goto lab_0x414e8e;
  lab_0x415028:
    // 0x415028
    v154 = v57;
    v156 = v56;
    goto lab_0x414daf;
  lab_0x414da5:
    // 0x414da5
    free((int64_t *)v96);
    v154 = v96;
    v156 = v191;
    goto lab_0x414daf;
}
// Address range: 0x415280 - 0x4152e7
int64_t function_415280(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    char * v2 = (char *)(v1 + 56); // 0x4152a0
    *v2 = *v2 & 111 | (char)(g64 / 0x200000) & 16 | -128;
    int64_t v3; // 0x415280
    int64_t v4 = function_4144d0(v1, a1, a2, g64, a1, v3); // 0x4152b5
    if ((int32_t)v4 == 0) {
        // 0x4152e0
        return 0;
    }
    int64_t v5 = *(int64_t *)((0x100000000 * v4 >> 29) + (int64_t)&g27); // 0x4152c7
    return (int64_t)dcgettext(NULL, (char *)(v5 + (int64_t)"Success"), 5);
}
// Address range: 0x4152f0 - 0x4152ff
int64_t function_4152f0(int64_t a1) {
    int64_t result = g64; // 0x4152f0
    g64 = a1;
    return result;
}
// Address range: 0x415300 - 0x4153c3
int64_t function_415300(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x415306
    *(int64_t *)v1 = 0;
    *(int64_t *)(v1 + 248) = 0;
    int64_t v2 = v1 + 8 & -8; // 0x41532a
    __asm_rep_stosq_memset((char *)v2, 0, (v1 + 256 - v2) / 8 % 0x20000000);
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x415343
    int64_t v4 = *v3; // 0x415343
    function_40ddb0(a1, v4 + 16, v4 + 24, v1);
    int64_t v5 = *(int64_t *)(a1 + 80); // 0x415355
    int64_t v6 = v5; // 0x41535f
    if (*v3 != v5) {
        // 0x415361
        function_40ddb0(a1, v5 + 16, v5 + 24, v1);
        v6 = *v3;
    }
    int64_t v7 = *(int64_t *)(a1 + 88); // 0x415379
    int64_t v8 = v6; // 0x415381
    if (v7 != v6) {
        // 0x415383
        function_40ddb0(a1, v7 + 16, v7 + 24, v1);
        v8 = *v3;
    }
    int64_t v9 = *(int64_t *)(a1 + 96); // 0x41539b
    if (v9 != v8) {
        // 0x4153a5
        function_40ddb0(a1, v9 + 16, v9 + 24, v1);
    }
    char * v10 = (char *)(a1 + 56); // 0x4153b8
    *v10 = *v10 | 8;
    return 0;
}
// Address range: 0x4153d0 - 0x41595b
int64_t function_4153d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4153d0
    if (a4 < 0 || a4 > a3) {
        // 0x4154ff
        return -1;
    }
    int64_t v1 = a5 + a4; // 0x4153d5
    int64_t v2 = a3; // 0x415411
    if (v1 > a3) {
        goto lab_0x41543c;
    } else {
        // 0x415417
        v2 = a3;
        if (a5 > -1 == v1 < a4) {
            goto lab_0x41543c;
        } else {
            if (v1 < 0) {
                goto lab_0x4156f8;
            } else {
                // 0x41542e
                v2 = v1;
                if (a5 >= 0 || v1 < a4) {
                    goto lab_0x41543c;
                } else {
                    goto lab_0x4156f8;
                }
            }
        }
    }
  lab_0x41543c:;
    char * v3 = (char *)(a1 + 56); // 0x41543c
    int64_t v4 = (int64_t)*v3; // 0x41543c
    int64_t v5 = v4; // 0x415452
    int64_t v6 = v2; // 0x415452
    if (v2 > a4) {
        // 0x415454
        v5 = v4;
        v6 = v2;
        if ((v4 & 8) == 0 == (*(int64_t *)(a1 + 32) != 0)) {
            // 0x415650
            function_415300(a1);
            v5 = (int64_t)*v3;
            v6 = v2;
        }
    }
    goto lab_0x415463;
  lab_0x415463:;
    int64_t size = 16; // 0x415465
    int64_t v7 = 0; // 0x415465
    int64_t v8 = 1; // 0x415465
    int64_t v9; // 0x4153d0
    if (a7 == 0 || (v5 & 16) != 0) {
        goto lab_0x415491;
    } else {
        uint64_t v10 = *(int64_t *)(a1 + 48); // 0x415477
        if ((v5 & 6) == 4) {
            int64_t v11 = *(int64_t *)a7; // 0x415610
            if (v11 > v10) {
                // 0x415483
                v9 = v10 + 1;
                goto lab_0x41548a;
            } else {
                // 0x41561d
                v9 = v11;
                size = 16;
                v7 = 0;
                v8 = 1;
                if (v11 >= 0 == (v11 != 0)) {
                    goto lab_0x41548a;
                } else {
                    goto lab_0x415491;
                }
            }
        } else {
            // 0x415483
            v9 = v10 + 1;
            goto lab_0x41548a;
        }
    }
  lab_0x415491:;
    int64_t * mem = malloc((int32_t)size); // 0x4154a0
    if (mem == NULL) {
        // 0x4154ff
        return -2;
    }
    uint64_t v12 = v8;
    int64_t v13 = (int64_t)mem; // 0x4154a0
    int64_t result = -1; // 0x4153d0
    int64_t v14; // 0x4153d0
    int64_t v15; // 0x4153d0
    int64_t v16; // 0x4153d0
    int64_t v17; // 0x4153d0
    int64_t v18; // 0x4153d0
    int64_t v19; // 0x4153d0
    int64_t v20; // 0x4153d0
    int64_t v21; // 0x4153d0
    int64_t v22; // 0x4153d0
    int64_t v23; // 0x4153d0
    int64_t v24; // 0x4153d0
    int64_t v25; // 0x4153d0
    int64_t v26; // 0x4153d0
    int64_t v27; // 0x4153d0
    int64_t v28; // 0x4153d0
    int64_t v29; // 0x4153d0
    int64_t v30; // 0x4153d0
    int64_t v31; // 0x4153d0
    int64_t v32; // 0x4153d0
    int64_t v33; // 0x4153d0
    int64_t v34; // 0x4153d0
    int64_t v35; // 0x4153d0
    int64_t v36; // 0x4153d0
    int64_t v37; // 0x4153d0
    int64_t v38; // 0x4153d0
    char * v39; // 0x415521
    switch ((int32_t)v40) {
        case 0: {
            // 0x415518
            v14 = v7;
            v36 = a2;
            v26 = a3;
            v31 = v6;
            v16 = v6;
            v21 = a6;
            if (v14 == 0) {
                goto lab_0x4155e8;
            } else {
                // 0x415521
                v39 = (char *)(a1 + 56);
                int64_t v41 = v12 + 1; // 0x415526
                unsigned char v42 = *v39 / 2 % 4;
                switch (v42) {
                    case 0: {
                        int32_t size2 = 8 * (int32_t)v41; // 0x4156a0
                        int64_t * mem2 = malloc(size2); // 0x4156a0
                        int64_t v43 = (int64_t)mem2; // 0x4156a0
                        *(int64_t *)(v14 + 8) = v43;
                        v35 = v41;
                        v25 = a3;
                        int64_t v44; // 0x4153d0
                        v30 = v44;
                        v15 = v44;
                        v20 = 0;
                        if (mem2 == NULL) {
                            goto lab_0x4155cd;
                        } else {
                            int64_t * mem3 = malloc(size2); // 0x4156c5
                            *(int64_t *)(v14 + 16) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x4157ba
                                free(mem2);
                                v35 = v41;
                                v25 = a3;
                                v30 = v43;
                                v15 = v44;
                                v20 = 0;
                                goto lab_0x4155cd;
                            } else {
                                // 0x4156e2
                                *(int64_t *)v14 = v41;
                                v34 = v41;
                                v24 = a3;
                                v29 = v43;
                                v19 = 1;
                                goto lab_0x415557;
                            }
                        }
                    }
                    case 1: {
                        int64_t * v45 = (int64_t *)v14; // 0x41573e
                        v34 = a2;
                        v24 = a3;
                        v29 = v6;
                        v19 = 1;
                        if (*v45 >= v41) {
                            goto lab_0x415557;
                        } else {
                            int64_t v46 = 8 * v41; // 0x415748
                            int64_t * v47 = (int64_t *)(v14 + 8); // 0x415750
                            int32_t v48 = v46; // 0x415767
                            int64_t * mem4 = realloc((int64_t *)*v47, v48); // 0x415767
                            v35 = v46;
                            v25 = 1;
                            v30 = v41;
                            v15 = v6;
                            v20 = 0;
                            if (mem4 == NULL) {
                                goto lab_0x4155cd;
                            } else {
                                int64_t * v49 = (int64_t *)(v14 + 16); // 0x415779
                                int64_t * mem5 = realloc((int64_t *)*v49, v48); // 0x415781
                                if (mem5 == NULL) {
                                    // 0x4157ca
                                    free(mem4);
                                    v35 = v46;
                                    v25 = 1;
                                    v30 = v41;
                                    v15 = v6;
                                    v20 = 0;
                                    goto lab_0x4155cd;
                                } else {
                                    // 0x415796
                                    *v47 = (int64_t)mem4;
                                    *v49 = (int64_t)mem5;
                                    *v45 = v41;
                                    v34 = v46;
                                    v24 = 1;
                                    v29 = v41;
                                    v19 = 1;
                                    goto lab_0x415557;
                                }
                            }
                        }
                    }
                    default: {
                        // 0x41553e
                        v38 = a2;
                        v28 = a3;
                        v33 = v6;
                        v18 = v6;
                        v23 = a6;
                        if (v42 != 2) {
                            goto lab_0x41580c;
                        } else {
                            // 0x415547
                            v34 = a2;
                            v24 = a3;
                            v29 = v6;
                            v19 = 2;
                            v37 = a2;
                            v27 = a3;
                            v32 = v6;
                            v17 = v6;
                            v22 = a6;
                            if (v12 > *(int64_t *)v14) {
                                goto lab_0x4157f3;
                            } else {
                                goto lab_0x415557;
                            }
                        }
                    }
                }
            }
        }
        case 1: {
            goto lab_0x4154f7;
        }
        default: {
            goto lab_0x4154f0;
        }
    }
  lab_0x4156f8:
    // 0x4156f8
    v5 = (int64_t)*(char *)(a1 + 56);
    v6 = 0;
    goto lab_0x415463;
  lab_0x4154f0:
    // 0x4154f0
    result = -2;
  lab_0x4154f7:
    // 0x4154f7
    free(mem);
    // 0x4154ff
    return result;
  lab_0x4155e8:;
    int64_t v50 = *mem; // 0x4155ed
    result = v50;
    if ((char)a8 == 0) {
        // 0x4154f7
        free(mem);
        // 0x4154ff
        return result;
    }
    if (v50 == a4) {
        // 0x4154f7
        free(mem);
        // 0x4154ff
        return *(int64_t *)(v13 + 8) - v50;
    }
    // 0x4157da
    __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 445, "re_search_stub");
    v37 = v36;
    v27 = v26;
    v32 = v31;
    v17 = v16;
    v22 = v21;
    goto lab_0x4157f3;
  lab_0x41548a:
    // 0x41548a
    size = 16 * v9;
    v7 = a7;
    v8 = v9;
    goto lab_0x415491;
  lab_0x4157f3:
    // 0x4157f3
    __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 506, "re_copy_regs");
    v38 = v37;
    v28 = v27;
    v33 = v32;
    v18 = v17;
    v23 = v22;
    goto lab_0x41580c;
  lab_0x41580c:
    // 0x41580c
    __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 504, "re_copy_regs");
    if ((v18 || v28) <= -1) {
        // 0x4154ff
        return -2;
    }
    int64_t size3 = v18 + 504; // 0x41587c
    if ((size3 & (v18 ^ -0x8000000000000000)) < 0) {
        // 0x4154ff
        return -2;
    }
    int64_t * v51 = NULL; // 0x415888
    int64_t v52 = (int64_t)"lib/regexec.c"; // 0x415888
    if (v18 != 0) {
        int64_t * mem6 = malloc((int32_t)size3); // 0x4158f2
        if (mem6 == NULL) {
            // 0x4154ff
            return -2;
        }
        int64_t v53 = (int64_t)mem6; // 0x4158f2
        memcpy(mem6, (int64_t *)"lib/regexec.c", 504);
        memcpy((int64_t *)(v53 + 504), (int64_t *)"re_copy_regs", (int32_t)v18);
        v51 = mem6;
        v52 = v53;
    }
    int64_t result2 = function_4153d0((int64_t)"regs_allocated == REGS_FIXED", v52, size3, v23, v38, v28, v33, a6 % 256); // 0x4158b3
    free(v51);
    // 0x4154ff
    return result2;
  lab_0x4155cd:
    // 0x4155cd
    *v39 = *v39 & -7 | 2 * (char)v20;
    v36 = v35;
    v26 = v25;
    v31 = v30;
    v16 = v15;
    v21 = v20;
    if (v20 == 0) {
        goto lab_0x4154f0;
    } else {
        goto lab_0x4155e8;
    }
  lab_0x415557:;
    int64_t v54 = v19;
    int64_t v55 = v29;
    int64_t v56 = v24;
    int64_t v57 = v34;
    int64_t v58 = 0; // 0x41555a
    int64_t v59 = v6; // 0x41555a
    if (v12 >= 1) {
        int64_t v60 = *(int64_t *)(v14 + 8); // 0x415560
        int64_t v61 = 0; // 0x415577
        int64_t v62 = 2 * v61; // 0x415580
        *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
        int64_t v63 = *(int64_t *)(v13 + 8 + v62); // 0x415589
        *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
        v61 += 8;
        v58 = v12;
        v59 = v60;
        while (v61 != 8 * v12) {
            // 0x415580
            v62 = 2 * v61;
            *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
            v63 = *(int64_t *)(v13 + 8 + v62);
            *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
            v61 += 8;
            v58 = v12;
            v59 = v60;
        }
    }
    int64_t v64 = v59;
    int64_t v65 = v58;
    int64_t * v66 = (int64_t *)v14; // 0x41559b
    v35 = v57;
    v25 = v56;
    v30 = v55;
    v15 = v64;
    v20 = v54;
    if (*v66 > v65) {
        int64_t v67 = v65 + 1; // 0x4155b8
        int64_t v68 = 8 * v65; // 0x4155bc
        *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
        *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
        v35 = v57;
        v25 = v56;
        v30 = v55;
        v15 = v64;
        v20 = v54;
        while (*v66 > v67) {
            int64_t v69 = v67;
            v67 = v69 + 1;
            v68 = 8 * v69;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
            v35 = v57;
            v25 = v56;
            v30 = v55;
            v15 = v64;
            v20 = v54;
        }
    }
    goto lab_0x4155cd;
}
// Address range: 0x415960 - 0x415a70
int64_t function_415960(int64_t a1, int64_t str, uint64_t a3) {
    // 0x415960
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t * mem = malloc(256); // 0x4159a5
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x4159aa
    *v1 = (int64_t)mem;
    if (mem == NULL) {
        // 0x415a60
        return 12;
    }
    int64_t v2 = (a3 % 2 == 0 ? 0x10102c6 : 0x3b2fc) | 0x200000 * a3 & 0x400000; // 0x4159c7
    int64_t v3 = (a3 & 4) != 0 ? v2 & 0x143b2be | 256 : v2;
    *(int64_t *)(a1 + 40) = 0;
    char * v4 = (char *)(a1 + 56); // 0x4159e2
    *v4 = ((a3 & 4) != 0 ? -128 : 0) | 2 * (char)a3 & 16 | *v4 & 111;
    int64_t v5; // 0x415960
    int64_t v6 = function_4144d0(a1, str, (int64_t)strlen((char *)str), v3, v5, v5); // 0x415a07
    int32_t v7 = v6; // 0x415a0e
    int64_t v8 = 8; // 0x415a11
    if (v7 != 16) {
        // 0x415a13
        v8 = v6 & 0xffffffff;
        if (v7 == 0) {
            // 0x415a17
            function_415300(a1);
            // 0x415a1f
            return v8 & 0xffffffff;
        }
    }
    // 0x415a4d
    free((int64_t *)*v1);
    *v1 = 0;
    // 0x415a1f
    return v8 & 0xffffffff;
}
// Address range: 0x415a70 - 0x415aed
int64_t function_415a70(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = *(int64_t *)((0x100000000 * a1 >> 29) + (int64_t)&g27); // 0x415a91
    char * str = dcgettext(NULL, (char *)(v1 + (int64_t)"Success"), 5); // 0x415aa2
    int64_t result = (int64_t)strlen(str) + 1; // 0x415ab2
    if (a4 == 0) {
        // 0x415ace
        return result;
    }
    int64_t v2 = result; // 0x415ac1
    if (result > a4) {
        // 0x415ae0
        v2 = a4 - 1;
        *(char *)(v2 + a3) = 0;
    }
    // 0x415ac3
    memcpy((int64_t *)a3, (int64_t *)str, (int32_t)v2);
    // 0x415ace
    return result;
}
// Address range: 0x415af0 - 0x415b34
int64_t function_415af0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    if (a1 != NULL) {
        // 0x415afc
        function_40d0f0(v1);
    }
    // 0x415b01
    *a1 = 0;
    int64_t * v2 = (int64_t *)(v1 + 32); // 0x415b08
    *(int64_t *)(v1 + 8) = 0;
    free((int64_t *)*v2);
    *v2 = 0;
    int64_t * v3 = (int64_t *)(v1 + 40); // 0x415b21
    free((int64_t *)*v3);
    *v3 = 0;
    return &g67;
}
// Address range: 0x415b40 - 0x415bd6
int64_t function_415b40(int64_t a1, int64_t str, int64_t a3, int64_t a4, int64_t a5) {
    if ((a5 & 0xfffffff8) != 0) {
        // 0x415bd0
        return 2;
    }
    int64_t v1; // 0x415b40
    int64_t v2; // 0x415b40
    int64_t v3; // 0x415b40
    int64_t v4; // 0x415b40
    int64_t v5; // 0x415b40
    int64_t v6; // 0x415b40
    if ((a5 & 4) != 0) {
        int64_t v7 = *(int64_t *)(a4 + 8); // 0x415bb3
        v5 = 0;
        v1 = a4;
        v3 = v7;
        v6 = 0;
        v2 = a4;
        v4 = v7;
        if ((*(char *)(a1 + 56) & 16) != 0) {
            goto lab_0x415b86;
        } else {
            goto lab_0x415bbd;
        }
    } else {
        int64_t len = strlen((char *)str); // 0x415b6d
        v5 = 0;
        v1 = 0;
        v3 = len;
        v6 = 0;
        v2 = 0;
        v4 = len;
        if ((*(char *)(a1 + 56) & 16) == 0) {
            goto lab_0x415bbd;
        } else {
            goto lab_0x415b86;
        }
    }
  lab_0x415b86:;
    int64_t v8 = v3;
    return (int32_t)function_410420(a1, str, v8, v1, v8, v8, v6, v5, a5 & 0xffffffff) != 0;
  lab_0x415bbd:
    // 0x415bbd
    v5 = a4;
    v1 = v2;
    v3 = v4;
    v6 = a3;
    goto lab_0x415b86;
}
// Address range: 0x415be0 - 0x415bf8
int64_t function_415be0(int64_t * a1, int64_t a2, int64_t a3, int32_t a4, int64_t * a5) {
    // 0x415be0
    return function_4153d0((int64_t)a1, a2, a3, (int64_t)a4, 0, a3, (int64_t)a5, 1);
}
// Address range: 0x415c00 - 0x415c15
int64_t function_415c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x415c00
    return function_4153d0(a1, a2, a3, a4, a5, a3, a6, 0);
}
// Address range: 0x415c20 - 0x415c3a
int64_t function_415c20(int64_t a1, int64_t a2) {
    // 0x415c20
    int64_t result; // 0x415c20
    return result;
}
// Address range: 0x415c40 - 0x415c5c
int64_t function_415c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x415c40
    int64_t result; // 0x415c40
    return result;
}
// Address range: 0x415c60 - 0x415c9c
int64_t function_415c60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 56);
    char v2 = *v1 & -7;
    if (a3 == 0) {
        // 0x415c80
        *v1 = v2;
        *(int64_t *)a2 = 0;
        *(int64_t *)(a2 + 16) = 0;
        *(int64_t *)(a2 + 8) = 0;
        int64_t result; // 0x415c60
        return result;
    }
    unsigned char result2 = v2 | 2;
    *v1 = result2;
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 8) = a4;
    *(int64_t *)(a2 + 16) = a5;
    return result2;
}
// Address range: 0x415ca0 - 0x415cfd
int64_t function_415ca0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x415ca7
    int64_t v2; // 0x415ca0
    int64_t result = function_4162d0(a1, v2); // 0x415cb8
    if ((v2 & 32) != 0) {
        // 0x415ce0
        if ((int32_t)result == 0) {
            // 0x415ce4
            *__errno_location() = 0;
        }
        // 0x415cda
        return 0xffffffff;
    }
    // 0x415cc1
    if ((int32_t)result == 0) {
        // 0x415cda
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x415cc8
    if (v1 == 0) {
        // 0x415cca
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x415cda
    return result2;
}
// Address range: 0x415d00 - 0x415d5e
int64_t function_415d00(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x415d06
    if (locale == NULL) {
        // 0x415d33
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x415d06
    bool v2; // 0x415d00
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g29; // 0x415d00
    int64_t v5 = v1; // 0x415d00
    int64_t v6 = 2; // 0x415d25
    unsigned char v7 = *(char *)v5; // 0x415d25
    char v8 = *(char *)v4; // 0x415d25
    char v9 = v8; // 0x415d25
    bool v10 = false; // 0x415d25
    while (v7 == v8) {
        // 0x415d18
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
    int64_t v12 = (int64_t)"POSIX"; // 0x415d31
    int64_t v13 = v1; // 0x415d31
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x415d33
        return 0;
    }
    int64_t v14 = 6; // 0x415d31
    unsigned char v15 = *(char *)v13; // 0x415d4d
    char v16 = *(char *)v12; // 0x415d4d
    char v17 = v16; // 0x415d4d
    bool v18 = false; // 0x415d4d
    while (v15 == v16) {
        // 0x415d40
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
// Address range: 0x415d60 - 0x4162c2
int64_t function_415d60(void) {
    char * v1 = nl_langinfo(14); // 0x415d76
    char * v2 = g62; // 0x415d7b
    char * v3; // 0x415d60
    int64_t v4; // 0x415d60
    int64_t v5; // 0x415d60
    int64_t v6; // 0x415d60
    int64_t v7; // 0x415d60
    int32_t size; // 0x415d60
    int32_t size2; // 0x415d60
    int32_t len; // 0x415e32
    int64_t v8; // 0x415e32
    char * env_val; // 0x415e1d
    if (v2 == NULL) {
        // 0x415e18
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x415e85;
        } else {
            // 0x415e2a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x415e85;
            } else {
                // 0x415e2f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x415e1d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4162b5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x415e85;
                    } else {
                        // 0x416229
                        size2 = len + 14;
                        goto lab_0x415e4b;
                    }
                } else {
                    goto lab_0x415e4b;
                }
            }
        }
    } else {
        // 0x415d60
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x415d9a;
    }
  lab_0x4160cc:;
    // 0x4160cc
    struct _IO_FILE * stream; // 0x415f0b
    int32_t v10 = __uflow(stream); // 0x4160cf
    int64_t v11; // 0x415d60
    int64_t v12 = v11; // 0x4160d9
    int64_t v13; // 0x415d60
    int64_t v14 = v13; // 0x4160d9
    int32_t v15 = v10; // 0x4160d9
    int64_t v16; // 0x415d60
    int64_t v17 = v16; // 0x4160d9
    int64_t v18 = v11; // 0x4160d9
    int64_t v19 = v13; // 0x4160d9
    int64_t v20 = v16; // 0x4160d9
    if (v10 == -1) {
        // break -> 0x4160df
        goto lab_0x4160df;
    }
    goto lab_0x415f59;
  lab_0x415f4e:;
    // 0x415f4e
    int64_t v90; // 0x415d60
    int64_t * v32; // 0x415f40
    *v32 = v90 + 1;
    int64_t v89; // 0x415d60
    v12 = v89;
    int64_t v91; // 0x415d60
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x415d60
    v17 = v92;
    goto lab_0x415f59;
  lab_0x415f59:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x415d60
    int32_t v25; // bp-120, 0x415d60
    int32_t v26; // bp-184, 0x415d60
    int64_t v27; // 0x415f0b
    int64_t v28; // 0x415f28
    int64_t v29; // 0x415f2d
    int64_t * v30; // 0x415f44
    switch (c) {
        case 32: {
            goto lab_0x415f40;
        }
        case 10: {
            goto lab_0x415f40;
        }
        case 9: {
            goto lab_0x415f40;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x416131
            int32_t v33; // 0x415d60
            char v34; // 0x415d60
            int32_t v35; // 0x41613e
            if (v31 < *v30) {
                // 0x416110
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x41613b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x416131
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x416110
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x41613b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x416120
                v36 = v33;
            }
            // 0x41620f
            if (v36 == -1) {
                // break -> 0x4160df
                break;
            }
            goto lab_0x415f40;
        }
        default: {
            // 0x415f6f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4160df
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x415f98
            int64_t v39 = v37 + 4; // 0x415f9a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x415fa6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x415fa8
            while (v41 == 0) {
                // 0x415f98
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x415fc6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x415fd2
            int64_t v45 = v43 + 4; // 0x415fd4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x415fe0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x415fe2
            while (v47 == 0) {
                // 0x415fd2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x415fcf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x415ff8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x416008
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x41600c
            int64_t v52 = v51 + v48; // 0x416015
            int64_t * mem; // 0x415d60
            int64_t v53; // 0x415d60
            int64_t v54; // 0x415d60
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x41614b
                int64_t v56 = v55 + 3; // 0x416157
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x416031
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x416040
            if (mem == NULL) {
                // 0x41626c
                free((int64_t *)v21);
                function_4162d0(v27, v53);
                v24 = (int64_t)&g24;
                goto lab_0x415ee4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x416058
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x416062
            uint32_t v62 = (int32_t)v59; // 0x416065
            int64_t v63; // 0x415d60
            if (v62 >= 8) {
                // 0x416174
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x41618e
                int64_t v66 = v61 - v65; // 0x416192
                uint32_t v67 = (int32_t)(v66 + v59); // 0x41619d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4161ae
                    int64_t v70 = v69 & 0xffffffff; // 0x4161ae
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4161ab
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x41623f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x416077
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x41607b
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
            int64_t v73 = v51 + 1; // 0x41608b
            int64_t v74 = v60 - 1; // 0x41608f
            uint32_t v75 = (int32_t)v73; // 0x416094
            int64_t v76; // 0x415d60
            if (v75 >= 8) {
                // 0x4161c2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4161cc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4161dc
                int64_t v80 = v74 - v79; // 0x4161e0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4161eb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4161fb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4161f9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x416256
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x41625e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4160a6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4160aa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4162a3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4160be
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x415f4e;
            } else {
                goto lab_0x4160cc;
            }
        }
    }
  lab_0x415f40:;
    int64_t v93 = v23; // 0x415d60
    int64_t v94 = v22; // 0x415d60
    int64_t v95 = v21; // 0x415d60
    goto lab_0x415f40_2;
  lab_0x415e85:;
    int64_t * mem3 = malloc(size); // 0x415e85
    int64_t v97 = (int64_t)&g24; // 0x415e90
    int64_t v98; // 0x415d60
    int64_t path; // 0x415d60
    if (mem3 == NULL) {
        goto lab_0x415e62;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x415e85
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x415ea6;
    }
  lab_0x415d9a:;
    int64_t str = v1 == NULL ? (int64_t)&g24 : (int64_t)v1; // 0x415d8d
    char v100 = *v3; // 0x415d9a
    int64_t v101; // 0x415d60
    if (v100 == 0) {
        // 0x415df4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x415d60
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x415d60
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x415de0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x415de7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x415db0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x415dbd
        char v107 = *(char *)v106; // 0x415dc2
        v102 = v107;
        if (v107 == 0) {
            // 0x415df4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x415dcb
    v104 = v103 + 1;
  lab_0x415de7:
    // 0x415df4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x415e62:;
    char * v108 = (char *)v97;
    g62 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x415d9a;
  lab_0x415ea6:;
    int64_t v109 = v98 + path; // 0x415ea6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x415ed2
    v24 = (int64_t)&g24;
    if (fd >= 0) {
        // 0x415f01
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x416232
            close(fd);
            v24 = (int64_t)&g24;
        } else {
            // 0x415f25
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x415f40_2:;
                uint64_t v96 = *v32; // 0x415f40
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4160cc;
                } else {
                    goto lab_0x415f4e;
                }
            }
          lab_0x4160df:
            // 0x4160df
            function_4162d0(v27, v19);
            v24 = (int64_t)&g24;
            if (v18 != 0) {
                // 0x4160fe
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x415ee4;
  lab_0x415e4b:;
    int64_t * mem4 = malloc(size2); // 0x415e4b
    v97 = (int64_t)&g24;
    if (mem4 != NULL) {
        // 0x415ef1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x415ea6;
    } else {
        goto lab_0x415e62;
    }
  lab_0x415ee4:
    // 0x415ee4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x415e62;
}
// Address range: 0x4162d0 - 0x41634b
int64_t function_4162d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4162d7
    if (fileno(stream) < 0) {
        // 0x416337
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4162ea
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x41631b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x416337
            return fclose(stream);
        }
    }
    // 0x4162ec
    if ((int32_t)function_416350(a1, v1) == 0) {
        // 0x416337
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4162f8
    int32_t v3 = *v2; // 0x416300
    int64_t result = fclose(stream); // 0x41630e
    if (v3 != 0) {
        // 0x416340
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x416310
    return result;
}
// Address range: 0x416350 - 0x416390
int64_t function_416350(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x41636a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x41636a
        return fflush(stream);
    }
    // 0x416378
    function_416390(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x416390 - 0x4163e7
int64_t function_416390(int64_t stream, int32_t offset, int64_t whence) {
    // 0x416390
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x41639a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4163cb
    int64_t result = -1; // 0x4163d4
    if (v1 != -1) {
        // 0x4163d6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4163e2
    return result;
}
// Address range: 0x4163f0 - 0x41644d
int64_t function_4163f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4163f0
    return function_401720();
}
// Address range: 0x416450 - 0x416451
int64_t function_416450(void) {
    // 0x416450
    int64_t result; // 0x416450
    return result;
}
// Address range: 0x416460 - 0x416478
int64_t function_416460(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416460
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g34);
}
// Address range: 0x416478 - 0x416498
int64_t function_416478(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g30; // 0x416482
    while (*(int64_t *)v1 != -1) {
        // 0x416483
        v1 -= 8;
    }
    // 0x416494
    return result;
}
