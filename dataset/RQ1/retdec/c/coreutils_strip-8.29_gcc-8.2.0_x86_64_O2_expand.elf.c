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
// Address range: 0x4017d0 - 0x401b50
int64_t function_4017d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x4017d5
    function_402a40(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_4064e0(0x402960, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g35 = 1;
    int64_t v2 = function_405d40(v1, a2, "it:0::1::2::3::4::5::6::7::8::9::", &g2, 0, a6); // 0x401832
    int32_t v3 = v2; // 0x401837
    int64_t v4; // 0x4017d0
    int64_t v5; // 0x4017d0
    int64_t v6; // 0x4017d0
    int64_t v7; // 0x4017d0
    int64_t v8; // 0x4017d0
    int64_t v9; // 0x4017d0
    int64_t v10; // 0x4017d0
    int64_t v11; // 0x4017d0
    int64_t v12; // 0x4017d0
    int64_t v13; // 0x4017d0
    int64_t v14; // bp-48, 0x4017d0
    if (v3 == -1) {
      lab_0x4018f2:
        // 0x4018f2
        function_4024a0();
        int64_t v15 = (int64_t)*(int32_t *)0x60a27c; // 0x4018f7
        function_4026a0(v1 > v15 ? 8 * v15 + a2 : 0);
        int64_t v16 = function_4026c0(0); // 0x40190f
        if (v16 == 0) {
            // 0x4019d5
            function_4028a0();
            return g34;
        }
        // 0x401920
        v8 = v16;
        while (true) {
          lab_0x401920:
            // 0x401920
            v14 = 0;
            v9 = v8;
            v4 = 0;
            v6 = 1;
            while (true) {
              lab_0x40195c:
                // 0x40195c
                v7 = v6;
                v5 = v4;
                v10 = v9;
                int64_t * v17 = (int64_t *)(v10 + 8);
                uint64_t v18 = *v17; // 0x40195c
                while (v18 >= *(int64_t *)(v10 + 16)) {
                    uint32_t v19 = __uflow((struct _IO_FILE *)v10); // 0x4019f3
                    if (v19 >= 0) {
                        // 0x401975
                        v12 = v19;
                        goto lab_0x401975_2;
                    }
                    int64_t v20 = function_4026c0((int32_t)v10); // 0x401a05
                    int64_t v21 = v20; // 0x401a10
                    if (v20 == 0) {
                        // 0x401a16
                        v13 = v19;
                        v11 = v20;
                        if ((char)v7 == 0) {
                            goto lab_0x4019d5;
                        } else {
                            goto lab_0x401a1b;
                        }
                    }
                    v10 = v21;
                    v17 = (int64_t *)(v10 + 8);
                    v18 = *v17;
                }
                // 0x40196a
                *v17 = v18 + 1;
                v12 = (int64_t)*(char *)v18;
                goto lab_0x401975_2;
            }
        }
      lab_0x4019d5:
        // 0x4019d5
        function_4028a0();
        return g34;
    }
    int64_t v22 = &v14;
    int32_t v23 = v3; // 0x401837
    int64_t v24 = v2; // 0x4017d0
    int32_t v25; // 0x4017d0
    while (true) {
        // 0x401840
        v25 = v23;
        if (v25 > 57) {
            if (v25 != 105) {
                if (v25 != 116) {
                    // 0x401b1d
                    function_401c30(1);
                    // UNREACHABLE
                }
                // 0x4018a9
                function_402150(g58);
            } else {
                // 0x401885
                g35 = 0;
            }
        } else {
            if (v25 <= 47) {
                // break -> 0x40184a
                break;
            }
            // 0x4018c0
            if (g58 == 0) {
                // 0x4018da
                v14 = 0x100000000000000 * v24 >> 56;
                function_402150(v22);
            } else {
                // 0x4018cc
                function_402150(g58 - 1);
            }
        }
        int64_t v26 = function_405d40(v1, a2, "it:0::1::2::3::4::5::6::7::8::9::", &g2, 0, a6); // 0x401832
        v23 = v26;
        v24 = v26;
        if (v23 == -1) {
            goto lab_0x4018f2;
        }
    }
    if (v25 == -131) {
        // 0x401851
        function_404ae0((int64_t)g28, "expand", "GNU coreutils", (int64_t)g17, "David MacKenzie", 0);
        exit(0);
        // UNREACHABLE
    }
    if (v25 == -130) {
        // 0x401899
        function_401c30(0);
        // UNREACHABLE
    }
  lab_0x401b1d:
    // 0x401b1d
    function_401c30(1);
    // UNREACHABLE
  lab_0x401975_2:;
    int64_t v27 = v12;
    int64_t v28 = v27; // 0x401978
    int64_t v29 = v10; // 0x401978
    int64_t v30 = v5; // 0x401978
    int64_t v31 = v7; // 0x401978
    int64_t v32; // 0x4017d0
    int64_t v33; // 0x4017d0
    int64_t v34; // 0x4017d0
    int64_t v35; // 0x4017d0
    int64_t v36; // 0x4017d0
    if ((char)v7 == 0) {
        goto lab_0x401938;
    } else {
        int32_t v37 = v27; // 0x40197a
        v35 = v10;
        v33 = v5;
        if (v37 == 9) {
            goto lab_0x401a7d;
        } else {
            // 0x401983
            v13 = v27;
            v11 = v10;
            if (v37 != 8) {
                goto lab_0x401a1b;
            } else {
                int64_t v38 = v14; // 0x401999
                v14 = v38 - (int64_t)(v38 != 0);
                v36 = v27;
                v34 = v10;
                v32 = v5 - (int64_t)(v5 != 0);
                goto lab_0x4019ac;
            }
        }
    }
  lab_0x401938:;
    int64_t v39 = v31;
    int64_t v40 = v30;
    int64_t v41 = v29;
    int64_t v42 = v28;
    int64_t v43 = (int64_t)g28; // 0x401938
    int64_t * v44 = (int64_t *)(v43 + 40); // 0x40193f
    uint64_t v45 = *v44; // 0x40193f
    int64_t v46 = v42; // 0x401947
    int64_t v47 = v41; // 0x401947
    int64_t v48 = v43; // 0x401947
    int64_t v49 = v40; // 0x401947
    int64_t v50 = v39; // 0x401947
    int64_t v51; // 0x4017d0
    int64_t v52; // 0x4017d0
    int64_t v53; // 0x4017d0
    int64_t v54; // 0x4017d0
    if (v45 >= *(int64_t *)(v43 + 48)) {
        goto lab_0x401a43;
    } else {
        // 0x40194d
        *v44 = v45 + 1;
        *(char *)v45 = (char)v42;
        v54 = v42;
        v53 = v41;
        v51 = v40;
        v52 = v39;
        goto lab_0x401957;
    }
  lab_0x401a43:;
    int64_t v55 = v49;
    int64_t v56 = v47;
    int32_t v57 = __overflow((struct _IO_FILE *)v48, (int32_t)v46 % 256); // 0x401a46
    v54 = v46;
    v53 = v56;
    v51 = v55;
    v52 = v50;
    if (v57 >= 0) {
        goto lab_0x401957;
    } else {
        // 0x401a53
        error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
        v35 = v56;
        v33 = v55;
        goto lab_0x401a7d;
    }
  lab_0x401a7d:;
    uint64_t v58 = v33;
    int64_t v59 = v35;
    char v60; // bp-49, 0x4017d0
    uint64_t v61 = function_4025f0(v58, &v14, (int64_t *)&v60); // 0x401a8a
    char * format; // 0x401b33
    if (v60 == 0) {
        if (v58 > v61) {
            // 0x401b27
            format = dcgettext(NULL, "input line is too long", 5);
            error(1, (int32_t)"input line is too long" ^ (int32_t)"input line is too long", format);
            return &g60;
        }
        int64_t v62 = v58 + 1; // 0x401acb
        v36 = 32;
        v34 = v59;
        v32 = v62;
        int64_t v63 = v62; // 0x401ad2
        if (v61 > v62) {
            int64_t v64 = (int64_t)g28; // 0x401ad4
            int64_t * v65 = (int64_t *)(v64 + 40); // 0x401adb
            uint64_t v66 = *v65; // 0x401adb
            if (v66 < *(int64_t *)(v64 + 48)) {
                // 0x401ac0
                *v65 = v66 + 1;
                *(char *)v66 = 32;
            } else {
                // 0x401ae5
                if (__overflow(g28, 32) < 0) {
                    // 0x401af3
                    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
                    goto lab_0x401b1d;
                }
            }
            int64_t v67 = v63 + 1; // 0x401acb
            v36 = 32;
            v34 = v59;
            v32 = v67;
            v63 = v67;
            while (v61 > v67) {
                // 0x401ad4
                v64 = (int64_t)g28;
                v65 = (int64_t *)(v64 + 40);
                v66 = *v65;
                if (v66 < *(int64_t *)(v64 + 48)) {
                    // 0x401ac0
                    *v65 = v66 + 1;
                    *(char *)v66 = 32;
                } else {
                    // 0x401ae5
                    if (__overflow(g28, 32) < 0) {
                        // 0x401af3
                        error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
                        goto lab_0x401b1d;
                    }
                }
                // 0x401acb
                v67 = v63 + 1;
                v36 = 32;
                v34 = v59;
                v32 = v67;
                v63 = v67;
            }
        }
    } else {
        if (v58 == -1) {
            // 0x401b27
            format = dcgettext(NULL, "input line is too long", 5);
            error(1, (int32_t)"input line is too long" ^ (int32_t)"input line is too long", format);
            return &g60;
        }
        // 0x401aa8
        v36 = 32;
        v34 = v59;
        v32 = v58 + 1;
    }
    goto lab_0x4019ac;
  lab_0x401957:
    // 0x401957
    v8 = v53;
    v9 = v53;
    v4 = v51;
    v6 = v52;
    if ((int32_t)v54 == 10) {
        goto lab_0x401920;
    } else {
        goto lab_0x40195c;
    }
  lab_0x4019ac:;
    int64_t v68 = v36;
    int64_t v69 = g35; // 0x4019b7
    if (g35 == 0) {
        uint16_t v70 = *(int16_t *)((0x100000000 * v68 >> 31) + (int64_t)*__ctype_b_loc()); // 0x4019c4
        v69 = v70 % 2;
    }
    // 0x4019cd
    v28 = v68;
    v29 = v34;
    v30 = v32;
    v31 = v69;
    if ((int32_t)v68 < 0) {
        // break (via goto) -> 0x4019d5
        goto lab_0x4019d5;
    }
    goto lab_0x401938;
  lab_0x401a1b:;
    int64_t v71 = v11;
    int64_t v72 = v13;
    int64_t v73 = v5 + 1; // 0x401a1b
    v36 = v72;
    v34 = v71;
    v32 = v73;
    if (v73 != 0) {
        goto lab_0x4019ac;
    } else {
        // 0x401a21
        error(1, (int32_t)"input line is too long" ^ (int32_t)"input line is too long", dcgettext(NULL, "input line is too long", 5));
        v46 = v72;
        v47 = v71;
        v48 = 1;
        v49 = v73;
        v50 = v7;
        goto lab_0x401a43;
    }
}
// Address range: 0x401b50 - 0x401b7b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401b50
    int64_t v1; // 0x401b50
    __libc_start_main(0x4017d0, (int32_t)a4, (char **)&v1, (void (*)())0x406470, (void (*)())0x4064d0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401b7b - 0x401b9a
int64_t function_401b7b(void) {
    // 0x401b7b
    return &g27;
}
// Address range: 0x401b9a - 0x401bd1
int64_t function_401b9a(void) {
    // 0x401b9a
    return 0;
}
// Address range: 0x401bd1 - 0x401c28
int64_t function_401bd1(void) {
    // 0x401bd1
    if (g32 != 0) {
        // 0x401c27
        int64_t result; // 0x401bd1
        return result;
    }
    int64_t v1 = g33; // 0x401c04
    int64_t result2; // 0x401c16
    if (g33 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401c16
        result2 = function_401b7b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401c06
        v1++;
    }
    // 0x401bfa
    g33 = v1;
    // 0x401c16
    result2 = function_401b7b();
    g32 = 1;
    return result2;
}
// Address range: 0x401c28 - 0x401c2d
int64_t function_401c28(void) {
    // 0x401c28
    return function_401b9a();
}
// Address range: 0x401c30 - 0x401f8d
int64_t function_401c30(int32_t status) {
    // 0x401c30
    if (status != 0) {
        // 0x401c4a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401c6f
        exit(status);
        // UNREACHABLE
    }
    // 0x401c76
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Convert tabs in each FILE to spaces, writing to standard output.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    char * v1 = dcgettext(NULL, "  -i, --initial    do not convert tabs after non blanks\n  -t, --tabs=N     have tabs N characters apart, not 8\n", 5); // 0x401d10
    fputs_unlocked(v1, g28);
    function_4028f0((int64_t)v1);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    int64_t v2 = &g1; // bp-136, 0x401d6b
    bool v3; // 0x401c30
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = &v2;
    int64_t v6 = v5 + 16; // 0x401df0
    int64_t v7 = *(int64_t *)v6; // 0x401df4
    int64_t v8 = 7; // 0x401dfa
    while (v7 != 0) {
        int64_t v9 = (int64_t)"expand";
        int64_t v10 = v7;
        unsigned char v11 = *(char *)v9; // 0x401e06
        char v12 = *(char *)v10; // 0x401e06
        char v13 = v12; // 0x401e06
        bool v14 = false; // 0x401e06
        while (v11 == v12) {
            // 0x401dfc
            v8--;
            int64_t v15 = v10 + v4; // 0x401e06
            int64_t v16 = v9 + v4; // 0x401e06
            v13 = v11;
            v14 = true;
            if (v8 == 0) {
                // break -> 
                break;
            }
            v9 = v16;
            v10 = v15;
            v11 = *(char *)v9;
            v12 = *(char *)v10;
            v13 = v12;
            v14 = false;
        }
        unsigned char v17 = v13;
        if ((v11 >= v17 && !v14) == v11 < v17) {
            // break -> 0x401e12
            break;
        }
        v5 = v6;
        v6 = v5 + 16;
        v7 = *(int64_t *)v6;
        v8 = 7;
    }
    // 0x401e12
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v5 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x401f24;
        } else {
            // 0x401f0e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401f63
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401e74;
            } else {
                goto lab_0x401f24;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x401e74;
        } else {
            // 0x401e5a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x401f63
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x401e74;
            } else {
                goto lab_0x401e74;
            }
        }
    }
  lab_0x401f24:
    // 0x401f24
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401eb4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c6f
    exit(status);
    // UNREACHABLE
  lab_0x401e74:
    // 0x401e74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x401eb4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401c6f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x401f90 - 0x401fda
