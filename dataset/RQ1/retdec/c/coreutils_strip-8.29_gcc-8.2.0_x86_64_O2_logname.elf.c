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
// Address range: 0x401600 - 0x401710
int64_t function_401600(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401601
    function_401cb0(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401600
    function_405730(0x401b00, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_401ba0(v1, a2, "logname", "GNU coreutils", (int64_t)g19, 0x4017f0);
    int64_t v3 = function_404e70(v1, a2, (int64_t *)&g12, &g2, 0, 0x4017f0); // 0x401681
    if ((int32_t)v3 != -1) {
        // 0x4016e1
        function_4017f0(1);
        // UNREACHABLE
    }
    int64_t v4 = (int64_t)*(int32_t *)0x60823c; // 0x40168d
    if (v1 > v4) {
        // 0x4016b3
        function_4038d0(*(int64_t *)(8 * v4 + a2));
        error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
        // 0x4016e1
        function_4017f0(1);
        // UNREACHABLE
    }
    char * str = getlogin(); // 0x401698
    if (str == NULL) {
        // 0x4016eb
        error(1, (int32_t)"no login name" ^ (int32_t)"no login name", dcgettext(NULL, "no login name", 5));
        return &g49;
    }
    // 0x4016a2
    puts(str);
    return 0;
}
// Address range: 0x401710 - 0x40173b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401710
    int64_t v1; // 0x401710
    __libc_start_main(0x401600, (int32_t)a4, (char **)&v1, (void (*)())0x4056c0, (void (*)())0x405720, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40173b - 0x40175a
int64_t function_40173b(void) {
    // 0x40173b
    return &g29;
}
// Address range: 0x40175a - 0x401791
int64_t function_40175a(void) {
    // 0x40175a
    return 0;
}
// Address range: 0x401791 - 0x4017e8
int64_t function_401791(void) {
    // 0x401791
    if (g33 != 0) {
        // 0x4017e7
        int64_t result; // 0x401791
        return result;
    }
    int64_t v1 = g34; // 0x4017c4
    int64_t result2; // 0x4017d6
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4017d6
        result2 = function_40173b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4017c6
        v1++;
    }
    // 0x4017ba
    g34 = v1;
    // 0x4017d6
    result2 = function_40173b();
    g33 = 1;
    return result2;
}
// Address range: 0x4017e8 - 0x4017ed
int64_t function_4017e8(void) {
    // 0x4017e8
    return function_40175a();
}
// Address range: 0x4017f0 - 0x401add
int64_t function_4017f0(int64_t a1) {
    int32_t status = a1; // 0x401806
    if (status != 0) {
        // 0x40180a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40182f
        exit(status);
        // UNREACHABLE
    }
    // 0x401836
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the name of the current user.\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x4018bd
    bool v2; // 0x4017f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401940
    int64_t v6 = *(int64_t *)v5; // 0x401944
    int64_t v7 = 8; // 0x40194a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"logname";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401956
        char v11 = *(char *)v9; // 0x401956
        char v12 = v11; // 0x401956
        bool v13 = false; // 0x401956
        while (v10 == v11) {
            // 0x40194c
            v7--;
            int64_t v14 = v9 + v3; // 0x401956
            int64_t v15 = v8 + v3; // 0x401956
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
            // break -> 0x401962
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 8;
    }
    // 0x401962
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401a74;
        } else {
            // 0x401a5e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401ab3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4019c4;
            } else {
                goto lab_0x401a74;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4019c4;
        } else {
            // 0x4019aa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401ab3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4019c4;
            } else {
                goto lab_0x4019c4;
            }
        }
    }
  lab_0x401a74:
    // 0x401a74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401a04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40182f
    exit(status);
    // UNREACHABLE
  lab_0x4019c4:
    // 0x4019c4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401a04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40182f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401ae0 - 0x401ae8
int64_t function_401ae0(int64_t a1) {
    // 0x401ae0
    g36 = a1;
    int64_t result; // 0x401ae0
    return result;
}
// Address range: 0x401af0 - 0x401af8
int64_t function_401af0(int64_t a1) {
    // 0x401af0
    g35 = a1;
    int64_t result; // 0x401af0
    return result;
}
// Address range: 0x401b00 - 0x401b9e
int64_t function_401b00(void) {
    // 0x401b00
    int32_t * err_num; // 0x401b16
    if ((int32_t)function_404f70((int64_t)g30) == 0) {
        goto lab_0x401b2c;
    } else {
        // 0x401b16
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x401b43;
        } else {
            // 0x401b27
            if (*err_num != 32) {
                goto lab_0x401b43;
            } else {
                goto lab_0x401b2c;
            }
        }
    }
  lab_0x401b2c:;
    int64_t result = function_404f70((int64_t)g32); // 0x401b33
    if ((int32_t)result == 0) {
        // 0x401b3c
        return result;
    }
    // 0x401b7e
    _exit(g20);
    // UNREACHABLE
  lab_0x401b43:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401b4f
    if (g36 == 0) {
        // 0x401b89
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401b63
        error(0, *err_num, "%s: %s", (char *)function_403720((int64_t)g36), v1);
    }
    // 0x401b7e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401ba0 - 0x401ca2
