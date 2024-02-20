// Address range: 0x401800 - 0x401805
int64_t function_401800(void) {
    // 0x401800
    abort();
    // UNREACHABLE
}
// Address range: 0x401805 - 0x40180a
int64_t function_401805(void) {
    // 0x401805
    abort();
    // UNREACHABLE
}
// Address range: 0x40180a - 0x40180f
int64_t function_40180a(void) {
    // 0x40180a
    abort();
    // UNREACHABLE
}
// Address range: 0x40180f - 0x401814
int64_t function_40180f(void) {
    // 0x40180f
    abort();
    // UNREACHABLE
}
// Address range: 0x401814 - 0x401819
int64_t function_401814(void) {
    // 0x401814
    abort();
    // UNREACHABLE
}
// Address range: 0x401819 - 0x40181e
int64_t function_401819(void) {
    // 0x401819
    abort();
    // UNREACHABLE
}
// Address range: 0x401820 - 0x401d60
int64_t function_401820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x401835
    function_402c50(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_4066f0(0x402b70, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2 = 0; // 0x401879
    int64_t v3 = 0; // 0x401879
    int64_t v4; // 0x401820
    int64_t v5; // 0x401820
    int64_t v6; // 0x401820
    int64_t v7; // 0x401820
    while (true) {
      lab_0x401880_6:
        // 0x401880
        v4 = v2;
        int64_t v8 = v3; // 0x401820
        int64_t v9 = v7; // 0x401820
        while (true) {
          lab_0x401880:
            // 0x401880
            v3 = v8;
            int64_t v10 = v9; // 0x401820
            while (true) {
              lab_0x401880_4:
                // 0x401880
                v5 = v10;
                int64_t v11; // 0x401892
                uint32_t v12; // 0x401820
                while (true) {
                  lab_0x401880_3:
                    // 0x401880
                    v11 = function_405f50(v1, a2, ",0123456789at:", &g2, 0, a6);
                    v12 = (int32_t)v11;
                    switch (v12) {
                        case -1: {
                            goto lab_0x4019ba;
                        }
                        case 63: {
                            // 0x401cc5
                            function_401e40(1);
                            // UNREACHABLE
                        }
                        default: {
                            if (v12 <= 63) {
                                // break -> 0x401900
                                break;
                            }
                            // 0x4018ab
                            v8 = 1;
                            v9 = v5;
                            switch (v12) {
                                case 116: {
                                    // 0x401970
                                    *(char *)&g35 = 1;
                                    function_402360(g58);
                                    goto lab_0x401880_3;
                                }
                                case 128: {
                                    goto lab_0x401880;
                                }
                                case 97: {
                                    // 0x401960
                                    *(char *)&g35 = 1;
                                    goto lab_0x401880_3;
                                }
                                default: {
                                    goto lab_0x4018c8;
                                }
                            }
                        }
                    }
                }
                switch (v12) {
                    case -130: {
                        // 0x401cbe
                        function_401e40(0);
                        // UNREACHABLE
                    }
                    case 44: {
                        goto lab_0x401990;
                    }
                    default: {
                        if (v12 == -131) {
                            struct _IO_FILE * v13 = g28; // 0x40192b
                            char (*v14)[5] = g17; // 0x401932
                            function_404cf0((int64_t)v13, "unexpand", "GNU coreutils", (int64_t)v14, "David MacKenzie", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                      lab_0x4018c8:
                        if (v4 == 0) {
                            // 0x4019a9
                            v2 = 1;
                            v6 = 0x100000000 * v11 - 0x3000000000 >> 32;
                            goto lab_0x401880_5;
                        }
                        char * format; // 0x401cdb
                        if (v5 >= 0x199999999999999a) {
                            // 0x401ccf
                            format = dcgettext(NULL, "tab stop value is too large", 5);
                            error(1, (int32_t)"tab stop value is too large" ^ (int32_t)"tab stop value is too large", format);
                            goto lab_0x401cf1;
                        }
                        int64_t v15 = (0x100000000 * v11 - 0x3000000000 >> 32) + 10 * v5; // 0x4018ed
                        v10 = v15;
                        if (v15 < v5) {
                            // 0x401ccf
                            format = dcgettext(NULL, "tab stop value is too large", 5);
                            error(1, (int32_t)"tab stop value is too large" ^ (int32_t)"tab stop value is too large", format);
                            goto lab_0x401cf1;
                        }
                        goto lab_0x401880_4;
                    }
                }
            }
        }
      lab_0x401990:
        // 0x401990
        v2 = 0;
        v6 = v5;
        if (v4 != 0) {
            // 0x401999
            function_402240(v5);
            v2 = 0;
            v6 = v5;
        }
        goto lab_0x401880_5;
    }
  lab_0x4019ba:
    if (v3 != 0) {
        // 0x4019bf
        *(char *)&g35 = 0;
    }
    if (v4 != 0) {
        // 0x401cb1
        function_402240(v5);
    }
    // 0x4019cf
    function_4026b0();
    int64_t v16 = (int64_t)*(int32_t *)0x60a27c; // 0x4019d4
    function_4028b0(v1 > v16 ? 8 * v16 + a2 : 0);
    int64_t v17 = function_4028d0(0); // 0x4019ec
    if (v17 == 0) {
        // 0x401c5c
        function_402ab0();
        return g34;
    }
    int64_t v18 = function_404e30(g57); // 0x401a04
    char * v19 = (char *)v18;
    int64_t * data = (int64_t *)v18;
    int64_t v20 = 1; // 0x401a09
    int64_t v21 = v17; // 0x401a09
    int64_t v22; // 0x401820
    int64_t v23; // 0x401820
    int64_t v24; // 0x401820
    int64_t v25; // 0x401820
    int64_t v26; // 0x401820
    int64_t v27; // 0x401820
    int64_t v28; // 0x401820
    int64_t v29; // 0x401820
    int64_t v30; // 0x401820
    int64_t v31; // 0x401820
    int64_t v32; // 0x401820
    int64_t v33; // 0x401820
    int64_t v34; // 0x401820
    int64_t v35; // bp-64, 0x401820
    int32_t v36; // 0x401820
    int32_t v37; // 0x401820
    int32_t v38; // 0x401820
    int32_t v39; // 0x401820
    while (true) {
      lab_0x401a0e:
        // 0x401a0e
        v35 = 0;
        v38 = 1;
        v36 = 0;
        v33 = 1;
        v31 = 0;
        v22 = 0;
        v26 = v20;
        v28 = v21;
        while (true) {
          lab_0x401ad2:
            // 0x401ad2
            v27 = v26;
            v23 = v22;
            v32 = v31;
            v34 = v33;
            v37 = v36;
            v39 = v38;
            v29 = v28;
            int64_t * v40 = (int64_t *)(v29 + 8);
            uint64_t v41 = *v40; // 0x401ad2
            while (v41 >= *(int64_t *)(v29 + 16)) {
                uint32_t v42 = __uflow((struct _IO_FILE *)v29); // 0x401b83
                if (v42 >= 0) {
                    // 0x401aec
                    v24 = v42;
                    goto lab_0x401aec_2;
                }
                int64_t v43 = function_4028d0((int32_t)v29); // 0x401b96
                int64_t v44 = v43; // 0x401ba1
                if (v43 == 0) {
                    if ((char)v34 == 0) {
                        goto lab_0x401c52;
                    } else {
                        int64_t v45 = v42; // 0x401b88
                        int16_t * v46 = *__ctype_b_loc(); // 0x401bb7
                        v25 = v45;
                        v30 = v43;
                        if (*(int16_t *)((0x100000000 * v45 >> 31) + (int64_t)v46) % 2 == 0) {
                            goto lab_0x401a3a;
                        } else {
                            goto lab_0x401b0e;
                        }
                    }
                }
                v29 = v44;
                v40 = (int64_t *)(v29 + 8);
                v41 = *v40;
            }
            // 0x401ae0
            *v40 = v41 + 1;
            v24 = (int64_t)*(char *)v41;
            goto lab_0x401aec_2;
        }
    }
  lab_0x401c52:
    // 0x401c52
    free(data);
    // 0x401c5c
    function_402ab0();
    return g34;
  lab_0x401cf1:
    // 0x401cf1
    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
    char * format2 = dcgettext(NULL, "input line is too long", 5); // 0x401d27
    error(1, (int32_t)"input line is too long" ^ (int32_t)"input line is too long", format2);
    goto lab_0x401d3d;
  lab_0x401aec_2:;
    int64_t v47 = v24;
    int32_t v48 = v39; // 0x401aee
    int32_t v49 = v37; // 0x401aee
    int64_t v50 = v34; // 0x401aee
    int64_t v51 = v32; // 0x401aee
    int64_t v52 = v23; // 0x401aee
    int64_t v53 = v47; // 0x401aee
    int64_t v54 = v27; // 0x401aee
    int64_t v55 = v29; // 0x401aee
    int64_t v56; // 0x401820
    int64_t v57; // 0x401820
    int64_t v58; // 0x401820
    int64_t v59; // 0x401820
    int64_t v60; // 0x401820
    int64_t v61; // 0x401820
    int64_t v62; // 0x401820
    int64_t v63; // 0x401820
    int32_t v64; // 0x401820
    int32_t v65; // 0x401820
    if ((char)v34 == 0) {
        goto lab_0x401aa8;
    } else {
        int16_t * v66 = *__ctype_b_loc(); // 0x401af8
        v25 = v47;
        v30 = v29;
        if (*(int16_t *)((0x100000000 * v47 >> 31) + (int64_t)v66) % 2 == 0) {
            // 0x401a30
            v57 = v47;
            v60 = v29;
            if (v47 == 8) {
                int64_t v67 = v23 - (int64_t)(v23 != 0); // 0x401be1
                int64_t v68 = v35; // 0x401be4
                v35 = v68 - (int64_t)(v68 != 0);
                v65 = 0;
                v64 = v37;
                v63 = v34;
                v62 = v32;
                v56 = v67;
                v58 = 8;
                v59 = 0;
                v61 = v29;
                if (v32 != 0) {
                    goto lab_0x401a53;
                } else {
                    // 0x401c00
                    v48 = 0;
                    v49 = v37;
                    v50 = (int64_t)*(char *)&g35;
                    v51 = v32;
                    v52 = v67;
                    v53 = 8;
                    v54 = 0;
                    v55 = v29;
                    goto lab_0x401aa8;
                }
            } else {
                goto lab_0x401a3a;
            }
        } else {
            goto lab_0x401b0e;
        }
    }
  lab_0x401aa8:;
    int64_t v69 = v55;
    int64_t v70 = v54;
    int64_t v71 = v53;
    int64_t v72 = v52;
    int64_t v73 = v51;
    int64_t v74 = v50;
    int32_t v75 = v49;
    int32_t v76 = v48;
    int64_t v77 = (int64_t)g28; // 0x401aa8
    int64_t * v78 = (int64_t *)(v77 + 40); // 0x401aaf
    uint64_t v79 = *v78; // 0x401aaf
    int64_t v80; // 0x401820
    int64_t v81; // 0x401820
    int64_t v82; // 0x401820
    int64_t v83; // 0x401820
    int64_t v84; // 0x401820
    int64_t v85; // 0x401820
    int32_t v86; // 0x401820
    if (v79 >= *(int64_t *)(v77 + 48)) {
        // 0x401c10
        if (__overflow(g28, (int32_t)v71 % 256) >= 0) {
            goto lab_0x401ac8;
        } else {
            // 0x401c21
            error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
            v86 = v75;
            v85 = 0;
            v84 = v73;
            v80 = v72;
            v81 = v71;
            v82 = v70;
            v83 = v69;
            goto lab_0x401a49;
        }
    } else {
        // 0x401abd
        *v78 = v79 + 1;
        *(char *)v79 = (char)v71;
        goto lab_0x401ac8;
    }
  lab_0x401b0e:;
    int64_t v87 = v30;
    int64_t v88 = v25;
    char v89; // bp-65, 0x401820
    int64_t v90 = function_402800(v23, &v35, (int64_t *)&v89); // 0x401b1b
    v86 = v37;
    v85 = 0;
    v84 = v32;
    v80 = v23;
    v81 = v88;
    v82 = 1;
    v83 = v87;
    int64_t v91; // 0x401820
    if (v89 != 0) {
        goto lab_0x401a49;
    } else {
        if (v23 > v90) {
          lab_0x401d3d:
            // 0x401d3d
            error(1, (int32_t)"input line is too long" ^ (int32_t)"input line is too long", dcgettext(NULL, "input line is too long", 5));
            return &g60;
        }
        if ((int32_t)v88 == 9) {
            // 0x401c76
            v91 = v90;
            if (v32 != 0) {
                // 0x401c7f
                *v19 = 9;
                v91 = v90;
            }
            goto lab_0x401b63;
        } else {
            int64_t v92 = v23 + 1; // 0x401b43
            if (((char)v39 ^ 1 | (char)(v90 != v92)) != 0) {
                // 0x401c8c
                *(char *)(v32 + v18) = (char)v88;
                goto lab_0x401ac8;
            } else {
                // 0x401b58
                *v19 = 9;
                v91 = v92;
                goto lab_0x401b63;
            }
        }
    }
  lab_0x401ac8:
    // 0x401ac8
    v20 = v70;
    v21 = v69;
    v38 = v76;
    v36 = v75;
    v33 = v74;
    v31 = v73;
    v22 = v72;
    v26 = v70;
    v28 = v69;
    if ((int32_t)v71 == 10) {
        goto lab_0x401a0e;
    } else {
        goto lab_0x401ad2;
    }
  lab_0x401a3a:;
    int64_t v93 = v23 + 1; // 0x401a3a
    v86 = v37;
    v85 = 1;
    v84 = v32;
    v80 = v93;
    v81 = v57;
    v82 = 0;
    v83 = v60;
    if (v93 == 0) {
        // 0x401d1b
        format2 = dcgettext(NULL, "input line is too long", 5);
        error(1, (int32_t)"input line is too long" ^ (int32_t)"input line is too long", format2);
        goto lab_0x401d3d;
    }
    goto lab_0x401a49;
  lab_0x401a49:;
    int32_t v94 = 0x1000000 * (int32_t)v82 >> 24; // 0x401a49
    v65 = v94;
    v64 = v86;
    v63 = v85;
    v62 = v84;
    v56 = v80;
    v58 = v81;
    v59 = v82;
    v61 = v83;
    int32_t v95 = v94; // 0x401a51
    int32_t v96 = v86; // 0x401a51
    int64_t v97 = v85; // 0x401a51
    int64_t v98 = v80; // 0x401a51
    int64_t v99 = v81; // 0x401a51
    int64_t v100 = v82; // 0x401a51
    int64_t v101 = v83; // 0x401a51
    if (v84 == 0) {
        goto lab_0x401a8f;
    } else {
        goto lab_0x401a53;
    }
  lab_0x401a53:;
    uint64_t n = v62;
    if ((char)v64 != 0 && n >= 2) {
        // 0x401a60
        *v19 = 9;
    }
    // 0x401a68
    v95 = v65;
    v96 = 0;
    v97 = v63;
    v98 = v56;
    v99 = v58;
    v100 = v59;
    v101 = v61;
    if (n != (int64_t)fwrite_unlocked(data, 1, (int32_t)n, g28)) {
        goto lab_0x401cf1;
    }
    goto lab_0x401a8f;
  lab_0x401a8f:
    // 0x401a8f
    if ((int32_t)v99 < 0) {
        // break (via goto) -> 0x401c52
        goto lab_0x401c52;
    }
    unsigned char v102 = *(char *)&g35; // 0x401a8f
    v48 = v95;
    v49 = v96;
    v50 = v97 & 0xffffffff & (v100 | (int64_t)v102);
    v51 = 0;
    v52 = v98;
    v53 = v99;
    v54 = v100;
    v55 = v101;
    goto lab_0x401aa8;
  lab_0x401b63:
    // 0x401b63
    v86 = v37;
    v85 = 1;
    v84 = v37 % 256;
    v80 = v91;
    v81 = 9;
    v82 = 1;
    v83 = v87;
    goto lab_0x401a49;
  lab_0x401880_5:
    // 0x401880
    v7 = v6;
    goto lab_0x401880_6;
}
// Address range: 0x401d60 - 0x401d8b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401d60
    int64_t v1; // 0x401d60
    __libc_start_main(0x401820, (int32_t)a4, (char **)&v1, (void (*)())0x406680, (void (*)())0x4066e0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401d8b - 0x401daa
int64_t function_401d8b(void) {
    // 0x401d8b
    return &g27;
}
// Address range: 0x401daa - 0x401de1
int64_t function_401daa(void) {
    // 0x401daa
    return 0;
}
// Address range: 0x401de1 - 0x401e38
int64_t function_401de1(void) {
    // 0x401de1
    if (g32 != 0) {
        // 0x401e37
        int64_t result; // 0x401de1
        return result;
    }
    int64_t v1 = g33; // 0x401e14
    int64_t result2; // 0x401e26
    if (g33 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401e26
        result2 = function_401d8b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401e16
        v1++;
    }
    // 0x401e0a
    g33 = v1;
    // 0x401e26
    result2 = function_401d8b();
    g32 = 1;
    return result2;
}
// Address range: 0x401e38 - 0x401e3d
int64_t function_401e38(void) {
    // 0x401e38
    return function_401daa();
}
// Address range: 0x401e40 - 0x40219d
int64_t function_401e40(int32_t status) {
    // 0x401e40
    if (status != 0) {
        // 0x401e5a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401e7f
        exit(status);
        // UNREACHABLE
    }
    // 0x401e86
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Convert blanks in each FILE to tabs, writing to standard output.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g28);
    char * v1 = dcgettext(NULL, "  -a, --all        convert all blanks, instead of just initial blanks\n      --first-only  convert only leading sequences of blanks (overrides -a)\n  -t, --tabs=N     have tabs N characters apart instead of 8 (enables -a)\n", 5); // 0x401f20
    fputs_unlocked(v1, g28);
    function_402b00((int64_t)v1);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    int64_t v2 = &g1; // bp-136, 0x401f7b
    bool v3; // 0x401e40
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = &v2;
    int64_t v6 = v5 + 16; // 0x402000
    int64_t v7 = *(int64_t *)v6; // 0x402004
    int64_t v8 = 9; // 0x40200a
    while (v7 != 0) {
        int64_t v9 = (int64_t)"unexpand";
        int64_t v10 = v7;
        unsigned char v11 = *(char *)v9; // 0x402016
        char v12 = *(char *)v10; // 0x402016
        char v13 = v12; // 0x402016
        bool v14 = false; // 0x402016
        while (v11 == v12) {
            // 0x40200c
            v8--;
            int64_t v15 = v10 + v4; // 0x402016
            int64_t v16 = v9 + v4; // 0x402016
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
            // break -> 0x402022
            break;
        }
        v5 = v6;
        v6 = v5 + 16;
        v7 = *(int64_t *)v6;
        v8 = 9;
    }
    // 0x402022
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v5 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402134;
        } else {
            // 0x40211e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402173
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402084;
            } else {
                goto lab_0x402134;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402084;
        } else {
            // 0x40206a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402173
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402084;
            } else {
                goto lab_0x402084;
            }
        }
    }
  lab_0x402134:
    // 0x402134
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4020c4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401e7f
    exit(status);
    // UNREACHABLE
  lab_0x402084:
    // 0x402084
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4020c4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401e7f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4021a0 - 0x4021ea
int64_t function_4021a0(int64_t a1) {
    // 0x4021a0
    if ((int64_t)g43 == 0) {
        // 0x4021b3
        g43 = a1;
        return 1;
    }
    // 0x4021c0
    error(0, (int32_t)"'/' specifier only allowed with the last value" ^ (int32_t)"'/' specifier only allowed with the last value", dcgettext(NULL, "'/' specifier only allowed with the last value", 5));
    g43 = a1;
    return (int32_t)&g60 ^ (int32_t)&g60;
}
// Address range: 0x4021f0 - 0x40223a
int64_t function_4021f0(int64_t a1) {
    // 0x4021f0
    if ((int64_t)g42 == 0) {
        // 0x402203
        g42 = a1;
        return 1;
    }
    // 0x402210
    error(0, (int32_t)"'+' specifier only allowed with the last value" ^ (int32_t)"'+' specifier only allowed with the last value", dcgettext(NULL, "'+' specifier only allowed with the last value", 5));
    g42 = a1;
    return (int32_t)&g60 ^ (int32_t)&g60;
}
// Address range: 0x402240 - 0x40235f
int64_t function_402240(int64_t a1) {
    int32_t v1 = g39; // 0x402249
    int64_t v2 = v1; // 0x402249
    int64_t result = g41; // 0x402250
    uint64_t v3 = g40; // 0x402257
    int64_t v4 = a1; // 0x402261
    int64_t v5 = a1; // 0x402261
    int64_t v6; // 0x402240
    int64_t v7; // 0x402240
    if (v1 == 0) {
        goto lab_0x40229b;
    } else {
        int64_t v8 = 8 * v2 + result;
        v4 = *(int64_t *)(v8 - 8);
        if (v4 > a1) {
            // 0x402279
            v6 = 0;
            v7 = v4;
            if (v3 != v2) {
                // 0x40227e
                *(int64_t *)v8 = a1;
                g39 = v1 + 1;
                // 0x40228d
                return result;
            }
            goto lab_0x4022d2;
        } else {
            // 0x402354
            v5 = a1 - v4;
            goto lab_0x40229b;
        }
    }
  lab_0x40229b:;
    int64_t result2 = result; // 0x40229e
    int64_t v9 = v2; // 0x40229e
    int64_t v10 = v5; // 0x40229e
    v6 = v5;
    v7 = v4;
    if (v3 == v2) {
        goto lab_0x4022d2;
    } else {
        goto lab_0x4022a0;
    }
  lab_0x4022d2:;
    // 0x4022d2
    int64_t v11; // 0x402240
    int64_t v12; // 0x402240
    if (result == 0) {
        // 0x402320
        v11 = 16;
        v12 = 128;
        if (v3 != 0) {
            int64_t v13 = 8 * v3; // 0x402334
            v11 = v3;
            v12 = v13;
            if (v13 > -1 != v3 < 0x2000000000000000) {
                // 0x40233f
                function_405080(v7);
                // UNREACHABLE
            }
        }
    } else {
        if (v3 >= 0xaaaaaaaaaaaaaaa) {
            // 0x40233f
            function_405080(v7);
            // UNREACHABLE
        }
        int64_t v14 = v3 + 1 + v3 / 2; // 0x4022ec
        v11 = v14;
        v12 = 8 * v14;
    }
    // 0x4022f9
    g40 = v11;
    int64_t v15 = function_404e90(result, v12); // 0x402303
    g41 = v15;
    result2 = v15;
    v9 = g39;
    v10 = v6;
    goto lab_0x4022a0;
  lab_0x4022a0:
    // 0x4022a0
    *(int64_t *)(8 * v9 + result2) = a1;
    g39 = (int32_t)v9 + 1;
    if (g57 >= v10) {
        // 0x40228d
        return result2;
    }
    // 0x4022b8
    g57 = v10;
    return result2;
}
// Address range: 0x402360 - 0x4026a7
int64_t function_402360(int64_t a1) {
    char v1 = a1;
    int64_t v2 = 0; // 0x402375
    char v3 = 1; // 0x402375
    int64_t v4 = a1; // 0x402375
    int64_t v5 = 0; // 0x402375
    int64_t v6 = 0; // 0x402375
    int64_t v7 = 0; // 0x402375
    int64_t v8 = 0; // 0x402375
    if (v1 == 0) {
        // 0x402481
        int64_t result; // 0x402360
        return result;
    }
    char v9 = v1; // 0x402375
    int64_t v10; // 0x402360
    int64_t v11; // 0x402360
    int64_t v12; // 0x402360
    int64_t v13; // 0x402360
    int64_t v14; // 0x402360
    int64_t v15; // 0x402360
    int64_t v16; // 0x402360
    int64_t result3; // 0x402360
    int64_t v17; // 0x402360
    int64_t v18; // 0x402360
    char v19; // 0x402360
    char v20; // 0x402360
    int64_t str; // 0x402360
    while (true) {
      lab_0x4023fe:
        // 0x4023fe
        v15 = v8;
        v11 = v6;
        char v21 = v3;
        str = v2;
        int64_t v22 = v4; // 0x402437
        int64_t v23 = v5; // 0x402360
        int64_t v24 = v7; // 0x402360
        char v25 = v9; // 0x402437
        char v26; // 0x402360
        int64_t v27; // 0x402360
        while (true) {
            // 0x4023fe
            v26 = v25;
            v13 = v24;
            v18 = v23;
            v27 = v22;
            if (v26 != 44) {
                int16_t * v28 = *__ctype_b_loc(); // 0x4023a9
                if (*(char *)(2 * (int64_t)v26 + (int64_t)v28) % 2 == 0) {
                    // break -> 0x4023b2
                    break;
                }
            }
            // 0x402404
            v2 = str;
            v19 = v21;
            v16 = v27;
            v17 = v18;
            v10 = v11;
            v12 = v13;
            v14 = v15;
            if ((char)v18 == 0) {
                goto lab_0x4023f0;
            }
            if ((char)v11 != 0) {
                int64_t v29 = function_4021a0(v15); // 0x4024f8
                if ((char)v29 == 0) {
                    goto lab_0x40269d;
                } else {
                    // 0x402508
                    v2 = str;
                    v19 = v21;
                    v16 = v27;
                    v17 = 0;
                    v10 = v29 & 0xffffffff;
                    v12 = v13;
                    v14 = v15;
                    goto lab_0x4023f0;
                }
            }
            if ((char)v13 == 0) {
                // 0x4024c0
                function_402240(v15);
                v2 = str;
                v19 = v21;
                v16 = v27;
                v17 = 0;
                v10 = v13 & 0xffffffff;
                v12 = v13;
                v14 = v15;
                goto lab_0x4023f0;
            }
            int64_t v30 = function_4021f0(v15); // 0x402422
            if ((char)v30 == 0) {
                // 0x40269d
                exit(1);
                // UNREACHABLE
            }
            // 0x402432
            v22 = v27 + 1;
            v25 = *(char *)v22;
            v23 = 0;
            v24 = v30 & 0xffffffff;
            v20 = v21;
            result3 = v27;
            if (v25 == 0) {
                goto lab_0x402476;
            }
        }
        switch (v26) {
            case 47: {
                // 0x4024d8
                v2 = str;
                v19 = v21;
                v16 = v27;
                v17 = v18;
                v10 = 1;
                v12 = 0;
                v14 = v15;
                if ((char)v18 != 0) {
                    // 0x4025c0
                    function_404870(v27);
                    error(0, (int32_t)"'/' specifier not at start of number: %s" ^ (int32_t)"'/' specifier not at start of number: %s", dcgettext(NULL, "'/' specifier not at start of number: %s", 5));
                    v2 = str;
                    v19 = 0;
                    v16 = v27;
                    v17 = v18;
                    v10 = v18 & 0xffffffff;
                    v12 = 0;
                    v14 = v15;
                }
                goto lab_0x4023f0;
            }
            case 43: {
                // 0x402518
                v2 = str;
                v19 = v21;
                v16 = v27;
                v17 = v18;
                v10 = 0;
                v12 = 1;
                v14 = v15;
                if ((char)v18 != 0) {
                    // 0x402600
                    function_404870(v27);
                    error(0, (int32_t)"'+' specifier not at start of number: %s" ^ (int32_t)"'+' specifier not at start of number: %s", dcgettext(NULL, "'+' specifier not at start of number: %s", 5));
                    v2 = str;
                    v19 = 0;
                    v16 = v27;
                    v17 = v18;
                    v10 = 0;
                    v12 = v18 & 0xffffffff;
                    v14 = v15;
                }
                goto lab_0x4023f0;
            }
            default: {
                int32_t v31 = (int32_t)v26 - 48; // 0x4023ca
                if (v26 != 57 && v31 >= 9) {
                    // 0x402670
                    function_404870(v27);
                    error(0, (int32_t)"tab size contains invalid character(s): %s" ^ (int32_t)"tab size contains invalid character(s): %s", dcgettext(NULL, "tab size contains invalid character(s): %s", 5));
                    goto lab_0x40269d;
                }
                if ((char)v18 != 0) {
                    if (v15 < 0x199999999999999a) {
                        int64_t v32 = 10 * v15 + (int64_t)v31; // 0x402497
                        v2 = str;
                        v19 = v21;
                        v16 = v27;
                        v17 = v18;
                        v10 = v11;
                        v12 = v13;
                        v14 = v32;
                        if (v32 < v15) {
                            goto lab_0x40254b;
                        } else {
                            goto lab_0x4023f0;
                        }
                    } else {
                        goto lab_0x40254b;
                    }
                } else {
                    // 0x4023df
                    v2 = v27;
                    v19 = v21;
                    v16 = v27;
                    v17 = 1;
                    v10 = v11;
                    v12 = v13;
                    v14 = v31;
                    goto lab_0x4023f0;
                }
            }
        }
    }
  lab_0x402448:
    // 0x402448
    v20 = v3;
    int64_t v33; // 0x402360
    result3 = v33;
    if ((char)v5 != 0) {
        if (v3 == 0) {
            // 0x40269d
            exit(1);
            // UNREACHABLE
        }
        if ((char)v6 != 0) {
            int64_t result2 = function_4021a0(v8); // 0x402653
            if ((char)result2 != 0) {
                // 0x402481
                return result2;
            }
          lab_0x40269d:
            // 0x40269d
            exit(1);
            // UNREACHABLE
        }
        if ((char)v7 == 0) {
            // 0x402640
            return function_402240(v8);
        }
        int64_t v34 = function_4021f0(v8); // 0x40246d
        v20 = v34;
        result3 = v34;
    }
  lab_0x402476:
    // 0x402476
    if (v20 == 0) {
        // 0x40269d
        exit(1);
        // UNREACHABLE
    }
    // 0x402481
    return result3;
  lab_0x4023f0:
    // 0x4023f0
    v8 = v14;
    v7 = v12;
    v6 = v10;
    v5 = v17;
    v33 = v16;
    v3 = v19;
    v4 = v33 + 1;
    v9 = *(char *)v4;
    if (v9 == 0) {
        // break -> 0x402448
        goto lab_0x402448;
    }
    goto lab_0x4023fe;
  lab_0x40254b:;
    int32_t ini_seg_bytes = strspn((char *)str, "0123456789"); // 0x402557
    int64_t v35 = function_4050c0(); // 0x402569
    function_404870(v35);
    error(0, (int32_t)"tab stop is too large %s" ^ (int32_t)"tab stop is too large %s", dcgettext(NULL, "tab stop is too large %s", 5));
    free((int64_t *)v35);
    v2 = str;
    v19 = 0;
    v16 = str - 1 + (int64_t)ini_seg_bytes;
    v17 = v18;
    v10 = v11;
    v12 = v13;
    v14 = v15;
    goto lab_0x4023f0;
}
// Address range: 0x4026b0 - 0x4027f5
int64_t function_4026b0(void) {
    // 0x4026b0
    char * format; // 0x40274e
    int64_t v1; // 0x402702
    int64_t v2; // 0x4026cb
    if (g39 == 0) {
        goto lab_0x402768;
    } else {
        // 0x4026cb
        v2 = *(int64_t *)g41;
        int64_t v3 = v2; // 0x4026d4
        if (v2 == 0) {
            goto lab_0x4027c0;
        } else {
            int64_t v4 = 1; // 0x4026f9
            while (v4 != (int64_t)g39) {
                uint64_t v5 = *(int64_t *)(8 * v4 + g41); // 0x4026e0
                if (v5 == 0) {
                    goto lab_0x4027c0;
                }
                uint64_t v6 = v3;
                v3 = v5;
                if (v6 >= v5) {
                    // 0x40279a
                    error(1, (int32_t)"tab sizes must be ascending" ^ (int32_t)"tab sizes must be ascending", dcgettext(NULL, "tab sizes must be ascending", 5));
                    goto lab_0x4027c0;
                }
                v4++;
            }
            // 0x402702
            v1 = g42;
            if (v1 == 0) {
                goto lab_0x402718;
            } else {
                // 0x40270e
                if ((int64_t)g43 != 0) {
                    // 0x402742
                    format = dcgettext(NULL, "'/' specifier is mutually exclusive with '+'", 5);
                    error(1, (int32_t)"'/' specifier is mutually exclusive with '+'" ^ (int32_t)"'/' specifier is mutually exclusive with '+'", format);
                    goto lab_0x402768;
                } else {
                    goto lab_0x402718;
                }
            }
        }
    }
  lab_0x4027c0:;
    char * format2 = dcgettext(NULL, "tab size cannot be 0", 5); // 0x4027cc
    error(1, (int32_t)"tab size cannot be 0" ^ (int32_t)"tab size cannot be 0", format2);
    int64_t v7 = g43; // 0x4027dd
    int64_t v8 = (int64_t)format2; // 0x4027dd
    goto lab_0x4027e2;
  lab_0x402768:;
    int64_t v9 = g42; // 0x402768
    int64_t v10 = g43;
    v7 = v10;
    v8 = v9;
    if (v9 == 0) {
        int64_t result2 = v10 == 0 ? 8 : v10;
        g57 = result2;
        g44 = result2;
        return result2;
    }
    goto lab_0x4027e2;
  lab_0x4027e2:;
    int64_t result = v8; // 0x4027ea
    if (v7 == 0) {
        // 0x402787
        g57 = result;
        g44 = result;
        return result;
    }
    // 0x402742
    format = dcgettext(NULL, "'/' specifier is mutually exclusive with '+'", 5);
    error(1, (int32_t)"'/' specifier is mutually exclusive with '+'" ^ (int32_t)"'/' specifier is mutually exclusive with '+'", format);
    goto lab_0x402768;
  lab_0x402718:;
    int64_t result3 = v1; // 0x40271c
    int128_t v11 = 0; // 0x40271c
    if (g39 == 1) {
        int64_t v12 = g43 | g42; // 0x402730
        result3 = v12;
        v11 = v12 != 0 ? 0 : (int128_t)v2;
    }
    // 0x402729
    g44 = v11;
    return result3;
}
// Address range: 0x402800 - 0x4028a8
int64_t function_402800(uint64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = g44; // 0x402800
    *(char *)a3 = 0;
    uint64_t v2; // 0x402800
    if (v1 != 0) {
        // 0x402870
        v2 = v1;
        return v2 + a1 - a1 % v2;
    }
    uint64_t v3 = (int64_t)a2;
    uint64_t v4 = (int64_t)g39; // 0x402812
    int64_t result2; // 0x402800
    if (v3 < v4) {
        uint64_t result = *(int64_t *)(g41 + 8 * v3); // 0x402825
        if (result > a1) {
            // 0x402869
            return result;
        }
        int64_t v5 = v3 + 1; // 0x402832
        *a2 = v5;
        while (v5 != v4) {
            // 0x402838
            v5++;
            uint64_t v6 = *(int64_t *)(g41 - 8 + 8 * v5); // 0x40283c
            result2 = v6;
            if (v6 > a1) {
                // 0x402869
                return result2;
            }
            *a2 = v5;
        }
    }
    int64_t v7 = g43; // 0x40284e
    if (v7 != 0) {
        // 0x402870
        v2 = v7;
        return v2 + a1 - a1 % v2;
    }
    int64_t v8 = g42; // 0x40285a
    if (v8 != 0) {
        // 0x402888
        result2 = v8 + a1 - (a1 - *(int64_t *)(8 * v4 - 8 + g41)) % v8;
    } else {
        // 0x402866
        *(char *)a3 = 1;
        result2 = v8;
    }
    // 0x402869
    return result2;
}
// Address range: 0x4028b0 - 0x4028cb
int64_t function_4028b0(int64_t a1) {
    // 0x4028b0
    g37 = 0;
    g38 = a1 == 0 ? (int64_t)&g16 : a1;
    return (int64_t)&g16;
}
// Address range: 0x4028d0 - 0x402ab0
int64_t function_4028d0(int32_t a1) {
    // 0x4028d0
    bool v1; // 0x4028d0
    if (a1 != 0) {
        // 0x4028db
        if (g36 == NULL) {
            // 0x402a90
            __assert_fail("prev_file", "src/expand-common.c", 341, "next_file");
            return &g60;
        }
        int64_t v2 = (int64_t)g36; // 0x4028db
        int64_t v3 = v2; // 0x4028f1
        if ((a1 & 32) != 0) {
            // 0x402a50
            error(0, *__errno_location(), "%s", (char *)function_4046f0(0, 3, v2));
            g34 = 1;
            v3 = (int64_t)g36;
        }
        int64_t stream = a1;
        int64_t v4 = v1 ? -1 : 1; // 0x402904
        int64_t v5 = (int64_t)"-"; // 0x4028d0
        int64_t v6 = 2; // 0x402904
        unsigned char v7 = *(char *)v3; // 0x402904
        char v8 = *(char *)v5; // 0x402904
        int64_t v9 = v3 + v4; // 0x402904
        char v10 = v8; // 0x402904
        bool v11 = false; // 0x402904
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
            // 0x402a00
            if ((int32_t)function_4050e0(stream, v9) != 0) {
                int64_t v13 = function_4046f0(0, 3, (int64_t)g36); // 0x402a1b
                error(0, *__errno_location(), "%s", (char *)v13);
                g34 = 1;
            }
        } else {
            // 0x402916
            clearerr_unlocked((struct _IO_FILE *)stream);
        }
    }
    int64_t v14 = *(int64_t *)g38; // 0x402927
    g38 += 8;
    if (v14 == 0) {
        // 0x4029f0
        return 0;
    }
    int64_t v15 = v1 ? -1 : 1; // 0x4029ac
    int64_t v16 = 2; // 0x4029ac
    int64_t v17 = v14;
    int64_t v18 = (int64_t)"-";
    unsigned char v19 = *(char *)v17; // 0x4029ac
    char v20 = *(char *)v18; // 0x4029ac
    char v21 = v20; // 0x4029ac
    bool v22 = false; // 0x4029ac
    int64_t v23; // 0x4028d0
    int64_t v24; // 0x4028d0
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
    char * file_path; // 0x4028d0
    if ((v19 >= v25 && !v22) == v19 < v25) {
        // 0x402940
        g37 = 1;
        if (g29 != 0) {
            // break -> 0x4029c9
            break;
        }
    } else {
        // 0x4029b7
        file_path = (char *)v14;
        if (fopen(file_path, "r") != NULL) {
            // 0x4029c9
            goto lab_0x4029c9_2;
        }
    }
    // 0x402953
    error(0, *__errno_location(), "%s", (char *)function_4046f0(0, 3, v14));
    g34 = 1;
    int64_t v26 = *(int64_t *)g38; // 0x40298e
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
            // 0x402940
            g37 = 1;
            if (g29 != 0) {
                // break -> 0x4029c9
                break;
            }
        } else {
            // 0x4029b7
            file_path = (char *)v27;
            if (fopen(file_path, "r") != NULL) {
                // 0x4029c9
                goto lab_0x4029c9_2;
            }
        }
        // 0x402953
        error(0, *__errno_location(), "%s", (char *)function_4046f0(0, 3, v27));
        g34 = 1;
        v26 = *(int64_t *)g38;
        g38 += 8;
    }
    // 0x4029f0
    return 0;
}
// Address range: 0x402ab0 - 0x402b00
int64_t function_402ab0(void) {
    // 0x402ab0
    if (g37 == 0) {
        // 0x402ab9
        int64_t result; // 0x402ab0
        return result;
    }
    // 0x402ac0
    int64_t v1; // 0x402ab0
    int64_t result2 = function_4050e0(g29, v1); // 0x402acb
    if ((int32_t)result2 == 0) {
        // 0x402ab9
        return result2;
    }
    // 0x402ad9
    error(1, *__errno_location(), "-");
    return &g60;
}
// Address range: 0x402b00 - 0x402b48
int64_t function_402b00(int64_t a1) {
    // 0x402b00
    fputs_unlocked(dcgettext(NULL, "  -t, --tabs=LIST  use comma separated list of tab positions\n", 5), g28);
    char * v1 = dcgettext(NULL, "                     The last specified position can be prefixed with '/'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of '+'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n", 5); // 0x402b37
    return fputs_unlocked(v1, g28);
}
// Address range: 0x402b50 - 0x402b58
int64_t function_402b50(int64_t a1) {
    // 0x402b50
    g46 = a1;
    int64_t result; // 0x402b50
    return result;
}
// Address range: 0x402b60 - 0x402b68
int64_t function_402b60(int64_t a1) {
    // 0x402b60
    g45 = a1;
    int64_t result; // 0x402b60
    return result;
}
// Address range: 0x402b70 - 0x402c0e
int64_t function_402b70(void) {
    // 0x402b70
    int32_t * err_num; // 0x402b86
    if ((int32_t)function_406050((int64_t)g28) == 0) {
        goto lab_0x402b9c;
    } else {
        // 0x402b86
        err_num = __errno_location();
        if (g45 == 0) {
            goto lab_0x402bb3;
        } else {
            // 0x402b97
            if (*err_num != 32) {
                goto lab_0x402bb3;
            } else {
                goto lab_0x402b9c;
            }
        }
    }
  lab_0x402b9c:;
    int64_t result = function_406050((int64_t)g31); // 0x402ba3
    if ((int32_t)result == 0) {
        // 0x402bac
        return result;
    }
    // 0x402bee
    _exit(g18);
    // UNREACHABLE
  lab_0x402bb3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402bbf
    if (g46 == 0) {
        // 0x402bf9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402bd3
        error(0, *err_num, "%s: %s", (char *)function_4046c0((int64_t)g46), v1);
    }
    // 0x402bee
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x402c10 - 0x402c15
int64_t function_402c10(void) {
    // 0x402c10
    int64_t fd; // 0x402c10
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402c20 - 0x402c41
int64_t function_402c20(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402c20
    if (stream == 0) {
        // 0x402c40
        int64_t result; // 0x402c20
        return result;
    }
    // 0x402c25
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402c50 - 0x402ce9
int64_t function_402c50(int64_t str) {
    // 0x402c50
    if (str == 0) {
        // 0x402cc9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402c5e
    int64_t result = (int64_t)found_char_pos; // 0x402c5e
    if (found_char_pos == NULL) {
        // 0x402cb9
        g47 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402c68
    if (v1 - str < 7) {
        // 0x402cb9
        g47 = str;
        g30 = str;
        return result;
    }
    // 0x402c78
    bool v2; // 0x402c50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402c50
    int64_t v5 = result - 6; // 0x402c50
    int64_t v6 = 7; // 0x402c86
    unsigned char v7 = *(char *)v5; // 0x402c86
    char v8 = *(char *)v4; // 0x402c86
    char v9 = v8; // 0x402c86
    bool v10 = false; // 0x402c86
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
    int64_t v12 = (int64_t)"lt-"; // 0x402c90
    int64_t v13 = v1; // 0x402c90
    int64_t v14 = 3; // 0x402c90
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402cb9
        g47 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402ca2
    char v16 = *(char *)v12; // 0x402ca2
    char v17 = v16; // 0x402ca2
    bool v18 = false; // 0x402ca2
    while (v15 == v16) {
        // 0x402c92
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
    int64_t v20 = v1; // 0x402cac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402cae
        v20 = result + 4;
        g27 = v20;
    }
    // 0x402cb9
    g47 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402cf0 - 0x402de2
int64_t function_402cf0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402d04
    int64_t result = (int64_t)v1; // 0x402d04
    if (result != a1) {
        // 0x402d11
        return result;
    }
    int64_t v2 = function_406110(); // 0x402d20
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402dd6
    if (v3 == 85) {
        // 0x402d30
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402dc8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x402d5e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x402d6b
        // 0x402d11
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402dc8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x402dad
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x402dba
    // 0x402d11
    return result4;
}
// Address range: 0x402df0 - 0x402e47
int64_t function_402df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402df0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402e38
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402e47 - 0x404011
int64_t function_402e47(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402e91
    int64_t v3 = 0; // 0x402e91
    int64_t v4; // 0x402e47
    int64_t v5; // 0x402e47
    int64_t v6; // 0x402e47
    int64_t v7; // 0x402e47
    int64_t v8; // 0x402e47
    int64_t v9; // 0x402e47
    int64_t v10; // 0x402e47
    int64_t v11; // 0x402e47
    int64_t v12; // 0x402e47
    int64_t v13; // 0x402e47
    int64_t v14; // 0x402e47
    int64_t v15; // 0x402e47
    int64_t v16; // 0x402e47
    int64_t v17; // 0x402e47
    int64_t v18; // 0x402e47
    int64_t result; // 0x402e47
    int64_t v19; // 0x402e47
    int32_t wc; // bp+132, 0x402e47
    int64_t ps; // bp+136, 0x402e47
    char v20; // 0x403400
    int64_t v21; // 0x403400
    int64_t v22; // 0x4037a8
    int64_t v23; // 0x402e47
    int64_t v24; // 0x4037c7
    int32_t v25; // 0x402e47
    while (true) {
      lab_0x402e98_2:
        // 0x402e98
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402e47
        int64_t v27; // 0x402ecc
        while (true) {
          lab_0x402e98:
            // 0x402e98
            v5 = v26;
            bool v28 = v15 == v5; // 0x402ea3
            if (v15 == -1) {
                // 0x402ea5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402eb3
            if (v28) {
                // break (via goto) -> 0x403618
                goto lab_0x403618;
            }
            // 0x402ebc
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
                    // 0x4034ab
                    if (v25 % 2 == 0) {
                        goto lab_0x402ff1;
                    }
                    // 0x4038cd
                    v26 = v5 + 1;
                    goto lab_0x402e98;
                }
                case 7: {
                    goto lab_0x402ff1;
                }
                case 8: {
                    goto lab_0x402ff1;
                }
                case 9: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402ff1;
                }
                case 12: {
                    goto lab_0x402ff1;
                }
                case 13: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402fbd;
                }
                case 36: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402ff1;
                }
                case 38: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402ff1;
                }
                case 44: {
                    goto lab_0x402ff1;
                }
                case 45: {
                    goto lab_0x402ff1;
                }
                case 46: {
                    goto lab_0x402ff1;
                }
                case 47: {
                    goto lab_0x402ff1;
                }
                case 48: {
                    goto lab_0x402ff1;
                }
                case 49: {
                    goto lab_0x402ff1;
                }
                case 50: {
                    goto lab_0x402ff1;
                }
                case 51: {
                    goto lab_0x402ff1;
                }
                case 52: {
                    goto lab_0x402ff1;
                }
                case 53: {
                    goto lab_0x402ff1;
                }
                case 54: {
                    goto lab_0x402ff1;
                }
                case 55: {
                    goto lab_0x402ff1;
                }
                case 56: {
                    goto lab_0x402ff1;
                }
                case 57: {
                    goto lab_0x402ff1;
                }
                case 58: {
                    goto lab_0x402ff1;
                }
                case 59: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402ff1;
                }
                case 66: {
                    goto lab_0x402ff1;
                }
                case 67: {
                    goto lab_0x402ff1;
                }
                case 68: {
                    goto lab_0x402ff1;
                }
                case 69: {
                    goto lab_0x402ff1;
                }
                case 70: {
                    goto lab_0x402ff1;
                }
                case 71: {
                    goto lab_0x402ff1;
                }
                case 72: {
                    goto lab_0x402ff1;
                }
                case 73: {
                    goto lab_0x402ff1;
                }
                case 74: {
                    goto lab_0x402ff1;
                }
                case 75: {
                    goto lab_0x402ff1;
                }
                case 76: {
                    goto lab_0x402ff1;
                }
                case 77: {
                    goto lab_0x402ff1;
                }
                case 78: {
                    goto lab_0x402ff1;
                }
                case 79: {
                    goto lab_0x402ff1;
                }
                case 80: {
                    goto lab_0x402ff1;
                }
                case 81: {
                    goto lab_0x402ff1;
                }
                case 82: {
                    goto lab_0x402ff1;
                }
                case 83: {
                    goto lab_0x402ff1;
                }
                case 84: {
                    goto lab_0x402ff1;
                }
                case 85: {
                    goto lab_0x402ff1;
                }
                case 86: {
                    goto lab_0x402ff1;
                }
                case 87: {
                    goto lab_0x402ff1;
                }
                case 88: {
                    goto lab_0x402ff1;
                }
                case 89: {
                    goto lab_0x402ff1;
                }
                case 90: {
                    goto lab_0x402ff1;
                }
                case 91: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402ff1;
                }
                case 94: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402ff1;
                }
                case 96: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402ff1;
                }
                case 98: {
                    goto lab_0x402ff1;
                }
                case 99: {
                    goto lab_0x402ff1;
                }
                case 100: {
                    goto lab_0x402ff1;
                }
                case 101: {
                    goto lab_0x402ff1;
                }
                case 102: {
                    goto lab_0x402ff1;
                }
                case 103: {
                    goto lab_0x402ff1;
                }
                case 104: {
                    goto lab_0x402ff1;
                }
                case 105: {
                    goto lab_0x402ff1;
                }
                case 106: {
                    goto lab_0x402ff1;
                }
                case 107: {
                    goto lab_0x402ff1;
                }
                case 108: {
                    goto lab_0x402ff1;
                }
                case 109: {
                    goto lab_0x402ff1;
                }
                case 110: {
                    goto lab_0x402ff1;
                }
                case 111: {
                    goto lab_0x402ff1;
                }
                case 112: {
                    goto lab_0x402ff1;
                }
                case 113: {
                    goto lab_0x402ff1;
                }
                case 114: {
                    goto lab_0x402ff1;
                }
                case 115: {
                    goto lab_0x402ff1;
                }
                case 116: {
                    goto lab_0x402ff1;
                }
                case 117: {
                    goto lab_0x402ff1;
                }
                case 118: {
                    goto lab_0x402ff1;
                }
                case 119: {
                    goto lab_0x402ff1;
                }
                case 120: {
                    goto lab_0x402ff1;
                }
                case 121: {
                    goto lab_0x402ff1;
                }
                case 122: {
                    goto lab_0x402ff1;
                }
                case 123: {
                    goto lab_0x402f95;
                }
                case 124: {
                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402f95;
                }
                case 126: {
                    goto lab_0x402fbd;
                }
                default: {
                    goto lab_0x403395;
                }
            }
        }
      lab_0x403395:
        if (v23 != 1) {
            // 0x403700
            ps = 0;
            int64_t len = v15; // 0x403710
            if (v15 == -1) {
                // 0x403712
                len = strlen((char *)str);
            }
            // 0x40373e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40379f:
                // 0x40379f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4037a4
                int64_t v30 = v29 + str;
                v24 = function_405fd0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403d1a_2;
                    }
                    case -1: {
                        goto lab_0x403d1a_2;
                    }
                    case -2: {
                        // 0x403dfd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403e37
                            v19 = v18;
                            int64_t v31 = v18; // 0x403e3a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403e47
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403e40
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403d1a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403d1a_2;
                    }
                    case 1: {
                        goto lab_0x403770;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40381c
                        char v34 = *(char *)v33; // 0x40382d
                        unsigned char v35; // 0x402e47
                        if (v34 < 125) {
                            // 0x403838
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40384f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403820
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40382d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403838
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40384f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403820
                            v33++;
                        }
                        goto lab_0x403770;
                    }
                }
            }
            goto lab_0x403d1a_2;
        } else {
            // 0x4033e4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402ff1;
        }
    }
  lab_0x403618:
    // 0x403618
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403f1a
        if (v8 > result) {
            // 0x403f23
            *(char *)(v12 + result) = 0;
        }
        // 0x403247
        return result;
    }
    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402ff1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403000
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40320a_2;
        }
    }
    int64_t v39 = result; // 0x403101
    char v40 = v20; // 0x403101
    int64_t v41 = v38; // 0x403101
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403101
    int64_t v43 = v36; // 0x403101
    goto lab_0x40307d;
  lab_0x40320a_2:
    // 0x403247
    return function_402df0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403d1a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402ff1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4038ee
        int64_t v50 = v5 + 1; // 0x4039d1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4039d8
        char v52 = v20; // 0x4039d8
        int64_t v53 = result; // 0x4039d8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4039a1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4039a5
            int64_t v56 = v54 + 1; // 0x4039aa
            int64_t v57 = v51 + 1; // 0x4039d1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40399c
                v54 = v56;
                if (v47 > v54) {
                    // 0x4039a1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4039a5
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
        goto lab_0x40307d;
    }
  lab_0x403770:
    // 0x403770
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40378f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403792
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403d1a
        goto lab_0x403d1a_2;
    }
    goto lab_0x40379f;
  lab_0x402fbd:
    // 0x402fbd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40320a_2;
    }
    goto lab_0x402ff1;
  lab_0x402f95:;
    bool v60 = v15 == 1; // 0x402fa0
    if (v15 == -1) {
        // 0x402fa2
        v60 = *(char *)v1 == 0;
    }
    // 0x402fae
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402ff1;
    } else {
        goto lab_0x402fbd;
    }
  lab_0x40307d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403082
        *(char *)(v44 + v45) = v40;
    }
    // 0x403086
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402e98_2;
}
// Address range: 0x404020 - 0x4041be
int64_t function_404020(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404022
    int32_t * v3 = __errno_location(); // 0x40403c
    int64_t v4 = (int64_t)g20; // 0x404041
    int32_t v5 = *v3; // 0x40404b
    int64_t v6 = v4; // 0x404061
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4041b9
            function_405080(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404070
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404077
        int64_t v9; // 0x404020
        if (g20 == &g21) {
            int64_t v10 = function_404e90(0, v8); // 0x40419a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40419f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404e90(v4, v8); // 0x40408b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40409a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40409a
        int32_t v14 = v7; // 0x4040a1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4040d1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4040db
    int64_t * v17 = (int64_t *)v15; // 0x4040de
    uint64_t v18 = *v17; // 0x4040de
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4040e1
    int64_t result = *v19; // 0x4040e1
    int64_t v20; // 0x404020
    uint64_t v21 = function_402df0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404104
    if (v18 > v21) {
        // 0x40417b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404117
    *v17 = v22;
    if (result != (int64_t)&g48) {
        // 0x404127
        free((int64_t *)result);
    }
    int64_t result2 = function_404e30(v22); // 0x404141
    *v19 = result2;
    int64_t v23; // 0x404020
    function_402df0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40417b
    *v3 = v5;
    return result2;
}
// Address range: 0x4041c0 - 0x4041f4
int64_t function_4041c0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4041c7
    int64_t result = function_405030(a1 == 0 ? (int64_t)&g49 : a1, 56); // 0x4041e6
    return result;
}
// Address range: 0x404200 - 0x40420f
int64_t function_404200(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g49 : a1); // 0x40420c
    return result;
}
// Address range: 0x404210 - 0x40421f
int64_t function_404210(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 : a1; // 0x404218
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g49;
}
// Address range: 0x404220 - 0x404253
int64_t function_404220(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 + 8 : a1 + 8; // 0x404239
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40423e
    uint32_t v3 = *v2; // 0x40423e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404242
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404260 - 0x404273
int64_t function_404260(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g49 + 4 : a1 + 4); // 0x40426c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404280 - 0x4042ab
int64_t function_404280(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 : a1; // 0x404288
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4042a5
        abort();
        // UNREACHABLE
    }
    // 0x40429c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g49;
}
// Address range: 0x4042b0 - 0x404322
int64_t function_4042b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g49 : a5; // 0x4042d2
    int32_t * v2 = __errno_location(); // 0x4042db
    uint32_t v3 = *(int32_t *)v1; // 0x4042fb
    int64_t result = function_402df0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40430a
    return result;
}
// Address range: 0x404330 - 0x404411
int64_t function_404330(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g49 : a4; // 0x404352
    int32_t * v2 = __errno_location(); // 0x404358
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404377
    int32_t * v4 = (int32_t *)v1; // 0x40437a
    int64_t v5 = function_402df0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404395
    int64_t v6 = v5 + 1; // 0x40439a
    int64_t result = function_404e30(v6); // 0x4043af
    function_402df0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4043f4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4043fd
    return result;
}
// Address range: 0x404420 - 0x40442a
int64_t function_404420(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404420
    return function_404330(a1, a2, 0, a3);
}
// Address range: 0x404430 - 0x4044c5
int64_t function_404430(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x404430
    int64_t v2 = v1; // 0x404430
    int64_t v3 = v2; // 0x404444
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404463
        free((int64_t *)*(int64_t *)v4);
        v3 = &g60;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404460
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g60;
        }
    }
    int64_t v6 = v3; // 0x40447d
    if (g21 != 0x60a320) {
        // 0x40447f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g48;
        v6 = &g60;
    }
    int64_t result = v6; // 0x4044a1
    if (g20 != &g21) {
        // 0x4044a3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g60;
    }
    // 0x4044b6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4044d0 - 0x4044e1
