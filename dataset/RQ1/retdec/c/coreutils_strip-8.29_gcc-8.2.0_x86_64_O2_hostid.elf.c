// Address range: 0x401590 - 0x401595
int64_t function_401590(void) {
    // 0x401590
    abort();
    // UNREACHABLE
}
// Address range: 0x401595 - 0x40159a
int64_t function_401595(void) {
    // 0x401595
    abort();
    // UNREACHABLE
}
// Address range: 0x40159a - 0x40159f
int64_t function_40159a(void) {
    // 0x40159a
    abort();
    // UNREACHABLE
}
// Address range: 0x40159f - 0x4015a4
int64_t function_40159f(void) {
    // 0x40159f
    abort();
    // UNREACHABLE
}
// Address range: 0x4015a4 - 0x4015a9
int64_t function_4015a4(void) {
    // 0x4015a4
    abort();
    // UNREACHABLE
}
// Address range: 0x4015a9 - 0x4015ae
int64_t function_4015a9(void) {
    // 0x4015a9
    abort();
    // UNREACHABLE
}
// Address range: 0x4015b0 - 0x4016a1
int64_t function_4015b0(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x4015b1
    function_401c30(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x4015b0
    function_4056b0(0x401a80, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_401b20(v1, a2, "hostid", "GNU coreutils", (int64_t)g19, 0x401790);
    int64_t v3 = function_404df0(v1, a2, (int64_t *)&g12, &g2, 0, 0x401790); // 0x401631
    if ((int32_t)v3 != -1) {
        // 0x401697
        function_401790(1);
        // UNREACHABLE
    }
    uint64_t v4 = (int64_t)*(int32_t *)0x60823c; // 0x40163d
    if (v1 <= v4) {
        // 0x401648
        __printf_chk(1, "%08x\n", gethostid());
        return 0;
    }
    // 0x401669
    function_403850(*(int64_t *)(8 * v4 + a2));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x401697
    function_401790(1);
    // UNREACHABLE
}
// Address range: 0x4016b0 - 0x4016db
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4016b0
    int64_t v1; // 0x4016b0
    __libc_start_main(0x4015b0, (int32_t)a4, (char **)&v1, (void (*)())0x405640, (void (*)())0x4056a0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4016db - 0x4016fa
int64_t function_4016db(void) {
    // 0x4016db
    return &g29;
}
// Address range: 0x4016fa - 0x401731
int64_t function_4016fa(void) {
    // 0x4016fa
    return 0;
}
// Address range: 0x401731 - 0x401788
int64_t function_401731(void) {
    // 0x401731
    if (g33 != 0) {
        // 0x401787
        int64_t result; // 0x401731
        return result;
    }
    int64_t v1 = g34; // 0x401764
    int64_t result2; // 0x401776
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401776
        result2 = function_4016db();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401766
        v1++;
    }
    // 0x40175a
    g34 = v1;
    // 0x401776
    result2 = function_4016db();
    g33 = 1;
    return result2;
}
// Address range: 0x401788 - 0x40178d
int64_t function_401788(void) {
    // 0x401788
    return function_4016fa();
}
// Address range: 0x401790 - 0x401a5d
int64_t function_401790(int64_t a1) {
    int32_t status = a1; // 0x4017a6
    if (status != 0) {
        // 0x4017aa
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4017cf
        exit(status);
        // UNREACHABLE
    }
    // 0x4017d6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]\nPrint the numeric identifier (in hexadecimal) for the current host.\n\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x40183a
    bool v2; // 0x401790
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4018c0
    int64_t v6 = *(int64_t *)v5; // 0x4018c4
    int64_t v7 = 7; // 0x4018ca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"hostid";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4018d6
        char v11 = *(char *)v9; // 0x4018d6
        char v12 = v11; // 0x4018d6
        bool v13 = false; // 0x4018d6
        while (v10 == v11) {
            // 0x4018cc
            v7--;
            int64_t v14 = v9 + v3; // 0x4018d6
            int64_t v15 = v8 + v3; // 0x4018d6
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
            // break -> 0x4018e2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x4018e2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4019f4;
        } else {
            // 0x4019de
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401a33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401944;
            } else {
                goto lab_0x4019f4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401944;
        } else {
            // 0x40192a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401a33
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401944;
            } else {
                goto lab_0x401944;
            }
        }
    }
  lab_0x4019f4:
    // 0x4019f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401984
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4017cf
    exit(status);
    // UNREACHABLE
  lab_0x401944:
    // 0x401944
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401984
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4017cf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401a60 - 0x401a68
int64_t function_401a60(int64_t a1) {
    // 0x401a60
    g36 = a1;
    int64_t result; // 0x401a60
    return result;
}
// Address range: 0x401a70 - 0x401a78
int64_t function_401a70(int64_t a1) {
    // 0x401a70
    g35 = a1;
    int64_t result; // 0x401a70
    return result;
}
// Address range: 0x401a80 - 0x401b1e
int64_t function_401a80(void) {
    // 0x401a80
    int32_t * err_num; // 0x401a96
    if ((int32_t)function_404ef0((int64_t)g30) == 0) {
        goto lab_0x401aac;
    } else {
        // 0x401a96
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x401ac3;
        } else {
            // 0x401aa7
            if (*err_num != 32) {
                goto lab_0x401ac3;
            } else {
                goto lab_0x401aac;
            }
        }
    }
  lab_0x401aac:;
    int64_t result = function_404ef0((int64_t)g32); // 0x401ab3
    if ((int32_t)result == 0) {
        // 0x401abc
        return result;
    }
    // 0x401afe
    _exit(g20);
    // UNREACHABLE
  lab_0x401ac3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401acf
    if (g36 == 0) {
        // 0x401b09
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401ae3
        error(0, *err_num, "%s: %s", (char *)function_4036a0((int64_t)g36), v1);
    }
    // 0x401afe
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401b20 - 0x401c22
int64_t function_401b20(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x401b20
    int64_t v1; // 0x401b20
    if ((char)v1 != 0) {
        // 0x401b33
        int128_t v2; // 0x401b20
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x401b6a
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x401b7f
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x401b20
        return result;
    }
    int64_t result2 = function_404df0(a1, a2, &g3, (int64_t *)&g4, 0, a6); // 0x401bb9
    int32_t v4 = result2; // 0x401bbe
    switch (v4) {
        default: {
            // 0x401bc8
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x401bea
                function_403c70((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x401b7f
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
}
// Address range: 0x401c30 - 0x401cc9
int64_t function_401c30(int64_t str) {
    // 0x401c30
    if (str == 0) {
        // 0x401ca9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401c3e
    int64_t result = (int64_t)found_char_pos; // 0x401c3e
    if (found_char_pos == NULL) {
        // 0x401c99
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401c48
    if (v1 - str < 7) {
        // 0x401c99
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x401c58
    bool v2; // 0x401c30
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401c30
    int64_t v5 = result - 6; // 0x401c30
    int64_t v6 = 7; // 0x401c66
    unsigned char v7 = *(char *)v5; // 0x401c66
    char v8 = *(char *)v4; // 0x401c66
    char v9 = v8; // 0x401c66
    bool v10 = false; // 0x401c66
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
    int64_t v12 = (int64_t)"lt-"; // 0x401c70
    int64_t v13 = v1; // 0x401c70
    int64_t v14 = 3; // 0x401c70
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401c99
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401c82
    char v16 = *(char *)v12; // 0x401c82
    char v17 = v16; // 0x401c82
    bool v18 = false; // 0x401c82
    while (v15 == v16) {
        // 0x401c72
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
    int64_t v20 = v1; // 0x401c8c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401c8e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x401c99
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x401cd0 - 0x401dc2
int64_t function_401cd0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401ce4
    int64_t result = (int64_t)v1; // 0x401ce4
    if (result != a1) {
        // 0x401cf1
        return result;
    }
    int64_t v2 = function_404fb0(); // 0x401d00
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401db6
    if (v3 == 85) {
        // 0x401d10
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401da8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x401d3e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x401d4b
        // 0x401cf1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401da8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x401d8d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x401d9a
    // 0x401cf1
    return result4;
}
// Address range: 0x401dd0 - 0x401e27
int64_t function_401dd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401dd0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401e18
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401e27 - 0x402ff1
int64_t function_401e27(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x401e71
    int64_t v3 = 0; // 0x401e71
    int64_t v4; // 0x401e27
    int64_t v5; // 0x401e27
    int64_t v6; // 0x401e27
    int64_t v7; // 0x401e27
    int64_t v8; // 0x401e27
    int64_t v9; // 0x401e27
    int64_t v10; // 0x401e27
    int64_t v11; // 0x401e27
    int64_t v12; // 0x401e27
    int64_t v13; // 0x401e27
    int64_t v14; // 0x401e27
    int64_t v15; // 0x401e27
    int64_t v16; // 0x401e27
    int64_t v17; // 0x401e27
    int64_t v18; // 0x401e27
    int64_t result; // 0x401e27
    int64_t v19; // 0x401e27
    int32_t wc; // bp+132, 0x401e27
    int64_t ps; // bp+136, 0x401e27
    char v20; // 0x4023e0
    int64_t v21; // 0x4023e0
    int64_t v22; // 0x402788
    int64_t v23; // 0x401e27
    int64_t v24; // 0x4027a7
    int32_t v25; // 0x401e27
    while (true) {
      lab_0x401e78_2:
        // 0x401e78
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401e27
        int64_t v27; // 0x401eac
        while (true) {
          lab_0x401e78:
            // 0x401e78
            v5 = v26;
            bool v28 = v15 == v5; // 0x401e83
            if (v15 == -1) {
                // 0x401e85
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x401e93
            if (v28) {
                // break (via goto) -> 0x4025f8
                goto lab_0x4025f8;
            }
            // 0x401e9c
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
                    // 0x40248b
                    if (v25 % 2 == 0) {
                        goto lab_0x401fd1;
                    }
                    // 0x4028ad
                    v26 = v5 + 1;
                    goto lab_0x401e78;
                }
                case 7: {
                    goto lab_0x401fd1;
                }
                case 8: {
                    goto lab_0x401fd1;
                }
                case 9: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x401fd1;
                }
                case 12: {
                    goto lab_0x401fd1;
                }
                case 13: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x401f9d;
                }
                case 36: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x401fd1;
                }
                case 38: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x401fd1;
                }
                case 44: {
                    goto lab_0x401fd1;
                }
                case 45: {
                    goto lab_0x401fd1;
                }
                case 46: {
                    goto lab_0x401fd1;
                }
                case 47: {
                    goto lab_0x401fd1;
                }
                case 48: {
                    goto lab_0x401fd1;
                }
                case 49: {
                    goto lab_0x401fd1;
                }
                case 50: {
                    goto lab_0x401fd1;
                }
                case 51: {
                    goto lab_0x401fd1;
                }
                case 52: {
                    goto lab_0x401fd1;
                }
                case 53: {
                    goto lab_0x401fd1;
                }
                case 54: {
                    goto lab_0x401fd1;
                }
                case 55: {
                    goto lab_0x401fd1;
                }
                case 56: {
                    goto lab_0x401fd1;
                }
                case 57: {
                    goto lab_0x401fd1;
                }
                case 58: {
                    goto lab_0x401fd1;
                }
                case 59: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x401fd1;
                }
                case 66: {
                    goto lab_0x401fd1;
                }
                case 67: {
                    goto lab_0x401fd1;
                }
                case 68: {
                    goto lab_0x401fd1;
                }
                case 69: {
                    goto lab_0x401fd1;
                }
                case 70: {
                    goto lab_0x401fd1;
                }
                case 71: {
                    goto lab_0x401fd1;
                }
                case 72: {
                    goto lab_0x401fd1;
                }
                case 73: {
                    goto lab_0x401fd1;
                }
                case 74: {
                    goto lab_0x401fd1;
                }
                case 75: {
                    goto lab_0x401fd1;
                }
                case 76: {
                    goto lab_0x401fd1;
                }
                case 77: {
                    goto lab_0x401fd1;
                }
                case 78: {
                    goto lab_0x401fd1;
                }
                case 79: {
                    goto lab_0x401fd1;
                }
                case 80: {
                    goto lab_0x401fd1;
                }
                case 81: {
                    goto lab_0x401fd1;
                }
                case 82: {
                    goto lab_0x401fd1;
                }
                case 83: {
                    goto lab_0x401fd1;
                }
                case 84: {
                    goto lab_0x401fd1;
                }
                case 85: {
                    goto lab_0x401fd1;
                }
                case 86: {
                    goto lab_0x401fd1;
                }
                case 87: {
                    goto lab_0x401fd1;
                }
                case 88: {
                    goto lab_0x401fd1;
                }
                case 89: {
                    goto lab_0x401fd1;
                }
                case 90: {
                    goto lab_0x401fd1;
                }
                case 91: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x401fd1;
                }
                case 94: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x401fd1;
                }
                case 96: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x401fd1;
                }
                case 98: {
                    goto lab_0x401fd1;
                }
                case 99: {
                    goto lab_0x401fd1;
                }
                case 100: {
                    goto lab_0x401fd1;
                }
                case 101: {
                    goto lab_0x401fd1;
                }
                case 102: {
                    goto lab_0x401fd1;
                }
                case 103: {
                    goto lab_0x401fd1;
                }
                case 104: {
                    goto lab_0x401fd1;
                }
                case 105: {
                    goto lab_0x401fd1;
                }
                case 106: {
                    goto lab_0x401fd1;
                }
                case 107: {
                    goto lab_0x401fd1;
                }
                case 108: {
                    goto lab_0x401fd1;
                }
                case 109: {
                    goto lab_0x401fd1;
                }
                case 110: {
                    goto lab_0x401fd1;
                }
                case 111: {
                    goto lab_0x401fd1;
                }
                case 112: {
                    goto lab_0x401fd1;
                }
                case 113: {
                    goto lab_0x401fd1;
                }
                case 114: {
                    goto lab_0x401fd1;
                }
                case 115: {
                    goto lab_0x401fd1;
                }
                case 116: {
                    goto lab_0x401fd1;
                }
                case 117: {
                    goto lab_0x401fd1;
                }
                case 118: {
                    goto lab_0x401fd1;
                }
                case 119: {
                    goto lab_0x401fd1;
                }
                case 120: {
                    goto lab_0x401fd1;
                }
                case 121: {
                    goto lab_0x401fd1;
                }
                case 122: {
                    goto lab_0x401fd1;
                }
                case 123: {
                    goto lab_0x401f75;
                }
                case 124: {
                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x401f75;
                }
                case 126: {
                    goto lab_0x401f9d;
                }
                default: {
                    goto lab_0x402375;
                }
            }
        }
      lab_0x402375:
        if (v23 != 1) {
            // 0x4026e0
            ps = 0;
            int64_t len = v15; // 0x4026f0
            if (v15 == -1) {
                // 0x4026f2
                len = strlen((char *)str);
            }
            // 0x40271e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40277f:
                // 0x40277f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402784
                int64_t v30 = v29 + str;
                v24 = function_404e70(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402cfa_2;
                    }
                    case -1: {
                        goto lab_0x402cfa_2;
                    }
                    case -2: {
                        // 0x402ddd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402e17
                            v19 = v18;
                            int64_t v31 = v18; // 0x402e1a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402e27
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402e20
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402cfa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402cfa_2;
                    }
                    case 1: {
                        goto lab_0x402750;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4027fc
                        char v34 = *(char *)v33; // 0x40280d
                        unsigned char v35; // 0x401e27
                        if (v34 < 125) {
                            // 0x402818
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40282f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402800
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40280d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402818
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40282f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402800
                            v33++;
                        }
                        goto lab_0x402750;
                    }
                }
            }
            goto lab_0x402cfa_2;
        } else {
            // 0x4023c4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x401fd1;
        }
    }
  lab_0x4025f8:
    // 0x4025f8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x402efa
        if (v8 > result) {
            // 0x402f03
            *(char *)(v12 + result) = 0;
        }
        // 0x402227
        return result;
    }
    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x401fd1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x401fe0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4021ea_2;
        }
    }
    int64_t v39 = result; // 0x4020e1
    char v40 = v20; // 0x4020e1
    int64_t v41 = v38; // 0x4020e1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4020e1
    int64_t v43 = v36; // 0x4020e1
    goto lab_0x40205d;
  lab_0x4021ea_2:
    // 0x402227
    return function_401dd0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402cfa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x401fd1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4028ce
        int64_t v50 = v5 + 1; // 0x4029b1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4029b8
        char v52 = v20; // 0x4029b8
        int64_t v53 = result; // 0x4029b8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402981
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402985
            int64_t v56 = v54 + 1; // 0x40298a
            int64_t v57 = v51 + 1; // 0x4029b1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40297c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402981
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402985
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
        goto lab_0x40205d;
    }
  lab_0x402750:
    // 0x402750
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40276f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402772
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402cfa
        goto lab_0x402cfa_2;
    }
    goto lab_0x40277f;
  lab_0x401f9d:
    // 0x401f9d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4021ea_2;
    }
    goto lab_0x401fd1;
  lab_0x401f75:;
    bool v60 = v15 == 1; // 0x401f80
    if (v15 == -1) {
        // 0x401f82
        v60 = *(char *)v1 == 0;
    }
    // 0x401f8e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x401fd1;
    } else {
        goto lab_0x401f9d;
    }
  lab_0x40205d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402062
        *(char *)(v44 + v45) = v40;
    }
    // 0x402066
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x401e78_2;
}
// Address range: 0x403000 - 0x40319e
int64_t function_403000(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403002
    int32_t * v3 = __errno_location(); // 0x40301c
    int64_t v4 = (int64_t)g22; // 0x403021
    int32_t v5 = *v3; // 0x40302b
    int64_t v6 = v4; // 0x403041
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403199
            function_404060(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403050
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403057
        int64_t v9; // 0x403000
        if (g22 == &g23) {
            int64_t v10 = function_403e70(0, v8); // 0x40317a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x40317f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403e70(v4, v8); // 0x40306b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40307a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40307a
        int32_t v14 = v7; // 0x403081
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4030b1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4030bb
    int64_t * v17 = (int64_t *)v15; // 0x4030be
    uint64_t v18 = *v17; // 0x4030be
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4030c1
    int64_t result = *v19; // 0x4030c1
    int64_t v20; // 0x403000
    uint64_t v21 = function_401dd0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4030e4
    if (v18 > v21) {
        // 0x40315b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4030f7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403107
        free((int64_t *)result);
    }
    int64_t result2 = function_403e10(v22); // 0x403121
    *v19 = result2;
    int64_t v23; // 0x403000
    function_401dd0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40315b
    *v3 = v5;
    return result2;
}
// Address range: 0x4031a0 - 0x4031d4
int64_t function_4031a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4031a7
    int64_t result = function_404010(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4031c6
    return result;
}
// Address range: 0x4031e0 - 0x4031ef
int64_t function_4031e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x4031ec
    return result;
}
// Address range: 0x4031f0 - 0x4031ff
int64_t function_4031f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x4031f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403200 - 0x403233
int64_t function_403200(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403219
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40321e
    uint32_t v3 = *v2; // 0x40321e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403222
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403240 - 0x403253
int64_t function_403240(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40324c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403260 - 0x40328b
int64_t function_403260(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403268
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403285
        abort();
        // UNREACHABLE
    }
    // 0x40327c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403290 - 0x403302
int64_t function_403290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4032b2
    int32_t * v2 = __errno_location(); // 0x4032bb
    uint32_t v3 = *(int32_t *)v1; // 0x4032db
    int64_t result = function_401dd0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4032ea
    return result;
}
// Address range: 0x403310 - 0x4033f1
int64_t function_403310(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403332
    int32_t * v2 = __errno_location(); // 0x403338
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403357
    int32_t * v4 = (int32_t *)v1; // 0x40335a
    int64_t v5 = function_401dd0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403375
    int64_t v6 = v5 + 1; // 0x40337a
    int64_t result = function_403e10(v6); // 0x40338f
    function_401dd0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4033d4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4033dd
    return result;
}
// Address range: 0x403400 - 0x40340a
int64_t function_403400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403400
    return function_403310(a1, a2, 0, a3);
}
// Address range: 0x403410 - 0x4034a5
int64_t function_403410(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403410
    int64_t v2 = v1; // 0x403410
    int64_t v3 = v2; // 0x403424
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403443
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403440
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40345d
    if (g23 != 0x6082a0) {
        // 0x40345f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403481
    if (g22 != &g23) {
        // 0x403483
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g49;
    }
    // 0x403496
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x4034b0 - 0x4034c1
int64_t function_4034b0(void) {
    // 0x4034b0
    int64_t v1; // 0x4034b0
    return function_403000(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x4034d0 - 0x4034da
int64_t function_4034d0(void) {
    // 0x4034d0
    int64_t v1; // 0x4034d0
    return function_403000(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x4034e0 - 0x4034f6
int64_t function_4034e0(int64_t a1) {
    // 0x4034e0
    return function_403000(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403500 - 0x403512
int64_t function_403500(int64_t a1, int64_t a2) {
    // 0x403500
    return function_403000(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403520 - 0x403588
int64_t function_403520(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403530
    return function_403000((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403590 - 0x4035f4
int64_t function_403590(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4035a0
    return function_403000((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403600 - 0x40360c
int64_t function_403600(int64_t a1, int64_t a2) {
    // 0x403600
    return function_403520(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403610 - 0x40361f
int64_t function_403610(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403610
    return function_403590(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403620 - 0x403690
int64_t function_403620(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x40362d
    int128_t v2 = __asm_movdqa(g40); // 0x403635
    int128_t v3 = __asm_movdqa(g41); // 0x40363d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403652
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403668
    uint32_t v6 = *v5; // 0x403668
    uint32_t v7 = (int32_t)a3 % 32; // 0x40366d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403000(0, a1, a2, &v4);
}
// Address range: 0x403690 - 0x40369d
int64_t function_403690(int64_t a1, int64_t a2) {
    // 0x403690
    return function_403620(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4036a0 - 0x4036b1
int64_t function_4036a0(int64_t a1) {
    // 0x4036a0
    return function_403620(a1, -1, 58);
}
// Address range: 0x4036c0 - 0x4036ca
int64_t function_4036c0(void) {
    // 0x4036c0
    int64_t v1; // 0x4036c0
    return function_403620(v1, v1, 58);
}
// Address range: 0x4036d0 - 0x40373e
int64_t function_4036d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4036ea
    return function_403000(a1, a3, -1, &v1);
}
// Address range: 0x403740 - 0x4037ac
int64_t function_403740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403747
    int128_t v2 = __asm_movdqa(g40); // 0x40374f
    int128_t v3 = __asm_movdqa(g41); // 0x403757
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403779
    if (a2 == 0 || a3 == 0) {
        // 0x4037a7
        abort();
        // UNREACHABLE
    }
    // 0x40378a
    return function_403000(a1, a4, a5, &v4);
}
// Address range: 0x4037b0 - 0x4037b9
int64_t function_4037b0(void) {
    // 0x4037b0
    int64_t v1; // 0x4037b0
    return function_403740(v1, v1, v1, v1, -1);
}
// Address range: 0x4037c0 - 0x4037d7
int64_t function_4037c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4037c0
    return function_403740(0, a1, a2, a3, -1);
}
// Address range: 0x4037e0 - 0x4037f3
int64_t function_4037e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4037e0
    return function_403740(0, a1, a2, a3, a4);
}
// Address range: 0x403800 - 0x40380a
int64_t function_403800(void) {
    // 0x403800
    int64_t v1; // 0x403800
    return function_403000(v1, v1, v1, &g21);
}
// Address range: 0x403810 - 0x403822
int64_t function_403810(int64_t a1, int64_t a2) {
    // 0x403810
    return function_403000(0, a1, a2, &g21);
}
// Address range: 0x403830 - 0x403841
int64_t function_403830(void) {
    // 0x403830
    int64_t v1; // 0x403830
    return function_403000(v1, v1, -1, &g21);
}
// Address range: 0x403850 - 0x403866
int64_t function_403850(int64_t a1) {
    // 0x403850
    return function_403000(0, a1, -1, &g21);
}
// Address range: 0x403870 - 0x403c4d
int64_t function_403870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403908
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40388c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4038a6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4038eb
    if (a6 < 10) {
        // 0x4038fa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4039f2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403c50 - 0x403c70
int64_t function_403c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403c50
    if (a5 == 0) {
        // 0x403c6b
        return function_403870(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403c57
    v1++;
    int64_t v2 = v1; // 0x403c69
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403c60
        v1++;
        v2 = v1;
    }
    // 0x403c6b
    return function_403870(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403c70 - 0x403cd0
int64_t function_403c70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x403c70
    int64_t v4 = &v3; // 0x403c70
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x403ca3
    int64_t v7; // 0x403c8d
    int64_t * v8; // 0x403cab
    int64_t v9; // 0x403cab
    int64_t v10; // 0x403cb7
    if (v6 < 48) {
        // 0x403c80
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x403cc3
            break;
        }
    } else {
        // 0x403cab
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x403cc3
            break;
        }
    }
    int64_t v11 = 10; // 0x403ca1
    while (v5 != 9) {
        // 0x403c99
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x403c80
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x403cc3
                break;
            }
        } else {
            // 0x403cab
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x403cc3
                break;
            }
        }
        // 0x403c99
        v11 = 10;
    }
    // 0x403cc3
    return function_403870(a1, a2, a3, a4, v4, v11, (int64_t)&g49);
}
// Address range: 0x403cd0 - 0x403d8c
int64_t function_403cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403cd0
    int64_t v1; // bp-168, 0x403cd0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403cd0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403cd0
    int64_t v8; // 0x403cd0
    int64_t v9; // bp-56, 0x403cd0
    int64_t v10; // 0x403d35
    int64_t v11; // 0x403d59
    if ((int32_t)v6 < 48) {
        // 0x403d20
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403d70
            break;
        }
    } else {
        // 0x403d52
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403d70
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403d4a
    int64_t v13 = 10; // 0x403d4a
    while (v5 != 9) {
        // 0x403d4c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403d20
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403d70
                break;
            }
        } else {
            // 0x403d52
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403d70
                break;
            }
        }
        // 0x403d42
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403d70
    int64_t v14; // bp-136, 0x403cd0
    int64_t result = function_403870(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x403d7f
    return result;
}
// Address range: 0x403d90 - 0x403e04
int64_t function_403d90(int64_t a1) {
    // 0x403d90
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403df3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x403e10 - 0x403e2a
int64_t function_403e10(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403e14
    if (size != 0 != (mem == NULL)) {
        // 0x403e23
        return (int64_t)mem;
    }
    // 0x403e25
    function_404060(size);
    // UNREACHABLE
}
// Address range: 0x403e30 - 0x403e51
int64_t function_403e30(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403e33
    int64_t v2 = v1; // 0x403e33
    if (v2 < 0) {
        // 0x403e4b
        function_404060(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403e49
        return function_403e10(v2);
    }
    // 0x403e4b
    function_404060(v2);
    // UNREACHABLE
}
// Address range: 0x403e60 - 0x403e62
int64_t function_403e60(void) {
    // 0x403e60
    int64_t v1; // 0x403e60
    return function_403e10(v1);
}
// Address range: 0x403e70 - 0x403ea6
int64_t function_403e70(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403e98
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403e81
    if (a2 != 0 != (mem == NULL)) {
        // 0x403e90
        return (int64_t)mem;
    }
    // 0x403ea1
    function_404060(a1);
    // UNREACHABLE
}
// Address range: 0x403eb0 - 0x403ed1
int64_t function_403eb0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403eb3
    int64_t v2 = v1; // 0x403eb3
    if (v2 < 0) {
        // 0x403ecb
        function_404060(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403ec9
        return function_403e70(a1, v2);
    }
    // 0x403ecb
    function_404060(a1);
    // UNREACHABLE
}
// Address range: 0x403ee0 - 0x403f66
int64_t function_403ee0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x403f3b
            function_404060(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403e70(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x403f23
    if (a2 == 0) {
        // 0x403f48
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x403f28
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x403f3b
        function_404060(a1);
        // UNREACHABLE
    }
    // 0x403f0a
    *(int64_t *)a2 = v2;
    return function_403e70(a1, v2 * a3);
}
// Address range: 0x403f70 - 0x403fc0
int64_t function_403f70(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x403f70
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x403fba
            function_404060(a1);
            // UNREACHABLE
        }
        // 0x403f92
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403e70(a1, v1);
    }
    if (a2 == 0) {
        // 0x403fa5
        *(int64_t *)a2 = 128;
        return function_403e70(0, 128);
    }
    // 0x403fb8
    if (a2 < 0) {
        // 0x403fba
        function_404060(a1);
        // UNREACHABLE
    }
    // 0x403f92
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403e70(a1, v1);
}
// Address range: 0x403fc0 - 0x403fd7
int64_t function_403fc0(int64_t a1, int64_t a2) {
    // 0x403fc0
    return (int64_t)memset((int64_t *)function_403e10(a1), 0, (int32_t)a1);
}
// Address range: 0x403fe0 - 0x40400e
int64_t function_403fe0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x403fe7
    if ((int64_t)v1 < 0) {
        // 0x404009
        function_404060(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404009
        function_404060(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x403ffa
    if (mem != NULL) {
        // 0x404004
        return (int64_t)mem;
    }
    // 0x404009
    function_404060(nmemb);
    // UNREACHABLE
}
// Address range: 0x404010 - 0x404038
int64_t function_404010(int64_t a1, int64_t a2) {
    int64_t v1 = function_403e10(a2); // 0x40401f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404040 - 0x404053
int64_t function_404040(int64_t str) {
    // 0x404040
    return function_404010(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404060 - 0x404091
int64_t function_404060(int64_t a1) {
    // 0x404060
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4040a0 - 0x40417f
int64_t function_4040a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4040ac
    uint32_t v2 = *v1; // 0x4040ac
    int64_t v3 = a2 & 0xffffffff; // 0x4040b1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4040b4
    uint64_t v5 = (int64_t)*v4; // 0x4040b4
    int64_t v6; // 0x404122
    if (v3 <= v5) {
      lab_0x40411c_2:
        // 0x40411c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4040a2
    int64_t v8 = v2; // 0x4040a0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40411c
        goto lab_0x40411c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4040d8
    int64_t v17; // 0x4040e6
    int64_t * v18; // 0x404100
    int64_t * v19; // 0x404103
    int64_t v20; // 0x40410e
    int64_t v21; // 0x4040e6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4040e3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404100
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404117
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40411c
            goto lab_0x40411c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40411c
            goto lab_0x40411c_2;
        }
        // 0x4040d2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40415b
    int64_t * v23 = (int64_t *)v22; // 0x404160
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404163
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404160
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404177
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4040cd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40411c
            goto lab_0x40411c_2;
        }
        // 0x4040d2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4040e3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404100
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404117
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40411c
                goto lab_0x40411c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40411c
                goto lab_0x40411c_2;
            }
            // 0x4040d2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404140
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404160
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404177
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40411c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404180 - 0x40479c
int64_t function_404180(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40419f
    int64_t v2 = *v1; // 0x40419f
    char * str2 = (char *)v2; // 0x4041ac
    char c = *str2; // 0x4041ac
    int64_t v3 = v2; // 0x4041d8
    int64_t v4 = 0; // 0x404180
    int32_t v5; // 0x404180
    int64_t v6; // 0x404180
    int64_t v7; // 0x404180
    int64_t v8; // 0x404180
    int64_t v9; // 0x404180
    int64_t v10; // 0x404180
    int64_t v11; // 0x404180
    int64_t v12; // 0x404180
    int64_t v13; // 0x404180
    int64_t str3; // 0x404180
    int64_t v14; // 0x404180
    int64_t v15; // 0x404180
    int64_t v16; // 0x404180
    int64_t v17; // 0x404180
    int32_t v18; // 0x404180
    int32_t v19; // 0x404180
    int32_t v20; // 0x404180
    int32_t v21; // 0x404180
    int32_t v22; // 0x404180
    int32_t v23; // 0x404180
    int32_t v24; // 0x404180
    int32_t v25; // 0x404180
    int32_t v26; // 0x404180
    int32_t v27; // 0x404180
    int32_t v28; // 0x404180
    int32_t v29; // 0x404180
    int64_t nmemb; // 0x404180
    int64_t v30; // 0x404180
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4041dc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4041d8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4041e8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4041ee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4041b8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40421c
                int64_t v34; // 0x404180
                int64_t v35; // 0x404180
                if (strncmp(str, str2, n) == 0) {
                    // 0x404225
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4043a0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404236
                int64_t v37 = *(int64_t *)v36; // 0x40423a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404210
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404225
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4043a0;
                        }
                    }
                    // 0x404236
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
                  lab_0x404286:
                    // 0x404286
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
                        goto lab_0x4042e0;
                    } else {
                        if (v11 == 0) {
                            // 0x404450
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4042e0;
                        } else {
                            if (v39 == 0) {
                                // 0x404400
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4042aa;
                                } else {
                                    // 0x40440c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4042aa;
                                    } else {
                                        // 0x40441a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4042aa;
                                        } else {
                                            goto lab_0x4042e0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4042aa;
                            }
                        }
                    }
                }
              lab_0x4042f1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4044c6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404672
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404692
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4046df
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x4046f9
                            int64_t v45; // 0x4046fb
                            if (*(char *)v42 != 0) {
                                // 0x4046fb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4046f3
                            while (v17 + nmemb != v42) {
                                // 0x4046f5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4046fb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x4046e8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404720
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x4044d4
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40462f
                        free((int64_t *)v17);
                    }
                    // 0x404529
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404540
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4043ee
                    return 63;
                }
                // 0x404310
                v5 = v39;
                if (v13 != 0) {
                    // 0x404394
                    v35 = v13;
                    v34 = v25;
                  lab_0x4043a0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4043b0
                    uint32_t v50 = *v49; // 0x4043b0
                    int64_t v51 = v50; // 0x4043b0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4043ba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4043c3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4045ef
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40459a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4043ee
                            return 63;
                        }
                        // 0x404438
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40474f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40464d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404660
                                // 0x4043ee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40455e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404572
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4043db
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4043de
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4043e2
                    int64_t result = v59; // 0x4043e8
                    if (v58 != 0) {
                        // 0x4043ea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4043ee
                    return result;
                }
            } else {
                // 0x4041ee
                v5 = v32;
            }
            // break -> 0x404315
            break;
        }
    }
    // 0x404315
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40432d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404337
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4043ee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404479
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404366
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404376
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4042e0:
    // 0x4042e0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4042e0
    int64_t v63 = *(int64_t *)v62; // 0x4042e4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4042f1
        goto lab_0x4042f1;
    }
    goto lab_0x404286;
  lab_0x4042aa:
    // 0x4042aa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404180
    int32_t v65; // 0x404180
    int32_t v66; // 0x404180
    if (v27 != 0) {
        goto lab_0x4042e0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404460
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4042e0;
            } else {
                goto lab_0x4042d1;
            }
        } else {
            // 0x4042c5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4045bc
                int64_t v67 = (int64_t)mem; // 0x4045bc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4042e0;
                } else {
                    // 0x4045cf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4042d1;
                }
            } else {
                goto lab_0x4042d1;
            }
        }
    }
  lab_0x4042d1:
    // 0x4042d1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4042e0;
}
// Address range: 0x4047a0 - 0x404d66
int64_t function_4047a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4047c1
    if (v3 < 1) {
        // 0x40497e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4047bd
    int32_t v5 = *(int32_t *)a7; // 0x4047c9
    uint64_t v6 = a1 & 0xffffffff; // 0x4047cb
    int64_t v7 = v2; // 0x4047d0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4047d3
    *v8 = 0;
    int64_t v9; // 0x4047a0
    int64_t v10; // 0x4047a0
    int64_t v11; // 0x4047a0
    int64_t v12; // 0x4047a0
    int64_t str; // 0x4047a0
    int64_t v13; // 0x4047a0
    int64_t v14; // 0x4047a0
    int64_t v15; // 0x4047a0
    int64_t v16; // 0x4047a0
    int64_t v17; // 0x4047a0
    int32_t v18; // 0x4047a0
    char v19; // 0x4047a0
    if (v5 == 0) {
        // 0x4049b8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4047ea;
    } else {
        // 0x4047e3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404830
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404833
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4048f8;
            } else {
                int64_t v22 = v7 + 1; // 0x404846
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404856
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40490c;
                } else {
                    goto lab_0x404868;
                }
            }
        } else {
            goto lab_0x4047ea;
        }
    }
  lab_0x4047ea:
    // 0x4047ea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4047f0
    *v24 = 0;
    int64_t v25; // 0x4047a0
    int64_t v26; // 0x4047a0
    int64_t v27; // 0x4047a0
    switch (*(char *)&v2) {
        case 45: {
            // 0x4048e0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4048ed;
        }
        case 43: {
            // 0x404bf0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4048ed;
        }
        default: {
            // 0x40480c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404b6f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404c88
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4048ed;
                } else {
                    // 0x404b7d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40481a;
                }
            } else {
                goto lab_0x40481a;
            }
        }
    }
  lab_0x4048f8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4048ff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404868;
    } else {
        goto lab_0x40490c;
    }
  lab_0x40481a:
    // 0x40481a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4048ed;
  lab_0x4048ed:
    // 0x4048ed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4048f8;
  lab_0x404868:;
    uint32_t v30 = *(int32_t *)a7; // 0x404868
    int64_t v31 = v30; // 0x404868
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40486a
    if ((int64_t)*v32 > v31) {
        // 0x40486f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404872
    if (*v33 > v30) {
        // 0x404877
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40487a
    int64_t v35 = v31; // 0x40487e
    int64_t v36 = v15; // 0x40487e
    int64_t v37; // 0x4047a0
    int64_t v38; // 0x4047a0
    int64_t v39; // 0x4047a0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4049e8
        int64_t v41 = v40; // 0x4049e8
        v2 = v41;
        int64_t v42; // 0x4047a0
        if (*v33 == v40) {
            // 0x404bd0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404bd8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4049f4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404a08
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404a11
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404a1a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404a31
            int64_t v47 = v45 & 0xffffffff; // 0x404a35
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404a3e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404a44
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404a46;
                }
            }
            int64_t v48 = v47 + 1; // 0x404a20
            int64_t v49 = v48 & 0xffffffff; // 0x404a20
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404a31
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404a3e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404a44
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404a46;
                    }
                }
                // 0x404a20
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404be8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404a46;
    } else {
        goto lab_0x404884;
    }
  lab_0x40490c:
    // 0x40490c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40490f
    int64_t v51 = v12; // 0x40490f
    int64_t v52 = v14; // 0x40490f
    if (*(char *)v10 == 0) {
        goto lab_0x404868;
    } else {
        goto lab_0x404915;
    }
  lab_0x404884:;
    int32_t v53 = v35; // 0x404884
    int64_t v54; // 0x4047a0
    int64_t v55; // 0x4047a0
    int64_t v56; // 0x4047a0
    int64_t v57; // 0x4047a0
    int64_t v58; // 0x4047a0
    int64_t v59; // 0x4047a0
    char * v60; // 0x4047a0
    int64_t v61; // 0x4047a0
    int64_t v62; // 0x404899
    int64_t v63; // 0x4047a0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4049d3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4049d6;
    } else {
        // 0x40488c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4047a0
        int64_t v66 = v65 ? -1 : 1; // 0x4048a0
        int64_t v67 = (int64_t)"--"; // 0x4047a0
        int64_t v68 = v62; // 0x4047a0
        int64_t v69 = 3; // 0x4048a0
        unsigned char v70 = *(char *)v68; // 0x4048a0
        char v71 = *(char *)v67; // 0x4048a0
        char v72 = v71; // 0x4048a0
        bool v73 = false; // 0x4048a0
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
            // 0x404990
            if (*(char *)v62 == 45) {
                // 0x404a50
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404a50
                if (c == 0) {
                    goto lab_0x40499a;
                } else {
                    // 0x404a5d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404ae0;
                    } else {
                        if (c == 45) {
                            // 0x404cc3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404b35;
                        } else {
                            // 0x404a6e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404ae0;
                            } else {
                                // 0x404a73
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404a94;
                                } else {
                                    // 0x404a7a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404ae0;
                                    } else {
                                        goto lab_0x404a94;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40499a;
            }
        } else {
            uint32_t v75 = *v33; // 0x4048b0
            v2 = v75;
            int32_t v76 = *v32; // 0x4048b3
            int64_t v77 = v35 + 1; // 0x4048b6
            int32_t v78 = v77; // 0x4048b9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404c20
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4048c7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4048d5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4049d6;
        }
    }
  lab_0x404915:;
    // 0x404915
    int64_t v79; // bp-104, 0x4047a0
    int64_t v80 = &v79; // 0x4047aa
    int64_t v81 = v50 + 1; // 0x404915
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40491c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404921
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404925
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404929
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404931
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404936
    int32_t c2 = v84; // 0x404936
    char * found_char_pos = strchr(str2, c2); // 0x404936
    int64_t v87 = *v82; // 0x40493b
    v2 = v87;
    int64_t v88 = *v85; // 0x404945
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404950
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404c40
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404c0d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40497e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404936
    char v91 = *(char *)(v90 + 1); // 0x40496b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404925
        if (v91 != 58) {
            // 0x40497e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404b94
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404c98
                *v8 = 0;
            } else {
                // 0x404c7c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404bbe
            *v83 = 0;
            // 0x40497e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404b9e
        if (v93 != 0) {
            // 0x404c30
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404bbe
            *v83 = 0;
            // 0x40497e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404bb1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404bbe
            *v83 = 0;
            // 0x40497e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404cfa
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404caa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404cb1
        // 0x404bbe
        *v83 = 0;
        // 0x40497e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404b09
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404b0b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404d30
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404ce1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404ce8
            // 0x40497e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404b16
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404b1a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404b35;
  lab_0x404a46:
    // 0x404a46
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404884;
  lab_0x404b35:;
    int64_t v99 = function_404180(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404b53
    // 0x40497e
    return v99 & 0xffffffff;
  lab_0x4049d6:;
    int32_t v100 = v55; // 0x4049d6
    if (v100 != (int32_t)v59) {
        // 0x4049da
        *(int32_t *)a7 = v100;
    }
    // 0x40497e
    return 0xffffffff;
  lab_0x40499a:
    // 0x40499a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4049a1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40497e
    return v99 & 0xffffffff;
  lab_0x404ae0:
    // 0x404ae0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404915;
  lab_0x404a94:
    // 0x404a94
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404180(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404aba
    if ((int32_t)v101 != -1) {
        // 0x40497e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404acf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404ae0;
}
// Address range: 0x404d70 - 0x404dc6
int64_t function_404d70(int64_t a1) {
    // 0x404d70
    *(int32_t *)&g42 = g28;
    *(int32_t *)&g43 = g27;
    int64_t v1; // 0x404d70
    int64_t result = function_4047a0(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x404d96
    g28 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g26 = g44;
    return result;
}
// Address range: 0x404dd0 - 0x404de8
int64_t function_404dd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404dd0
    return function_404d70(1);
}
// Address range: 0x404df0 - 0x404e03
int64_t function_404df0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x404df0
    return function_404d70(0);
}
// Address range: 0x404e10 - 0x404e25
int64_t function_404e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e10
    return function_4047a0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404e30 - 0x404e46
int64_t function_404e30(void) {
    // 0x404e30
    return function_404d70(0);
}
// Address range: 0x404e50 - 0x404e68
int64_t function_404e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e50
    return function_4047a0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x404e70 - 0x404eea
int64_t function_404e70(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x404e7b
    int64_t v2 = (int64_t)&g12; // 0x404e7b
    int32_t * pwc; // 0x404e70
    int64_t v3; // 0x404e70
    int64_t n; // 0x404e70
    if (a2 == 0) {
        goto lab_0x404ec2;
    } else {
        // 0x404e7d
        if (a3 == 0) {
            // 0x404ea8
            return -2;
        }
        // 0x404e89
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x404ec2;
        } else {
            goto lab_0x404e94;
        }
    }
  lab_0x404ec2:
    // 0x404ec2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x404e70
    pwc = (int32_t *)&v4;
    goto lab_0x404e94;
  lab_0x404e94:;
    char * wstr = (char *)v3; // 0x404e9a
    int64_t ps; // 0x404e70
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x404e9a
    int64_t result = v5; // 0x404e9a
    if (v5 < 0xfffffffe) {
        // 0x404ea8
        return result;
    }
    int64_t result2 = result; // 0x404ed9
    if ((char)function_404f50(0, v3) == 0) {
        // 0x404edb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404ea8
    return result2;
}
// Address range: 0x404ef0 - 0x404f4d
int64_t function_404ef0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404ef7
    int64_t v2; // 0x404ef0
    int64_t result = function_405520(a1, v2); // 0x404f08
    if ((v2 & 32) != 0) {
        // 0x404f30
        if ((int32_t)result == 0) {
            // 0x404f34
            *__errno_location() = 0;
        }
        // 0x404f2a
        return 0xffffffff;
    }
    // 0x404f11
    if ((int32_t)result == 0) {
        // 0x404f2a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x404f18
    if (v1 == 0) {
        // 0x404f1a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x404f2a
    return result2;
}
// Address range: 0x404f50 - 0x404fae
int64_t function_404f50(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x404f56
    if (locale == NULL) {
        // 0x404f83
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x404f56
    bool v2; // 0x404f50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x404f50
    int64_t v5 = v1; // 0x404f50
    int64_t v6 = 2; // 0x404f75
    unsigned char v7 = *(char *)v5; // 0x404f75
    char v8 = *(char *)v4; // 0x404f75
    char v9 = v8; // 0x404f75
    bool v10 = false; // 0x404f75
    while (v7 == v8) {
        // 0x404f68
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
    int64_t v12 = (int64_t)"POSIX"; // 0x404f81
    int64_t v13 = v1; // 0x404f81
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x404f83
        return 0;
    }
    int64_t v14 = 6; // 0x404f81
    unsigned char v15 = *(char *)v13; // 0x404f9d
    char v16 = *(char *)v12; // 0x404f9d
    char v17 = v16; // 0x404f9d
    bool v18 = false; // 0x404f9d
    while (v15 == v16) {
        // 0x404f90
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
// Address range: 0x404fb0 - 0x405512
int64_t function_404fb0(void) {
    char * v1 = nl_langinfo(14); // 0x404fc6
    char * v2 = g46; // 0x404fcb
    char * v3; // 0x404fb0
    int64_t v4; // 0x404fb0
    int64_t v5; // 0x404fb0
    int64_t v6; // 0x404fb0
    int64_t v7; // 0x404fb0
    int32_t size; // 0x404fb0
    int32_t size2; // 0x404fb0
    int32_t len; // 0x405082
    int64_t v8; // 0x405082
    char * env_val; // 0x40506d
    if (v2 == NULL) {
        // 0x405068
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4050d5;
        } else {
            // 0x40507a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4050d5;
            } else {
                // 0x40507f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40506d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405505
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4050d5;
                    } else {
                        // 0x405479
                        size2 = len + 14;
                        goto lab_0x40509b;
                    }
                } else {
                    goto lab_0x40509b;
                }
            }
        }
    } else {
        // 0x404fb0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x404fea;
    }
  lab_0x40531c:;
    // 0x40531c
    struct _IO_FILE * stream; // 0x40515b
    int32_t v10 = __uflow(stream); // 0x40531f
    int64_t v11; // 0x404fb0
    int64_t v12 = v11; // 0x405329
    int64_t v13; // 0x404fb0
    int64_t v14 = v13; // 0x405329
    int32_t v15 = v10; // 0x405329
    int64_t v16; // 0x404fb0
    int64_t v17 = v16; // 0x405329
    int64_t v18 = v11; // 0x405329
    int64_t v19 = v13; // 0x405329
    int64_t v20 = v16; // 0x405329
    if (v10 == -1) {
        // break -> 0x40532f
        goto lab_0x40532f;
    }
    goto lab_0x4051a9;
  lab_0x40519e:;
    // 0x40519e
    int64_t v90; // 0x404fb0
    int64_t * v32; // 0x405190
    *v32 = v90 + 1;
    int64_t v89; // 0x404fb0
    v12 = v89;
    int64_t v91; // 0x404fb0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x404fb0
    v17 = v92;
    goto lab_0x4051a9;
  lab_0x4051a9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x404fb0
    int32_t v25; // bp-120, 0x404fb0
    int32_t v26; // bp-184, 0x404fb0
    int64_t v27; // 0x40515b
    int64_t v28; // 0x405178
    int64_t v29; // 0x40517d
    int64_t * v30; // 0x405194
    switch (c) {
        case 32: {
            goto lab_0x405190;
        }
        case 10: {
            goto lab_0x405190;
        }
        case 9: {
            goto lab_0x405190;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405381
            int32_t v33; // 0x404fb0
            char v34; // 0x404fb0
            int32_t v35; // 0x40538e
            if (v31 < *v30) {
                // 0x405360
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40538b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405381
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405360
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40538b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405370
                v36 = v33;
            }
            // 0x40545f
            if (v36 == -1) {
                // break -> 0x40532f
                break;
            }
            goto lab_0x405190;
        }
        default: {
            // 0x4051bf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40532f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4051e8
            int64_t v39 = v37 + 4; // 0x4051ea
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4051f6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4051f8
            while (v41 == 0) {
                // 0x4051e8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405216
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405222
            int64_t v45 = v43 + 4; // 0x405224
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405230
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405232
            while (v47 == 0) {
                // 0x405222
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40521f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405248
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405258
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40525c
            int64_t v52 = v51 + v48; // 0x405265
            int64_t * mem; // 0x404fb0
            int64_t v53; // 0x404fb0
            int64_t v54; // 0x404fb0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40539b
                int64_t v56 = v55 + 3; // 0x4053a7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405281
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405290
            if (mem == NULL) {
                // 0x4054bc
                free((int64_t *)v21);
                function_405520(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405134;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4052a8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4052b2
            uint32_t v62 = (int32_t)v59; // 0x4052b5
            int64_t v63; // 0x404fb0
            if (v62 >= 8) {
                // 0x4053c4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4053de
                int64_t v66 = v61 - v65; // 0x4053e2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4053ed
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4053fe
                    int64_t v70 = v69 & 0xffffffff; // 0x4053fe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4053fb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40548f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4052c7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4052cb
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
            int64_t v73 = v51 + 1; // 0x4052db
            int64_t v74 = v60 - 1; // 0x4052df
            uint32_t v75 = (int32_t)v73; // 0x4052e4
            int64_t v76; // 0x404fb0
            if (v75 >= 8) {
                // 0x405412
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40541c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40542c
                int64_t v80 = v74 - v79; // 0x405430
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40543b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40544b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405449
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4054a6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4054ae
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4052f6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4052fa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4054f3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40530e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40519e;
            } else {
                goto lab_0x40531c;
            }
        }
    }
  lab_0x405190:;
    int64_t v93 = v23; // 0x404fb0
    int64_t v94 = v22; // 0x404fb0
    int64_t v95 = v21; // 0x404fb0
    goto lab_0x405190_2;
  lab_0x4050d5:;
    int64_t * mem3 = malloc(size); // 0x4050d5
    int64_t v97 = (int64_t)&g12; // 0x4050e0
    int64_t v98; // 0x404fb0
    int64_t path; // 0x404fb0
    if (mem3 == NULL) {
        goto lab_0x4050b2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4050d5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4050f6;
    }
  lab_0x404fea:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x404fdd
    char v100 = *v3; // 0x404fea
    int64_t v101; // 0x404fb0
    if (v100 == 0) {
        // 0x405044
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x404fb0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x404fb0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405030
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405037;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405000
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40500d
        char v107 = *(char *)v106; // 0x405012
        v102 = v107;
        if (v107 == 0) {
            // 0x405044
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40501b
    v104 = v103 + 1;
  lab_0x405037:
    // 0x405044
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4050b2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x404fea;
  lab_0x4050f6:;
    int64_t v109 = v98 + path; // 0x4050f6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405122
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405151
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405482
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405175
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405190_2:;
                uint64_t v96 = *v32; // 0x405190
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40531c;
                } else {
                    goto lab_0x40519e;
                }
            }
          lab_0x40532f:
            // 0x40532f
            function_405520(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40534e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405134;
  lab_0x40509b:;
    int64_t * mem4 = malloc(size2); // 0x40509b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405141
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4050f6;
    } else {
        goto lab_0x4050b2;
    }
  lab_0x405134:
    // 0x405134
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4050b2;
}
// Address range: 0x405520 - 0x40559b
int64_t function_405520(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405527
    if (fileno(stream) < 0) {
        // 0x405587
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40553a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40556b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405587
            return fclose(stream);
        }
    }
    // 0x40553c
    if ((int32_t)function_4055a0(a1, v1) == 0) {
        // 0x405587
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405548
    int32_t v3 = *v2; // 0x405550
    int64_t result = fclose(stream); // 0x40555e
    if (v3 != 0) {
        // 0x405590
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405560
    return result;
}
// Address range: 0x4055a0 - 0x4055e0
int64_t function_4055a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4055ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4055ba
        return fflush(stream);
    }
    // 0x4055c8
    function_4055e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4055e0 - 0x405637
int64_t function_4055e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4055e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4055ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40561b
    int64_t result = -1; // 0x405624
    if (v1 != -1) {
        // 0x405626
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405632
    return result;
}
// Address range: 0x405640 - 0x40569d
int64_t function_405640(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405640
    return function_401230();
}
// Address range: 0x4056a0 - 0x4056a1
int64_t function_4056a0(void) {
    // 0x4056a0
    int64_t result; // 0x4056a0
    return result;
}
// Address range: 0x4056b0 - 0x4056c8
int64_t function_4056b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4056b0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x4056c8 - 0x4056e8
int64_t function_4056c8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x4056d2
    while (*(int64_t *)v1 != -1) {
        // 0x4056d3
        v1 -= 8;
    }
    // 0x4056e4
    return result;
}
