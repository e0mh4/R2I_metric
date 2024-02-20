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
// Address range: 0x401600 - 0x4017a5
int64_t function_401600(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x40160a
    function_401de0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401600
    function_405860(0x401bf0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    char v3 = 0; // 0x401645
    while (true) {
      lab_0x40164a:;
        char v4 = v3;
        int64_t v5 = function_404fa0(v1, a2, &g2, &g3, 0, v2); // 0x40165c
        v3 = 1;
        switch ((int32_t)v5) {
            case -1: {
                int64_t v6 = (int64_t)*(int32_t *)0x60923c; // 0x4016c8
                if (v1 <= v6) {
                    // 0x401781
                    error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
                  lab_0x401683:
                    // 0x401683
                    function_401890(1);
                    // UNREACHABLE
                }
                int64_t v7 = v4 == 0 ? 10 : 0; // 0x4016dd
                int64_t data = *(int64_t *)((0x100000000 * v6 >> 29) + a2); // 0x40172c
                int64_t n = function_401c90(data); // 0x401733
                int64_t v8; // 0x401738
                int64_t * v9; // 0x4016e6
                uint64_t v10; // 0x4016e6
                if (n == 0) {
                    // 0x4016e6
                    v8 = (int64_t)g30;
                    v9 = (int64_t *)(v8 + 40);
                    v10 = *v9;
                    if (v10 >= *(int64_t *)(v8 + 48)) {
                        // 0x401756
                        __overflow(g30, 46);
                    } else {
                        // 0x4016f0
                        *v9 = v10 + 1;
                        *(char *)v10 = 46;
                    }
                } else {
                    // 0x401744
                    fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g30);
                }
                int64_t v11 = (int64_t)g30; // 0x4016fb
                int64_t * v12 = (int64_t *)(v11 + 40); // 0x401702
                uint64_t v13 = *v12; // 0x401702
                if (*(int64_t *)(v11 + 48) > v13) {
                    // 0x40170c
                    *v12 = v13 + 1;
                    *(char *)v13 = (char)v7;
                } else {
                    // 0x401770
                    __overflow(g30, (int32_t)v7);
                }
                // 0x401717
                g27 = &g28;
                while (v1 > (int64_t)&g28) {
                    // 0x40172a
                    data = *(int64_t *)((0x100000000 * (int64_t)&g28 >> 29) + a2);
                    n = function_401c90(data);
                    if (n == 0) {
                        // 0x4016e6
                        v8 = (int64_t)g30;
                        v9 = (int64_t *)(v8 + 40);
                        v10 = *v9;
                        if (v10 >= *(int64_t *)(v8 + 48)) {
                            // 0x401756
                            __overflow(g30, 46);
                        } else {
                            // 0x4016f0
                            *v9 = v10 + 1;
                            *(char *)v10 = 46;
                        }
                    } else {
                        // 0x401744
                        fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g30);
                    }
                    // 0x4016fb
                    v11 = (int64_t)g30;
                    v12 = (int64_t *)(v11 + 40);
                    v13 = *v12;
                    if (*(int64_t *)(v11 + 48) > v13) {
                        // 0x40170c
                        *v12 = v13 + 1;
                        *(char *)v13 = (char)v7;
                    } else {
                        // 0x401770
                        __overflow(g30, (int32_t)v7);
                    }
                    // 0x401717
                    g27 = &g28;
                }
                // 0x401765
                return 0;
            }
            case -130: {
                // 0x40177a
                function_401890(0);
                // UNREACHABLE
            }
            case 122: {
                goto lab_0x40164a;
            }
            case -131: {
                // 0x401690
                function_403e80((int64_t)g30, "dirname", "GNU coreutils", (int64_t)g18, "David MacKenzie", "Jim Meyering");
                exit(0);
                // UNREACHABLE
            }
            default: {
                goto lab_0x401683;
            }
        }
    }
}
// Address range: 0x4017b0 - 0x4017db
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4017b0
    int64_t v1; // 0x4017b0
    __libc_start_main(0x401600, (int32_t)a4, (char **)&v1, (void (*)())0x4057f0, (void (*)())0x405850, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4017db - 0x4017fa
int64_t function_4017db(void) {
    // 0x4017db
    return &g29;
}
// Address range: 0x4017fa - 0x401831
int64_t function_4017fa(void) {
    // 0x4017fa
    return 0;
}
// Address range: 0x401831 - 0x401888
int64_t function_401831(void) {
    // 0x401831
    if (g33 != 0) {
        // 0x401887
        int64_t result; // 0x401831
        return result;
    }
    int64_t v1 = g34; // 0x401864
    int64_t result2; // 0x401876
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401876
        result2 = function_4017db();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401866
        v1++;
    }
    // 0x40185a
    g34 = v1;
    // 0x401876
    result2 = function_4017db();
    g33 = 1;
    return result2;
}
// Address range: 0x401888 - 0x40188d
int64_t function_401888(void) {
    // 0x401888
    return function_4017fa();
}
// Address range: 0x401890 - 0x401bcd
int64_t function_401890(int64_t a1) {
    int32_t status = a1; // 0x4018a6
    if (status != 0) {
        // 0x4018aa
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4018cf
        exit(status);
        // UNREACHABLE
    }
    // 0x4018d6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION] NAME...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Output each NAME with its last non-slash component and trailing slashes\nremoved; if NAME contains no /'s, output '.' (meaning the current directory).\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero     end each output line with NUL, not newline\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  %s /usr/bin/          -> \"/usr\"\n  %s dir1/str dir2/str  -> \"dir1\" followed by \"dir2\"\n  %s stdio.h            -> \".\"\n", 5));
    int64_t v1 = &g1; // bp-136, 0x4019b0
    bool v2; // 0x401890
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401a30
    int64_t v6 = *(int64_t *)v5; // 0x401a34
    int64_t v7 = 8; // 0x401a3a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"dirname";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401a46
        char v11 = *(char *)v9; // 0x401a46
        char v12 = v11; // 0x401a46
        bool v13 = false; // 0x401a46
        while (v10 == v11) {
            // 0x401a3c
            v7--;
            int64_t v14 = v9 + v3; // 0x401a46
            int64_t v15 = v8 + v3; // 0x401a46
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
            // break -> 0x401a52
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 8;
    }
    // 0x401a52
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401b64;
        } else {
            // 0x401b4e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401ba3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401ab4;
            } else {
                goto lab_0x401b64;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401ab4;
        } else {
            // 0x401a9a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401ba3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401ab4;
            } else {
                goto lab_0x401ab4;
            }
        }
    }
  lab_0x401b64:
    // 0x401b64
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401af4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018cf
    exit(status);
    // UNREACHABLE
  lab_0x401ab4:
    // 0x401ab4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401af4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4018cf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401bd0 - 0x401bd8