int64_t function_401f90(int64_t a1) {
    // 0x401f90
    if ((int64_t)g43 == 0) {
        // 0x401fa3
        g43 = a1;
        return 1;
    }
    // 0x401fb0
    error(0, (int32_t)"'/' specifier only allowed with the last value" ^ (int32_t)"'/' specifier only allowed with the last value", dcgettext(NULL, "'/' specifier only allowed with the last value", 5));
    g43 = a1;
    return (int32_t)&g60 ^ (int32_t)&g60;
}
// Address range: 0x401fe0 - 0x40202a
int64_t function_401fe0(int64_t a1) {
    // 0x401fe0
    if ((int64_t)g42 == 0) {
        // 0x401ff3
        g42 = a1;
        return 1;
    }
    // 0x402000
    error(0, (int32_t)"'+' specifier only allowed with the last value" ^ (int32_t)"'+' specifier only allowed with the last value", dcgettext(NULL, "'+' specifier only allowed with the last value", 5));
    g42 = a1;
    return (int32_t)&g60 ^ (int32_t)&g60;
}
// Address range: 0x402030 - 0x40214f
int64_t function_402030(int64_t a1) {
    int32_t v1 = g39; // 0x402039
    int64_t v2 = v1; // 0x402039
    int64_t result = g41; // 0x402040
    uint64_t v3 = g40; // 0x402047
    int64_t v4 = a1; // 0x402051
    int64_t v5 = a1; // 0x402051
    int64_t v6; // 0x402030
    int64_t v7; // 0x402030
    if (v1 == 0) {
        goto lab_0x40208b;
    } else {
        int64_t v8 = 8 * v2 + result;
        v4 = *(int64_t *)(v8 - 8);
        if (v4 > a1) {
            // 0x402069
            v6 = 0;
            v7 = v4;
            if (v3 != v2) {
                // 0x40206e
                *(int64_t *)v8 = a1;
                g39 = v1 + 1;
                // 0x40207d
                return result;
            }
            goto lab_0x4020c2;
        } else {
            // 0x402144
            v5 = a1 - v4;
            goto lab_0x40208b;
        }
    }
  lab_0x40208b:;
    int64_t result2 = result; // 0x40208e
    int64_t v9 = v2; // 0x40208e
    int64_t v10 = v5; // 0x40208e
    v6 = v5;
    v7 = v4;
    if (v3 == v2) {
        goto lab_0x4020c2;
    } else {
        goto lab_0x402090;
    }
  lab_0x4020c2:;
    // 0x4020c2
    int64_t v11; // 0x402030
    int64_t v12; // 0x402030
    if (result == 0) {
        // 0x402110
        v11 = 16;
        v12 = 128;
        if (v3 != 0) {
            int64_t v13 = 8 * v3; // 0x402124
            v11 = v3;
            v12 = v13;
            if (v13 > -1 != v3 < 0x2000000000000000) {
                // 0x40212f
                function_404e70(v7);
                // UNREACHABLE
            }
        }
    } else {
        if (v3 >= 0xaaaaaaaaaaaaaaa) {
            // 0x40212f
            function_404e70(v7);
            // UNREACHABLE
        }
        int64_t v14 = v3 + 1 + v3 / 2; // 0x4020dc
        v11 = v14;
        v12 = 8 * v14;
    }
    // 0x4020e9
    g40 = v11;
    int64_t v15 = function_404c80(result, v12); // 0x4020f3
    g41 = v15;
    result2 = v15;
    v9 = g39;
    v10 = v6;
    goto lab_0x402090;
  lab_0x402090:
    // 0x402090
    *(int64_t *)(8 * v9 + result2) = a1;
    g39 = (int32_t)v9 + 1;
    if (v10 <= (int64_t)g57) {
        // 0x40207d
        return result2;
    }
    // 0x4020a8
    g57 = v10;
    return result2;
}
// Address range: 0x402150 - 0x402497
int64_t function_402150(int64_t a1) {
    char v1 = a1;
    int64_t v2 = 0; // 0x402165
    char v3 = 1; // 0x402165
    int64_t v4 = a1; // 0x402165
    int64_t v5 = 0; // 0x402165
    int64_t v6 = 0; // 0x402165
    int64_t v7 = 0; // 0x402165
    int64_t v8 = 0; // 0x402165
    if (v1 == 0) {
        // 0x402271
        int64_t result; // 0x402150
        return result;
    }
    char v9 = v1; // 0x402165
    int64_t v10; // 0x402150
    int64_t v11; // 0x402150
    int64_t v12; // 0x402150
    int64_t v13; // 0x402150
    int64_t v14; // 0x402150
    int64_t v15; // 0x402150
    int64_t v16; // 0x402150
    int64_t result3; // 0x402150
    int64_t v17; // 0x402150
    int64_t v18; // 0x402150
    char v19; // 0x402150
    char v20; // 0x402150
    int64_t str; // 0x402150
    while (true) {
      lab_0x4021ee:
        // 0x4021ee
        v15 = v8;
        v11 = v6;
        char v21 = v3;
        str = v2;
        int64_t v22 = v4; // 0x402227
        int64_t v23 = v5; // 0x402150
        int64_t v24 = v7; // 0x402150
        char v25 = v9; // 0x402227
        char v26; // 0x402150
        int64_t v27; // 0x402150
        while (true) {
            // 0x4021ee
            v26 = v25;
            v13 = v24;
            v18 = v23;
            v27 = v22;
            if (v26 != 44) {
                int16_t * v28 = *__ctype_b_loc(); // 0x402199
                if (*(char *)(2 * (int64_t)v26 + (int64_t)v28) % 2 == 0) {
                    // break -> 0x4021a2
                    break;
                }
            }
            // 0x4021f4
            v2 = str;
            v19 = v21;
            v16 = v27;
            v17 = v18;
            v10 = v11;
            v12 = v13;
            v14 = v15;
            if ((char)v18 == 0) {
                goto lab_0x4021e0;
            }
            if ((char)v11 != 0) {
                int64_t v29 = function_401f90(v15); // 0x4022e8
                if ((char)v29 == 0) {
                    goto lab_0x40248d;
                } else {
                    // 0x4022f8
                    v2 = str;
                    v19 = v21;
                    v16 = v27;
                    v17 = 0;
                    v10 = v29 & 0xffffffff;
                    v12 = v13;
                    v14 = v15;
                    goto lab_0x4021e0;
                }
            }
            if ((char)v13 == 0) {
                // 0x4022b0
                function_402030(v15);
                v2 = str;
                v19 = v21;
                v16 = v27;
                v17 = 0;
                v10 = v13 & 0xffffffff;
                v12 = v13;
                v14 = v15;
                goto lab_0x4021e0;
            }
            int64_t v30 = function_401fe0(v15); // 0x402212
            if ((char)v30 == 0) {
                // 0x40248d
                exit(1);
                // UNREACHABLE
            }
            // 0x402222
            v22 = v27 + 1;
            v25 = *(char *)v22;
            v23 = 0;
            v24 = v30 & 0xffffffff;
            v20 = v21;
            result3 = v27;
            if (v25 == 0) {
                goto lab_0x402266;
            }
        }
        switch (v26) {
            case 47: {
                // 0x4022c8
                v2 = str;
                v19 = v21;
                v16 = v27;
                v17 = v18;
                v10 = 1;
                v12 = 0;
                v14 = v15;
                if ((char)v18 != 0) {
                    // 0x4023b0
                    function_404660(v27);
                    error(0, (int32_t)"'/' specifier not at start of number: %s" ^ (int32_t)"'/' specifier not at start of number: %s", dcgettext(NULL, "'/' specifier not at start of number: %s", 5));
                    v2 = str;
                    v19 = 0;
                    v16 = v27;
                    v17 = v18;
                    v10 = v18 & 0xffffffff;
                    v12 = 0;
                    v14 = v15;
                }
                goto lab_0x4021e0;
            }
            case 43: {
                // 0x402308
                v2 = str;
                v19 = v21;
                v16 = v27;
                v17 = v18;
                v10 = 0;
                v12 = 1;
                v14 = v15;
                if ((char)v18 != 0) {
                    // 0x4023f0
                    function_404660(v27);
                    error(0, (int32_t)"'+' specifier not at start of number: %s" ^ (int32_t)"'+' specifier not at start of number: %s", dcgettext(NULL, "'+' specifier not at start of number: %s", 5));
                    v2 = str;
                    v19 = 0;
                    v16 = v27;
                    v17 = v18;
                    v10 = 0;
                    v12 = v18 & 0xffffffff;
                    v14 = v15;
                }
                goto lab_0x4021e0;
            }
            default: {
                int32_t v31 = (int32_t)v26 - 48; // 0x4021ba
                if (v26 != 57 && v31 >= 9) {
                    // 0x402460
                    function_404660(v27);
                    error(0, (int32_t)"tab size contains invalid character(s): %s" ^ (int32_t)"tab size contains invalid character(s): %s", dcgettext(NULL, "tab size contains invalid character(s): %s", 5));
                    goto lab_0x40248d;
                }
                if ((char)v18 != 0) {
                    if (v15 < 0x199999999999999a) {
                        int64_t v32 = 10 * v15 + (int64_t)v31; // 0x402287
                        v2 = str;
                        v19 = v21;
                        v16 = v27;
                        v17 = v18;
                        v10 = v11;
                        v12 = v13;
                        v14 = v32;
                        if (v32 < v15) {
                            goto lab_0x40233b;
                        } else {
                            goto lab_0x4021e0;
                        }
                    } else {
                        goto lab_0x40233b;
                    }
                } else {
                    // 0x4021cf
                    v2 = v27;
                    v19 = v21;
                    v16 = v27;
                    v17 = 1;
                    v10 = v11;
                    v12 = v13;
                    v14 = v31;
                    goto lab_0x4021e0;
                }
            }
        }
    }
  lab_0x402238:
    // 0x402238
    v20 = v3;
    int64_t v33; // 0x402150
    result3 = v33;
    if ((char)v5 != 0) {
        if (v3 == 0) {
            // 0x40248d
            exit(1);
            // UNREACHABLE
        }
        if ((char)v6 != 0) {
            int64_t result2 = function_401f90(v8); // 0x402443
            if ((char)result2 != 0) {
                // 0x402271
                return result2;
            }
          lab_0x40248d:
            // 0x40248d
            exit(1);
            // UNREACHABLE
        }
        if ((char)v7 == 0) {
            // 0x402430
            return function_402030(v8);
        }
        int64_t v34 = function_401fe0(v8); // 0x40225d
        v20 = v34;
        result3 = v34;
    }
  lab_0x402266:
    // 0x402266
    if (v20 == 0) {
        // 0x40248d
        exit(1);
        // UNREACHABLE
    }
    // 0x402271
    return result3;
  lab_0x4021e0:
    // 0x4021e0
    v8 = v14;
    v7 = v12;
    v6 = v10;
    v5 = v17;
    v33 = v16;
    v3 = v19;
    v4 = v33 + 1;
    v9 = *(char *)v4;
    if (v9 == 0) {
        // break -> 0x402238
        goto lab_0x402238;
    }
    goto lab_0x4021ee;
  lab_0x40233b:;
    int32_t ini_seg_bytes = strspn((char *)str, "0123456789"); // 0x402347
    int64_t v35 = function_404eb0(); // 0x402359
    function_404660(v35);
    error(0, (int32_t)"tab stop is too large %s" ^ (int32_t)"tab stop is too large %s", dcgettext(NULL, "tab stop is too large %s", 5));
    free((int64_t *)v35);
    v2 = str;
    v19 = 0;
    v16 = str - 1 + (int64_t)ini_seg_bytes;
    v17 = v18;
    v10 = v11;
    v12 = v13;
    v14 = v15;
    goto lab_0x4021e0;
}
// Address range: 0x4024a0 - 0x4025e5
int64_t function_4024a0(void) {
    // 0x4024a0
    char * format; // 0x40253e
    int64_t v1; // 0x4024f2
    int64_t v2; // 0x4024bb
    if (g39 == 0) {
        goto lab_0x402558;
    } else {
        // 0x4024bb
        v2 = *(int64_t *)g41;
        int64_t v3 = v2; // 0x4024c4
        if (v2 == 0) {
            goto lab_0x4025b0;
        } else {
            int64_t v4 = 1; // 0x4024e9
            while (v4 != (int64_t)g39) {
                uint64_t v5 = *(int64_t *)(8 * v4 + g41); // 0x4024d0
                if (v5 == 0) {
                    goto lab_0x4025b0;
                }
                uint64_t v6 = v3;
                v3 = v5;
                if (v6 >= v5) {
                    // 0x40258a
                    error(1, (int32_t)"tab sizes must be ascending" ^ (int32_t)"tab sizes must be ascending", dcgettext(NULL, "tab sizes must be ascending", 5));
                    goto lab_0x4025b0;
                }
                v4++;
            }
            // 0x4024f2
            v1 = g42;
            if (v1 == 0) {
                goto lab_0x402508;
            } else {
                // 0x4024fe
                if ((int64_t)g43 != 0) {
                    // 0x402532
                    format = dcgettext(NULL, "'/' specifier is mutually exclusive with '+'", 5);
                    error(1, (int32_t)"'/' specifier is mutually exclusive with '+'" ^ (int32_t)"'/' specifier is mutually exclusive with '+'", format);
                    goto lab_0x402558;
                } else {
                    goto lab_0x402508;
                }
            }
        }
    }
  lab_0x4025b0:;
    char * format2 = dcgettext(NULL, "tab size cannot be 0", 5); // 0x4025bc
    error(1, (int32_t)"tab size cannot be 0" ^ (int32_t)"tab size cannot be 0", format2);
    int64_t v7 = g43; // 0x4025cd
    int64_t v8 = (int64_t)format2; // 0x4025cd
    goto lab_0x4025d2;
  lab_0x402558:;
    int64_t v10 = g42; // 0x402558
    int64_t v11 = g43;
    v7 = v11;
    v8 = v10;
    int128_t v9; // 0x402577
    if (v10 == 0) {
        int64_t result2 = v11 == 0 ? 8 : v11;
        v9 = result2;
        g57 = v9;
        g44 = v9;
        return result2;
    }
    goto lab_0x4025d2;
  lab_0x4025d2:;
    int64_t result = v8; // 0x4025da
    if (v7 == 0) {
        // 0x402577
        v9 = result;
        g57 = v9;
        g44 = v9;
        return result;
    }
    // 0x402532
    format = dcgettext(NULL, "'/' specifier is mutually exclusive with '+'", 5);
    error(1, (int32_t)"'/' specifier is mutually exclusive with '+'" ^ (int32_t)"'/' specifier is mutually exclusive with '+'", format);
    goto lab_0x402558;
  lab_0x402508:;
    int64_t result3 = v1; // 0x40250c
    int128_t v12 = 0; // 0x40250c
    if (g39 == 1) {
        int64_t v13 = g43 | g42; // 0x402520
        result3 = v13;
        v12 = v13 != 0 ? 0 : (int128_t)v2;
    }
    // 0x402519
    g44 = v12;
    return result3;
}
// Address range: 0x4025f0 - 0x402698
int64_t function_4025f0(uint64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = g44; // 0x4025f0
    *(char *)a3 = 0;
    uint64_t v2; // 0x4025f0
    if (v1 != 0) {
        // 0x402660
        v2 = v1;
        return v2 + a1 - a1 % v2;
    }
    uint64_t v3 = (int64_t)a2;
    uint64_t v4 = (int64_t)g39; // 0x402602
    int64_t result2; // 0x4025f0
    if (v3 < v4) {
        uint64_t result = *(int64_t *)(g41 + 8 * v3); // 0x402615
        if (result > a1) {
            // 0x402659
            return result;
        }
        int64_t v5 = v3 + 1; // 0x402622
        *a2 = v5;
        while (v5 != v4) {
            // 0x402628
            v5++;
            uint64_t v6 = *(int64_t *)(g41 - 8 + 8 * v5); // 0x40262c
            result2 = v6;
            if (v6 > a1) {
                // 0x402659
                return result2;
            }
            *a2 = v5;
        }
    }
    int64_t v7 = g43; // 0x40263e
    if (v7 != 0) {
        // 0x402660
        v2 = v7;
        return v2 + a1 - a1 % v2;
    }
    int64_t v8 = g42; // 0x40264a
    if (v8 != 0) {
        // 0x402678
        result2 = v8 + a1 - (a1 - *(int64_t *)(8 * v4 - 8 + g41)) % v8;
    } else {
        // 0x402656
        *(char *)a3 = 1;
        result2 = v8;
    }
    // 0x402659
    return result2;
}
// Address range: 0x4026a0 - 0x4026bb
int64_t function_4026a0(int64_t a1) {
    // 0x4026a0
    g37 = 0;
    g38 = a1 == 0 ? (int64_t)&g16 : a1;
    return (int64_t)&g16;
}
// Address range: 0x4026c0 - 0x4028a0
int64_t function_4026c0(int32_t a1) {
    // 0x4026c0
    bool v1; // 0x4026c0
    if (a1 != 0) {
        // 0x4026cb
        if (g36 == NULL) {
            // 0x402880
            __assert_fail("prev_file", "src/expand-common.c", 341, "next_file");
            return &g60;
        }
        int64_t v2 = (int64_t)g36; // 0x4026cb
        int64_t v3 = v2; // 0x4026e1
        if ((a1 & 32) != 0) {
            // 0x402840
            error(0, *__errno_location(), "%s", (char *)function_4044e0(0, 3, v2));
            g34 = 1;
            v3 = (int64_t)g36;
        }
        int64_t stream = a1;
        int64_t v4 = v1 ? -1 : 1; // 0x4026f4
        int64_t v5 = (int64_t)"-"; // 0x4026c0
        int64_t v6 = 2; // 0x4026f4
        unsigned char v7 = *(char *)v3; // 0x4026f4
        char v8 = *(char *)v5; // 0x4026f4
        int64_t v9 = v3 + v4; // 0x4026f4
        char v10 = v8; // 0x4026f4
        bool v11 = false; // 0x4026f4
        while (v7 == v8) {
            v6--;
            v5 += v4;
            v10 = v7;
            v11 = true;
            if (v6 == 0) {
                // break -> 
                break;
            }
            v7 = *(char *)v9;
            v8 = *(char *)v5;
            v9 += v4;
            v10 = v8;
            v11 = false;
        }
        unsigned char v12 = v10;
        if ((v7 >= v12 && !v11) != v7 < v12) {
            // 0x4027f0
            if ((int32_t)function_404ed0(stream, v9) != 0) {
                int64_t v13 = function_4044e0(0, 3, (int64_t)g36); // 0x40280b
                error(0, *__errno_location(), "%s", (char *)v13);
                g34 = 1;
            }
        } else {
            // 0x402706
            clearerr_unlocked((struct _IO_FILE *)stream);
        }
    }
    int64_t v14 = *(int64_t *)g38; // 0x402717
    g38 += 8;
    if (v14 == 0) {
        // 0x4027e0
        return 0;
    }
    int64_t v15 = v1 ? -1 : 1; // 0x40279c
    int64_t v16 = 2; // 0x40279c
    int64_t v17 = v14;
    int64_t v18 = (int64_t)"-";
    unsigned char v19 = *(char *)v17; // 0x40279c
    char v20 = *(char *)v18; // 0x40279c
    char v21 = v20; // 0x40279c
    bool v22 = false; // 0x40279c
    int64_t v23; // 0x4026c0
    int64_t v24; // 0x4026c0
    while (v19 == v20) {
        v16--;
        v23 = v18 + v15;
        v24 = v17 + v15;
        v21 = v19;
        v22 = true;
        if (v16 == 0) {
            // break -> 
            break;
        }
        v17 = v24;
        v18 = v23;
        v19 = *(char *)v17;
        v20 = *(char *)v18;
        v21 = v20;
        v22 = false;
    }
    unsigned char v25 = v21;
    char * file_path; // 0x4026c0
    if ((v19 >= v25 && !v22) == v19 < v25) {
        // 0x402730
        g37 = 1;
        if (g29 != 0) {
            // break -> 0x4027b9
            break;
        }
    } else {
        // 0x4027a7
        file_path = (char *)v14;
        if (fopen(file_path, "r") != NULL) {
            // 0x4027b9
            goto lab_0x4027b9_2;
        }
    }
    // 0x402743
    error(0, *__errno_location(), "%s", (char *)function_4044e0(0, 3, v14));
    g34 = 1;
    int64_t v26 = *(int64_t *)g38; // 0x40277e
    g38 += 8;
    while (v26 != 0) {
        int64_t v27 = v26;
        v16 = 2;
        v17 = v27;
        v18 = (int64_t)"-";
        v19 = *(char *)v17;
        v20 = *(char *)v18;
        v21 = v20;
        v22 = false;
        while (v19 == v20) {
            v16--;
            v23 = v18 + v15;
            v24 = v17 + v15;
            v21 = v19;
            v22 = true;
            if (v16 == 0) {
                // break -> 
                break;
            }
            v17 = v24;
            v18 = v23;
            v19 = *(char *)v17;
            v20 = *(char *)v18;
            v21 = v20;
            v22 = false;
        }
        v25 = v21;
        if ((v19 >= v25 && !v22) == v19 < v25) {
            // 0x402730
            g37 = 1;
            if (g29 != 0) {
                // break -> 0x4027b9
                break;
            }
        } else {
            // 0x4027a7
            file_path = (char *)v27;
            if (fopen(file_path, "r") != NULL) {
                // 0x4027b9
                goto lab_0x4027b9_2;
            }
        }
        // 0x402743
        error(0, *__errno_location(), "%s", (char *)function_4044e0(0, 3, v27));
        g34 = 1;
        v26 = *(int64_t *)g38;
        g38 += 8;
    }
    // 0x4027e0
    return 0;
}
// Address range: 0x4028a0 - 0x4028f0
int64_t function_4028a0(void) {
    // 0x4028a0
    if (g37 == 0) {
        // 0x4028a9
        int64_t result; // 0x4028a0
        return result;
    }
    // 0x4028b0
    int64_t v1; // 0x4028a0
    int64_t result2 = function_404ed0(g29, v1); // 0x4028bb
    if ((int32_t)result2 == 0) {
        // 0x4028a9
        return result2;
    }
    // 0x4028c9
    error(1, *__errno_location(), "-");
    return &g60;
}
// Address range: 0x4028f0 - 0x402938
int64_t function_4028f0(int64_t a1) {
    // 0x4028f0
    fputs_unlocked(dcgettext(NULL, "  -t, --tabs=LIST  use comma separated list of tab positions\n", 5), g28);
    char * v1 = dcgettext(NULL, "                     The last specified position can be prefixed with '/'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of '+'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n", 5); // 0x402927
    return fputs_unlocked(v1, g28);
}
// Address range: 0x402940 - 0x402948
int64_t function_402940(int64_t a1) {
    // 0x402940
    g46 = a1;
    int64_t result; // 0x402940
    return result;
}
// Address range: 0x402950 - 0x402958
int64_t function_402950(int64_t a1) {
    // 0x402950
    g45 = a1;
    int64_t result; // 0x402950
    return result;
}
// Address range: 0x402960 - 0x4029fe
int64_t function_402960(void) {
    // 0x402960
    int32_t * err_num; // 0x402976
    if ((int32_t)function_405e40((int64_t)g28) == 0) {
        goto lab_0x40298c;
    } else {
        // 0x402976
        err_num = __errno_location();
        if (g45 == 0) {
            goto lab_0x4029a3;
        } else {
            // 0x402987
            if (*err_num != 32) {
                goto lab_0x4029a3;
            } else {
                goto lab_0x40298c;
            }
        }
    }
  lab_0x40298c:;
    int64_t result = function_405e40((int64_t)g31); // 0x402993
    if ((int32_t)result == 0) {
        // 0x40299c
        return result;
    }
    // 0x4029de
    _exit(g18);
    // UNREACHABLE
  lab_0x4029a3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4029af
    if (g46 == 0) {
        // 0x4029e9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4029c3
        error(0, *err_num, "%s: %s", (char *)function_4044b0((int64_t)g46), v1);
    }
    // 0x4029de
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x402a00 - 0x402a05
int64_t function_402a00(void) {
    // 0x402a00
    int64_t fd; // 0x402a00
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402a10 - 0x402a31
int64_t function_402a10(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402a10
    if (stream == 0) {
        // 0x402a30
        int64_t result; // 0x402a10
        return result;
    }
    // 0x402a15
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402a40 - 0x402ad9
int64_t function_402a40(int64_t str) {
    // 0x402a40
    if (str == 0) {
        // 0x402ab9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402a4e
    int64_t result = (int64_t)found_char_pos; // 0x402a4e
    if (found_char_pos == NULL) {
        // 0x402aa9
        g47 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402a58
    if (v1 - str < 7) {
        // 0x402aa9
        g47 = str;
        g30 = str;
        return result;
    }
    // 0x402a68
    bool v2; // 0x402a40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402a40
    int64_t v5 = result - 6; // 0x402a40
    int64_t v6 = 7; // 0x402a76
    unsigned char v7 = *(char *)v5; // 0x402a76
    char v8 = *(char *)v4; // 0x402a76
    char v9 = v8; // 0x402a76
    bool v10 = false; // 0x402a76
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
    int64_t v12 = (int64_t)"lt-"; // 0x402a80
    int64_t v13 = v1; // 0x402a80
    int64_t v14 = 3; // 0x402a80
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402aa9
        g47 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402a92
    char v16 = *(char *)v12; // 0x402a92
    char v17 = v16; // 0x402a92
    bool v18 = false; // 0x402a92
    while (v15 == v16) {
        // 0x402a82
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
    int64_t v20 = v1; // 0x402a9c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402a9e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402aa9
    g47 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402ae0 - 0x402bd2
int64_t function_402ae0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402af4
    int64_t result = (int64_t)v1; // 0x402af4
    if (result != a1) {
        // 0x402b01
        return result;
    }
    int64_t v2 = function_405f00(); // 0x402b10
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402bc6
    if (v3 == 85) {
        // 0x402b20
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402bb8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x402b4e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x402b5b
        // 0x402b01
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402bb8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x402b9d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x402baa
    // 0x402b01
    return result4;
}
// Address range: 0x402be0 - 0x402c37
int64_t function_402be0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402be0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402c28
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402c37 - 0x403e01
int64_t function_402c37(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402c81
    int64_t v3 = 0; // 0x402c81
    int64_t v4; // 0x402c37
    int64_t v5; // 0x402c37
    int64_t v6; // 0x402c37
    int64_t v7; // 0x402c37
    int64_t v8; // 0x402c37
    int64_t v9; // 0x402c37
    int64_t v10; // 0x402c37
    int64_t v11; // 0x402c37
    int64_t v12; // 0x402c37
    int64_t v13; // 0x402c37
    int64_t v14; // 0x402c37
    int64_t v15; // 0x402c37
    int64_t v16; // 0x402c37
    int64_t v17; // 0x402c37
    int64_t v18; // 0x402c37
    int64_t result; // 0x402c37
    int64_t v19; // 0x402c37
    int32_t wc; // bp+132, 0x402c37
    int64_t ps; // bp+136, 0x402c37
    char v20; // 0x4031f0
    int64_t v21; // 0x4031f0
    int64_t v22; // 0x403598
    int64_t v23; // 0x402c37
    int64_t v24; // 0x4035b7
    int32_t v25; // 0x402c37
    while (true) {
      lab_0x402c88_2:
        // 0x402c88
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402c37
        int64_t v27; // 0x402cbc
        while (true) {
          lab_0x402c88:
            // 0x402c88
            v5 = v26;
            bool v28 = v15 == v5; // 0x402c93
            if (v15 == -1) {
                // 0x402c95
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402ca3
            if (v28) {
                // break (via goto) -> 0x403408
                goto lab_0x403408;
            }
            // 0x402cac
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g59 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40329b
                    if (v25 % 2 == 0) {
                        goto lab_0x402de1;
                    }
                    // 0x4036bd
                    v26 = v5 + 1;
                    goto lab_0x402c88;
                }
                case 7: {
                    goto lab_0x402de1;
                }
                case 8: {
                    goto lab_0x402de1;
                }
                case 9: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402de1;
                }
                case 12: {
                    goto lab_0x402de1;
                }
                case 13: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402dad;
                }
                case 36: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402de1;
                }
                case 38: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402de1;
                }
                case 44: {
                    goto lab_0x402de1;
                }
                case 45: {
                    goto lab_0x402de1;
                }
                case 46: {
                    goto lab_0x402de1;
                }
                case 47: {
                    goto lab_0x402de1;
                }
                case 48: {
                    goto lab_0x402de1;
                }
                case 49: {
                    goto lab_0x402de1;
                }
                case 50: {
                    goto lab_0x402de1;
                }
                case 51: {
                    goto lab_0x402de1;
                }
                case 52: {
                    goto lab_0x402de1;
                }
                case 53: {
                    goto lab_0x402de1;
                }
                case 54: {
                    goto lab_0x402de1;
                }
                case 55: {
                    goto lab_0x402de1;
                }
                case 56: {
                    goto lab_0x402de1;
                }
                case 57: {
                    goto lab_0x402de1;
                }
                case 58: {
                    goto lab_0x402de1;
                }
                case 59: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402de1;
                }
                case 66: {
                    goto lab_0x402de1;
                }
                case 67: {
                    goto lab_0x402de1;
                }
                case 68: {
                    goto lab_0x402de1;
                }
                case 69: {
                    goto lab_0x402de1;
                }
                case 70: {
                    goto lab_0x402de1;
                }
                case 71: {
                    goto lab_0x402de1;
                }
                case 72: {
                    goto lab_0x402de1;
                }
                case 73: {
                    goto lab_0x402de1;
                }
                case 74: {
                    goto lab_0x402de1;
                }
                case 75: {
                    goto lab_0x402de1;
                }
                case 76: {
                    goto lab_0x402de1;
                }
                case 77: {
                    goto lab_0x402de1;
                }
                case 78: {
                    goto lab_0x402de1;
                }
                case 79: {
                    goto lab_0x402de1;
                }
                case 80: {
                    goto lab_0x402de1;
                }
                case 81: {
                    goto lab_0x402de1;
                }
                case 82: {
                    goto lab_0x402de1;
                }
                case 83: {
                    goto lab_0x402de1;
                }
                case 84: {
                    goto lab_0x402de1;
                }
                case 85: {
                    goto lab_0x402de1;
                }
                case 86: {
                    goto lab_0x402de1;
                }
                case 87: {
                    goto lab_0x402de1;
                }
                case 88: {
                    goto lab_0x402de1;
                }
                case 89: {
                    goto lab_0x402de1;
                }
                case 90: {
                    goto lab_0x402de1;
                }
                case 91: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402de1;
                }
                case 94: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402de1;
                }
                case 96: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402de1;
                }
                case 98: {
                    goto lab_0x402de1;
                }
                case 99: {
                    goto lab_0x402de1;
                }
                case 100: {
                    goto lab_0x402de1;
                }
                case 101: {
                    goto lab_0x402de1;
                }
                case 102: {
                    goto lab_0x402de1;
                }
                case 103: {
                    goto lab_0x402de1;
                }
                case 104: {
                    goto lab_0x402de1;
                }
                case 105: {
                    goto lab_0x402de1;
                }
                case 106: {
                    goto lab_0x402de1;
                }
                case 107: {
                    goto lab_0x402de1;
                }
                case 108: {
                    goto lab_0x402de1;
                }
                case 109: {
                    goto lab_0x402de1;
                }
                case 110: {
                    goto lab_0x402de1;
                }
                case 111: {
                    goto lab_0x402de1;
                }
                case 112: {
                    goto lab_0x402de1;
                }
                case 113: {
                    goto lab_0x402de1;
                }
                case 114: {
                    goto lab_0x402de1;
                }
                case 115: {
                    goto lab_0x402de1;
                }
                case 116: {
                    goto lab_0x402de1;
                }
                case 117: {
                    goto lab_0x402de1;
                }
                case 118: {
                    goto lab_0x402de1;
                }
                case 119: {
                    goto lab_0x402de1;
                }
                case 120: {
                    goto lab_0x402de1;
                }
                case 121: {
                    goto lab_0x402de1;
                }
                case 122: {
                    goto lab_0x402de1;
                }
                case 123: {
                    goto lab_0x402d85;
                }
                case 124: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402d85;
                }
                case 126: {
                    goto lab_0x402dad;
                }
                default: {
                    goto lab_0x403185;
                }
            }
        }
      lab_0x403185:
        if (v23 != 1) {
            // 0x4034f0
            ps = 0;
            int64_t len = v15; // 0x403500
            if (v15 == -1) {
                // 0x403502
                len = strlen((char *)str);
            }
            // 0x40352e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40358f:
                // 0x40358f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403594
                int64_t v30 = v29 + str;
                v24 = function_405dc0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403b0a_2;
                    }
                    case -1: {
                        goto lab_0x403b0a_2;
                    }
                    case -2: {
                        // 0x403bed
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403c27
                            v19 = v18;
                            int64_t v31 = v18; // 0x403c2a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403c37
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403c30
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403b0a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403b0a_2;
                    }
                    case 1: {
                        goto lab_0x403560;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40360c
                        char v34 = *(char *)v33; // 0x40361d
                        unsigned char v35; // 0x402c37
                        if (v34 < 125) {
                            // 0x403628
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40363f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403610
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40361d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403628
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40363f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403610
                            v33++;
                        }
                        goto lab_0x403560;
                    }
                }
            }
            goto lab_0x403b0a_2;
        } else {
            // 0x4031d4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402de1;
        }
    }
  lab_0x403408:
    // 0x403408
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403d0a
        if (v8 > result) {
            // 0x403d13
            *(char *)(v12 + result) = 0;
        }
        // 0x403037
        return result;
    }
    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402de1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402df0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402ffa_2;
        }
    }
    int64_t v39 = result; // 0x402ef1
    char v40 = v20; // 0x402ef1
    int64_t v41 = v38; // 0x402ef1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402ef1
    int64_t v43 = v36; // 0x402ef1
    goto lab_0x402e6d;
  lab_0x402ffa_2:
    // 0x403037
    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403b0a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402de1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4036de
        int64_t v50 = v5 + 1; // 0x4037c1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4037c8
        char v52 = v20; // 0x4037c8
        int64_t v53 = result; // 0x4037c8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403791
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403795
            int64_t v56 = v54 + 1; // 0x40379a
            int64_t v57 = v51 + 1; // 0x4037c1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40378c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403791
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403795
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
        goto lab_0x402e6d;
    }
  lab_0x403560:
    // 0x403560
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40357f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403582
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403b0a
        goto lab_0x403b0a_2;
    }
    goto lab_0x40358f;
  lab_0x402dad:
    // 0x402dad
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402ffa_2;
    }
    goto lab_0x402de1;
  lab_0x402d85:;
    bool v60 = v15 == 1; // 0x402d90
    if (v15 == -1) {
        // 0x402d92
        v60 = *(char *)v1 == 0;
    }
    // 0x402d9e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402de1;
    } else {
        goto lab_0x402dad;
    }
  lab_0x402e6d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402e72
        *(char *)(v44 + v45) = v40;
    }
    // 0x402e76
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402c88_2;
}
// Address range: 0x403e10 - 0x403fae
int64_t function_403e10(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403e12
    int32_t * v3 = __errno_location(); // 0x403e2c
    int64_t v4 = (int64_t)g20; // 0x403e31
    int32_t v5 = *v3; // 0x403e3b
    int64_t v6 = v4; // 0x403e51
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403fa9
            function_404e70(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403e60
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403e67
        int64_t v9; // 0x403e10
        if (g20 == &g21) {
            int64_t v10 = function_404c80(0, v8); // 0x403f8a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x403f8f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404c80(v4, v8); // 0x403e7b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x403e8a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x403e8a
        int32_t v14 = v7; // 0x403e91
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403ec1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403ecb
    int64_t * v17 = (int64_t *)v15; // 0x403ece
    uint64_t v18 = *v17; // 0x403ece
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403ed1
    int64_t result = *v19; // 0x403ed1
    int64_t v20; // 0x403e10
    uint64_t v21 = function_402be0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403ef4
    if (v18 > v21) {
        // 0x403f6b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403f07
    *v17 = v22;
    if (result != (int64_t)&g48) {
        // 0x403f17
        free((int64_t *)result);
    }
    int64_t result2 = function_404c20(v22); // 0x403f31
    *v19 = result2;
    int64_t v23; // 0x403e10
    function_402be0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403f6b
    *v3 = v5;
    return result2;
}
// Address range: 0x403fb0 - 0x403fe4
int64_t function_403fb0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403fb7
    int64_t result = function_404e20(a1 == 0 ? (int64_t)&g49 : a1, 56); // 0x403fd6
    return result;
}
// Address range: 0x403ff0 - 0x403fff
int64_t function_403ff0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g49 : a1); // 0x403ffc
    return result;
}
// Address range: 0x404000 - 0x40400f
int64_t function_404000(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 : a1; // 0x404008
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g49;
}
// Address range: 0x404010 - 0x404043
int64_t function_404010(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 + 8 : a1 + 8; // 0x404029
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40402e
    uint32_t v3 = *v2; // 0x40402e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404032
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404050 - 0x404063
int64_t function_404050(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g49 + 4 : a1 + 4); // 0x40405c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404070 - 0x40409b
int64_t function_404070(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 : a1; // 0x404078
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404095
        abort();
        // UNREACHABLE
    }
    // 0x40408c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g49;
}
// Address range: 0x4040a0 - 0x404112
int64_t function_4040a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g49 : a5; // 0x4040c2
    int32_t * v2 = __errno_location(); // 0x4040cb
    uint32_t v3 = *(int32_t *)v1; // 0x4040eb
    int64_t result = function_402be0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4040fa
    return result;
}
// Address range: 0x404120 - 0x404201
int64_t function_404120(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g49 : a4; // 0x404142
    int32_t * v2 = __errno_location(); // 0x404148
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404167
    int32_t * v4 = (int32_t *)v1; // 0x40416a
    int64_t v5 = function_402be0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404185
    int64_t v6 = v5 + 1; // 0x40418a
    int64_t result = function_404c20(v6); // 0x40419f
    function_402be0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4041e4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4041ed
    return result;
}
// Address range: 0x404210 - 0x40421a
int64_t function_404210(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404210
    return function_404120(a1, a2, 0, a3);
}
// Address range: 0x404220 - 0x4042b5
int64_t function_404220(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x404220
    int64_t v2 = v1; // 0x404220
    int64_t v3 = v2; // 0x404234
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404253
        free((int64_t *)*(int64_t *)v4);
        v3 = &g60;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404250
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g60;
        }
    }
    int64_t v6 = v3; // 0x40426d
    if (g21 != 0x60a320) {
        // 0x40426f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g48;
        v6 = &g60;
    }
    int64_t result = v6; // 0x404291
    if (g20 != &g21) {
        // 0x404293
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g60;
    }
    // 0x4042a6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4042c0 - 0x4042d1