int64_t function_401ba0(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x401ba0
    int64_t v1; // 0x401ba0
    if ((char)v1 != 0) {
        // 0x401bb3
        int128_t v2; // 0x401ba0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x401bea
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x401bff
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x401ba0
        return result;
    }
    int64_t result2 = function_404e70(a1, a2, &g3, (int64_t *)&g4, 0, a6); // 0x401c39
    int32_t v4 = result2; // 0x401c3e
    switch (v4) {
        default: {
            // 0x401c48
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x401c6a
                function_403cf0((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x401bff
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
}
// Address range: 0x401cb0 - 0x401d49
int64_t function_401cb0(int64_t str) {
    // 0x401cb0
    if (str == 0) {
        // 0x401d29
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401cbe
    int64_t result = (int64_t)found_char_pos; // 0x401cbe
    if (found_char_pos == NULL) {
        // 0x401d19
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401cc8
    if (v1 - str < 7) {
        // 0x401d19
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x401cd8
    bool v2; // 0x401cb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401cb0
    int64_t v5 = result - 6; // 0x401cb0
    int64_t v6 = 7; // 0x401ce6
    unsigned char v7 = *(char *)v5; // 0x401ce6
    char v8 = *(char *)v4; // 0x401ce6
    char v9 = v8; // 0x401ce6
    bool v10 = false; // 0x401ce6
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
    int64_t v12 = (int64_t)"lt-"; // 0x401cf0
    int64_t v13 = v1; // 0x401cf0
    int64_t v14 = 3; // 0x401cf0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401d19
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401d02
    char v16 = *(char *)v12; // 0x401d02
    char v17 = v16; // 0x401d02
    bool v18 = false; // 0x401d02
    while (v15 == v16) {
        // 0x401cf2
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
    int64_t v20 = v1; // 0x401d0c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401d0e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x401d19
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x401d50 - 0x401e42
int64_t function_401d50(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401d64
    int64_t result = (int64_t)v1; // 0x401d64
    if (result != a1) {
        // 0x401d71
        return result;
    }
    int64_t v2 = function_405030(); // 0x401d80
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401e36
    if (v3 == 85) {
        // 0x401d90
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401e28
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x401dbe
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x401dcb
        // 0x401d71
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401e28
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x401e0d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x401e1a
    // 0x401d71
    return result4;
}
// Address range: 0x401e50 - 0x401ea7
int64_t function_401e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401e50
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401e98
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401ea7 - 0x403071
int64_t function_401ea7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x401ef1
    int64_t v3 = 0; // 0x401ef1
    int64_t v4; // 0x401ea7
    int64_t v5; // 0x401ea7
    int64_t v6; // 0x401ea7
    int64_t v7; // 0x401ea7
    int64_t v8; // 0x401ea7
    int64_t v9; // 0x401ea7
    int64_t v10; // 0x401ea7
    int64_t v11; // 0x401ea7
    int64_t v12; // 0x401ea7
    int64_t v13; // 0x401ea7
    int64_t v14; // 0x401ea7
    int64_t v15; // 0x401ea7
    int64_t v16; // 0x401ea7
    int64_t v17; // 0x401ea7
    int64_t v18; // 0x401ea7
    int64_t result; // 0x401ea7
    int64_t v19; // 0x401ea7
    int32_t wc; // bp+132, 0x401ea7
    int64_t ps; // bp+136, 0x401ea7
    char v20; // 0x402460
    int64_t v21; // 0x402460
    int64_t v22; // 0x402808
    int64_t v23; // 0x401ea7
    int64_t v24; // 0x402827
    int32_t v25; // 0x401ea7
    while (true) {
      lab_0x401ef8_2:
        // 0x401ef8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401ea7
        int64_t v27; // 0x401f2c
        while (true) {
          lab_0x401ef8:
            // 0x401ef8
            v5 = v26;
            bool v28 = v15 == v5; // 0x401f03
            if (v15 == -1) {
                // 0x401f05
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x401f13
            if (v28) {
                // break (via goto) -> 0x402678
                goto lab_0x402678;
            }
            // 0x401f1c
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
                    // 0x40250b
                    if (v25 % 2 == 0) {
                        goto lab_0x402051;
                    }
                    // 0x40292d
                    v26 = v5 + 1;
                    goto lab_0x401ef8;
                }
                case 7: {
                    goto lab_0x402051;
                }
                case 8: {
                    goto lab_0x402051;
                }
                case 9: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402051;
                }
                case 12: {
                    goto lab_0x402051;
                }
                case 13: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40201d;
                }
                case 36: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402051;
                }
                case 38: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402051;
                }
                case 44: {
                    goto lab_0x402051;
                }
                case 45: {
                    goto lab_0x402051;
                }
                case 46: {
                    goto lab_0x402051;
                }
                case 47: {
                    goto lab_0x402051;
                }
                case 48: {
                    goto lab_0x402051;
                }
                case 49: {
                    goto lab_0x402051;
                }
                case 50: {
                    goto lab_0x402051;
                }
                case 51: {
                    goto lab_0x402051;
                }
                case 52: {
                    goto lab_0x402051;
                }
                case 53: {
                    goto lab_0x402051;
                }
                case 54: {
                    goto lab_0x402051;
                }
                case 55: {
                    goto lab_0x402051;
                }
                case 56: {
                    goto lab_0x402051;
                }
                case 57: {
                    goto lab_0x402051;
                }
                case 58: {
                    goto lab_0x402051;
                }
                case 59: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402051;
                }
                case 66: {
                    goto lab_0x402051;
                }
                case 67: {
                    goto lab_0x402051;
                }
                case 68: {
                    goto lab_0x402051;
                }
                case 69: {
                    goto lab_0x402051;
                }
                case 70: {
                    goto lab_0x402051;
                }
                case 71: {
                    goto lab_0x402051;
                }
                case 72: {
                    goto lab_0x402051;
                }
                case 73: {
                    goto lab_0x402051;
                }
                case 74: {
                    goto lab_0x402051;
                }
                case 75: {
                    goto lab_0x402051;
                }
                case 76: {
                    goto lab_0x402051;
                }
                case 77: {
                    goto lab_0x402051;
                }
                case 78: {
                    goto lab_0x402051;
                }
                case 79: {
                    goto lab_0x402051;
                }
                case 80: {
                    goto lab_0x402051;
                }
                case 81: {
                    goto lab_0x402051;
                }
                case 82: {
                    goto lab_0x402051;
                }
                case 83: {
                    goto lab_0x402051;
                }
                case 84: {
                    goto lab_0x402051;
                }
                case 85: {
                    goto lab_0x402051;
                }
                case 86: {
                    goto lab_0x402051;
                }
                case 87: {
                    goto lab_0x402051;
                }
                case 88: {
                    goto lab_0x402051;
                }
                case 89: {
                    goto lab_0x402051;
                }
                case 90: {
                    goto lab_0x402051;
                }
                case 91: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402051;
                }
                case 94: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402051;
                }
                case 96: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402051;
                }
                case 98: {
                    goto lab_0x402051;
                }
                case 99: {
                    goto lab_0x402051;
                }
                case 100: {
                    goto lab_0x402051;
                }
                case 101: {
                    goto lab_0x402051;
                }
                case 102: {
                    goto lab_0x402051;
                }
                case 103: {
                    goto lab_0x402051;
                }
                case 104: {
                    goto lab_0x402051;
                }
                case 105: {
                    goto lab_0x402051;
                }
                case 106: {
                    goto lab_0x402051;
                }
                case 107: {
                    goto lab_0x402051;
                }
                case 108: {
                    goto lab_0x402051;
                }
                case 109: {
                    goto lab_0x402051;
                }
                case 110: {
                    goto lab_0x402051;
                }
                case 111: {
                    goto lab_0x402051;
                }
                case 112: {
                    goto lab_0x402051;
                }
                case 113: {
                    goto lab_0x402051;
                }
                case 114: {
                    goto lab_0x402051;
                }
                case 115: {
                    goto lab_0x402051;
                }
                case 116: {
                    goto lab_0x402051;
                }
                case 117: {
                    goto lab_0x402051;
                }
                case 118: {
                    goto lab_0x402051;
                }
                case 119: {
                    goto lab_0x402051;
                }
                case 120: {
                    goto lab_0x402051;
                }
                case 121: {
                    goto lab_0x402051;
                }
                case 122: {
                    goto lab_0x402051;
                }
                case 123: {
                    goto lab_0x401ff5;
                }
                case 124: {
                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x401ff5;
                }
                case 126: {
                    goto lab_0x40201d;
                }
                default: {
                    goto lab_0x4023f5;
                }
            }
        }
      lab_0x4023f5:
        if (v23 != 1) {
            // 0x402760
            ps = 0;
            int64_t len = v15; // 0x402770
            if (v15 == -1) {
                // 0x402772
                len = strlen((char *)str);
            }
            // 0x40279e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4027ff:
                // 0x4027ff
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402804
                int64_t v30 = v29 + str;
                v24 = function_404ef0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402d7a_2;
                    }
                    case -1: {
                        goto lab_0x402d7a_2;
                    }
                    case -2: {
                        // 0x402e5d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402e97
                            v19 = v18;
                            int64_t v31 = v18; // 0x402e9a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402ea7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402ea0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402d7a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402d7a_2;
                    }
                    case 1: {
                        goto lab_0x4027d0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40287c
                        char v34 = *(char *)v33; // 0x40288d
                        unsigned char v35; // 0x401ea7
                        if (v34 < 125) {
                            // 0x402898
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4028af
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402880
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40288d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402898
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4028af
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402880
                            v33++;
                        }
                        goto lab_0x4027d0;
                    }
                }
            }
            goto lab_0x402d7a_2;
        } else {
            // 0x402444
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402051;
        }
    }
  lab_0x402678:
    // 0x402678
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x402f7a
        if (v8 > result) {
            // 0x402f83
            *(char *)(v12 + result) = 0;
        }
        // 0x4022a7
        return result;
    }
    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402051:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402060
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40226a_2;
        }
    }
    int64_t v39 = result; // 0x402161
    char v40 = v20; // 0x402161
    int64_t v41 = v38; // 0x402161
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402161
    int64_t v43 = v36; // 0x402161
    goto lab_0x4020dd;
  lab_0x40226a_2:
    // 0x4022a7
    return function_401e50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402d7a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402051;
    } else {
        uint64_t v49 = v46 + v5; // 0x40294e
        int64_t v50 = v5 + 1; // 0x402a31
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402a38
        char v52 = v20; // 0x402a38
        int64_t v53 = result; // 0x402a38
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402a01
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402a05
            int64_t v56 = v54 + 1; // 0x402a0a
            int64_t v57 = v51 + 1; // 0x402a31
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4029fc
                v54 = v56;
                if (v47 > v54) {
                    // 0x402a01
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402a05
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
        goto lab_0x4020dd;
    }
  lab_0x4027d0:
    // 0x4027d0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4027ef
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4027f2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402d7a
        goto lab_0x402d7a_2;
    }
    goto lab_0x4027ff;
  lab_0x40201d:
    // 0x40201d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40226a_2;
    }
    goto lab_0x402051;
  lab_0x401ff5:;
    bool v60 = v15 == 1; // 0x402000
    if (v15 == -1) {
        // 0x402002
        v60 = *(char *)v1 == 0;
    }
    // 0x40200e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402051;
    } else {
        goto lab_0x40201d;
    }
  lab_0x4020dd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4020e2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4020e6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x401ef8_2;
}
// Address range: 0x403080 - 0x40321e
int64_t function_403080(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403082
    int32_t * v3 = __errno_location(); // 0x40309c
    int64_t v4 = (int64_t)g22; // 0x4030a1
    int32_t v5 = *v3; // 0x4030ab
    int64_t v6 = v4; // 0x4030c1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403219
            function_4040e0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4030d0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4030d7
        int64_t v9; // 0x403080
        if (g22 == &g23) {
            int64_t v10 = function_403ef0(0, v8); // 0x4031fa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x4031ff
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403ef0(v4, v8); // 0x4030eb
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x4030fa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x4030fa
        int32_t v14 = v7; // 0x403101
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403131
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40313b
    int64_t * v17 = (int64_t *)v15; // 0x40313e
    uint64_t v18 = *v17; // 0x40313e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403141
    int64_t result = *v19; // 0x403141
    int64_t v20; // 0x403080
    uint64_t v21 = function_401e50(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403164
    if (v18 > v21) {
        // 0x4031db
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403177
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403187
        free((int64_t *)result);
    }
    int64_t result2 = function_403e90(v22); // 0x4031a1
    *v19 = result2;
    int64_t v23; // 0x403080
    function_401e50(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4031db
    *v3 = v5;
    return result2;
}
// Address range: 0x403220 - 0x403254
int64_t function_403220(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403227
    int64_t result = function_404090(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x403246
    return result;
}
// Address range: 0x403260 - 0x40326f
int64_t function_403260(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x40326c
    return result;
}
// Address range: 0x403270 - 0x40327f
int64_t function_403270(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403278
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403280 - 0x4032b3
int64_t function_403280(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403299
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40329e
    uint32_t v3 = *v2; // 0x40329e
    uint32_t v4 = (int32_t)a2 % 32; // 0x4032a2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4032c0 - 0x4032d3
int64_t function_4032c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x4032cc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4032e0 - 0x40330b
int64_t function_4032e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x4032e8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403305
        abort();
        // UNREACHABLE
    }
    // 0x4032fc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403310 - 0x403382
int64_t function_403310(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x403332
    int32_t * v2 = __errno_location(); // 0x40333b
    uint32_t v3 = *(int32_t *)v1; // 0x40335b
    int64_t result = function_401e50(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40336a
    return result;
}
// Address range: 0x403390 - 0x403471
int64_t function_403390(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x4033b2
    int32_t * v2 = __errno_location(); // 0x4033b8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4033d7
    int32_t * v4 = (int32_t *)v1; // 0x4033da
    int64_t v5 = function_401e50(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4033f5
    int64_t v6 = v5 + 1; // 0x4033fa
    int64_t result = function_403e90(v6); // 0x40340f
    function_401e50(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403454
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40345d
    return result;
}
// Address range: 0x403480 - 0x40348a
int64_t function_403480(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403480
    return function_403390(a1, a2, 0, a3);
}
// Address range: 0x403490 - 0x403525
int64_t function_403490(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403490
    int64_t v2 = v1; // 0x403490
    int64_t v3 = v2; // 0x4034a4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x4034c3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4034c0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x4034dd
    if (g23 != 0x6082a0) {
        // 0x4034df
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403501
    if (g22 != &g23) {
        // 0x403503
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g49;
    }
    // 0x403516
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x403530 - 0x403541
int64_t function_403530(void) {
    // 0x403530
    int64_t v1; // 0x403530
    return function_403080(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x403550 - 0x40355a
int64_t function_403550(void) {
    // 0x403550
    int64_t v1; // 0x403550
    return function_403080(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403560 - 0x403576
int64_t function_403560(int64_t a1) {
    // 0x403560
    return function_403080(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403580 - 0x403592
int64_t function_403580(int64_t a1, int64_t a2) {
    // 0x403580
    return function_403080(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x4035a0 - 0x403608
int64_t function_4035a0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4035b0
    return function_403080((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403610 - 0x403674
int64_t function_403610(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403620
    return function_403080((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403680 - 0x40368c
int64_t function_403680(int64_t a1, int64_t a2) {
    // 0x403680
    return function_4035a0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403690 - 0x40369f
int64_t function_403690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403690
    return function_403610(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4036a0 - 0x403710
int64_t function_4036a0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x4036ad
    int128_t v2 = __asm_movdqa(g40); // 0x4036b5
    int128_t v3 = __asm_movdqa(g41); // 0x4036bd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4036d2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4036e8
    uint32_t v6 = *v5; // 0x4036e8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4036ed
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403080(0, a1, a2, &v4);
}
// Address range: 0x403710 - 0x40371d
int64_t function_403710(int64_t a1, int64_t a2) {
    // 0x403710
    return function_4036a0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403720 - 0x403731
int64_t function_403720(int64_t a1) {
    // 0x403720
    return function_4036a0(a1, -1, 58);
}
// Address range: 0x403740 - 0x40374a
int64_t function_403740(void) {
    // 0x403740
    int64_t v1; // 0x403740
    return function_4036a0(v1, v1, 58);
}
// Address range: 0x403750 - 0x4037be
int64_t function_403750(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40376a
    return function_403080(a1, a3, -1, &v1);
}
// Address range: 0x4037c0 - 0x40382c
int64_t function_4037c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x4037c7
    int128_t v2 = __asm_movdqa(g40); // 0x4037cf
    int128_t v3 = __asm_movdqa(g41); // 0x4037d7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4037f9
    if (a2 == 0 || a3 == 0) {
        // 0x403827
        abort();
        // UNREACHABLE
    }
    // 0x40380a
    return function_403080(a1, a4, a5, &v4);
}
// Address range: 0x403830 - 0x403839
int64_t function_403830(void) {
    // 0x403830
    int64_t v1; // 0x403830
    return function_4037c0(v1, v1, v1, v1, -1);
}
// Address range: 0x403840 - 0x403857
int64_t function_403840(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403840
    return function_4037c0(0, a1, a2, a3, -1);
}
// Address range: 0x403860 - 0x403873
int64_t function_403860(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403860
    return function_4037c0(0, a1, a2, a3, a4);
}
// Address range: 0x403880 - 0x40388a
int64_t function_403880(void) {
    // 0x403880
    int64_t v1; // 0x403880
    return function_403080(v1, v1, v1, &g21);
}
// Address range: 0x403890 - 0x4038a2
int64_t function_403890(int64_t a1, int64_t a2) {
    // 0x403890
    return function_403080(0, a1, a2, &g21);
}
// Address range: 0x4038b0 - 0x4038c1
int64_t function_4038b0(void) {
    // 0x4038b0
    int64_t v1; // 0x4038b0
    return function_403080(v1, v1, -1, &g21);
}
// Address range: 0x4038d0 - 0x4038e6
int64_t function_4038d0(int64_t a1) {
    // 0x4038d0
    return function_403080(0, a1, -1, &g21);
}
// Address range: 0x4038f0 - 0x403ccd
int64_t function_4038f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403988
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40390c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403926
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40396b
    if (a6 < 10) {
        // 0x40397a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403a72
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403cd0 - 0x403cf0
int64_t function_403cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403cd0
    if (a5 == 0) {
        // 0x403ceb
        return function_4038f0(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403cd7
    v1++;
    int64_t v2 = v1; // 0x403ce9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403ce0
        v1++;
        v2 = v1;
    }
    // 0x403ceb
    return function_4038f0(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403cf0 - 0x403d50
int64_t function_403cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x403cf0
    int64_t v4 = &v3; // 0x403cf0
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x403d23
    int64_t v7; // 0x403d0d
    int64_t * v8; // 0x403d2b
    int64_t v9; // 0x403d2b
    int64_t v10; // 0x403d37
    if (v6 < 48) {
        // 0x403d00
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x403d43
            break;
        }
    } else {
        // 0x403d2b
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x403d43
            break;
        }
    }
    int64_t v11 = 10; // 0x403d21
    while (v5 != 9) {
        // 0x403d19
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x403d00
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x403d43
                break;
            }
        } else {
            // 0x403d2b
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x403d43
                break;
            }
        }
        // 0x403d19
        v11 = 10;
    }
    // 0x403d43
    return function_4038f0(a1, a2, a3, a4, v4, v11, (int64_t)&g49);
}
// Address range: 0x403d50 - 0x403e0c
int64_t function_403d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403d50
    int64_t v1; // bp-168, 0x403d50
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403d50
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403d50
    int64_t v8; // 0x403d50
    int64_t v9; // bp-56, 0x403d50
    int64_t v10; // 0x403db5
    int64_t v11; // 0x403dd9
    if ((int32_t)v6 < 48) {
        // 0x403da0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403df0
            break;
        }
    } else {
        // 0x403dd2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403df0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403dca
    int64_t v13 = 10; // 0x403dca
    while (v5 != 9) {
        // 0x403dcc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403da0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403df0
                break;
            }
        } else {
            // 0x403dd2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403df0
                break;
            }
        }
        // 0x403dc2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403df0
    int64_t v14; // bp-136, 0x403d50
    int64_t result = function_4038f0(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x403dff
    return result;
}
// Address range: 0x403e10 - 0x403e84
int64_t function_403e10(int64_t a1) {
    // 0x403e10
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403e73
    return fputs_unlocked(v1, g30);
}
// Address range: 0x403e90 - 0x403eaa
int64_t function_403e90(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403e94
    if (size != 0 != (mem == NULL)) {
        // 0x403ea3
        return (int64_t)mem;
    }
    // 0x403ea5
    function_4040e0(size);
    // UNREACHABLE
}
// Address range: 0x403eb0 - 0x403ed1
int64_t function_403eb0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403eb3
    int64_t v2 = v1; // 0x403eb3
    if (v2 < 0) {
        // 0x403ecb
        function_4040e0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403ec9
        return function_403e90(v2);
    }
    // 0x403ecb
    function_4040e0(v2);
    // UNREACHABLE
}
// Address range: 0x403ee0 - 0x403ee2
int64_t function_403ee0(void) {
    // 0x403ee0
    int64_t v1; // 0x403ee0
    return function_403e90(v1);
}
// Address range: 0x403ef0 - 0x403f26
int64_t function_403ef0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403f18
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403f01
    if (a2 != 0 != (mem == NULL)) {
        // 0x403f10
        return (int64_t)mem;
    }
    // 0x403f21
    function_4040e0(a1);
    // UNREACHABLE
}
// Address range: 0x403f30 - 0x403f51
int64_t function_403f30(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403f33
    int64_t v2 = v1; // 0x403f33
    if (v2 < 0) {
        // 0x403f4b
        function_4040e0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403f49
        return function_403ef0(a1, v2);
    }
    // 0x403f4b
    function_4040e0(a1);
    // UNREACHABLE
}
// Address range: 0x403f60 - 0x403fe6
int64_t function_403f60(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403fbb
            function_4040e0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403ef0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403fa3
    if (a2 == 0) {
        // 0x403fc8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403fa8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403fbb
        function_4040e0(a1);
        // UNREACHABLE
    }
    // 0x403f8a
    *(int64_t *)a2 = v2;
    return function_403ef0(a1, v2 * a3);
}
// Address range: 0x403ff0 - 0x404040
int64_t function_403ff0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x403ff0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40403a
            function_4040e0(a1);
            // UNREACHABLE
        }
        // 0x404012
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403ef0(a1, v1);
    }
    if (a2 == 0) {
        // 0x404025
        *(int64_t *)a2 = 128;
        return function_403ef0(0, 128);
    }
    // 0x404038
    if (a2 < 0) {
        // 0x40403a
        function_4040e0(a1);
        // UNREACHABLE
    }
    // 0x404012
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403ef0(a1, v1);
}
// Address range: 0x404040 - 0x404057
int64_t function_404040(int64_t a1, int64_t a2) {
    // 0x404040
    return (int64_t)memset((int64_t *)function_403e90(a1), 0, (int32_t)a1);
}
// Address range: 0x404060 - 0x40408e
int64_t function_404060(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404067
    if ((int64_t)v1 < 0) {
        // 0x404089
        function_4040e0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404089
        function_4040e0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40407a
    if (mem != NULL) {
        // 0x404084
        return (int64_t)mem;
    }
    // 0x404089
    function_4040e0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404090 - 0x4040b8
int64_t function_404090(int64_t a1, int64_t a2) {
    int64_t v1 = function_403e90(a2); // 0x40409f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4040c0 - 0x4040d3
int64_t function_4040c0(int64_t str) {
    // 0x4040c0
    return function_404090(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4040e0 - 0x404111
int64_t function_4040e0(int64_t a1) {
    // 0x4040e0
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404120 - 0x4041ff
int64_t function_404120(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40412c
    uint32_t v2 = *v1; // 0x40412c
    int64_t v3 = a2 & 0xffffffff; // 0x404131
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404134
    uint64_t v5 = (int64_t)*v4; // 0x404134
    int64_t v6; // 0x4041a2
    if (v3 <= v5) {
      lab_0x40419c_2:
        // 0x40419c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404122
    int64_t v8 = v2; // 0x404120
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40419c
        goto lab_0x40419c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404158
    int64_t v17; // 0x404166
    int64_t * v18; // 0x404180
    int64_t * v19; // 0x404183
    int64_t v20; // 0x40418e
    int64_t v21; // 0x404166
    while ((v16 & 0xffffffff) > v10) {
        // 0x404163
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404180
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404197
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40419c
            goto lab_0x40419c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40419c
            goto lab_0x40419c_2;
        }
        // 0x404152
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4041db
    int64_t * v23 = (int64_t *)v22; // 0x4041e0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4041e3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4041e0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4041f7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40414d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40419c
            goto lab_0x40419c_2;
        }
        // 0x404152
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404163
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404180
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404197
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40419c
                goto lab_0x40419c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40419c
                goto lab_0x40419c_2;
            }
            // 0x404152
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4041c0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4041e0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4041f7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40419c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404200 - 0x40481c
int64_t function_404200(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40421f
    int64_t v2 = *v1; // 0x40421f
    char * str2 = (char *)v2; // 0x40422c
    char c = *str2; // 0x40422c
    int64_t v3 = v2; // 0x404258
    int64_t v4 = 0; // 0x404200
    int32_t v5; // 0x404200
    int64_t v6; // 0x404200
    int64_t v7; // 0x404200
    int64_t v8; // 0x404200
    int64_t v9; // 0x404200
    int64_t v10; // 0x404200
    int64_t v11; // 0x404200
    int64_t v12; // 0x404200
    int64_t v13; // 0x404200
    int64_t str3; // 0x404200
    int64_t v14; // 0x404200
    int64_t v15; // 0x404200
    int64_t v16; // 0x404200
    int64_t v17; // 0x404200
    int32_t v18; // 0x404200
    int32_t v19; // 0x404200
    int32_t v20; // 0x404200
    int32_t v21; // 0x404200
    int32_t v22; // 0x404200
    int32_t v23; // 0x404200
    int32_t v24; // 0x404200
    int32_t v25; // 0x404200
    int32_t v26; // 0x404200
    int32_t v27; // 0x404200
    int32_t v28; // 0x404200
    int32_t v29; // 0x404200
    int64_t nmemb; // 0x404200
    int64_t v30; // 0x404200
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40425c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404258
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404268
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40426e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404238
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40429c
                int64_t v34; // 0x404200
                int64_t v35; // 0x404200
                if (strncmp(str, str2, n) == 0) {
                    // 0x4042a5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404420;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4042b6
                int64_t v37 = *(int64_t *)v36; // 0x4042ba
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404290
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4042a5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404420;
                        }
                    }
                    // 0x4042b6
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
                  lab_0x404306:
                    // 0x404306
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
                        goto lab_0x404360;
                    } else {
                        if (v11 == 0) {
                            // 0x4044d0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404360;
                        } else {
                            if (v39 == 0) {
                                // 0x404480
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40432a;
                                } else {
                                    // 0x40448c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40432a;
                                    } else {
                                        // 0x40449a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40432a;
                                        } else {
                                            goto lab_0x404360;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40432a;
                            }
                        }
                    }
                }
              lab_0x404371:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404546
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4046f2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404712
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40475f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x404779
                            int64_t v45; // 0x40477b
                            if (*(char *)v42 != 0) {
                                // 0x40477b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404773
                            while (v17 + nmemb != v42) {
                                // 0x404775
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40477b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x404768
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4047a0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404554
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4046af
                        free((int64_t *)v17);
                    }
                    // 0x4045a9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4045c0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40446e
                    return 63;
                }
                // 0x404390
                v5 = v39;
                if (v13 != 0) {
                    // 0x404414
                    v35 = v13;
                    v34 = v25;
                  lab_0x404420:;
                    int32_t * v49 = (int32_t *)a7; // 0x404430
                    uint32_t v50 = *v49; // 0x404430
                    int64_t v51 = v50; // 0x404430
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40443a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404443
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40466f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40461a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40446e
                            return 63;
                        }
                        // 0x4044b8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4047cf
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4046cd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4046e0
                                // 0x40446e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4045de
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4045f2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40445b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40445e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404462
                    int64_t result = v59; // 0x404468
                    if (v58 != 0) {
                        // 0x40446a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40446e
                    return result;
                }
            } else {
                // 0x40426e
                v5 = v32;
            }
            // break -> 0x404395
            break;
        }
    }
    // 0x404395
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4043ad
        if (*(char *)(v60 + 1) != 45) {
            // 0x4043b7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40446e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4044f9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4043e6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4043f6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404360:
    // 0x404360
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404360
    int64_t v63 = *(int64_t *)v62; // 0x404364
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404371
        goto lab_0x404371;
    }
    goto lab_0x404306;
  lab_0x40432a:
    // 0x40432a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404200
    int32_t v65; // 0x404200
    int32_t v66; // 0x404200
    if (v27 != 0) {
        goto lab_0x404360;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4044e0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404360;
            } else {
                goto lab_0x404351;
            }
        } else {
            // 0x404345
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40463c
                int64_t v67 = (int64_t)mem; // 0x40463c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404360;
                } else {
                    // 0x40464f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404351;
                }
            } else {
                goto lab_0x404351;
            }
        }
    }
  lab_0x404351:
    // 0x404351
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404360;
}
// Address range: 0x404820 - 0x404de6
int64_t function_404820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404841
    if (v3 < 1) {
        // 0x4049fe
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40483d
    int32_t v5 = *(int32_t *)a7; // 0x404849
    uint64_t v6 = a1 & 0xffffffff; // 0x40484b
    int64_t v7 = v2; // 0x404850
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404853
    *v8 = 0;
    int64_t v9; // 0x404820
    int64_t v10; // 0x404820
    int64_t v11; // 0x404820
    int64_t v12; // 0x404820
    int64_t str; // 0x404820
    int64_t v13; // 0x404820
    int64_t v14; // 0x404820
    int64_t v15; // 0x404820
    int64_t v16; // 0x404820
    int64_t v17; // 0x404820
    int32_t v18; // 0x404820
    char v19; // 0x404820
    if (v5 == 0) {
        // 0x404a38
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40486a;
    } else {
        // 0x404863
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4048b0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4048b3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404978;
            } else {
                int64_t v22 = v7 + 1; // 0x4048c6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4048d6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40498c;
                } else {
                    goto lab_0x4048e8;
                }
            }
        } else {
            goto lab_0x40486a;
        }
    }
  lab_0x40486a:
    // 0x40486a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404870
    *v24 = 0;
    int64_t v25; // 0x404820
    int64_t v26; // 0x404820
    int64_t v27; // 0x404820
    switch (*(char *)&v2) {
        case 45: {
            // 0x404960
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40496d;
        }
        case 43: {
            // 0x404c70
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40496d;
        }
        default: {
            // 0x40488c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404bef
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404d08
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40496d;
                } else {
                    // 0x404bfd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40489a;
                }
            } else {
                goto lab_0x40489a;
            }
        }
    }
  lab_0x404978:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40497f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4048e8;
    } else {
        goto lab_0x40498c;
    }
  lab_0x40489a:
    // 0x40489a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40496d;
  lab_0x40496d:
    // 0x40496d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404978;
  lab_0x4048e8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4048e8
    int64_t v31 = v30; // 0x4048e8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4048ea
    if ((int64_t)*v32 > v31) {
        // 0x4048ef
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4048f2
    if (*v33 > v30) {
        // 0x4048f7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4048fa
    int64_t v35 = v31; // 0x4048fe
    int64_t v36 = v15; // 0x4048fe
    int64_t v37; // 0x404820
    int64_t v38; // 0x404820
    int64_t v39; // 0x404820
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404a68
        int64_t v41 = v40; // 0x404a68
        v2 = v41;
        int64_t v42; // 0x404820
        if (*v33 == v40) {
            // 0x404c50
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404c58
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404a74
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404a88
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404a91
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404a9a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404ab1
            int64_t v47 = v45 & 0xffffffff; // 0x404ab5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404abe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404ac4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404ac6;
                }
            }
            int64_t v48 = v47 + 1; // 0x404aa0
            int64_t v49 = v48 & 0xffffffff; // 0x404aa0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404ab1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404abe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404ac4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404ac6;
                    }
                }
                // 0x404aa0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404c68
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404ac6;
    } else {
        goto lab_0x404904;
    }
  lab_0x40498c:
    // 0x40498c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40498f
    int64_t v51 = v12; // 0x40498f
    int64_t v52 = v14; // 0x40498f
    if (*(char *)v10 == 0) {
        goto lab_0x4048e8;
    } else {
        goto lab_0x404995;
    }
  lab_0x404904:;
    int32_t v53 = v35; // 0x404904
    int64_t v54; // 0x404820
    int64_t v55; // 0x404820
    int64_t v56; // 0x404820
    int64_t v57; // 0x404820
    int64_t v58; // 0x404820
    int64_t v59; // 0x404820
    char * v60; // 0x404820
    int64_t v61; // 0x404820
    int64_t v62; // 0x404919
    int64_t v63; // 0x404820
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404a53
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404a56;
    } else {
        // 0x40490c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404820
        int64_t v66 = v65 ? -1 : 1; // 0x404920
        int64_t v67 = (int64_t)"--"; // 0x404820
        int64_t v68 = v62; // 0x404820
        int64_t v69 = 3; // 0x404920
        unsigned char v70 = *(char *)v68; // 0x404920
        char v71 = *(char *)v67; // 0x404920
        char v72 = v71; // 0x404920
        bool v73 = false; // 0x404920
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
            // 0x404a10
            if (*(char *)v62 == 45) {
                // 0x404ad0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404ad0
                if (c == 0) {
                    goto lab_0x404a1a;
                } else {
                    // 0x404add
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404b60;
                    } else {
                        if (c == 45) {
                            // 0x404d43
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404bb5;
                        } else {
                            // 0x404aee
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404b60;
                            } else {
                                // 0x404af3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404b14;
                                } else {
                                    // 0x404afa
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404b60;
                                    } else {
                                        goto lab_0x404b14;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404a1a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404930
            v2 = v75;
            int32_t v76 = *v32; // 0x404933
            int64_t v77 = v35 + 1; // 0x404936
            int32_t v78 = v77; // 0x404939
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404ca0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404947
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404955
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404a56;
        }
    }
  lab_0x404995:;
    // 0x404995
    int64_t v79; // bp-104, 0x404820
    int64_t v80 = &v79; // 0x40482a
    int64_t v81 = v50 + 1; // 0x404995
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40499c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4049a1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4049a5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4049a9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4049b1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4049b6
    int32_t c2 = v84; // 0x4049b6
    char * found_char_pos = strchr(str2, c2); // 0x4049b6
    int64_t v87 = *v82; // 0x4049bb
    v2 = v87;
    int64_t v88 = *v85; // 0x4049c5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4049d0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404cc0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404c8d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4049fe
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4049b6
    char v91 = *(char *)(v90 + 1); // 0x4049eb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4049a5
        if (v91 != 58) {
            // 0x4049fe
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404c14
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404d18
                *v8 = 0;
            } else {
                // 0x404cfc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404c3e
            *v83 = 0;
            // 0x4049fe
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404c1e
        if (v93 != 0) {
            // 0x404cb0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404c3e
            *v83 = 0;
            // 0x4049fe
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404c31
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404c3e
            *v83 = 0;
            // 0x4049fe
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404d7a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404d2a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404d31
        // 0x404c3e
        *v83 = 0;
        // 0x4049fe
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404b89
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404b8b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404db0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404d61
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404d68
            // 0x4049fe
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404b96
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404b9a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404bb5;
  lab_0x404ac6:
    // 0x404ac6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404904;
  lab_0x404bb5:;
    int64_t v99 = function_404200(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404bd3
    // 0x4049fe
    return v99 & 0xffffffff;
  lab_0x404a56:;
    int32_t v100 = v55; // 0x404a56
    if (v100 != (int32_t)v59) {
        // 0x404a5a
        *(int32_t *)a7 = v100;
    }
    // 0x4049fe
    return 0xffffffff;
  lab_0x404a1a:
    // 0x404a1a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404a21
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4049fe
    return v99 & 0xffffffff;
  lab_0x404b60:
    // 0x404b60
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404995;
  lab_0x404b14:
    // 0x404b14
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404200(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404b3a
    if ((int32_t)v101 != -1) {
        // 0x4049fe
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404b4f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404b60;
}
// Address range: 0x404df0 - 0x404e46
int64_t function_404df0(int64_t a1) {
    // 0x404df0
    *(int32_t *)&g42 = g28;
    *(int32_t *)&g43 = g27;
    int64_t v1; // 0x404df0
    int64_t result = function_404820(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x404e16
    g28 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g26 = g44;
    return result;
}
// Address range: 0x404e50 - 0x404e68
int64_t function_404e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e50
    return function_404df0(1);
}
// Address range: 0x404e70 - 0x404e83
int64_t function_404e70(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x404e70
    return function_404df0(0);
}
// Address range: 0x404e90 - 0x404ea5
int64_t function_404e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e90
    return function_404820(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404eb0 - 0x404ec6
int64_t function_404eb0(void) {
    // 0x404eb0
    return function_404df0(0);
}
// Address range: 0x404ed0 - 0x404ee8
int64_t function_404ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404ed0
    return function_404820(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x404ef0 - 0x404f6a
int64_t function_404ef0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x404efb
    int64_t v2 = (int64_t)&g12; // 0x404efb
    int32_t * pwc; // 0x404ef0
    int64_t v3; // 0x404ef0
    int64_t n; // 0x404ef0
    if (a2 == 0) {
        goto lab_0x404f42;
    } else {
        // 0x404efd
        if (a3 == 0) {
            // 0x404f28
            return -2;
        }
        // 0x404f09
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x404f42;
        } else {
            goto lab_0x404f14;
        }
    }
  lab_0x404f42:
    // 0x404f42
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x404ef0
    pwc = (int32_t *)&v4;
    goto lab_0x404f14;
  lab_0x404f14:;
    char * wstr = (char *)v3; // 0x404f1a
    int64_t ps; // 0x404ef0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x404f1a
    int64_t result = v5; // 0x404f1a
    if (v5 < 0xfffffffe) {
        // 0x404f28
        return result;
    }
    int64_t result2 = result; // 0x404f59
    if ((char)function_404fd0(0, v3) == 0) {
        // 0x404f5b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404f28
    return result2;
}
// Address range: 0x404f70 - 0x404fcd
int64_t function_404f70(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404f77
    int64_t v2; // 0x404f70
    int64_t result = function_4055a0(a1, v2); // 0x404f88
    if ((v2 & 32) != 0) {
        // 0x404fb0
        if ((int32_t)result == 0) {
            // 0x404fb4
            *__errno_location() = 0;
        }
        // 0x404faa
        return 0xffffffff;
    }
    // 0x404f91
    if ((int32_t)result == 0) {
        // 0x404faa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x404f98
    if (v1 == 0) {
        // 0x404f9a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x404faa
    return result2;
}
// Address range: 0x404fd0 - 0x40502e
int64_t function_404fd0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x404fd6
    if (locale == NULL) {
        // 0x405003
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x404fd6
    bool v2; // 0x404fd0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x404fd0
    int64_t v5 = v1; // 0x404fd0
    int64_t v6 = 2; // 0x404ff5
    unsigned char v7 = *(char *)v5; // 0x404ff5
    char v8 = *(char *)v4; // 0x404ff5
    char v9 = v8; // 0x404ff5
    bool v10 = false; // 0x404ff5
    while (v7 == v8) {
        // 0x404fe8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405001
    int64_t v13 = v1; // 0x405001
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405003
        return 0;
    }
    int64_t v14 = 6; // 0x405001
    unsigned char v15 = *(char *)v13; // 0x40501d
    char v16 = *(char *)v12; // 0x40501d
    char v17 = v16; // 0x40501d
    bool v18 = false; // 0x40501d
    while (v15 == v16) {
        // 0x405010
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
// Address range: 0x405030 - 0x405592
int64_t function_405030(void) {
    char * v1 = nl_langinfo(14); // 0x405046
    char * v2 = g46; // 0x40504b
    char * v3; // 0x405030
    int64_t v4; // 0x405030
    int64_t v5; // 0x405030
    int64_t v6; // 0x405030
    int64_t v7; // 0x405030
    int32_t size; // 0x405030
    int32_t size2; // 0x405030
    int32_t len; // 0x405102
    int64_t v8; // 0x405102
    char * env_val; // 0x4050ed
    if (v2 == NULL) {
        // 0x4050e8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405155;
        } else {
            // 0x4050fa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405155;
            } else {
                // 0x4050ff
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4050ed
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405585
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405155;
                    } else {
                        // 0x4054f9
                        size2 = len + 14;
                        goto lab_0x40511b;
                    }
                } else {
                    goto lab_0x40511b;
                }
            }
        }
    } else {
        // 0x405030
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40506a;
    }
  lab_0x40539c:;
    // 0x40539c
    struct _IO_FILE * stream; // 0x4051db
    int32_t v10 = __uflow(stream); // 0x40539f
    int64_t v11; // 0x405030
    int64_t v12 = v11; // 0x4053a9
    int64_t v13; // 0x405030
    int64_t v14 = v13; // 0x4053a9
    int32_t v15 = v10; // 0x4053a9
    int64_t v16; // 0x405030
    int64_t v17 = v16; // 0x4053a9
    int64_t v18 = v11; // 0x4053a9
    int64_t v19 = v13; // 0x4053a9
    int64_t v20 = v16; // 0x4053a9
    if (v10 == -1) {
        // break -> 0x4053af
        goto lab_0x4053af;
    }
    goto lab_0x405229;
  lab_0x40521e:;
    // 0x40521e
    int64_t v90; // 0x405030
    int64_t * v32; // 0x405210
    *v32 = v90 + 1;
    int64_t v89; // 0x405030
    v12 = v89;
    int64_t v91; // 0x405030
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405030
    v17 = v92;
    goto lab_0x405229;
  lab_0x405229:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405030
    int32_t v25; // bp-120, 0x405030
    int32_t v26; // bp-184, 0x405030
    int64_t v27; // 0x4051db
    int64_t v28; // 0x4051f8
    int64_t v29; // 0x4051fd
    int64_t * v30; // 0x405214
    switch (c) {
        case 32: {
            goto lab_0x405210;
        }
        case 10: {
            goto lab_0x405210;
        }
        case 9: {
            goto lab_0x405210;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405401
            int32_t v33; // 0x405030
            char v34; // 0x405030
            int32_t v35; // 0x40540e
            if (v31 < *v30) {
                // 0x4053e0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40540b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405401
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4053e0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40540b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4053f0
                v36 = v33;
            }
            // 0x4054df
            if (v36 == -1) {
                // break -> 0x4053af
                break;
            }
            goto lab_0x405210;
        }
        default: {
            // 0x40523f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4053af
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405268
            int64_t v39 = v37 + 4; // 0x40526a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405276
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405278
            while (v41 == 0) {
                // 0x405268
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405296
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4052a2
            int64_t v45 = v43 + 4; // 0x4052a4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4052b0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4052b2
            while (v47 == 0) {
                // 0x4052a2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40529f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4052c8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4052d8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4052dc
            int64_t v52 = v51 + v48; // 0x4052e5
            int64_t * mem; // 0x405030
            int64_t v53; // 0x405030
            int64_t v54; // 0x405030
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40541b
                int64_t v56 = v55 + 3; // 0x405427
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405301
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405310
            if (mem == NULL) {
                // 0x40553c
                free((int64_t *)v21);
                function_4055a0(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x4051b4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405328
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405332
            uint32_t v62 = (int32_t)v59; // 0x405335
            int64_t v63; // 0x405030
            if (v62 >= 8) {
                // 0x405444
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40545e
                int64_t v66 = v61 - v65; // 0x405462
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40546d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40547e
                    int64_t v70 = v69 & 0xffffffff; // 0x40547e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40547b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40550f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405347
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40534b
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
            int64_t v73 = v51 + 1; // 0x40535b
            int64_t v74 = v60 - 1; // 0x40535f
            uint32_t v75 = (int32_t)v73; // 0x405364
            int64_t v76; // 0x405030
            if (v75 >= 8) {
                // 0x405492
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40549c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4054ac
                int64_t v80 = v74 - v79; // 0x4054b0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4054bb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4054cb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4054c9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405526
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40552e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405376
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40537a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405573
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40538e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40521e;
            } else {
                goto lab_0x40539c;
            }
        }
    }
  lab_0x405210:;
    int64_t v93 = v23; // 0x405030
    int64_t v94 = v22; // 0x405030
    int64_t v95 = v21; // 0x405030
    goto lab_0x405210_2;
  lab_0x405155:;
    int64_t * mem3 = malloc(size); // 0x405155
    int64_t v97 = (int64_t)&g12; // 0x405160
    int64_t v98; // 0x405030
    int64_t path; // 0x405030
    if (mem3 == NULL) {
        goto lab_0x405132;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405155
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405176;
    }
  lab_0x40506a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x40505d
    char v100 = *v3; // 0x40506a
    int64_t v101; // 0x405030
    if (v100 == 0) {
        // 0x4050c4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405030
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405030
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4050b0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4050b7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405080
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40508d
        char v107 = *(char *)v106; // 0x405092
        v102 = v107;
        if (v107 == 0) {
            // 0x4050c4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40509b
    v104 = v103 + 1;
  lab_0x4050b7:
    // 0x4050c4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405132:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40506a;
  lab_0x405176:;
    int64_t v109 = v98 + path; // 0x405176
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4051a2
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x4051d1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405502
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x4051f5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405210_2:;
                uint64_t v96 = *v32; // 0x405210
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40539c;
                } else {
                    goto lab_0x40521e;
                }
            }
          lab_0x4053af:
            // 0x4053af
            function_4055a0(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x4053ce
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4051b4;
  lab_0x40511b:;
    int64_t * mem4 = malloc(size2); // 0x40511b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x4051c1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405176;
    } else {
        goto lab_0x405132;
    }
  lab_0x4051b4:
    // 0x4051b4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405132;
}
// Address range: 0x4055a0 - 0x40561b
int64_t function_4055a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4055a7
    if (fileno(stream) < 0) {
        // 0x405607
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4055ba
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4055eb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405607
            return fclose(stream);
        }
    }
    // 0x4055bc
    if ((int32_t)function_405620(a1, v1) == 0) {
        // 0x405607
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4055c8
    int32_t v3 = *v2; // 0x4055d0
    int64_t result = fclose(stream); // 0x4055de
    if (v3 != 0) {
        // 0x405610
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4055e0
    return result;
}
// Address range: 0x405620 - 0x405660
int64_t function_405620(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40563a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40563a
        return fflush(stream);
    }
    // 0x405648
    function_405660(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405660 - 0x4056b7
int64_t function_405660(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405660
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40566a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40569b
    int64_t result = -1; // 0x4056a4
    if (v1 != -1) {
        // 0x4056a6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4056b2
    return result;
}
// Address range: 0x4056c0 - 0x40571d
int64_t function_4056c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4056c0
    return function_401270();
}
// Address range: 0x405720 - 0x405721
int64_t function_405720(void) {
    // 0x405720
    int64_t result; // 0x405720
    return result;
}
// Address range: 0x405730 - 0x405748
int64_t function_405730(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405730
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x405748 - 0x405768
int64_t function_405748(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x405752
    while (*(int64_t *)v1 != -1) {
        // 0x405753
        v1 -= 8;
    }
    // 0x405764
    return result;
}
