// Address range: 0x401580 - 0x401585
int64_t function_401580(void) {
    // 0x401580
    abort();
    // UNREACHABLE
}
// Address range: 0x401585 - 0x40158a
int64_t function_401585(void) {
    // 0x401585
    abort();
    // UNREACHABLE
}
// Address range: 0x40158a - 0x40158f
int64_t function_40158a(void) {
    // 0x40158a
    abort();
    // UNREACHABLE
}
// Address range: 0x40158f - 0x401594
int64_t function_40158f(void) {
    // 0x40158f
    abort();
    // UNREACHABLE
}
// Address range: 0x401594 - 0x401599
int64_t function_401594(void) {
    // 0x401594
    abort();
    // UNREACHABLE
}
// Address range: 0x401599 - 0x40159e
int64_t function_401599(void) {
    // 0x401599
    abort();
    // UNREACHABLE
}
// Address range: 0x4015a0 - 0x4017e0
int64_t function_4015a0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x4015a8
    function_401e00(a2);
    setlocale(LC_ALL, (char *)&g13);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x4015a0
    function_4058e0(0x401bd0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_401cf0(v1, a2, "yes", "GNU coreutils", (int64_t)g20, 0x4018c0);
    if ((int32_t)function_405020(v1, a2, &g2, &g4, 0, 0x4018c0) != -1) {
        // 0x4017c6
        function_4018c0(1);
        // UNREACHABLE
    }
    int32_t v3 = *(int32_t *)0x60923c; // 0x40163c
    int64_t v4 = (0x100000000 * a1 >> 29) + a2; // 0x40164d
    int64_t v5 = v4; // 0x401654
    if (v3 == (int32_t)a1) {
        // 0x401656
        *(int64_t *)v4 = (int64_t)&g3;
        v5 = v4 + 8;
    }
    int64_t v6 = 8 * (int64_t)v3 + a2; // 0x401646
    if (v5 <= v6) {
        int64_t result = function_404040(0x2000); // 0x4017d5
        *(char *)(result - 1) = 10;
        return result;
    }
    int64_t str = *(int64_t *)v6; // 0x40166a
    int64_t v7 = v6 + 8; // 0x401688
    int64_t v8 = (int64_t)strlen((char *)str) + 1; // 0x401691
    int64_t v9 = 1; // 0x40169b
    int64_t v10 = v8; // 0x40169b
    int64_t v11 = v7; // 0x40169b
    int64_t v12 = 1; // 0x40169b
    if (v7 < v5) {
        int64_t str2 = *(int64_t *)v11; // 0x401720
        v12 &= 0xffffffff;
        v11 += 8;
        int64_t v13 = (int64_t)strlen((char *)str2) + 1; // 0x401691
        v10 += v13;
        v9 = v12;
        while (v11 < v5) {
            int64_t v14 = str2;
            str2 = *(int64_t *)v11;
            v12 &= 0xffffffff;
            v11 += 8;
            v13 = (int64_t)strlen((char *)str2) + 1;
            v10 += v13;
            v9 = v12;
        }
    }
    int64_t v15 = 0x2000; // 0x4016a4
    int64_t v16; // 0x4015a0
    int64_t v17; // 0x4015a0
    int64_t v18; // 0x4015a0
    if (v15 < 0x1001) {
        goto lab_0x401704;
    } else {
        // 0x4016a6
        v16 = v15;
        v17 = str;
        v18 = v9;
        if ((char)v9 == 0) {
            goto lab_0x401704;
        } else {
            goto lab_0x4016ab;
        }
    }
  lab_0x401704:;
    int64_t v19 = function_404040(v15); // 0x40170a
    v16 = v15;
    v17 = v19;
    v18 = 0;
    goto lab_0x4016ab;
  lab_0x4016ab:;
    int64_t v20 = 0;
    int64_t str3 = *(int64_t *)v6; // 0x4016c7
    int32_t len = strlen((char *)str3); // 0x4016d3
    if ((char)v18 == 0) {
        // 0x4016e5
        memcpy((int64_t *)(v20 + v17), (int64_t *)str3, len);
    }
    int64_t v21 = v20 + (int64_t)len; // 0x4016b0
    int64_t v22 = v6 + 8; // 0x4016b4
    int64_t v23 = v21 + 1; // 0x4016b8
    char * v24 = (char *)(v21 + v17);
    *v24 = 32;
    int64_t v25 = v22; // 0x4016c5
    while (v5 > v22) {
        // 0x4016c7
        v20 = v23;
        str3 = *(int64_t *)v25;
        len = strlen((char *)str3);
        if ((char)v18 == 0) {
            // 0x4016e5
            memcpy((int64_t *)(v20 + v17), (int64_t *)str3, len);
        }
        // 0x4016b0
        v21 = v20 + (int64_t)len;
        v22 = v25 + 8;
        v23 = v21 + 1;
        v24 = (char *)(v21 + v17);
        *v24 = 32;
        v25 = v22;
    }
    // 0x401738
    *v24 = 10;
    uint64_t v26 = v16 / v23;
    int64_t v27 = v26 - 1; // 0x401749
    int64_t v28 = v23; // 0x40174d
    if (v27 != 0) {
        int64_t dest_mem = v17; // 0x401754
        int64_t v29 = v27; // 0x401754
        v29--;
        dest_mem += v23;
        while (v29 != 0) {
            // 0x401758
            v29--;
            dest_mem += v23;
        }
        // 0x401772
        v28 = v26 * v23;
    }
    int64_t v30 = v28;
    while (function_401c70(1, v17, v30) == v30) {
        // continue -> 0x401776
    }
    // 0x40178b
    error(0, *__errno_location(), dcgettext(NULL, "standard output", 5));
    return 1;
}
// Address range: 0x4017e0 - 0x40180b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4017e0
    int64_t v1; // 0x4017e0
    __libc_start_main(0x4015a0, (int32_t)a4, (char **)&v1, (void (*)())0x405870, (void (*)())0x4058d0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40180b - 0x40182a
int64_t function_40180b(void) {
    // 0x40180b
    return &g30;
}
// Address range: 0x40182a - 0x401861
int64_t function_40182a(void) {
    // 0x40182a
    return 0;
}
// Address range: 0x401861 - 0x4018b8
int64_t function_401861(void) {
    // 0x401861
    if (g34 != 0) {
        // 0x4018b7
        int64_t result; // 0x401861
        return result;
    }
    int64_t v1 = g35; // 0x401894
    int64_t result2; // 0x4018a6
    if (g35 >= ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x4018a6
        result2 = function_40180b();
        g34 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x401896
        v1++;
    }
    // 0x40188a
    g35 = v1;
    // 0x4018a6
    result2 = function_40180b();
    g34 = 1;
    return result2;
}
// Address range: 0x4018b8 - 0x4018bd
int64_t function_4018b8(void) {
    // 0x4018b8
    return function_40182a();
}
// Address range: 0x4018c0 - 0x401bad
int64_t function_4018c0(int64_t a1) {
    int32_t status = a1; // 0x4018d6
    if (status != 0) {
        // 0x4018da
        __fprintf_chk(g33, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4018ff
        exit(status);
        // UNREACHABLE
    }
    // 0x401906
    __printf_chk(1, dcgettext(NULL, "Usage: %s [STRING]...\n  or:  %s OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Repeatedly output a line with all specified STRING(s), or 'y'.\n\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    int64_t v1 = &g1; // bp-136, 0x401990
    bool v2; // 0x4018c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401a10
    int64_t v6 = *(int64_t *)v5; // 0x401a14
    int64_t v7 = 4; // 0x401a1a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"yes";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401a26
        char v11 = *(char *)v9; // 0x401a26
        char v12 = v11; // 0x401a26
        bool v13 = false; // 0x401a26
        while (v10 == v11) {
            // 0x401a1c
            v7--;
            int64_t v14 = v9 + v3; // 0x401a26
            int64_t v15 = v8 + v3; // 0x401a26
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
            // break -> 0x401a32
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x401a32
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401b44;
        } else {
            // 0x401b2e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401b83
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401a94;
            } else {
                goto lab_0x401b44;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401a94;
        } else {
            // 0x401a7a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401b83
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401a94;
            } else {
                goto lab_0x401a94;
            }
        }
    }
  lab_0x401b44:
    // 0x401b44
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401ad4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018ff
    exit(status);
    // UNREACHABLE
  lab_0x401a94:
    // 0x401a94
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401ad4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018ff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401bb0 - 0x401bb8
int64_t function_401bb0(int64_t a1) {
    // 0x401bb0
    g37 = a1;
    int64_t result; // 0x401bb0
    return result;
}
// Address range: 0x401bc0 - 0x401bc8
int64_t function_401bc0(int64_t a1) {
    // 0x401bc0
    g36 = a1;
    int64_t result; // 0x401bc0
    return result;
}
// Address range: 0x401bd0 - 0x401c6e
int64_t function_401bd0(void) {
    // 0x401bd0
    int32_t * err_num; // 0x401be6
    if ((int32_t)function_405120((int64_t)g31) == 0) {
        goto lab_0x401bfc;
    } else {
        // 0x401be6
        err_num = __errno_location();
        if (g36 == 0) {
            goto lab_0x401c13;
        } else {
            // 0x401bf7
            if (*err_num != 32) {
                goto lab_0x401c13;
            } else {
                goto lab_0x401bfc;
            }
        }
    }
  lab_0x401bfc:;
    int64_t result = function_405120((int64_t)g33); // 0x401c03
    if ((int32_t)result == 0) {
        // 0x401c0c
        return result;
    }
    // 0x401c4e
    _exit(g21);
    // UNREACHABLE
  lab_0x401c13:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401c1f
    if (g37 == 0) {
        // 0x401c59
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401c33
        error(0, *err_num, "%s: %s", (char *)function_403870((int64_t)g37), v1);
    }
    // 0x401c4e
    _exit(g21);
    // UNREACHABLE
}
// Address range: 0x401c70 - 0x401ce6
int64_t function_401c70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x401c70
    if (a3 == 0) {
        // 0x401cb4
        return 0;
    }
    int64_t v1 = a3; // 0x401c8b
    int64_t v2 = a2; // 0x401c8b
    int64_t result = 0;
    int64_t v3 = function_403a40(a1 & 0xffffffff, v2, v1); // 0x401ca9
    int64_t result2 = result; // 0x401cb2
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x401cc8
            *__errno_location() = 28;
            return result;
        }
        int64_t v4 = v3 + result; // 0x401c95
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x401cb4
            break;
        }
        result = v4;
        v3 = function_403a40(a1 & 0xffffffff, v2, v1);
        result2 = result;
    }
    // 0x401cb4
    return result2;
}
// Address range: 0x401cf0 - 0x401df2
int64_t function_401cf0(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x401cf0
    int64_t v1; // 0x401cf0
    if ((char)v1 != 0) {
        // 0x401d03
        int128_t v2; // 0x401cf0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g28; // 0x401d3a
    g28 = 0;
    if ((int32_t)a1 != 2) {
        // 0x401d4f
        g28 = v3;
        g29 = 0;
        int64_t result; // 0x401cf0
        return result;
    }
    int64_t result2 = function_405020(a1, a2, &g2, (int64_t *)&g5, 0, a6); // 0x401d89
    int32_t v4 = result2; // 0x401d8e
    switch (v4) {
        default: {
            // 0x401d98
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x401dba
                function_403ea0((int64_t)g31, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x401d4f
            g28 = v3;
            g29 = 0;
            return result2;
        }
    }
}
// Address range: 0x401e00 - 0x401e99
int64_t function_401e00(int64_t str) {
    // 0x401e00
    if (str == 0) {
        // 0x401e79
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g33);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401e0e
    int64_t result = (int64_t)found_char_pos; // 0x401e0e
    if (found_char_pos == NULL) {
        // 0x401e69
        g38 = str;
        g32 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401e18
    if (v1 - str < 7) {
        // 0x401e69
        g38 = str;
        g32 = str;
        return result;
    }
    // 0x401e28
    bool v2; // 0x401e00
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401e00
    int64_t v5 = result - 6; // 0x401e00
    int64_t v6 = 7; // 0x401e36
    unsigned char v7 = *(char *)v5; // 0x401e36
    char v8 = *(char *)v4; // 0x401e36
    char v9 = v8; // 0x401e36
    bool v10 = false; // 0x401e36
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
    int64_t v12 = (int64_t)"lt-"; // 0x401e40
    int64_t v13 = v1; // 0x401e40
    int64_t v14 = 3; // 0x401e40
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401e69
        g38 = str;
        g32 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401e52
    char v16 = *(char *)v12; // 0x401e52
    char v17 = v16; // 0x401e52
    bool v18 = false; // 0x401e52
    while (v15 == v16) {
        // 0x401e42
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
    int64_t v20 = v1; // 0x401e5c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401e5e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x401e69
    g38 = v20;
    g32 = v20;
    return result;
}
// Address range: 0x401ea0 - 0x401f92
int64_t function_401ea0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401eb4
    int64_t result = (int64_t)v1; // 0x401eb4
    if (result != a1) {
        // 0x401ec1
        return result;
    }
    int64_t v2 = function_4051e0(); // 0x401ed0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401f86
    if (v3 == 85) {
        // 0x401ee0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401f78
            result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x401f0e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x401f1b
        // 0x401ec1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401f78
        result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x401f5d
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x401f6a
    // 0x401ec1
    return result4;
}
// Address range: 0x401fa0 - 0x401ff7
int64_t function_401fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401fa0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401fe8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401ff7 - 0x4031c1
int64_t function_401ff7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402041
    int64_t v3 = 0; // 0x402041
    int64_t v4; // 0x401ff7
    int64_t v5; // 0x401ff7
    int64_t v6; // 0x401ff7
    int64_t v7; // 0x401ff7
    int64_t v8; // 0x401ff7
    int64_t v9; // 0x401ff7
    int64_t v10; // 0x401ff7
    int64_t v11; // 0x401ff7
    int64_t v12; // 0x401ff7
    int64_t v13; // 0x401ff7
    int64_t v14; // 0x401ff7
    int64_t v15; // 0x401ff7
    int64_t v16; // 0x401ff7
    int64_t v17; // 0x401ff7
    int64_t v18; // 0x401ff7
    int64_t result; // 0x401ff7
    int64_t v19; // 0x401ff7
    int32_t wc; // bp+132, 0x401ff7
    int64_t ps; // bp+136, 0x401ff7
    char v20; // 0x4025b0
    int64_t v21; // 0x4025b0
    int64_t v22; // 0x402958
    int64_t v23; // 0x401ff7
    int64_t v24; // 0x402977
    int32_t v25; // 0x401ff7
    while (true) {
      lab_0x402048_2:
        // 0x402048
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401ff7
        int64_t v27; // 0x40207c
        while (true) {
          lab_0x402048:
            // 0x402048
            v5 = v26;
            bool v28 = v15 == v5; // 0x402053
            if (v15 == -1) {
                // 0x402055
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402063
            if (v28) {
                // break (via goto) -> 0x4027c8
                goto lab_0x4027c8;
            }
            // 0x40206c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g49 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40265b
                    if (v25 % 2 == 0) {
                        goto lab_0x4021a1;
                    }
                    // 0x402a7d
                    v26 = v5 + 1;
                    goto lab_0x402048;
                }
                case 7: {
                    goto lab_0x4021a1;
                }
                case 8: {
                    goto lab_0x4021a1;
                }
                case 9: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4021a1;
                }
                case 12: {
                    goto lab_0x4021a1;
                }
                case 13: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40216d;
                }
                case 36: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4021a1;
                }
                case 38: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4021a1;
                }
                case 44: {
                    goto lab_0x4021a1;
                }
                case 45: {
                    goto lab_0x4021a1;
                }
                case 46: {
                    goto lab_0x4021a1;
                }
                case 47: {
                    goto lab_0x4021a1;
                }
                case 48: {
                    goto lab_0x4021a1;
                }
                case 49: {
                    goto lab_0x4021a1;
                }
                case 50: {
                    goto lab_0x4021a1;
                }
                case 51: {
                    goto lab_0x4021a1;
                }
                case 52: {
                    goto lab_0x4021a1;
                }
                case 53: {
                    goto lab_0x4021a1;
                }
                case 54: {
                    goto lab_0x4021a1;
                }
                case 55: {
                    goto lab_0x4021a1;
                }
                case 56: {
                    goto lab_0x4021a1;
                }
                case 57: {
                    goto lab_0x4021a1;
                }
                case 58: {
                    goto lab_0x4021a1;
                }
                case 59: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4021a1;
                }
                case 66: {
                    goto lab_0x4021a1;
                }
                case 67: {
                    goto lab_0x4021a1;
                }
                case 68: {
                    goto lab_0x4021a1;
                }
                case 69: {
                    goto lab_0x4021a1;
                }
                case 70: {
                    goto lab_0x4021a1;
                }
                case 71: {
                    goto lab_0x4021a1;
                }
                case 72: {
                    goto lab_0x4021a1;
                }
                case 73: {
                    goto lab_0x4021a1;
                }
                case 74: {
                    goto lab_0x4021a1;
                }
                case 75: {
                    goto lab_0x4021a1;
                }
                case 76: {
                    goto lab_0x4021a1;
                }
                case 77: {
                    goto lab_0x4021a1;
                }
                case 78: {
                    goto lab_0x4021a1;
                }
                case 79: {
                    goto lab_0x4021a1;
                }
                case 80: {
                    goto lab_0x4021a1;
                }
                case 81: {
                    goto lab_0x4021a1;
                }
                case 82: {
                    goto lab_0x4021a1;
                }
                case 83: {
                    goto lab_0x4021a1;
                }
                case 84: {
                    goto lab_0x4021a1;
                }
                case 85: {
                    goto lab_0x4021a1;
                }
                case 86: {
                    goto lab_0x4021a1;
                }
                case 87: {
                    goto lab_0x4021a1;
                }
                case 88: {
                    goto lab_0x4021a1;
                }
                case 89: {
                    goto lab_0x4021a1;
                }
                case 90: {
                    goto lab_0x4021a1;
                }
                case 91: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4021a1;
                }
                case 94: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4021a1;
                }
                case 96: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4021a1;
                }
                case 98: {
                    goto lab_0x4021a1;
                }
                case 99: {
                    goto lab_0x4021a1;
                }
                case 100: {
                    goto lab_0x4021a1;
                }
                case 101: {
                    goto lab_0x4021a1;
                }
                case 102: {
                    goto lab_0x4021a1;
                }
                case 103: {
                    goto lab_0x4021a1;
                }
                case 104: {
                    goto lab_0x4021a1;
                }
                case 105: {
                    goto lab_0x4021a1;
                }
                case 106: {
                    goto lab_0x4021a1;
                }
                case 107: {
                    goto lab_0x4021a1;
                }
                case 108: {
                    goto lab_0x4021a1;
                }
                case 109: {
                    goto lab_0x4021a1;
                }
                case 110: {
                    goto lab_0x4021a1;
                }
                case 111: {
                    goto lab_0x4021a1;
                }
                case 112: {
                    goto lab_0x4021a1;
                }
                case 113: {
                    goto lab_0x4021a1;
                }
                case 114: {
                    goto lab_0x4021a1;
                }
                case 115: {
                    goto lab_0x4021a1;
                }
                case 116: {
                    goto lab_0x4021a1;
                }
                case 117: {
                    goto lab_0x4021a1;
                }
                case 118: {
                    goto lab_0x4021a1;
                }
                case 119: {
                    goto lab_0x4021a1;
                }
                case 120: {
                    goto lab_0x4021a1;
                }
                case 121: {
                    goto lab_0x4021a1;
                }
                case 122: {
                    goto lab_0x4021a1;
                }
                case 123: {
                    goto lab_0x402145;
                }
                case 124: {
                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402145;
                }
                case 126: {
                    goto lab_0x40216d;
                }
                default: {
                    goto lab_0x402545;
                }
            }
        }
      lab_0x402545:
        if (v23 != 1) {
            // 0x4028b0
            ps = 0;
            int64_t len = v15; // 0x4028c0
            if (v15 == -1) {
                // 0x4028c2
                len = strlen((char *)str);
            }
            // 0x4028ee
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40294f:
                // 0x40294f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402954
                int64_t v30 = v29 + str;
                v24 = function_4050a0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402eca_2;
                    }
                    case -1: {
                        goto lab_0x402eca_2;
                    }
                    case -2: {
                        // 0x402fad
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402fe7
                            v19 = v18;
                            int64_t v31 = v18; // 0x402fea
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402ff7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402ff0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402eca
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402eca_2;
                    }
                    case 1: {
                        goto lab_0x402920;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4029cc
                        char v34 = *(char *)v33; // 0x4029dd
                        unsigned char v35; // 0x401ff7
                        if (v34 < 125) {
                            // 0x4029e8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4029ff
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4029d0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4029dd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4029e8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4029ff
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4029d0
                            v33++;
                        }
                        goto lab_0x402920;
                    }
                }
            }
            goto lab_0x402eca_2;
        } else {
            // 0x402594
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4021a1;
        }
    }
  lab_0x4027c8:
    // 0x4027c8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4030ca
        if (v8 > result) {
            // 0x4030d3
            *(char *)(v12 + result) = 0;
        }
        // 0x4023f7
        return result;
    }
    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4021a1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4021b0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4023ba_2;
        }
    }
    int64_t v39 = result; // 0x4022b1
    char v40 = v20; // 0x4022b1
    int64_t v41 = v38; // 0x4022b1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4022b1
    int64_t v43 = v36; // 0x4022b1
    goto lab_0x40222d;
  lab_0x4023ba_2:
    // 0x4023f7
    return function_401fa0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402eca_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4021a1;
    } else {
        uint64_t v49 = v46 + v5; // 0x402a9e
        int64_t v50 = v5 + 1; // 0x402b81
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402b88
        char v52 = v20; // 0x402b88
        int64_t v53 = result; // 0x402b88
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402b51
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402b55
            int64_t v56 = v54 + 1; // 0x402b5a
            int64_t v57 = v51 + 1; // 0x402b81
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402b4c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402b51
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402b55
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
        goto lab_0x40222d;
    }
  lab_0x402920:
    // 0x402920
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40293f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402942
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402eca
        goto lab_0x402eca_2;
    }
    goto lab_0x40294f;
  lab_0x40216d:
    // 0x40216d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4023ba_2;
    }
    goto lab_0x4021a1;
  lab_0x402145:;
    bool v60 = v15 == 1; // 0x402150
    if (v15 == -1) {
        // 0x402152
        v60 = *(char *)v1 == 0;
    }
    // 0x40215e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4021a1;
    } else {
        goto lab_0x40216d;
    }
  lab_0x40222d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402232
        *(char *)(v44 + v45) = v40;
    }
    // 0x402236
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402048_2;
}
// Address range: 0x4031d0 - 0x40336e
int64_t function_4031d0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4031d2
    int32_t * v3 = __errno_location(); // 0x4031ec
    int64_t v4 = (int64_t)g23; // 0x4031f1
    int32_t v5 = *v3; // 0x4031fb
    int64_t v6 = v4; // 0x403211
    if (v2 >= (int64_t)*(int32_t *)&g26) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403369
            function_404290(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403220
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403227
        int64_t v9; // 0x4031d0
        if (g23 == &g24) {
            int64_t v10 = function_4040a0(0, v8); // 0x40334a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g24); // 0x40334f
            *(int64_t *)&g23 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4040a0(v4, v8); // 0x40323b
            *(int64_t *)&g23 = v12;
            v9 = v12;
        }
        // 0x40324a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g26; // 0x40324a
        int32_t v14 = v7; // 0x403251
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g26 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403281
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40328b
    int64_t * v17 = (int64_t *)v15; // 0x40328e
    uint64_t v18 = *v17; // 0x40328e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403291
    int64_t result = *v19; // 0x403291
    int64_t v20; // 0x4031d0
    uint64_t v21 = function_401fa0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4032b4
    if (v18 > v21) {
        // 0x40332b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4032c7
    *v17 = v22;
    if (result != (int64_t)&g39) {
        // 0x4032d7
        free((int64_t *)result);
    }
    int64_t result2 = function_404040(v22); // 0x4032f1
    *v19 = result2;
    int64_t v23; // 0x4031d0
    function_401fa0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40332b
    *v3 = v5;
    return result2;
}
// Address range: 0x403370 - 0x4033a4
int64_t function_403370(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403377
    int64_t result = function_404240(a1 == 0 ? (int64_t)&g40 : a1, 56); // 0x403396
    return result;
}
// Address range: 0x4033b0 - 0x4033bf
int64_t function_4033b0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g40 : a1); // 0x4033bc
    return result;
}
// Address range: 0x4033c0 - 0x4033cf
int64_t function_4033c0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x4033c8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g40;
}
// Address range: 0x4033d0 - 0x403403
int64_t function_4033d0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 + 8 : a1 + 8; // 0x4033e9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4033ee
    uint32_t v3 = *v2; // 0x4033ee
    uint32_t v4 = (int32_t)a2 % 32; // 0x4033f2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403410 - 0x403423
