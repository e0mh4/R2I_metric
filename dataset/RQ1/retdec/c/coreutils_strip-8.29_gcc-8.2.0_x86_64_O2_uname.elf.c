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
// Address range: 0x401600 - 0x4019a0
int64_t function_401600(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x401602
    function_401ec0(a2);
    setlocale(LC_ALL, (char *)&g2);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_405940(0x401e20, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2 = 0; // 0x401652
    int32_t v3; // 0x401600
    int64_t v4; // 0x401600
    int64_t v5; // 0x401600
    int64_t v6; // 0x401600
    int64_t name; // bp-424, 0x401600
    int32_t v7; // 0x4017f3
    if (g18 == 2) {
        int64_t v8 = function_405080(v1, a2, (char *)&g2, (char (**)[4])&g3, 0, a6); // 0x40179d
        int32_t v9 = v8;
        if (v9 == -1) {
            // 0x4017f3
            v7 = *(int32_t *)0x60925c;
            if (v7 != (int32_t)a1) {
                goto lab_0x401967;
            } else {
                int32_t v10 = uname((struct utsname *)&name); // 0x401809
                v6 = 16;
                if (v10 == -1) {
                    goto lab_0x40184a;
                } else {
                    goto lab_0x401920;
                }
            }
        } else {
            // 0x4017a7
            v3 = v9;
            if (v9 == -131) {
                int64_t v11 = g18 != 1 ? (int64_t)"arch" : (int64_t)"uname"; // 0x4017c6
                function_403f60((int64_t)g30, v11, "GNU coreutils", (int64_t)g19, "David MacKenzie", (int32_t)"Karel Zak");
                exit(0);
                // UNREACHABLE
            }
            goto lab_0x401768;
        }
    } else {
        int64_t v12; // 0x401600
        while (true) {
          lab_0x401660_2:
            // 0x401660
            v12 = v2;
            int32_t v13 = function_405080(v1, a2, "asnrvmpio", &g4, 0, a6);
            switch (v13) {
                case -1: {
                    goto lab_0x40181d;
                }
                case 110: {
                    // 0x401660
                    v2 = v12 & 0xfffffffd | 2;
                    goto lab_0x401660_2;
                }
                default: {
                    int64_t v14; // 0x401600
                    if (v13 > 110) {
                        if (v13 == 114) {
                            // 0x401782
                            v14 = v12 & 0xfffffffb | 4;
                        } else {
                            if (v13 > 114) {
                                if (v13 != 115) {
                                    if (v13 != 118) {
                                        // 0x401996
                                        return function_401ad0(1);
                                    }
                                    // 0x401759
                                    v14 = v12 & 0xfffffff7 | 8;
                                } else {
                                    // 0x4016d5
                                    v14 = v12 & 0xfffffffe | 1;
                                }
                            } else {
                                if (v13 != 111) {
                                    if (v13 != 112) {
                                        // 0x401996
                                        return function_401ad0(1);
                                    }
                                    // 0x4016c9
                                    v14 = v12 & 0xffffffdf | 32;
                                } else {
                                    // 0x40169c
                                    v14 = v12 | 128;
                                }
                            }
                        }
                    } else {
                        // 0x4016a8
                        v14 = 0xffffffff;
                        if (v13 != 97) {
                            if (v13 <= 97) {
                                // 0x4016f8
                                v3 = v13;
                                if (v13 == -131) {
                                    int64_t v15 = g18 != 1 ? (int64_t)"arch" : (int64_t)"uname"; // 0x401717
                                    function_403f60((int64_t)g30, v15, "GNU coreutils", (int64_t)g19, "David MacKenzie", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401768;
                            }
                            if (v13 != 105) {
                                if (v13 != 109) {
                                    // 0x401996
                                    return function_401ad0(1);
                                }
                                // 0x4016e9
                                v14 = v12 & 0xffffffef | 16;
                            } else {
                                // 0x4016b8
                                v14 = v12 & 0xffffffbf | 64;
                            }
                        }
                    }
                    // 0x401660
                    v2 = v14;
                    goto lab_0x401660_2;
                }
            }
        }
      lab_0x40181d:
        // 0x40181d
        v7 = g28;
        if (g28 != (int32_t)a1) {
            goto lab_0x401967;
        } else {
            // 0x40182d
            v4 = v12;
            if ((int32_t)v12 != 0) {
                goto lab_0x401874;
            } else {
                int32_t v16 = uname((struct utsname *)&name); // 0x40183c
                v5 = 1;
                if (v16 != -1) {
                    goto lab_0x401900;
                } else {
                    goto lab_0x40184a;
                }
            }
        }
    }
  lab_0x401967:
    // 0x401967
    function_403ae0(*(int64_t *)(8 * (int64_t)v7 + a2));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x401996
    return function_401ad0(1);
  lab_0x401768:
    // 0x401768
    if (v3 != -130) {
        // 0x401996
        return function_401ad0(1);
    }
    // 0x401773
    function_401ad0(0);
    // UNREACHABLE
  lab_0x401874:;
    int64_t v17 = v4;
    int64_t v18 = v17; // 0x401877
    int64_t v19; // 0x401600
    if (v17 % 32 != 0) {
        // 0x4018e7
        if (uname((struct utsname *)&name) == -1) {
            goto lab_0x40184a;
        } else {
            // 0x4018fb
            v5 = v17;
            v19 = v17;
            if (v17 % 2 == 0) {
                goto lab_0x401908;
            } else {
                goto lab_0x401900;
            }
        }
    } else {
        goto lab_0x401879;
    }
  lab_0x40184a:;
    char * format = dcgettext(NULL, "cannot get system name", 5); // 0x401856
    error(1, *__errno_location(), format);
    v4 = (int64_t)format;
    goto lab_0x401874;
  lab_0x401920:;
    // 0x401920
    int64_t v20; // bp-164, 0x401600
    function_401a80((char *)&v20);
    v18 = v6;
    goto lab_0x401879;
  lab_0x401879:;
    int64_t v21 = v18;
    if ((v21 & 32) != 0 && (int32_t)v21 != -1) {
        // 0x40188a
        function_401a80("unknown");
    }
    if ((v21 & 64) != 0 && (int32_t)v21 != -1) {
        // 0x40189e
        function_401a80("unknown");
    }
    if ((char)v21 <= -1) {
        // 0x4018db
        function_401a80("GNU/Linux");
    }
    int64_t v22 = (int64_t)g30; // 0x4018ad
    int64_t * v23 = (int64_t *)(v22 + 40); // 0x4018b4
    uint64_t v24 = *v23; // 0x4018b4
    if (v24 >= *(int64_t *)(v22 + 48)) {
        // 0x401958
        __overflow(g30, 10);
    } else {
        // 0x4018c2
        *v23 = v24 + 1;
        *(char *)v24 = 10;
    }
    // 0x4018cd
    return 0;
  lab_0x401900:
    // 0x401900
    function_401a80((char *)&name);
    v19 = v5;
    goto lab_0x401908;
  lab_0x401908:
    // 0x401908
    if ((v19 & 2) != 0) {
        // 0x401931
        int64_t v25; // bp-359, 0x401600
        function_401a80((char *)&v25);
    }
    if ((v19 & 4) != 0) {
        // 0x40194a
        int64_t v26; // bp-294, 0x401600
        function_401a80((char *)&v26);
    }
    if ((v19 & 8) != 0) {
        // 0x40193c
        int64_t v27; // bp-229, 0x401600
        function_401a80((char *)&v27);
    }
    // 0x401917
    v18 = v19;
    v6 = v19;
    if ((v19 & 16) == 0) {
        goto lab_0x401879;
    } else {
        goto lab_0x401920;
    }
}
// Address range: 0x4019a0 - 0x4019cb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4019a0
    int64_t v1; // 0x4019a0
    __libc_start_main(0x401600, (int32_t)a4, (char **)&v1, (void (*)())0x4058d0, (void (*)())0x405930, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4019cb - 0x4019ea
int64_t function_4019cb(void) {
    // 0x4019cb
    return &g29;
}
// Address range: 0x4019ea - 0x401a21
int64_t function_4019ea(void) {
    // 0x4019ea
    return 0;
}
// Address range: 0x401a21 - 0x401a78
int64_t function_401a21(void) {
    // 0x401a21
    if (g33 != 0) {
        // 0x401a77
        int64_t result; // 0x401a21
        return result;
    }
    int64_t v1 = g34; // 0x401a54
    int64_t result2; // 0x401a66
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401a66
        result2 = function_4019cb();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401a56
        v1++;
    }
    // 0x401a4a
    g34 = v1;
    // 0x401a66
    result2 = function_4019cb();
    g33 = 1;
    return result2;
}
// Address range: 0x401a78 - 0x401a7d
int64_t function_401a78(void) {
    // 0x401a78
    return function_4019ea();
}
// Address range: 0x401a80 - 0x401acc
int64_t function_401a80(char * a1) {
    // 0x401a80
    if (g35 == 0) {
        // 0x401aa9
        g35 = 1;
        return fputs_unlocked(a1, g30);
    }
    int64_t v1 = (int64_t)g30; // 0x401a8d
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x401a94
    uint64_t v3 = *v2; // 0x401a94
    if (v3 >= *(int64_t *)(v1 + 48)) {
        // 0x401ac0
        __overflow(g30, 32);
    } else {
        // 0x401a9e
        *v2 = v3 + 1;
        *(char *)v3 = 32;
    }
    // 0x401aa9
    g35 = 1;
    return fputs_unlocked(a1, g30);
}
// Address range: 0x401ad0 - 0x401e00
int64_t function_401ad0(int32_t status) {
    if (status != 0) {
        // 0x401aeb
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401b10
        exit(status);
        // UNREACHABLE
    }
    // 0x401b18
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]...\n", 5));
    struct _IO_FILE * v1 = g30; // 0x401b4e
    int64_t v2 = (int64_t)"Print machine architecture.\n\n"; // 0x401b4e
    if (g18 == 1) {
        // 0x401d2e
        fputs_unlocked(dcgettext(NULL, "Print certain system information.  With no OPTION, same as -s.\n\n  -a, --all                print all information, in the following order,\n                             except omit -p and -i if unknown:\n  -s, --kernel-name        print the kernel name\n  -n, --nodename           print the network node hostname\n  -r, --kernel-release     print the kernel release\n", 5), g30);
        v1 = g30;
        v2 = (int64_t)"  -v, --kernel-version     print the kernel version\n  -m, --machine            print the machine hardware name\n  -p, --processor          print the processor type (non-portable)\n  -i, --hardware-platform  print the hardware platform (non-portable)\n  -o, --operating-system   print the operating system\n";
    }
    // 0x401b54
    fputs_unlocked(dcgettext(NULL, (char *)v2, 5), v1);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    char * v3 = (char *)&g1; // bp-136, 0x401bc9
    int64_t v4 = (int64_t)&v3; // 0x401c46
    int64_t str = (int64_t)&g1; // 0x401c46
    int64_t v5 = v4; // 0x401c66
    while (strcmp(g18 != 1 ? "arch" : "uname", (char *)str) != 0) {
        // 0x401c50
        v4 += 16;
        str = *(int64_t *)v4;
        v5 = v4;
        if (str == 0) {
            // break -> 0x401c68
            break;
        }
        v5 = v4;
    }
    // 0x401c68
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v5 + 8) == 0) {
        if (locale == NULL) {
            goto lab_0x401da0;
        } else {
            // 0x401d8a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401dd8
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401cca;
            } else {
                goto lab_0x401da0;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401cca;
        } else {
            // 0x401cb0
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401dd8
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401cca;
            } else {
                goto lab_0x401cca;
            }
        }
    }
  lab_0x401da0:
    // 0x401da0
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401d03
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b10
    exit(status);
    // UNREACHABLE
  lab_0x401cca:
    // 0x401cca
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401d03
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401b10
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401e00 - 0x401e08
int64_t function_401e00(int64_t a1) {
    // 0x401e00
    g37 = a1;
    int64_t result; // 0x401e00
    return result;
}
// Address range: 0x401e10 - 0x401e18
int64_t function_401e10(int64_t a1) {
    // 0x401e10
    g36 = a1;
    int64_t result; // 0x401e10
    return result;
}
// Address range: 0x401e20 - 0x401ebe
int64_t function_401e20(void) {
    // 0x401e20
    int32_t * err_num; // 0x401e36
    if ((int32_t)function_405180((int64_t)g30) == 0) {
        goto lab_0x401e4c;
    } else {
        // 0x401e36
        err_num = __errno_location();
        if (g36 == 0) {
            goto lab_0x401e63;
        } else {
            // 0x401e47
            if (*err_num != 32) {
                goto lab_0x401e63;
            } else {
                goto lab_0x401e4c;
            }
        }
    }
  lab_0x401e4c:;
    int64_t result = function_405180((int64_t)g32); // 0x401e53
    if ((int32_t)result == 0) {
        // 0x401e5c
        return result;
    }
    // 0x401e9e
    _exit(g20);
    // UNREACHABLE
  lab_0x401e63:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401e6f
    if (g37 == 0) {
        // 0x401ea9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401e83
        error(0, *err_num, "%s: %s", (char *)function_403930((int64_t)g37), v1);
    }
    // 0x401e9e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x401ec0 - 0x401f59
int64_t function_401ec0(int64_t str) {
    // 0x401ec0
    if (str == 0) {
        // 0x401f39
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x401ece
    int64_t result = (int64_t)found_char_pos; // 0x401ece
    if (found_char_pos == NULL) {
        // 0x401f29
        g38 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x401ed8
    if (v1 - str < 7) {
        // 0x401f29
        g38 = str;
        g31 = str;
        return result;
    }
    // 0x401ee8
    bool v2; // 0x401ec0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x401ec0
    int64_t v5 = result - 6; // 0x401ec0
    int64_t v6 = 7; // 0x401ef6
    unsigned char v7 = *(char *)v5; // 0x401ef6
    char v8 = *(char *)v4; // 0x401ef6
    char v9 = v8; // 0x401ef6
    bool v10 = false; // 0x401ef6
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
    int64_t v12 = (int64_t)"lt-"; // 0x401f00
    int64_t v13 = v1; // 0x401f00
    int64_t v14 = 3; // 0x401f00
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x401f29
        g38 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x401f12
    char v16 = *(char *)v12; // 0x401f12
    char v17 = v16; // 0x401f12
    bool v18 = false; // 0x401f12
    while (v15 == v16) {
        // 0x401f02
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
    int64_t v20 = v1; // 0x401f1c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x401f1e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x401f29
    g38 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x401f60 - 0x402052
int64_t function_401f60(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401f74
    int64_t result = (int64_t)v1; // 0x401f74
    if (result != a1) {
        // 0x401f81
        return result;
    }
    int64_t v2 = function_405240(); // 0x401f90
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402046
    if (v3 == 85) {
        // 0x401fa0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402038
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x401fce
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x401fdb
        // 0x401f81
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402038
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x40201d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40202a
    // 0x401f81
    return result4;
}
// Address range: 0x402060 - 0x4020b7
int64_t function_402060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402060
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4020a8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4020b7 - 0x403281
int64_t function_4020b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402101
    int64_t v3 = 0; // 0x402101
    int64_t v4; // 0x4020b7
    int64_t v5; // 0x4020b7
    int64_t v6; // 0x4020b7
    int64_t v7; // 0x4020b7
    int64_t v8; // 0x4020b7
    int64_t v9; // 0x4020b7
    int64_t v10; // 0x4020b7
    int64_t v11; // 0x4020b7
    int64_t v12; // 0x4020b7
    int64_t v13; // 0x4020b7
    int64_t v14; // 0x4020b7
    int64_t v15; // 0x4020b7
    int64_t v16; // 0x4020b7
    int64_t v17; // 0x4020b7
    int64_t v18; // 0x4020b7
    int64_t result; // 0x4020b7
    int64_t v19; // 0x4020b7
    int32_t wc; // bp+132, 0x4020b7
    int64_t ps; // bp+136, 0x4020b7
    char v20; // 0x402670
    int64_t v21; // 0x402670
    int64_t v22; // 0x402a18
    int64_t v23; // 0x4020b7
    int64_t v24; // 0x402a37
    int32_t v25; // 0x4020b7
    while (true) {
      lab_0x402108_2:
        // 0x402108
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4020b7
        int64_t v27; // 0x40213c
        while (true) {
          lab_0x402108:
            // 0x402108
            v5 = v26;
            bool v28 = v15 == v5; // 0x402113
            if (v15 == -1) {
                // 0x402115
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402123
            if (v28) {
                // break (via goto) -> 0x402888
                goto lab_0x402888;
            }
            // 0x40212c
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
                    // 0x40271b
                    if (v25 % 2 == 0) {
                        goto lab_0x402261;
                    }
                    // 0x402b3d
                    v26 = v5 + 1;
                    goto lab_0x402108;
                }
                case 7: {
                    goto lab_0x402261;
                }
                case 8: {
                    goto lab_0x402261;
                }
                case 9: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402261;
                }
                case 12: {
                    goto lab_0x402261;
                }
                case 13: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40222d;
                }
                case 36: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402261;
                }
                case 38: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402261;
                }
                case 44: {
                    goto lab_0x402261;
                }
                case 45: {
                    goto lab_0x402261;
                }
                case 46: {
                    goto lab_0x402261;
                }
                case 47: {
                    goto lab_0x402261;
                }
                case 48: {
                    goto lab_0x402261;
                }
                case 49: {
                    goto lab_0x402261;
                }
                case 50: {
                    goto lab_0x402261;
                }
                case 51: {
                    goto lab_0x402261;
                }
                case 52: {
                    goto lab_0x402261;
                }
                case 53: {
                    goto lab_0x402261;
                }
                case 54: {
                    goto lab_0x402261;
                }
                case 55: {
                    goto lab_0x402261;
                }
                case 56: {
                    goto lab_0x402261;
                }
                case 57: {
                    goto lab_0x402261;
                }
                case 58: {
                    goto lab_0x402261;
                }
                case 59: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402261;
                }
                case 66: {
                    goto lab_0x402261;
                }
                case 67: {
                    goto lab_0x402261;
                }
                case 68: {
                    goto lab_0x402261;
                }
                case 69: {
                    goto lab_0x402261;
                }
                case 70: {
                    goto lab_0x402261;
                }
                case 71: {
                    goto lab_0x402261;
                }
                case 72: {
                    goto lab_0x402261;
                }
                case 73: {
                    goto lab_0x402261;
                }
                case 74: {
                    goto lab_0x402261;
                }
                case 75: {
                    goto lab_0x402261;
                }
                case 76: {
                    goto lab_0x402261;
                }
                case 77: {
                    goto lab_0x402261;
                }
                case 78: {
                    goto lab_0x402261;
                }
                case 79: {
                    goto lab_0x402261;
                }
                case 80: {
                    goto lab_0x402261;
                }
                case 81: {
                    goto lab_0x402261;
                }
                case 82: {
                    goto lab_0x402261;
                }
                case 83: {
                    goto lab_0x402261;
                }
                case 84: {
                    goto lab_0x402261;
                }
                case 85: {
                    goto lab_0x402261;
                }
                case 86: {
                    goto lab_0x402261;
                }
                case 87: {
                    goto lab_0x402261;
                }
                case 88: {
                    goto lab_0x402261;
                }
                case 89: {
                    goto lab_0x402261;
                }
                case 90: {
                    goto lab_0x402261;
                }
                case 91: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402261;
                }
                case 94: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402261;
                }
                case 96: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402261;
                }
                case 98: {
                    goto lab_0x402261;
                }
                case 99: {
                    goto lab_0x402261;
                }
                case 100: {
                    goto lab_0x402261;
                }
                case 101: {
                    goto lab_0x402261;
                }
                case 102: {
                    goto lab_0x402261;
                }
                case 103: {
                    goto lab_0x402261;
                }
                case 104: {
                    goto lab_0x402261;
                }
                case 105: {
                    goto lab_0x402261;
                }
                case 106: {
                    goto lab_0x402261;
                }
                case 107: {
                    goto lab_0x402261;
                }
                case 108: {
                    goto lab_0x402261;
                }
                case 109: {
                    goto lab_0x402261;
                }
                case 110: {
                    goto lab_0x402261;
                }
                case 111: {
                    goto lab_0x402261;
                }
                case 112: {
                    goto lab_0x402261;
                }
                case 113: {
                    goto lab_0x402261;
                }
                case 114: {
                    goto lab_0x402261;
                }
                case 115: {
                    goto lab_0x402261;
                }
                case 116: {
                    goto lab_0x402261;
                }
                case 117: {
                    goto lab_0x402261;
                }
                case 118: {
                    goto lab_0x402261;
                }
                case 119: {
                    goto lab_0x402261;
                }
                case 120: {
                    goto lab_0x402261;
                }
                case 121: {
                    goto lab_0x402261;
                }
                case 122: {
                    goto lab_0x402261;
                }
                case 123: {
                    goto lab_0x402205;
                }
                case 124: {
                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402205;
                }
                case 126: {
                    goto lab_0x40222d;
                }
                default: {
                    goto lab_0x402605;
                }
            }
        }
      lab_0x402605:
        if (v23 != 1) {
            // 0x402970
            ps = 0;
            int64_t len = v15; // 0x402980
            if (v15 == -1) {
                // 0x402982
                len = strlen((char *)str);
            }
            // 0x4029ae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x402a0f:
                // 0x402a0f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x402a14
                int64_t v30 = v29 + str;
                v24 = function_405100(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x402f8a_2;
                    }
                    case -1: {
                        goto lab_0x402f8a_2;
                    }
                    case -2: {
                        // 0x40306d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4030a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4030aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4030b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4030b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x402f8a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x402f8a_2;
                    }
                    case 1: {
                        goto lab_0x4029e0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x402a8c
                        char v34 = *(char *)v33; // 0x402a9d
                        unsigned char v35; // 0x4020b7
                        if (v34 < 125) {
                            // 0x402aa8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x402abf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402060(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x402a90
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x402a9d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x402aa8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x402abf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402060(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x402a90
                            v33++;
                        }
                        goto lab_0x4029e0;
                    }
                }
            }
            goto lab_0x402f8a_2;
        } else {
            // 0x402654
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402261;
        }
    }
  lab_0x402888:
    // 0x402888
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40318a
        if (v8 > result) {
            // 0x403193
            *(char *)(v12 + result) = 0;
        }
        // 0x4024b7
        return result;
    }
    return function_402060(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402261:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402270
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40247a_2;
        }
    }
    int64_t v39 = result; // 0x402371
    char v40 = v20; // 0x402371
    int64_t v41 = v38; // 0x402371
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402371
    int64_t v43 = v36; // 0x402371
    goto lab_0x4022ed;
  lab_0x40247a_2:
    // 0x4024b7
    return function_402060(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402f8a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402261;
    } else {
        uint64_t v49 = v46 + v5; // 0x402b5e
        int64_t v50 = v5 + 1; // 0x402c41
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x402c48
        char v52 = v20; // 0x402c48
        int64_t v53 = result; // 0x402c48
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x402c11
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x402c15
            int64_t v56 = v54 + 1; // 0x402c1a
            int64_t v57 = v51 + 1; // 0x402c41
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x402c0c
                v54 = v56;
                if (v47 > v54) {
                    // 0x402c11
                    *(char *)(v54 + v48) = v55;
                }
                // 0x402c15
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
        goto lab_0x4022ed;
    }
  lab_0x4029e0:
    // 0x4029e0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4029ff
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x402a02
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x402f8a
        goto lab_0x402f8a_2;
    }
    goto lab_0x402a0f;
  lab_0x40222d:
    // 0x40222d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40247a_2;
    }
    goto lab_0x402261;
  lab_0x402205:;
    bool v60 = v15 == 1; // 0x402210
    if (v15 == -1) {
        // 0x402212
        v60 = *(char *)v1 == 0;
    }
    // 0x40221e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402261;
    } else {
        goto lab_0x40222d;
    }
  lab_0x4022ed:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4022f2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4022f6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402108_2;
}
// Address range: 0x403290 - 0x40342e
int64_t function_403290(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403292
    int32_t * v3 = __errno_location(); // 0x4032ac
    int64_t v4 = (int64_t)g22; // 0x4032b1
    int32_t v5 = *v3; // 0x4032bb
    int64_t v6 = v4; // 0x4032d1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403429
            function_4042f0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4032e0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4032e7
        int64_t v9; // 0x403290
        if (g22 == &g23) {
            int64_t v10 = function_404100(0, v8); // 0x40340a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x40340f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404100(v4, v8); // 0x4032fb
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x40330a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x40330a
        int32_t v14 = v7; // 0x403311
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403341
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40334b
    int64_t * v17 = (int64_t *)v15; // 0x40334e
    uint64_t v18 = *v17; // 0x40334e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403351
    int64_t result = *v19; // 0x403351
    int64_t v20; // 0x403290
    uint64_t v21 = function_402060(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403374
    if (v18 > v21) {
        // 0x4033eb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403387
    *v17 = v22;
    if (result != (int64_t)&g39) {
        // 0x403397
        free((int64_t *)result);
    }
    int64_t result2 = function_4040a0(v22); // 0x4033b1
    *v19 = result2;
    int64_t v23; // 0x403290
    function_402060(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4033eb
    *v3 = v5;
    return result2;
}
// Address range: 0x403430 - 0x403464
int64_t function_403430(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403437
    int64_t result = function_4042a0(a1 == 0 ? (int64_t)&g40 : a1, 56); // 0x403456
    return result;
}
// Address range: 0x403470 - 0x40347f
int64_t function_403470(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g40 : a1); // 0x40347c
    return result;
}
// Address range: 0x403480 - 0x40348f
int64_t function_403480(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x403488
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g40;
}
// Address range: 0x403490 - 0x4034c3
int64_t function_403490(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 + 8 : a1 + 8; // 0x4034a9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4034ae
    uint32_t v3 = *v2; // 0x4034ae
    uint32_t v4 = (int32_t)a2 % 32; // 0x4034b2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4034d0 - 0x4034e3
int64_t function_4034d0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g40 + 4 : a1 + 4); // 0x4034dc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4034f0 - 0x40351b
int64_t function_4034f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g40 : a1; // 0x4034f8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403515
        abort();
        // UNREACHABLE
    }
    // 0x40350c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g40;
}
// Address range: 0x403520 - 0x403592
int64_t function_403520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g40 : a5; // 0x403542
    int32_t * v2 = __errno_location(); // 0x40354b
    uint32_t v3 = *(int32_t *)v1; // 0x40356b
    int64_t result = function_402060(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40357a
    return result;
}
// Address range: 0x4035a0 - 0x403681
int64_t function_4035a0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g40 : a4; // 0x4035c2
    int32_t * v2 = __errno_location(); // 0x4035c8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4035e7
    int32_t * v4 = (int32_t *)v1; // 0x4035ea
    int64_t v5 = function_402060(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403605
    int64_t v6 = v5 + 1; // 0x40360a
    int64_t result = function_4040a0(v6); // 0x40361f
    function_402060(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403664
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40366d
    return result;
}
// Address range: 0x403690 - 0x40369a
int64_t function_403690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403690
    return function_4035a0(a1, a2, 0, a3);
}
// Address range: 0x4036a0 - 0x403735
int64_t function_4036a0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x4036a0
    int64_t v2 = v1; // 0x4036a0
    int64_t v3 = v2; // 0x4036b4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x4036d3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4036d0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x4036ed
    if (g23 != 0x6092c0) {
        // 0x4036ef
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g39;
        v6 = &g50;
    }
    int64_t result = v6; // 0x403711
    if (g22 != &g23) {
        // 0x403713
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g50;
    }
    // 0x403726
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x403740 - 0x403751
int64_t function_403740(void) {
    // 0x403740
    int64_t v1; // 0x403740
    return function_403290(v1, v1, -1, (int64_t *)&g40);
}
// Address range: 0x403760 - 0x40376a
int64_t function_403760(void) {
    // 0x403760
    int64_t v1; // 0x403760
    return function_403290(v1, v1, v1, (int64_t *)&g40);
}
// Address range: 0x403770 - 0x403786
int64_t function_403770(int64_t a1) {
    // 0x403770
    return function_403290(0, a1, -1, (int64_t *)&g40);
}
// Address range: 0x403790 - 0x4037a2
int64_t function_403790(int64_t a1, int64_t a2) {
    // 0x403790
    return function_403290(0, a1, a2, (int64_t *)&g40);
}
// Address range: 0x4037b0 - 0x403818
int64_t function_4037b0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4037c0
    return function_403290((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403820 - 0x403884
int64_t function_403820(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403830
    return function_403290((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403890 - 0x40389c
int64_t function_403890(int64_t a1, int64_t a2) {
    // 0x403890
    return function_4037b0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4038a0 - 0x4038af
int64_t function_4038a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4038a0
    return function_403820(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4038b0 - 0x403920
int64_t function_4038b0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x4038bd
    int128_t v2 = __asm_movdqa(g41); // 0x4038c5
    int128_t v3 = __asm_movdqa(g42); // 0x4038cd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4038e2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4038f8
    uint32_t v6 = *v5; // 0x4038f8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4038fd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403290(0, a1, a2, &v4);
}
// Address range: 0x403920 - 0x40392d
int64_t function_403920(int64_t a1, int64_t a2) {
    // 0x403920
    return function_4038b0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403930 - 0x403941
int64_t function_403930(int64_t a1) {
    // 0x403930
    return function_4038b0(a1, -1, 58);
}
// Address range: 0x403950 - 0x40395a
int64_t function_403950(void) {
    // 0x403950
    int64_t v1; // 0x403950
    return function_4038b0(v1, v1, 58);
}
// Address range: 0x403960 - 0x4039ce
int64_t function_403960(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40397a
    return function_403290(a1, a3, -1, &v1);
}
// Address range: 0x4039d0 - 0x403a3c
int64_t function_4039d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g40); // 0x4039d7
    int128_t v2 = __asm_movdqa(g41); // 0x4039df
    int128_t v3 = __asm_movdqa(g42); // 0x4039e7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x403a09
    if (a2 == 0 || a3 == 0) {
        // 0x403a37
        abort();
        // UNREACHABLE
    }
    // 0x403a1a
    return function_403290(a1, a4, a5, &v4);
}
// Address range: 0x403a40 - 0x403a49
int64_t function_403a40(void) {
    // 0x403a40
    int64_t v1; // 0x403a40
    return function_4039d0(v1, v1, v1, v1, -1);
}
// Address range: 0x403a50 - 0x403a67
int64_t function_403a50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403a50
    return function_4039d0(0, a1, a2, a3, -1);
}
// Address range: 0x403a70 - 0x403a83
int64_t function_403a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403a70
    return function_4039d0(0, a1, a2, a3, a4);
}
// Address range: 0x403a90 - 0x403a9a
int64_t function_403a90(void) {
    // 0x403a90
    int64_t v1; // 0x403a90
    return function_403290(v1, v1, v1, &g21);
}
// Address range: 0x403aa0 - 0x403ab2
int64_t function_403aa0(int64_t a1, int64_t a2) {
    // 0x403aa0
    return function_403290(0, a1, a2, &g21);
}
// Address range: 0x403ac0 - 0x403ad1
int64_t function_403ac0(void) {
    // 0x403ac0
    int64_t v1; // 0x403ac0
    return function_403290(v1, v1, -1, &g21);
}
// Address range: 0x403ae0 - 0x403af6
int64_t function_403ae0(int64_t a1) {
    // 0x403ae0
    return function_403290(0, a1, -1, &g21);
}
// Address range: 0x403b00 - 0x403edd
int64_t function_403b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403b98
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x403b1c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403b36
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x403b7b
    if (a6 < 10) {
        // 0x403b8a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403c82
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x403ee0 - 0x403f00
int64_t function_403ee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403ee0
    if (a5 == 0) {
        // 0x403efb
        return function_403b00(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x403ee7
    v1++;
    int64_t v2 = v1; // 0x403ef9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403ef0
        v1++;
        v2 = v1;
    }
    // 0x403efb
    return function_403b00(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x403f00 - 0x403f60
int64_t function_403f00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403f00
    int64_t v3 = &v2; // 0x403f00
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403f33
    int64_t v6; // 0x403f1d
    int64_t * v7; // 0x403f3b
    int64_t v8; // 0x403f3b
    int64_t v9; // 0x403f47
    if (v5 < 48) {
        // 0x403f10
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403f53
            break;
        }
    } else {
        // 0x403f3b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403f53
            break;
        }
    }
    int64_t v10 = 10; // 0x403f31
    while (v4 != 9) {
        // 0x403f29
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403f10
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403f53
                break;
            }
        } else {
            // 0x403f3b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403f53
                break;
            }
        }
        // 0x403f29
        v10 = 10;
    }
    // 0x403f53
    return function_403b00(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x403f60 - 0x40401c
int64_t function_403f60(int64_t a1, int64_t a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x403f60
    int64_t v1; // bp-168, 0x403f60
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403f60
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403f60
    int64_t v8; // 0x403f60
    int64_t v9; // bp-56, 0x403f60
    int64_t v10; // 0x403fc5
    int64_t v11; // 0x403fe9
    if ((int32_t)v6 < 48) {
        // 0x403fb0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404000
            break;
        }
    } else {
        // 0x403fe2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404000
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403fda
    int64_t v13 = 10; // 0x403fda
    while (v5 != 9) {
        // 0x403fdc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403fb0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404000
                break;
            }
        } else {
            // 0x403fe2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404000
                break;
            }
        }
        // 0x403fd2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404000
    int64_t v14; // bp-136, 0x403f60
    int64_t result = function_403b00(a1, a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x40400f
    return result;
}
// Address range: 0x404020 - 0x404094
int64_t function_404020(int64_t a1) {
    // 0x404020
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404083
    return fputs_unlocked(v1, g30);
}
// Address range: 0x4040a0 - 0x4040ba
int64_t function_4040a0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4040a4
    if (size != 0 != (mem == NULL)) {
        // 0x4040b3
        return (int64_t)mem;
    }
    // 0x4040b5
    function_4042f0(size);
    // UNREACHABLE
}
// Address range: 0x4040c0 - 0x4040e1
int64_t function_4040c0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4040c3
    int64_t v2 = v1; // 0x4040c3
    if (v2 < 0) {
        // 0x4040db
        function_4042f0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4040d9
        return function_4040a0(v2);
    }
    // 0x4040db
    function_4042f0(v2);
    // UNREACHABLE
}
// Address range: 0x4040f0 - 0x4040f2
int64_t function_4040f0(void) {
    // 0x4040f0
    int64_t v1; // 0x4040f0
    return function_4040a0(v1);
}
// Address range: 0x404100 - 0x404136
int64_t function_404100(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404128
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404111
    if (a2 != 0 != (mem == NULL)) {
        // 0x404120
        return (int64_t)mem;
    }
    // 0x404131
    function_4042f0(a1);
    // UNREACHABLE
}
// Address range: 0x404140 - 0x404161
int64_t function_404140(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404143
    int64_t v2 = v1; // 0x404143
    if (v2 < 0) {
        // 0x40415b
        function_4042f0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404159
        return function_404100(a1, v2);
    }
    // 0x40415b
    function_4042f0(a1);
    // UNREACHABLE
}
// Address range: 0x404170 - 0x4041f6
int64_t function_404170(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4041cb
            function_4042f0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404100(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4041b3
    if (a2 == 0) {
        // 0x4041d8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4041b8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4041cb
        function_4042f0(a1);
        // UNREACHABLE
    }
    // 0x40419a
    *(int64_t *)a2 = v2;
    return function_404100(a1, v2 * a3);
}
// Address range: 0x404200 - 0x404250
int64_t function_404200(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404200
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40424a
            function_4042f0(a1);
            // UNREACHABLE
        }
        // 0x404222
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404100(a1, v1);
    }
    if (a2 == 0) {
        // 0x404235
        *(int64_t *)a2 = 128;
        return function_404100(0, 128);
    }
    // 0x404248
    if (a2 < 0) {
        // 0x40424a
        function_4042f0(a1);
        // UNREACHABLE
    }
    // 0x404222
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404100(a1, v1);
}
// Address range: 0x404250 - 0x404267
int64_t function_404250(int64_t a1, int64_t a2) {
    // 0x404250
    return (int64_t)memset((int64_t *)function_4040a0(a1), 0, (int32_t)a1);
}
// Address range: 0x404270 - 0x40429e
int64_t function_404270(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404277
    if ((int64_t)v1 < 0) {
        // 0x404299
        function_4042f0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404299
        function_4042f0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40428a
    if (mem != NULL) {
        // 0x404294
        return (int64_t)mem;
    }
    // 0x404299
    function_4042f0(nmemb);
    // UNREACHABLE
}
// Address range: 0x4042a0 - 0x4042c8
int64_t function_4042a0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4040a0(a2); // 0x4042af
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4042d0 - 0x4042e3
int64_t function_4042d0(int64_t str) {
    // 0x4042d0
    return function_4042a0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4042f0 - 0x404321
int64_t function_4042f0(int64_t a1) {
    // 0x4042f0
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404330 - 0x40440f
int64_t function_404330(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40433c
    uint32_t v2 = *v1; // 0x40433c
    int64_t v3 = a2 & 0xffffffff; // 0x404341
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404344
    uint64_t v5 = (int64_t)*v4; // 0x404344
    int64_t v6; // 0x4043b2
    if (v3 <= v5) {
      lab_0x4043ac_2:
        // 0x4043ac
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404332
    int64_t v8 = v2; // 0x404330
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4043ac
        goto lab_0x4043ac_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404368
    int64_t v17; // 0x404376
    int64_t * v18; // 0x404390
    int64_t * v19; // 0x404393
    int64_t v20; // 0x40439e
    int64_t v21; // 0x404376
    while ((v16 & 0xffffffff) > v10) {
        // 0x404373
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404390
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4043a7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4043ac
            goto lab_0x4043ac_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4043ac
            goto lab_0x4043ac_2;
        }
        // 0x404362
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4043eb
    int64_t * v23 = (int64_t *)v22; // 0x4043f0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4043f3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4043f0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404407
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40435d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4043ac
            goto lab_0x4043ac_2;
        }
        // 0x404362
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404373
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404390
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4043a7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4043ac
                goto lab_0x4043ac_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4043ac
                goto lab_0x4043ac_2;
            }
            // 0x404362
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4043d0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4043f0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404407
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4043ac
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404410 - 0x404a2c
int64_t function_404410(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40442f
    int64_t v2 = *v1; // 0x40442f
    char * str2 = (char *)v2; // 0x40443c
    char c = *str2; // 0x40443c
    int64_t v3 = v2; // 0x404468
    int64_t v4 = 0; // 0x404410
    int32_t v5; // 0x404410
    int64_t v6; // 0x404410
    int64_t v7; // 0x404410
    int64_t v8; // 0x404410
    int64_t v9; // 0x404410
    int64_t v10; // 0x404410
    int64_t v11; // 0x404410
    int64_t v12; // 0x404410
    int64_t v13; // 0x404410
    int64_t str3; // 0x404410
    int64_t v14; // 0x404410
    int64_t v15; // 0x404410
    int64_t v16; // 0x404410
    int64_t v17; // 0x404410
    int32_t v18; // 0x404410
    int32_t v19; // 0x404410
    int32_t v20; // 0x404410
    int32_t v21; // 0x404410
    int32_t v22; // 0x404410
    int32_t v23; // 0x404410
    int32_t v24; // 0x404410
    int32_t v25; // 0x404410
    int32_t v26; // 0x404410
    int32_t v27; // 0x404410
    int32_t v28; // 0x404410
    int32_t v29; // 0x404410
    int64_t nmemb; // 0x404410
    int64_t v30; // 0x404410
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40446c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404468
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404478
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40447e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404448
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4044ac
                int64_t v34; // 0x404410
                int64_t v35; // 0x404410
                if (strncmp(str, str2, n) == 0) {
                    // 0x4044b5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404630;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4044c6
                int64_t v37 = *(int64_t *)v36; // 0x4044ca
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4044a0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4044b5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404630;
                        }
                    }
                    // 0x4044c6
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
                  lab_0x404516:
                    // 0x404516
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
                        goto lab_0x404570;
                    } else {
                        if (v11 == 0) {
                            // 0x4046e0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404570;
                        } else {
                            if (v39 == 0) {
                                // 0x404690
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40453a;
                                } else {
                                    // 0x40469c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40453a;
                                    } else {
                                        // 0x4046aa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40453a;
                                        } else {
                                            goto lab_0x404570;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40453a;
                            }
                        }
                    }
                }
              lab_0x404581:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404756
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404902
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404922
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40496f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x404989
                            int64_t v45; // 0x40498b
                            if (*(char *)v42 != 0) {
                                // 0x40498b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404983
                            while (v17 + nmemb != v42) {
                                // 0x404985
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40498b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x404978
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4049b0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404764
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4048bf
                        free((int64_t *)v17);
                    }
                    // 0x4047b9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4047d0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40467e
                    return 63;
                }
                // 0x4045a0
                v5 = v39;
                if (v13 != 0) {
                    // 0x404624
                    v35 = v13;
                    v34 = v25;
                  lab_0x404630:;
                    int32_t * v49 = (int32_t *)a7; // 0x404640
                    uint32_t v50 = *v49; // 0x404640
                    int64_t v51 = v50; // 0x404640
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40464a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404653
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40487f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40482a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40467e
                            return 63;
                        }
                        // 0x4046c8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4049df
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4048dd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4048f0
                                // 0x40467e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4047ee
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404802
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40466b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40466e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404672
                    int64_t result = v59; // 0x404678
                    if (v58 != 0) {
                        // 0x40467a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40467e
                    return result;
                }
            } else {
                // 0x40447e
                v5 = v32;
            }
            // break -> 0x4045a5
            break;
        }
    }
    // 0x4045a5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4045bd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4045c7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40467e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404709
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4045f6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404606
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404570:
    // 0x404570
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404570
    int64_t v63 = *(int64_t *)v62; // 0x404574
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404581
        goto lab_0x404581;
    }
    goto lab_0x404516;
  lab_0x40453a:
    // 0x40453a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404410
    int32_t v65; // 0x404410
    int32_t v66; // 0x404410
    if (v27 != 0) {
        goto lab_0x404570;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4046f0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404570;
            } else {
                goto lab_0x404561;
            }
        } else {
            // 0x404555
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40484c
                int64_t v67 = (int64_t)mem; // 0x40484c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404570;
                } else {
                    // 0x40485f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404561;
                }
            } else {
                goto lab_0x404561;
            }
        }
    }
  lab_0x404561:
    // 0x404561
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404570;
}
// Address range: 0x404a30 - 0x404ff6
int64_t function_404a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x404a51
    if (v3 < 1) {
        // 0x404c0e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x404a4d
    int32_t v5 = *(int32_t *)a7; // 0x404a59
    uint64_t v6 = a1 & 0xffffffff; // 0x404a5b
    int64_t v7 = v2; // 0x404a60
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x404a63
    *v8 = 0;
    int64_t v9; // 0x404a30
    int64_t v10; // 0x404a30
    int64_t v11; // 0x404a30
    int64_t v12; // 0x404a30
    int64_t str; // 0x404a30
    int64_t v13; // 0x404a30
    int64_t v14; // 0x404a30
    int64_t v15; // 0x404a30
    int64_t v16; // 0x404a30
    int64_t v17; // 0x404a30
    int32_t v18; // 0x404a30
    char v19; // 0x404a30
    if (v5 == 0) {
        // 0x404c48
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x404a7a;
    } else {
        // 0x404a73
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x404ac0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x404ac3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x404b88;
            } else {
                int64_t v22 = v7 + 1; // 0x404ad6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x404ae6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x404b9c;
                } else {
                    goto lab_0x404af8;
                }
            }
        } else {
            goto lab_0x404a7a;
        }
    }
  lab_0x404a7a:
    // 0x404a7a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x404a80
    *v24 = 0;
    int64_t v25; // 0x404a30
    int64_t v26; // 0x404a30
    int64_t v27; // 0x404a30
    switch (*(char *)&v2) {
        case 45: {
            // 0x404b70
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404b7d;
        }
        case 43: {
            // 0x404e80
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x404b7d;
        }
        default: {
            // 0x404a9c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x404dff
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x404f18
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x404b7d;
                } else {
                    // 0x404e0d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x404aaa;
                }
            } else {
                goto lab_0x404aaa;
            }
        }
    }
  lab_0x404b88:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x404b8f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x404af8;
    } else {
        goto lab_0x404b9c;
    }
  lab_0x404aaa:
    // 0x404aaa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x404b7d;
  lab_0x404b7d:
    // 0x404b7d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x404b88;
  lab_0x404af8:;
    uint32_t v30 = *(int32_t *)a7; // 0x404af8
    int64_t v31 = v30; // 0x404af8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x404afa
    if ((int64_t)*v32 > v31) {
        // 0x404aff
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x404b02
    if (*v33 > v30) {
        // 0x404b07
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x404b0a
    int64_t v35 = v31; // 0x404b0e
    int64_t v36 = v15; // 0x404b0e
    int64_t v37; // 0x404a30
    int64_t v38; // 0x404a30
    int64_t v39; // 0x404a30
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x404c78
        int64_t v41 = v40; // 0x404c78
        v2 = v41;
        int64_t v42; // 0x404a30
        if (*v33 == v40) {
            // 0x404e60
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x404e68
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x404c84
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x404c98
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x404ca1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x404caa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x404cc1
            int64_t v47 = v45 & 0xffffffff; // 0x404cc5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x404cce
                if (*(char *)(v46 + 1) != 0) {
                    // 0x404cd4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x404cd6;
                }
            }
            int64_t v48 = v47 + 1; // 0x404cb0
            int64_t v49 = v48 & 0xffffffff; // 0x404cb0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x404cc1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x404cce
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x404cd4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x404cd6;
                    }
                }
                // 0x404cb0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x404e78
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x404cd6;
    } else {
        goto lab_0x404b14;
    }
  lab_0x404b9c:
    // 0x404b9c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x404b9f
    int64_t v51 = v12; // 0x404b9f
    int64_t v52 = v14; // 0x404b9f
    if (*(char *)v10 == 0) {
        goto lab_0x404af8;
    } else {
        goto lab_0x404ba5;
    }
  lab_0x404b14:;
    int32_t v53 = v35; // 0x404b14
    int64_t v54; // 0x404a30
    int64_t v55; // 0x404a30
    int64_t v56; // 0x404a30
    int64_t v57; // 0x404a30
    int64_t v58; // 0x404a30
    int64_t v59; // 0x404a30
    char * v60; // 0x404a30
    int64_t v61; // 0x404a30
    int64_t v62; // 0x404b29
    int64_t v63; // 0x404a30
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x404c63
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x404c66;
    } else {
        // 0x404b1c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x404a30
        int64_t v66 = v65 ? -1 : 1; // 0x404b30
        int64_t v67 = (int64_t)"--"; // 0x404a30
        int64_t v68 = v62; // 0x404a30
        int64_t v69 = 3; // 0x404b30
        unsigned char v70 = *(char *)v68; // 0x404b30
        char v71 = *(char *)v67; // 0x404b30
        char v72 = v71; // 0x404b30
        bool v73 = false; // 0x404b30
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
            // 0x404c20
            if (*(char *)v62 == 45) {
                // 0x404ce0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x404ce0
                if (c == 0) {
                    goto lab_0x404c2a;
                } else {
                    // 0x404ced
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x404d70;
                    } else {
                        if (c == 45) {
                            // 0x404f53
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x404dc5;
                        } else {
                            // 0x404cfe
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x404d70;
                            } else {
                                // 0x404d03
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x404d24;
                                } else {
                                    // 0x404d0a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x404d70;
                                    } else {
                                        goto lab_0x404d24;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x404c2a;
            }
        } else {
            uint32_t v75 = *v33; // 0x404b40
            v2 = v75;
            int32_t v76 = *v32; // 0x404b43
            int64_t v77 = v35 + 1; // 0x404b46
            int32_t v78 = v77; // 0x404b49
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x404eb0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x404b57
                    v2 = (int64_t)*v33;
                }
            }
            // 0x404b65
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x404c66;
        }
    }
  lab_0x404ba5:;
    // 0x404ba5
    int64_t v79; // bp-104, 0x404a30
    int64_t v80 = &v79; // 0x404a3a
    int64_t v81 = v50 + 1; // 0x404ba5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x404bac
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x404bb1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x404bb5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x404bb9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x404bc1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x404bc6
    int32_t c2 = v84; // 0x404bc6
    char * found_char_pos = strchr(str2, c2); // 0x404bc6
    int64_t v87 = *v82; // 0x404bcb
    v2 = v87;
    int64_t v88 = *v85; // 0x404bd5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x404be0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x404ed0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x404e9d
        *(int32_t *)(v1 + 8) = c2;
        // 0x404c0e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x404bc6
    char v91 = *(char *)(v90 + 1); // 0x404bfb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x404bb5
        if (v91 != 58) {
            // 0x404c0e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x404e24
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x404f28
                *v8 = 0;
            } else {
                // 0x404f0c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x404e4e
            *v83 = 0;
            // 0x404c0e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x404e2e
        if (v93 != 0) {
            // 0x404ec0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x404e4e
            *v83 = 0;
            // 0x404c0e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x404e41
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x404e4e
            *v83 = 0;
            // 0x404c0e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x404f8a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x404f3a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x404f41
        // 0x404e4e
        *v83 = 0;
        // 0x404c0e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x404d99
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x404d9b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x404fc0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x404f71
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x404f78
            // 0x404c0e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x404da6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x404daa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x404dc5;
  lab_0x404cd6:
    // 0x404cd6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x404b14;
  lab_0x404dc5:;
    int64_t v99 = function_404410(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x404de3
    // 0x404c0e
    return v99 & 0xffffffff;
  lab_0x404c66:;
    int32_t v100 = v55; // 0x404c66
    if (v100 != (int32_t)v59) {
        // 0x404c6a
        *(int32_t *)a7 = v100;
    }
    // 0x404c0e
    return 0xffffffff;
  lab_0x404c2a:
    // 0x404c2a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x404c31
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x404c0e
    return v99 & 0xffffffff;
  lab_0x404d70:
    // 0x404d70
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x404ba5;
  lab_0x404d24:
    // 0x404d24
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404410(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x404d4a
    if ((int32_t)v101 != -1) {
        // 0x404c0e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x404d5f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x404d70;
}
// Address range: 0x405000 - 0x405056
int64_t function_405000(int64_t a1) {
    // 0x405000
    *(int32_t *)&g43 = g28;
    *(int32_t *)&g44 = g27;
    int64_t v1; // 0x405000
    int64_t result = function_404a30(v1, v1, v1, v1, v1, v1, &g43, a1 & 0xffffffff); // 0x405026
    g28 = *(int32_t *)&g43;
    g48 = g46;
    *(int32_t *)&g26 = g45;
    return result;
}
// Address range: 0x405060 - 0x405078
int64_t function_405060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405060
    return function_405000(1);
}
// Address range: 0x405080 - 0x405093
int64_t function_405080(int64_t a1, int64_t a2, char * a3, char (**a4)[4], int32_t a5, int64_t a6) {
    // 0x405080
    return function_405000(0);
}
// Address range: 0x4050a0 - 0x4050b5
int64_t function_4050a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4050a0
    return function_404a30(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4050c0 - 0x4050d6
int64_t function_4050c0(void) {
    // 0x4050c0
    return function_405000(0);
}
// Address range: 0x4050e0 - 0x4050f8
int64_t function_4050e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4050e0
    return function_404a30(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405100 - 0x40517a
int64_t function_405100(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40510b
    int64_t v2 = (int64_t)&g2; // 0x40510b
    int32_t * pwc; // 0x405100
    int64_t v3; // 0x405100
    int64_t n; // 0x405100
    if (a2 == 0) {
        goto lab_0x405152;
    } else {
        // 0x40510d
        if (a3 == 0) {
            // 0x405138
            return -2;
        }
        // 0x405119
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405152;
        } else {
            goto lab_0x405124;
        }
    }
  lab_0x405152:
    // 0x405152
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405100
    pwc = (int32_t *)&v4;
    goto lab_0x405124;
  lab_0x405124:;
    char * wstr = (char *)v3; // 0x40512a
    int64_t ps; // 0x405100
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40512a
    int64_t result = v5; // 0x40512a
    if (v5 < 0xfffffffe) {
        // 0x405138
        return result;
    }
    int64_t result2 = result; // 0x405169
    if ((char)function_4051e0(0, v3) == 0) {
        // 0x40516b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405138
    return result2;
}
// Address range: 0x405180 - 0x4051dd
int64_t function_405180(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405187
    int64_t v2; // 0x405180
    int64_t result = function_4057b0(a1, v2); // 0x405198
    if ((v2 & 32) != 0) {
        // 0x4051c0
        if ((int32_t)result == 0) {
            // 0x4051c4
            *__errno_location() = 0;
        }
        // 0x4051ba
        return 0xffffffff;
    }
    // 0x4051a1
    if ((int32_t)result == 0) {
        // 0x4051ba
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4051a8
    if (v1 == 0) {
        // 0x4051aa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4051ba
    return result2;
}
// Address range: 0x4051e0 - 0x40523e
int64_t function_4051e0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4051e6
    if (locale == NULL) {
        // 0x405213
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4051e6
    bool v2; // 0x4051e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x4051e0
    int64_t v5 = v1; // 0x4051e0
    int64_t v6 = 2; // 0x405205
    unsigned char v7 = *(char *)v5; // 0x405205
    char v8 = *(char *)v4; // 0x405205
    char v9 = v8; // 0x405205
    bool v10 = false; // 0x405205
    while (v7 == v8) {
        // 0x4051f8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405211
    int64_t v13 = v1; // 0x405211
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405213
        return 0;
    }
    int64_t v14 = 6; // 0x405211
    unsigned char v15 = *(char *)v13; // 0x40522d
    char v16 = *(char *)v12; // 0x40522d
    char v17 = v16; // 0x40522d
    bool v18 = false; // 0x40522d
    while (v15 == v16) {
        // 0x405220
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
// Address range: 0x405240 - 0x4057a2
int64_t function_405240(void) {
    char * v1 = nl_langinfo(14); // 0x405256
    char * v2 = g47; // 0x40525b
    char * v3; // 0x405240
    int64_t v4; // 0x405240
    int64_t v5; // 0x405240
    int64_t v6; // 0x405240
    int64_t v7; // 0x405240
    int32_t size; // 0x405240
    int32_t size2; // 0x405240
    int32_t len; // 0x405312
    int64_t v8; // 0x405312
    char * env_val; // 0x4052fd
    if (v2 == NULL) {
        // 0x4052f8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405365;
        } else {
            // 0x40530a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405365;
            } else {
                // 0x40530f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4052fd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405795
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405365;
                    } else {
                        // 0x405709
                        size2 = len + 14;
                        goto lab_0x40532b;
                    }
                } else {
                    goto lab_0x40532b;
                }
            }
        }
    } else {
        // 0x405240
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40527a;
    }
  lab_0x4055ac:;
    // 0x4055ac
    struct _IO_FILE * stream; // 0x4053eb
    int32_t v10 = __uflow(stream); // 0x4055af
    int64_t v11; // 0x405240
    int64_t v12 = v11; // 0x4055b9
    int64_t v13; // 0x405240
    int64_t v14 = v13; // 0x4055b9
    int32_t v15 = v10; // 0x4055b9
    int64_t v16; // 0x405240
    int64_t v17 = v16; // 0x4055b9
    int64_t v18 = v11; // 0x4055b9
    int64_t v19 = v13; // 0x4055b9
    int64_t v20 = v16; // 0x4055b9
    if (v10 == -1) {
        // break -> 0x4055bf
        goto lab_0x4055bf;
    }
    goto lab_0x405439;
  lab_0x40542e:;
    // 0x40542e
    int64_t v90; // 0x405240
    int64_t * v32; // 0x405420
    *v32 = v90 + 1;
    int64_t v89; // 0x405240
    v12 = v89;
    int64_t v91; // 0x405240
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405240
    v17 = v92;
    goto lab_0x405439;
  lab_0x405439:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405240
    int32_t v25; // bp-120, 0x405240
    int32_t v26; // bp-184, 0x405240
    int64_t v27; // 0x4053eb
    int64_t v28; // 0x405408
    int64_t v29; // 0x40540d
    int64_t * v30; // 0x405424
    switch (c) {
        case 32: {
            goto lab_0x405420;
        }
        case 10: {
            goto lab_0x405420;
        }
        case 9: {
            goto lab_0x405420;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405611
            int32_t v33; // 0x405240
            char v34; // 0x405240
            int32_t v35; // 0x40561e
            if (v31 < *v30) {
                // 0x4055f0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40561b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405611
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4055f0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40561b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405600
                v36 = v33;
            }
            // 0x4056ef
            if (v36 == -1) {
                // break -> 0x4055bf
                break;
            }
            goto lab_0x405420;
        }
        default: {
            // 0x40544f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4055bf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405478
            int64_t v39 = v37 + 4; // 0x40547a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405486
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405488
            while (v41 == 0) {
                // 0x405478
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4054a6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4054b2
            int64_t v45 = v43 + 4; // 0x4054b4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4054c0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4054c2
            while (v47 == 0) {
                // 0x4054b2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4054af
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4054d8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4054e8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4054ec
            int64_t v52 = v51 + v48; // 0x4054f5
            int64_t * mem; // 0x405240
            int64_t v53; // 0x405240
            int64_t v54; // 0x405240
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40562b
                int64_t v56 = v55 + 3; // 0x405637
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405511
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405520
            if (mem == NULL) {
                // 0x40574c
                free((int64_t *)v21);
                function_4057b0(v27, v53);
                v24 = (int64_t)&g2;
                goto lab_0x4053c4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405538
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405542
            uint32_t v62 = (int32_t)v59; // 0x405545
            int64_t v63; // 0x405240
            if (v62 >= 8) {
                // 0x405654
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40566e
                int64_t v66 = v61 - v65; // 0x405672
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40567d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40568e
                    int64_t v70 = v69 & 0xffffffff; // 0x40568e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40568b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40571f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405557
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40555b
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
            int64_t v73 = v51 + 1; // 0x40556b
            int64_t v74 = v60 - 1; // 0x40556f
            uint32_t v75 = (int32_t)v73; // 0x405574
            int64_t v76; // 0x405240
            if (v75 >= 8) {
                // 0x4056a2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4056ac
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4056bc
                int64_t v80 = v74 - v79; // 0x4056c0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4056cb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4056db
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4056d9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405736
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40573e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405586
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40558a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405783
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40559e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40542e;
            } else {
                goto lab_0x4055ac;
            }
        }
    }
  lab_0x405420:;
    int64_t v93 = v23; // 0x405240
    int64_t v94 = v22; // 0x405240
    int64_t v95 = v21; // 0x405240
    goto lab_0x405420_2;
  lab_0x405365:;
    int64_t * mem3 = malloc(size); // 0x405365
    int64_t v97 = (int64_t)&g2; // 0x405370
    int64_t v98; // 0x405240
    int64_t path; // 0x405240
    if (mem3 == NULL) {
        goto lab_0x405342;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405365
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405386;
    }
  lab_0x40527a:;
    int64_t str = v1 == NULL ? (int64_t)&g2 : (int64_t)v1; // 0x40526d
    char v100 = *v3; // 0x40527a
    int64_t v101; // 0x405240
    if (v100 == 0) {
        // 0x4052d4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405240
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405240
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4052c0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4052c7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405290
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40529d
        char v107 = *(char *)v106; // 0x4052a2
        v102 = v107;
        if (v107 == 0) {
            // 0x4052d4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4052ab
    v104 = v103 + 1;
  lab_0x4052c7:
    // 0x4052d4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405342:;
    char * v108 = (char *)v97;
    g47 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40527a;
  lab_0x405386:;
    int64_t v109 = v98 + path; // 0x405386
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4053b2
    v24 = (int64_t)&g2;
    if (fd >= 0) {
        // 0x4053e1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405712
            close(fd);
            v24 = (int64_t)&g2;
        } else {
            // 0x405405
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405420_2:;
                uint64_t v96 = *v32; // 0x405420
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4055ac;
                } else {
                    goto lab_0x40542e;
                }
            }
          lab_0x4055bf:
            // 0x4055bf
            function_4057b0(v27, v19);
            v24 = (int64_t)&g2;
            if (v18 != 0) {
                // 0x4055de
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4053c4;
  lab_0x40532b:;
    int64_t * mem4 = malloc(size2); // 0x40532b
    v97 = (int64_t)&g2;
    if (mem4 != NULL) {
        // 0x4053d1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405386;
    } else {
        goto lab_0x405342;
    }
  lab_0x4053c4:
    // 0x4053c4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405342;
}
// Address range: 0x4057b0 - 0x40582b
int64_t function_4057b0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4057b7
    if (fileno(stream) < 0) {
        // 0x405817
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4057ca
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4057fb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405817
            return fclose(stream);
        }
    }
    // 0x4057cc
    if ((int32_t)function_405830(a1, v1) == 0) {
        // 0x405817
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4057d8
    int32_t v3 = *v2; // 0x4057e0
    int64_t result = fclose(stream); // 0x4057ee
    if (v3 != 0) {
        // 0x405820
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4057f0
    return result;
}
// Address range: 0x405830 - 0x405870
int64_t function_405830(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40584a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40584a
        return fflush(stream);
    }
    // 0x405858
    function_405870(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405870 - 0x4058c7
int64_t function_405870(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405870
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40587a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4058ab
    int64_t result = -1; // 0x4058b4
    if (v1 != -1) {
        // 0x4058b6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4058c2
    return result;
}
// Address range: 0x4058d0 - 0x40592d
int64_t function_4058d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4058d0
    return function_401270();
}
// Address range: 0x405930 - 0x405931
int64_t function_405930(void) {
    // 0x405930
    int64_t result; // 0x405930
    return result;
}
// Address range: 0x405940 - 0x405958
int64_t function_405940(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405940
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x405958 - 0x405978
int64_t function_405958(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x405962
    while (*(int64_t *)v1 != -1) {
        // 0x405963
        v1 -= 8;
    }
    // 0x405974
    return result;
}