int64_t function_4044d0(void) {
    // 0x4044d0
    int64_t v1; // 0x4044d0
    return function_404020(v1, v1, -1, (int64_t *)&g49);
}
// Address range: 0x4044f0 - 0x4044fa
int64_t function_4044f0(void) {
    // 0x4044f0
    int64_t v1; // 0x4044f0
    return function_404020(v1, v1, v1, (int64_t *)&g49);
}
// Address range: 0x404500 - 0x404516
int64_t function_404500(int64_t a1) {
    // 0x404500
    return function_404020(0, a1, -1, (int64_t *)&g49);
}
// Address range: 0x404520 - 0x404532
int64_t function_404520(int64_t a1, int64_t a2) {
    // 0x404520
    return function_404020(0, a1, a2, (int64_t *)&g49);
}
// Address range: 0x404540 - 0x4045a8
int64_t function_404540(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404550
    return function_404020((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4045b0 - 0x404614
int64_t function_4045b0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4045c0
    return function_404020((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404620 - 0x40462c
int64_t function_404620(int64_t a1, int64_t a2) {
    // 0x404620
    return function_404540(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404630 - 0x40463f
int64_t function_404630(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404630
    return function_4045b0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404640 - 0x4046b0
int64_t function_404640(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g49); // 0x40464d
    int128_t v2 = __asm_movdqa(g50); // 0x404655
    int128_t v3 = __asm_movdqa(g51); // 0x40465d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404672
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404688
    uint32_t v6 = *v5; // 0x404688
    uint32_t v7 = (int32_t)a3 % 32; // 0x40468d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404020(0, a1, a2, &v4);
}
// Address range: 0x4046b0 - 0x4046bd
int64_t function_4046b0(int64_t a1, int64_t a2) {
    // 0x4046b0
    return function_404640(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4046c0 - 0x4046d1
int64_t function_4046c0(int64_t a1) {
    // 0x4046c0
    return function_404640(a1, -1, 58);
}
// Address range: 0x4046e0 - 0x4046ea
int64_t function_4046e0(void) {
    // 0x4046e0
    int64_t v1; // 0x4046e0
    return function_404640(v1, v1, 58);
}
// Address range: 0x4046f0 - 0x40475e
int64_t function_4046f0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40470a
    return function_404020((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404760 - 0x4047cc
int64_t function_404760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g49); // 0x404767
    int128_t v2 = __asm_movdqa(g50); // 0x40476f
    int128_t v3 = __asm_movdqa(g51); // 0x404777
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404799
    if (a2 == 0 || a3 == 0) {
        // 0x4047c7
        abort();
        // UNREACHABLE
    }
    // 0x4047aa
    return function_404020(a1, a4, a5, &v4);
}
// Address range: 0x4047d0 - 0x4047d9
int64_t function_4047d0(void) {
    // 0x4047d0
    int64_t v1; // 0x4047d0
    return function_404760(v1, v1, v1, v1, -1);
}
// Address range: 0x4047e0 - 0x4047f7
int64_t function_4047e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4047e0
    return function_404760(0, a1, a2, a3, -1);
}
// Address range: 0x404800 - 0x404813
int64_t function_404800(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404800
    return function_404760(0, a1, a2, a3, a4);
}
// Address range: 0x404820 - 0x40482a
int64_t function_404820(void) {
    // 0x404820
    int64_t v1; // 0x404820
    return function_404020(v1, v1, v1, &g19);
}
// Address range: 0x404830 - 0x404842
int64_t function_404830(int64_t a1, int64_t a2) {
    // 0x404830
    return function_404020(0, a1, a2, &g19);
}
// Address range: 0x404850 - 0x404861
int64_t function_404850(void) {
    // 0x404850
    int64_t v1; // 0x404850
    return function_404020(v1, v1, -1, &g19);
}
// Address range: 0x404870 - 0x404886
int64_t function_404870(int64_t a1) {
    // 0x404870
    return function_404020(0, a1, -1, &g19);
}
// Address range: 0x404890 - 0x404c6d
int64_t function_404890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404928
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4048ac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4048c6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40490b
    if (a6 < 10) {
        // 0x40491a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404a12
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404c70 - 0x404c90
int64_t function_404c70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404c70
    if (a5 == 0) {
        // 0x404c8b
        return function_404890(a1, a2, a3, a4, a5, 0, (int64_t)&g60);
    }
    int64_t v1 = 0; // 0x404c77
    v1++;
    int64_t v2 = v1; // 0x404c89
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404c80
        v1++;
        v2 = v1;
    }
    // 0x404c8b
    return function_404890(a1, a2, a3, a4, a5, v2, (int64_t)&g60);
}
// Address range: 0x404c90 - 0x404cf0
int64_t function_404c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404c90
    int64_t v3 = &v2; // 0x404c90
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404cc3
    int64_t v6; // 0x404cad
    int64_t * v7; // 0x404ccb
    int64_t v8; // 0x404ccb
    int64_t v9; // 0x404cd7
    if (v5 < 48) {
        // 0x404ca0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404ce3
            break;
        }
    } else {
        // 0x404ccb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404ce3
            break;
        }
    }
    int64_t v10 = 10; // 0x404cc1
    while (v4 != 9) {
        // 0x404cb9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404ca0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404ce3
                break;
            }
        } else {
            // 0x404ccb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404ce3
                break;
            }
        }
        // 0x404cb9
        v10 = 10;
    }
    // 0x404ce3
    return function_404890(a1, a2, a3, a4, v3, v10, (int64_t)&g60);
}
// Address range: 0x404cf0 - 0x404dac
int64_t function_404cf0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404cf0
    int64_t v1; // bp-168, 0x404cf0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404cf0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404cf0
    int64_t v8; // 0x404cf0
    int64_t v9; // bp-56, 0x404cf0
    int64_t v10; // 0x404d55
    int64_t v11; // 0x404d79
    if ((int32_t)v6 < 48) {
        // 0x404d40
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404d90
            break;
        }
    } else {
        // 0x404d72
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404d90
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404d6a
    int64_t v13 = 10; // 0x404d6a
    while (v5 != 9) {
        // 0x404d6c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404d40
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404d90
                break;
            }
        } else {
            // 0x404d72
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404d90
                break;
            }
        }
        // 0x404d62
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404d90
    int64_t v14; // bp-136, 0x404cf0
    int64_t result = function_404890(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g60); // 0x404d9f
    return result;
}
// Address range: 0x404db0 - 0x404e24
int64_t function_404db0(int64_t a1) {
    // 0x404db0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404e13
    return fputs_unlocked(v1, g28);
}
// Address range: 0x404e30 - 0x404e4a
int64_t function_404e30(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404e34
    if (size != 0 != (mem == NULL)) {
        // 0x404e43
        return (int64_t)mem;
    }
    // 0x404e45
    function_405080(size);
    // UNREACHABLE
}
// Address range: 0x404e50 - 0x404e71
int64_t function_404e50(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404e53
    int64_t v2 = v1; // 0x404e53
    if (v2 < 0) {
        // 0x404e6b
        function_405080(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404e69
        return function_404e30(v2);
    }
    // 0x404e6b
    function_405080(v2);
    // UNREACHABLE
}
// Address range: 0x404e80 - 0x404e82
int64_t function_404e80(void) {
    // 0x404e80
    int64_t v1; // 0x404e80
    return function_404e30(v1);
}
// Address range: 0x404e90 - 0x404ec6
int64_t function_404e90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404eb8
        free(v1);
        return (int32_t)&g60 ^ (int32_t)&g60;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404ea1
    if (a2 != 0 != (mem == NULL)) {
        // 0x404eb0
        return (int64_t)mem;
    }
    // 0x404ec1
    function_405080(a1);
    // UNREACHABLE
}
// Address range: 0x404ed0 - 0x404ef1
int64_t function_404ed0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404ed3
    int64_t v2 = v1; // 0x404ed3
    if (v2 < 0) {
        // 0x404eeb
        function_405080(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404ee9
        return function_404e90(a1, v2);
    }
    // 0x404eeb
    function_405080(a1);
    // UNREACHABLE
}
// Address range: 0x404f00 - 0x404f86
int64_t function_404f00(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404f5b
            function_405080(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404e90(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404f43
    if (a2 == 0) {
        // 0x404f68
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404f48
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404f5b
        function_405080(a1);
        // UNREACHABLE
    }
    // 0x404f2a
    *(int64_t *)a2 = v2;
    return function_404e90(a1, v2 * a3);
}
// Address range: 0x404f90 - 0x404fe0
int64_t function_404f90(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404f90
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404fda
            function_405080(a1);
            // UNREACHABLE
        }
        // 0x404fb2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404e90(a1, v1);
    }
    if (a2 == 0) {
        // 0x404fc5
        *(int64_t *)a2 = 128;
        return function_404e90(0, 128);
    }
    // 0x404fd8
    if (a2 < 0) {
        // 0x404fda
        function_405080(a1);
        // UNREACHABLE
    }
    // 0x404fb2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404e90(a1, v1);
}
// Address range: 0x404fe0 - 0x404ff7
int64_t function_404fe0(int64_t a1, int64_t a2) {
    // 0x404fe0
    return (int64_t)memset((int64_t *)function_404e30(a1), 0, (int32_t)a1);
}
// Address range: 0x405000 - 0x40502e
int64_t function_405000(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405007
    if ((int64_t)v1 < 0) {
        // 0x405029
        function_405080(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405029
        function_405080(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40501a
    if (mem != NULL) {
        // 0x405024
        return (int64_t)mem;
    }
    // 0x405029
    function_405080(nmemb);
    // UNREACHABLE
}
// Address range: 0x405030 - 0x405058
int64_t function_405030(int64_t a1, int64_t a2) {
    int64_t v1 = function_404e30(a2); // 0x40503f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405060 - 0x405073
int64_t function_405060(int64_t str) {
    // 0x405060
    return function_405030(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405080 - 0x4050b1
int64_t function_405080(int64_t a1) {
    // 0x405080
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4050c0 - 0x4050d8
int64_t function_4050c0(void) {
    // 0x4050c0
    int64_t str; // 0x4050c0
    char * v1 = strndup((char *)str, (int32_t)str); // 0x4050c4
    if (v1 != NULL) {
        // 0x4050ce
        return (int64_t)v1;
    }
    // 0x4050d3
    function_405080(str);
    // UNREACHABLE
}
// Address range: 0x4050e0 - 0x40515b
int64_t function_4050e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4050e7
    if (fileno(stream) < 0) {
        // 0x405147
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4050fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40512b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405147
            return fclose(stream);
        }
    }
    // 0x4050fc
    if ((int32_t)function_405160(a1, v1) == 0) {
        // 0x405147
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405108
    int32_t v3 = *v2; // 0x405110
    int64_t result = fclose(stream); // 0x40511e
    if (v3 != 0) {
        // 0x405150
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405120
    return result;
}
// Address range: 0x405160 - 0x4051a0
int64_t function_405160(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40517a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40517a
        return fflush(stream);
    }
    // 0x405188
    function_4051a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4051a0 - 0x4051f7
int64_t function_4051a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4051a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4051aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4051db
    int64_t result = -1; // 0x4051e4
    if (v1 != -1) {
        // 0x4051e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4051f2
    return result;
}
// Address range: 0x405200 - 0x4052df
int64_t function_405200(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40520c
    uint32_t v2 = *v1; // 0x40520c
    int64_t v3 = a2 & 0xffffffff; // 0x405211
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405214
    uint64_t v5 = (int64_t)*v4; // 0x405214
    int64_t v6; // 0x405282
    if (v3 <= v5) {
      lab_0x40527c_2:
        // 0x40527c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405202
    int64_t v8 = v2; // 0x405200
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40527c
        goto lab_0x40527c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405238
    int64_t v17; // 0x405246
    int64_t * v18; // 0x405260
    int64_t * v19; // 0x405263
    int64_t v20; // 0x40526e
    int64_t v21; // 0x405246
    while ((v16 & 0xffffffff) > v10) {
        // 0x405243
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405260
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405277
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40527c
            goto lab_0x40527c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40527c
            goto lab_0x40527c_2;
        }
        // 0x405232
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4052bb
    int64_t * v23 = (int64_t *)v22; // 0x4052c0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4052c3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4052c0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4052d7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40522d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40527c
            goto lab_0x40527c_2;
        }
        // 0x405232
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405243
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405260
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405277
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40527c
                goto lab_0x40527c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40527c
                goto lab_0x40527c_2;
            }
            // 0x405232
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4052a0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4052c0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4052d7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40527c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4052e0 - 0x4058fc
int64_t function_4052e0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4052ff
    int64_t v2 = *v1; // 0x4052ff
    char * str2 = (char *)v2; // 0x40530c
    char c = *str2; // 0x40530c
    int64_t v3 = v2; // 0x405338
    int64_t v4 = 0; // 0x4052e0
    int32_t v5; // 0x4052e0
    int64_t v6; // 0x4052e0
    int64_t v7; // 0x4052e0
    int64_t v8; // 0x4052e0
    int64_t v9; // 0x4052e0
    int64_t v10; // 0x4052e0
    int64_t v11; // 0x4052e0
    int64_t v12; // 0x4052e0
    int64_t v13; // 0x4052e0
    int64_t str3; // 0x4052e0
    int64_t v14; // 0x4052e0
    int64_t v15; // 0x4052e0
    int64_t v16; // 0x4052e0
    int64_t v17; // 0x4052e0
    int32_t v18; // 0x4052e0
    int32_t v19; // 0x4052e0
    int32_t v20; // 0x4052e0
    int32_t v21; // 0x4052e0
    int32_t v22; // 0x4052e0
    int32_t v23; // 0x4052e0
    int32_t v24; // 0x4052e0
    int32_t v25; // 0x4052e0
    int32_t v26; // 0x4052e0
    int32_t v27; // 0x4052e0
    int32_t v28; // 0x4052e0
    int32_t v29; // 0x4052e0
    int64_t nmemb; // 0x4052e0
    int64_t v30; // 0x4052e0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40533c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405338
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405348
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40534e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405318
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40537c
                int64_t v34; // 0x4052e0
                int64_t v35; // 0x4052e0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405385
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405500;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405396
                int64_t v37 = *(int64_t *)v36; // 0x40539a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405370
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405385
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405500;
                        }
                    }
                    // 0x405396
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
                  lab_0x4053e6:
                    // 0x4053e6
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
                        goto lab_0x405440;
                    } else {
                        if (v11 == 0) {
                            // 0x4055b0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405440;
                        } else {
                            if (v39 == 0) {
                                // 0x405560
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40540a;
                                } else {
                                    // 0x40556c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40540a;
                                    } else {
                                        // 0x40557a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40540a;
                                        } else {
                                            goto lab_0x405440;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40540a;
                            }
                        }
                    }
                }
              lab_0x405451:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405626
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4057d2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x4057f2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40583f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405859
                            int64_t v45; // 0x40585b
                            if (*(char *)v42 != 0) {
                                // 0x40585b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405853
                            while (v17 + nmemb != v42) {
                                // 0x405855
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40585b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405848
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405880
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405634
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40578f
                        free((int64_t *)v17);
                    }
                    // 0x405689
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4056a0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40554e
                    return 63;
                }
                // 0x405470
                v5 = v39;
                if (v13 != 0) {
                    // 0x4054f4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405500:;
                    int32_t * v49 = (int32_t *)a7; // 0x405510
                    uint32_t v50 = *v49; // 0x405510
                    int64_t v51 = v50; // 0x405510
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40551a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405523
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40574f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4056fa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40554e
                            return 63;
                        }
                        // 0x405598
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4058af
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4057ad
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4057c0
                                // 0x40554e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4056be
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4056d2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40553b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40553e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405542
                    int64_t result = v59; // 0x405548
                    if (v58 != 0) {
                        // 0x40554a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40554e
                    return result;
                }
            } else {
                // 0x40534e
                v5 = v32;
            }
            // break -> 0x405475
            break;
        }
    }
    // 0x405475
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40548d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405497
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40554e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4055d9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4054c6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4054d6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405440:
    // 0x405440
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405440
    int64_t v63 = *(int64_t *)v62; // 0x405444
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405451
        goto lab_0x405451;
    }
    goto lab_0x4053e6;
  lab_0x40540a:
    // 0x40540a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4052e0
    int32_t v65; // 0x4052e0
    int32_t v66; // 0x4052e0
    if (v27 != 0) {
        goto lab_0x405440;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4055c0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405440;
            } else {
                goto lab_0x405431;
            }
        } else {
            // 0x405425
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40571c
                int64_t v67 = (int64_t)mem; // 0x40571c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405440;
                } else {
                    // 0x40572f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405431;
                }
            } else {
                goto lab_0x405431;
            }
        }
    }
  lab_0x405431:
    // 0x405431
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405440;
}
// Address range: 0x405900 - 0x405ec6
int64_t function_405900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405921
    if (v3 < 1) {
        // 0x405ade
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40591d
    int32_t v5 = *(int32_t *)a7; // 0x405929
    uint64_t v6 = a1 & 0xffffffff; // 0x40592b
    int64_t v7 = v2; // 0x405930
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405933
    *v8 = 0;
    int64_t v9; // 0x405900
    int64_t v10; // 0x405900
    int64_t v11; // 0x405900
    int64_t v12; // 0x405900
    int64_t str; // 0x405900
    int64_t v13; // 0x405900
    int64_t v14; // 0x405900
    int64_t v15; // 0x405900
    int64_t v16; // 0x405900
    int64_t v17; // 0x405900
    int32_t v18; // 0x405900
    char v19; // 0x405900
    if (v5 == 0) {
        // 0x405b18
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40594a;
    } else {
        // 0x405943
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405990
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405993
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405a58;
            } else {
                int64_t v22 = v7 + 1; // 0x4059a6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4059b6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405a6c;
                } else {
                    goto lab_0x4059c8;
                }
            }
        } else {
            goto lab_0x40594a;
        }
    }
  lab_0x40594a:
    // 0x40594a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405950
    *v24 = 0;
    int64_t v25; // 0x405900
    int64_t v26; // 0x405900
    int64_t v27; // 0x405900
    switch (*(char *)&v2) {
        case 45: {
            // 0x405a40
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405a4d;
        }
        case 43: {
            // 0x405d50
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405a4d;
        }
        default: {
            // 0x40596c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405ccf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405de8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405a4d;
                } else {
                    // 0x405cdd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40597a;
                }
            } else {
                goto lab_0x40597a;
            }
        }
    }
  lab_0x405a58:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405a5f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4059c8;
    } else {
        goto lab_0x405a6c;
    }
  lab_0x40597a:
    // 0x40597a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405a4d;
  lab_0x405a4d:
    // 0x405a4d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405a58;
  lab_0x4059c8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4059c8
    int64_t v31 = v30; // 0x4059c8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4059ca
    if ((int64_t)*v32 > v31) {
        // 0x4059cf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4059d2
    if (*v33 > v30) {
        // 0x4059d7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4059da
    int64_t v35 = v31; // 0x4059de
    int64_t v36 = v15; // 0x4059de
    int64_t v37; // 0x405900
    int64_t v38; // 0x405900
    int64_t v39; // 0x405900
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405b48
        int64_t v41 = v40; // 0x405b48
        v2 = v41;
        int64_t v42; // 0x405900
        if (*v33 == v40) {
            // 0x405d30
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405d38
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405b54
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405b58
                function_405200(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405b68
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405b71
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405b7a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405b91
            int64_t v47 = v45 & 0xffffffff; // 0x405b95
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405b9e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405ba4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405ba6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405b80
            int64_t v49 = v48 & 0xffffffff; // 0x405b80
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405b91
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405b9e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405ba4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405ba6;
                    }
                }
                // 0x405b80
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405d48
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405ba6;
    } else {
        goto lab_0x4059e4;
    }
  lab_0x405a6c:
    // 0x405a6c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405a6f
    int64_t v51 = v12; // 0x405a6f
    int64_t v52 = v14; // 0x405a6f
    if (*(char *)v10 == 0) {
        goto lab_0x4059c8;
    } else {
        goto lab_0x405a75;
    }
  lab_0x4059e4:;
    int32_t v53 = v35; // 0x4059e4
    int64_t v54; // 0x405900
    int64_t v55; // 0x405900
    int64_t v56; // 0x405900
    int64_t v57; // 0x405900
    int64_t v58; // 0x405900
    int64_t v59; // 0x405900
    char * v60; // 0x405900
    int64_t v61; // 0x405900
    int64_t v62; // 0x4059f9
    int64_t v63; // 0x405900
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405b33
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405b36;
    } else {
        // 0x4059ec
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405900
        int64_t v66 = v65 ? -1 : 1; // 0x405a00
        int64_t v67 = (int64_t)"--"; // 0x405900
        int64_t v68 = v62; // 0x405900
        int64_t v69 = 3; // 0x405a00
        unsigned char v70 = *(char *)v68; // 0x405a00
        char v71 = *(char *)v67; // 0x405a00
        char v72 = v71; // 0x405a00
        bool v73 = false; // 0x405a00
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
            // 0x405af0
            if (*(char *)v62 == 45) {
                // 0x405bb0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405bb0
                if (c == 0) {
                    goto lab_0x405afa;
                } else {
                    // 0x405bbd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405c40;
                    } else {
                        if (c == 45) {
                            // 0x405e23
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405c95;
                        } else {
                            // 0x405bce
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405c40;
                            } else {
                                // 0x405bd3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405bf4;
                                } else {
                                    // 0x405bda
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405c40;
                                    } else {
                                        goto lab_0x405bf4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405afa;
            }
        } else {
            uint32_t v75 = *v33; // 0x405a10
            v2 = v75;
            int32_t v76 = *v32; // 0x405a13
            int64_t v77 = v35 + 1; // 0x405a16
            int32_t v78 = v77; // 0x405a19
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405d80
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405a27
                    function_405200(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405a35
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405b36;
        }
    }
  lab_0x405a75:;
    // 0x405a75
    int64_t v79; // bp-104, 0x405900
    int64_t v80 = &v79; // 0x40590a
    int64_t v81 = v50 + 1; // 0x405a75
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405a7c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405a81
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405a85
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405a89
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405a91
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405a96
    int32_t c2 = v84; // 0x405a96
    char * found_char_pos = strchr(str2, c2); // 0x405a96
    int64_t v87 = *v82; // 0x405a9b
    v2 = v87;
    int64_t v88 = *v85; // 0x405aa5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405ab0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405da0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405d6d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405ade
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405a96
    char v91 = *(char *)(v90 + 1); // 0x405acb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405a85
        if (v91 != 58) {
            // 0x405ade
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405cf4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405df8
                *v8 = 0;
            } else {
                // 0x405ddc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405d1e
            *v83 = 0;
            // 0x405ade
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405cfe
        if (v93 != 0) {
            // 0x405d90
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405d1e
            *v83 = 0;
            // 0x405ade
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405d11
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405d1e
            *v83 = 0;
            // 0x405ade
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405e5a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405e0a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405e11
        // 0x405d1e
        *v83 = 0;
        // 0x405ade
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405c69
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405c6b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405e90
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405e41
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405e48
            // 0x405ade
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405c76
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405c7a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405c95;
  lab_0x405ba6:
    // 0x405ba6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4059e4;
  lab_0x405c95:;
    int64_t v99 = function_4052e0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405cb3
    // 0x405ade
    return v99 & 0xffffffff;
  lab_0x405b36:;
    int32_t v100 = v55; // 0x405b36
    if (v100 != (int32_t)v59) {
        // 0x405b3a
        *(int32_t *)a7 = v100;
    }
    // 0x405ade
    return 0xffffffff;
  lab_0x405afa:
    // 0x405afa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405b01
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405ade
    return v99 & 0xffffffff;
  lab_0x405c40:
    // 0x405c40
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405a75;
  lab_0x405bf4:
    // 0x405bf4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4052e0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x405c1a
    if ((int32_t)v101 != -1) {
        // 0x405ade
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405c2f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405c40;
}
// Address range: 0x405ed0 - 0x405f26
int64_t function_405ed0(int64_t a1) {
    // 0x405ed0
    *(int32_t *)&g52 = g26;
    *(int32_t *)&g53 = g25;
    int64_t v1; // 0x405ed0
    int64_t result = function_405900(v1, v1, v1, v1, v1, v1, &g52, a1 & 0xffffffff); // 0x405ef6
    g26 = *(int32_t *)&g52;
    g58 = g55;
    *(int32_t *)&g24 = g54;
    return result;
}
// Address range: 0x405f30 - 0x405f48
int64_t function_405f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f30
    return function_405ed0(1);
}
// Address range: 0x405f50 - 0x405f63
int64_t function_405f50(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x405f50
    return function_405ed0(0);
}
// Address range: 0x405f70 - 0x405f85
int64_t function_405f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f70
    return function_405900(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405f90 - 0x405fa6
int64_t function_405f90(void) {
    // 0x405f90
    return function_405ed0(0);
}
// Address range: 0x405fb0 - 0x405fc8
int64_t function_405fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405fb0
    return function_405900(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405fd0 - 0x40604a
int64_t function_405fd0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405fdb
    int64_t v2 = (int64_t)&g9; // 0x405fdb
    int32_t * pwc; // 0x405fd0
    int64_t v3; // 0x405fd0
    int64_t n; // 0x405fd0
    if (a2 == 0) {
        goto lab_0x406022;
    } else {
        // 0x405fdd
        if (a3 == 0) {
            // 0x406008
            return -2;
        }
        // 0x405fe9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406022;
        } else {
            goto lab_0x405ff4;
        }
    }
  lab_0x406022:
    // 0x406022
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405fd0
    pwc = (int32_t *)&v4;
    goto lab_0x405ff4;
  lab_0x405ff4:;
    char * wstr = (char *)v3; // 0x405ffa
    int64_t ps; // 0x405fd0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405ffa
    int64_t result = v5; // 0x405ffa
    if (v5 < 0xfffffffe) {
        // 0x406008
        return result;
    }
    int64_t result2 = result; // 0x406039
    if ((char)function_4060b0(0, v3) == 0) {
        // 0x40603b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406008
    return result2;
}
// Address range: 0x406050 - 0x4060ad
int64_t function_406050(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406057
    int64_t v2; // 0x406050
    int64_t result = function_4050e0(a1, v2); // 0x406068
    if ((v2 & 32) != 0) {
        // 0x406090
        if ((int32_t)result == 0) {
            // 0x406094
            *__errno_location() = 0;
        }
        // 0x40608a
        return 0xffffffff;
    }
    // 0x406071
    if ((int32_t)result == 0) {
        // 0x40608a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406078
    if (v1 == 0) {
        // 0x40607a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40608a
    return result2;
}
// Address range: 0x4060b0 - 0x40610e
int64_t function_4060b0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4060b6
    if (locale == NULL) {
        // 0x4060e3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4060b6
    bool v2; // 0x4060b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x4060b0
    int64_t v5 = v1; // 0x4060b0
    int64_t v6 = 2; // 0x4060d5
    unsigned char v7 = *(char *)v5; // 0x4060d5
    char v8 = *(char *)v4; // 0x4060d5
    char v9 = v8; // 0x4060d5
    bool v10 = false; // 0x4060d5
    while (v7 == v8) {
        // 0x4060c8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4060e1
    int64_t v13 = v1; // 0x4060e1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4060e3
        return 0;
    }
    int64_t v14 = 6; // 0x4060e1
    unsigned char v15 = *(char *)v13; // 0x4060fd
    char v16 = *(char *)v12; // 0x4060fd
    char v17 = v16; // 0x4060fd
    bool v18 = false; // 0x4060fd
    while (v15 == v16) {
        // 0x4060f0
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
// Address range: 0x406110 - 0x406672
int64_t function_406110(void) {
    char * v1 = nl_langinfo(14); // 0x406126
    char * v2 = g56; // 0x40612b
    char * v3; // 0x406110
    int64_t v4; // 0x406110
    int64_t v5; // 0x406110
    int64_t v6; // 0x406110
    int64_t v7; // 0x406110
    int32_t size; // 0x406110
    int32_t size2; // 0x406110
    int32_t len; // 0x4061e2
    int64_t v8; // 0x4061e2
    char * env_val; // 0x4061cd
    if (v2 == NULL) {
        // 0x4061c8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406235;
        } else {
            // 0x4061da
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406235;
            } else {
                // 0x4061df
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4061cd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406665
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406235;
                    } else {
                        // 0x4065d9
                        size2 = len + 14;
                        goto lab_0x4061fb;
                    }
                } else {
                    goto lab_0x4061fb;
                }
            }
        }
    } else {
        // 0x406110
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40614a;
    }
  lab_0x40647c:;
    // 0x40647c
    struct _IO_FILE * stream; // 0x4062bb
    int32_t v10 = __uflow(stream); // 0x40647f
    int64_t v11; // 0x406110
    int64_t v12 = v11; // 0x406489
    int64_t v13; // 0x406110
    int64_t v14 = v13; // 0x406489
    int32_t v15 = v10; // 0x406489
    int64_t v16; // 0x406110
    int64_t v17 = v16; // 0x406489
    int64_t v18 = v11; // 0x406489
    int64_t v19 = v13; // 0x406489
    int64_t v20 = v16; // 0x406489
    if (v10 == -1) {
        // break -> 0x40648f
        goto lab_0x40648f;
    }
    goto lab_0x406309;
  lab_0x4062fe:;
    // 0x4062fe
    int64_t v90; // 0x406110
    int64_t * v32; // 0x4062f0
    *v32 = v90 + 1;
    int64_t v89; // 0x406110
    v12 = v89;
    int64_t v91; // 0x406110
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406110
    v17 = v92;
    goto lab_0x406309;
  lab_0x406309:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406110
    int32_t v25; // bp-120, 0x406110
    int32_t v26; // bp-184, 0x406110
    int64_t v27; // 0x4062bb
    int64_t v28; // 0x4062d8
    int64_t v29; // 0x4062dd
    int64_t * v30; // 0x4062f4
    switch (c) {
        case 32: {
            goto lab_0x4062f0;
        }
        case 10: {
            goto lab_0x4062f0;
        }
        case 9: {
            goto lab_0x4062f0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4064e1
            int32_t v33; // 0x406110
            char v34; // 0x406110
            int32_t v35; // 0x4064ee
            if (v31 < *v30) {
                // 0x4064c0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4064eb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4064e1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4064c0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4064eb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4064d0
                v36 = v33;
            }
            // 0x4065bf
            if (v36 == -1) {
                // break -> 0x40648f
                break;
            }
            goto lab_0x4062f0;
        }
        default: {
            // 0x40631f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40648f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406348
            int64_t v39 = v37 + 4; // 0x40634a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406356
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406358
            while (v41 == 0) {
                // 0x406348
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406376
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406382
            int64_t v45 = v43 + 4; // 0x406384
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406390
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406392
            while (v47 == 0) {
                // 0x406382
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40637f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4063a8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4063b8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4063bc
            int64_t v52 = v51 + v48; // 0x4063c5
            int64_t * mem; // 0x406110
            int64_t v53; // 0x406110
            int64_t v54; // 0x406110
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4064fb
                int64_t v56 = v55 + 3; // 0x406507
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4063e1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4063f0
            if (mem == NULL) {
                // 0x40661c
                free((int64_t *)v21);
                function_4050e0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x406294;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406408
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406412
            uint32_t v62 = (int32_t)v59; // 0x406415
            int64_t v63; // 0x406110
            if (v62 >= 8) {
                // 0x406524
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40653e
                int64_t v66 = v61 - v65; // 0x406542
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40654d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40655e
                    int64_t v70 = v69 & 0xffffffff; // 0x40655e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40655b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4065ef
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406427
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40642b
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
            int64_t v73 = v51 + 1; // 0x40643b
            int64_t v74 = v60 - 1; // 0x40643f
            uint32_t v75 = (int32_t)v73; // 0x406444
            int64_t v76; // 0x406110
            if (v75 >= 8) {
                // 0x406572
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40657c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40658c
                int64_t v80 = v74 - v79; // 0x406590
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40659b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4065ab
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4065a9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406606
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40660e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406456
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40645a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406653
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40646e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4062fe;
            } else {
                goto lab_0x40647c;
            }
        }
    }
  lab_0x4062f0:;
    int64_t v93 = v23; // 0x406110
    int64_t v94 = v22; // 0x406110
    int64_t v95 = v21; // 0x406110
    goto lab_0x4062f0_2;
  lab_0x406235:;
    int64_t * mem3 = malloc(size); // 0x406235
    int64_t v97 = (int64_t)&g9; // 0x406240
    int64_t v98; // 0x406110
    int64_t path; // 0x406110
    if (mem3 == NULL) {
        goto lab_0x406212;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406235
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406256;
    }
  lab_0x40614a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40613d
    char v100 = *v3; // 0x40614a
    int64_t v101; // 0x406110
    if (v100 == 0) {
        // 0x4061a4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406110
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406110
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406190
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406197;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406160
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40616d
        char v107 = *(char *)v106; // 0x406172
        v102 = v107;
        if (v107 == 0) {
            // 0x4061a4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40617b
    v104 = v103 + 1;
  lab_0x406197:
    // 0x4061a4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406212:;
    char * v108 = (char *)v97;
    g56 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40614a;
  lab_0x406256:;
    int64_t v109 = v98 + path; // 0x406256
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406282
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x4062b1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4065e2
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x4062d5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4062f0_2:;
                uint64_t v96 = *v32; // 0x4062f0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40647c;
                } else {
                    goto lab_0x4062fe;
                }
            }
          lab_0x40648f:
            // 0x40648f
            function_4050e0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x4064ae
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406294;
  lab_0x4061fb:;
    int64_t * mem4 = malloc(size2); // 0x4061fb
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x4062a1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406256;
    } else {
        goto lab_0x406212;
    }
  lab_0x406294:
    // 0x406294
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406212;
}
// Address range: 0x406680 - 0x4066dd
int64_t function_406680(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406680
    return function_401438();
}
// Address range: 0x4066e0 - 0x4066e1
int64_t function_4066e0(void) {
    // 0x4066e0
    int64_t result; // 0x4066e0
    return result;
}
// Address range: 0x4066f0 - 0x406708
int64_t function_4066f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4066f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x406708 - 0x406728
int64_t function_406708(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x406712
    while (*(int64_t *)v1 != -1) {
        // 0x406713
        v1 -= 8;
    }
    // 0x406724
    return result;
}