int64_t function_403410(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g40 + 4 : a1 + 4); // 0x40341c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403430 - 0x40345b
int64_t function_403430(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x403438
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403455
        abort();
        // UNREACHABLE
    }
    // 0x40344c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g40;
}
// Address range: 0x403460 - 0x4034d2
int64_t function_403460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g40 : a5; // 0x403482
    int32_t * v2 = __errno_location(); // 0x40348b
    uint32_t v3 = *(int32_t *)v1; // 0x4034ab
    int64_t result = function_401fa0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4034ba
    return result;
}
// Address range: 0x4034e0 - 0x4035c1
int64_t function_4034e0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g40 : a4; // 0x403502
    int32_t * v2 = __errno_location(); // 0x403508
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403527
    int32_t * v4 = (int32_t *)v1; // 0x40352a
    int64_t v5 = function_401fa0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403545
    int64_t v6 = v5 + 1; // 0x40354a
    int64_t result = function_404040(v6); // 0x40355f
    function_401fa0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4035a4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4035ad
    return result;
}
// Address range: 0x4035d0 - 0x4035da
int64_t function_4035d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4035d0
    return function_4034e0(a1, a2, 0, a3);
}
// Address range: 0x4035e0 - 0x403675
int64_t function_4035e0(void) {
    uint32_t v1 = *(int32_t *)&g26; // 0x4035e0
    int64_t v2 = v1; // 0x4035e0
    int64_t v3 = v2; // 0x4035f4
    if (v1 >= 2) {
        int64_t v4 = &g26;
        int64_t v5 = v4 + 16; // 0x403613
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g23 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403610
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x40362d
    if (g24 != 0x6092a0) {
        // 0x40362f
        free((int64_t *)g24);
        g24 = 256;
        *(int64_t *)&g25 = (int64_t)&g39;
        v6 = &g50;
    }
    int64_t result = v6; // 0x403651
    if (g23 != &g24) {
        // 0x403653
        free(g23);
        *(int64_t *)&g23 = (int64_t)&g24;
        result = &g50;
    }
    // 0x403666
    *(int32_t *)&g26 = 1;
    return result;
}
// Address range: 0x403680 - 0x403691
int64_t function_403680(void) {
    // 0x403680
    int64_t v1; // 0x403680
    return function_4031d0(v1, v1, -1, (int64_t *)&g40);
}
// Address range: 0x4036a0 - 0x4036aa
int64_t function_4036a0(void) {
    // 0x4036a0
    int64_t v1; // 0x4036a0
    return function_4031d0(v1, v1, v1, (int64_t *)&g40);
}
// Address range: 0x4036b0 - 0x4036c6
int64_t function_4036b0(int64_t a1) {
    // 0x4036b0
    return function_4031d0(0, a1, -1, (int64_t *)&g40);
}
// Address range: 0x4036d0 - 0x4036e2
int64_t function_4036d0(int64_t a1, int64_t a2) {
    // 0x4036d0
    return function_4031d0(0, a1, a2, (int64_t *)&g40);
}
// Address range: 0x4036f0 - 0x403758
int64_t function_4036f0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403700
    return function_4031d0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403760 - 0x4037c4
int64_t function_403760(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403770
    return function_4031d0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4037d0 - 0x4037dc
int64_t function_4037d0(int64_t a1, int64_t a2) {
    // 0x4037d0
    return function_4036f0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4037e0 - 0x4037ef
int64_t function_4037e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4037e0
    return function_403760(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4037f0 - 0x403860
int64_t function_4037f0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x4037fd
    int128_t v2 = __asm_movdqa(g41); // 0x403805
    int128_t v3 = __asm_movdqa(g42); // 0x40380d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403822
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403838
    uint32_t v6 = *v5; // 0x403838
    uint32_t v7 = (int32_t)a3 % 32; // 0x40383d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4031d0(0, a1, a2, &v4);
}
// Address range: 0x403860 - 0x40386d
int64_t function_403860(int64_t a1, int64_t a2) {
    // 0x403860
    return function_4037f0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403870 - 0x403881
int64_t function_403870(int64_t a1) {
    // 0x403870
    return function_4037f0(a1, -1, 58);
}
// Address range: 0x403890 - 0x40389a
int64_t function_403890(void) {
    // 0x403890
    int64_t v1; // 0x403890
    return function_4037f0(v1, v1, 58);
}
// Address range: 0x4038a0 - 0x40390e
int64_t function_4038a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4038ba
    return function_4031d0(a1, a3, -1, &v1);
}
// Address range: 0x403910 - 0x40397c
int64_t function_403910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x403917
    int128_t v2 = __asm_movdqa(g41); // 0x40391f
    int128_t v3 = __asm_movdqa(g42); // 0x403927
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403949
    if (a2 == 0 || a3 == 0) {
        // 0x403977
        abort();
        // UNREACHABLE
    }
    // 0x40395a
    return function_4031d0(a1, a4, a5, &v4);
}
// Address range: 0x403980 - 0x403989
int64_t function_403980(void) {
    // 0x403980
    int64_t v1; // 0x403980
    return function_403910(v1, v1, v1, v1, -1);
}
// Address range: 0x403990 - 0x4039a7
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403990
    return function_403910(0, a1, a2, a3, -1);
}
// Address range: 0x4039b0 - 0x4039c3
int64_t function_4039b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4039b0
    return function_403910(0, a1, a2, a3, a4);
}
// Address range: 0x4039d0 - 0x4039da
int64_t function_4039d0(void) {
    // 0x4039d0
    int64_t v1; // 0x4039d0
    return function_4031d0(v1, v1, v1, &g22);
}
// Address range: 0x4039e0 - 0x4039f2
int64_t function_4039e0(int64_t a1, int64_t a2) {
    // 0x4039e0
    return function_4031d0(0, a1, a2, &g22);
}
// Address range: 0x403a00 - 0x403a11
int64_t function_403a00(void) {
    // 0x403a00
    int64_t v1; // 0x403a00
    return function_4031d0(v1, v1, -1, &g22);
}
// Address range: 0x403a20 - 0x403a36
int64_t function_403a20(int64_t a1) {
    // 0x403a20
    return function_4031d0(0, a1, -1, &g22);
}
// Address range: 0x403a40 - 0x403a9e
int64_t function_403a40(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x403a61
    while (result < 0) {
        // 0x403a6e
        if (*__errno_location() != 4) {
            // break -> 0x403a7a
            break;
        }
        result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x403aa0 - 0x403e7d
int64_t function_403aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403b38
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403abc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403ad6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403b1b
    if (a6 < 10) {
        // 0x403b2a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403c22
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403e80 - 0x403ea0
int64_t function_403e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403e80
    if (a5 == 0) {
        // 0x403e9b
        return function_403aa0(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x403e87
    v1++;
    int64_t v2 = v1; // 0x403e99
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403e90
        v1++;
        v2 = v1;
    }
    // 0x403e9b
    return function_403aa0(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x403ea0 - 0x403f00
int64_t function_403ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x403ea0
    int64_t v4 = &v3; // 0x403ea0
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x403ed3
    int64_t v7; // 0x403ebd
    int64_t * v8; // 0x403edb
    int64_t v9; // 0x403edb
    int64_t v10; // 0x403ee7
    if (v6 < 48) {
        // 0x403eb0
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x403ef3
            break;
        }
    } else {
        // 0x403edb
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x403ef3
            break;
        }
    }
    int64_t v11 = 10; // 0x403ed1
    while (v5 != 9) {
        // 0x403ec9
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x403eb0
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x403ef3
                break;
            }
        } else {
            // 0x403edb
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x403ef3
                break;
            }
        }
        // 0x403ec9
        v11 = 10;
    }
    // 0x403ef3
    return function_403aa0(a1, a2, a3, a4, v4, v11, (int64_t)&g50);
}
// Address range: 0x403f00 - 0x403fbc
int64_t function_403f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403f00
    int64_t v1; // bp-168, 0x403f00
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403f00
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403f00
    int64_t v8; // 0x403f00
    int64_t v9; // bp-56, 0x403f00
    int64_t v10; // 0x403f65
    int64_t v11; // 0x403f89
    if ((int32_t)v6 < 48) {
        // 0x403f50
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403fa0
            break;
        }
    } else {
        // 0x403f82
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403fa0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403f7a
    int64_t v13 = 10; // 0x403f7a
    while (v5 != 9) {
        // 0x403f7c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403f50
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403fa0
                break;
            }
        } else {
            // 0x403f82
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403fa0
                break;
            }
        }
        // 0x403f72
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403fa0
    int64_t v14; // bp-136, 0x403f00
    int64_t result = function_403aa0(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x403faf
    return result;
}
// Address range: 0x403fc0 - 0x404034
int64_t function_403fc0(int64_t a1) {
    // 0x403fc0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404023
    return fputs_unlocked(v1, g31);
}
// Address range: 0x404040 - 0x40405a
int64_t function_404040(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404044
    if (size != 0 != (mem == NULL)) {
        // 0x404053
        return (int64_t)mem;
    }
    // 0x404055
    function_404290(size);
    // UNREACHABLE
}
// Address range: 0x404060 - 0x404081
int64_t function_404060(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404063
    int64_t v2 = v1; // 0x404063
    if (v2 < 0) {
        // 0x40407b
        function_404290(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404079
        return function_404040(v2);
    }
    // 0x40407b
    function_404290(v2);
    // UNREACHABLE
}
// Address range: 0x404090 - 0x404092
int64_t function_404090(void) {
    // 0x404090
    int64_t v1; // 0x404090
    return function_404040(v1);
}
// Address range: 0x4040a0 - 0x4040d6
int64_t function_4040a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4040c8
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4040b1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4040c0
        return (int64_t)mem;
    }
    // 0x4040d1
    function_404290(a1);
    // UNREACHABLE
}
// Address range: 0x4040e0 - 0x404101
int64_t function_4040e0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4040e3
    int64_t v2 = v1; // 0x4040e3
    if (v2 < 0) {
        // 0x4040fb
        function_404290(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4040f9
        return function_4040a0(a1, v2);
    }
    // 0x4040fb
    function_404290(a1);
    // UNREACHABLE
}
// Address range: 0x404110 - 0x404196
int64_t function_404110(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40416b
            function_404290(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4040a0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404153
    if (a2 == 0) {
        // 0x404178
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404158
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40416b
        function_404290(a1);
        // UNREACHABLE
    }
    // 0x40413a
    *(int64_t *)a2 = v2;
    return function_4040a0(a1, v2 * a3);
}
// Address range: 0x4041a0 - 0x4041f0
int64_t function_4041a0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4041a0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4041ea
            function_404290(a1);
            // UNREACHABLE
        }
        // 0x4041c2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4040a0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4041d5
        *(int64_t *)a2 = 128;
        return function_4040a0(0, 128);
    }
    // 0x4041e8
    if (a2 < 0) {
        // 0x4041ea
        function_404290(a1);
        // UNREACHABLE
    }
    // 0x4041c2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4040a0(a1, v1);
}
// Address range: 0x4041f0 - 0x404207
int64_t function_4041f0(int64_t a1, int64_t a2) {
    // 0x4041f0
    return (int64_t)memset((int64_t *)function_404040(a1), 0, (int32_t)a1);
}
// Address range: 0x404210 - 0x40423e
int64_t function_404210(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404217
    if ((int64_t)v1 < 0) {
        // 0x404239
        function_404290(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404239
        function_404290(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40422a
    if (mem != NULL) {
        // 0x404234
        return (int64_t)mem;
    }
    // 0x404239
    function_404290(nmemb);
    // UNREACHABLE
}
// Address range: 0x404240 - 0x404268
int64_t function_404240(int64_t a1, int64_t a2) {
    int64_t v1 = function_404040(a2); // 0x40424f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404270 - 0x404283
int64_t function_404270(int64_t str) {
    // 0x404270
    return function_404240(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404290 - 0x4042c1
int64_t function_404290(int64_t a1) {
    // 0x404290
    error(g21, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4042d0 - 0x4043af
int64_t function_4042d0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4042dc
    uint32_t v2 = *v1; // 0x4042dc
    int64_t v3 = a2 & 0xffffffff; // 0x4042e1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4042e4
    uint64_t v5 = (int64_t)*v4; // 0x4042e4
    int64_t v6; // 0x404352
    if (v3 <= v5) {
      lab_0x40434c_2:
        // 0x40434c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4042d2
    int64_t v8 = v2; // 0x4042d0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40434c
        goto lab_0x40434c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404308
    int64_t v17; // 0x404316
    int64_t * v18; // 0x404330
    int64_t * v19; // 0x404333
    int64_t v20; // 0x40433e
    int64_t v21; // 0x404316
    while ((v16 & 0xffffffff) > v10) {
        // 0x404313
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404330
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404347
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40434c
            goto lab_0x40434c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40434c
            goto lab_0x40434c_2;
        }
        // 0x404302
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40438b
    int64_t * v23 = (int64_t *)v22; // 0x404390
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404393
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404390
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4043a7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4042fd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40434c
            goto lab_0x40434c_2;
        }
        // 0x404302
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404313
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404330
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404347
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40434c
                goto lab_0x40434c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40434c
                goto lab_0x40434c_2;
            }
            // 0x404302
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404370
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404390
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4043a7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40434c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4043b0 - 0x4049cc
int64_t function_4043b0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4043cf
    int64_t v2 = *v1; // 0x4043cf
    char * str2 = (char *)v2; // 0x4043dc
    char c = *str2; // 0x4043dc
    int64_t v3 = v2; // 0x404408
    int64_t v4 = 0; // 0x4043b0
    int32_t v5; // 0x4043b0
    int64_t v6; // 0x4043b0
    int64_t v7; // 0x4043b0
    int64_t v8; // 0x4043b0
    int64_t v9; // 0x4043b0
    int64_t v10; // 0x4043b0
    int64_t v11; // 0x4043b0
    int64_t v12; // 0x4043b0
    int64_t v13; // 0x4043b0
    int64_t str3; // 0x4043b0
    int64_t v14; // 0x4043b0
    int64_t v15; // 0x4043b0
    int64_t v16; // 0x4043b0
    int64_t v17; // 0x4043b0
    int32_t v18; // 0x4043b0
    int32_t v19; // 0x4043b0
    int32_t v20; // 0x4043b0
    int32_t v21; // 0x4043b0
    int32_t v22; // 0x4043b0
    int32_t v23; // 0x4043b0
    int32_t v24; // 0x4043b0
    int32_t v25; // 0x4043b0
    int32_t v26; // 0x4043b0
    int32_t v27; // 0x4043b0
    int32_t v28; // 0x4043b0
    int32_t v29; // 0x4043b0
    int64_t nmemb; // 0x4043b0
    int64_t v30; // 0x4043b0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40440c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404408
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404418
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40441e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4043e8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40444c
                int64_t v34; // 0x4043b0
                int64_t v35; // 0x4043b0
                if (strncmp(str, str2, n) == 0) {
                    // 0x404455
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4045d0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404466
                int64_t v37 = *(int64_t *)v36; // 0x40446a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404440
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404455
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4045d0;
                        }
                    }
                    // 0x404466
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
                  lab_0x4044b6:
                    // 0x4044b6
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
                        goto lab_0x404510;
                    } else {
                        if (v11 == 0) {
                            // 0x404680
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404510;
                        } else {
                            if (v39 == 0) {
                                // 0x404630
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4044da;
                                } else {
                                    // 0x40463c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4044da;
                                    } else {
                                        // 0x40464a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4044da;
                                        } else {
                                            goto lab_0x404510;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4044da;
                            }
                        }
                    }
                }
              lab_0x404521:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4046f6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4048a2
                            flockfile(g33);
                            int64_t v41 = *v1; // 0x4048c2
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40490f
                            int64_t v43 = (int64_t)g33;
                            int64_t v44 = v43; // 0x404929
                            int64_t v45; // 0x40492b
                            if (*(char *)v42 != 0) {
                                // 0x40492b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g33;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404923
                            while (v17 + nmemb != v42) {
                                // 0x404925
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40492b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g33;
                                }
                                // 0x404918
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404950
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g33);
                            v40 = *v1;
                        } else {
                            // 0x404704
                            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40485f
                        free((int64_t *)v17);
                    }
                    // 0x404759
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404770
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40461e
                    return 63;
                }
                // 0x404540
                v5 = v39;
                if (v13 != 0) {
                    // 0x4045c4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4045d0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4045e0
                    uint32_t v50 = *v49; // 0x4045e0
                    int64_t v51 = v50; // 0x4045e0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4045ea
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4045f3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40481f
                                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4047ca
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40461e
                            return 63;
                        }
                        // 0x404668
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40497f
                                    __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40487d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404890
                                // 0x40461e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40478e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4047a2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40460b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40460e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404612
                    int64_t result = v59; // 0x404618
                    if (v58 != 0) {
                        // 0x40461a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40461e
                    return result;
                }
            } else {
                // 0x40441e
                v5 = v32;
            }
            // break -> 0x404545
            break;
        }
    }
    // 0x404545
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40455d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404567
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40461e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4046a9
        __fprintf_chk(g33, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404596
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4045a6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404510:
    // 0x404510
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404510
    int64_t v63 = *(int64_t *)v62; // 0x404514
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404521
        goto lab_0x404521;
    }
    goto lab_0x4044b6;
  lab_0x4044da:
    // 0x4044da
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4043b0
    int32_t v65; // 0x4043b0
    int32_t v66; // 0x4043b0
    if (v27 != 0) {
        goto lab_0x404510;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404690
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404510;
            } else {
                goto lab_0x404501;
            }
        } else {
            // 0x4044f5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4047ec
                int64_t v67 = (int64_t)mem; // 0x4047ec
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404510;
                } else {
                    // 0x4047ff
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404501;
                }
            } else {
                goto lab_0x404501;
            }
        }
    }
  lab_0x404501:
    // 0x404501
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404510;
}
// Address range: 0x4049d0 - 0x404f96
int64_t function_4049d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4049f1
    if (v3 < 1) {
        // 0x404bae
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4049ed
    int32_t v5 = *(int32_t *)a7; // 0x4049f9
    uint64_t v6 = a1 & 0xffffffff; // 0x4049fb
    int64_t v7 = v2; // 0x404a00
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404a03
    *v8 = 0;
    int64_t v9; // 0x4049d0
    int64_t v10; // 0x4049d0
    int64_t v11; // 0x4049d0
    int64_t v12; // 0x4049d0
    int64_t str; // 0x4049d0
    int64_t v13; // 0x4049d0
    int64_t v14; // 0x4049d0
    int64_t v15; // 0x4049d0
    int64_t v16; // 0x4049d0
    int64_t v17; // 0x4049d0
    int32_t v18; // 0x4049d0
    char v19; // 0x4049d0
    if (v5 == 0) {
        // 0x404be8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404a1a;
    } else {
        // 0x404a13
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404a60
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404a63
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404b28;
            } else {
                int64_t v22 = v7 + 1; // 0x404a76
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404a86
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404b3c;
                } else {
                    goto lab_0x404a98;
                }
            }
        } else {
            goto lab_0x404a1a;
        }
    }
  lab_0x404a1a:
    // 0x404a1a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404a20
    *v24 = 0;
    int64_t v25; // 0x4049d0
    int64_t v26; // 0x4049d0
    int64_t v27; // 0x4049d0
    switch (*(char *)&v2) {
        case 45: {
            // 0x404b10
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404b1d;
        }
        case 43: {
            // 0x404e20
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404b1d;
        }
        default: {
            // 0x404a3c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404d9f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404eb8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404b1d;
                } else {
                    // 0x404dad
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404a4a;
                }
            } else {
                goto lab_0x404a4a;
            }
        }
    }
  lab_0x404b28:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404b2f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404a98;
    } else {
        goto lab_0x404b3c;
    }
  lab_0x404a4a:
    // 0x404a4a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404b1d;
  lab_0x404b1d:
    // 0x404b1d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404b28;
  lab_0x404a98:;
    uint32_t v30 = *(int32_t *)a7; // 0x404a98
    int64_t v31 = v30; // 0x404a98
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404a9a
    if ((int64_t)*v32 > v31) {
        // 0x404a9f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404aa2
    if (*v33 > v30) {
        // 0x404aa7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404aaa
    int64_t v35 = v31; // 0x404aae
    int64_t v36 = v15; // 0x404aae
    int64_t v37; // 0x4049d0
    int64_t v38; // 0x4049d0
    int64_t v39; // 0x4049d0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404c18
        int64_t v41 = v40; // 0x404c18
        v2 = v41;
        int64_t v42; // 0x4049d0
        if (*v33 == v40) {
            // 0x404e00
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404e08
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404c24
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404c38
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404c41
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404c4a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404c61
            int64_t v47 = v45 & 0xffffffff; // 0x404c65
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404c6e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404c74
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404c76;
                }
            }
            int64_t v48 = v47 + 1; // 0x404c50
            int64_t v49 = v48 & 0xffffffff; // 0x404c50
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404c61
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404c6e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404c74
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404c76;
                    }
                }
                // 0x404c50
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404e18
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404c76;
    } else {
        goto lab_0x404ab4;
    }
  lab_0x404b3c:
    // 0x404b3c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404b3f
    int64_t v51 = v12; // 0x404b3f
    int64_t v52 = v14; // 0x404b3f
    if (*(char *)v10 == 0) {
        goto lab_0x404a98;
    } else {
        goto lab_0x404b45;
    }
  lab_0x404ab4:;
    int32_t v53 = v35; // 0x404ab4
    int64_t v54; // 0x4049d0
    int64_t v55; // 0x4049d0
    int64_t v56; // 0x4049d0
    int64_t v57; // 0x4049d0
    int64_t v58; // 0x4049d0
    int64_t v59; // 0x4049d0
    char * v60; // 0x4049d0
    int64_t v61; // 0x4049d0
    int64_t v62; // 0x404ac9
    int64_t v63; // 0x4049d0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404c03
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404c06;
    } else {
        // 0x404abc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4049d0
        int64_t v66 = v65 ? -1 : 1; // 0x404ad0
        int64_t v67 = (int64_t)"--"; // 0x4049d0
        int64_t v68 = v62; // 0x4049d0
        int64_t v69 = 3; // 0x404ad0
        unsigned char v70 = *(char *)v68; // 0x404ad0
        char v71 = *(char *)v67; // 0x404ad0
        char v72 = v71; // 0x404ad0
        bool v73 = false; // 0x404ad0
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
            // 0x404bc0
            if (*(char *)v62 == 45) {
                // 0x404c80
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404c80
                if (c == 0) {
                    goto lab_0x404bca;
                } else {
                    // 0x404c8d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404d10;
                    } else {
                        if (c == 45) {
                            // 0x404ef3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404d65;
                        } else {
                            // 0x404c9e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404d10;
                            } else {
                                // 0x404ca3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404cc4;
                                } else {
                                    // 0x404caa
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404d10;
                                    } else {
                                        goto lab_0x404cc4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404bca;
            }
        } else {
            uint32_t v75 = *v33; // 0x404ae0
            v2 = v75;
            int32_t v76 = *v32; // 0x404ae3
            int64_t v77 = v35 + 1; // 0x404ae6
            int32_t v78 = v77; // 0x404ae9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404e50
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404af7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404b05
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404c06;
        }
    }
  lab_0x404b45:;
    // 0x404b45
    int64_t v79; // bp-104, 0x4049d0
    int64_t v80 = &v79; // 0x4049da
    int64_t v81 = v50 + 1; // 0x404b45
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404b4c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404b51
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404b55
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404b59
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404b61
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404b66
    int32_t c2 = v84; // 0x404b66
    char * found_char_pos = strchr(str2, c2); // 0x404b66
    int64_t v87 = *v82; // 0x404b6b
    v2 = v87;
    int64_t v88 = *v85; // 0x404b75
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404b80
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404e70
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404e3d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404bae
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404b66
    char v91 = *(char *)(v90 + 1); // 0x404b9b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404b55
        if (v91 != 58) {
            // 0x404bae
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404dc4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404ec8
                *v8 = 0;
            } else {
                // 0x404eac
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404dee
            *v83 = 0;
            // 0x404bae
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404dce
        if (v93 != 0) {
            // 0x404e60
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404dee
            *v83 = 0;
            // 0x404bae
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404de1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404dee
            *v83 = 0;
            // 0x404bae
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404f2a
            __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404eda
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404ee1
        // 0x404dee
        *v83 = 0;
        // 0x404bae
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404d39
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404d3b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404f60
                __fprintf_chk(g33, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404f11
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404f18
            // 0x404bae
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404d46
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404d4a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404d65;
  lab_0x404c76:
    // 0x404c76
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404ab4;
  lab_0x404d65:;
    int64_t v99 = function_4043b0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404d83
    // 0x404bae
    return v99 & 0xffffffff;
  lab_0x404c06:;
    int32_t v100 = v55; // 0x404c06
    if (v100 != (int32_t)v59) {
        // 0x404c0a
        *(int32_t *)a7 = v100;
    }
    // 0x404bae
    return 0xffffffff;
  lab_0x404bca:
    // 0x404bca
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404bd1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404bae
    return v99 & 0xffffffff;
  lab_0x404d10:
    // 0x404d10
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404b45;
  lab_0x404cc4:
    // 0x404cc4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4043b0(v6, a2, str, a4, a5, v57, v1, v11, &g12); // 0x404cea
    if ((int32_t)v101 != -1) {
        // 0x404bae
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404cff
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404d10;
}
// Address range: 0x404fa0 - 0x404ff6
int64_t function_404fa0(int64_t a1) {
    // 0x404fa0
    *(int32_t *)&g43 = g29;
    *(int32_t *)&g44 = g28;
    int64_t v1; // 0x404fa0
    int64_t result = function_4049d0(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x404fc6
    g29 = *(int32_t *)&g43;
    g48 = g46;
    *(int32_t *)&g27 = g45;
    return result;
}
// Address range: 0x405000 - 0x405018
int64_t function_405000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405000
    return function_404fa0(1);
}
// Address range: 0x405020 - 0x405033
int64_t function_405020(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x405020
    return function_404fa0(0);
}
// Address range: 0x405040 - 0x405055
int64_t function_405040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405040
    return function_4049d0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405060 - 0x405076
int64_t function_405060(void) {
    // 0x405060
    return function_404fa0(0);
}
// Address range: 0x405080 - 0x405098
int64_t function_405080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405080
    return function_4049d0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4050a0 - 0x40511a
int64_t function_4050a0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4050ab
    int64_t v2 = (int64_t)&g13; // 0x4050ab
    int32_t * pwc; // 0x4050a0
    int64_t v3; // 0x4050a0
    int64_t n; // 0x4050a0
    if (a2 == 0) {
        goto lab_0x4050f2;
    } else {
        // 0x4050ad
        if (a3 == 0) {
            // 0x4050d8
            return -2;
        }
        // 0x4050b9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4050f2;
        } else {
            goto lab_0x4050c4;
        }
    }
  lab_0x4050f2:
    // 0x4050f2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4050a0
    pwc = (int32_t *)&v4;
    goto lab_0x4050c4;
  lab_0x4050c4:;
    char * wstr = (char *)v3; // 0x4050ca
    int64_t ps; // 0x4050a0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4050ca
    int64_t result = v5; // 0x4050ca
    if (v5 < 0xfffffffe) {
        // 0x4050d8
        return result;
    }
    int64_t result2 = result; // 0x405109
    if ((char)function_405180(0, v3) == 0) {
        // 0x40510b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4050d8
    return result2;
}
// Address range: 0x405120 - 0x40517d
int64_t function_405120(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405127
    int64_t v2; // 0x405120
    int64_t result = function_405750(a1, v2); // 0x405138
    if ((v2 & 32) != 0) {
        // 0x405160
        if ((int32_t)result == 0) {
            // 0x405164
            *__errno_location() = 0;
        }
        // 0x40515a
        return 0xffffffff;
    }
    // 0x405141
    if ((int32_t)result == 0) {
        // 0x40515a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405148
    if (v1 == 0) {
        // 0x40514a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40515a
    return result2;
}
// Address range: 0x405180 - 0x4051de
int64_t function_405180(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405186
    if (locale == NULL) {
        // 0x4051b3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405186
    bool v2; // 0x405180
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g14; // 0x405180
    int64_t v5 = v1; // 0x405180
    int64_t v6 = 2; // 0x4051a5
    unsigned char v7 = *(char *)v5; // 0x4051a5
    char v8 = *(char *)v4; // 0x4051a5
    char v9 = v8; // 0x4051a5
    bool v10 = false; // 0x4051a5
    while (v7 == v8) {
        // 0x405198
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4051b1
    int64_t v13 = v1; // 0x4051b1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4051b3
        return 0;
    }
    int64_t v14 = 6; // 0x4051b1
    unsigned char v15 = *(char *)v13; // 0x4051cd
    char v16 = *(char *)v12; // 0x4051cd
    char v17 = v16; // 0x4051cd
    bool v18 = false; // 0x4051cd
    while (v15 == v16) {
        // 0x4051c0
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
// Address range: 0x4051e0 - 0x405742
int64_t function_4051e0(void) {
    char * v1 = nl_langinfo(14); // 0x4051f6
    char * v2 = g47; // 0x4051fb
    char * v3; // 0x4051e0
    int64_t v4; // 0x4051e0
    int64_t v5; // 0x4051e0
    int64_t v6; // 0x4051e0
    int64_t v7; // 0x4051e0
    int32_t size; // 0x4051e0
    int32_t size2; // 0x4051e0
    int32_t len; // 0x4052b2
    int64_t v8; // 0x4052b2
    char * env_val; // 0x40529d
    if (v2 == NULL) {
        // 0x405298
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405305;
        } else {
            // 0x4052aa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405305;
            } else {
                // 0x4052af
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40529d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405735
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405305;
                    } else {
                        // 0x4056a9
                        size2 = len + 14;
                        goto lab_0x4052cb;
                    }
                } else {
                    goto lab_0x4052cb;
                }
            }
        }
    } else {
        // 0x4051e0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40521a;
    }
  lab_0x40554c:;
    // 0x40554c
    struct _IO_FILE * stream; // 0x40538b
    int32_t v10 = __uflow(stream); // 0x40554f
    int64_t v11; // 0x4051e0
    int64_t v12 = v11; // 0x405559
    int64_t v13; // 0x4051e0
    int64_t v14 = v13; // 0x405559
    int32_t v15 = v10; // 0x405559
    int64_t v16; // 0x4051e0
    int64_t v17 = v16; // 0x405559
    int64_t v18 = v11; // 0x405559
    int64_t v19 = v13; // 0x405559
    int64_t v20 = v16; // 0x405559
    if (v10 == -1) {
        // break -> 0x40555f
        goto lab_0x40555f;
    }
    goto lab_0x4053d9;
  lab_0x4053ce:;
    // 0x4053ce
    int64_t v90; // 0x4051e0
    int64_t * v32; // 0x4053c0
    *v32 = v90 + 1;
    int64_t v89; // 0x4051e0
    v12 = v89;
    int64_t v91; // 0x4051e0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4051e0
    v17 = v92;
    goto lab_0x4053d9;
  lab_0x4053d9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4051e0
    int32_t v25; // bp-120, 0x4051e0
    int32_t v26; // bp-184, 0x4051e0
    int64_t v27; // 0x40538b
    int64_t v28; // 0x4053a8
    int64_t v29; // 0x4053ad
    int64_t * v30; // 0x4053c4
    switch (c) {
        case 32: {
            goto lab_0x4053c0;
        }
        case 10: {
            goto lab_0x4053c0;
        }
        case 9: {
            goto lab_0x4053c0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4055b1
            int32_t v33; // 0x4051e0
            char v34; // 0x4051e0
            int32_t v35; // 0x4055be
            if (v31 < *v30) {
                // 0x405590
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4055bb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4055b1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405590
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4055bb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4055a0
                v36 = v33;
            }
            // 0x40568f
            if (v36 == -1) {
                // break -> 0x40555f
                break;
            }
            goto lab_0x4053c0;
        }
        default: {
            // 0x4053ef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40555f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405418
            int64_t v39 = v37 + 4; // 0x40541a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405426
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405428
            while (v41 == 0) {
                // 0x405418
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405446
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405452
            int64_t v45 = v43 + 4; // 0x405454
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405460
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405462
            while (v47 == 0) {
                // 0x405452
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40544f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405478
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405488
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40548c
            int64_t v52 = v51 + v48; // 0x405495
            int64_t * mem; // 0x4051e0
            int64_t v53; // 0x4051e0
            int64_t v54; // 0x4051e0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4055cb
                int64_t v56 = v55 + 3; // 0x4055d7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4054b1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4054c0
            if (mem == NULL) {
                // 0x4056ec
                free((int64_t *)v21);
                function_405750(v27, v53);
                v24 = (int64_t)&g13;
                goto lab_0x405364;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4054d8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4054e2
            uint32_t v62 = (int32_t)v59; // 0x4054e5
            int64_t v63; // 0x4051e0
            if (v62 >= 8) {
                // 0x4055f4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40560e
                int64_t v66 = v61 - v65; // 0x405612
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40561d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40562e
                    int64_t v70 = v69 & 0xffffffff; // 0x40562e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40562b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4056bf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4054f7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4054fb
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
            int64_t v73 = v51 + 1; // 0x40550b
            int64_t v74 = v60 - 1; // 0x40550f
            uint32_t v75 = (int32_t)v73; // 0x405514
            int64_t v76; // 0x4051e0
            if (v75 >= 8) {
                // 0x405642
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40564c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40565c
                int64_t v80 = v74 - v79; // 0x405660
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40566b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40567b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405679
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4056d6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4056de
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405526
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40552a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405723
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40553e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4053ce;
            } else {
                goto lab_0x40554c;
            }
        }
    }
  lab_0x4053c0:;
    int64_t v93 = v23; // 0x4051e0
    int64_t v94 = v22; // 0x4051e0
    int64_t v95 = v21; // 0x4051e0
    goto lab_0x4053c0_2;
  lab_0x405305:;
    int64_t * mem3 = malloc(size); // 0x405305
    int64_t v97 = (int64_t)&g13; // 0x405310
    int64_t v98; // 0x4051e0
    int64_t path; // 0x4051e0
    if (mem3 == NULL) {
        goto lab_0x4052e2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405305
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405326;
    }
  lab_0x40521a:;
    int64_t str = v1 == NULL ? (int64_t)&g13 : (int64_t)v1; // 0x40520d
    char v100 = *v3; // 0x40521a
    int64_t v101; // 0x4051e0
    if (v100 == 0) {
        // 0x405274
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4051e0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4051e0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405260
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405267;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405230
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40523d
        char v107 = *(char *)v106; // 0x405242
        v102 = v107;
        if (v107 == 0) {
            // 0x405274
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40524b
    v104 = v103 + 1;
  lab_0x405267:
    // 0x405274
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4052e2:;
    char * v108 = (char *)v97;
    g47 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40521a;
  lab_0x405326:;
    int64_t v109 = v98 + path; // 0x405326
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405352
    v24 = (int64_t)&g13;
    if (fd >= 0) {
        // 0x405381
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4056b2
            close(fd);
            v24 = (int64_t)&g13;
        } else {
            // 0x4053a5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4053c0_2:;
                uint64_t v96 = *v32; // 0x4053c0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40554c;
                } else {
                    goto lab_0x4053ce;
                }
            }
          lab_0x40555f:
            // 0x40555f
            function_405750(v27, v19);
            v24 = (int64_t)&g13;
            if (v18 != 0) {
                // 0x40557e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405364;
  lab_0x4052cb:;
    int64_t * mem4 = malloc(size2); // 0x4052cb
    v97 = (int64_t)&g13;
    if (mem4 != NULL) {
        // 0x405371
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405326;
    } else {
        goto lab_0x4052e2;
    }
  lab_0x405364:
    // 0x405364
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4052e2;
}
// Address range: 0x405750 - 0x4057cb
int64_t function_405750(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405757
    if (fileno(stream) < 0) {
        // 0x4057b7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40576a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40579b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4057b7
            return fclose(stream);
        }
    }
    // 0x40576c
    if ((int32_t)function_4057d0(a1, v1) == 0) {
        // 0x4057b7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405778
    int32_t v3 = *v2; // 0x405780
    int64_t result = fclose(stream); // 0x40578e
    if (v3 != 0) {
        // 0x4057c0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405790
    return result;
}
// Address range: 0x4057d0 - 0x405810
int64_t function_4057d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4057ea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4057ea
        return fflush(stream);
    }
    // 0x4057f8
    function_405810(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405810 - 0x405867
int64_t function_405810(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405810
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40581a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40584b
    int64_t result = -1; // 0x405854
    if (v1 != -1) {
        // 0x405856
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405862
    return result;
}
// Address range: 0x405870 - 0x4058cd
int64_t function_405870(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405870
    return function_401228();
}
// Address range: 0x4058d0 - 0x4058d1
int64_t function_4058d0(void) {
    // 0x4058d0
    int64_t result; // 0x4058d0
    return result;
}
// Address range: 0x4058e0 - 0x4058f8
int64_t function_4058e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4058e0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g19);
}
// Address range: 0x4058f8 - 0x405918
int64_t function_4058f8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g15; // 0x405902
    while (*(int64_t *)v1 != -1) {
        // 0x405903
        v1 -= 8;
    }
    // 0x405914
    return result;
}
