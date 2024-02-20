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
// Address range: 0x401640 - 0x401780
int64_t function_401640(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401641
    function_401d20(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401640
    function_4057a0(0x401b70, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_401c10(v1, a2, "whoami", "GNU coreutils", (int64_t)g19, 0x401860);
    int64_t v3 = function_404ee0(v1, a2, (int64_t *)&g12, &g2, 0, 0x401860); // 0x4016c1
    if ((int32_t)v3 != -1) {
        // 0x401743
        function_401860(1);
        // UNREACHABLE
    }
    int32_t v4 = *(int32_t *)0x60923c; // 0x4016cd
    if (v4 != (int32_t)a1) {
        // 0x401715
        function_403940(*(int64_t *)(8 * (int64_t)v4 + a2));
        error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
        // 0x401743
        function_401860(1);
        // UNREACHABLE
    }
    int32_t * err_num = __errno_location(); // 0x4016d8
    *err_num = 0;
    int32_t uid = geteuid(); // 0x4016e6
    if (uid == -1) {
        // 0x4016f2
        if (*err_num != 0) {
            // 0x40174d
            error(1, *err_num, dcgettext(NULL, "cannot find name for user ID %lu", 5));
            return &g49;
        }
    }
    struct passwd * str = getpwuid(uid); // 0x4016fa
    if (str != NULL) {
        // 0x401704
        puts((char *)*(int64_t *)str);
        return 0;
    }
    // 0x40174d
    error(1, *err_num, dcgettext(NULL, "cannot find name for user ID %lu", 5));
    return &g49;
}
// Address range: 0x401780 - 0x4017ab
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401780
    int64_t v1; // 0x401780
    __libc_start_main(0x401640, (int32_t)a4, (char **)&v1, (void (*)())0x405730, (void (*)())0x405790, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4017ab - 0x4017ca
int64_t function_4017ab(void) {
    // 0x4017ab
    return &g29;
}
// Address range: 0x4017ca - 0x401801
int64_t function_4017ca(void) {
    // 0x4017ca
    return 0;
}
// Address range: 0x401801 - 0x401858
int64_t function_401801(void) {
    // 0x401801
    if (g33 != 0) {
        // 0x401857
        int64_t result; // 0x401801
        return result;
    }
    int64_t v1 = g34; // 0x401834
    int64_t result2; // 0x401846
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401846
        result2 = function_4017ab();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x401836
        v1++;
    }
    // 0x40182a
    g34 = v1;
    // 0x401846
    result2 = function_4017ab();
    g33 = 1;
    return result2;
}
// Address range: 0x401858 - 0x40185d
int64_t function_401858(void) {
    // 0x401858
    return function_4017ca();
}
// Address range: 0x401860 - 0x401b4d
int64_t function_401860(int64_t a1) {
    int32_t status = a1; // 0x401876
    if (status != 0) {
        // 0x40187a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40189f
        exit(status);
        // UNREACHABLE
    }
    // 0x4018a6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print the user name associated with the current effective user ID.\nSame as id -un.\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x40192d
    bool v2; // 0x401860
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4019b0
    int64_t v6 = *(int64_t *)v5; // 0x4019b4
    int64_t v7 = 7; // 0x4019ba
    while (v6 != 0) {
        int64_t v8 = (int64_t)"whoami";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4019c6
        char v11 = *(char *)v9; // 0x4019c6
        char v12 = v11; // 0x4019c6
        bool v13 = false; // 0x4019c6
        while (v10 == v11) {
            // 0x4019bc
            v7--;
            int64_t v14 = v9 + v3; // 0x4019c6
            int64_t v15 = v8 + v3; // 0x4019c6
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
            // break -> 0x4019d2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x4019d2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401ae4;
        } else {
            // 0x401ace
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401b23
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401a34;
            } else {
                goto lab_0x401ae4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401a34;
        } else {
            // 0x401a1a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401b23
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401a34;
            } else {
                goto lab_0x401a34;
            }
        }
    }
  lab_0x401ae4:
    // 0x401ae4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401a74
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40189f
    exit(status);
    // UNREACHABLE
  lab_0x401a34:
    // 0x401a34
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401a74
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40189f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401b50 - 0x401b58
int64_t function_401b50(int64_t a1) {
    // 0x401b50
    g36 = a1;
    int64_t result; // 0x401b50
    return result;
}
// Address range: 0x401b60 - 0x401b68
int64_t function_401b60(int64_t a1) {
    // 0x401b60
    g35 = a1;
    int64_t result; // 0x401b60
    return result;
}
// Address range: 0x401b70 - 0x401c0e
int64_t function_401b70(void) {
    // 0x401b70
    int32_t * err_num; // 0x401b86
    if ((int32_t)function_404fe0((int64_t)g30) == 0) {
        goto lab_0x401b9c;
    } else {
        // 0x401b86
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x401bb3;
        } else {
            // 0x401b97
            if (*err_num != 32) {
                goto lab_0x401bb3;
            } else {
                goto lab_0x401b9c;
            }
        }
    }
  lab_0x401b9c:;
    int64_t result = function_404fe0((int64_t)g32); // 0x401ba3
    if ((int32_t)result == 0) {
        // 0x401bac
        return result;
    }
    // 0x401bee
    _exit(g20);
    // UNREACHABLE
  lab_0x401bb3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401bbf
    if (g36 == 0) {
        // 0x401bf9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401bd3
        error(0, *err_num, "%s: %s", (char *)function_403790((int64_t)g36), v1);
    }
    // 0x401bee
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401c10 - 0x401d12
int64_t function_401c10(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x401c10
    int64_t v1; // 0x401c10
    if ((char)v1 != 0) {
        // 0x401c23
        int128_t v2; // 0x401c10
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g27; // 0x401c5a
    g27 = 0;
    if ((int32_t)a1 != 2) {
        // 0x401c6f
        g27 = v3;
        g28 = 0;
        int64_t result; // 0x401c10
        return result;
    }
    int64_t result2 = function_404ee0(a1, a2, &g3, (int64_t *)&g4, 0, a6); // 0x401ca9
    int32_t v4 = result2; // 0x401cae
    switch (v4) {
        default: {
            // 0x401cb8
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x401cda
                function_403d60((int64_t)g30, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x401c6f
            g27 = v3;
            g28 = 0;
            return result2;
        }
    }
}
// Address range: 0x401d20 - 0x401db9
int64_t function_401d20(int64_t str) {
    // 0x401d20
    if (str == 0) {
        // 0x401d99
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401d2e
    int64_t result = (int64_t)found_char_pos; // 0x401d2e
    if (found_char_pos == NULL) {
        // 0x401d89
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401d38
    if (v1 - str < 7) {
        // 0x401d89
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x401d48
    bool v2; // 0x401d20
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401d20
    int64_t v5 = result - 6; // 0x401d20
    int64_t v6 = 7; // 0x401d56
    unsigned char v7 = *(char *)v5; // 0x401d56
    char v8 = *(char *)v4; // 0x401d56
    char v9 = v8; // 0x401d56
    bool v10 = false; // 0x401d56
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
    int64_t v12 = (int64_t)"lt-"; // 0x401d60
    int64_t v13 = v1; // 0x401d60
    int64_t v14 = 3; // 0x401d60
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401d89
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401d72
    char v16 = *(char *)v12; // 0x401d72
    char v17 = v16; // 0x401d72
    bool v18 = false; // 0x401d72
    while (v15 == v16) {
        // 0x401d62
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
    int64_t v20 = v1; // 0x401d7c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401d7e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x401d89
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x401dc0 - 0x401eb2
int64_t function_401dc0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401dd4
    int64_t result = (int64_t)v1; // 0x401dd4
    if (result != a1) {
        // 0x401de1
        return result;
    }
    int64_t v2 = function_4050a0(); // 0x401df0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401ea6
    if (v3 == 85) {
        // 0x401e00
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401e98
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x401e2e
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x401e3b
        // 0x401de1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401e98
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x401e7d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x401e8a
    // 0x401de1
    return result4;
}
// Address range: 0x401ec0 - 0x401f17
int64_t function_401ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401ec0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401f08
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401f17 - 0x4030e1
int64_t function_401f17(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x401f61
    int64_t v3 = 0; // 0x401f61
    int64_t v4; // 0x401f17
    int64_t v5; // 0x401f17
    int64_t v6; // 0x401f17
    int64_t v7; // 0x401f17
    int64_t v8; // 0x401f17
    int64_t v9; // 0x401f17
    int64_t v10; // 0x401f17
    int64_t v11; // 0x401f17
    int64_t v12; // 0x401f17
    int64_t v13; // 0x401f17
    int64_t v14; // 0x401f17
    int64_t v15; // 0x401f17
    int64_t v16; // 0x401f17
    int64_t v17; // 0x401f17
    int64_t v18; // 0x401f17
    int64_t result; // 0x401f17
    int64_t v19; // 0x401f17
    int32_t wc; // bp+132, 0x401f17
    int64_t ps; // bp+136, 0x401f17
    char v20; // 0x4024d0
    int64_t v21; // 0x4024d0
    int64_t v22; // 0x402878
    int64_t v23; // 0x401f17
    int64_t v24; // 0x402897
    int32_t v25; // 0x401f17
    while (true) {
      lab_0x401f68_2:
        // 0x401f68
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401f17
        int64_t v27; // 0x401f9c
        while (true) {
          lab_0x401f68:
            // 0x401f68
            v5 = v26;
            bool v28 = v15 == v5; // 0x401f73
            if (v15 == -1) {
                // 0x401f75
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x401f83
            if (v28) {
                // break (via goto) -> 0x4026e8
                goto lab_0x4026e8;
            }
            // 0x401f8c
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
                    // 0x40257b
                    if (v25 % 2 == 0) {
                        goto lab_0x4020c1;
                    }
                    // 0x40299d
                    v26 = v5 + 1;
                    goto lab_0x401f68;
                }
                case 7: {
                    goto lab_0x4020c1;
                }
                case 8: {
                    goto lab_0x4020c1;
                }
                case 9: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4020c1;
                }
                case 12: {
                    goto lab_0x4020c1;
                }
                case 13: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40208d;
                }
                case 36: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4020c1;
                }
                case 38: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4020c1;
                }
                case 44: {
                    goto lab_0x4020c1;
                }
                case 45: {
                    goto lab_0x4020c1;
                }
                case 46: {
                    goto lab_0x4020c1;
                }
                case 47: {
                    goto lab_0x4020c1;
                }
                case 48: {
                    goto lab_0x4020c1;
                }
                case 49: {
                    goto lab_0x4020c1;
                }
                case 50: {
                    goto lab_0x4020c1;
                }
                case 51: {
                    goto lab_0x4020c1;
                }
                case 52: {
                    goto lab_0x4020c1;
                }
                case 53: {
                    goto lab_0x4020c1;
                }
                case 54: {
                    goto lab_0x4020c1;
                }
                case 55: {
                    goto lab_0x4020c1;
                }
                case 56: {
                    goto lab_0x4020c1;
                }
                case 57: {
                    goto lab_0x4020c1;
                }
                case 58: {
                    goto lab_0x4020c1;
                }
                case 59: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4020c1;
                }
                case 66: {
                    goto lab_0x4020c1;
                }
                case 67: {
                    goto lab_0x4020c1;
                }
                case 68: {
                    goto lab_0x4020c1;
                }
                case 69: {
                    goto lab_0x4020c1;
                }
                case 70: {
                    goto lab_0x4020c1;
                }
                case 71: {
                    goto lab_0x4020c1;
                }
                case 72: {
                    goto lab_0x4020c1;
                }
                case 73: {
                    goto lab_0x4020c1;
                }
                case 74: {
                    goto lab_0x4020c1;
                }
                case 75: {
                    goto lab_0x4020c1;
                }
                case 76: {
                    goto lab_0x4020c1;
                }
                case 77: {
                    goto lab_0x4020c1;
                }
                case 78: {
                    goto lab_0x4020c1;
                }
                case 79: {
                    goto lab_0x4020c1;
                }
                case 80: {
                    goto lab_0x4020c1;
                }
                case 81: {
                    goto lab_0x4020c1;
                }
                case 82: {
                    goto lab_0x4020c1;
                }
                case 83: {
                    goto lab_0x4020c1;
                }
                case 84: {
                    goto lab_0x4020c1;
                }
                case 85: {
                    goto lab_0x4020c1;
                }
                case 86: {
                    goto lab_0x4020c1;
                }
                case 87: {
                    goto lab_0x4020c1;
                }
                case 88: {
                    goto lab_0x4020c1;
                }
                case 89: {
                    goto lab_0x4020c1;
                }
                case 90: {
                    goto lab_0x4020c1;
                }
                case 91: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4020c1;
                }
                case 94: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4020c1;
                }
                case 96: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4020c1;
                }
                case 98: {
                    goto lab_0x4020c1;
                }
                case 99: {
                    goto lab_0x4020c1;
                }
                case 100: {
                    goto lab_0x4020c1;
                }
                case 101: {
                    goto lab_0x4020c1;
                }
                case 102: {
                    goto lab_0x4020c1;
                }
                case 103: {
                    goto lab_0x4020c1;
                }
                case 104: {
                    goto lab_0x4020c1;
                }
                case 105: {
                    goto lab_0x4020c1;
                }
                case 106: {
                    goto lab_0x4020c1;
                }
                case 107: {
                    goto lab_0x4020c1;
                }
                case 108: {
                    goto lab_0x4020c1;
                }
                case 109: {
                    goto lab_0x4020c1;
                }
                case 110: {
                    goto lab_0x4020c1;
                }
                case 111: {
                    goto lab_0x4020c1;
                }
                case 112: {
                    goto lab_0x4020c1;
                }
                case 113: {
                    goto lab_0x4020c1;
                }
                case 114: {
                    goto lab_0x4020c1;
                }
                case 115: {
                    goto lab_0x4020c1;
                }
                case 116: {
                    goto lab_0x4020c1;
                }
                case 117: {
                    goto lab_0x4020c1;
                }
                case 118: {
                    goto lab_0x4020c1;
                }
                case 119: {
                    goto lab_0x4020c1;
                }
                case 120: {
                    goto lab_0x4020c1;
                }
                case 121: {
                    goto lab_0x4020c1;
                }
                case 122: {
                    goto lab_0x4020c1;
                }
                case 123: {
                    goto lab_0x402065;
                }
                case 124: {
                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402065;
                }
                case 126: {
                    goto lab_0x40208d;
                }
                default: {
                    goto lab_0x402465;
                }
            }
        }
      lab_0x402465:
        if (v23 != 1) {
            // 0x4027d0
            ps = 0;
            int64_t len = v15; // 0x4027e0
            if (v15 == -1) {
                // 0x4027e2
                len = strlen((char *)str);
            }
            // 0x40280e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40286f:
                // 0x40286f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402874
                int64_t v30 = v29 + str;
                v24 = function_404f60(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402dea_2;
                    }
                    case -1: {
                        goto lab_0x402dea_2;
                    }
                    case -2: {
                        // 0x402ecd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402f07
                            v19 = v18;
                            int64_t v31 = v18; // 0x402f0a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402f17
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402f10
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402dea
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402dea_2;
                    }
                    case 1: {
                        goto lab_0x402840;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4028ec
                        char v34 = *(char *)v33; // 0x4028fd
                        unsigned char v35; // 0x401f17
                        if (v34 < 125) {
                            // 0x402908
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40291f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4028f0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4028fd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402908
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40291f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4028f0
                            v33++;
                        }
                        goto lab_0x402840;
                    }
                }
            }
            goto lab_0x402dea_2;
        } else {
            // 0x4024b4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4020c1;
        }
    }
  lab_0x4026e8:
    // 0x4026e8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x402fea
        if (v8 > result) {
            // 0x402ff3
            *(char *)(v12 + result) = 0;
        }
        // 0x402317
        return result;
    }
    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4020c1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4020d0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4022da_2;
        }
    }
    int64_t v39 = result; // 0x4021d1
    char v40 = v20; // 0x4021d1
    int64_t v41 = v38; // 0x4021d1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4021d1
    int64_t v43 = v36; // 0x4021d1
    goto lab_0x40214d;
  lab_0x4022da_2:
    // 0x402317
    return function_401ec0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402dea_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4020c1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4029be
        int64_t v50 = v5 + 1; // 0x402aa1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402aa8
        char v52 = v20; // 0x402aa8
        int64_t v53 = result; // 0x402aa8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402a71
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402a75
            int64_t v56 = v54 + 1; // 0x402a7a
            int64_t v57 = v51 + 1; // 0x402aa1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402a6c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402a71
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402a75
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
        goto lab_0x40214d;
    }
  lab_0x402840:
    // 0x402840
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40285f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402862
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402dea
        goto lab_0x402dea_2;
    }
    goto lab_0x40286f;
  lab_0x40208d:
    // 0x40208d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4022da_2;
    }
    goto lab_0x4020c1;
  lab_0x402065:;
    bool v60 = v15 == 1; // 0x402070
    if (v15 == -1) {
        // 0x402072
        v60 = *(char *)v1 == 0;
    }
    // 0x40207e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4020c1;
    } else {
        goto lab_0x40208d;
    }
  lab_0x40214d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402152
        *(char *)(v44 + v45) = v40;
    }
    // 0x402156
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x401f68_2;
}
// Address range: 0x4030f0 - 0x40328e
int64_t function_4030f0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4030f2
    int32_t * v3 = __errno_location(); // 0x40310c
    int64_t v4 = (int64_t)g22; // 0x403111
    int32_t v5 = *v3; // 0x40311b
    int64_t v6 = v4; // 0x403131
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403289
            function_404150(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403140
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403147
        int64_t v9; // 0x4030f0
        if (g22 == &g23) {
            int64_t v10 = function_403f60(0, v8); // 0x40326a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x40326f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403f60(v4, v8); // 0x40315b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40316a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40316a
        int32_t v14 = v7; // 0x403171
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4031a1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4031ab
    int64_t * v17 = (int64_t *)v15; // 0x4031ae
    uint64_t v18 = *v17; // 0x4031ae
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4031b1
    int64_t result = *v19; // 0x4031b1
    int64_t v20; // 0x4030f0
    uint64_t v21 = function_401ec0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4031d4
    if (v18 > v21) {
        // 0x40324b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4031e7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x4031f7
        free((int64_t *)result);
    }
    int64_t result2 = function_403f00(v22); // 0x403211
    *v19 = result2;
    int64_t v23; // 0x4030f0
    function_401ec0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40324b
    *v3 = v5;
    return result2;
}
// Address range: 0x403290 - 0x4032c4
int64_t function_403290(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403297
    int64_t result = function_404100(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4032b6
    return result;
}
// Address range: 0x4032d0 - 0x4032df
int64_t function_4032d0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x4032dc
    return result;
}
// Address range: 0x4032e0 - 0x4032ef
int64_t function_4032e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x4032e8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x4032f0 - 0x403323
int64_t function_4032f0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403309
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40330e
    uint32_t v3 = *v2; // 0x40330e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403312
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403330 - 0x403343
int64_t function_403330(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x40333c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403350 - 0x40337b
int64_t function_403350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403358
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403375
        abort();
        // UNREACHABLE
    }
    // 0x40336c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403380 - 0x4033f2
int64_t function_403380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x4033a2
    int32_t * v2 = __errno_location(); // 0x4033ab
    uint32_t v3 = *(int32_t *)v1; // 0x4033cb
    int64_t result = function_401ec0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4033da
    return result;
}
// Address range: 0x403400 - 0x4034e1
int64_t function_403400(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403422
    int32_t * v2 = __errno_location(); // 0x403428
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403447
    int32_t * v4 = (int32_t *)v1; // 0x40344a
    int64_t v5 = function_401ec0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403465
    int64_t v6 = v5 + 1; // 0x40346a
    int64_t result = function_403f00(v6); // 0x40347f
    function_401ec0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4034c4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4034cd
    return result;
}
// Address range: 0x4034f0 - 0x4034fa
int64_t function_4034f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4034f0
    return function_403400(a1, a2, 0, a3);
}
// Address range: 0x403500 - 0x403595
int64_t function_403500(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x403500
    int64_t v2 = v1; // 0x403500
    int64_t v3 = v2; // 0x403514
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x403533
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403530
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40354d
    if (g23 != 0x6092a0) {
        // 0x40354f
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403571
    if (g22 != &g23) {
        // 0x403573
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g49;
    }
    // 0x403586
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x4035a0 - 0x4035b1
int64_t function_4035a0(void) {
    // 0x4035a0
    int64_t v1; // 0x4035a0
    return function_4030f0(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x4035c0 - 0x4035ca
int64_t function_4035c0(void) {
    // 0x4035c0
    int64_t v1; // 0x4035c0
    return function_4030f0(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x4035d0 - 0x4035e6
int64_t function_4035d0(int64_t a1) {
    // 0x4035d0
    return function_4030f0(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x4035f0 - 0x403602
int64_t function_4035f0(int64_t a1, int64_t a2) {
    // 0x4035f0
    return function_4030f0(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403610 - 0x403678
int64_t function_403610(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403620
    return function_4030f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403680 - 0x4036e4
int64_t function_403680(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403690
    return function_4030f0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4036f0 - 0x4036fc
int64_t function_4036f0(int64_t a1, int64_t a2) {
    // 0x4036f0
    return function_403610(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403700 - 0x40370f
int64_t function_403700(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403700
    return function_403680(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403710 - 0x403780
int64_t function_403710(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x40371d
    int128_t v2 = __asm_movdqa(g40); // 0x403725
    int128_t v3 = __asm_movdqa(g41); // 0x40372d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403742
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403758
    uint32_t v6 = *v5; // 0x403758
    uint32_t v7 = (int32_t)a3 % 32; // 0x40375d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4030f0(0, a1, a2, &v4);
}
// Address range: 0x403780 - 0x40378d
int64_t function_403780(int64_t a1, int64_t a2) {
    // 0x403780
    return function_403710(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403790 - 0x4037a1
int64_t function_403790(int64_t a1) {
    // 0x403790
    return function_403710(a1, -1, 58);
}
// Address range: 0x4037b0 - 0x4037ba
int64_t function_4037b0(void) {
    // 0x4037b0
    int64_t v1; // 0x4037b0
    return function_403710(v1, v1, 58);
}
// Address range: 0x4037c0 - 0x40382e
int64_t function_4037c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4037da
    return function_4030f0(a1, a3, -1, &v1);
}
// Address range: 0x403830 - 0x40389c
int64_t function_403830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403837
    int128_t v2 = __asm_movdqa(g40); // 0x40383f
    int128_t v3 = __asm_movdqa(g41); // 0x403847
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403869
    if (a2 == 0 || a3 == 0) {
        // 0x403897
        abort();
        // UNREACHABLE
    }
    // 0x40387a
    return function_4030f0(a1, a4, a5, &v4);
}
// Address range: 0x4038a0 - 0x4038a9
int64_t function_4038a0(void) {
    // 0x4038a0
    int64_t v1; // 0x4038a0
    return function_403830(v1, v1, v1, v1, -1);
}
// Address range: 0x4038b0 - 0x4038c7
int64_t function_4038b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4038b0
    return function_403830(0, a1, a2, a3, -1);
}
// Address range: 0x4038d0 - 0x4038e3
int64_t function_4038d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4038d0
    return function_403830(0, a1, a2, a3, a4);
}
// Address range: 0x4038f0 - 0x4038fa
int64_t function_4038f0(void) {
    // 0x4038f0
    int64_t v1; // 0x4038f0
    return function_4030f0(v1, v1, v1, &g21);
}
// Address range: 0x403900 - 0x403912
int64_t function_403900(int64_t a1, int64_t a2) {
    // 0x403900
    return function_4030f0(0, a1, a2, &g21);
}
// Address range: 0x403920 - 0x403931
int64_t function_403920(void) {
    // 0x403920
    int64_t v1; // 0x403920
    return function_4030f0(v1, v1, -1, &g21);
}
// Address range: 0x403940 - 0x403956
int64_t function_403940(int64_t a1) {
    // 0x403940
    return function_4030f0(0, a1, -1, &g21);
}
// Address range: 0x403960 - 0x403d3d
int64_t function_403960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4039f8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40397c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403996
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4039db
    if (a6 < 10) {
        // 0x4039ea
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403ae2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403d40 - 0x403d60
int64_t function_403d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403d40
    if (a5 == 0) {
        // 0x403d5b
        return function_403960(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403d47
    v1++;
    int64_t v2 = v1; // 0x403d59
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403d50
        v1++;
        v2 = v1;
    }
    // 0x403d5b
    return function_403960(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403d60 - 0x403dc0
int64_t function_403d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x403d60
    int64_t v4 = &v3; // 0x403d60
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x403d93
    int64_t v7; // 0x403d7d
    int64_t * v8; // 0x403d9b
    int64_t v9; // 0x403d9b
    int64_t v10; // 0x403da7
    if (v6 < 48) {
        // 0x403d70
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x403db3
            break;
        }
    } else {
        // 0x403d9b
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x403db3
            break;
        }
    }
    int64_t v11 = 10; // 0x403d91
    while (v5 != 9) {
        // 0x403d89
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x403d70
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x403db3
                break;
            }
        } else {
            // 0x403d9b
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x403db3
                break;
            }
        }
        // 0x403d89
        v11 = 10;
    }
    // 0x403db3
    return function_403960(a1, a2, a3, a4, v4, v11, (int64_t)&g49);
}
// Address range: 0x403dc0 - 0x403e7c
int64_t function_403dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403dc0
    int64_t v1; // bp-168, 0x403dc0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403dc0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403dc0
    int64_t v8; // 0x403dc0
    int64_t v9; // bp-56, 0x403dc0
    int64_t v10; // 0x403e25
    int64_t v11; // 0x403e49
    if ((int32_t)v6 < 48) {
        // 0x403e10
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403e60
            break;
        }
    } else {
        // 0x403e42
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403e60
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403e3a
    int64_t v13 = 10; // 0x403e3a
    while (v5 != 9) {
        // 0x403e3c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403e10
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403e60
                break;
            }
        } else {
            // 0x403e42
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403e60
                break;
            }
        }
        // 0x403e32
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403e60
    int64_t v14; // bp-136, 0x403dc0
    int64_t result = function_403960(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x403e6f
    return result;
}
// Address range: 0x403e80 - 0x403ef4
int64_t function_403e80(int64_t a1) {
    // 0x403e80
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403ee3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x403f00 - 0x403f1a
int64_t function_403f00(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403f04
    if (size != 0 != (mem == NULL)) {
        // 0x403f13
        return (int64_t)mem;
    }
    // 0x403f15
    function_404150(size);
    // UNREACHABLE
}
// Address range: 0x403f20 - 0x403f41
int64_t function_403f20(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403f23
    int64_t v2 = v1; // 0x403f23
    if (v2 < 0) {
        // 0x403f3b
        function_404150(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403f39
        return function_403f00(v2);
    }
    // 0x403f3b
    function_404150(v2);
    // UNREACHABLE
}
// Address range: 0x403f50 - 0x403f52
int64_t function_403f50(void) {
    // 0x403f50
    int64_t v1; // 0x403f50
    return function_403f00(v1);
}
// Address range: 0x403f60 - 0x403f96
int64_t function_403f60(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403f88
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403f71
    if (a2 != 0 != (mem == NULL)) {
        // 0x403f80
        return (int64_t)mem;
    }
    // 0x403f91
    function_404150(a1);
    // UNREACHABLE
}
// Address range: 0x403fa0 - 0x403fc1
int64_t function_403fa0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403fa3
    int64_t v2 = v1; // 0x403fa3
    if (v2 < 0) {
        // 0x403fbb
        function_404150(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403fb9
        return function_403f60(a1, v2);
    }
    // 0x403fbb
    function_404150(a1);
    // UNREACHABLE
}
// Address range: 0x403fd0 - 0x404056
int64_t function_403fd0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40402b
            function_404150(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403f60(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404013
    if (a2 == 0) {
        // 0x404038
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404018
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40402b
        function_404150(a1);
        // UNREACHABLE
    }
    // 0x403ffa
    *(int64_t *)a2 = v2;
    return function_403f60(a1, v2 * a3);
}
// Address range: 0x404060 - 0x4040b0
int64_t function_404060(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404060
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4040aa
            function_404150(a1);
            // UNREACHABLE
        }
        // 0x404082
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403f60(a1, v1);
    }
    if (a2 == 0) {
        // 0x404095
        *(int64_t *)a2 = 128;
        return function_403f60(0, 128);
    }
    // 0x4040a8
    if (a2 < 0) {
        // 0x4040aa
        function_404150(a1);
        // UNREACHABLE
    }
    // 0x404082
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403f60(a1, v1);
}
// Address range: 0x4040b0 - 0x4040c7
int64_t function_4040b0(int64_t a1, int64_t a2) {
    // 0x4040b0
    return (int64_t)memset((int64_t *)function_403f00(a1), 0, (int32_t)a1);
}
// Address range: 0x4040d0 - 0x4040fe
int64_t function_4040d0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4040d7
    if ((int64_t)v1 < 0) {
        // 0x4040f9
        function_404150(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4040f9
        function_404150(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4040ea
    if (mem != NULL) {
        // 0x4040f4
        return (int64_t)mem;
    }
    // 0x4040f9
    function_404150(nmemb);
    // UNREACHABLE
}
// Address range: 0x404100 - 0x404128
int64_t function_404100(int64_t a1, int64_t a2) {
    int64_t v1 = function_403f00(a2); // 0x40410f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404130 - 0x404143
int64_t function_404130(int64_t str) {
    // 0x404130
    return function_404100(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404150 - 0x404181
int64_t function_404150(int64_t a1) {
    // 0x404150
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404190 - 0x40426f
int64_t function_404190(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40419c
    uint32_t v2 = *v1; // 0x40419c
    int64_t v3 = a2 & 0xffffffff; // 0x4041a1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4041a4
    uint64_t v5 = (int64_t)*v4; // 0x4041a4
    int64_t v6; // 0x404212
    if (v3 <= v5) {
      lab_0x40420c_2:
        // 0x40420c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404192
    int64_t v8 = v2; // 0x404190
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40420c
        goto lab_0x40420c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4041c8
    int64_t v17; // 0x4041d6
    int64_t * v18; // 0x4041f0
    int64_t * v19; // 0x4041f3
    int64_t v20; // 0x4041fe
    int64_t v21; // 0x4041d6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4041d3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4041f0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404207
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40420c
            goto lab_0x40420c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40420c
            goto lab_0x40420c_2;
        }
        // 0x4041c2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40424b
    int64_t * v23 = (int64_t *)v22; // 0x404250
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404253
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404250
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404267
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4041bd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40420c
            goto lab_0x40420c_2;
        }
        // 0x4041c2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4041d3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4041f0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404207
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40420c
                goto lab_0x40420c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40420c
                goto lab_0x40420c_2;
            }
            // 0x4041c2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404230
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404250
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404267
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40420c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404270 - 0x40488c
int64_t function_404270(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40428f
    int64_t v2 = *v1; // 0x40428f
    char * str2 = (char *)v2; // 0x40429c
    char c = *str2; // 0x40429c
    int64_t v3 = v2; // 0x4042c8
    int64_t v4 = 0; // 0x404270
    int32_t v5; // 0x404270
    int64_t v6; // 0x404270
    int64_t v7; // 0x404270
    int64_t v8; // 0x404270
    int64_t v9; // 0x404270
    int64_t v10; // 0x404270
    int64_t v11; // 0x404270
    int64_t v12; // 0x404270
    int64_t v13; // 0x404270
    int64_t str3; // 0x404270
    int64_t v14; // 0x404270
    int64_t v15; // 0x404270
    int64_t v16; // 0x404270
    int64_t v17; // 0x404270
    int32_t v18; // 0x404270
    int32_t v19; // 0x404270
    int32_t v20; // 0x404270
    int32_t v21; // 0x404270
    int32_t v22; // 0x404270
    int32_t v23; // 0x404270
    int32_t v24; // 0x404270
    int32_t v25; // 0x404270
    int32_t v26; // 0x404270
    int32_t v27; // 0x404270
    int32_t v28; // 0x404270
    int32_t v29; // 0x404270
    int64_t nmemb; // 0x404270
    int64_t v30; // 0x404270
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4042cc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4042c8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4042d8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4042de
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4042a8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40430c
                int64_t v34; // 0x404270
                int64_t v35; // 0x404270
                if (strncmp(str, str2, n) == 0) {
                    // 0x404315
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404490;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404326
                int64_t v37 = *(int64_t *)v36; // 0x40432a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404300
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404315
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404490;
                        }
                    }
                    // 0x404326
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
                  lab_0x404376:
                    // 0x404376
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
                        goto lab_0x4043d0;
                    } else {
                        if (v11 == 0) {
                            // 0x404540
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4043d0;
                        } else {
                            if (v39 == 0) {
                                // 0x4044f0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40439a;
                                } else {
                                    // 0x4044fc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40439a;
                                    } else {
                                        // 0x40450a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40439a;
                                        } else {
                                            goto lab_0x4043d0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40439a;
                            }
                        }
                    }
                }
              lab_0x4043e1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4045b6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404762
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404782
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4047cf
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x4047e9
                            int64_t v45; // 0x4047eb
                            if (*(char *)v42 != 0) {
                                // 0x4047eb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4047e3
                            while (v17 + nmemb != v42) {
                                // 0x4047e5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4047eb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x4047d8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404810
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x4045c4
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40471f
                        free((int64_t *)v17);
                    }
                    // 0x404619
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404630
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4044de
                    return 63;
                }
                // 0x404400
                v5 = v39;
                if (v13 != 0) {
                    // 0x404484
                    v35 = v13;
                    v34 = v25;
                  lab_0x404490:;
                    int32_t * v49 = (int32_t *)a7; // 0x4044a0
                    uint32_t v50 = *v49; // 0x4044a0
                    int64_t v51 = v50; // 0x4044a0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4044aa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4044b3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4046df
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40468a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4044de
                            return 63;
                        }
                        // 0x404528
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40483f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40473d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404750
                                // 0x4044de
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40464e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404662
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4044cb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4044ce
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4044d2
                    int64_t result = v59; // 0x4044d8
                    if (v58 != 0) {
                        // 0x4044da
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4044de
                    return result;
                }
            } else {
                // 0x4042de
                v5 = v32;
            }
            // break -> 0x404405
            break;
        }
    }
    // 0x404405
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40441d
        if (*(char *)(v60 + 1) != 45) {
            // 0x404427
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4044de
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404569
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404456
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404466
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4043d0:
    // 0x4043d0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4043d0
    int64_t v63 = *(int64_t *)v62; // 0x4043d4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4043e1
        goto lab_0x4043e1;
    }
    goto lab_0x404376;
  lab_0x40439a:
    // 0x40439a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404270
    int32_t v65; // 0x404270
    int32_t v66; // 0x404270
    if (v27 != 0) {
        goto lab_0x4043d0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404550
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4043d0;
            } else {
                goto lab_0x4043c1;
            }
        } else {
            // 0x4043b5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4046ac
                int64_t v67 = (int64_t)mem; // 0x4046ac
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4043d0;
                } else {
                    // 0x4046bf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4043c1;
                }
            } else {
                goto lab_0x4043c1;
            }
        }
    }
  lab_0x4043c1:
    // 0x4043c1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4043d0;
}
// Address range: 0x404890 - 0x404e56
int64_t function_404890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4048b1
    if (v3 < 1) {
        // 0x404a6e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4048ad
    int32_t v5 = *(int32_t *)a7; // 0x4048b9
    uint64_t v6 = a1 & 0xffffffff; // 0x4048bb
    int64_t v7 = v2; // 0x4048c0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4048c3
    *v8 = 0;
    int64_t v9; // 0x404890
    int64_t v10; // 0x404890
    int64_t v11; // 0x404890
    int64_t v12; // 0x404890
    int64_t str; // 0x404890
    int64_t v13; // 0x404890
    int64_t v14; // 0x404890
    int64_t v15; // 0x404890
    int64_t v16; // 0x404890
    int64_t v17; // 0x404890
    int32_t v18; // 0x404890
    char v19; // 0x404890
    if (v5 == 0) {
        // 0x404aa8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4048da;
    } else {
        // 0x4048d3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404920
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404923
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4049e8;
            } else {
                int64_t v22 = v7 + 1; // 0x404936
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404946
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4049fc;
                } else {
                    goto lab_0x404958;
                }
            }
        } else {
            goto lab_0x4048da;
        }
    }
  lab_0x4048da:
    // 0x4048da
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4048e0
    *v24 = 0;
    int64_t v25; // 0x404890
    int64_t v26; // 0x404890
    int64_t v27; // 0x404890
    switch (*(char *)&v2) {
        case 45: {
            // 0x4049d0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4049dd;
        }
        case 43: {
            // 0x404ce0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4049dd;
        }
        default: {
            // 0x4048fc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404c5f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404d78
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4049dd;
                } else {
                    // 0x404c6d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40490a;
                }
            } else {
                goto lab_0x40490a;
            }
        }
    }
  lab_0x4049e8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4049ef
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404958;
    } else {
        goto lab_0x4049fc;
    }
  lab_0x40490a:
    // 0x40490a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4049dd;
  lab_0x4049dd:
    // 0x4049dd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4049e8;
  lab_0x404958:;
    uint32_t v30 = *(int32_t *)a7; // 0x404958
    int64_t v31 = v30; // 0x404958
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40495a
    if ((int64_t)*v32 > v31) {
        // 0x40495f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404962
    if (*v33 > v30) {
        // 0x404967
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40496a
    int64_t v35 = v31; // 0x40496e
    int64_t v36 = v15; // 0x40496e
    int64_t v37; // 0x404890
    int64_t v38; // 0x404890
    int64_t v39; // 0x404890
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404ad8
        int64_t v41 = v40; // 0x404ad8
        v2 = v41;
        int64_t v42; // 0x404890
        if (*v33 == v40) {
            // 0x404cc0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404cc8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404ae4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404af8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404b01
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404b0a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404b21
            int64_t v47 = v45 & 0xffffffff; // 0x404b25
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404b2e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404b34
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404b36;
                }
            }
            int64_t v48 = v47 + 1; // 0x404b10
            int64_t v49 = v48 & 0xffffffff; // 0x404b10
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404b21
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404b2e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404b34
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404b36;
                    }
                }
                // 0x404b10
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404cd8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404b36;
    } else {
        goto lab_0x404974;
    }
  lab_0x4049fc:
    // 0x4049fc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4049ff
    int64_t v51 = v12; // 0x4049ff
    int64_t v52 = v14; // 0x4049ff
    if (*(char *)v10 == 0) {
        goto lab_0x404958;
    } else {
        goto lab_0x404a05;
    }
  lab_0x404974:;
    int32_t v53 = v35; // 0x404974
    int64_t v54; // 0x404890
    int64_t v55; // 0x404890
    int64_t v56; // 0x404890
    int64_t v57; // 0x404890
    int64_t v58; // 0x404890
    int64_t v59; // 0x404890
    char * v60; // 0x404890
    int64_t v61; // 0x404890
    int64_t v62; // 0x404989
    int64_t v63; // 0x404890
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404ac3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404ac6;
    } else {
        // 0x40497c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404890
        int64_t v66 = v65 ? -1 : 1; // 0x404990
        int64_t v67 = (int64_t)"--"; // 0x404890
        int64_t v68 = v62; // 0x404890
        int64_t v69 = 3; // 0x404990
        unsigned char v70 = *(char *)v68; // 0x404990
        char v71 = *(char *)v67; // 0x404990
        char v72 = v71; // 0x404990
        bool v73 = false; // 0x404990
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
            // 0x404a80
            if (*(char *)v62 == 45) {
                // 0x404b40
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404b40
                if (c == 0) {
                    goto lab_0x404a8a;
                } else {
                    // 0x404b4d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404bd0;
                    } else {
                        if (c == 45) {
                            // 0x404db3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404c25;
                        } else {
                            // 0x404b5e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404bd0;
                            } else {
                                // 0x404b63
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404b84;
                                } else {
                                    // 0x404b6a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404bd0;
                                    } else {
                                        goto lab_0x404b84;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404a8a;
            }
        } else {
            uint32_t v75 = *v33; // 0x4049a0
            v2 = v75;
            int32_t v76 = *v32; // 0x4049a3
            int64_t v77 = v35 + 1; // 0x4049a6
            int32_t v78 = v77; // 0x4049a9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404d10
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4049b7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4049c5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404ac6;
        }
    }
  lab_0x404a05:;
    // 0x404a05
    int64_t v79; // bp-104, 0x404890
    int64_t v80 = &v79; // 0x40489a
    int64_t v81 = v50 + 1; // 0x404a05
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404a0c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404a11
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404a15
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404a19
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404a21
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404a26
    int32_t c2 = v84; // 0x404a26
    char * found_char_pos = strchr(str2, c2); // 0x404a26
    int64_t v87 = *v82; // 0x404a2b
    v2 = v87;
    int64_t v88 = *v85; // 0x404a35
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404a40
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404d30
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404cfd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404a6e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404a26
    char v91 = *(char *)(v90 + 1); // 0x404a5b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404a15
        if (v91 != 58) {
            // 0x404a6e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404c84
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404d88
                *v8 = 0;
            } else {
                // 0x404d6c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404cae
            *v83 = 0;
            // 0x404a6e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404c8e
        if (v93 != 0) {
            // 0x404d20
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404cae
            *v83 = 0;
            // 0x404a6e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404ca1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404cae
            *v83 = 0;
            // 0x404a6e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404dea
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404d9a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404da1
        // 0x404cae
        *v83 = 0;
        // 0x404a6e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404bf9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404bfb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404e20
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404dd1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404dd8
            // 0x404a6e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404c06
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404c0a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404c25;
  lab_0x404b36:
    // 0x404b36
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404974;
  lab_0x404c25:;
    int64_t v99 = function_404270(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404c43
    // 0x404a6e
    return v99 & 0xffffffff;
  lab_0x404ac6:;
    int32_t v100 = v55; // 0x404ac6
    if (v100 != (int32_t)v59) {
        // 0x404aca
        *(int32_t *)a7 = v100;
    }
    // 0x404a6e
    return 0xffffffff;
  lab_0x404a8a:
    // 0x404a8a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404a91
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404a6e
    return v99 & 0xffffffff;
  lab_0x404bd0:
    // 0x404bd0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404a05;
  lab_0x404b84:
    // 0x404b84
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404270(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404baa
    if ((int32_t)v101 != -1) {
        // 0x404a6e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404bbf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404bd0;
}
// Address range: 0x404e60 - 0x404eb6
int64_t function_404e60(int64_t a1) {
    // 0x404e60
    *(int32_t *)&g42 = g28;
    *(int32_t *)&g43 = g27;
    int64_t v1; // 0x404e60
    int64_t result = function_404890(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x404e86
    g28 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g26 = g44;
    return result;
}
// Address range: 0x404ec0 - 0x404ed8
int64_t function_404ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404ec0
    return function_404e60(1);
}
// Address range: 0x404ee0 - 0x404ef3
int64_t function_404ee0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x404ee0
    return function_404e60(0);
}
// Address range: 0x404f00 - 0x404f15
int64_t function_404f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404f00
    return function_404890(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404f20 - 0x404f36
int64_t function_404f20(void) {
    // 0x404f20
    return function_404e60(0);
}
// Address range: 0x404f40 - 0x404f58
int64_t function_404f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404f40
    return function_404890(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x404f60 - 0x404fda
int64_t function_404f60(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x404f6b
    int64_t v2 = (int64_t)&g12; // 0x404f6b
    int32_t * pwc; // 0x404f60
    int64_t v3; // 0x404f60
    int64_t n; // 0x404f60
    if (a2 == 0) {
        goto lab_0x404fb2;
    } else {
        // 0x404f6d
        if (a3 == 0) {
            // 0x404f98
            return -2;
        }
        // 0x404f79
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x404fb2;
        } else {
            goto lab_0x404f84;
        }
    }
  lab_0x404fb2:
    // 0x404fb2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x404f60
    pwc = (int32_t *)&v4;
    goto lab_0x404f84;
  lab_0x404f84:;
    char * wstr = (char *)v3; // 0x404f8a
    int64_t ps; // 0x404f60
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x404f8a
    int64_t result = v5; // 0x404f8a
    if (v5 < 0xfffffffe) {
        // 0x404f98
        return result;
    }
    int64_t result2 = result; // 0x404fc9
    if ((char)function_405040(0, v3) == 0) {
        // 0x404fcb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x404f98
    return result2;
}
// Address range: 0x404fe0 - 0x40503d
int64_t function_404fe0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x404fe7
    int64_t v2; // 0x404fe0
    int64_t result = function_405610(a1, v2); // 0x404ff8
    if ((v2 & 32) != 0) {
        // 0x405020
        if ((int32_t)result == 0) {
            // 0x405024
            *__errno_location() = 0;
        }
        // 0x40501a
        return 0xffffffff;
    }
    // 0x405001
    if ((int32_t)result == 0) {
        // 0x40501a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405008
    if (v1 == 0) {
        // 0x40500a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40501a
    return result2;
}
// Address range: 0x405040 - 0x40509e
int64_t function_405040(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405046
    if (locale == NULL) {
        // 0x405073
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405046
    bool v2; // 0x405040
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x405040
    int64_t v5 = v1; // 0x405040
    int64_t v6 = 2; // 0x405065
    unsigned char v7 = *(char *)v5; // 0x405065
    char v8 = *(char *)v4; // 0x405065
    char v9 = v8; // 0x405065
    bool v10 = false; // 0x405065
    while (v7 == v8) {
        // 0x405058
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405071
    int64_t v13 = v1; // 0x405071
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405073
        return 0;
    }
    int64_t v14 = 6; // 0x405071
    unsigned char v15 = *(char *)v13; // 0x40508d
    char v16 = *(char *)v12; // 0x40508d
    char v17 = v16; // 0x40508d
    bool v18 = false; // 0x40508d
    while (v15 == v16) {
        // 0x405080
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
// Address range: 0x4050a0 - 0x405602
int64_t function_4050a0(void) {
    char * v1 = nl_langinfo(14); // 0x4050b6
    char * v2 = g46; // 0x4050bb
    char * v3; // 0x4050a0
    int64_t v4; // 0x4050a0
    int64_t v5; // 0x4050a0
    int64_t v6; // 0x4050a0
    int64_t v7; // 0x4050a0
    int32_t size; // 0x4050a0
    int32_t size2; // 0x4050a0
    int32_t len; // 0x405172
    int64_t v8; // 0x405172
    char * env_val; // 0x40515d
    if (v2 == NULL) {
        // 0x405158
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4051c5;
        } else {
            // 0x40516a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4051c5;
            } else {
                // 0x40516f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40515d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4055f5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4051c5;
                    } else {
                        // 0x405569
                        size2 = len + 14;
                        goto lab_0x40518b;
                    }
                } else {
                    goto lab_0x40518b;
                }
            }
        }
    } else {
        // 0x4050a0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4050da;
    }
  lab_0x40540c:;
    // 0x40540c
    struct _IO_FILE * stream; // 0x40524b
    int32_t v10 = __uflow(stream); // 0x40540f
    int64_t v11; // 0x4050a0
    int64_t v12 = v11; // 0x405419
    int64_t v13; // 0x4050a0
    int64_t v14 = v13; // 0x405419
    int32_t v15 = v10; // 0x405419
    int64_t v16; // 0x4050a0
    int64_t v17 = v16; // 0x405419
    int64_t v18 = v11; // 0x405419
    int64_t v19 = v13; // 0x405419
    int64_t v20 = v16; // 0x405419
    if (v10 == -1) {
        // break -> 0x40541f
        goto lab_0x40541f;
    }
    goto lab_0x405299;
  lab_0x40528e:;
    // 0x40528e
    int64_t v90; // 0x4050a0
    int64_t * v32; // 0x405280
    *v32 = v90 + 1;
    int64_t v89; // 0x4050a0
    v12 = v89;
    int64_t v91; // 0x4050a0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4050a0
    v17 = v92;
    goto lab_0x405299;
  lab_0x405299:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4050a0
    int32_t v25; // bp-120, 0x4050a0
    int32_t v26; // bp-184, 0x4050a0
    int64_t v27; // 0x40524b
    int64_t v28; // 0x405268
    int64_t v29; // 0x40526d
    int64_t * v30; // 0x405284
    switch (c) {
        case 32: {
            goto lab_0x405280;
        }
        case 10: {
            goto lab_0x405280;
        }
        case 9: {
            goto lab_0x405280;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405471
            int32_t v33; // 0x4050a0
            char v34; // 0x4050a0
            int32_t v35; // 0x40547e
            if (v31 < *v30) {
                // 0x405450
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40547b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405471
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405450
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40547b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405460
                v36 = v33;
            }
            // 0x40554f
            if (v36 == -1) {
                // break -> 0x40541f
                break;
            }
            goto lab_0x405280;
        }
        default: {
            // 0x4052af
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40541f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4052d8
            int64_t v39 = v37 + 4; // 0x4052da
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4052e6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4052e8
            while (v41 == 0) {
                // 0x4052d8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405306
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405312
            int64_t v45 = v43 + 4; // 0x405314
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405320
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405322
            while (v47 == 0) {
                // 0x405312
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40530f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405338
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405348
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40534c
            int64_t v52 = v51 + v48; // 0x405355
            int64_t * mem; // 0x4050a0
            int64_t v53; // 0x4050a0
            int64_t v54; // 0x4050a0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40548b
                int64_t v56 = v55 + 3; // 0x405497
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405371
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405380
            if (mem == NULL) {
                // 0x4055ac
                free((int64_t *)v21);
                function_405610(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x405224;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405398
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4053a2
            uint32_t v62 = (int32_t)v59; // 0x4053a5
            int64_t v63; // 0x4050a0
            if (v62 >= 8) {
                // 0x4054b4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4054ce
                int64_t v66 = v61 - v65; // 0x4054d2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4054dd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4054ee
                    int64_t v70 = v69 & 0xffffffff; // 0x4054ee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4054eb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40557f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4053b7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4053bb
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
            int64_t v73 = v51 + 1; // 0x4053cb
            int64_t v74 = v60 - 1; // 0x4053cf
            uint32_t v75 = (int32_t)v73; // 0x4053d4
            int64_t v76; // 0x4050a0
            if (v75 >= 8) {
                // 0x405502
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40550c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40551c
                int64_t v80 = v74 - v79; // 0x405520
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40552b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40553b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405539
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405596
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40559e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4053e6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4053ea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4055e3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4053fe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40528e;
            } else {
                goto lab_0x40540c;
            }
        }
    }
  lab_0x405280:;
    int64_t v93 = v23; // 0x4050a0
    int64_t v94 = v22; // 0x4050a0
    int64_t v95 = v21; // 0x4050a0
    goto lab_0x405280_2;
  lab_0x4051c5:;
    int64_t * mem3 = malloc(size); // 0x4051c5
    int64_t v97 = (int64_t)&g12; // 0x4051d0
    int64_t v98; // 0x4050a0
    int64_t path; // 0x4050a0
    if (mem3 == NULL) {
        goto lab_0x4051a2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4051c5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4051e6;
    }
  lab_0x4050da:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x4050cd
    char v100 = *v3; // 0x4050da
    int64_t v101; // 0x4050a0
    if (v100 == 0) {
        // 0x405134
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4050a0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4050a0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405120
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405127;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4050f0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4050fd
        char v107 = *(char *)v106; // 0x405102
        v102 = v107;
        if (v107 == 0) {
            // 0x405134
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40510b
    v104 = v103 + 1;
  lab_0x405127:
    // 0x405134
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4051a2:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4050da;
  lab_0x4051e6:;
    int64_t v109 = v98 + path; // 0x4051e6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405212
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x405241
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405572
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x405265
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405280_2:;
                uint64_t v96 = *v32; // 0x405280
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40540c;
                } else {
                    goto lab_0x40528e;
                }
            }
          lab_0x40541f:
            // 0x40541f
            function_405610(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40543e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405224;
  lab_0x40518b:;
    int64_t * mem4 = malloc(size2); // 0x40518b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x405231
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4051e6;
    } else {
        goto lab_0x4051a2;
    }
  lab_0x405224:
    // 0x405224
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4051a2;
}
// Address range: 0x405610 - 0x40568b
int64_t function_405610(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405617
    if (fileno(stream) < 0) {
        // 0x405677
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40562a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40565b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405677
            return fclose(stream);
        }
    }
    // 0x40562c
    if ((int32_t)function_405690(a1, v1) == 0) {
        // 0x405677
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405638
    int32_t v3 = *v2; // 0x405640
    int64_t result = fclose(stream); // 0x40564e
    if (v3 != 0) {
        // 0x405680
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405650
    return result;
}
// Address range: 0x405690 - 0x4056d0
int64_t function_405690(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4056aa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4056aa
        return fflush(stream);
    }
    // 0x4056b8
    function_4056d0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4056d0 - 0x405727
int64_t function_4056d0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4056d0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4056da
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40570b
    int64_t result = -1; // 0x405714
    if (v1 != -1) {
        // 0x405716
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405722
    return result;
}
// Address range: 0x405730 - 0x40578d
int64_t function_405730(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405730
    return function_4012a8();
}
// Address range: 0x405790 - 0x405791
int64_t function_405790(void) {
    // 0x405790
    int64_t result; // 0x405790
    return result;
}
// Address range: 0x4057a0 - 0x4057b8
int64_t function_4057a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4057a0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x4057b8 - 0x4057d8
int64_t function_4057b8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x4057c2
    while (*(int64_t *)v1 != -1) {
        // 0x4057c3
        v1 -= 8;
    }
    // 0x4057d4
    return result;
}