int64_t function_4042c0(void) {
    // 0x4042c0
    int64_t v1; // 0x4042c0
    return function_403e10(v1, v1, -1, (int64_t *)&g49);
}
// Address range: 0x4042e0 - 0x4042ea
int64_t function_4042e0(void) {
    // 0x4042e0
    int64_t v1; // 0x4042e0
    return function_403e10(v1, v1, v1, (int64_t *)&g49);
}
// Address range: 0x4042f0 - 0x404306
int64_t function_4042f0(int64_t a1) {
    // 0x4042f0
    return function_403e10(0, a1, -1, (int64_t *)&g49);
}
// Address range: 0x404310 - 0x404322
int64_t function_404310(int64_t a1, int64_t a2) {
    // 0x404310
    return function_403e10(0, a1, a2, (int64_t *)&g49);
}
// Address range: 0x404330 - 0x404398
int64_t function_404330(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404340
    return function_403e10((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4043a0 - 0x404404
int64_t function_4043a0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4043b0
    return function_403e10((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404410 - 0x40441c
int64_t function_404410(int64_t a1, int64_t a2) {
    // 0x404410
    return function_404330(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404420 - 0x40442f
int64_t function_404420(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404420
    return function_4043a0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404430 - 0x4044a0
int64_t function_404430(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g49); // 0x40443d
    int128_t v2 = __asm_movdqa(g50); // 0x404445
    int128_t v3 = __asm_movdqa(g51); // 0x40444d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404462
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404478
    uint32_t v6 = *v5; // 0x404478
    uint32_t v7 = (int32_t)a3 % 32; // 0x40447d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403e10(0, a1, a2, &v4);
}
// Address range: 0x4044a0 - 0x4044ad
int64_t function_4044a0(int64_t a1, int64_t a2) {
    // 0x4044a0
    return function_404430(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4044b0 - 0x4044c1
int64_t function_4044b0(int64_t a1) {
    // 0x4044b0
    return function_404430(a1, -1, 58);
}
// Address range: 0x4044d0 - 0x4044da
int64_t function_4044d0(void) {
    // 0x4044d0
    int64_t v1; // 0x4044d0
    return function_404430(v1, v1, 58);
}
// Address range: 0x4044e0 - 0x40454e
int64_t function_4044e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4044fa
    return function_403e10((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404550 - 0x4045bc
int64_t function_404550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g49); // 0x404557
    int128_t v2 = __asm_movdqa(g50); // 0x40455f
    int128_t v3 = __asm_movdqa(g51); // 0x404567
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404589
    if (a2 == 0 || a3 == 0) {
        // 0x4045b7
        abort();
        // UNREACHABLE
    }
    // 0x40459a
    return function_403e10(a1, a4, a5, &v4);
}
// Address range: 0x4045c0 - 0x4045c9
int64_t function_4045c0(void) {
    // 0x4045c0
    int64_t v1; // 0x4045c0
    return function_404550(v1, v1, v1, v1, -1);
}
// Address range: 0x4045d0 - 0x4045e7
int64_t function_4045d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045d0
    return function_404550(0, a1, a2, a3, -1);
}
// Address range: 0x4045f0 - 0x404603
int64_t function_4045f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4045f0
    return function_404550(0, a1, a2, a3, a4);
}
// Address range: 0x404610 - 0x40461a
int64_t function_404610(void) {
    // 0x404610
    int64_t v1; // 0x404610
    return function_403e10(v1, v1, v1, &g19);
}
// Address range: 0x404620 - 0x404632
int64_t function_404620(int64_t a1, int64_t a2) {
    // 0x404620
    return function_403e10(0, a1, a2, &g19);
}
// Address range: 0x404640 - 0x404651
int64_t function_404640(void) {
    // 0x404640
    int64_t v1; // 0x404640
    return function_403e10(v1, v1, -1, &g19);
}
// Address range: 0x404660 - 0x404676
int64_t function_404660(int64_t a1) {
    // 0x404660
    return function_403e10(0, a1, -1, &g19);
}
// Address range: 0x404680 - 0x404a5d
int64_t function_404680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404718
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40469c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4046b6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4046fb
    if (a6 < 10) {
        // 0x40470a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404802
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404a60 - 0x404a80
int64_t function_404a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404a60
    if (a5 == 0) {
        // 0x404a7b
        return function_404680(a1, a2, a3, a4, a5, 0, (int64_t)&g60);
    }
    int64_t v1 = 0; // 0x404a67
    v1++;
    int64_t v2 = v1; // 0x404a79
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404a70
        v1++;
        v2 = v1;
    }
    // 0x404a7b
    return function_404680(a1, a2, a3, a4, a5, v2, (int64_t)&g60);
}
// Address range: 0x404a80 - 0x404ae0
int64_t function_404a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404a80
    int64_t v3 = &v2; // 0x404a80
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404ab3
    int64_t v6; // 0x404a9d
    int64_t * v7; // 0x404abb
    int64_t v8; // 0x404abb
    int64_t v9; // 0x404ac7
    if (v5 < 48) {
        // 0x404a90
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404ad3
            break;
        }
    } else {
        // 0x404abb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404ad3
            break;
        }
    }
    int64_t v10 = 10; // 0x404ab1
    while (v4 != 9) {
        // 0x404aa9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404a90
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404ad3
                break;
            }
        } else {
            // 0x404abb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404ad3
                break;
            }
        }
        // 0x404aa9
        v10 = 10;
    }
    // 0x404ad3
    return function_404680(a1, a2, a3, a4, v3, v10, (int64_t)&g60);
}
// Address range: 0x404ae0 - 0x404b9c
int64_t function_404ae0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404ae0
    int64_t v1; // bp-168, 0x404ae0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404ae0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404ae0
    int64_t v8; // 0x404ae0
    int64_t v9; // bp-56, 0x404ae0
    int64_t v10; // 0x404b45
    int64_t v11; // 0x404b69
    if ((int32_t)v6 < 48) {
        // 0x404b30
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404b80
            break;
        }
    } else {
        // 0x404b62
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404b80
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404b5a
    int64_t v13 = 10; // 0x404b5a
    while (v5 != 9) {
        // 0x404b5c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404b30
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404b80
                break;
            }
        } else {
            // 0x404b62
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404b80
                break;
            }
        }
        // 0x404b52
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404b80
    int64_t v14; // bp-136, 0x404ae0
    int64_t result = function_404680(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g60); // 0x404b8f
    return result;
}
// Address range: 0x404ba0 - 0x404c14
int64_t function_404ba0(int64_t a1) {
    // 0x404ba0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404c03
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404c20 - 0x404c3a
int64_t function_404c20(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404c24
    if (size != 0 != (mem == NULL)) {
        // 0x404c33
        return (int64_t)mem;
    }
    // 0x404c35
    function_404e70(size);
    // UNREACHABLE
}
// Address range: 0x404c40 - 0x404c61
int64_t function_404c40(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404c43
    int64_t v2 = v1; // 0x404c43
    if (v2 < 0) {
        // 0x404c5b
        function_404e70(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404c59
        return function_404c20(v2);
    }
    // 0x404c5b
    function_404e70(v2);
    // UNREACHABLE
}
// Address range: 0x404c70 - 0x404c72
int64_t function_404c70(void) {
    // 0x404c70
    int64_t v1; // 0x404c70
    return function_404c20(v1);
}
// Address range: 0x404c80 - 0x404cb6
int64_t function_404c80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404ca8
        free(v1);
        return (int32_t)&g60 ^ (int32_t)&g60;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404c91
    if (a2 != 0 != (mem == NULL)) {
        // 0x404ca0
        return (int64_t)mem;
    }
    // 0x404cb1
    function_404e70(a1);
    // UNREACHABLE
}
// Address range: 0x404cc0 - 0x404ce1
int64_t function_404cc0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404cc3
    int64_t v2 = v1; // 0x404cc3
    if (v2 < 0) {
        // 0x404cdb
        function_404e70(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404cd9
        return function_404c80(a1, v2);
    }
    // 0x404cdb
    function_404e70(a1);
    // UNREACHABLE
}
// Address range: 0x404cf0 - 0x404d76
int64_t function_404cf0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404d4b
            function_404e70(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404c80(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404d33
    if (a2 == 0) {
        // 0x404d58
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404d38
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404d4b
        function_404e70(a1);
        // UNREACHABLE
    }
    // 0x404d1a
    *(int64_t *)a2 = v2;
    return function_404c80(a1, v2 * a3);
}
// Address range: 0x404d80 - 0x404dd0
int64_t function_404d80(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404d80
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404dca
            function_404e70(a1);
            // UNREACHABLE
        }
        // 0x404da2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404c80(a1, v1);
    }
    if (a2 == 0) {
        // 0x404db5
        *(int64_t *)a2 = 128;
        return function_404c80(0, 128);
    }
    // 0x404dc8
    if (a2 < 0) {
        // 0x404dca
        function_404e70(a1);
        // UNREACHABLE
    }
    // 0x404da2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404c80(a1, v1);
}
// Address range: 0x404dd0 - 0x404de7
int64_t function_404dd0(int64_t a1, int64_t a2) {
    // 0x404dd0
    return (int64_t)memset((int64_t *)function_404c20(a1), 0, (int32_t)a1);
}
// Address range: 0x404df0 - 0x404e1e
int64_t function_404df0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404df7
    if ((int64_t)v1 < 0) {
        // 0x404e19
        function_404e70(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404e19
        function_404e70(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404e0a
    if (mem != NULL) {
        // 0x404e14
        return (int64_t)mem;
    }
    // 0x404e19
    function_404e70(nmemb);
    // UNREACHABLE
}
// Address range: 0x404e20 - 0x404e48
int64_t function_404e20(int64_t a1, int64_t a2) {
    int64_t v1 = function_404c20(a2); // 0x404e2f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404e50 - 0x404e63
int64_t function_404e50(int64_t str) {
    // 0x404e50
    return function_404e20(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404e70 - 0x404ea1
int64_t function_404e70(int64_t a1) {
    // 0x404e70
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404eb0 - 0x404ec8
int64_t function_404eb0(void) {
    // 0x404eb0
    int64_t str; // 0x404eb0
    char * v1 = strndup((char *)str, (int32_t)str); // 0x404eb4
    if (v1 != NULL) {
        // 0x404ebe
        return (int64_t)v1;
    }
    // 0x404ec3
    function_404e70(str);
    // UNREACHABLE
}
// Address range: 0x404ed0 - 0x404f4b
int64_t function_404ed0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404ed7
    if (fileno(stream) < 0) {
        // 0x404f37
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x404eea
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x404f1b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x404f37
            return fclose(stream);
        }
    }
    // 0x404eec
    if ((int32_t)function_404f50(a1, v1) == 0) {
        // 0x404f37
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x404ef8
    int32_t v3 = *v2; // 0x404f00
    int64_t result = fclose(stream); // 0x404f0e
    if (v3 != 0) {
        // 0x404f40
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x404f10
    return result;
}
// Address range: 0x404f50 - 0x404f90
int64_t function_404f50(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x404f6a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x404f6a
        return fflush(stream);
    }
    // 0x404f78
    function_404f90(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x404f90 - 0x404fe7
int64_t function_404f90(int64_t stream, int32_t offset, int64_t whence) {
    // 0x404f90
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x404f9a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x404fcb
    int64_t result = -1; // 0x404fd4
    if (v1 != -1) {
        // 0x404fd6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x404fe2
    return result;
}
// Address range: 0x404ff0 - 0x4050cf
int64_t function_404ff0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x404ffc
    uint32_t v2 = *v1; // 0x404ffc
    int64_t v3 = a2 & 0xffffffff; // 0x405001
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405004
    uint64_t v5 = (int64_t)*v4; // 0x405004
    int64_t v6; // 0x405072
    if (v3 <= v5) {
      lab_0x40506c_2:
        // 0x40506c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404ff2
    int64_t v8 = v2; // 0x404ff0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40506c
        goto lab_0x40506c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405028
    int64_t v17; // 0x405036
    int64_t * v18; // 0x405050
    int64_t * v19; // 0x405053
    int64_t v20; // 0x40505e
    int64_t v21; // 0x405036
    while ((v16 & 0xffffffff) > v10) {
        // 0x405033
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405050
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405067
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40506c
            goto lab_0x40506c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40506c
            goto lab_0x40506c_2;
        }
        // 0x405022
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4050ab
    int64_t * v23 = (int64_t *)v22; // 0x4050b0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4050b3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4050b0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4050c7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40501d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40506c
            goto lab_0x40506c_2;
        }
        // 0x405022
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405033
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405050
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405067
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40506c
                goto lab_0x40506c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40506c
                goto lab_0x40506c_2;
            }
            // 0x405022
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405090
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4050b0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4050c7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40506c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4050d0 - 0x4056ec
int64_t function_4050d0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4050ef
    int64_t v2 = *v1; // 0x4050ef
    char * str2 = (char *)v2; // 0x4050fc
    char c = *str2; // 0x4050fc
    int64_t v3 = v2; // 0x405128
    int64_t v4 = 0; // 0x4050d0
    int32_t v5; // 0x4050d0
    int64_t v6; // 0x4050d0
    int64_t v7; // 0x4050d0
    int64_t v8; // 0x4050d0
    int64_t v9; // 0x4050d0
    int64_t v10; // 0x4050d0
    int64_t v11; // 0x4050d0
    int64_t v12; // 0x4050d0
    int64_t v13; // 0x4050d0
    int64_t str3; // 0x4050d0
    int64_t v14; // 0x4050d0
    int64_t v15; // 0x4050d0
    int64_t v16; // 0x4050d0
    int64_t v17; // 0x4050d0
    int32_t v18; // 0x4050d0
    int32_t v19; // 0x4050d0
    int32_t v20; // 0x4050d0
    int32_t v21; // 0x4050d0
    int32_t v22; // 0x4050d0
    int32_t v23; // 0x4050d0
    int32_t v24; // 0x4050d0
    int32_t v25; // 0x4050d0
    int32_t v26; // 0x4050d0
    int32_t v27; // 0x4050d0
    int32_t v28; // 0x4050d0
    int32_t v29; // 0x4050d0
    int64_t nmemb; // 0x4050d0
    int64_t v30; // 0x4050d0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40512c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405128
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405138
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40513e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405108
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40516c
                int64_t v34; // 0x4050d0
                int64_t v35; // 0x4050d0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405175
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4052f0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405186
                int64_t v37 = *(int64_t *)v36; // 0x40518a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405160
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405175
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4052f0;
                        }
                    }
                    // 0x405186
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
                  lab_0x4051d6:
                    // 0x4051d6
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
                        goto lab_0x405230;
                    } else {
                        if (v11 == 0) {
                            // 0x4053a0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405230;
                        } else {
                            if (v39 == 0) {
                                // 0x405350
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4051fa;
                                } else {
                                    // 0x40535c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4051fa;
                                    } else {
                                        // 0x40536a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4051fa;
                                        } else {
                                            goto lab_0x405230;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4051fa;
                            }
                        }
                    }
                }
              lab_0x405241:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405416
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4055c2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x4055e2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40562f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405649
                            int64_t v45; // 0x40564b
                            if (*(char *)v42 != 0) {
                                // 0x40564b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405643
                            while (v17 + nmemb != v42) {
                                // 0x405645
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40564b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405638
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405670
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405424
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40557f
                        free((int64_t *)v17);
                    }
                    // 0x405479
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405490
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40533e
                    return 63;
                }
                // 0x405260
                v5 = v39;
                if (v13 != 0) {
                    // 0x4052e4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4052f0:;
                    int32_t * v49 = (int32_t *)a7; // 0x405300
                    uint32_t v50 = *v49; // 0x405300
                    int64_t v51 = v50; // 0x405300
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40530a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405313
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40553f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4054ea
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40533e
                            return 63;
                        }
                        // 0x405388
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40569f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40559d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4055b0
                                // 0x40533e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4054ae
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4054c2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40532b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40532e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405332
                    int64_t result = v59; // 0x405338
                    if (v58 != 0) {
                        // 0x40533a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40533e
                    return result;
                }
            } else {
                // 0x40513e
                v5 = v32;
            }
            // break -> 0x405265
            break;
        }
    }
    // 0x405265
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40527d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405287
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40533e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4053c9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4052b6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4052c6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405230:
    // 0x405230
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405230
    int64_t v63 = *(int64_t *)v62; // 0x405234
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405241
        goto lab_0x405241;
    }
    goto lab_0x4051d6;
  lab_0x4051fa:
    // 0x4051fa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4050d0
    int32_t v65; // 0x4050d0
    int32_t v66; // 0x4050d0
    if (v27 != 0) {
        goto lab_0x405230;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4053b0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405230;
            } else {
                goto lab_0x405221;
            }
        } else {
            // 0x405215
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40550c
                int64_t v67 = (int64_t)mem; // 0x40550c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405230;
                } else {
                    // 0x40551f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405221;
                }
            } else {
                goto lab_0x405221;
            }
        }
    }
  lab_0x405221:
    // 0x405221
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405230;
}
// Address range: 0x4056f0 - 0x405cb6
int64_t function_4056f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405711
    if (v3 < 1) {
        // 0x4058ce
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40570d
    int32_t v5 = *(int32_t *)a7; // 0x405719
    uint64_t v6 = a1 & 0xffffffff; // 0x40571b
    int64_t v7 = v2; // 0x405720
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405723
    *v8 = 0;
    int64_t v9; // 0x4056f0
    int64_t v10; // 0x4056f0
    int64_t v11; // 0x4056f0
    int64_t v12; // 0x4056f0
    int64_t str; // 0x4056f0
    int64_t v13; // 0x4056f0
    int64_t v14; // 0x4056f0
    int64_t v15; // 0x4056f0
    int64_t v16; // 0x4056f0
    int64_t v17; // 0x4056f0
    int32_t v18; // 0x4056f0
    char v19; // 0x4056f0
    if (v5 == 0) {
        // 0x405908
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40573a;
    } else {
        // 0x405733
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405780
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405783
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405848;
            } else {
                int64_t v22 = v7 + 1; // 0x405796
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4057a6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40585c;
                } else {
                    goto lab_0x4057b8;
                }
            }
        } else {
            goto lab_0x40573a;
        }
    }
  lab_0x40573a:
    // 0x40573a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405740
    *v24 = 0;
    int64_t v25; // 0x4056f0
    int64_t v26; // 0x4056f0
    int64_t v27; // 0x4056f0
    switch (*(char *)&v2) {
        case 45: {
            // 0x405830
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40583d;
        }
        case 43: {
            // 0x405b40
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40583d;
        }
        default: {
            // 0x40575c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405abf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405bd8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40583d;
                } else {
                    // 0x405acd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40576a;
                }
            } else {
                goto lab_0x40576a;
            }
        }
    }
  lab_0x405848:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40584f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4057b8;
    } else {
        goto lab_0x40585c;
    }
  lab_0x40576a:
    // 0x40576a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40583d;
  lab_0x40583d:
    // 0x40583d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405848;
  lab_0x4057b8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4057b8
    int64_t v31 = v30; // 0x4057b8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4057ba
    if ((int64_t)*v32 > v31) {
        // 0x4057bf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4057c2
    if (*v33 > v30) {
        // 0x4057c7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4057ca
    int64_t v35 = v31; // 0x4057ce
    int64_t v36 = v15; // 0x4057ce
    int64_t v37; // 0x4056f0
    int64_t v38; // 0x4056f0
    int64_t v39; // 0x4056f0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405938
        int64_t v41 = v40; // 0x405938
        v2 = v41;
        int64_t v42; // 0x4056f0
        if (*v33 == v40) {
            // 0x405b20
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405b28
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405944
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405948
                function_404ff0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405958
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405961
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40596a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405981
            int64_t v47 = v45 & 0xffffffff; // 0x405985
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40598e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405994
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405996;
                }
            }
            int64_t v48 = v47 + 1; // 0x405970
            int64_t v49 = v48 & 0xffffffff; // 0x405970
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405981
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40598e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405994
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405996;
                    }
                }
                // 0x405970
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405b38
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405996;
    } else {
        goto lab_0x4057d4;
    }
  lab_0x40585c:
    // 0x40585c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40585f
    int64_t v51 = v12; // 0x40585f
    int64_t v52 = v14; // 0x40585f
    if (*(char *)v10 == 0) {
        goto lab_0x4057b8;
    } else {
        goto lab_0x405865;
    }
  lab_0x4057d4:;
    int32_t v53 = v35; // 0x4057d4
    int64_t v54; // 0x4056f0
    int64_t v55; // 0x4056f0
    int64_t v56; // 0x4056f0
    int64_t v57; // 0x4056f0
    int64_t v58; // 0x4056f0
    int64_t v59; // 0x4056f0
    char * v60; // 0x4056f0
    int64_t v61; // 0x4056f0
    int64_t v62; // 0x4057e9
    int64_t v63; // 0x4056f0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405923
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405926;
    } else {
        // 0x4057dc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4056f0
        int64_t v66 = v65 ? -1 : 1; // 0x4057f0
        int64_t v67 = (int64_t)"--"; // 0x4056f0
        int64_t v68 = v62; // 0x4056f0
        int64_t v69 = 3; // 0x4057f0
        unsigned char v70 = *(char *)v68; // 0x4057f0
        char v71 = *(char *)v67; // 0x4057f0
        char v72 = v71; // 0x4057f0
        bool v73 = false; // 0x4057f0
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
            // 0x4058e0
            if (*(char *)v62 == 45) {
                // 0x4059a0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4059a0
                if (c == 0) {
                    goto lab_0x4058ea;
                } else {
                    // 0x4059ad
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405a30;
                    } else {
                        if (c == 45) {
                            // 0x405c13
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405a85;
                        } else {
                            // 0x4059be
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405a30;
                            } else {
                                // 0x4059c3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4059e4;
                                } else {
                                    // 0x4059ca
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405a30;
                                    } else {
                                        goto lab_0x4059e4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4058ea;
            }
        } else {
            uint32_t v75 = *v33; // 0x405800
            v2 = v75;
            int32_t v76 = *v32; // 0x405803
            int64_t v77 = v35 + 1; // 0x405806
            int32_t v78 = v77; // 0x405809
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405b70
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405817
                    function_404ff0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405825
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405926;
        }
    }
  lab_0x405865:;
    // 0x405865
    int64_t v79; // bp-104, 0x4056f0
    int64_t v80 = &v79; // 0x4056fa
    int64_t v81 = v50 + 1; // 0x405865
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40586c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405871
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405875
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405879
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405881
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405886
    int32_t c2 = v84; // 0x405886
    char * found_char_pos = strchr(str2, c2); // 0x405886
    int64_t v87 = *v82; // 0x40588b
    v2 = v87;
    int64_t v88 = *v85; // 0x405895
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4058a0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405b90
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405b5d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4058ce
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405886
    char v91 = *(char *)(v90 + 1); // 0x4058bb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405875
        if (v91 != 58) {
            // 0x4058ce
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405ae4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405be8
                *v8 = 0;
            } else {
                // 0x405bcc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405b0e
            *v83 = 0;
            // 0x4058ce
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405aee
        if (v93 != 0) {
            // 0x405b80
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405b0e
            *v83 = 0;
            // 0x4058ce
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405b01
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405b0e
            *v83 = 0;
            // 0x4058ce
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405c4a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405bfa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405c01
        // 0x405b0e
        *v83 = 0;
        // 0x4058ce
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405a59
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405a5b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405c80
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405c31
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405c38
            // 0x4058ce
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405a66
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405a6a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405a85;
  lab_0x405996:
    // 0x405996
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4057d4;
  lab_0x405a85:;
    int64_t v99 = function_4050d0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405aa3
    // 0x4058ce
    return v99 & 0xffffffff;
  lab_0x405926:;
    int32_t v100 = v55; // 0x405926
    if (v100 != (int32_t)v59) {
        // 0x40592a
        *(int32_t *)a7 = v100;
    }
    // 0x4058ce
    return 0xffffffff;
  lab_0x4058ea:
    // 0x4058ea
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4058f1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4058ce
    return v99 & 0xffffffff;
  lab_0x405a30:
    // 0x405a30
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405865;
  lab_0x4059e4:
    // 0x4059e4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4050d0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x405a0a
    if ((int32_t)v101 != -1) {
        // 0x4058ce
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405a1f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405a30;
}
// Address range: 0x405cc0 - 0x405d16
int64_t function_405cc0(int64_t a1) {
    // 0x405cc0
    *(int32_t *)&g52 = g26;
    *(int32_t *)&g53 = g25;
    int64_t v1; // 0x405cc0
    int64_t result = function_4056f0(v1, v1, v1, v1, v1, v1, &g52, a1 & 0xffffffff); // 0x405ce6
    g26 = *(int32_t *)&g52;
    g58 = g55;
    *(int32_t *)&g24 = g54;
    return result;
}
// Address range: 0x405d20 - 0x405d38
int64_t function_405d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405d20
    return function_405cc0(1);
}
// Address range: 0x405d40 - 0x405d53
int64_t function_405d40(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x405d40
    return function_405cc0(0);
}
// Address range: 0x405d60 - 0x405d75
int64_t function_405d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405d60
    return function_4056f0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405d80 - 0x405d96
int64_t function_405d80(void) {
    // 0x405d80
    return function_405cc0(0);
}
// Address range: 0x405da0 - 0x405db8
int64_t function_405da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405da0
    return function_4056f0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405dc0 - 0x405e3a
int64_t function_405dc0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405dcb
    int64_t v2 = (int64_t)&g9; // 0x405dcb
    int32_t * pwc; // 0x405dc0
    int64_t v3; // 0x405dc0
    int64_t n; // 0x405dc0
    if (a2 == 0) {
        goto lab_0x405e12;
    } else {
        // 0x405dcd
        if (a3 == 0) {
            // 0x405df8
            return -2;
        }
        // 0x405dd9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405e12;
        } else {
            goto lab_0x405de4;
        }
    }
  lab_0x405e12:
    // 0x405e12
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405dc0
    pwc = (int32_t *)&v4;
    goto lab_0x405de4;
  lab_0x405de4:;
    char * wstr = (char *)v3; // 0x405dea
    int64_t ps; // 0x405dc0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405dea
    int64_t result = v5; // 0x405dea
    if (v5 < 0xfffffffe) {
        // 0x405df8
        return result;
    }
    int64_t result2 = result; // 0x405e29
    if ((char)function_405ea0(0, v3) == 0) {
        // 0x405e2b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405df8
    return result2;
}
// Address range: 0x405e40 - 0x405e9d
int64_t function_405e40(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405e47
    int64_t v2; // 0x405e40
    int64_t result = function_404ed0(a1, v2); // 0x405e58
    if ((v2 & 32) != 0) {
        // 0x405e80
        if ((int32_t)result == 0) {
            // 0x405e84
            *__errno_location() = 0;
        }
        // 0x405e7a
        return 0xffffffff;
    }
    // 0x405e61
    if ((int32_t)result == 0) {
        // 0x405e7a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405e68
    if (v1 == 0) {
        // 0x405e6a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405e7a
    return result2;
}
// Address range: 0x405ea0 - 0x405efe
int64_t function_405ea0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405ea6
    if (locale == NULL) {
        // 0x405ed3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405ea6
    bool v2; // 0x405ea0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x405ea0
    int64_t v5 = v1; // 0x405ea0
    int64_t v6 = 2; // 0x405ec5
    unsigned char v7 = *(char *)v5; // 0x405ec5
    char v8 = *(char *)v4; // 0x405ec5
    char v9 = v8; // 0x405ec5
    bool v10 = false; // 0x405ec5
    while (v7 == v8) {
        // 0x405eb8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405ed1
    int64_t v13 = v1; // 0x405ed1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405ed3
        return 0;
    }
    int64_t v14 = 6; // 0x405ed1
    unsigned char v15 = *(char *)v13; // 0x405eed
    char v16 = *(char *)v12; // 0x405eed
    char v17 = v16; // 0x405eed
    bool v18 = false; // 0x405eed
    while (v15 == v16) {
        // 0x405ee0
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
// Address range: 0x405f00 - 0x406462
int64_t function_405f00(void) {
    char * v1 = nl_langinfo(14); // 0x405f16
    char * v2 = g56; // 0x405f1b
    char * v3; // 0x405f00
    int64_t v4; // 0x405f00
    int64_t v5; // 0x405f00
    int64_t v6; // 0x405f00
    int64_t v7; // 0x405f00
    int32_t size; // 0x405f00
    int32_t size2; // 0x405f00
    int32_t len; // 0x405fd2
    int64_t v8; // 0x405fd2
    char * env_val; // 0x405fbd
    if (v2 == NULL) {
        // 0x405fb8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406025;
        } else {
            // 0x405fca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406025;
            } else {
                // 0x405fcf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405fbd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406455
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406025;
                    } else {
                        // 0x4063c9
                        size2 = len + 14;
                        goto lab_0x405feb;
                    }
                } else {
                    goto lab_0x405feb;
                }
            }
        }
    } else {
        // 0x405f00
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405f3a;
    }
  lab_0x40626c:;
    // 0x40626c
    struct _IO_FILE * stream; // 0x4060ab
    int32_t v10 = __uflow(stream); // 0x40626f
    int64_t v11; // 0x405f00
    int64_t v12 = v11; // 0x406279
    int64_t v13; // 0x405f00
    int64_t v14 = v13; // 0x406279
    int32_t v15 = v10; // 0x406279
    int64_t v16; // 0x405f00
    int64_t v17 = v16; // 0x406279
    int64_t v18 = v11; // 0x406279
    int64_t v19 = v13; // 0x406279
    int64_t v20 = v16; // 0x406279
    if (v10 == -1) {
        // break -> 0x40627f
        goto lab_0x40627f;
    }
    goto lab_0x4060f9;
  lab_0x4060ee:;
    // 0x4060ee
    int64_t v90; // 0x405f00
    int64_t * v32; // 0x4060e0
    *v32 = v90 + 1;
    int64_t v89; // 0x405f00
    v12 = v89;
    int64_t v91; // 0x405f00
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405f00
    v17 = v92;
    goto lab_0x4060f9;
  lab_0x4060f9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405f00
    int32_t v25; // bp-120, 0x405f00
    int32_t v26; // bp-184, 0x405f00
    int64_t v27; // 0x4060ab
    int64_t v28; // 0x4060c8
    int64_t v29; // 0x4060cd
    int64_t * v30; // 0x4060e4
    switch (c) {
        case 32: {
            goto lab_0x4060e0;
        }
        case 10: {
            goto lab_0x4060e0;
        }
        case 9: {
            goto lab_0x4060e0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4062d1
            int32_t v33; // 0x405f00
            char v34; // 0x405f00
            int32_t v35; // 0x4062de
            if (v31 < *v30) {
                // 0x4062b0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4062db
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4062d1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4062b0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4062db
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4062c0
                v36 = v33;
            }
            // 0x4063af
            if (v36 == -1) {
                // break -> 0x40627f
                break;
            }
            goto lab_0x4060e0;
        }
        default: {
            // 0x40610f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40627f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406138
            int64_t v39 = v37 + 4; // 0x40613a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406146
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406148
            while (v41 == 0) {
                // 0x406138
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406166
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406172
            int64_t v45 = v43 + 4; // 0x406174
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406180
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406182
            while (v47 == 0) {
                // 0x406172
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40616f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406198
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4061a8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4061ac
            int64_t v52 = v51 + v48; // 0x4061b5
            int64_t * mem; // 0x405f00
            int64_t v53; // 0x405f00
            int64_t v54; // 0x405f00
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4062eb
                int64_t v56 = v55 + 3; // 0x4062f7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4061d1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4061e0
            if (mem == NULL) {
                // 0x40640c
                free((int64_t *)v21);
                function_404ed0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x406084;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4061f8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406202
            uint32_t v62 = (int32_t)v59; // 0x406205
            int64_t v63; // 0x405f00
            if (v62 >= 8) {
                // 0x406314
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40632e
                int64_t v66 = v61 - v65; // 0x406332
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40633d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40634e
                    int64_t v70 = v69 & 0xffffffff; // 0x40634e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40634b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4063df
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406217
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40621b
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
            int64_t v73 = v51 + 1; // 0x40622b
            int64_t v74 = v60 - 1; // 0x40622f
            uint32_t v75 = (int32_t)v73; // 0x406234
            int64_t v76; // 0x405f00
            if (v75 >= 8) {
                // 0x406362
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40636c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40637c
                int64_t v80 = v74 - v79; // 0x406380
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40638b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40639b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406399
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4063f6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4063fe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406246
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40624a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406443
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40625e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4060ee;
            } else {
                goto lab_0x40626c;
            }
        }
    }
  lab_0x4060e0:;
    int64_t v93 = v23; // 0x405f00
    int64_t v94 = v22; // 0x405f00
    int64_t v95 = v21; // 0x405f00
    goto lab_0x4060e0_2;
  lab_0x406025:;
    int64_t * mem3 = malloc(size); // 0x406025
    int64_t v97 = (int64_t)&g9; // 0x406030
    int64_t v98; // 0x405f00
    int64_t path; // 0x405f00
    if (mem3 == NULL) {
        goto lab_0x406002;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406025
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406046;
    }
  lab_0x405f3a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x405f2d
    char v100 = *v3; // 0x405f3a
    int64_t v101; // 0x405f00
    if (v100 == 0) {
        // 0x405f94
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405f00
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405f00
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405f80
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405f87;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405f50
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405f5d
        char v107 = *(char *)v106; // 0x405f62
        v102 = v107;
        if (v107 == 0) {
            // 0x405f94
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405f6b
    v104 = v103 + 1;
  lab_0x405f87:
    // 0x405f94
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406002:;
    char * v108 = (char *)v97;
    g56 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405f3a;
  lab_0x406046:;
    int64_t v109 = v98 + path; // 0x406046
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406072
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x4060a1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4063d2
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x4060c5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4060e0_2:;
                uint64_t v96 = *v32; // 0x4060e0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40626c;
                } else {
                    goto lab_0x4060ee;
                }
            }
          lab_0x40627f:
            // 0x40627f
            function_404ed0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x40629e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406084;
  lab_0x405feb:;
    int64_t * mem4 = malloc(size2); // 0x405feb
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x406091
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406046;
    } else {
        goto lab_0x406002;
    }
  lab_0x406084:
    // 0x406084
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406002;
}
// Address range: 0x406470 - 0x4064cd
int64_t function_406470(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406470
    return function_4013f8();
}
// Address range: 0x4064d0 - 0x4064d1
int64_t function_4064d0(void) {
    // 0x4064d0
    int64_t result; // 0x4064d0
    return result;
}
// Address range: 0x4064e0 - 0x4064f8
int64_t function_4064e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4064e0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x4064f8 - 0x406518
int64_t function_4064f8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x406502
    while (*(int64_t *)v1 != -1) {
        // 0x406503
        v1 -= 8;
    }
    // 0x406514
    return result;
}
