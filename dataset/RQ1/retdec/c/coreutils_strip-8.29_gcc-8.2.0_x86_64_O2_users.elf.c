// Address range: 0x4017b0 - 0x4017b5
int64_t function_4017b0(void) {
    // 0x4017b0
    abort();
    // UNREACHABLE
}
// Address range: 0x4017b5 - 0x4017ba
int64_t function_4017b5(void) {
    // 0x4017b5
    abort();
    // UNREACHABLE
}
// Address range: 0x4017ba - 0x4017bf
int64_t function_4017ba(void) {
    // 0x4017ba
    abort();
    // UNREACHABLE
}
// Address range: 0x4017bf - 0x4017c4
int64_t function_4017bf(void) {
    // 0x4017bf
    abort();
    // UNREACHABLE
}
// Address range: 0x4017c4 - 0x4017c9
int64_t function_4017c4(void) {
    // 0x4017c4
    abort();
    // UNREACHABLE
}
// Address range: 0x4017c9 - 0x4017ce
int64_t function_4017c9(void) {
    // 0x4017c9
    abort();
    // UNREACHABLE
}
// Address range: 0x4017d0 - 0x4018d7
int64_t function_4017d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x4017d5
    function_402060(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x4017d0
    function_405cf0(0x401eb0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_401f50(v1, a2, "users", "GNU coreutils", (int64_t)g19, 0x401b90);
    int64_t v3 = function_405220(v1, a2, (int64_t *)&g12, &g2, 0, 0x401b90); // 0x40185e
    if ((int32_t)v3 != -1) {
        // 0x4018cd
        function_401b90(1);
        // UNREACHABLE
    }
    int32_t v4 = *(int32_t *)0x60925c; // 0x401868
    int32_t v5 = (int32_t)a1 - v4; // 0x40186f
    if (v5 == 0) {
        // 0x40188d
        function_4019d0((int64_t)"/var/run/utmp", 1);
        // 0x401884
        return 0;
    }
    int64_t v6 = 8 * (int64_t)v4 + a2;
    if (v5 == 1) {
        // 0x401878
        function_4019d0(*(int64_t *)v6, 0);
        // 0x401884
        return 0;
    }
    // 0x40189e
    function_403c80(*(int64_t *)(v6 + 8));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x4018cd
    function_401b90(1);
    // UNREACHABLE
}
// Address range: 0x4018e0 - 0x40190b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4018e0
    int64_t v1; // 0x4018e0
    __libc_start_main(0x4017d0, (int32_t)a4, (char **)&v1, (void (*)())0x405c80, (void (*)())0x405ce0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40190b - 0x40192a
int64_t function_40190b(void) {
    // 0x40190b
    return &g29;
}
// Address range: 0x40192a - 0x401961
int64_t function_40192a(void) {
    // 0x40192a
    return 0;
}
// Address range: 0x401961 - 0x4019b8
int64_t function_401961(void) {
    // 0x401961
    if (g33 != 0) {
        // 0x4019b7
        int64_t result; // 0x401961
        return result;
    }
    int64_t v1 = g34; // 0x401994
    int64_t result2; // 0x4019a6
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4019a6
        result2 = function_40190b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401996
        v1++;
    }
    // 0x40198a
    g34 = v1;
    // 0x4019a6
    result2 = function_40190b();
    g33 = 1;
    return result2;
}
// Address range: 0x4019b8 - 0x4019bd
int64_t function_4019b8(void) {
    // 0x4019b8
    return function_40192a();
}
// Address range: 0x4019c0 - 0x4019cb
int64_t function_4019c0(int64_t str, int64_t str2) {
    // 0x4019c0
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x4019d0 - 0x401b82
int64_t function_4019d0(int64_t a1, uint32_t a2) {
    // 0x4019d0
    int64_t v1; // bp-64, 0x4019d0
    int32_t v2; // bp-72, 0x4019d0
    int64_t v3 = function_405380(a1, (int64_t *)&v2, &v1, (int64_t)a2); // 0x4019eb
    if ((int32_t)v3 != 0) {
        // 0x401b50
        error(1, *__errno_location(), "%s", (char *)function_403b00(0, 3, a1));
        // 0x401b7d
        function_404490(1);
        // UNREACHABLE
    }
    int64_t v4 = v2; // 0x4019f8
    int64_t v5 = 8 * v4; // 0x401a0e
    if (v2 < 0) {
        // 0x401b7d
        function_404490(v5);
        // UNREACHABLE
    }
    int64_t v6 = function_404240(v5); // 0x401a24
    int64_t v7 = v4; // 0x401a33
    if (v2 == 0) {
        int64_t * base = (int64_t *)v6;
        qsort(base, 0, 8, (int32_t (*)(int64_t *, int64_t *))0x4019c0);
        // 0x401af2
        free(base);
        free((int64_t *)v1);
        return &g49;
    }
    int64_t v8 = 0;
    int64_t v9 = v8; // 0x401a45
    if (*(char *)(v1 + 44) != 0) {
        // 0x401a47
        v9 = v8;
        if (*(int16_t *)v1 == 7) {
            // 0x401b18
            *(int64_t *)(8 * v8 + v6) = function_405320(v1);
            v9 = v8 + 1;
        }
    }
    // 0x401a53
    v7--;
    int64_t nmemb = v9;
    int64_t v10 = v1 + 384; // 0x401a62
    while (v7 != 0) {
        int64_t v11 = v10;
        v8 = nmemb;
        v9 = v8;
        if (*(char *)(v11 + 44) != 0) {
            // 0x401a47
            v9 = v8;
            if (*(int16_t *)v11 == 7) {
                // 0x401b18
                *(int64_t *)(8 * v8 + v6) = function_405320(v11);
                v9 = v8 + 1;
            }
        }
        // 0x401a53
        v7--;
        nmemb = v9;
        v10 = v11 + 384;
    }
    int64_t * base2 = (int64_t *)v6;
    qsort(base2, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))0x4019c0);
    if (nmemb == 0) {
        // 0x401af2
        free(base2);
        free((int64_t *)v1);
        return &g49;
    }
    uint64_t v12 = nmemb - 1; // 0x401a7e
    uint64_t v13 = 0;
    fputs_unlocked((char *)*(int64_t *)(8 * v13 + v6), g30);
    int64_t v14 = (int64_t)g30; // 0x401aac
    int64_t * v15 = (int64_t *)(v14 + 40); // 0x401abb
    uint64_t v16 = *v15; // 0x401abb
    if (v16 >= *(int64_t *)(v14 + 48)) {
        // 0x401b30
        __overflow(g30, v13 < v12 ? 32 : 10);
    } else {
        // 0x401ac5
        *v15 = v16 + 1;
        *(char *)v16 = v13 < v12 ? 32 : 10;
    }
    int64_t v17 = v13 + 1; // 0x401ad0
    while (v17 != nmemb) {
        // 0x401a88
        v13 = v17;
        fputs_unlocked((char *)*(int64_t *)(8 * v13 + v6), g30);
        v14 = (int64_t)g30;
        v15 = (int64_t *)(v14 + 40);
        v16 = *v15;
        if (v16 >= *(int64_t *)(v14 + 48)) {
            // 0x401b30
            __overflow(g30, v13 < v12 ? 32 : 10);
        } else {
            // 0x401ac5
            *v15 = v16 + 1;
            *(char *)v16 = v13 < v12 ? 32 : 10;
        }
        // 0x401ad0
        v17 = v13 + 1;
    }
    int64_t v18 = v6 + 8; // 0x401ae4
    free((int64_t *)*(int64_t *)v6);
    while (v18 != 8 * v17 + v6) {
        int64_t v19 = v18;
        v18 = v19 + 8;
        free((int64_t *)*(int64_t *)v19);
    }
    // 0x401af2
    free(base2);
    free((int64_t *)v1);
    return &g49;
}
// Address range: 0x401b90 - 0x401e85
int64_t function_401b90(int64_t a1) {
    int32_t status = a1; // 0x401ba6
    if (status != 0) {
        // 0x401baa
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401bcf
        exit(status);
        // UNREACHABLE
    }
    // 0x401bd6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]\n", 5));
    __printf_chk(1, dcgettext(NULL, "Output who is currently logged in according to FILE.\nIf FILE is not specified, use %s.  %s as FILE is common.\n\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x401c64
    bool v2; // 0x401b90
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401ce8
    int64_t v6 = *(int64_t *)v5; // 0x401cec
    int64_t v7 = 6; // 0x401cf2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"users";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401cfe
        char v11 = *(char *)v9; // 0x401cfe
        char v12 = v11; // 0x401cfe
        bool v13 = false; // 0x401cfe
        while (v10 == v11) {
            // 0x401cf4
            v7--;
            int64_t v14 = v9 + v3; // 0x401cfe
            int64_t v15 = v8 + v3; // 0x401cfe
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
            // break -> 0x401d0a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x401d0a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401e1c;
        } else {
            // 0x401e06
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e5b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401d6c;
            } else {
                goto lab_0x401e1c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401d6c;
        } else {
            // 0x401d52
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e5b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401d6c;
            } else {
                goto lab_0x401d6c;
            }
        }
    }
  lab_0x401e1c:
    // 0x401e1c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401dac
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401bcf
    exit(status);
    // UNREACHABLE
  lab_0x401d6c:
    // 0x401d6c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401dac
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401bcf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401e90 - 0x401e98
int64_t function_401e90(int64_t a1) {
    // 0x401e90
    g36 = a1;
    int64_t result; // 0x401e90
    return result;
}
// Address range: 0x401ea0 - 0x401ea8
int64_t function_401ea0(int64_t a1) {
    // 0x401ea0
    g35 = a1;
    int64_t result; // 0x401ea0
    return result;
}
// Address range: 0x401eb0 - 0x401f4e
int64_t function_401eb0(void) {
    // 0x401eb0
    int64_t v1; // 0x401eb0
    if ((int32_t)v1 == 0) {
        // 0x401eec
        int64_t result; // 0x401eb0
        return result;
    }
    int32_t * err_num = __errno_location(); // 0x401ec6
    if (g35 != 0) {
        // 0x401ed7
        if (*err_num == 32) {
            int64_t result2 = (int64_t)err_num; // 0x401ec6
            if ((int32_t)result2 == 0) {
                // 0x401eec
                return result2;
            }
            // 0x401f2e
            _exit(g20);
            // UNREACHABLE
        }
    }
    char * v2 = dcgettext(NULL, "write error", 5); // 0x401eff
    if (g36 == 0) {
        // 0x401f39
        error(0, *err_num, "%s", v2);
    } else {
        // 0x401f13
        error(0, *err_num, "%s: %s", (char *)function_403ad0((int64_t)g36), v2);
    }
    // 0x401f2e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401f50 - 0x402052
int64_t function_401f50(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x401f50
    int64_t v1; // 0x401f50
    if ((char)v1 != 0) {
        // 0x401f63
        int128_t v2; // 0x401f50
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x401f9a
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x401faf
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x401f50
        return result;
    }
    int64_t result2 = function_405220(a1, a2, &g3, (int64_t *)&g4, 0, a6); // 0x401fe9
    int32_t v4 = result2; // 0x401fee
    switch (v4) {
        default: {
            // 0x401ff8
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x40201a
                function_4040a0((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x401faf
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
}
// Address range: 0x402060 - 0x4020f9
int64_t function_402060(int64_t str) {
    // 0x402060
    if (str == 0) {
        // 0x4020d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40206e
    int64_t result = (int64_t)found_char_pos; // 0x40206e
    if (found_char_pos == NULL) {
        // 0x4020c9
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402078
    if (v1 - str < 7) {
        // 0x4020c9
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x402088
    bool v2; // 0x402060
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402060
    int64_t v5 = result - 6; // 0x402060
    int64_t v6 = 7; // 0x402096
    unsigned char v7 = *(char *)v5; // 0x402096
    char v8 = *(char *)v4; // 0x402096
    char v9 = v8; // 0x402096
    bool v10 = false; // 0x402096
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
    int64_t v12 = (int64_t)"lt-"; // 0x4020a0
    int64_t v13 = v1; // 0x4020a0
    int64_t v14 = 3; // 0x4020a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4020c9
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4020b2
    char v16 = *(char *)v12; // 0x4020b2
    char v17 = v16; // 0x4020b2
    bool v18 = false; // 0x4020b2
    while (v15 == v16) {
        // 0x4020a2
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
    int64_t v20 = v1; // 0x4020bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4020be
        v20 = result + 4;
        g29 = v20;
    }
    // 0x4020c9
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x402100 - 0x4021f2
int64_t function_402100(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402114
    int64_t result = (int64_t)v1; // 0x402114
    if (result != a1) {
        // 0x402121
        return result;
    }
    int64_t v2 = function_4055f0(); // 0x402130
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4021e6
    if (v3 == 85) {
        // 0x402140
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4021d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x40216e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x40217b
        // 0x402121
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4021d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x4021bd
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x4021ca
    // 0x402121
    return result4;
}
// Address range: 0x402200 - 0x402257
int64_t function_402200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402200
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402248
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402257 - 0x403421
int64_t function_402257(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4022a1
    int64_t v3 = 0; // 0x4022a1
    int64_t v4; // 0x402257
    int64_t v5; // 0x402257
    int64_t v6; // 0x402257
    int64_t v7; // 0x402257
    int64_t v8; // 0x402257
    int64_t v9; // 0x402257
    int64_t v10; // 0x402257
    int64_t v11; // 0x402257
    int64_t v12; // 0x402257
    int64_t v13; // 0x402257
    int64_t v14; // 0x402257
    int64_t v15; // 0x402257
    int64_t v16; // 0x402257
    int64_t v17; // 0x402257
    int64_t v18; // 0x402257
    int64_t result; // 0x402257
    int64_t v19; // 0x402257
    int32_t wc; // bp+132, 0x402257
    int64_t ps; // bp+136, 0x402257
    char v20; // 0x402810
    int64_t v21; // 0x402810
    int64_t v22; // 0x402bb8
    int64_t v23; // 0x402257
    int64_t v24; // 0x402bd7
    int32_t v25; // 0x402257
    while (true) {
      lab_0x4022a8_2:
        // 0x4022a8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402257
        int64_t v27; // 0x4022dc
        while (true) {
          lab_0x4022a8:
            // 0x4022a8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4022b3
            if (v15 == -1) {
                // 0x4022b5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4022c3
            if (v28) {
                // break (via goto) -> 0x402a28
                goto lab_0x402a28;
            }
            // 0x4022cc
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
                    // 0x4028bb
                    if (v25 % 2 == 0) {
                        goto lab_0x402401;
                    }
                    // 0x402cdd
                    v26 = v5 + 1;
                    goto lab_0x4022a8;
                }
                case 7: {
                    goto lab_0x402401;
                }
                case 8: {
                    goto lab_0x402401;
                }
                case 9: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402401;
                }
                case 12: {
                    goto lab_0x402401;
                }
                case 13: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4023cd;
                }
                case 36: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402401;
                }
                case 38: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402401;
                }
                case 44: {
                    goto lab_0x402401;
                }
                case 45: {
                    goto lab_0x402401;
                }
                case 46: {
                    goto lab_0x402401;
                }
                case 47: {
                    goto lab_0x402401;
                }
                case 48: {
                    goto lab_0x402401;
                }
                case 49: {
                    goto lab_0x402401;
                }
                case 50: {
                    goto lab_0x402401;
                }
                case 51: {
                    goto lab_0x402401;
                }
                case 52: {
                    goto lab_0x402401;
                }
                case 53: {
                    goto lab_0x402401;
                }
                case 54: {
                    goto lab_0x402401;
                }
                case 55: {
                    goto lab_0x402401;
                }
                case 56: {
                    goto lab_0x402401;
                }
                case 57: {
                    goto lab_0x402401;
                }
                case 58: {
                    goto lab_0x402401;
                }
                case 59: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402401;
                }
                case 66: {
                    goto lab_0x402401;
                }
                case 67: {
                    goto lab_0x402401;
                }
                case 68: {
                    goto lab_0x402401;
                }
                case 69: {
                    goto lab_0x402401;
                }
                case 70: {
                    goto lab_0x402401;
                }
                case 71: {
                    goto lab_0x402401;
                }
                case 72: {
                    goto lab_0x402401;
                }
                case 73: {
                    goto lab_0x402401;
                }
                case 74: {
                    goto lab_0x402401;
                }
                case 75: {
                    goto lab_0x402401;
                }
                case 76: {
                    goto lab_0x402401;
                }
                case 77: {
                    goto lab_0x402401;
                }
                case 78: {
                    goto lab_0x402401;
                }
                case 79: {
                    goto lab_0x402401;
                }
                case 80: {
                    goto lab_0x402401;
                }
                case 81: {
                    goto lab_0x402401;
                }
                case 82: {
                    goto lab_0x402401;
                }
                case 83: {
                    goto lab_0x402401;
                }
                case 84: {
                    goto lab_0x402401;
                }
                case 85: {
                    goto lab_0x402401;
                }
                case 86: {
                    goto lab_0x402401;
                }
                case 87: {
                    goto lab_0x402401;
                }
                case 88: {
                    goto lab_0x402401;
                }
                case 89: {
                    goto lab_0x402401;
                }
                case 90: {
                    goto lab_0x402401;
                }
                case 91: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402401;
                }
                case 94: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402401;
                }
                case 96: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402401;
                }
                case 98: {
                    goto lab_0x402401;
                }
                case 99: {
                    goto lab_0x402401;
                }
                case 100: {
                    goto lab_0x402401;
                }
                case 101: {
                    goto lab_0x402401;
                }
                case 102: {
                    goto lab_0x402401;
                }
                case 103: {
                    goto lab_0x402401;
                }
                case 104: {
                    goto lab_0x402401;
                }
                case 105: {
                    goto lab_0x402401;
                }
                case 106: {
                    goto lab_0x402401;
                }
                case 107: {
                    goto lab_0x402401;
                }
                case 108: {
                    goto lab_0x402401;
                }
                case 109: {
                    goto lab_0x402401;
                }
                case 110: {
                    goto lab_0x402401;
                }
                case 111: {
                    goto lab_0x402401;
                }
                case 112: {
                    goto lab_0x402401;
                }
                case 113: {
                    goto lab_0x402401;
                }
                case 114: {
                    goto lab_0x402401;
                }
                case 115: {
                    goto lab_0x402401;
                }
                case 116: {
                    goto lab_0x402401;
                }
                case 117: {
                    goto lab_0x402401;
                }
                case 118: {
                    goto lab_0x402401;
                }
                case 119: {
                    goto lab_0x402401;
                }
                case 120: {
                    goto lab_0x402401;
                }
                case 121: {
                    goto lab_0x402401;
                }
                case 122: {
                    goto lab_0x402401;
                }
                case 123: {
                    goto lab_0x4023a5;
                }
                case 124: {
                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4023a5;
                }
                case 126: {
                    goto lab_0x4023cd;
                }
                default: {
                    goto lab_0x4027a5;
                }
            }
        }
      lab_0x4027a5:
        if (v23 != 1) {
            // 0x402b10
            ps = 0;
            int64_t len = v15; // 0x402b20
            if (v15 == -1) {
                // 0x402b22
                len = strlen((char *)str);
            }
            // 0x402b4e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402baf:
                // 0x402baf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402bb4
                int64_t v30 = v29 + str;
                v24 = function_4052a0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40312a_2;
                    }
                    case -1: {
                        goto lab_0x40312a_2;
                    }
                    case -2: {
                        // 0x40320d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403247
                            v19 = v18;
                            int64_t v31 = v18; // 0x40324a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403257
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403250
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40312a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40312a_2;
                    }
                    case 1: {
                        goto lab_0x402b80;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402c2c
                        char v34 = *(char *)v33; // 0x402c3d
                        unsigned char v35; // 0x402257
                        if (v34 < 125) {
                            // 0x402c48
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402c5f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402200(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402c30
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402c3d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402c48
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402c5f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402200(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402c30
                            v33++;
                        }
                        goto lab_0x402b80;
                    }
                }
            }
            goto lab_0x40312a_2;
        } else {
            // 0x4027f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402401;
        }
    }
  lab_0x402a28:
    // 0x402a28
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40332a
        if (v8 > result) {
            // 0x403333
            *(char *)(v12 + result) = 0;
        }
        // 0x402657
        return result;
    }
    return function_402200(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402401:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402410
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40261a_2;
        }
    }
    int64_t v39 = result; // 0x402511
    char v40 = v20; // 0x402511
    int64_t v41 = v38; // 0x402511
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402511
    int64_t v43 = v36; // 0x402511
    goto lab_0x40248d;
  lab_0x40261a_2:
    // 0x402657
    return function_402200(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40312a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402401;
    } else {
        uint64_t v49 = v46 + v5; // 0x402cfe
        int64_t v50 = v5 + 1; // 0x402de1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402de8
        char v52 = v20; // 0x402de8
        int64_t v53 = result; // 0x402de8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402db1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402db5
            int64_t v56 = v54 + 1; // 0x402dba
            int64_t v57 = v51 + 1; // 0x402de1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402dac
                v54 = v56;
                if (v47 > v54) {
                    // 0x402db1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402db5
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
        goto lab_0x40248d;
    }
  lab_0x402b80:
    // 0x402b80
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402b9f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402ba2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40312a
        goto lab_0x40312a_2;
    }
    goto lab_0x402baf;
  lab_0x4023cd:
    // 0x4023cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40261a_2;
    }
    goto lab_0x402401;
  lab_0x4023a5:;
    bool v60 = v15 == 1; // 0x4023b0
    if (v15 == -1) {
        // 0x4023b2
        v60 = *(char *)v1 == 0;
    }
    // 0x4023be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402401;
    } else {
        goto lab_0x4023cd;
    }
  lab_0x40248d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402492
        *(char *)(v44 + v45) = v40;
    }
    // 0x402496
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4022a8_2;
}
// Address range: 0x403430 - 0x4035ce
int64_t function_403430(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403432
    int32_t * v3 = __errno_location(); // 0x40344c
    int64_t v4 = (int64_t)g22; // 0x403451
    int32_t v5 = *v3; // 0x40345b
    int64_t v6 = v4; // 0x403471
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4035c9
            function_404490(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403480
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403487
        int64_t v9; // 0x403430
        if (g22 == &g23) {
            int64_t v10 = function_4042a0(0, v8); // 0x4035aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x4035af
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4042a0(v4, v8); // 0x40349b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x4034aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x4034aa
        int32_t v14 = v7; // 0x4034b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4034e1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4034eb
    int64_t * v17 = (int64_t *)v15; // 0x4034ee
    uint64_t v18 = *v17; // 0x4034ee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4034f1
    int64_t result = *v19; // 0x4034f1
    int64_t v20; // 0x403430
    uint64_t v21 = function_402200(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403514
    if (v18 > v21) {
        // 0x40358b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403527
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403537
        free((int64_t *)result);
    }
    int64_t result2 = function_404240(v22); // 0x403551
    *v19 = result2;
    int64_t v23; // 0x403430
    function_402200(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40358b
    *v3 = v5;
    return result2;
}
// Address range: 0x4035d0 - 0x403604
int64_t function_4035d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4035d7
    int64_t result = function_404440(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4035f6
    return result;
}
// Address range: 0x403610 - 0x40361f
int64_t function_403610(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x40361c
    return result;
}
// Address range: 0x403620 - 0x40362f
int64_t function_403620(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403628
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403630 - 0x403663
int64_t function_403630(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403649
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40364e
    uint32_t v3 = *v2; // 0x40364e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403652
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403670 - 0x403683
int64_t function_403670(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40367c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403690 - 0x4036bb
int64_t function_403690(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403698
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4036b5
        abort();
        // UNREACHABLE
    }
    // 0x4036ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x4036c0 - 0x403732
int64_t function_4036c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4036e2
    int32_t * v2 = __errno_location(); // 0x4036eb
    uint32_t v3 = *(int32_t *)v1; // 0x40370b
    int64_t result = function_402200(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40371a
    return result;
}
// Address range: 0x403740 - 0x403821
int64_t function_403740(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403762
    int32_t * v2 = __errno_location(); // 0x403768
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403787
    int32_t * v4 = (int32_t *)v1; // 0x40378a
    int64_t v5 = function_402200(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4037a5
    int64_t v6 = v5 + 1; // 0x4037aa
    int64_t result = function_404240(v6); // 0x4037bf
    function_402200(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403804
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40380d
    return result;
}
// Address range: 0x403830 - 0x40383a
int64_t function_403830(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403830
    return function_403740(a1, a2, 0, a3);
}
// Address range: 0x403840 - 0x4038d5
int64_t function_403840(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403840
    int64_t v2 = v1; // 0x403840
    int64_t v3 = v2; // 0x403854
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403873
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403870
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40388d
    if (g23 != 0x6092c0) {
        // 0x40388f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x4038b1
    if (g22 != &g23) {
        // 0x4038b3
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g49;
    }
    // 0x4038c6
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x4038e0 - 0x4038f1
int64_t function_4038e0(void) {
    // 0x4038e0
    int64_t v1; // 0x4038e0
    return function_403430(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x403900 - 0x40390a
int64_t function_403900(void) {
    // 0x403900
    int64_t v1; // 0x403900
    return function_403430(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403910 - 0x403926
int64_t function_403910(int64_t a1) {
    // 0x403910
    return function_403430(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403930 - 0x403942
int64_t function_403930(int64_t a1, int64_t a2) {
    // 0x403930
    return function_403430(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403950 - 0x4039b8
int64_t function_403950(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403960
    return function_403430((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4039c0 - 0x403a24
int64_t function_4039c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4039d0
    return function_403430((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403a30 - 0x403a3c
int64_t function_403a30(int64_t a1, int64_t a2) {
    // 0x403a30
    return function_403950(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403a40 - 0x403a4f
int64_t function_403a40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a40
    return function_4039c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403a50 - 0x403ac0
int64_t function_403a50(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403a5d
    int128_t v2 = __asm_movdqa(g40); // 0x403a65
    int128_t v3 = __asm_movdqa(g41); // 0x403a6d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403a82
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403a98
    uint32_t v6 = *v5; // 0x403a98
    uint32_t v7 = (int32_t)a3 % 32; // 0x403a9d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403430(0, a1, a2, &v4);
}
// Address range: 0x403ac0 - 0x403acd
int64_t function_403ac0(int64_t a1, int64_t a2) {
    // 0x403ac0
    return function_403a50(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403ad0 - 0x403ae1
int64_t function_403ad0(int64_t a1) {
    // 0x403ad0
    return function_403a50(a1, -1, 58);
}
// Address range: 0x403af0 - 0x403afa
int64_t function_403af0(void) {
    // 0x403af0
    int64_t v1; // 0x403af0
    return function_403a50(v1, v1, 58);
}
// Address range: 0x403b00 - 0x403b6e
int64_t function_403b00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403b1a
    return function_403430((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403b70 - 0x403bdc
int64_t function_403b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403b77
    int128_t v2 = __asm_movdqa(g40); // 0x403b7f
    int128_t v3 = __asm_movdqa(g41); // 0x403b87
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403ba9
    if (a2 == 0 || a3 == 0) {
        // 0x403bd7
        abort();
        // UNREACHABLE
    }
    // 0x403bba
    return function_403430(a1, a4, a5, &v4);
}
// Address range: 0x403be0 - 0x403be9
int64_t function_403be0(void) {
    // 0x403be0
    int64_t v1; // 0x403be0
    return function_403b70(v1, v1, v1, v1, -1);
}
// Address range: 0x403bf0 - 0x403c07
int64_t function_403bf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403bf0
    return function_403b70(0, a1, a2, a3, -1);
}
// Address range: 0x403c10 - 0x403c23
int64_t function_403c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403c10
    return function_403b70(0, a1, a2, a3, a4);
}
// Address range: 0x403c30 - 0x403c3a
int64_t function_403c30(void) {
    // 0x403c30
    int64_t v1; // 0x403c30
    return function_403430(v1, v1, v1, &g21);
}
// Address range: 0x403c40 - 0x403c52
int64_t function_403c40(int64_t a1, int64_t a2) {
    // 0x403c40
    return function_403430(0, a1, a2, &g21);
}
// Address range: 0x403c60 - 0x403c71
int64_t function_403c60(void) {
    // 0x403c60
    int64_t v1; // 0x403c60
    return function_403430(v1, v1, -1, &g21);
}
// Address range: 0x403c80 - 0x403c96
int64_t function_403c80(int64_t a1) {
    // 0x403c80
    return function_403430(0, a1, -1, &g21);
}
// Address range: 0x403ca0 - 0x40407d
int64_t function_403ca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403d38
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403cbc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403cd6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403d1b
    if (a6 < 10) {
        // 0x403d2a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403e22
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404080 - 0x4040a0
int64_t function_404080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404080
    if (a5 == 0) {
        // 0x40409b
        return function_403ca0(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x404087
    v1++;
    int64_t v2 = v1; // 0x404099
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404090
        v1++;
        v2 = v1;
    }
    // 0x40409b
    return function_403ca0(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x4040a0 - 0x404100
int64_t function_4040a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x4040a0
    int64_t v4 = &v3; // 0x4040a0
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x4040d3
    int64_t v7; // 0x4040bd
    int64_t * v8; // 0x4040db
    int64_t v9; // 0x4040db
    int64_t v10; // 0x4040e7
    if (v6 < 48) {
        // 0x4040b0
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x4040f3
            break;
        }
    } else {
        // 0x4040db
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x4040f3
            break;
        }
    }
    int64_t v11 = 10; // 0x4040d1
    while (v5 != 9) {
        // 0x4040c9
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x4040b0
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x4040f3
                break;
            }
        } else {
            // 0x4040db
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x4040f3
                break;
            }
        }
        // 0x4040c9
        v11 = 10;
    }
    // 0x4040f3
    return function_403ca0(a1, a2, a3, a4, v4, v11, (int64_t)&g49);
}
// Address range: 0x404100 - 0x4041bc
int64_t function_404100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404100
    int64_t v1; // bp-168, 0x404100
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404100
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404100
    int64_t v8; // 0x404100
    int64_t v9; // bp-56, 0x404100
    int64_t v10; // 0x404165
    int64_t v11; // 0x404189
    if ((int32_t)v6 < 48) {
        // 0x404150
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4041a0
            break;
        }
    } else {
        // 0x404182
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4041a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40417a
    int64_t v13 = 10; // 0x40417a
    while (v5 != 9) {
        // 0x40417c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404150
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4041a0
                break;
            }
        } else {
            // 0x404182
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4041a0
                break;
            }
        }
        // 0x404172
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4041a0
    int64_t v14; // bp-136, 0x404100
    int64_t result = function_403ca0(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x4041af
    return result;
}
// Address range: 0x4041c0 - 0x404234
int64_t function_4041c0(int64_t a1) {
    // 0x4041c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404223
    return fputs_unlocked(v1, g30);
}
// Address range: 0x404240 - 0x40425a
int64_t function_404240(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404244
    if (size != 0 != (mem == NULL)) {
        // 0x404253
        return (int64_t)mem;
    }
    // 0x404255
    function_404490(size);
    // UNREACHABLE
}
// Address range: 0x404260 - 0x404281
int64_t function_404260(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404263
    int64_t v2 = v1; // 0x404263
    if (v2 < 0) {
        // 0x40427b
        function_404490(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404279
        return function_404240(v2);
    }
    // 0x40427b
    function_404490(v2);
    // UNREACHABLE
}
// Address range: 0x404290 - 0x404292
int64_t function_404290(void) {
    // 0x404290
    int64_t v1; // 0x404290
    return function_404240(v1);
}
// Address range: 0x4042a0 - 0x4042d6
int64_t function_4042a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4042c8
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4042b1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4042c0
        return (int64_t)mem;
    }
    // 0x4042d1
    function_404490(a1);
    // UNREACHABLE
}
// Address range: 0x4042e0 - 0x404301
int64_t function_4042e0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4042e3
    int64_t v2 = v1; // 0x4042e3
    if (v2 < 0) {
        // 0x4042fb
        function_404490(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4042f9
        return function_4042a0(a1, v2);
    }
    // 0x4042fb
    function_404490(a1);
    // UNREACHABLE
}
// Address range: 0x404310 - 0x404396
int64_t function_404310(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40436b
            function_404490(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4042a0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404353
    if (a2 == 0) {
        // 0x404378
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404358
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40436b
        function_404490(a1);
        // UNREACHABLE
    }
    // 0x40433a
    *(int64_t *)a2 = v2;
    return function_4042a0(a1, v2 * a3);
}
// Address range: 0x4043a0 - 0x4043f0
int64_t function_4043a0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4043a0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4043ea
            function_404490(a1);
            // UNREACHABLE
        }
        // 0x4043c2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4042a0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4043d5
        *(int64_t *)a2 = 128;
        return function_4042a0(0, 128);
    }
    // 0x4043e8
    if (a2 < 0) {
        // 0x4043ea
        function_404490(a1);
        // UNREACHABLE
    }
    // 0x4043c2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4042a0(a1, v1);
}
// Address range: 0x4043f0 - 0x404407
int64_t function_4043f0(int64_t a1, int64_t a2) {
    // 0x4043f0
    return (int64_t)memset((int64_t *)function_404240(a1), 0, (int32_t)a1);
}
// Address range: 0x404410 - 0x40443e
int64_t function_404410(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404417
    if ((int64_t)v1 < 0) {
        // 0x404439
        function_404490(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404439
        function_404490(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40442a
    if (mem != NULL) {
        // 0x404434
        return (int64_t)mem;
    }
    // 0x404439
    function_404490(nmemb);
    // UNREACHABLE
}
// Address range: 0x404440 - 0x404468
int64_t function_404440(int64_t a1, int64_t a2) {
    int64_t v1 = function_404240(a2); // 0x40444f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404470 - 0x404483
int64_t function_404470(int64_t str) {
    // 0x404470
    return function_404440(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404490 - 0x4044c1
int64_t function_404490(int64_t a1) {
    // 0x404490
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4044d0 - 0x4045af
int64_t function_4044d0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4044dc
    uint32_t v2 = *v1; // 0x4044dc
    int64_t v3 = a2 & 0xffffffff; // 0x4044e1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4044e4
    uint64_t v5 = (int64_t)*v4; // 0x4044e4
    int64_t v6; // 0x404552
    if (v3 <= v5) {
      lab_0x40454c_2:
        // 0x40454c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4044d2
    int64_t v8 = v2; // 0x4044d0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40454c
        goto lab_0x40454c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404508
    int64_t v17; // 0x404516
    int64_t * v18; // 0x404530
    int64_t * v19; // 0x404533
    int64_t v20; // 0x40453e
    int64_t v21; // 0x404516
    while ((v16 & 0xffffffff) > v10) {
        // 0x404513
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404530
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404547
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40454c
            goto lab_0x40454c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40454c
            goto lab_0x40454c_2;
        }
        // 0x404502
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40458b
    int64_t * v23 = (int64_t *)v22; // 0x404590
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404593
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404590
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4045a7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4044fd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40454c
            goto lab_0x40454c_2;
        }
        // 0x404502
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404513
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404530
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404547
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40454c
                goto lab_0x40454c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40454c
                goto lab_0x40454c_2;
            }
            // 0x404502
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404570
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404590
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4045a7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40454c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4045b0 - 0x404bcc
int64_t function_4045b0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4045cf
    int64_t v2 = *v1; // 0x4045cf
    char * str2 = (char *)v2; // 0x4045dc
    char c = *str2; // 0x4045dc
    int64_t v3 = v2; // 0x404608
    int64_t v4 = 0; // 0x4045b0
    int32_t v5; // 0x4045b0
    int64_t v6; // 0x4045b0
    int64_t v7; // 0x4045b0
    int64_t v8; // 0x4045b0
    int64_t v9; // 0x4045b0
    int64_t v10; // 0x4045b0
    int64_t v11; // 0x4045b0
    int64_t v12; // 0x4045b0
    int64_t v13; // 0x4045b0
    int64_t str3; // 0x4045b0
    int64_t v14; // 0x4045b0
    int64_t v15; // 0x4045b0
    int64_t v16; // 0x4045b0
    int64_t v17; // 0x4045b0
    int32_t v18; // 0x4045b0
    int32_t v19; // 0x4045b0
    int32_t v20; // 0x4045b0
    int32_t v21; // 0x4045b0
    int32_t v22; // 0x4045b0
    int32_t v23; // 0x4045b0
    int32_t v24; // 0x4045b0
    int32_t v25; // 0x4045b0
    int32_t v26; // 0x4045b0
    int32_t v27; // 0x4045b0
    int32_t v28; // 0x4045b0
    int32_t v29; // 0x4045b0
    int64_t nmemb; // 0x4045b0
    int64_t v30; // 0x4045b0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40460c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404608
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404618
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40461e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4045e8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40464c
                int64_t v34; // 0x4045b0
                int64_t v35; // 0x4045b0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404655
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4047d0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404666
                int64_t v37 = *(int64_t *)v36; // 0x40466a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404640
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404655
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4047d0;
                        }
                    }
                    // 0x404666
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
                  lab_0x4046b6:
                    // 0x4046b6
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
                        goto lab_0x404710;
                    } else {
                        if (v11 == 0) {
                            // 0x404880
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404710;
                        } else {
                            if (v39 == 0) {
                                // 0x404830
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4046da;
                                } else {
                                    // 0x40483c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4046da;
                                    } else {
                                        // 0x40484a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4046da;
                                        } else {
                                            goto lab_0x404710;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4046da;
                            }
                        }
                    }
                }
              lab_0x404721:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4048f6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404aa2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404ac2
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404b0f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x404b29
                            int64_t v45; // 0x404b2b
                            if (*(char *)v42 != 0) {
                                // 0x404b2b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404b23
                            while (v17 + nmemb != v42) {
                                // 0x404b25
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404b2b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x404b18
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404b50
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404904
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404a5f
                        free((int64_t *)v17);
                    }
                    // 0x404959
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404970
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40481e
                    return 63;
                }
                // 0x404740
                v5 = v39;
                if (v13 != 0) {
                    // 0x4047c4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4047d0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4047e0
                    uint32_t v50 = *v49; // 0x4047e0
                    int64_t v51 = v50; // 0x4047e0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4047ea
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4047f3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404a1f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4049ca
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40481e
                            return 63;
                        }
                        // 0x404868
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404b7f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404a7d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404a90
                                // 0x40481e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40498e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4049a2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40480b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40480e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404812
                    int64_t result = v59; // 0x404818
                    if (v58 != 0) {
                        // 0x40481a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40481e
                    return result;
                }
            } else {
                // 0x40461e
                v5 = v32;
            }
            // break -> 0x404745
            break;
        }
    }
    // 0x404745
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40475d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404767
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40481e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4048a9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404796
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4047a6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404710:
    // 0x404710
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404710
    int64_t v63 = *(int64_t *)v62; // 0x404714
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404721
        goto lab_0x404721;
    }
    goto lab_0x4046b6;
  lab_0x4046da:
    // 0x4046da
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4045b0
    int32_t v65; // 0x4045b0
    int32_t v66; // 0x4045b0
    if (v27 != 0) {
        goto lab_0x404710;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404890
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404710;
            } else {
                goto lab_0x404701;
            }
        } else {
            // 0x4046f5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4049ec
                int64_t v67 = (int64_t)mem; // 0x4049ec
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404710;
                } else {
                    // 0x4049ff
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404701;
                }
            } else {
                goto lab_0x404701;
            }
        }
    }
  lab_0x404701:
    // 0x404701
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404710;
}
// Address range: 0x404bd0 - 0x405196
int64_t function_404bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404bf1
    if (v3 < 1) {
        // 0x404dae
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404bed
    int32_t v5 = *(int32_t *)a7; // 0x404bf9
    uint64_t v6 = a1 & 0xffffffff; // 0x404bfb
    int64_t v7 = v2; // 0x404c00
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404c03
    *v8 = 0;
    int64_t v9; // 0x404bd0
    int64_t v10; // 0x404bd0
    int64_t v11; // 0x404bd0
    int64_t v12; // 0x404bd0
    int64_t str; // 0x404bd0
    int64_t v13; // 0x404bd0
    int64_t v14; // 0x404bd0
    int64_t v15; // 0x404bd0
    int64_t v16; // 0x404bd0
    int64_t v17; // 0x404bd0
    int32_t v18; // 0x404bd0
    char v19; // 0x404bd0
    if (v5 == 0) {
        // 0x404de8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404c1a;
    } else {
        // 0x404c13
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404c60
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404c63
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404d28;
            } else {
                int64_t v22 = v7 + 1; // 0x404c76
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404c86
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404d3c;
                } else {
                    goto lab_0x404c98;
                }
            }
        } else {
            goto lab_0x404c1a;
        }
    }
  lab_0x404c1a:
    // 0x404c1a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404c20
    *v24 = 0;
    int64_t v25; // 0x404bd0
    int64_t v26; // 0x404bd0
    int64_t v27; // 0x404bd0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404d10
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404d1d;
        }
        case 43: {
            // 0x405020
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404d1d;
        }
        default: {
            // 0x404c3c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404f9f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4050b8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404d1d;
                } else {
                    // 0x404fad
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404c4a;
                }
            } else {
                goto lab_0x404c4a;
            }
        }
    }
  lab_0x404d28:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404d2f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404c98;
    } else {
        goto lab_0x404d3c;
    }
  lab_0x404c4a:
    // 0x404c4a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404d1d;
  lab_0x404d1d:
    // 0x404d1d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404d28;
  lab_0x404c98:;
    uint32_t v30 = *(int32_t *)a7; // 0x404c98
    int64_t v31 = v30; // 0x404c98
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404c9a
    if ((int64_t)*v32 > v31) {
        // 0x404c9f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404ca2
    if (*v33 > v30) {
        // 0x404ca7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404caa
    int64_t v35 = v31; // 0x404cae
    int64_t v36 = v15; // 0x404cae
    int64_t v37; // 0x404bd0
    int64_t v38; // 0x404bd0
    int64_t v39; // 0x404bd0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404e18
        int64_t v41 = v40; // 0x404e18
        v2 = v41;
        int64_t v42; // 0x404bd0
        if (*v33 == v40) {
            // 0x405000
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405008
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404e24
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404e38
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404e41
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404e4a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404e61
            int64_t v47 = v45 & 0xffffffff; // 0x404e65
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404e6e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404e74
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404e76;
                }
            }
            int64_t v48 = v47 + 1; // 0x404e50
            int64_t v49 = v48 & 0xffffffff; // 0x404e50
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404e61
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404e6e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404e74
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404e76;
                    }
                }
                // 0x404e50
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405018
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404e76;
    } else {
        goto lab_0x404cb4;
    }
  lab_0x404d3c:
    // 0x404d3c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404d3f
    int64_t v51 = v12; // 0x404d3f
    int64_t v52 = v14; // 0x404d3f
    if (*(char *)v10 == 0) {
        goto lab_0x404c98;
    } else {
        goto lab_0x404d45;
    }
  lab_0x404cb4:;
    int32_t v53 = v35; // 0x404cb4
    int64_t v54; // 0x404bd0
    int64_t v55; // 0x404bd0
    int64_t v56; // 0x404bd0
    int64_t v57; // 0x404bd0
    int64_t v58; // 0x404bd0
    int64_t v59; // 0x404bd0
    char * v60; // 0x404bd0
    int64_t v61; // 0x404bd0
    int64_t v62; // 0x404cc9
    int64_t v63; // 0x404bd0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404e03
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404e06;
    } else {
        // 0x404cbc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404bd0
        int64_t v66 = v65 ? -1 : 1; // 0x404cd0
        int64_t v67 = (int64_t)"--"; // 0x404bd0
        int64_t v68 = v62; // 0x404bd0
        int64_t v69 = 3; // 0x404cd0
        unsigned char v70 = *(char *)v68; // 0x404cd0
        char v71 = *(char *)v67; // 0x404cd0
        char v72 = v71; // 0x404cd0
        bool v73 = false; // 0x404cd0
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
            // 0x404dc0
            if (*(char *)v62 == 45) {
                // 0x404e80
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404e80
                if (c == 0) {
                    goto lab_0x404dca;
                } else {
                    // 0x404e8d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404f10;
                    } else {
                        if (c == 45) {
                            // 0x4050f3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404f65;
                        } else {
                            // 0x404e9e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404f10;
                            } else {
                                // 0x404ea3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404ec4;
                                } else {
                                    // 0x404eaa
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404f10;
                                    } else {
                                        goto lab_0x404ec4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404dca;
            }
        } else {
            uint32_t v75 = *v33; // 0x404ce0
            v2 = v75;
            int32_t v76 = *v32; // 0x404ce3
            int64_t v77 = v35 + 1; // 0x404ce6
            int32_t v78 = v77; // 0x404ce9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405050
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404cf7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404d05
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404e06;
        }
    }
  lab_0x404d45:;
    // 0x404d45
    int64_t v79; // bp-104, 0x404bd0
    int64_t v80 = &v79; // 0x404bda
    int64_t v81 = v50 + 1; // 0x404d45
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404d4c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404d51
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404d55
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404d59
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404d61
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404d66
    int32_t c2 = v84; // 0x404d66
    char * found_char_pos = strchr(str2, c2); // 0x404d66
    int64_t v87 = *v82; // 0x404d6b
    v2 = v87;
    int64_t v88 = *v85; // 0x404d75
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404d80
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405070
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40503d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404dae
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404d66
    char v91 = *(char *)(v90 + 1); // 0x404d9b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404d55
        if (v91 != 58) {
            // 0x404dae
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404fc4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4050c8
                *v8 = 0;
            } else {
                // 0x4050ac
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404fee
            *v83 = 0;
            // 0x404dae
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404fce
        if (v93 != 0) {
            // 0x405060
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404fee
            *v83 = 0;
            // 0x404dae
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404fe1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404fee
            *v83 = 0;
            // 0x404dae
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40512a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4050da
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4050e1
        // 0x404fee
        *v83 = 0;
        // 0x404dae
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404f39
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404f3b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405160
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405111
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405118
            // 0x404dae
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404f46
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404f4a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404f65;
  lab_0x404e76:
    // 0x404e76
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404cb4;
  lab_0x404f65:;
    int64_t v99 = function_4045b0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404f83
    // 0x404dae
    return v99 & 0xffffffff;
  lab_0x404e06:;
    int32_t v100 = v55; // 0x404e06
    if (v100 != (int32_t)v59) {
        // 0x404e0a
        *(int32_t *)a7 = v100;
    }
    // 0x404dae
    return 0xffffffff;
  lab_0x404dca:
    // 0x404dca
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404dd1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404dae
    return v99 & 0xffffffff;
  lab_0x404f10:
    // 0x404f10
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404d45;
  lab_0x404ec4:
    // 0x404ec4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4045b0(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404eea
    if ((int32_t)v101 != -1) {
        // 0x404dae
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404eff
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404f10;
}
// Address range: 0x4051a0 - 0x4051f6
int64_t function_4051a0(int64_t a1) {
    // 0x4051a0
    *(int32_t *)&g42 = g28;
    *(int32_t *)&g43 = g27;
    int64_t v1; // 0x4051a0
    int64_t result = function_404bd0(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x4051c6
    g28 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g26 = g44;
    return result;
}
// Address range: 0x405200 - 0x405218
int64_t function_405200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405200
    return function_4051a0(1);
}
// Address range: 0x405220 - 0x405233
int64_t function_405220(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x405220
    return function_4051a0(0);
}
// Address range: 0x405240 - 0x405255
int64_t function_405240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405240
    return function_404bd0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405260 - 0x405276
int64_t function_405260(void) {
    // 0x405260
    return function_4051a0(0);
}
// Address range: 0x405280 - 0x405298
int64_t function_405280(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405280
    return function_404bd0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4052a0 - 0x40531a
int64_t function_4052a0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4052ab
    int64_t v2 = (int64_t)&g12; // 0x4052ab
    int32_t * pwc; // 0x4052a0
    int64_t v3; // 0x4052a0
    int64_t n; // 0x4052a0
    if (a2 == 0) {
        goto lab_0x4052f2;
    } else {
        // 0x4052ad
        if (a3 == 0) {
            // 0x4052d8
            return -2;
        }
        // 0x4052b9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4052f2;
        } else {
            goto lab_0x4052c4;
        }
    }
  lab_0x4052f2:
    // 0x4052f2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4052a0
    pwc = (int32_t *)&v4;
    goto lab_0x4052c4;
  lab_0x4052c4:;
    char * wstr = (char *)v3; // 0x4052ca
    int64_t ps; // 0x4052a0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4052ca
    int64_t result = v5; // 0x4052ca
    if (v5 < 0xfffffffe) {
        // 0x4052d8
        return result;
    }
    int64_t result2 = result; // 0x405309
    if ((char)function_405590(0, v3) == 0) {
        // 0x40530b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4052d8
    return result2;
}
// Address range: 0x405320 - 0x40537e
int64_t function_405320(int64_t a1) {
    uint64_t result = function_404240(33); // 0x40532e
    char * str = (char *)result; // 0x405342
    strncpy(str, (char *)(a1 + 44), 32);
    *(char *)(result + 32) = 0;
    int64_t v1 = result + (int64_t)strlen(str); // 0x405353
    if (result >= v1) {
        // 0x405361
        return result;
    }
    int64_t v2 = v1; // 0x405359
    v2--;
    char * v3 = (char *)v2; // 0x40535b
    while (*v3 == 32) {
        // 0x405370
        *v3 = 0;
        if (result == v2) {
            // break -> 0x405361
            break;
        }
        v2--;
        v3 = (char *)v2;
    }
    // 0x405361
    return result;
}
// Address range: 0x405380 - 0x405528
int64_t function_405380(int64_t a1, int64_t * a2, int64_t * a3, uint64_t a4) {
    // 0x405380
    utmpxname((char *)a1);
    setutxent();
    struct utmpx * v1 = getutxent(); // 0x4053b7
    int64_t v2 = 0; // 0x4053c2
    int64_t v3 = 0; // 0x4053c2
    int64_t v4; // 0x405380
    int64_t v5; // 0x405380
    int64_t v6; // 0x405380
    struct utmpx * v7; // 0x405380
    struct utmpx * v8; // 0x405380
    int64_t v9; // 0x405380
    int64_t v10; // 0x405380
    int64_t v11; // 0x405380
    uint64_t v12; // 0x405380
    int64_t v13; // 0x405380
    int64_t v14; // 0x405380
    int64_t v15; // 0x405380
    int64_t v16; // 0x405380
    int64_t v17; // 0x405380
    if (v1 != NULL) {
        struct utmpx * v18 = v1; // 0x4053b7
        int64_t v19 = 0; // 0x405380
        int64_t v20 = a1;
        int64_t v21 = 0; // 0x405380
        int64_t v22 = 0; // 0x405380
        while (true) {
            // 0x4053c4
            v11 = v22;
            v9 = v21;
            v14 = v20;
            v4 = v19;
            v7 = v18;
            while (true) {
              lab_0x4053c4:
                // 0x4053c4
                v8 = v7;
                v5 = v4;
                v15 = v14;
                v10 = v9;
                v12 = v11;
                v6 = (int64_t)v8;
                if (*(char *)(v6 + 44) == 0) {
                    goto lab_0x4053d6;
                } else {
                    // 0x4053cb
                    if (v8->e0 == 7) {
                        // 0x405460
                        v16 = v15;
                        if (a4 % 2 == 0) {
                            goto lab_0x4053db;
                        } else {
                            uint32_t pid = *(int32_t *)(v6 + 4); // 0x405469
                            int64_t v23 = pid; // 0x405469
                            v16 = v23;
                            if (pid < 1) {
                                goto lab_0x4053db;
                            } else {
                                // 0x405475
                                v16 = v23;
                                if (kill(pid, 0) >= 0) {
                                    goto lab_0x4053db;
                                } else {
                                    int32_t v24 = *__errno_location(); // 0x405489
                                    v13 = v23;
                                    if (v24 == 3) {
                                        // break -> 0x4053b7
                                        break;
                                    }
                                    // 0x405492
                                    v17 = v23;
                                    if (v12 != v10) {
                                        goto lab_0x4053e4;
                                    } else {
                                        goto lab_0x4054a0;
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x4053d6;
                    }
                }
            }
          lab_0x4053b7:
            // 0x4053b7
            v20 = v13;
            v18 = getutxent();
            v19 = v5;
            v21 = v10;
            v22 = v12;
            v2 = v12;
            v3 = v5;
            if (v18 == NULL) {
                // break -> 0x405435
                break;
            }
        }
    }
  lab_0x405435:
    // 0x405435
    endutxent();
    *a2 = v2;
    *a3 = v3;
    return 0;
  lab_0x4053d6:
    // 0x4053d6
    v13 = v15;
    v16 = v15;
    if ((a4 & 2) != 0) {
        // break -> 0x4053b7
        goto lab_0x4053b7;
    }
    goto lab_0x4053db;
  lab_0x4053db:
    // 0x4053db
    v17 = v16;
    if (v12 == v10) {
        goto lab_0x4054a0;
    } else {
        goto lab_0x4053e4;
    }
  lab_0x4054a0:;
    int64_t v25 = v17;
    int64_t v26; // 0x405380
    int64_t v27; // 0x405380
    int64_t v28; // 0x405380
    if (v5 == 0) {
        // 0x4054e4
        v27 = 1;
        v26 = 1;
        v28 = 384;
        if (v12 != 0) {
            uint128_t v29 = 384 * (int128_t)v12; // 0x4054f1
            if ((int64_t)v29 < 0) {
                // 0x405523
                function_404490(v25);
                // UNREACHABLE
            }
            if (v29 % 0x1ff0000000000000001 != 0) {
                // 0x405523
                function_404490(v25);
                // UNREACHABLE
            }
            // 0x405504
            v27 = v12 + 1;
            v26 = v10;
            v28 = 384 * v12;
        }
    } else {
        if (v12 >= 0x38e38e38e38e38) {
            // 0x405523
            function_404490(v25);
            // UNREACHABLE
        }
        int64_t v30 = v12 + 1; // 0x4054b7
        int64_t v31 = v12 / 2 + v30; // 0x4054be
        v27 = v30;
        v26 = v31;
        v28 = 384 * v31;
    }
    int64_t v32 = v27; // 0x4054df
    int64_t v33 = v26; // 0x4054df
    int64_t v34 = function_4042a0(v5, v28); // 0x4054df
    goto lab_0x4053e8;
  lab_0x4053e4:
    // 0x4053e4
    v32 = v12 + 1;
    v33 = v10;
    v34 = v5;
    goto lab_0x4053e8;
  lab_0x4053e8:;
    int64_t v35 = v34 + 384 * v12; // 0x4053f6
    *(int64_t *)v35 = *(int64_t *)v8;
    int64_t v36 = v35 + 8 & -8; // 0x405407
    *(int64_t *)(v35 + 376) = *(int64_t *)(v6 + 376);
    int64_t v37 = v35 - v36; // 0x405412
    uint64_t v38 = (v37 + 384) / 8 % 0x20000000; // 0x405423
    __asm_rep_movsq_memcpy((char *)v36, (char *)(v6 - v37), v38);
    struct utmpx * v39 = getutxent(); // 0x405428
    v11 = v32;
    v9 = v33;
    bool v40; // 0x405380
    v14 = v38 * (v40 ? -8 : 8) + v36;
    v4 = v34;
    v7 = v39;
    v2 = v32;
    v3 = v34;
    if (v39 == NULL) {
        // break (via goto) -> 0x405435
        goto lab_0x405435;
    }
    goto lab_0x4053c4;
}
// Address range: 0x405530 - 0x40558d
int64_t function_405530(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405537
    int64_t v2; // 0x405530
    int64_t result = function_405b60(a1, v2); // 0x405548
    if ((v2 & 32) != 0) {
        // 0x405570
        if ((int32_t)result == 0) {
            // 0x405574
            *__errno_location() = 0;
        }
        // 0x40556a
        return 0xffffffff;
    }
    // 0x405551
    if ((int32_t)result == 0) {
        // 0x40556a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405558
    if (v1 == 0) {
        // 0x40555a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40556a
    return result2;
}
// Address range: 0x405590 - 0x4055ee
int64_t function_405590(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405596
    if (locale == NULL) {
        // 0x4055c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405596
    bool v2; // 0x405590
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x405590
    int64_t v5 = v1; // 0x405590
    int64_t v6 = 2; // 0x4055b5
    unsigned char v7 = *(char *)v5; // 0x4055b5
    char v8 = *(char *)v4; // 0x4055b5
    char v9 = v8; // 0x4055b5
    bool v10 = false; // 0x4055b5
    while (v7 == v8) {
        // 0x4055a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4055c1
    int64_t v13 = v1; // 0x4055c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4055c3
        return 0;
    }
    int64_t v14 = 6; // 0x4055c1
    unsigned char v15 = *(char *)v13; // 0x4055dd
    char v16 = *(char *)v12; // 0x4055dd
    char v17 = v16; // 0x4055dd
    bool v18 = false; // 0x4055dd
    while (v15 == v16) {
        // 0x4055d0
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
// Address range: 0x4055f0 - 0x405b52
int64_t function_4055f0(void) {
    char * v1 = nl_langinfo(14); // 0x405606
    char * v2 = g46; // 0x40560b
    char * v3; // 0x4055f0
    int64_t v4; // 0x4055f0
    int64_t v5; // 0x4055f0
    int64_t v6; // 0x4055f0
    int64_t v7; // 0x4055f0
    int32_t size; // 0x4055f0
    int32_t size2; // 0x4055f0
    int32_t len; // 0x4056c2
    int64_t v8; // 0x4056c2
    char * env_val; // 0x4056ad
    if (v2 == NULL) {
        // 0x4056a8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405715;
        } else {
            // 0x4056ba
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405715;
            } else {
                // 0x4056bf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4056ad
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405b45
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405715;
                    } else {
                        // 0x405ab9
                        size2 = len + 14;
                        goto lab_0x4056db;
                    }
                } else {
                    goto lab_0x4056db;
                }
            }
        }
    } else {
        // 0x4055f0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40562a;
    }
  lab_0x40595c:;
    // 0x40595c
    struct _IO_FILE * stream; // 0x40579b
    int32_t v10 = __uflow(stream); // 0x40595f
    int64_t v11; // 0x4055f0
    int64_t v12 = v11; // 0x405969
    int64_t v13; // 0x4055f0
    int64_t v14 = v13; // 0x405969
    int32_t v15 = v10; // 0x405969
    int64_t v16; // 0x4055f0
    int64_t v17 = v16; // 0x405969
    int64_t v18 = v11; // 0x405969
    int64_t v19 = v13; // 0x405969
    int64_t v20 = v16; // 0x405969
    if (v10 == -1) {
        // break -> 0x40596f
        goto lab_0x40596f;
    }
    goto lab_0x4057e9;
  lab_0x4057de:;
    // 0x4057de
    int64_t v90; // 0x4055f0
    int64_t * v32; // 0x4057d0
    *v32 = v90 + 1;
    int64_t v89; // 0x4055f0
    v12 = v89;
    int64_t v91; // 0x4055f0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4055f0
    v17 = v92;
    goto lab_0x4057e9;
  lab_0x4057e9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4055f0
    int32_t v25; // bp-120, 0x4055f0
    int32_t v26; // bp-184, 0x4055f0
    int64_t v27; // 0x40579b
    int64_t v28; // 0x4057b8
    int64_t v29; // 0x4057bd
    int64_t * v30; // 0x4057d4
    switch (c) {
        case 32: {
            goto lab_0x4057d0;
        }
        case 10: {
            goto lab_0x4057d0;
        }
        case 9: {
            goto lab_0x4057d0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4059c1
            int32_t v33; // 0x4055f0
            char v34; // 0x4055f0
            int32_t v35; // 0x4059ce
            if (v31 < *v30) {
                // 0x4059a0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4059cb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4059c1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4059a0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4059cb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4059b0
                v36 = v33;
            }
            // 0x405a9f
            if (v36 == -1) {
                // break -> 0x40596f
                break;
            }
            goto lab_0x4057d0;
        }
        default: {
            // 0x4057ff
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40596f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405828
            int64_t v39 = v37 + 4; // 0x40582a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405836
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405838
            while (v41 == 0) {
                // 0x405828
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405856
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405862
            int64_t v45 = v43 + 4; // 0x405864
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405870
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405872
            while (v47 == 0) {
                // 0x405862
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40585f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405888
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405898
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40589c
            int64_t v52 = v51 + v48; // 0x4058a5
            int64_t * mem; // 0x4055f0
            int64_t v53; // 0x4055f0
            int64_t v54; // 0x4055f0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4059db
                int64_t v56 = v55 + 3; // 0x4059e7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4058c1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4058d0
            if (mem == NULL) {
                // 0x405afc
                free((int64_t *)v21);
                function_405b60(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405774;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4058e8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4058f2
            uint32_t v62 = (int32_t)v59; // 0x4058f5
            int64_t v63; // 0x4055f0
            if (v62 >= 8) {
                // 0x405a04
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405a1e
                int64_t v66 = v61 - v65; // 0x405a22
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405a2d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405a3e
                    int64_t v70 = v69 & 0xffffffff; // 0x405a3e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405a3b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405acf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405907
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40590b
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
            int64_t v73 = v51 + 1; // 0x40591b
            int64_t v74 = v60 - 1; // 0x40591f
            uint32_t v75 = (int32_t)v73; // 0x405924
            int64_t v76; // 0x4055f0
            if (v75 >= 8) {
                // 0x405a52
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405a5c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405a6c
                int64_t v80 = v74 - v79; // 0x405a70
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405a7b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405a8b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405a89
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405ae6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405aee
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405936
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40593a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405b33
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40594e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4057de;
            } else {
                goto lab_0x40595c;
            }
        }
    }
  lab_0x4057d0:;
    int64_t v93 = v23; // 0x4055f0
    int64_t v94 = v22; // 0x4055f0
    int64_t v95 = v21; // 0x4055f0
    goto lab_0x4057d0_2;
  lab_0x405715:;
    int64_t * mem3 = malloc(size); // 0x405715
    int64_t v97 = (int64_t)&g12; // 0x405720
    int64_t v98; // 0x4055f0
    int64_t path; // 0x4055f0
    if (mem3 == NULL) {
        goto lab_0x4056f2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405715
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405736;
    }
  lab_0x40562a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x40561d
    char v100 = *v3; // 0x40562a
    int64_t v101; // 0x4055f0
    if (v100 == 0) {
        // 0x405684
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4055f0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4055f0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405670
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405677;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405640
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40564d
        char v107 = *(char *)v106; // 0x405652
        v102 = v107;
        if (v107 == 0) {
            // 0x405684
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40565b
    v104 = v103 + 1;
  lab_0x405677:
    // 0x405684
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4056f2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40562a;
  lab_0x405736:;
    int64_t v109 = v98 + path; // 0x405736
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405762
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405791
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405ac2
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x4057b5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4057d0_2:;
                uint64_t v96 = *v32; // 0x4057d0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40595c;
                } else {
                    goto lab_0x4057de;
                }
            }
          lab_0x40596f:
            // 0x40596f
            function_405b60(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40598e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405774;
  lab_0x4056db:;
    int64_t * mem4 = malloc(size2); // 0x4056db
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405781
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405736;
    } else {
        goto lab_0x4056f2;
    }
  lab_0x405774:
    // 0x405774
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4056f2;
}
// Address range: 0x405b60 - 0x405bdb
int64_t function_405b60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405b67
    if (fileno(stream) < 0) {
        // 0x405bc7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405b7a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405bab
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405bc7
            return fclose(stream);
        }
    }
    // 0x405b7c
    if ((int32_t)function_405be0(a1, v1) == 0) {
        // 0x405bc7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405b88
    int32_t v3 = *v2; // 0x405b90
    int64_t result = fclose(stream); // 0x405b9e
    if (v3 != 0) {
        // 0x405bd0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405ba0
    return result;
}
// Address range: 0x405be0 - 0x405c20
int64_t function_405be0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405bfa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405bfa
        return fflush(stream);
    }
    // 0x405c08
    function_405c20(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405c20 - 0x405c77
int64_t function_405c20(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405c20
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405c2a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405c5b
    int64_t result = -1; // 0x405c64
    if (v1 != -1) {
        // 0x405c66
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405c72
    return result;
}
// Address range: 0x405c80 - 0x405cdd
int64_t function_405c80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405c80
    return function_4013e8();
}
// Address range: 0x405ce0 - 0x405ce1
int64_t function_405ce0(void) {
    // 0x405ce0
    int64_t result; // 0x405ce0
    return result;
}
// Address range: 0x405cf0 - 0x405d08
int64_t function_405cf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405cf0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x405d08 - 0x405d28
int64_t function_405d08(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x405d12
    while (*(int64_t *)v1 != -1) {
        // 0x405d13
        v1 -= 8;
    }
    // 0x405d24
    return result;
}