int64_t function_401bd0(int64_t a1) {
    // 0x401bd0
    g36 = a1;
    int64_t result; // 0x401bd0
    return result;
}
// Address range: 0x401be0 - 0x401be8
int64_t function_401be0(int64_t a1) {
    // 0x401be0
    g35 = a1;
    int64_t result; // 0x401be0
    return result;
}
// Address range: 0x401bf0 - 0x401c8e
int64_t function_401bf0(void) {
    // 0x401bf0
    int32_t * err_num; // 0x401c06
    if ((int32_t)function_4050a0((int64_t)g30) == 0) {
        goto lab_0x401c1c;
    } else {
        // 0x401c06
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x401c33;
        } else {
            // 0x401c17
            if (*err_num != 32) {
                goto lab_0x401c33;
            } else {
                goto lab_0x401c1c;
            }
        }
    }
  lab_0x401c1c:;
    int64_t result = function_4050a0((int64_t)g32); // 0x401c23
    if ((int32_t)result == 0) {
        // 0x401c2c
        return result;
    }
    // 0x401c6e
    _exit(g19);
    // UNREACHABLE
  lab_0x401c33:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401c3f
    if (g36 == 0) {
        // 0x401c79
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401c53
        error(0, *err_num, "%s: %s", (char *)function_403850((int64_t)g36), v1);
    }
    // 0x401c6e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x401c90 - 0x401ced
