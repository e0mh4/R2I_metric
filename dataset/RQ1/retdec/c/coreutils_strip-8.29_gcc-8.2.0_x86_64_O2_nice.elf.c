// Address range: 0x4016d0 - 0x4016d5
int64_t function_4016d0(void) {
    // 0x4016d0
    abort();
    // UNREACHABLE
}
// Address range: 0x4016d5 - 0x4016da
int64_t function_4016d5(void) {
    // 0x4016d5
    abort();
    // UNREACHABLE
}
// Address range: 0x4016da - 0x4016df
int64_t function_4016da(void) {
    // 0x4016da
    abort();
    // UNREACHABLE
}
// Address range: 0x4016df - 0x4016e4
int64_t function_4016df(void) {
    // 0x4016df
    abort();
    // UNREACHABLE
}
// Address range: 0x4016e4 - 0x4016e9
int64_t function_4016e4(void) {
    // 0x4016e4
    abort();
    // UNREACHABLE
}
// Address range: 0x4016e9 - 0x4016ee
int64_t function_4016e9(void) {
    // 0x4016e9
    abort();
    // UNREACHABLE
}
// Address range: 0x4016f0 - 0x401a7f
int64_t function_4016f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * exec_argv[1]; // 0x4019a8
    int64_t v1 = a1 & 0xffffffff; // 0x4016f8
    function_401f80(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g18 = 125;
    function_406150(0x401ee0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    uint32_t v2 = (int32_t)a1; // 0x40174b
    int64_t v3 = 1; // 0x40174b
    int64_t v4; // 0x4016f0
    int64_t v5; // 0x4016f0
    int64_t v6; // 0x4016f0
    int64_t v7; // 0x4016f0
    int64_t v8; // 0x4016f0
    int64_t v9; // 0x4016f0
    int64_t v10; // 0x4016f0
    int64_t v11; // 0x4016f0
    int64_t v12; // 0x4016f0
    int64_t v13; // 0x4016f0
    if (v2 >= 2) {
        // 0x401754
        v7 = 1;
        v10 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale";
        v4 = 0;
        while (true) {
          lab_0x401754:
            // 0x401754
            v5 = v4;
            v8 = v7;
            v13 = (0x100000000 * v8 >> 29) + a2;
            int64_t v14 = *(int64_t *)v13; // 0x40175f
            v12 = v10;
            if (*(char *)v14 != 45) {
                goto lab_0x4017a0;
            } else {
                int64_t v15 = v14 + 1; // 0x401769
                unsigned char v16 = *(char *)v15; // 0x401769
                int64_t v17 = v16; // 0x401769
                char v18 = *(char *)(((v16 - 43 & -3) == 0 ? 2 : 1) + v14); // 0x401782
                v12 = v17;
                if (v18 == 57 || (int32_t)v18 < 57) {
                    // 0x40178e
                    v9 = v8 + 1 & 0xffffffff;
                    v11 = v17;
                    v6 = v15;
                    goto lab_0x401795;
                } else {
                    goto lab_0x4017a0;
                }
            }
        }
      lab_0x401a14:
        // 0x401a14
        function_401b60(0);
        // UNREACHABLE
    }
    goto lab_0x4018e5;
  lab_0x4017f3_2:;
    // 0x4017f3
    int64_t v33; // 0x4016f0
    v3 = v33;
    int64_t v34; // 0x4016f0
    int64_t v20; // 0x4016f0
    int64_t v19; // 0x4016f0
    int64_t v32; // 0x401a01
    if (v34 == 0) {
        goto lab_0x4018e5;
    } else {
        // 0x4017fc
        int64_t v35; // bp-48, 0x4016f0
        int64_t v36 = function_4043f0(v34, 0, 10, &v35, (int64_t *)&g10); // 0x401811
        if ((int32_t)v36 < 2) {
            int64_t v37 = v35; // 0x40181f
            v32 = 0xffffffd9;
            if (v37 > -40) {
                int64_t v38 = v37 - 39; // 0x4019f8
                v32 = v38 == 0 | v38 < 0 != (38 - v37 & v37) < 0 ? v37 : 39;
                goto lab_0x401834;
            } else {
                goto lab_0x401834;
            }
        } else {
            int64_t v39 = function_403ba0(v34); // 0x401a47
            error(125, (int32_t)"invalid adjustment %s" ^ (int32_t)"invalid adjustment %s", dcgettext(NULL, "invalid adjustment %s", 5));
            v19 = v39;
            v20 = 10;
            goto lab_0x40183c;
        }
    }
  lab_0x4017a0:;
    int64_t v40 = v13 - 8; // 0x4017a4
    *(int64_t *)v40 = v12;
    *(int32_t *)0x60925c = 0;
    int64_t v41 = function_405890((int32_t)(a1 + 1 - v8), v40, "+n:", &g2, 0, a6); // 0x4017ca
    uint32_t v42 = (int32_t)v41; // 0x4017d9
    if (v42 == -130) {
        // break -> 0x401a14
        goto lab_0x401a14;
    }
    int64_t v29 = v41; // 0x4017e4
    if (v42 <= 0xffffff7e) {
        goto lab_0x401890;
    }
    int64_t v43 = (int32_t)v8 - 1 + g26; // 0x4017d5
    v33 = v43;
    v34 = v5;
    if (v42 == -1) {
        goto lab_0x4017f3_2;
    }
    if (v42 != 110) {
        // 0x401a3a
        function_401b60(125);
        // UNREACHABLE
    }
    // 0x4018d9
    v9 = v43;
    v11 = v40;
    v6 = g45;
    goto lab_0x401795;
  lab_0x401795:
    // 0x401795
    v7 = v9;
    v10 = v11;
    v4 = v6;
    v33 = v9;
    v34 = v6;
    if (v9 >= v1) {
        goto lab_0x4017f3_2;
    }
    goto lab_0x401754;
  lab_0x4018e5:;
    int32_t * err_num = __errno_location(); // 0x4018e5
    v19 = v3;
    v20 = 10;
    int64_t v21; // 0x4016f0
    int64_t v22; // 0x4016f0
    int64_t v23; // 0x4016f0
    int64_t v24; // 0x4016f0
    if ((int32_t)v3 != v2) {
        goto lab_0x40183c;
    } else {
        // 0x4018f5
        *err_num = 0;
        uint32_t v25 = getpriority(PRIO_PROCESS, 0); // 0x401901
        if (v25 != -1 || *err_num == 0) {
            // 0x4019e1
            __printf_chk(1, "%d\n", (int64_t)v25);
            // 0x4019d4
            return 0;
        }
        // 0x40191a
        error(125, *err_num, dcgettext(NULL, "cannot get niceness", 5));
        v22 = &g49;
        v24 = v3;
        v23 = v1;
        v21 = (int64_t)err_num;
        goto lab_0x40193e;
    }
  lab_0x40183c:;
    int32_t * err_num2 = __errno_location(); // 0x40183c
    int64_t v26 = (int64_t)err_num2; // 0x40183c
    *err_num2 = 0;
    int32_t v27 = getpriority(PRIO_PROCESS, 0); // 0x40184e
    int64_t v28 = v27; // 0x40184e
    v22 = v28;
    v24 = v19;
    v23 = v26;
    v21 = v20;
    if (v27 == -1) {
        // 0x40185c
        v22 = v28;
        v24 = v19;
        v23 = v26;
        v21 = v20;
        if (*err_num2 != 0) {
            // 0x401866
            error(125, *err_num2, dcgettext(NULL, "cannot get niceness", 5));
            v29 = &g49;
          lab_0x401890:
            // 0x401890
            if ((int32_t)v29 != -131) {
              lab_0x401a3a:
                // 0x401a3a
                function_401b60(125);
                // UNREACHABLE
            }
            // 0x40189b
            function_404020((int64_t)g28, "nice", "GNU coreutils", (int64_t)g17, "David MacKenzie", 0);
            exit(0);
            // UNREACHABLE
        }
    }
    goto lab_0x40193e;
  lab_0x40193e:;
    // 0x40193e
    int32_t * err_num4; // 0x4016f0
    if (setpriority(PRIO_PROCESS, 0, (int32_t)(v21 + v22)) == 0) {
        // 0x40193e
        err_num4 = (int32_t *)v23;
    } else {
        char * format = dcgettext(NULL, "cannot set niceness", 5); // 0x40195b
        int32_t * v30 = (int32_t *)v23;
        int32_t err_num3 = *v30; // 0x401960
        int32_t status = 125; // 0x4016f0
        switch (err_num3) {
            case 13: {
            }
            case 1: {
                // 0x401a0d
                status = 0;
                // break -> 0x40197a
                break;
            }
        }
        // 0x40197a
        error(status, err_num3, format);
        err_num4 = v30;
        if ((*(char *)g30 & 32) != 0) {
            // 0x4019d4
            return 125;
        }
    }
    int64_t v31 = (0x100000000 * v24 >> 29) + a2; // 0x40199a
    int64_t * file = (int64_t *)v31; // 0x4019a1
    exec_argv[0] = (char *)v31;
    execvp((char *)*file, exec_argv);
    error(0, *err_num4, "%s", (char *)function_403ba0(*file));
    // 0x4019d4
    return *err_num4 == 2 ? 127 : 126;
  lab_0x401834:
    // 0x401834
    v19 = v3;
    v20 = v32;
    if ((int32_t)v3 == v2) {
        // 0x401a1b
        error(0, (int32_t)"a command must be given with an adjustment" ^ (int32_t)"a command must be given with an adjustment", dcgettext(NULL, "a command must be given with an adjustment", 5));
        goto lab_0x401a3a;
    } else {
        goto lab_0x40183c;
    }
}
// Address range: 0x401a80 - 0x401aab
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401a80
    int64_t v1; // 0x401a80
    __libc_start_main(0x4016f0, (int32_t)a4, (char **)&v1, (void (*)())0x4060e0, (void (*)())0x406140, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401aab - 0x401aca
int64_t function_401aab(void) {
    // 0x401aab
    return &g27;
}
// Address range: 0x401aca - 0x401b01
int64_t function_401aca(void) {
    // 0x401aca
    return 0;
}
// Address range: 0x401b01 - 0x401b58
int64_t function_401b01(void) {
    // 0x401b01
    if (g31 != 0) {
        // 0x401b57
        int64_t result; // 0x401b01
        return result;
    }
    int64_t v1 = g32; // 0x401b34
    int64_t result2; // 0x401b46
    if (g32 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401b46
        result2 = function_401aab();
        g31 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401b36
        v1++;
    }
    // 0x401b2a
    g32 = v1;
    // 0x401b46
    result2 = function_401aab();
    g31 = 1;
    return result2;
}
// Address range: 0x401b58 - 0x401b5d
int64_t function_401b58(void) {
    // 0x401b58
    return function_401aca();
}
// Address range: 0x401b60 - 0x401ebd
int64_t function_401b60(int32_t status) {
    // 0x401b60
    if (status != 0) {
        // 0x401b7a
        __fprintf_chk(g30, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401b9f
        exit(status);
        // UNREACHABLE
    }
    // 0x401ba6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION] [COMMAND [ARG]...]\n", 5));
    __printf_chk(1, dcgettext(NULL, "Run COMMAND with an adjusted niceness, which affects process scheduling.\nWith no COMMAND, print the current niceness.  Niceness values range from\n%d (most favorable to the process) to %d (least favorable to the process).\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -n, --adjustment=N   add integer N to the niceness (default 10)\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x401c9f
    bool v2; // 0x401b60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x401d20
    int64_t v6 = *(int64_t *)v5; // 0x401d24
    int64_t v7 = 5; // 0x401d2a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"nice";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x401d36
        char v11 = *(char *)v9; // 0x401d36
        char v12 = v11; // 0x401d36
        bool v13 = false; // 0x401d36
        while (v10 == v11) {
            // 0x401d2c
            v7--;
            int64_t v14 = v9 + v3; // 0x401d36
            int64_t v15 = v8 + v3; // 0x401d36
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
            // break -> 0x401d42
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x401d42
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401e54;
        } else {
            // 0x401e3e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e93
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401da4;
            } else {
                goto lab_0x401e54;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401da4;
        } else {
            // 0x401d8a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401e93
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401da4;
            } else {
                goto lab_0x401da4;
            }
        }
    }
  lab_0x401e54:
    // 0x401e54
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401de4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b9f
    exit(status);
    // UNREACHABLE
  lab_0x401da4:
    // 0x401da4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401de4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b9f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401ec0 - 0x401ec8
int64_t function_401ec0(int64_t a1) {
    // 0x401ec0
    g34 = a1;
    int64_t result; // 0x401ec0
    return result;
}
// Address range: 0x401ed0 - 0x401ed8
int64_t function_401ed0(int64_t a1) {
    // 0x401ed0
    g33 = a1;
    int64_t result; // 0x401ed0
    return result;
}
// Address range: 0x401ee0 - 0x401f7e
int64_t function_401ee0(void) {
    // 0x401ee0
    int32_t * err_num; // 0x401ef6
    if ((int32_t)function_405990((int64_t)g28) == 0) {
        goto lab_0x401f0c;
    } else {
        // 0x401ef6
        err_num = __errno_location();
        if (g33 == 0) {
            goto lab_0x401f23;
        } else {
            // 0x401f07
            if (*err_num != 32) {
                goto lab_0x401f23;
            } else {
                goto lab_0x401f0c;
            }
        }
    }
  lab_0x401f0c:;
    int64_t result = function_405990((int64_t)g30); // 0x401f13
    if ((int32_t)result == 0) {
        // 0x401f1c
        return result;
    }
    // 0x401f5e
    _exit(g18);
    // UNREACHABLE
  lab_0x401f23:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401f2f
    if (g34 == 0) {
        // 0x401f69
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401f43
        error(0, *err_num, "%s: %s", (char *)function_4039f0((int64_t)g34), v1);
    }
    // 0x401f5e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x401f80 - 0x402019
int64_t function_401f80(int64_t str) {
    // 0x401f80
    if (str == 0) {
        // 0x401ff9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g30);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401f8e
    int64_t result = (int64_t)found_char_pos; // 0x401f8e
    if (found_char_pos == NULL) {
        // 0x401fe9
        g35 = str;
        g29 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401f98
    if (v1 - str < 7) {
        // 0x401fe9
        g35 = str;
        g29 = str;
        return result;
    }
    // 0x401fa8
    bool v2; // 0x401f80
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401f80
    int64_t v5 = result - 6; // 0x401f80
    int64_t v6 = 7; // 0x401fb6
    unsigned char v7 = *(char *)v5; // 0x401fb6
    char v8 = *(char *)v4; // 0x401fb6
    char v9 = v8; // 0x401fb6
    bool v10 = false; // 0x401fb6
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
    int64_t v12 = (int64_t)"lt-"; // 0x401fc0
    int64_t v13 = v1; // 0x401fc0
    int64_t v14 = 3; // 0x401fc0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401fe9
        g35 = str;
        g29 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401fd2
    char v16 = *(char *)v12; // 0x401fd2
    char v17 = v16; // 0x401fd2
    bool v18 = false; // 0x401fd2
    while (v15 == v16) {
        // 0x401fc2
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
    int64_t v20 = v1; // 0x401fdc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401fde
        v20 = result + 4;
        g27 = v20;
    }
    // 0x401fe9
    g35 = v20;
    g29 = v20;
    return result;
}
// Address range: 0x402020 - 0x402112
int64_t function_402020(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402034
    int64_t result = (int64_t)v1; // 0x402034
    if (result != a1) {
        // 0x402041
        return result;
    }
    int64_t v2 = function_405a50(); // 0x402050
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402106
    if (v3 == 85) {
        // 0x402060
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4020f8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40208e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40209b
        // 0x402041
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4020f8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4020dd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4020ea
    // 0x402041
    return result4;
}
// Address range: 0x402120 - 0x402177
int64_t function_402120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402120
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402168
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402177 - 0x403341
int64_t function_402177(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4021c1
    int64_t v3 = 0; // 0x4021c1
    int64_t v4; // 0x402177
    int64_t v5; // 0x402177
    int64_t v6; // 0x402177
    int64_t v7; // 0x402177
    int64_t v8; // 0x402177
    int64_t v9; // 0x402177
    int64_t v10; // 0x402177
    int64_t v11; // 0x402177
    int64_t v12; // 0x402177
    int64_t v13; // 0x402177
    int64_t v14; // 0x402177
    int64_t v15; // 0x402177
    int64_t v16; // 0x402177
    int64_t v17; // 0x402177
    int64_t v18; // 0x402177
    int64_t result; // 0x402177
    int64_t v19; // 0x402177
    int32_t wc; // bp+132, 0x402177
    int64_t ps; // bp+136, 0x402177
    char v20; // 0x402730
    int64_t v21; // 0x402730
    int64_t v22; // 0x402ad8
    int64_t v23; // 0x402177
    int64_t v24; // 0x402af7
    int32_t v25; // 0x402177
    while (true) {
      lab_0x4021c8_2:
        // 0x4021c8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402177
        int64_t v27; // 0x4021fc
        while (true) {
          lab_0x4021c8:
            // 0x4021c8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4021d3
            if (v15 == -1) {
                // 0x4021d5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4021e3
            if (v28) {
                // break (via goto) -> 0x402948
                goto lab_0x402948;
            }
            // 0x4021ec
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
                    // 0x4027db
                    if (v25 % 2 == 0) {
                        goto lab_0x402321;
                    }
                    // 0x402bfd
                    v26 = v5 + 1;
                    goto lab_0x4021c8;
                }
                case 7: {
                    goto lab_0x402321;
                }
                case 8: {
                    goto lab_0x402321;
                }
                case 9: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402321;
                }
                case 12: {
                    goto lab_0x402321;
                }
                case 13: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4022ed;
                }
                case 36: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402321;
                }
                case 38: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402321;
                }
                case 44: {
                    goto lab_0x402321;
                }
                case 45: {
                    goto lab_0x402321;
                }
                case 46: {
                    goto lab_0x402321;
                }
                case 47: {
                    goto lab_0x402321;
                }
                case 48: {
                    goto lab_0x402321;
                }
                case 49: {
                    goto lab_0x402321;
                }
                case 50: {
                    goto lab_0x402321;
                }
                case 51: {
                    goto lab_0x402321;
                }
                case 52: {
                    goto lab_0x402321;
                }
                case 53: {
                    goto lab_0x402321;
                }
                case 54: {
                    goto lab_0x402321;
                }
                case 55: {
                    goto lab_0x402321;
                }
                case 56: {
                    goto lab_0x402321;
                }
                case 57: {
                    goto lab_0x402321;
                }
                case 58: {
                    goto lab_0x402321;
                }
                case 59: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402321;
                }
                case 66: {
                    goto lab_0x402321;
                }
                case 67: {
                    goto lab_0x402321;
                }
                case 68: {
                    goto lab_0x402321;
                }
                case 69: {
                    goto lab_0x402321;
                }
                case 70: {
                    goto lab_0x402321;
                }
                case 71: {
                    goto lab_0x402321;
                }
                case 72: {
                    goto lab_0x402321;
                }
                case 73: {
                    goto lab_0x402321;
                }
                case 74: {
                    goto lab_0x402321;
                }
                case 75: {
                    goto lab_0x402321;
                }
                case 76: {
                    goto lab_0x402321;
                }
                case 77: {
                    goto lab_0x402321;
                }
                case 78: {
                    goto lab_0x402321;
                }
                case 79: {
                    goto lab_0x402321;
                }
                case 80: {
                    goto lab_0x402321;
                }
                case 81: {
                    goto lab_0x402321;
                }
                case 82: {
                    goto lab_0x402321;
                }
                case 83: {
                    goto lab_0x402321;
                }
                case 84: {
                    goto lab_0x402321;
                }
                case 85: {
                    goto lab_0x402321;
                }
                case 86: {
                    goto lab_0x402321;
                }
                case 87: {
                    goto lab_0x402321;
                }
                case 88: {
                    goto lab_0x402321;
                }
                case 89: {
                    goto lab_0x402321;
                }
                case 90: {
                    goto lab_0x402321;
                }
                case 91: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402321;
                }
                case 94: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402321;
                }
                case 96: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402321;
                }
                case 98: {
                    goto lab_0x402321;
                }
                case 99: {
                    goto lab_0x402321;
                }
                case 100: {
                    goto lab_0x402321;
                }
                case 101: {
                    goto lab_0x402321;
                }
                case 102: {
                    goto lab_0x402321;
                }
                case 103: {
                    goto lab_0x402321;
                }
                case 104: {
                    goto lab_0x402321;
                }
                case 105: {
                    goto lab_0x402321;
                }
                case 106: {
                    goto lab_0x402321;
                }
                case 107: {
                    goto lab_0x402321;
                }
                case 108: {
                    goto lab_0x402321;
                }
                case 109: {
                    goto lab_0x402321;
                }
                case 110: {
                    goto lab_0x402321;
                }
                case 111: {
                    goto lab_0x402321;
                }
                case 112: {
                    goto lab_0x402321;
                }
                case 113: {
                    goto lab_0x402321;
                }
                case 114: {
                    goto lab_0x402321;
                }
                case 115: {
                    goto lab_0x402321;
                }
                case 116: {
                    goto lab_0x402321;
                }
                case 117: {
                    goto lab_0x402321;
                }
                case 118: {
                    goto lab_0x402321;
                }
                case 119: {
                    goto lab_0x402321;
                }
                case 120: {
                    goto lab_0x402321;
                }
                case 121: {
                    goto lab_0x402321;
                }
                case 122: {
                    goto lab_0x402321;
                }
                case 123: {
                    goto lab_0x4022c5;
                }
                case 124: {
                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4022c5;
                }
                case 126: {
                    goto lab_0x4022ed;
                }
                default: {
                    goto lab_0x4026c5;
                }
            }
        }
      lab_0x4026c5:
        if (v23 != 1) {
            // 0x402a30
            ps = 0;
            int64_t len = v15; // 0x402a40
            if (v15 == -1) {
                // 0x402a42
                len = strlen((char *)str);
            }
            // 0x402a6e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402acf:
                // 0x402acf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402ad4
                int64_t v30 = v29 + str;
                v24 = function_405910(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40304a_2;
                    }
                    case -1: {
                        goto lab_0x40304a_2;
                    }
                    case -2: {
                        // 0x40312d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403167
                            v19 = v18;
                            int64_t v31 = v18; // 0x40316a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403177
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403170
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40304a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40304a_2;
                    }
                    case 1: {
                        goto lab_0x402aa0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402b4c
                        char v34 = *(char *)v33; // 0x402b5d
                        unsigned char v35; // 0x402177
                        if (v34 < 125) {
                            // 0x402b68
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402b7f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402120(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402b50
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402b5d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402b68
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402b7f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402120(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402b50
                            v33++;
                        }
                        goto lab_0x402aa0;
                    }
                }
            }
            goto lab_0x40304a_2;
        } else {
            // 0x402714
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402321;
        }
    }
  lab_0x402948:
    // 0x402948
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40324a
        if (v8 > result) {
            // 0x403253
            *(char *)(v12 + result) = 0;
        }
        // 0x402577
        return result;
    }
    return function_402120(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402321:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402330
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40253a_2;
        }
    }
    int64_t v39 = result; // 0x402431
    char v40 = v20; // 0x402431
    int64_t v41 = v38; // 0x402431
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402431
    int64_t v43 = v36; // 0x402431
    goto lab_0x4023ad;
  lab_0x40253a_2:
    // 0x402577
    return function_402120(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40304a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402321;
    } else {
        uint64_t v49 = v46 + v5; // 0x402c1e
        int64_t v50 = v5 + 1; // 0x402d01
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402d08
        char v52 = v20; // 0x402d08
        int64_t v53 = result; // 0x402d08
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402cd1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402cd5
            int64_t v56 = v54 + 1; // 0x402cda
            int64_t v57 = v51 + 1; // 0x402d01
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402ccc
                v54 = v56;
                if (v47 > v54) {
                    // 0x402cd1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402cd5
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
        goto lab_0x4023ad;
    }
  lab_0x402aa0:
    // 0x402aa0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402abf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402ac2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40304a
        goto lab_0x40304a_2;
    }
    goto lab_0x402acf;
  lab_0x4022ed:
    // 0x4022ed
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40253a_2;
    }
    goto lab_0x402321;
  lab_0x4022c5:;
    bool v60 = v15 == 1; // 0x4022d0
    if (v15 == -1) {
        // 0x4022d2
        v60 = *(char *)v1 == 0;
    }
    // 0x4022de
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402321;
    } else {
        goto lab_0x4022ed;
    }
  lab_0x4023ad:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4023b2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4023b6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4021c8_2;
}
// Address range: 0x403350 - 0x4034ee
int64_t function_403350(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403352
    int32_t * v3 = __errno_location(); // 0x40336c
    int64_t v4 = (int64_t)g20; // 0x403371
    int32_t v5 = *v3; // 0x40337b
    int64_t v6 = v4; // 0x403391
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4034e9
            function_4043b0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4033a0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4033a7
        int64_t v9; // 0x403350
        if (g20 == &g21) {
            int64_t v10 = function_4041c0(0, v8); // 0x4034ca
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x4034cf
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4041c0(v4, v8); // 0x4033bb
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x4033ca
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x4033ca
        int32_t v14 = v7; // 0x4033d1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403401
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40340b
    int64_t * v17 = (int64_t *)v15; // 0x40340e
    uint64_t v18 = *v17; // 0x40340e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403411
    int64_t result = *v19; // 0x403411
    int64_t v20; // 0x403350
    uint64_t v21 = function_402120(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403434
    if (v18 > v21) {
        // 0x4034ab
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403447
    *v17 = v22;
    if (result != (int64_t)&g36) {
        // 0x403457
        free((int64_t *)result);
    }
    int64_t result2 = function_404160(v22); // 0x403471
    *v19 = result2;
    int64_t v23; // 0x403350
    function_402120(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4034ab
    *v3 = v5;
    return result2;
}
// Address range: 0x4034f0 - 0x403524
int64_t function_4034f0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4034f7
    int64_t result = function_404360(a1 == 0 ? (int64_t)&g37 : a1, 56); // 0x403516
    return result;
}
// Address range: 0x403530 - 0x40353f
int64_t function_403530(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g37 : a1); // 0x40353c
    return result;
}
// Address range: 0x403540 - 0x40354f
int64_t function_403540(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x403548
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g37;
}
// Address range: 0x403550 - 0x403583
int64_t function_403550(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 + 8 : a1 + 8; // 0x403569
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40356e
    uint32_t v3 = *v2; // 0x40356e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403572
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403590 - 0x4035a3
int64_t function_403590(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g37 + 4 : a1 + 4); // 0x40359c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4035b0 - 0x4035db
int64_t function_4035b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g37 : a1; // 0x4035b8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4035d5
        abort();
        // UNREACHABLE
    }
    // 0x4035cc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g37;
}
// Address range: 0x4035e0 - 0x403652
int64_t function_4035e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g37 : a5; // 0x403602
    int32_t * v2 = __errno_location(); // 0x40360b
    uint32_t v3 = *(int32_t *)v1; // 0x40362b
    int64_t result = function_402120(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40363a
    return result;
}
// Address range: 0x403660 - 0x403741
int64_t function_403660(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g37 : a4; // 0x403682
    int32_t * v2 = __errno_location(); // 0x403688
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4036a7
    int32_t * v4 = (int32_t *)v1; // 0x4036aa
    int64_t v5 = function_402120(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4036c5
    int64_t v6 = v5 + 1; // 0x4036ca
    int64_t result = function_404160(v6); // 0x4036df
    function_402120(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403724
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40372d
    return result;
}
// Address range: 0x403750 - 0x40375a
int64_t function_403750(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403750
    return function_403660(a1, a2, 0, a3);
}
// Address range: 0x403760 - 0x4037f5
int64_t function_403760(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x403760
    int64_t v2 = v1; // 0x403760
    int64_t v3 = v2; // 0x403774
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x403793
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403790
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x4037ad
    if (g21 != 0x6092c0) {
        // 0x4037af
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g36;
        v6 = &g49;
    }
    int64_t result = v6; // 0x4037d1
    if (g20 != &g21) {
        // 0x4037d3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g49;
    }
    // 0x4037e6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x403800 - 0x403811
int64_t function_403800(void) {
    // 0x403800
    int64_t v1; // 0x403800
    return function_403350(v1, v1, -1, (int64_t *)&g37);
}
// Address range: 0x403820 - 0x40382a
int64_t function_403820(void) {
    // 0x403820
    int64_t v1; // 0x403820
    return function_403350(v1, v1, v1, (int64_t *)&g37);
}
// Address range: 0x403830 - 0x403846
int64_t function_403830(int64_t a1) {
    // 0x403830
    return function_403350(0, a1, -1, (int64_t *)&g37);
}
// Address range: 0x403850 - 0x403862
int64_t function_403850(int64_t a1, int64_t a2) {
    // 0x403850
    return function_403350(0, a1, a2, (int64_t *)&g37);
}
// Address range: 0x403870 - 0x4038d8
int64_t function_403870(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403880
    return function_403350((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4038e0 - 0x403944
int64_t function_4038e0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4038f0
    return function_403350((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403950 - 0x40395c
int64_t function_403950(int64_t a1, int64_t a2) {
    // 0x403950
    return function_403870(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403960 - 0x40396f
int64_t function_403960(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403960
    return function_4038e0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403970 - 0x4039e0
int64_t function_403970(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x40397d
    int128_t v2 = __asm_movdqa(g38); // 0x403985
    int128_t v3 = __asm_movdqa(g39); // 0x40398d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4039a2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4039b8
    uint32_t v6 = *v5; // 0x4039b8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4039bd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403350(0, a1, a2, &v4);
}
// Address range: 0x4039e0 - 0x4039ed
int64_t function_4039e0(int64_t a1, int64_t a2) {
    // 0x4039e0
    return function_403970(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4039f0 - 0x403a01
int64_t function_4039f0(int64_t a1) {
    // 0x4039f0
    return function_403970(a1, -1, 58);
}
// Address range: 0x403a10 - 0x403a1a
int64_t function_403a10(void) {
    // 0x403a10
    int64_t v1; // 0x403a10
    return function_403970(v1, v1, 58);
}
// Address range: 0x403a20 - 0x403a8e
int64_t function_403a20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403a3a
    return function_403350(a1, a3, -1, &v1);
}
// Address range: 0x403a90 - 0x403afc
int64_t function_403a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g37); // 0x403a97
    int128_t v2 = __asm_movdqa(g38); // 0x403a9f
    int128_t v3 = __asm_movdqa(g39); // 0x403aa7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403ac9
    if (a2 == 0 || a3 == 0) {
        // 0x403af7
        abort();
        // UNREACHABLE
    }
    // 0x403ada
    return function_403350(a1, a4, a5, &v4);
}
// Address range: 0x403b00 - 0x403b09
int64_t function_403b00(void) {
    // 0x403b00
    int64_t v1; // 0x403b00
    return function_403a90(v1, v1, v1, v1, -1);
}
// Address range: 0x403b10 - 0x403b27
int64_t function_403b10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403b10
    return function_403a90(0, a1, a2, a3, -1);
}
// Address range: 0x403b30 - 0x403b43
int64_t function_403b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403b30
    return function_403a90(0, a1, a2, a3, a4);
}
// Address range: 0x403b50 - 0x403b5a
int64_t function_403b50(void) {
    // 0x403b50
    int64_t v1; // 0x403b50
    return function_403350(v1, v1, v1, &g19);
}
// Address range: 0x403b60 - 0x403b72
int64_t function_403b60(int64_t a1, int64_t a2) {
    // 0x403b60
    return function_403350(0, a1, a2, &g19);
}
// Address range: 0x403b80 - 0x403b91
int64_t function_403b80(void) {
    // 0x403b80
    int64_t v1; // 0x403b80
    return function_403350(v1, v1, -1, &g19);
}
// Address range: 0x403ba0 - 0x403bb6
int64_t function_403ba0(int64_t a1) {
    // 0x403ba0
    return function_403350(0, a1, -1, &g19);
}
// Address range: 0x403bc0 - 0x403f9d
int64_t function_403bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403c58
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403bdc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403bf6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403c3b
    if (a6 < 10) {
        // 0x403c4a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403d42
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403fa0 - 0x403fc0
int64_t function_403fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403fa0
    if (a5 == 0) {
        // 0x403fbb
        return function_403bc0(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x403fa7
    v1++;
    int64_t v2 = v1; // 0x403fb9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403fb0
        v1++;
        v2 = v1;
    }
    // 0x403fbb
    return function_403bc0(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x403fc0 - 0x404020
int64_t function_403fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403fc0
    int64_t v3 = &v2; // 0x403fc0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403ff3
    int64_t v6; // 0x403fdd
    int64_t * v7; // 0x403ffb
    int64_t v8; // 0x403ffb
    int64_t v9; // 0x404007
    if (v5 < 48) {
        // 0x403fd0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404013
            break;
        }
    } else {
        // 0x403ffb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404013
            break;
        }
    }
    int64_t v10 = 10; // 0x403ff1
    while (v4 != 9) {
        // 0x403fe9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403fd0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404013
                break;
            }
        } else {
            // 0x403ffb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404013
                break;
            }
        }
        // 0x403fe9
        v10 = 10;
    }
    // 0x404013
    return function_403bc0(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x404020 - 0x4040dc
int64_t function_404020(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404020
    int64_t v1; // bp-168, 0x404020
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404020
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404020
    int64_t v8; // 0x404020
    int64_t v9; // bp-56, 0x404020
    int64_t v10; // 0x404085
    int64_t v11; // 0x4040a9
    if ((int32_t)v6 < 48) {
        // 0x404070
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4040c0
            break;
        }
    } else {
        // 0x4040a2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4040c0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40409a
    int64_t v13 = 10; // 0x40409a
    while (v5 != 9) {
        // 0x40409c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404070
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4040c0
                break;
            }
        } else {
            // 0x4040a2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4040c0
                break;
            }
        }
        // 0x404092
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4040c0
    int64_t v14; // bp-136, 0x404020
    int64_t result = function_403bc0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x4040cf
    return result;
}
// Address range: 0x4040e0 - 0x404154
int64_t function_4040e0(int64_t a1) {
    // 0x4040e0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404143
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404160 - 0x40417a
int64_t function_404160(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404164
    if (size != 0 != (mem == NULL)) {
        // 0x404173
        return (int64_t)mem;
    }
    // 0x404175
    function_4043b0(size);
    // UNREACHABLE
}
// Address range: 0x404180 - 0x4041a1
int64_t function_404180(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404183
    int64_t v2 = v1; // 0x404183
    if (v2 < 0) {
        // 0x40419b
        function_4043b0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404199
        return function_404160(v2);
    }
    // 0x40419b
    function_4043b0(v2);
    // UNREACHABLE
}
// Address range: 0x4041b0 - 0x4041b2
int64_t function_4041b0(void) {
    // 0x4041b0
    int64_t v1; // 0x4041b0
    return function_404160(v1);
}
// Address range: 0x4041c0 - 0x4041f6
int64_t function_4041c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4041e8
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4041d1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4041e0
        return (int64_t)mem;
    }
    // 0x4041f1
    function_4043b0(a1);
    // UNREACHABLE
}
// Address range: 0x404200 - 0x404221
int64_t function_404200(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404203
    int64_t v2 = v1; // 0x404203
    if (v2 < 0) {
        // 0x40421b
        function_4043b0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404219
        return function_4041c0(a1, v2);
    }
    // 0x40421b
    function_4043b0(a1);
    // UNREACHABLE
}
// Address range: 0x404230 - 0x4042b6
int64_t function_404230(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40428b
            function_4043b0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4041c0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404273
    if (a2 == 0) {
        // 0x404298
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404278
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40428b
        function_4043b0(a1);
        // UNREACHABLE
    }
    // 0x40425a
    *(int64_t *)a2 = v2;
    return function_4041c0(a1, v2 * a3);
}
// Address range: 0x4042c0 - 0x404310
int64_t function_4042c0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4042c0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40430a
            function_4043b0(a1);
            // UNREACHABLE
        }
        // 0x4042e2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4041c0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4042f5
        *(int64_t *)a2 = 128;
        return function_4041c0(0, 128);
    }
    // 0x404308
    if (a2 < 0) {
        // 0x40430a
        function_4043b0(a1);
        // UNREACHABLE
    }
    // 0x4042e2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4041c0(a1, v1);
}
// Address range: 0x404310 - 0x404327
int64_t function_404310(int64_t a1, int64_t a2) {
    // 0x404310
    return (int64_t)memset((int64_t *)function_404160(a1), 0, (int32_t)a1);
}
// Address range: 0x404330 - 0x40435e
int64_t function_404330(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404337
    if ((int64_t)v1 < 0) {
        // 0x404359
        function_4043b0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404359
        function_4043b0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40434a
    if (mem != NULL) {
        // 0x404354
        return (int64_t)mem;
    }
    // 0x404359
    function_4043b0(nmemb);
    // UNREACHABLE
}
// Address range: 0x404360 - 0x404388
int64_t function_404360(int64_t a1, int64_t a2) {
    int64_t v1 = function_404160(a2); // 0x40436f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404390 - 0x4043a3
int64_t function_404390(int64_t str) {
    // 0x404390
    return function_404360(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4043b0 - 0x4043e1
int64_t function_4043b0(int64_t a1) {
    // 0x4043b0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4043f0 - 0x404c1f
int64_t function_4043f0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2) {
    uint32_t base = (int32_t)a3; // 0x404402
    if (base >= 37) {
        // 0x404bbc
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtol");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    // 0x40440b
    int64_t v1; // bp-64, 0x4043f0
    int64_t endptr = a2 == 0 ? (int64_t)&v1 : (int64_t)a2; // 0x404418
    int32_t * v2 = __errno_location(); // 0x404422
    *v2 = 0;
    char * str = (char *)a1;
    int32_t str_as_l = strtol(str, (char **)endptr, base); // 0x404438
    int64_t * v3 = (int64_t *)endptr; // 0x40443d
    int64_t v4 = *v3; // 0x40443d
    int64_t v5; // 0x4043f0
    int64_t v6; // 0x4043f0
    int64_t v7; // 0x4043f0
    char v8; // 0x4043f0
    int64_t v9; // 0x4043f0
    int64_t v10; // 0x4043f0
    int64_t v11; // 0x4043f0
    if (v4 == a1) {
        // 0x404498
        if (str2 == NULL) {
            // 0x40446c
            return 4;
        }
        char c = *str; // 0x4044a1
        if (c == 0) {
            // 0x40446c
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x4044bf
        v10 = 1;
        v6 = 0;
        v8 = c;
        if (found_char_pos == NULL) {
            // 0x40446c
            return 4;
        }
        goto lab_0x4044cd;
    } else {
        int32_t v12 = *v2; // 0x404448
        int64_t v13 = 0; // 0x40444e
        if (v12 != 0) {
            // 0x404480
            v13 = 1;
            if (v12 != 34) {
                // 0x40446c
                return 4;
            }
        }
        int64_t v14 = str_as_l; // 0x404438
        v9 = v14;
        v5 = v13;
        if (str2 == NULL) {
            goto lab_0x404465;
        } else {
            char c2 = *(char *)v4; // 0x404458
            v9 = v14;
            v5 = v13;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x404567
                v10 = v14;
                v6 = v13;
                v8 = c2;
                v11 = v14;
                v7 = v13;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4044cd;
                } else {
                    goto lab_0x404575;
                }
            } else {
                goto lab_0x404465;
            }
        }
    }
  lab_0x4044cd:;
    int64_t v15 = v6;
    int64_t v16 = v10;
    unsigned char v17 = v8 - 69;
    int64_t v18 = 1024; // 0x4044d4
    int64_t v19 = 1; // 0x4044d4
    int64_t v20; // 0x4043f0
    int64_t v21; // 0x4043f0
    int64_t v22; // 0x4043f0
    int64_t v23; // 0x4043f0
    int64_t v24; // 0x4043f0
    int64_t v25; // 0x4043f0
    int64_t v26; // 0x4043f0
    int64_t v27; // 0x4043f0
    int64_t v28; // 0x4043f0
    int64_t v29; // 0x4043f0
    int64_t v30; // 0x4043f0
    int64_t v31; // 0x4043f0
    int64_t v32; // 0x4043f0
    int64_t v33; // 0x4043f0
    int64_t v34; // 0x4043f0
    int64_t v35; // 0x4043f0
    int64_t v36; // 0x4043f0
    int64_t v37; // 0x4043f0
    int64_t v38; // 0x4043f0
    if (v17 < 48) {
        // 0x404500
        v18 = 1024;
        v19 = 1;
        if ((1 << (int64_t)((v8 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4044e0;
        } else {
            // 0x404514
            v18 = 1024;
            v19 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x4044e0;
            } else {
                // 0x404526
                v18 = 1000;
                v19 = 2;
                switch (*(char *)(v4 + 1)) {
                    case 68: {
                        goto lab_0x4044e0;
                    }
                    case 105: {
                        char v39 = *(char *)(v4 + 2); // 0x404b02
                        v18 = 1024;
                        v19 = (v39 == 66 ? 2 : 1) + (int64_t)(v39 == 66);
                        goto lab_0x4044e0;
                    }
                    default: {
                        // 0x40453b
                        g47 = v17;
                        v18 = 1000;
                        v19 = 2;
                        v11 = v16;
                        v7 = v15;
                        v21 = v16;
                        v28 = 1;
                        v20 = v15;
                        v22 = 1024;
                        v29 = 1;
                        v33 = -0x20000000000000;
                        v34 = 1;
                        v23 = 1024;
                        v30 = 1;
                        v36 = -0x20000000000000;
                        v24 = 1024;
                        v31 = 1;
                        v38 = -0x20000000000000;
                        v25 = 1024;
                        v32 = 1;
                        v37 = -0x20000000000000;
                        v26 = 1024;
                        v27 = 1;
                        v35 = -0x20000000000000;
                        switch (v8) {
                            case 69: {
                                goto lab_0x4047c8;
                            }
                            case 70: {
                                goto lab_0x404575;
                            }
                            case 71: {
                                goto lab_0x404830;
                            }
                            case 72: {
                                goto lab_0x404575;
                            }
                            case 73: {
                                goto lab_0x404575;
                            }
                            case 74: {
                                goto lab_0x404575;
                            }
                            case 75: {
                                goto lab_0x404615;
                            }
                            case 76: {
                                goto lab_0x404575;
                            }
                            case 77: {
                                goto lab_0x404658;
                            }
                            case 78: {
                                goto lab_0x404575;
                            }
                            case 79: {
                                goto lab_0x404575;
                            }
                            case 80: {
                                goto lab_0x4046f8;
                            }
                            case 81: {
                                goto lab_0x404575;
                            }
                            case 82: {
                                goto lab_0x404575;
                            }
                            case 83: {
                                goto lab_0x404575;
                            }
                            case 84: {
                                goto lab_0x404760;
                            }
                            case 85: {
                                goto lab_0x404575;
                            }
                            case 86: {
                                goto lab_0x404575;
                            }
                            case 87: {
                                goto lab_0x404575;
                            }
                            case 88: {
                                goto lab_0x404575;
                            }
                            case 89: {
                                goto lab_0x404898;
                            }
                            case 90: {
                                goto lab_0x404900;
                            }
                            case 91: {
                                goto lab_0x404575;
                            }
                            case 92: {
                                goto lab_0x404575;
                            }
                            case 93: {
                                goto lab_0x404575;
                            }
                            case 94: {
                                goto lab_0x404575;
                            }
                            case 95: {
                                goto lab_0x404575;
                            }
                            case 96: {
                                goto lab_0x404575;
                            }
                            case 97: {
                                goto lab_0x404575;
                            }
                            case 98: {
                                goto lab_0x4046c5;
                            }
                            case 99: {
                                goto lab_0x4045b8;
                            }
                            case 100: {
                                goto lab_0x404575;
                            }
                            case 101: {
                                goto lab_0x404575;
                            }
                            case 102: {
                                goto lab_0x404575;
                            }
                            case 103: {
                                goto lab_0x404830;
                            }
                            case 104: {
                                goto lab_0x404575;
                            }
                            case 105: {
                                goto lab_0x404575;
                            }
                            case 106: {
                                goto lab_0x404575;
                            }
                            case 107: {
                                goto lab_0x404615;
                            }
                            case 108: {
                                goto lab_0x404575;
                            }
                            case 109: {
                                goto lab_0x404658;
                            }
                            case 110: {
                                goto lab_0x404575;
                            }
                            case 111: {
                                goto lab_0x404575;
                            }
                            case 112: {
                                goto lab_0x404575;
                            }
                            case 113: {
                                goto lab_0x404575;
                            }
                            case 114: {
                                goto lab_0x404575;
                            }
                            case 115: {
                                goto lab_0x404575;
                            }
                            case 116: {
                                goto lab_0x404760;
                            }
                            default: {
                                goto lab_0x4044e0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4044e0;
    }
  lab_0x404465:
    // 0x404465
    *a4 = v9;
    // 0x40446c
    return v5 & 0xffffffff;
  lab_0x4044e0:
    // 0x4044e0
    g46 = v8 - 66;
    v11 = v16;
    v7 = v15;
    v21 = v16;
    v28 = v19;
    v20 = v15;
    v34 = v19;
    switch (v8) {
        case 66: {
            // 0x4045b1
            v21 = 1024 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x4045b8;
        }
        case 69: {
            // 0x4047b0
            v25 = v18;
            v32 = v19;
            v37 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x4047c8;
        }
        case 71: {
            goto lab_0x404830;
        }
        case 75: {
            goto lab_0x404615;
        }
        case 77: {
            goto lab_0x404640;
        }
        case 80: {
            // 0x4046e0
            v23 = v18;
            v30 = v19;
            v36 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x4046f8;
        }
        case 84: {
            goto lab_0x404748;
        }
        case 89: {
            // 0x404880
            goto lab_0x404898;
        }
        case 90: {
            // 0x4048e8
            v26 = v18;
            v27 = v19;
            v35 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x404900;
        }
        case 98: {
            goto lab_0x4046c5;
        }
        case 99: {
            goto lab_0x4045b8;
        }
        case 103: {
            goto lab_0x404830;
        }
        case 107: {
            goto lab_0x404615;
        }
        case 109: {
            goto lab_0x404640;
        }
        case 116: {
            goto lab_0x404748;
        }
        case 119: {
            // 0x4045f9
            v21 = 2 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x4045b8;
        }
        default: {
            goto lab_0x404575;
        }
    }
    // 0x404818
    goto lab_0x404830;
    // 0x404600
    goto lab_0x404615;
  lab_0x404640:
    // 0x404640
    v22 = v18;
    v29 = v19;
    v33 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x404658;
  lab_0x404748:
    // 0x404748
    v24 = v18;
    v31 = v19;
    v38 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x404760;
  lab_0x4046c5:
    // 0x4046c5
    v21 = 512 * v16;
    v28 = v34;
    v20 = v15;
    goto lab_0x4045b8;
  lab_0x4045b8:;
    int64_t v59 = v20;
    int64_t v60 = v28 + v4; // 0x4045b8
    *v3 = v60;
    v9 = v21;
    v5 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x404465;
  lab_0x404575:
    // 0x404575
    *a4 = v11;
    // 0x40446c
    return (v7 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4047c8:;
    uint64_t v61 = v25;
    int64_t v62 = v16;
    int64_t v63 = -0x8000000000000000; // 0x404801
    int64_t v64 = 1; // 0x404801
    if (v62 >= v37) {
        // 0x4047e0
        v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
        v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : 0;
    }
    int32_t v65 = 5; // 0x4047f5
    int32_t v66 = v65; // 0x4047f8
    int64_t v67 = v64; // 0x4047f8
    int64_t v55 = v63; // 0x4047f8
    int64_t v57 = v32; // 0x4047f8
    int64_t v58 = v64; // 0x4047f8
    while (v65 != 0) {
        // 0x4047fe
        v62 = v63;
        v63 = -0x8000000000000000;
        v64 = 1;
        if (v62 >= v37) {
            // 0x4047e0
            v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
            v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : v67;
        }
        // 0x4047f5
        v65 = v66 - 1;
        v66 = v65;
        v67 = v64;
        v55 = v63;
        v57 = v32;
        v58 = v64;
    }
    goto lab_0x404a30;
  lab_0x404830:
    // 0x404830
    while (true) {
        // 0x404866
        int32_t v40; // 0x4043f0
        int32_t v41 = v40;
        int64_t v42; // 0x4043f0
        int64_t v43 = v42;
        int64_t v44 = -0x8000000000000000; // 0x404869
        int64_t v45 = 1; // 0x404869
        int64_t v46; // 0x4043f0
        uint64_t v47; // 0x4043f0
        if (v43 >= v47) {
            int64_t v48 = v46;
            uint64_t v49; // 0x4043f0
            int64_t v50 = v43 > 0x7fffffffffffffff / v49 ? 0x7fffffffffffffff : v43 * v49;
            int64_t v51 = v43 > 0x7fffffffffffffff / v49 ? 1 : v48;
            v44 = v50;
            v45 = v51;
        }
        int64_t v52 = v45;
        int64_t v53 = v44;
        int32_t v54 = v41 - 1; // 0x40485d
        v42 = v53;
        v40 = v54;
        v46 = v52;
        v55 = v53;
        int64_t v56; // 0x4043f0
        v57 = v56;
        v58 = v52;
        if (v54 == 0) {
            // break -> 0x404a30
            break;
        }
    }
    goto lab_0x404a30;
  lab_0x404615:;
    int64_t v72 = 1;
    v21 = -0x8000000000000000;
    v28 = v72;
    v20 = 1;
    int64_t v69; // 0x4043f0
    int64_t v70; // 0x4043f0
    int64_t v71; // 0x4043f0
    int64_t v68; // 0x4043f0
    if (v16 < -0x20000000000000) {
        goto lab_0x4045b8;
    } else {
        int64_t v73 = 1024;
        v69 = 0x7fffffffffffffff / v73;
        v71 = v73;
        v70 = v16;
        v68 = v72;
        goto lab_0x40462c;
    }
  lab_0x404658:
    // 0x404658
    v21 = -0x8000000000000000;
    v28 = v29;
    v20 = 1;
    if (v16 < v33) {
        goto lab_0x4045b8;
    } else {
        int64_t v74 = 0x7fffffffffffffff / v22;
        v21 = 0x7fffffffffffffff;
        v28 = v29;
        v20 = 1;
        if (v16 > v74) {
            goto lab_0x4045b8;
        } else {
            int64_t v75 = v22 * v16; // 0x404678
            v21 = -0x8000000000000000;
            v28 = v29;
            v20 = 1;
            v69 = v74;
            v71 = v22;
            v70 = v75;
            v68 = v29;
            if (v75 < v33) {
                goto lab_0x4045b8;
            } else {
                goto lab_0x40462c;
            }
        }
    }
  lab_0x4046f8:;
    uint64_t v76 = v23;
    int64_t v77 = v16;
    int64_t v78 = -0x8000000000000000; // 0x404731
    int64_t v79 = 1; // 0x404731
    if (v36 <= v77) {
        // 0x404710
        v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
        v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : 0;
    }
    int32_t v80 = 4; // 0x404725
    int32_t v81 = v80; // 0x404728
    int64_t v82 = v79; // 0x404728
    v55 = v78;
    v57 = v30;
    v58 = v79;
    while (v80 != 0) {
        // 0x40472e
        v77 = v78;
        v78 = -0x8000000000000000;
        v79 = 1;
        if (v36 <= v77) {
            // 0x404710
            v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
            v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : v82;
        }
        // 0x404725
        v80 = v81 - 1;
        v81 = v80;
        v82 = v79;
        v55 = v78;
        v57 = v30;
        v58 = v79;
    }
    goto lab_0x404a30;
  lab_0x404760:;
    uint64_t v83 = v24;
    int64_t v84 = v16;
    int64_t v85 = -0x8000000000000000; // 0x404799
    int64_t v86 = 1; // 0x404799
    if (v38 <= v84) {
        // 0x404778
        v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
        v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : 0;
    }
    int32_t v87 = 3; // 0x40478d
    int32_t v88 = v87; // 0x404790
    int64_t v89 = v86; // 0x404790
    v55 = v85;
    v57 = v31;
    v58 = v86;
    while (v87 != 0) {
        // 0x404796
        v84 = v85;
        v85 = -0x8000000000000000;
        v86 = 1;
        if (v38 <= v84) {
            // 0x404778
            v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
            v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : v89;
        }
        // 0x40478d
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v55 = v85;
        v57 = v31;
        v58 = v86;
    }
    goto lab_0x404a30;
  lab_0x404898:
    // 0x404898
    while (true) {
        // 0x4048ce
        int32_t v90; // 0x4043f0
        int32_t v91 = v90;
        int64_t v92; // 0x4043f0
        int64_t v93 = v92;
        int64_t v94 = -0x8000000000000000; // 0x4048d1
        int64_t v95 = 1; // 0x4048d1
        int64_t v96; // 0x4043f0
        uint64_t v97; // 0x4043f0
        if (v97 <= v93) {
            int64_t v98 = v96;
            uint64_t v99; // 0x4043f0
            int64_t v100 = v93 > 0x7fffffffffffffff / v99 ? 0x7fffffffffffffff : v93 * v99;
            int64_t v101 = v93 > 0x7fffffffffffffff / v99 ? 1 : v98;
            v94 = v100;
            v95 = v101;
        }
        int64_t v102 = v95;
        int64_t v103 = v94;
        int32_t v104 = v91 - 1; // 0x4048c5
        v92 = v103;
        v90 = v104;
        v96 = v102;
        v55 = v103;
        int64_t v105; // 0x4043f0
        v57 = v105;
        v58 = v102;
        if (v104 == 0) {
            // break -> 0x404a30
            break;
        }
    }
    goto lab_0x404a30;
  lab_0x404900:;
    uint64_t v106 = v26;
    int64_t v107 = v16;
    int64_t v108 = -0x8000000000000000; // 0x404939
    int64_t v109 = 1; // 0x404939
    if (v35 <= v107) {
        // 0x404918
        v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
        v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : 0;
    }
    int32_t v110 = 6; // 0x40492d
    int32_t v111 = v110; // 0x404930
    int64_t v112 = v109; // 0x404930
    v55 = v108;
    v57 = v27;
    v58 = v109;
    while (v110 != 0) {
        // 0x404936
        v107 = v108;
        v108 = -0x8000000000000000;
        v109 = 1;
        if (v35 <= v107) {
            // 0x404918
            v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
            v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : v112;
        }
        // 0x40492d
        v110 = v111 - 1;
        v111 = v110;
        v112 = v109;
        v55 = v108;
        v57 = v27;
        v58 = v109;
    }
    goto lab_0x404a30;
  lab_0x404a30:
    // 0x404a30
    v21 = v55;
    v28 = v57;
    v20 = (v58 | v15) & 0xffffffff;
    goto lab_0x4045b8;
  lab_0x40462c:
    // 0x40462c
    v21 = 0x7fffffffffffffff;
    v28 = v68;
    v20 = 1;
    if (v69 >= v70) {
        // 0x404635
        v21 = v70 * v71;
        v28 = v68;
        v20 = v15;
    }
    goto lab_0x4045b8;
}
// Address range: 0x404c20 - 0x40523c
int64_t function_404c20(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404c3f
    int64_t v2 = *v1; // 0x404c3f
    char * str2 = (char *)v2; // 0x404c4c
    char c = *str2; // 0x404c4c
    int64_t v3 = v2; // 0x404c78
    int64_t v4 = 0; // 0x404c20
    int32_t v5; // 0x404c20
    int64_t v6; // 0x404c20
    int64_t v7; // 0x404c20
    int64_t v8; // 0x404c20
    int64_t v9; // 0x404c20
    int64_t v10; // 0x404c20
    int64_t v11; // 0x404c20
    int64_t v12; // 0x404c20
    int64_t v13; // 0x404c20
    int64_t str3; // 0x404c20
    int64_t v14; // 0x404c20
    int64_t v15; // 0x404c20
    int64_t v16; // 0x404c20
    int64_t v17; // 0x404c20
    int32_t v18; // 0x404c20
    int32_t v19; // 0x404c20
    int32_t v20; // 0x404c20
    int32_t v21; // 0x404c20
    int32_t v22; // 0x404c20
    int32_t v23; // 0x404c20
    int32_t v24; // 0x404c20
    int32_t v25; // 0x404c20
    int32_t v26; // 0x404c20
    int32_t v27; // 0x404c20
    int32_t v28; // 0x404c20
    int32_t v29; // 0x404c20
    int64_t nmemb; // 0x404c20
    int64_t v30; // 0x404c20
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404c7c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404c78
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404c88
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404c8e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404c58
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x404cbc
                int64_t v34; // 0x404c20
                int64_t v35; // 0x404c20
                if (strncmp(str, str2, n) == 0) {
                    // 0x404cc5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404e40;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404cd6
                int64_t v37 = *(int64_t *)v36; // 0x404cda
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404cb0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404cc5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404e40;
                        }
                    }
                    // 0x404cd6
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
                  lab_0x404d26:
                    // 0x404d26
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
                        goto lab_0x404d80;
                    } else {
                        if (v11 == 0) {
                            // 0x404ef0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404d80;
                        } else {
                            if (v39 == 0) {
                                // 0x404ea0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x404d4a;
                                } else {
                                    // 0x404eac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x404d4a;
                                    } else {
                                        // 0x404eba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x404d4a;
                                        } else {
                                            goto lab_0x404d80;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x404d4a;
                            }
                        }
                    }
                }
              lab_0x404d91:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404f66
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405112
                            flockfile(g30);
                            int64_t v41 = *v1; // 0x405132
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40517f
                            int64_t v43 = (int64_t)g30;
                            int64_t v44 = v43; // 0x405199
                            int64_t v45; // 0x40519b
                            if (*(char *)v42 != 0) {
                                // 0x40519b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g30;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405193
                            while (v17 + nmemb != v42) {
                                // 0x405195
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40519b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g30;
                                }
                                // 0x405188
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4051c0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g30);
                            v40 = *v1;
                        } else {
                            // 0x404f74
                            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4050cf
                        free((int64_t *)v17);
                    }
                    // 0x404fc9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404fe0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x404e8e
                    return 63;
                }
                // 0x404db0
                v5 = v39;
                if (v13 != 0) {
                    // 0x404e34
                    v35 = v13;
                    v34 = v25;
                  lab_0x404e40:;
                    int32_t * v49 = (int32_t *)a7; // 0x404e50
                    uint32_t v50 = *v49; // 0x404e50
                    int64_t v51 = v50; // 0x404e50
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x404e5a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404e63
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40508f
                                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40503a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x404e8e
                            return 63;
                        }
                        // 0x404ed8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4051ef
                                    __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4050ed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405100
                                // 0x404e8e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404ffe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405012
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x404e7b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x404e7e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404e82
                    int64_t result = v59; // 0x404e88
                    if (v58 != 0) {
                        // 0x404e8a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x404e8e
                    return result;
                }
            } else {
                // 0x404c8e
                v5 = v32;
            }
            // break -> 0x404db5
            break;
        }
    }
    // 0x404db5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x404dcd
        if (*(char *)(v60 + 1) != 45) {
            // 0x404dd7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x404e8e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404f19
        __fprintf_chk(g30, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404e06
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404e16
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404d80:
    // 0x404d80
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404d80
    int64_t v63 = *(int64_t *)v62; // 0x404d84
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404d91
        goto lab_0x404d91;
    }
    goto lab_0x404d26;
  lab_0x404d4a:
    // 0x404d4a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404c20
    int32_t v65; // 0x404c20
    int32_t v66; // 0x404c20
    if (v27 != 0) {
        goto lab_0x404d80;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404f00
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404d80;
            } else {
                goto lab_0x404d71;
            }
        } else {
            // 0x404d65
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40505c
                int64_t v67 = (int64_t)mem; // 0x40505c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404d80;
                } else {
                    // 0x40506f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404d71;
                }
            } else {
                goto lab_0x404d71;
            }
        }
    }
  lab_0x404d71:
    // 0x404d71
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404d80;
}
// Address range: 0x405240 - 0x405806
int64_t function_405240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405261
    if (v3 < 1) {
        // 0x40541e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40525d
    int32_t v5 = *(int32_t *)a7; // 0x405269
    uint64_t v6 = a1 & 0xffffffff; // 0x40526b
    int64_t v7 = v2; // 0x405270
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405273
    *v8 = 0;
    int64_t v9; // 0x405240
    int64_t v10; // 0x405240
    int64_t v11; // 0x405240
    int64_t v12; // 0x405240
    int64_t str; // 0x405240
    int64_t v13; // 0x405240
    int64_t v14; // 0x405240
    int64_t v15; // 0x405240
    int64_t v16; // 0x405240
    int64_t v17; // 0x405240
    int32_t v18; // 0x405240
    char v19; // 0x405240
    if (v5 == 0) {
        // 0x405458
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40528a;
    } else {
        // 0x405283
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4052d0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4052d3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405398;
            } else {
                int64_t v22 = v7 + 1; // 0x4052e6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4052f6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4053ac;
                } else {
                    goto lab_0x405308;
                }
            }
        } else {
            goto lab_0x40528a;
        }
    }
  lab_0x40528a:
    // 0x40528a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405290
    *v24 = 0;
    int64_t v25; // 0x405240
    int64_t v26; // 0x405240
    int64_t v27; // 0x405240
    switch (*(char *)&v2) {
        case 45: {
            // 0x405380
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40538d;
        }
        case 43: {
            // 0x405690
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40538d;
        }
        default: {
            // 0x4052ac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40560f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405728
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40538d;
                } else {
                    // 0x40561d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4052ba;
                }
            } else {
                goto lab_0x4052ba;
            }
        }
    }
  lab_0x405398:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40539f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405308;
    } else {
        goto lab_0x4053ac;
    }
  lab_0x4052ba:
    // 0x4052ba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40538d;
  lab_0x40538d:
    // 0x40538d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405398;
  lab_0x405308:;
    uint32_t v30 = *(int32_t *)a7; // 0x405308
    int64_t v31 = v30; // 0x405308
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40530a
    if ((int64_t)*v32 > v31) {
        // 0x40530f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405312
    if (*v33 > v30) {
        // 0x405317
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40531a
    int64_t v35 = v31; // 0x40531e
    int64_t v36 = v15; // 0x40531e
    int64_t v37; // 0x405240
    int64_t v38; // 0x405240
    int64_t v39; // 0x405240
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405488
        int64_t v41 = v40; // 0x405488
        v2 = v41;
        int64_t v42; // 0x405240
        if (*v33 == v40) {
            // 0x405670
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405678
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405494
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4054a8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4054b1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4054ba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4054d1
            int64_t v47 = v45 & 0xffffffff; // 0x4054d5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4054de
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4054e4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4054e6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4054c0
            int64_t v49 = v48 & 0xffffffff; // 0x4054c0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4054d1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4054de
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4054e4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4054e6;
                    }
                }
                // 0x4054c0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405688
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4054e6;
    } else {
        goto lab_0x405324;
    }
  lab_0x4053ac:
    // 0x4053ac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4053af
    int64_t v51 = v12; // 0x4053af
    int64_t v52 = v14; // 0x4053af
    if (*(char *)v10 == 0) {
        goto lab_0x405308;
    } else {
        goto lab_0x4053b5;
    }
  lab_0x405324:;
    int32_t v53 = v35; // 0x405324
    int64_t v54; // 0x405240
    int64_t v55; // 0x405240
    int64_t v56; // 0x405240
    int64_t v57; // 0x405240
    int64_t v58; // 0x405240
    int64_t v59; // 0x405240
    char * v60; // 0x405240
    int64_t v61; // 0x405240
    int64_t v62; // 0x405339
    int64_t v63; // 0x405240
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405473
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405476;
    } else {
        // 0x40532c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405240
        int64_t v66 = v65 ? -1 : 1; // 0x405340
        int64_t v67 = (int64_t)"--"; // 0x405240
        int64_t v68 = v62; // 0x405240
        int64_t v69 = 3; // 0x405340
        unsigned char v70 = *(char *)v68; // 0x405340
        char v71 = *(char *)v67; // 0x405340
        char v72 = v71; // 0x405340
        bool v73 = false; // 0x405340
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
            // 0x405430
            if (*(char *)v62 == 45) {
                // 0x4054f0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4054f0
                if (c == 0) {
                    goto lab_0x40543a;
                } else {
                    // 0x4054fd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405580;
                    } else {
                        if (c == 45) {
                            // 0x405763
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4055d5;
                        } else {
                            // 0x40550e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405580;
                            } else {
                                // 0x405513
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405534;
                                } else {
                                    // 0x40551a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405580;
                                    } else {
                                        goto lab_0x405534;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40543a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405350
            v2 = v75;
            int32_t v76 = *v32; // 0x405353
            int64_t v77 = v35 + 1; // 0x405356
            int32_t v78 = v77; // 0x405359
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4056c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405367
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405375
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405476;
        }
    }
  lab_0x4053b5:;
    // 0x4053b5
    int64_t v79; // bp-104, 0x405240
    int64_t v80 = &v79; // 0x40524a
    int64_t v81 = v50 + 1; // 0x4053b5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4053bc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4053c1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4053c5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4053c9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4053d1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4053d6
    int32_t c2 = v84; // 0x4053d6
    char * found_char_pos = strchr(str2, c2); // 0x4053d6
    int64_t v87 = *v82; // 0x4053db
    v2 = v87;
    int64_t v88 = *v85; // 0x4053e5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4053f0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4056e0
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4056ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x40541e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4053d6
    char v91 = *(char *)(v90 + 1); // 0x40540b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4053c5
        if (v91 != 58) {
            // 0x40541e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405634
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405738
                *v8 = 0;
            } else {
                // 0x40571c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40565e
            *v83 = 0;
            // 0x40541e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40563e
        if (v93 != 0) {
            // 0x4056d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40565e
            *v83 = 0;
            // 0x40541e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405651
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40565e
            *v83 = 0;
            // 0x40541e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40579a
            __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40574a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405751
        // 0x40565e
        *v83 = 0;
        // 0x40541e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4055a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4055ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4057d0
                __fprintf_chk(g30, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405781
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405788
            // 0x40541e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4055b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4055ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4055d5;
  lab_0x4054e6:
    // 0x4054e6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405324;
  lab_0x4055d5:;
    int64_t v99 = function_404c20(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4055f3
    // 0x40541e
    return v99 & 0xffffffff;
  lab_0x405476:;
    int32_t v100 = v55; // 0x405476
    if (v100 != (int32_t)v59) {
        // 0x40547a
        *(int32_t *)a7 = v100;
    }
    // 0x40541e
    return 0xffffffff;
  lab_0x40543a:
    // 0x40543a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405441
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40541e
    return v99 & 0xffffffff;
  lab_0x405580:
    // 0x405580
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4053b5;
  lab_0x405534:
    // 0x405534
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404c20(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x40555a
    if ((int32_t)v101 != -1) {
        // 0x40541e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40556f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405580;
}
// Address range: 0x405810 - 0x405866
int64_t function_405810(int64_t a1) {
    // 0x405810
    *(int32_t *)&g40 = g26;
    *(int32_t *)&g41 = g25;
    int64_t v1; // 0x405810
    int64_t result = function_405240(v1, v1, v1, v1, v1, v1, &g40, a1 & 0xffffffff); // 0x405836
    g26 = *(int32_t *)&g40;
    g45 = g43;
    *(int32_t *)&g24 = g42;
    return result;
}
// Address range: 0x405870 - 0x405888
int64_t function_405870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405870
    return function_405810(1);
}
// Address range: 0x405890 - 0x4058a3
int64_t function_405890(int32_t a1, int64_t a2, char * a3, char (**a4)[11], int32_t a5, int64_t a6) {
    // 0x405890
    return function_405810(0);
}
// Address range: 0x4058b0 - 0x4058c5
int64_t function_4058b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4058b0
    return function_405240(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4058d0 - 0x4058e6
int64_t function_4058d0(void) {
    // 0x4058d0
    return function_405810(0);
}
// Address range: 0x4058f0 - 0x405908
int64_t function_4058f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4058f0
    return function_405240(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405910 - 0x40598a
int64_t function_405910(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40591b
    int64_t v2 = (int64_t)&g10; // 0x40591b
    int32_t * pwc; // 0x405910
    int64_t v3; // 0x405910
    int64_t n; // 0x405910
    if (a2 == 0) {
        goto lab_0x405962;
    } else {
        // 0x40591d
        if (a3 == 0) {
            // 0x405948
            return -2;
        }
        // 0x405929
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405962;
        } else {
            goto lab_0x405934;
        }
    }
  lab_0x405962:
    // 0x405962
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405910
    pwc = (int32_t *)&v4;
    goto lab_0x405934;
  lab_0x405934:;
    char * wstr = (char *)v3; // 0x40593a
    int64_t ps; // 0x405910
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40593a
    int64_t result = v5; // 0x40593a
    if (v5 < 0xfffffffe) {
        // 0x405948
        return result;
    }
    int64_t result2 = result; // 0x405979
    if ((char)function_4059f0(0, v3) == 0) {
        // 0x40597b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405948
    return result2;
}
// Address range: 0x405990 - 0x4059ed
int64_t function_405990(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405997
    int64_t v2; // 0x405990
    int64_t result = function_405fc0(a1, v2); // 0x4059a8
    if ((v2 & 32) != 0) {
        // 0x4059d0
        if ((int32_t)result == 0) {
            // 0x4059d4
            *__errno_location() = 0;
        }
        // 0x4059ca
        return 0xffffffff;
    }
    // 0x4059b1
    if ((int32_t)result == 0) {
        // 0x4059ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4059b8
    if (v1 == 0) {
        // 0x4059ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4059ca
    return result2;
}
// Address range: 0x4059f0 - 0x405a4e
int64_t function_4059f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4059f6
    if (locale == NULL) {
        // 0x405a23
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4059f6
    bool v2; // 0x4059f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x4059f0
    int64_t v5 = v1; // 0x4059f0
    int64_t v6 = 2; // 0x405a15
    unsigned char v7 = *(char *)v5; // 0x405a15
    char v8 = *(char *)v4; // 0x405a15
    char v9 = v8; // 0x405a15
    bool v10 = false; // 0x405a15
    while (v7 == v8) {
        // 0x405a08
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405a21
    int64_t v13 = v1; // 0x405a21
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405a23
        return 0;
    }
    int64_t v14 = 6; // 0x405a21
    unsigned char v15 = *(char *)v13; // 0x405a3d
    char v16 = *(char *)v12; // 0x405a3d
    char v17 = v16; // 0x405a3d
    bool v18 = false; // 0x405a3d
    while (v15 == v16) {
        // 0x405a30
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
// Address range: 0x405a50 - 0x405fb2
int64_t function_405a50(void) {
    char * v1 = nl_langinfo(14); // 0x405a66
    char * v2 = g44; // 0x405a6b
    char * v3; // 0x405a50
    int64_t v4; // 0x405a50
    int64_t v5; // 0x405a50
    int64_t v6; // 0x405a50
    int64_t v7; // 0x405a50
    int32_t size; // 0x405a50
    int32_t size2; // 0x405a50
    int32_t len; // 0x405b22
    int64_t v8; // 0x405b22
    char * env_val; // 0x405b0d
    if (v2 == NULL) {
        // 0x405b08
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405b75;
        } else {
            // 0x405b1a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405b75;
            } else {
                // 0x405b1f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405b0d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405fa5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405b75;
                    } else {
                        // 0x405f19
                        size2 = len + 14;
                        goto lab_0x405b3b;
                    }
                } else {
                    goto lab_0x405b3b;
                }
            }
        }
    } else {
        // 0x405a50
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405a8a;
    }
  lab_0x405dbc:;
    // 0x405dbc
    struct _IO_FILE * stream; // 0x405bfb
    int32_t v10 = __uflow(stream); // 0x405dbf
    int64_t v11; // 0x405a50
    int64_t v12 = v11; // 0x405dc9
    int64_t v13; // 0x405a50
    int64_t v14 = v13; // 0x405dc9
    int32_t v15 = v10; // 0x405dc9
    int64_t v16; // 0x405a50
    int64_t v17 = v16; // 0x405dc9
    int64_t v18 = v11; // 0x405dc9
    int64_t v19 = v13; // 0x405dc9
    int64_t v20 = v16; // 0x405dc9
    if (v10 == -1) {
        // break -> 0x405dcf
        goto lab_0x405dcf;
    }
    goto lab_0x405c49;
  lab_0x405c3e:;
    // 0x405c3e
    int64_t v90; // 0x405a50
    int64_t * v32; // 0x405c30
    *v32 = v90 + 1;
    int64_t v89; // 0x405a50
    v12 = v89;
    int64_t v91; // 0x405a50
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405a50
    v17 = v92;
    goto lab_0x405c49;
  lab_0x405c49:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405a50
    int32_t v25; // bp-120, 0x405a50
    int32_t v26; // bp-184, 0x405a50
    int64_t v27; // 0x405bfb
    int64_t v28; // 0x405c18
    int64_t v29; // 0x405c1d
    int64_t * v30; // 0x405c34
    switch (c) {
        case 32: {
            goto lab_0x405c30;
        }
        case 10: {
            goto lab_0x405c30;
        }
        case 9: {
            goto lab_0x405c30;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405e21
            int32_t v33; // 0x405a50
            char v34; // 0x405a50
            int32_t v35; // 0x405e2e
            if (v31 < *v30) {
                // 0x405e00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x405e2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405e21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405e00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x405e2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405e10
                v36 = v33;
            }
            // 0x405eff
            if (v36 == -1) {
                // break -> 0x405dcf
                break;
            }
            goto lab_0x405c30;
        }
        default: {
            // 0x405c5f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x405dcf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405c88
            int64_t v39 = v37 + 4; // 0x405c8a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405c96
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405c98
            while (v41 == 0) {
                // 0x405c88
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405cb6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405cc2
            int64_t v45 = v43 + 4; // 0x405cc4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405cd0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405cd2
            while (v47 == 0) {
                // 0x405cc2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405cbf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405ce8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405cf8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x405cfc
            int64_t v52 = v51 + v48; // 0x405d05
            int64_t * mem; // 0x405a50
            int64_t v53; // 0x405a50
            int64_t v54; // 0x405a50
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x405e3b
                int64_t v56 = v55 + 3; // 0x405e47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405d21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405d30
            if (mem == NULL) {
                // 0x405f5c
                free((int64_t *)v21);
                function_405fc0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x405bd4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405d48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405d52
            uint32_t v62 = (int32_t)v59; // 0x405d55
            int64_t v63; // 0x405a50
            if (v62 >= 8) {
                // 0x405e64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405e7e
                int64_t v66 = v61 - v65; // 0x405e82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405e8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405e9e
                    int64_t v70 = v69 & 0xffffffff; // 0x405e9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405e9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405f2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405d67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x405d6b
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
            int64_t v73 = v51 + 1; // 0x405d7b
            int64_t v74 = v60 - 1; // 0x405d7f
            uint32_t v75 = (int32_t)v73; // 0x405d84
            int64_t v76; // 0x405a50
            if (v75 >= 8) {
                // 0x405eb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405ebc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405ecc
                int64_t v80 = v74 - v79; // 0x405ed0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405edb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405eeb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405ee9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405f46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405f4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405d96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x405d9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405f93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x405dae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405c3e;
            } else {
                goto lab_0x405dbc;
            }
        }
    }
  lab_0x405c30:;
    int64_t v93 = v23; // 0x405a50
    int64_t v94 = v22; // 0x405a50
    int64_t v95 = v21; // 0x405a50
    goto lab_0x405c30_2;
  lab_0x405b75:;
    int64_t * mem3 = malloc(size); // 0x405b75
    int64_t v97 = (int64_t)&g10; // 0x405b80
    int64_t v98; // 0x405a50
    int64_t path; // 0x405a50
    if (mem3 == NULL) {
        goto lab_0x405b52;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405b75
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405b96;
    }
  lab_0x405a8a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x405a7d
    char v100 = *v3; // 0x405a8a
    int64_t v101; // 0x405a50
    if (v100 == 0) {
        // 0x405ae4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405a50
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405a50
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405ad0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405ad7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405aa0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405aad
        char v107 = *(char *)v106; // 0x405ab2
        v102 = v107;
        if (v107 == 0) {
            // 0x405ae4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405abb
    v104 = v103 + 1;
  lab_0x405ad7:
    // 0x405ae4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405b52:;
    char * v108 = (char *)v97;
    g44 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405a8a;
  lab_0x405b96:;
    int64_t v109 = v98 + path; // 0x405b96
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405bc2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x405bf1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405f22
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x405c15
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405c30_2:;
                uint64_t v96 = *v32; // 0x405c30
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x405dbc;
                } else {
                    goto lab_0x405c3e;
                }
            }
          lab_0x405dcf:
            // 0x405dcf
            function_405fc0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x405dee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405bd4;
  lab_0x405b3b:;
    int64_t * mem4 = malloc(size2); // 0x405b3b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x405be1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405b96;
    } else {
        goto lab_0x405b52;
    }
  lab_0x405bd4:
    // 0x405bd4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405b52;
}
// Address range: 0x405fc0 - 0x40603b
int64_t function_405fc0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405fc7
    if (fileno(stream) < 0) {
        // 0x406027
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405fda
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40600b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406027
            return fclose(stream);
        }
    }
    // 0x405fdc
    if ((int32_t)function_406040(a1, v1) == 0) {
        // 0x406027
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405fe8
    int32_t v3 = *v2; // 0x405ff0
    int64_t result = fclose(stream); // 0x405ffe
    if (v3 != 0) {
        // 0x406030
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406000
    return result;
}
// Address range: 0x406040 - 0x406080
int64_t function_406040(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40605a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40605a
        return fflush(stream);
    }
    // 0x406068
    function_406080(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406080 - 0x4060d7
int64_t function_406080(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406080
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40608a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4060bb
    int64_t result = -1; // 0x4060c4
    if (v1 != -1) {
        // 0x4060c6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4060d2
    return result;
}
// Address range: 0x4060e0 - 0x40613d
int64_t function_4060e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4060e0
    return function_401330();
}
// Address range: 0x406140 - 0x406141
int64_t function_406140(void) {
    // 0x406140
    int64_t result; // 0x406140
    return result;
}
// Address range: 0x406150 - 0x406168
int64_t function_406150(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406150
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406168 - 0x406188
int64_t function_406168(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406172
    while (*(int64_t *)v1 != -1) {
        // 0x406173
        v1 -= 8;
    }
    // 0x406184
    return result;
}