int64_t function_401c90(int64_t a1) {
    // 0x401c90
    int64_t v1; // 0x401c90
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x401c9e
    int64_t v3 = function_401d50(a1, v1); // 0x401ca2
    int64_t result = v3 - a1; // 0x401caa
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x401cd3
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x401cc0
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x401cd3
            break;
        }
        result2--;
    }
    // 0x401cd3
    return result2;
}
// Address range: 0x401cf0 - 0x401d4a
int64_t function_401cf0(int64_t a1) {
    int64_t v1 = function_401c90(a1); // 0x401cf9
    int64_t * mem = malloc((int32_t)(v1 + 1 + (int64_t)(v1 == 0))); // 0x401d0f
    if (mem == NULL) {
        // 0x401d36
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v1); // 0x401d25
    int64_t v2 = v1; // 0x401d30
    if (v1 == 0) {
        // 0x401d40
        *(char *)dest_mem = 46;
        v2 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x401d25
    *(char *)(v2 + result) = 0;
    // 0x401d36
    return result;
}
// Address range: 0x401d50 - 0x401dab
int64_t function_401d50(int64_t a1, int64_t a2) {
    // 0x401d50
    int64_t v1; // 0x401d50
    char v2 = v1;
    int64_t v3 = a1; // 0x401d59
    int64_t v4 = a1; // 0x401d59
    char v5 = v2; // 0x401d59
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x401d64
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x401d60
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x401d6e
    if (v5 == 0) {
      lab_0x401daa:
        // 0x401daa
        return result;
    }
    int64_t v7 = v4; // 0x401d98
    int64_t v8 = 0; // 0x401d98
    int64_t v9; // 0x401d50
    int64_t v10; // 0x401d9a
    char v11; // 0x401d9e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x401d95
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x401d9a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x401d95
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x401d8a
    char v14 = *(char *)v13; // 0x401d8e
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
            // 0x401d95
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x401d9a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x401d95
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x401d80
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x401daa
    return result2;
}
// Address range: 0x401db0 - 0x401ddb
int64_t function_401db0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x401db4
    int64_t result = len; // 0x401db4
    if (len < 2) {
        // 0x401dca
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x401dc8
    while (*(char *)(v1 + str) == 47) {
        // 0x401dd0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x401dca
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x401dca
    return result2;
}
// Address range: 0x401de0 - 0x401e79
int64_t function_401de0(int64_t str) {
    // 0x401de0
    if (str == 0) {
        // 0x401e59
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401dee
    int64_t result = (int64_t)found_char_pos; // 0x401dee
    if (found_char_pos == NULL) {
        // 0x401e49
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401df8
    if (v1 - str < 7) {
        // 0x401e49
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x401e08
    bool v2; // 0x401de0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401de0
    int64_t v5 = result - 6; // 0x401de0
    int64_t v6 = 7; // 0x401e16
    unsigned char v7 = *(char *)v5; // 0x401e16
    char v8 = *(char *)v4; // 0x401e16
    char v9 = v8; // 0x401e16
    bool v10 = false; // 0x401e16
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
    int64_t v12 = (int64_t)"lt-"; // 0x401e20
    int64_t v13 = v1; // 0x401e20
    int64_t v14 = 3; // 0x401e20
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401e49
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401e32
    char v16 = *(char *)v12; // 0x401e32
    char v17 = v16; // 0x401e32
    bool v18 = false; // 0x401e32
    while (v15 == v16) {
        // 0x401e22
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
    int64_t v20 = v1; // 0x401e3c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401e3e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x401e49
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x401e80 - 0x401f72
int64_t function_401e80(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401e94
    int64_t result = (int64_t)v1; // 0x401e94
    if (result != a1) {
        // 0x401ea1
        return result;
    }
    int64_t v2 = function_405160(); // 0x401eb0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401f66
    if (v3 == 85) {
        // 0x401ec0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401f58
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x401eee
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x401efb
        // 0x401ea1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401f58
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x401f3d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x401f4a
    // 0x401ea1
    return result4;
}
// Address range: 0x401f80 - 0x401fd7
int64_t function_401f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401f80
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401fc8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401fd7 - 0x4031a1
int64_t function_401fd7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402021
    int64_t v3 = 0; // 0x402021
    int64_t v4; // 0x401fd7
    int64_t v5; // 0x401fd7
    int64_t v6; // 0x401fd7
    int64_t v7; // 0x401fd7
    int64_t v8; // 0x401fd7
    int64_t v9; // 0x401fd7
    int64_t v10; // 0x401fd7
    int64_t v11; // 0x401fd7
    int64_t v12; // 0x401fd7
    int64_t v13; // 0x401fd7
    int64_t v14; // 0x401fd7
    int64_t v15; // 0x401fd7
    int64_t v16; // 0x401fd7
    int64_t v17; // 0x401fd7
    int64_t v18; // 0x401fd7
    int64_t result; // 0x401fd7
    int64_t v19; // 0x401fd7
    int32_t wc; // bp+132, 0x401fd7
    int64_t ps; // bp+136, 0x401fd7
    char v20; // 0x402590
    int64_t v21; // 0x402590
    int64_t v22; // 0x402938
    int64_t v23; // 0x401fd7
    int64_t v24; // 0x402957
    int32_t v25; // 0x401fd7
    while (true) {
      lab_0x402028_2:
        // 0x402028
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x401fd7
        int64_t v27; // 0x40205c
        while (true) {
          lab_0x402028:
            // 0x402028
            v5 = v26;
            bool v28 = v15 == v5; // 0x402033
            if (v15 == -1) {
                // 0x402035
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402043
            if (v28) {
                // break (via goto) -> 0x4027a8
                goto lab_0x4027a8;
            }
            // 0x40204c
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
                    // 0x40263b
                    if (v25 % 2 == 0) {
                        goto lab_0x402181;
                    }
                    // 0x402a5d
                    v26 = v5 + 1;
                    goto lab_0x402028;
                }
                case 7: {
                    goto lab_0x402181;
                }
                case 8: {
                    goto lab_0x402181;
                }
                case 9: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402181;
                }
                case 12: {
                    goto lab_0x402181;
                }
                case 13: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40214d;
                }
                case 36: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402181;
                }
                case 38: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402181;
                }
                case 44: {
                    goto lab_0x402181;
                }
                case 45: {
                    goto lab_0x402181;
                }
                case 46: {
                    goto lab_0x402181;
                }
                case 47: {
                    goto lab_0x402181;
                }
                case 48: {
                    goto lab_0x402181;
                }
                case 49: {
                    goto lab_0x402181;
                }
                case 50: {
                    goto lab_0x402181;
                }
                case 51: {
                    goto lab_0x402181;
                }
                case 52: {
                    goto lab_0x402181;
                }
                case 53: {
                    goto lab_0x402181;
                }
                case 54: {
                    goto lab_0x402181;
                }
                case 55: {
                    goto lab_0x402181;
                }
                case 56: {
                    goto lab_0x402181;
                }
                case 57: {
                    goto lab_0x402181;
                }
                case 58: {
                    goto lab_0x402181;
                }
                case 59: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402181;
                }
                case 66: {
                    goto lab_0x402181;
                }
                case 67: {
                    goto lab_0x402181;
                }
                case 68: {
                    goto lab_0x402181;
                }
                case 69: {
                    goto lab_0x402181;
                }
                case 70: {
                    goto lab_0x402181;
                }
                case 71: {
                    goto lab_0x402181;
                }
                case 72: {
                    goto lab_0x402181;
                }
                case 73: {
                    goto lab_0x402181;
                }
                case 74: {
                    goto lab_0x402181;
                }
                case 75: {
                    goto lab_0x402181;
                }
                case 76: {
                    goto lab_0x402181;
                }
                case 77: {
                    goto lab_0x402181;
                }
                case 78: {
                    goto lab_0x402181;
                }
                case 79: {
                    goto lab_0x402181;
                }
                case 80: {
                    goto lab_0x402181;
                }
                case 81: {
                    goto lab_0x402181;
                }
                case 82: {
                    goto lab_0x402181;
                }
                case 83: {
                    goto lab_0x402181;
                }
                case 84: {
                    goto lab_0x402181;
                }
                case 85: {
                    goto lab_0x402181;
                }
                case 86: {
                    goto lab_0x402181;
                }
                case 87: {
                    goto lab_0x402181;
                }
                case 88: {
                    goto lab_0x402181;
                }
                case 89: {
                    goto lab_0x402181;
                }
                case 90: {
                    goto lab_0x402181;
                }
                case 91: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402181;
                }
                case 94: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402181;
                }
                case 96: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402181;
                }
                case 98: {
                    goto lab_0x402181;
                }
                case 99: {
                    goto lab_0x402181;
                }
                case 100: {
                    goto lab_0x402181;
                }
                case 101: {
                    goto lab_0x402181;
                }
                case 102: {
                    goto lab_0x402181;
                }
                case 103: {
                    goto lab_0x402181;
                }
                case 104: {
                    goto lab_0x402181;
                }
                case 105: {
                    goto lab_0x402181;
                }
                case 106: {
                    goto lab_0x402181;
                }
                case 107: {
                    goto lab_0x402181;
                }
                case 108: {
                    goto lab_0x402181;
                }
                case 109: {
                    goto lab_0x402181;
                }
                case 110: {
                    goto lab_0x402181;
                }
                case 111: {
                    goto lab_0x402181;
                }
                case 112: {
                    goto lab_0x402181;
                }
                case 113: {
                    goto lab_0x402181;
                }
                case 114: {
                    goto lab_0x402181;
                }
                case 115: {
                    goto lab_0x402181;
                }
                case 116: {
                    goto lab_0x402181;
                }
                case 117: {
                    goto lab_0x402181;
                }
                case 118: {
                    goto lab_0x402181;
                }
                case 119: {
                    goto lab_0x402181;
                }
                case 120: {
                    goto lab_0x402181;
                }
                case 121: {
                    goto lab_0x402181;
                }
                case 122: {
                    goto lab_0x402181;
                }
                case 123: {
                    goto lab_0x402125;
                }
                case 124: {
                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402125;
                }
                case 126: {
                    goto lab_0x40214d;
                }
                default: {
                    goto lab_0x402525;
                }
            }
        }
      lab_0x402525:
        if (v23 != 1) {
            // 0x402890
            ps = 0;
            int64_t len = v15; // 0x4028a0
            if (v15 == -1) {
                // 0x4028a2
                len = strlen((char *)str);
            }
            // 0x4028ce
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40292f:
                // 0x40292f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402934
                int64_t v30 = v29 + str;
                v24 = function_405020(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402eaa_2;
                    }
                    case -1: {
                        goto lab_0x402eaa_2;
                    }
                    case -2: {
                        // 0x402f8d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x402fc7
                            v19 = v18;
                            int64_t v31 = v18; // 0x402fca
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x402fd7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x402fd0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402eaa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402eaa_2;
                    }
                    case 1: {
                        goto lab_0x402900;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4029ac
                        char v34 = *(char *)v33; // 0x4029bd
                        unsigned char v35; // 0x401fd7
                        if (v34 < 125) {
                            // 0x4029c8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4029df
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4029b0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4029bd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4029c8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4029df
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4029b0
                            v33++;
                        }
                        goto lab_0x402900;
                    }
                }
            }
            goto lab_0x402eaa_2;
        } else {
            // 0x402574
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402181;
        }
    }
  lab_0x4027a8:
    // 0x4027a8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4030aa
        if (v8 > result) {
            // 0x4030b3
            *(char *)(v12 + result) = 0;
        }
        // 0x4023d7
        return result;
    }
    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402181:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402190
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40239a_2;
        }
    }
    int64_t v39 = result; // 0x402291
    char v40 = v20; // 0x402291
    int64_t v41 = v38; // 0x402291
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402291
    int64_t v43 = v36; // 0x402291
    goto lab_0x40220d;
  lab_0x40239a_2:
    // 0x4023d7
    return function_401f80(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402eaa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402181;
    } else {
        uint64_t v49 = v46 + v5; // 0x402a7e
        int64_t v50 = v5 + 1; // 0x402b61
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402b68
        char v52 = v20; // 0x402b68
        int64_t v53 = result; // 0x402b68
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402b31
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402b35
            int64_t v56 = v54 + 1; // 0x402b3a
            int64_t v57 = v51 + 1; // 0x402b61
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402b2c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402b31
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402b35
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
        goto lab_0x40220d;
    }
  lab_0x402900:
    // 0x402900
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40291f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402922
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402eaa
        goto lab_0x402eaa_2;
    }
    goto lab_0x40292f;
  lab_0x40214d:
    // 0x40214d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40239a_2;
    }
    goto lab_0x402181;
  lab_0x402125:;
    bool v60 = v15 == 1; // 0x402130
    if (v15 == -1) {
        // 0x402132
        v60 = *(char *)v1 == 0;
    }
    // 0x40213e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402181;
    } else {
        goto lab_0x40214d;
    }
  lab_0x40220d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402212
        *(char *)(v44 + v45) = v40;
    }
    // 0x402216
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402028_2;
}
// Address range: 0x4031b0 - 0x40334e
int64_t function_4031b0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4031b2
    int32_t * v3 = __errno_location(); // 0x4031cc
    int64_t v4 = (int64_t)g21; // 0x4031d1
    int32_t v5 = *v3; // 0x4031db
    int64_t v6 = v4; // 0x4031f1
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403349
            function_404210(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403200
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403207
        int64_t v9; // 0x4031b0
        if (g21 == &g22) {
            int64_t v10 = function_404020(0, v8); // 0x40332a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x40332f
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404020(v4, v8); // 0x40321b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x40322a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x40322a
        int32_t v14 = v7; // 0x403231
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403261
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40326b
    int64_t * v17 = (int64_t *)v15; // 0x40326e
    uint64_t v18 = *v17; // 0x40326e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403271
    int64_t result = *v19; // 0x403271
    int64_t v20; // 0x4031b0
    uint64_t v21 = function_401f80(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403294
    if (v18 > v21) {
        // 0x40330b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4032a7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x4032b7
        free((int64_t *)result);
    }
    int64_t result2 = function_403fc0(v22); // 0x4032d1
    *v19 = result2;
    int64_t v23; // 0x4031b0
    function_401f80(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40330b
    *v3 = v5;
    return result2;
}
// Address range: 0x403350 - 0x403384
int64_t function_403350(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403357
    int64_t result = function_4041c0(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x403376
    return result;
}
// Address range: 0x403390 - 0x40339f
int64_t function_403390(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x40339c
    return result;
}
// Address range: 0x4033a0 - 0x4033af
int64_t function_4033a0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x4033a8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x4033b0 - 0x4033e3
int64_t function_4033b0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x4033c9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4033ce
    uint32_t v3 = *v2; // 0x4033ce
    uint32_t v4 = (int32_t)a2 % 32; // 0x4033d2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4033f0 - 0x403403
int64_t function_4033f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x4033fc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403410 - 0x40343b
int64_t function_403410(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403418
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403435
        abort();
        // UNREACHABLE
    }
    // 0x40342c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403440 - 0x4034b2
int64_t function_403440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x403462
    int32_t * v2 = __errno_location(); // 0x40346b
    uint32_t v3 = *(int32_t *)v1; // 0x40348b
    int64_t result = function_401f80(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40349a
    return result;
}
// Address range: 0x4034c0 - 0x4035a1
int64_t function_4034c0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x4034e2
    int32_t * v2 = __errno_location(); // 0x4034e8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403507
    int32_t * v4 = (int32_t *)v1; // 0x40350a
    int64_t v5 = function_401f80(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403525
    int64_t v6 = v5 + 1; // 0x40352a
    int64_t result = function_403fc0(v6); // 0x40353f
    function_401f80(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403584
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40358d
    return result;
}
// Address range: 0x4035b0 - 0x4035ba
int64_t function_4035b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4035b0
    return function_4034c0(a1, a2, 0, a3);
}
// Address range: 0x4035c0 - 0x403655
int64_t function_4035c0(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x4035c0
    int64_t v2 = v1; // 0x4035c0
    int64_t v3 = v2; // 0x4035d4
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x4035f3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4035f0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40360d
    if (g22 != 0x6092a0) {
        // 0x40360f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403631
    if (g21 != &g22) {
        // 0x403633
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g49;
    }
    // 0x403646
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x403660 - 0x403671
int64_t function_403660(void) {
    // 0x403660
    int64_t v1; // 0x403660
    return function_4031b0(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x403680 - 0x40368a
int64_t function_403680(void) {
    // 0x403680
    int64_t v1; // 0x403680
    return function_4031b0(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403690 - 0x4036a6
int64_t function_403690(int64_t a1) {
    // 0x403690
    return function_4031b0(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x4036b0 - 0x4036c2
int64_t function_4036b0(int64_t a1, int64_t a2) {
    // 0x4036b0
    return function_4031b0(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x4036d0 - 0x403738
int64_t function_4036d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4036e0
    return function_4031b0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403740 - 0x4037a4
int64_t function_403740(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403750
    return function_4031b0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4037b0 - 0x4037bc
int64_t function_4037b0(int64_t a1, int64_t a2) {
    // 0x4037b0
    return function_4036d0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4037c0 - 0x4037cf
int64_t function_4037c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4037c0
    return function_403740(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4037d0 - 0x403840
int64_t function_4037d0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x4037dd
    int128_t v2 = __asm_movdqa(g40); // 0x4037e5
    int128_t v3 = __asm_movdqa(g41); // 0x4037ed
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403802
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403818
    uint32_t v6 = *v5; // 0x403818
    uint32_t v7 = (int32_t)a3 % 32; // 0x40381d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4031b0(0, a1, a2, &v4);
}
// Address range: 0x403840 - 0x40384d
int64_t function_403840(int64_t a1, int64_t a2) {
    // 0x403840
    return function_4037d0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403850 - 0x403861
int64_t function_403850(int64_t a1) {
    // 0x403850
    return function_4037d0(a1, -1, 58);
}
// Address range: 0x403870 - 0x40387a
int64_t function_403870(void) {
    // 0x403870
    int64_t v1; // 0x403870
    return function_4037d0(v1, v1, 58);
}
// Address range: 0x403880 - 0x4038ee
int64_t function_403880(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40389a
    return function_4031b0(a1, a3, -1, &v1);
}
// Address range: 0x4038f0 - 0x40395c
int64_t function_4038f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x4038f7
    int128_t v2 = __asm_movdqa(g40); // 0x4038ff
    int128_t v3 = __asm_movdqa(g41); // 0x403907
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403929
    if (a2 == 0 || a3 == 0) {
        // 0x403957
        abort();
        // UNREACHABLE
    }
    // 0x40393a
    return function_4031b0(a1, a4, a5, &v4);
}
// Address range: 0x403960 - 0x403969
int64_t function_403960(void) {
    // 0x403960
    int64_t v1; // 0x403960
    return function_4038f0(v1, v1, v1, v1, -1);
}
// Address range: 0x403970 - 0x403987
int64_t function_403970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403970
    return function_4038f0(0, a1, a2, a3, -1);
}
// Address range: 0x403990 - 0x4039a3
int64_t function_403990(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403990
    return function_4038f0(0, a1, a2, a3, a4);
}
// Address range: 0x4039b0 - 0x4039ba
int64_t function_4039b0(void) {
    // 0x4039b0
    int64_t v1; // 0x4039b0
    return function_4031b0(v1, v1, v1, &g20);
}
// Address range: 0x4039c0 - 0x4039d2
int64_t function_4039c0(int64_t a1, int64_t a2) {
    // 0x4039c0
    return function_4031b0(0, a1, a2, &g20);
}
// Address range: 0x4039e0 - 0x4039f1
int64_t function_4039e0(void) {
    // 0x4039e0
    int64_t v1; // 0x4039e0
    return function_4031b0(v1, v1, -1, &g20);
}
// Address range: 0x403a00 - 0x403a16
int64_t function_403a00(int64_t a1) {
    // 0x403a00
    return function_4031b0(0, a1, -1, &g20);
}
// Address range: 0x403a20 - 0x403dfd
int64_t function_403a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403ab8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403a3c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403a56
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403a9b
    if (a6 < 10) {
        // 0x403aaa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403ba2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403e00 - 0x403e20
int64_t function_403e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403e00
    if (a5 == 0) {
        // 0x403e1b
        return function_403a20(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403e07
    v1++;
    int64_t v2 = v1; // 0x403e19
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403e10
        v1++;
        v2 = v1;
    }
    // 0x403e1b
    return function_403a20(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403e20 - 0x403e80
int64_t function_403e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403e20
    int64_t v3 = &v2; // 0x403e20
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403e53
    int64_t v6; // 0x403e3d
    int64_t * v7; // 0x403e5b
    int64_t v8; // 0x403e5b
    int64_t v9; // 0x403e67
    if (v5 < 48) {
        // 0x403e30
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403e73
            break;
        }
    } else {
        // 0x403e5b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403e73
            break;
        }
    }
    int64_t v10 = 10; // 0x403e51
    while (v4 != 9) {
        // 0x403e49
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403e30
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403e73
                break;
            }
        } else {
            // 0x403e5b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403e73
                break;
            }
        }
        // 0x403e49
        v10 = 10;
    }
    // 0x403e73
    return function_403a20(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x403e80 - 0x403f3c
int64_t function_403e80(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x403e80
    int64_t v1; // bp-168, 0x403e80
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403e80
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403e80
    int64_t v8; // 0x403e80
    int64_t v9; // bp-56, 0x403e80
    int64_t v10; // 0x403ee5
    int64_t v11; // 0x403f09
    if ((int32_t)v6 < 48) {
        // 0x403ed0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403f20
            break;
        }
    } else {
        // 0x403f02
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403f20
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403efa
    int64_t v13 = 10; // 0x403efa
    while (v5 != 9) {
        // 0x403efc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403ed0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403f20
                break;
            }
        } else {
            // 0x403f02
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403f20
                break;
            }
        }
        // 0x403ef2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403f20
    int64_t v14; // bp-136, 0x403e80
    int64_t result = function_403a20(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x403f2f
    return result;
}
// Address range: 0x403f40 - 0x403fb4
int64_t function_403f40(int64_t a1) {
    // 0x403f40
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x403fa3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x403fc0 - 0x403fda
int64_t function_403fc0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403fc4
    if (size != 0 != (mem == NULL)) {
        // 0x403fd3
        return (int64_t)mem;
    }
    // 0x403fd5
    function_404210(size);
    // UNREACHABLE
}
// Address range: 0x403fe0 - 0x404001
int64_t function_403fe0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403fe3
    int64_t v2 = v1; // 0x403fe3
    if (v2 < 0) {
        // 0x403ffb
        function_404210(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x403ff9
        return function_403fc0(v2);
    }
    // 0x403ffb
    function_404210(v2);
    // UNREACHABLE
}
// Address range: 0x404010 - 0x404012
int64_t function_404010(void) {
    // 0x404010
    int64_t v1; // 0x404010
    return function_403fc0(v1);
}
// Address range: 0x404020 - 0x404056
int64_t function_404020(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404048
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404031
    if (a2 != 0 != (mem == NULL)) {
        // 0x404040
        return (int64_t)mem;
    }
    // 0x404051
    function_404210(a1);
    // UNREACHABLE
}
// Address range: 0x404060 - 0x404081
int64_t function_404060(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404063
    int64_t v2 = v1; // 0x404063
    if (v2 < 0) {
        // 0x40407b
        function_404210(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404079
        return function_404020(a1, v2);
    }
    // 0x40407b
    function_404210(a1);
    // UNREACHABLE
}
// Address range: 0x404090 - 0x404116
int64_t function_404090(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4040eb
            function_404210(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404020(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4040d3
    if (a2 == 0) {
        // 0x4040f8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4040d8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4040eb
        function_404210(a1);
        // UNREACHABLE
    }
    // 0x4040ba
    *(int64_t *)a2 = v2;
    return function_404020(a1, v2 * a3);
}
// Address range: 0x404120 - 0x404170
int64_t function_404120(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404120
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40416a
            function_404210(a1);
            // UNREACHABLE
        }
        // 0x404142
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404020(a1, v1);
    }
    if (a2 == 0) {
        // 0x404155
        *(int64_t *)a2 = 128;
        return function_404020(0, 128);
    }
    // 0x404168
    if (a2 < 0) {
        // 0x40416a
        function_404210(a1);
        // UNREACHABLE
    }
    // 0x404142
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404020(a1, v1);
}
// Address range: 0x404170 - 0x404187
int64_t function_404170(int64_t a1, int64_t a2) {
    // 0x404170
    return (int64_t)memset((int64_t *)function_403fc0(a1), 0, (int32_t)a1);
}
// Address range: 0x404190 - 0x4041be
int64_t function_404190(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404197
    if ((int64_t)v1 < 0) {
        // 0x4041b9
        function_404210(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4041b9
        function_404210(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4041aa
    if (mem != NULL) {
        // 0x4041b4
        return (int64_t)mem;
    }
    // 0x4041b9
    function_404210(nmemb);
    // UNREACHABLE
}
// Address range: 0x4041c0 - 0x4041e8
int64_t function_4041c0(int64_t a1, int64_t a2) {
    int64_t v1 = function_403fc0(a2); // 0x4041cf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4041f0 - 0x404203
int64_t function_4041f0(int64_t str) {
    // 0x4041f0
    return function_4041c0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404210 - 0x404241
int64_t function_404210(int64_t a1) {
    // 0x404210
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404250 - 0x40432f
int64_t function_404250(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40425c
    uint32_t v2 = *v1; // 0x40425c
    int64_t v3 = a2 & 0xffffffff; // 0x404261
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404264
    uint64_t v5 = (int64_t)*v4; // 0x404264
    int64_t v6; // 0x4042d2
    if (v3 <= v5) {
      lab_0x4042cc_2:
        // 0x4042cc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404252
    int64_t v8 = v2; // 0x404250
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4042cc
        goto lab_0x4042cc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404288
    int64_t v17; // 0x404296
    int64_t * v18; // 0x4042b0
    int64_t * v19; // 0x4042b3
    int64_t v20; // 0x4042be
    int64_t v21; // 0x404296
    while ((v16 & 0xffffffff) > v10) {
        // 0x404293
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4042b0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4042c7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4042cc
            goto lab_0x4042cc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4042cc
            goto lab_0x4042cc_2;
        }
        // 0x404282
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40430b
    int64_t * v23 = (int64_t *)v22; // 0x404310
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404313
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404310
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404327
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40427d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4042cc
            goto lab_0x4042cc_2;
        }
        // 0x404282
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404293
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4042b0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4042c7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4042cc
                goto lab_0x4042cc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4042cc
                goto lab_0x4042cc_2;
            }
            // 0x404282
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4042f0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404310
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404327
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4042cc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404330 - 0x40494c
int64_t function_404330(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40434f
    int64_t v2 = *v1; // 0x40434f
    char * str2 = (char *)v2; // 0x40435c
    char c = *str2; // 0x40435c
    int64_t v3 = v2; // 0x404388
    int64_t v4 = 0; // 0x404330
    int32_t v5; // 0x404330
    int64_t v6; // 0x404330
    int64_t v7; // 0x404330
    int64_t v8; // 0x404330
    int64_t v9; // 0x404330
    int64_t v10; // 0x404330
    int64_t v11; // 0x404330
    int64_t v12; // 0x404330
    int64_t v13; // 0x404330
    int64_t str3; // 0x404330
    int64_t v14; // 0x404330
    int64_t v15; // 0x404330
    int64_t v16; // 0x404330
    int64_t v17; // 0x404330
    int32_t v18; // 0x404330
    int32_t v19; // 0x404330
    int32_t v20; // 0x404330
    int32_t v21; // 0x404330
    int32_t v22; // 0x404330
    int32_t v23; // 0x404330
    int32_t v24; // 0x404330
    int32_t v25; // 0x404330
    int32_t v26; // 0x404330
    int32_t v27; // 0x404330
    int32_t v28; // 0x404330
    int32_t v29; // 0x404330
    int64_t nmemb; // 0x404330
    int64_t v30; // 0x404330
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40438c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404388
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404398
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40439e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404368
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4043cc
                int64_t v34; // 0x404330
                int64_t v35; // 0x404330
                if (strncmp(str, str2, n) == 0) {
                    // 0x4043d5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404550;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4043e6
                int64_t v37 = *(int64_t *)v36; // 0x4043ea
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4043c0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4043d5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404550;
                        }
                    }
                    // 0x4043e6
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
                  lab_0x404436:
                    // 0x404436
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
                        goto lab_0x404490;
                    } else {
                        if (v11 == 0) {
                            // 0x404600
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404490;
                        } else {
                            if (v39 == 0) {
                                // 0x4045b0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40445a;
                                } else {
                                    // 0x4045bc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40445a;
                                    } else {
                                        // 0x4045ca
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40445a;
                                        } else {
                                            goto lab_0x404490;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40445a;
                            }
                        }
                    }
                }
              lab_0x4044a1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404676
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404822
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404842
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40488f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x4048a9
                            int64_t v45; // 0x4048ab
                            if (*(char *)v42 != 0) {
                                // 0x4048ab
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4048a3
                            while (v17 + nmemb != v42) {
                                // 0x4048a5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4048ab
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x404898
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4048d0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404684
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4047df
                        free((int64_t *)v17);
                    }
                    // 0x4046d9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4046f0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40459e
                    return 63;
                }
                // 0x4044c0
                v5 = v39;
                if (v13 != 0) {
                    // 0x404544
                    v35 = v13;
                    v34 = v25;
                  lab_0x404550:;
                    int32_t * v49 = (int32_t *)a7; // 0x404560
                    uint32_t v50 = *v49; // 0x404560
                    int64_t v51 = v50; // 0x404560
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40456a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404573
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40479f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40474a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40459e
                            return 63;
                        }
                        // 0x4045e8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4048ff
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4047fd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404810
                                // 0x40459e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40470e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404722
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40458b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40458e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404592
                    int64_t result = v59; // 0x404598
                    if (v58 != 0) {
                        // 0x40459a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40459e
                    return result;
                }
            } else {
                // 0x40439e
                v5 = v32;
            }
            // break -> 0x4044c5
            break;
        }
    }
    // 0x4044c5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4044dd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4044e7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40459e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404629
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404516
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404526
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404490:
    // 0x404490
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404490
    int64_t v63 = *(int64_t *)v62; // 0x404494
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4044a1
        goto lab_0x4044a1;
    }
    goto lab_0x404436;
  lab_0x40445a:
    // 0x40445a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404330
    int32_t v65; // 0x404330
    int32_t v66; // 0x404330
    if (v27 != 0) {
        goto lab_0x404490;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404610
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404490;
            } else {
                goto lab_0x404481;
            }
        } else {
            // 0x404475
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40476c
                int64_t v67 = (int64_t)mem; // 0x40476c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404490;
                } else {
                    // 0x40477f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404481;
                }
            } else {
                goto lab_0x404481;
            }
        }
    }
  lab_0x404481:
    // 0x404481
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404490;
}
// Address range: 0x404950 - 0x404f16
int64_t function_404950(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404971
    if (v3 < 1) {
        // 0x404b2e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40496d
    int32_t v5 = *(int32_t *)a7; // 0x404979
    uint64_t v6 = a1 & 0xffffffff; // 0x40497b
    int64_t v7 = v2; // 0x404980
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404983
    *v8 = 0;
    int64_t v9; // 0x404950
    int64_t v10; // 0x404950
    int64_t v11; // 0x404950
    int64_t v12; // 0x404950
    int64_t str; // 0x404950
    int64_t v13; // 0x404950
    int64_t v14; // 0x404950
    int64_t v15; // 0x404950
    int64_t v16; // 0x404950
    int64_t v17; // 0x404950
    int32_t v18; // 0x404950
    char v19; // 0x404950
    if (v5 == 0) {
        // 0x404b68
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40499a;
    } else {
        // 0x404993
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4049e0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4049e3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404aa8;
            } else {
                int64_t v22 = v7 + 1; // 0x4049f6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404a06
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404abc;
                } else {
                    goto lab_0x404a18;
                }
            }
        } else {
            goto lab_0x40499a;
        }
    }
  lab_0x40499a:
    // 0x40499a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4049a0
    *v24 = 0;
    int64_t v25; // 0x404950
    int64_t v26; // 0x404950
    int64_t v27; // 0x404950
    switch (*(char *)&v2) {
        case 45: {
            // 0x404a90
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404a9d;
        }
        case 43: {
            // 0x404da0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404a9d;
        }
        default: {
            // 0x4049bc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404d1f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404e38
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404a9d;
                } else {
                    // 0x404d2d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4049ca;
                }
            } else {
                goto lab_0x4049ca;
            }
        }
    }
  lab_0x404aa8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404aaf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404a18;
    } else {
        goto lab_0x404abc;
    }
  lab_0x4049ca:
    // 0x4049ca
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404a9d;
  lab_0x404a9d:
    // 0x404a9d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404aa8;
  lab_0x404a18:;
    uint32_t v30 = *(int32_t *)a7; // 0x404a18
    int64_t v31 = v30; // 0x404a18
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404a1a
    if ((int64_t)*v32 > v31) {
        // 0x404a1f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404a22
    if (*v33 > v30) {
        // 0x404a27
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404a2a
    int64_t v35 = v31; // 0x404a2e
    int64_t v36 = v15; // 0x404a2e
    int64_t v37; // 0x404950
    int64_t v38; // 0x404950
    int64_t v39; // 0x404950
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404b98
        int64_t v41 = v40; // 0x404b98
        v2 = v41;
        int64_t v42; // 0x404950
        if (*v33 == v40) {
            // 0x404d80
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404d88
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404ba4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404ba8
                function_404250(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404bb8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404bc1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404bca
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404be1
            int64_t v47 = v45 & 0xffffffff; // 0x404be5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404bee
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404bf4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404bf6;
                }
            }
            int64_t v48 = v47 + 1; // 0x404bd0
            int64_t v49 = v48 & 0xffffffff; // 0x404bd0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404be1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404bee
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404bf4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404bf6;
                    }
                }
                // 0x404bd0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404d98
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404bf6;
    } else {
        goto lab_0x404a34;
    }
  lab_0x404abc:
    // 0x404abc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404abf
    int64_t v51 = v12; // 0x404abf
    int64_t v52 = v14; // 0x404abf
    if (*(char *)v10 == 0) {
        goto lab_0x404a18;
    } else {
        goto lab_0x404ac5;
    }
  lab_0x404a34:;
    int32_t v53 = v35; // 0x404a34
    int64_t v54; // 0x404950
    int64_t v55; // 0x404950
    int64_t v56; // 0x404950
    int64_t v57; // 0x404950
    int64_t v58; // 0x404950
    int64_t v59; // 0x404950
    char * v60; // 0x404950
    int64_t v61; // 0x404950
    int64_t v62; // 0x404a49
    int64_t v63; // 0x404950
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404b83
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404b86;
    } else {
        // 0x404a3c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404950
        int64_t v66 = v65 ? -1 : 1; // 0x404a50
        int64_t v67 = (int64_t)"--"; // 0x404950
        int64_t v68 = v62; // 0x404950
        int64_t v69 = 3; // 0x404a50
        unsigned char v70 = *(char *)v68; // 0x404a50
        char v71 = *(char *)v67; // 0x404a50
        char v72 = v71; // 0x404a50
        bool v73 = false; // 0x404a50
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
            // 0x404b40
            if (*(char *)v62 == 45) {
                // 0x404c00
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404c00
                if (c == 0) {
                    goto lab_0x404b4a;
                } else {
                    // 0x404c0d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404c90;
                    } else {
                        if (c == 45) {
                            // 0x404e73
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404ce5;
                        } else {
                            // 0x404c1e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404c90;
                            } else {
                                // 0x404c23
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404c44;
                                } else {
                                    // 0x404c2a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404c90;
                                    } else {
                                        goto lab_0x404c44;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404b4a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404a60
            v2 = v75;
            int32_t v76 = *v32; // 0x404a63
            int64_t v77 = v35 + 1; // 0x404a66
            int32_t v78 = v77; // 0x404a69
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404dd0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404a77
                    function_404250(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404a85
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404b86;
        }
    }
  lab_0x404ac5:;
    // 0x404ac5
    int64_t v79; // bp-104, 0x404950
    int64_t v80 = &v79; // 0x40495a
    int64_t v81 = v50 + 1; // 0x404ac5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404acc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404ad1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404ad5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404ad9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404ae1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404ae6
    int32_t c2 = v84; // 0x404ae6
    char * found_char_pos = strchr(str2, c2); // 0x404ae6
    int64_t v87 = *v82; // 0x404aeb
    v2 = v87;
    int64_t v88 = *v85; // 0x404af5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404b00
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404df0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404dbd
        *(int32_t *)(v1 + 8) = c2;
        // 0x404b2e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404ae6
    char v91 = *(char *)(v90 + 1); // 0x404b1b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404ad5
        if (v91 != 58) {
            // 0x404b2e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404d44
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404e48
                *v8 = 0;
            } else {
                // 0x404e2c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404d6e
            *v83 = 0;
            // 0x404b2e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404d4e
        if (v93 != 0) {
            // 0x404de0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404d6e
            *v83 = 0;
            // 0x404b2e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404d61
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404d6e
            *v83 = 0;
            // 0x404b2e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404eaa
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404e5a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404e61
        // 0x404d6e
        *v83 = 0;
        // 0x404b2e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404cb9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404cbb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404ee0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404e91
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404e98
            // 0x404b2e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404cc6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404cca
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404ce5;
  lab_0x404bf6:
    // 0x404bf6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404a34;
  lab_0x404ce5:;
    int64_t v99 = function_404330(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404d03
    // 0x404b2e
    return v99 & 0xffffffff;
  lab_0x404b86:;
    int32_t v100 = v55; // 0x404b86
    if (v100 != (int32_t)v59) {
        // 0x404b8a
        *(int32_t *)a7 = v100;
    }
    // 0x404b2e
    return 0xffffffff;
  lab_0x404b4a:
    // 0x404b4a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404b51
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404b2e
    return v99 & 0xffffffff;
  lab_0x404c90:
    // 0x404c90
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404ac5;
  lab_0x404c44:
    // 0x404c44
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404330(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x404c6a
    if ((int32_t)v101 != -1) {
        // 0x404b2e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404c7f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404c90;
}
// Address range: 0x404f20 - 0x404f76
int64_t function_404f20(int64_t a1) {
    // 0x404f20
    *(int32_t *)&g42 = g27;
    *(int32_t *)&g43 = g26;
    int64_t v1; // 0x404f20
    int64_t result = function_404950(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x404f46
    g27 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g25 = g44;
    return result;
}
// Address range: 0x404f80 - 0x404f98
int64_t function_404f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404f80
    return function_404f20(1);
}
// Address range: 0x404fa0 - 0x404fb3
int64_t function_404fa0(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x404fa0
    return function_404f20(0);
}
// Address range: 0x404fc0 - 0x404fd5
int64_t function_404fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404fc0
    return function_404950(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x404fe0 - 0x404ff6
int64_t function_404fe0(void) {
    // 0x404fe0
    return function_404f20(0);
}
// Address range: 0x405000 - 0x405018
int64_t function_405000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405000
    return function_404950(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405020 - 0x40509a
int64_t function_405020(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40502b
    int64_t v2 = (int64_t)&g11; // 0x40502b
    int32_t * pwc; // 0x405020
    int64_t v3; // 0x405020
    int64_t n; // 0x405020
    if (a2 == 0) {
        goto lab_0x405072;
    } else {
        // 0x40502d
        if (a3 == 0) {
            // 0x405058
            return -2;
        }
        // 0x405039
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405072;
        } else {
            goto lab_0x405044;
        }
    }
  lab_0x405072:
    // 0x405072
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405020
    pwc = (int32_t *)&v4;
    goto lab_0x405044;
  lab_0x405044:;
    char * wstr = (char *)v3; // 0x40504a
    int64_t ps; // 0x405020
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40504a
    int64_t result = v5; // 0x40504a
    if (v5 < 0xfffffffe) {
        // 0x405058
        return result;
    }
    int64_t result2 = result; // 0x405089
    if ((char)function_405100(0, v3) == 0) {
        // 0x40508b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405058
    return result2;
}
// Address range: 0x4050a0 - 0x4050fd
int64_t function_4050a0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4050a7
    int64_t v2; // 0x4050a0
    int64_t result = function_4056d0(a1, v2); // 0x4050b8
    if ((v2 & 32) != 0) {
        // 0x4050e0
        if ((int32_t)result == 0) {
            // 0x4050e4
            *__errno_location() = 0;
        }
        // 0x4050da
        return 0xffffffff;
    }
    // 0x4050c1
    if ((int32_t)result == 0) {
        // 0x4050da
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4050c8
    if (v1 == 0) {
        // 0x4050ca
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4050da
    return result2;
}
// Address range: 0x405100 - 0x40515e
int64_t function_405100(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405106
    if (locale == NULL) {
        // 0x405133
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405106
    bool v2; // 0x405100
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x405100
    int64_t v5 = v1; // 0x405100
    int64_t v6 = 2; // 0x405125
    unsigned char v7 = *(char *)v5; // 0x405125
    char v8 = *(char *)v4; // 0x405125
    char v9 = v8; // 0x405125
    bool v10 = false; // 0x405125
    while (v7 == v8) {
        // 0x405118
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405131
    int64_t v13 = v1; // 0x405131
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405133
        return 0;
    }
    int64_t v14 = 6; // 0x405131
    unsigned char v15 = *(char *)v13; // 0x40514d
    char v16 = *(char *)v12; // 0x40514d
    char v17 = v16; // 0x40514d
    bool v18 = false; // 0x40514d
    while (v15 == v16) {
        // 0x405140
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
// Address range: 0x405160 - 0x4056c2
int64_t function_405160(void) {
    char * v1 = nl_langinfo(14); // 0x405176
    char * v2 = g46; // 0x40517b
    char * v3; // 0x405160
    int64_t v4; // 0x405160
    int64_t v5; // 0x405160
    int64_t v6; // 0x405160
    int64_t v7; // 0x405160
    int32_t size; // 0x405160
    int32_t size2; // 0x405160
    int32_t len; // 0x405232
    int64_t v8; // 0x405232
    char * env_val; // 0x40521d
    if (v2 == NULL) {
        // 0x405218
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405285;
        } else {
            // 0x40522a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405285;
            } else {
                // 0x40522f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40521d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4056b5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405285;
                    } else {
                        // 0x405629
                        size2 = len + 14;
                        goto lab_0x40524b;
                    }
                } else {
                    goto lab_0x40524b;
                }
            }
        }
    } else {
        // 0x405160
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40519a;
    }
  lab_0x4054cc:;
    // 0x4054cc
    struct _IO_FILE * stream; // 0x40530b
    int32_t v10 = __uflow(stream); // 0x4054cf
    int64_t v11; // 0x405160
    int64_t v12 = v11; // 0x4054d9
    int64_t v13; // 0x405160
    int64_t v14 = v13; // 0x4054d9
    int32_t v15 = v10; // 0x4054d9
    int64_t v16; // 0x405160
    int64_t v17 = v16; // 0x4054d9
    int64_t v18 = v11; // 0x4054d9
    int64_t v19 = v13; // 0x4054d9
    int64_t v20 = v16; // 0x4054d9
    if (v10 == -1) {
        // break -> 0x4054df
        goto lab_0x4054df;
    }
    goto lab_0x405359;
  lab_0x40534e:;
    // 0x40534e
    int64_t v90; // 0x405160
    int64_t * v32; // 0x405340
    *v32 = v90 + 1;
    int64_t v89; // 0x405160
    v12 = v89;
    int64_t v91; // 0x405160
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405160
    v17 = v92;
    goto lab_0x405359;
  lab_0x405359:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405160
    int32_t v25; // bp-120, 0x405160
    int32_t v26; // bp-184, 0x405160
    int64_t v27; // 0x40530b
    int64_t v28; // 0x405328
    int64_t v29; // 0x40532d
    int64_t * v30; // 0x405344
    switch (c) {
        case 32: {
            goto lab_0x405340;
        }
        case 10: {
            goto lab_0x405340;
        }
        case 9: {
            goto lab_0x405340;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405531
            int32_t v33; // 0x405160
            char v34; // 0x405160
            int32_t v35; // 0x40553e
            if (v31 < *v30) {
                // 0x405510
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40553b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405531
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405510
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40553b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405520
                v36 = v33;
            }
            // 0x40560f
            if (v36 == -1) {
                // break -> 0x4054df
                break;
            }
            goto lab_0x405340;
        }
        default: {
            // 0x40536f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4054df
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405398
            int64_t v39 = v37 + 4; // 0x40539a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4053a6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4053a8
            while (v41 == 0) {
                // 0x405398
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4053c6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4053d2
            int64_t v45 = v43 + 4; // 0x4053d4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4053e0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4053e2
            while (v47 == 0) {
                // 0x4053d2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4053cf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4053f8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405408
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40540c
            int64_t v52 = v51 + v48; // 0x405415
            int64_t * mem; // 0x405160
            int64_t v53; // 0x405160
            int64_t v54; // 0x405160
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40554b
                int64_t v56 = v55 + 3; // 0x405557
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405431
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405440
            if (mem == NULL) {
                // 0x40566c
                free((int64_t *)v21);
                function_4056d0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x4052e4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405458
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405462
            uint32_t v62 = (int32_t)v59; // 0x405465
            int64_t v63; // 0x405160
            if (v62 >= 8) {
                // 0x405574
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40558e
                int64_t v66 = v61 - v65; // 0x405592
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40559d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4055ae
                    int64_t v70 = v69 & 0xffffffff; // 0x4055ae
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4055ab
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40563f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405477
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40547b
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
            int64_t v73 = v51 + 1; // 0x40548b
            int64_t v74 = v60 - 1; // 0x40548f
            uint32_t v75 = (int32_t)v73; // 0x405494
            int64_t v76; // 0x405160
            if (v75 >= 8) {
                // 0x4055c2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4055cc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4055dc
                int64_t v80 = v74 - v79; // 0x4055e0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4055eb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4055fb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4055f9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405656
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40565e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4054a6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4054aa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4056a3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4054be
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40534e;
            } else {
                goto lab_0x4054cc;
            }
        }
    }
  lab_0x405340:;
    int64_t v93 = v23; // 0x405160
    int64_t v94 = v22; // 0x405160
    int64_t v95 = v21; // 0x405160
    goto lab_0x405340_2;
  lab_0x405285:;
    int64_t * mem3 = malloc(size); // 0x405285
    int64_t v97 = (int64_t)&g11; // 0x405290
    int64_t v98; // 0x405160
    int64_t path; // 0x405160
    if (mem3 == NULL) {
        goto lab_0x405262;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405285
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4052a6;
    }
  lab_0x40519a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40518d
    char v100 = *v3; // 0x40519a
    int64_t v101; // 0x405160
    if (v100 == 0) {
        // 0x4051f4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405160
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405160
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4051e0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4051e7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4051b0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4051bd
        char v107 = *(char *)v106; // 0x4051c2
        v102 = v107;
        if (v107 == 0) {
            // 0x4051f4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4051cb
    v104 = v103 + 1;
  lab_0x4051e7:
    // 0x4051f4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405262:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40519a;
  lab_0x4052a6:;
    int64_t v109 = v98 + path; // 0x4052a6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4052d2
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x405301
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405632
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x405325
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405340_2:;
                uint64_t v96 = *v32; // 0x405340
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4054cc;
                } else {
                    goto lab_0x40534e;
                }
            }
          lab_0x4054df:
            // 0x4054df
            function_4056d0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x4054fe
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4052e4;
  lab_0x40524b:;
    int64_t * mem4 = malloc(size2); // 0x40524b
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x4052f1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4052a6;
    } else {
        goto lab_0x405262;
    }
  lab_0x4052e4:
    // 0x4052e4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405262;
}
// Address range: 0x4056d0 - 0x40574b
int64_t function_4056d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4056d7
    if (fileno(stream) < 0) {
        // 0x405737
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4056ea
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40571b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405737
            return fclose(stream);
        }
    }
    // 0x4056ec
    if ((int32_t)function_405750(a1, v1) == 0) {
        // 0x405737
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4056f8
    int32_t v3 = *v2; // 0x405700
    int64_t result = fclose(stream); // 0x40570e
    if (v3 != 0) {
        // 0x405740
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405710
    return result;
}
// Address range: 0x405750 - 0x405790
int64_t function_405750(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40576a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40576a
        return fflush(stream);
    }
    // 0x405778
    function_405790(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405790 - 0x4057e7
int64_t function_405790(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405790
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40579a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4057cb
    int64_t result = -1; // 0x4057d4
    if (v1 != -1) {
        // 0x4057d6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4057e2
    return result;
}
// Address range: 0x4057f0 - 0x40584d
int64_t function_4057f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4057f0
    return function_401278();
}
// Address range: 0x405850 - 0x405851
int64_t function_405850(void) {
    // 0x405850
    int64_t result; // 0x405850
    return result;
}
// Address range: 0x405860 - 0x405878
int64_t function_405860(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405860
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x405878 - 0x405898
int64_t function_405878(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x405882
    while (*(int64_t *)v1 != -1) {
        // 0x405883
        v1 -= 8;
    }
    // 0x405894
    return result;
}
