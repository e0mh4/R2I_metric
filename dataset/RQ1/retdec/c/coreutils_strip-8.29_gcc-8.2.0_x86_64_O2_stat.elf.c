// Address range: 0x402360 - 0x402365
int64_t function_402360(void) {
    // 0x402360
    abort();
    // UNREACHABLE
}
// Address range: 0x402365 - 0x40236a
int64_t function_402365(void) {
    // 0x402365
    abort();
    // UNREACHABLE
}
// Address range: 0x40236a - 0x40236f
int64_t function_40236a(void) {
    // 0x40236a
    abort();
    // UNREACHABLE
}
// Address range: 0x40236f - 0x402374
int64_t function_40236f(void) {
    // 0x40236f
    abort();
    // UNREACHABLE
}
// Address range: 0x402374 - 0x402379
int64_t function_402374(void) {
    // 0x402374
    abort();
    // UNREACHABLE
}
// Address range: 0x402379 - 0x40237e
int64_t function_402379(void) {
    // 0x402379
    abort();
    // UNREACHABLE
}
// Address range: 0x40237e - 0x402383
int64_t function_40237e(void) {
    // 0x40237e
    abort();
    // UNREACHABLE
}
// Address range: 0x402390 - 0x4028a0
int64_t function_402390(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a1 & 0xffffffff; // 0x40239a
    function_4072f0(a2);
    setlocale(LC_ALL, (char *)&g13);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    char * v2 = (char *)*(int64_t *)localeconv(); // 0x4023ea
    char * str = *v2 == 0 ? "." : v2; // 0x4023f5
    g46 = str;
    g45 = strlen(str);
    function_410340(0x405530, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v3 = 0; // 0x40241b
    int64_t v4 = 0; // 0x40241b
    int64_t v5 = 0; // 0x40241b
    int64_t v6; // 0x402390
    int64_t v7; // 0x402433
    while (true) {
      lab_0x402420_3:
        // 0x402420
        v6 = v3;
        while (true) {
            // 0x402420
            int32_t v8; // 0x402390
            while (true) {
                // 0x402420
                v7 = function_40add0(v1, a2, "c:fLt", &g3, 0, a6);
                v8 = v7;
                switch (v8) {
                    case -1: {
                        goto lab_0x402543;
                    }
                    case 99: {
                        goto lab_0x402520;
                    }
                    default: {
                        if (v8 > 99) {
                            // break -> 0x402450
                            break;
                        }
                        if (v8 == -130) {
                            // 0x402875
                            function_404870(0);
                            // UNREACHABLE
                        }
                        if (v8 != 76) {
                            if (v8 == -131) {
                                // 0x4024c9
                                function_409420((int64_t)g35, "stat", "GNU coreutils", (int64_t)g24, "Michael Meskes", 0);
                                exit(0);
                                // UNREACHABLE
                            }
                            goto lab_0x4024b6;
                        }
                        // 0x40249b
                        g48 = 1;
                        goto lab_0x402420;
                    }
                }
            }
            // 0x402450
            while (v8 != 116) {
                if (v8 == 128) {
                    int64_t v9 = g64; // 0x402463
                    g47 = 1;
                    *(int64_t *)0x617310 = (int64_t)&g13;
                    v3 = v9;
                    goto lab_0x402420_3;
                }
                // 0x4024b0
                if (v8 != 102) {
                    // 0x4024b6
                    function_404870(1);
                    // UNREACHABLE
                }
                while (true) {
                    // 0x402420
                    v7 = function_40add0(v1, a2, "c:fLt", &g3, 0, a6);
                    v8 = v7;
                    switch (v8) {
                        case -1: {
                            goto lab_0x402543;
                        }
                        case 99: {
                            goto lab_0x402520;
                        }
                        default: {
                            if (v8 > 99) {
                                // break -> 0x402450
                                break;
                            }
                            if (v8 == -130) {
                                // 0x402875
                                function_404870(0);
                                // UNREACHABLE
                            }
                            if (v8 != 76) {
                                if (v8 == -131) {
                                    // 0x4024c9
                                    function_409420((int64_t)g35, "stat", "GNU coreutils", (int64_t)g24, "Michael Meskes", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x4024b6;
                            }
                            // 0x40249b
                            g48 = 1;
                            goto lab_0x402420;
                        }
                    }
                }
            }
        }
      lab_0x402520:
        // 0x402520
        g47 = 0;
        g23 = (char *)&g12;
        v3 = g64;
        goto lab_0x402420_3;
    }
  lab_0x402543:
    // 0x402543
    if (*(int32_t *)0x61739c == (int32_t)a1) {
        // 0x40287c
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x4024b6
        function_404870(1);
        // UNREACHABLE
    }
    int64_t v10; // 0x402390
    int64_t v11; // 0x402390
    if (v6 == 0) {
        // 0x40282c
        v11 = function_403e80(v5, v4, 0);
        v10 = function_403e80(v5, v4, 1);
    } else {
        int64_t v12 = function_40bd00(v6, "%N"); // 0x402566
        v11 = v6;
        v10 = v6;
        if (v12 != 0) {
            char * env_val = getenv("QUOTING_STYLE"); // 0x40257a
            if (env_val == NULL) {
                // 0x40285a
                function_4088b0(0, 4);
                v11 = v6;
                v10 = v6;
            } else {
                int64_t v13 = (int64_t)env_val; // 0x40257a
                int64_t v14 = function_405190(v13, g10, (int64_t *)&g9, 4); // 0x40259d
                if ((int32_t)v14 < 0) {
                    // 0x4027e4
                    function_4088b0(0, 4);
                    function_408f10(v13);
                    error(0, (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s" ^ (int32_t)"ignoring invalid value of environment variable QUOTING_STYLE: %s", dcgettext(NULL, "ignoring invalid value of environment variable QUOTING_STYLE: %s", 5));
                    v11 = v6;
                    v10 = v6;
                } else {
                    int32_t v15 = *(int32_t *)((0x100000000 * v14 >> 30) + (int64_t)&g9); // 0x4025ae
                    function_4088b0(0, v15);
                    v11 = v6;
                    v10 = v6;
                }
            }
        }
    }
    uint64_t v16 = (int64_t)g33; // 0x4025bf
    if (v1 <= v16) {
        // 0x402767
        return 0;
    }
    int64_t v17 = v7 & 0xffffffff; // 0x402438
    int64_t v18 = v11;
    int64_t v19 = a2 + 8 + 8 * (((v16 ^ 0xffffffff) + a1 & 0xffffffff) + (int64_t)g33); // 0x4025de
    bool v20; // 0x402390
    int64_t v21 = v20 ? -1 : 1; // 0x402648
    int32_t v22; // 0x402390
    int64_t v23 = (v22 & 0xb000) != 0x2000 ? v18 : v10;
    int64_t v24 = 0x100000000 * v16 / 0x20000000 + a2; // 0x4025e9
    int64_t v25 = 1; // 0x4025e9
    int64_t v26; // 0x402390
    int64_t v27; // 0x402390
    int64_t v28; // 0x402390
    int64_t v29; // 0x402390
    int64_t v30; // bp-200, 0x402390
    int64_t v31; // 0x402390
    int64_t v32; // 0x402638
    while (true) {
      lab_0x402638:
        // 0x402638
        v26 = v25;
        v28 = v24;
        v32 = *(int64_t *)v28;
        int64_t v33 = 2; // 0x402648
        int64_t v34 = v32;
        int64_t v35 = (int64_t)"-";
        unsigned char v36 = *(char *)v34; // 0x402648
        char v37 = *(char *)v35; // 0x402648
        char v38 = v37; // 0x402648
        bool v39 = false; // 0x402648
        while (v36 == v37) {
            v33--;
            int64_t v40 = v35 + v21; // 0x402648
            int64_t v41 = v34 + v21; // 0x402648
            v38 = v36;
            v39 = true;
            if (v33 == 0) {
                // break -> 
                break;
            }
            v34 = v41;
            v35 = v40;
            v36 = *(char *)v34;
            v37 = *(char *)v35;
            v38 = v37;
            v39 = false;
        }
        bool v42 = v39;
        unsigned char v43 = v38;
        if (v5 != 0) {
            if ((v36 >= v43 && !v42) == v36 < v43) {
                // 0x4026c3
                function_408cc0(4, v32);
                error(0, (int32_t)"using %s to denote standard input does not work in file system mode" ^ (int32_t)"using %s to denote standard input does not work in file system mode", dcgettext(NULL, "using %s to denote standard input does not work in file system mode", 5));
                v27 = (int32_t)&g65 ^ (int32_t)&g65;
                goto lab_0x402625;
            } else {
                // 0x4025f3
                if (statfs((char *)v32, (struct statfs *)&v30) != 0) {
                    // 0x402781
                    function_408cc0(4, v32);
                    v31 = (int64_t)"cannot read file system information for %s";
                    goto lab_0x40279d;
                } else {
                    // 0x402608
                    int64_t v44; // bp-1, 0x402390
                    int64_t v45 = function_4037b0(v18, &v44, v32, 0x402b30, &v30); // 0x40261d
                    v27 = v45 & 0xffffffff ^ 1;
                    goto lab_0x402625;
                }
            }
        } else {
            if ((v36 >= v43 && !v42) == v36 < v43) {
                int32_t v46 = __fxstat(1, 0, (struct stat *)&v30); // 0x402724
                v29 = 0;
                if (v46 == 0) {
                    goto lab_0x40268e;
                } else {
                    // 0x402733
                    error(0, *__errno_location(), dcgettext(NULL, "cannot stat standard input", 5));
                    v27 = (int32_t)&g65 ^ (int32_t)&g65;
                    goto lab_0x402625;
                }
            } else {
                char * v47 = (char *)v32;
                int32_t v48; // 0x402390
                if (g48 == 0) {
                    // 0x4026fc
                    v48 = __lxstat(1, v47, (struct stat *)&v30);
                } else {
                    // 0x40266c
                    v48 = __xstat(1, v47, (struct stat *)&v30);
                }
                // 0x402683
                v29 = v17;
                if (v48 != 0) {
                    // 0x4027c6
                    function_408cc0(4, v32);
                    v31 = (int64_t)"cannot stat %s";
                    goto lab_0x40279d;
                } else {
                    goto lab_0x40268e;
                }
            }
        }
    }
  lab_0x402767:;
    // 0x402767
    int64_t v49; // 0x402390
    return v49 ^ 1;
  lab_0x402625:;
    int64_t v50 = v28 + 8; // 0x402628
    v49 = v27 & v26;
    v24 = v50;
    v25 = v49;
    if (v19 == v50) {
        // break -> 0x402767
        goto lab_0x402767;
    }
    goto lab_0x402638;
  lab_0x40268e:;
    int64_t v51 = function_4037b0(v23, (int64_t *)v29, v32, 0x4042e0, &v30); // 0x4026b6
    v27 = v51 & 0xffffffff ^ 1;
    goto lab_0x402625;
  lab_0x40279d:
    // 0x40279d
    error(0, *__errno_location(), dcgettext(NULL, (char *)v31, 5));
    v27 = (int32_t)&g65 ^ (int32_t)&g65;
    goto lab_0x402625;
  lab_0x402420_2:
    // 0x402420
    goto lab_0x402420_3;
}
// Address range: 0x4028a0 - 0x4028cb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4028a0
    int64_t v1; // 0x4028a0
    __libc_start_main(0x402390, (int32_t)a4, (char **)&v1, (void (*)())0x4102d0, (void (*)())0x410330, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4028cb - 0x4028ea
int64_t function_4028cb(void) {
    // 0x4028cb
    return &g34;
}
// Address range: 0x4028ea - 0x402921
int64_t function_4028ea(void) {
    // 0x4028ea
    return 0;
}
// Address range: 0x402921 - 0x402978
int64_t function_402921(void) {
    // 0x402921
    if (g38 != 0) {
        // 0x402977
        int64_t result; // 0x402921
        return result;
    }
    int64_t v1 = g39; // 0x402954
    int64_t result2; // 0x402966
    if (g39 >= ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x402966
        result2 = function_4028cb();
        g38 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x402956
        v1++;
    }
    // 0x40294a
    g39 = v1;
    // 0x402966
    result2 = function_4028cb();
    g38 = 1;
    return result2;
}
// Address range: 0x402978 - 0x40297d
int64_t function_402978(void) {
    // 0x402978
    return function_4028ea();
}
// Address range: 0x402980 - 0x402a27
int64_t function_402980(int64_t a1, int64_t a2, char * str3, char * str2) {
    uint64_t v1 = a2 + a1; // 0x402989
    int64_t str = a1 + 1; // 0x40298f
    if (str >= v1) {
        // 0x402a0c
        return (int64_t)strcpy((char *)str, str2);
    }
    int64_t str5 = str;
    uint64_t v2 = str;
    char v3 = *(char *)v2; // 0x4029d1
    int32_t c = v3; // 0x4029da
    char * found_char_pos = strchr("'-+ #0I", c); // 0x4029e0
    while (found_char_pos != NULL) {
        int64_t v4 = str5; // 0x4029be
        if (strchr(str3, c) != NULL) {
            // 0x4029c0
            *(char *)str5 = v3;
            v4 = str5 + 1;
        }
        int64_t v5 = v2 + 1; // 0x4029c8
        int64_t str4 = v4; // 0x4029cf
        if (v1 <= v5) {
            // 0x402a0c
            return (int64_t)strcpy((char *)str4, str2);
        }
        str5 = v4;
        v2 = v5;
        v3 = *(char *)v2;
        c = v3;
        found_char_pos = strchr("'-+ #0I", c);
    }
    // 0x4029ea
    if (v1 <= v2) {
        // 0x402a0c
        return (int64_t)strcpy((char *)str5, str2);
    }
    int64_t v6 = (int64_t)found_char_pos; // 0x4029e0
    int64_t v7 = v1 - v2; // 0x4029ef
    *(char *)(str5 + v6) = v3;
    int64_t v8 = v6 + 1; // 0x402a00
    if (v7 == v8) {
        // 0x402a0c
        return (int64_t)strcpy((char *)(str5 + v7), str2);
    }
    int64_t v9 = v8;
    *(char *)(v9 + str5) = *(char *)(v9 + v2);
    int64_t v10 = v9 + 1; // 0x402a00
    while (v7 != v10) {
        // 0x4029f8
        v9 = v10;
        *(char *)(v9 + str5) = *(char *)(v9 + v2);
        v10 = v9 + 1;
    }
    // 0x402a0c
    return (int64_t)strcpy((char *)(str5 + v7), str2);
}
// Address range: 0x402a30 - 0x402a63
int64_t function_402a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402a30
    function_402980(a1, a2, "-#0", "lx");
    return __printf_chk(1, (char *)a1);
}
// Address range: 0x402a70 - 0x402aa3
int64_t function_402a70(int64_t a1, int64_t a2, char * a3) {
    // 0x402a70
    function_402980(a1, a2, "-", "s");
    return __printf_chk(1, (char *)a1);
}
// Address range: 0x402ab0 - 0x402ae3
int64_t function_402ab0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402ab0
    function_402980(a1, a2, "'-0", "lu");
    return __printf_chk(1, (char *)a1);
}
// Address range: 0x402af0 - 0x402b23
int64_t function_402af0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402af0
    function_402980(a1, a2, "'-+ 0", "ld");
    return __printf_chk(1, (char *)a1);
}
// Address range: 0x402b30 - 0x4037af
int64_t function_402b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 + 0xffffffad; // 0x402b31
    g71 = v1 & 0xffffffff;
    switch ((int32_t)v1) {
        case 0: {
            int64_t v2 = *(int64_t *)(a6 + 72); // 0x402b50
            if (v2 != 0) {
                // 0x402b5d
                function_402ab0(a1, a2, v2);
                // 0x402b68
                return 0;
            }
          lab_0x402b59:
            // 0x402b5d
            function_402ab0(a1, a2, *(int64_t *)(a6 + 8));
            // 0x402b68
            return 0;
        }
        case 1: {
            // 0x402b88
            if (a6 == 0x28cd3d45) {
                // 0x402c40
                function_402a70(a1, a2, (char *)(int64_t)"cramfs");
                // 0x402b68
                return 0;
            }
            int64_t v3; // 0x402b30
            if (a6 > 0x28cd3d45) {
                // 0x402b9e
                if (a6 == 0x65735543) {
                    // 0x402c40
                    function_402a70(a1, a2, (char *)(int64_t)"fusectl");
                    // 0x402b68
                    return 0;
                }
                if (a6 > 0x65735543) {
                    // 0x402bb1
                    if (a6 == 0x858458f6) {
                        // 0x402c40
                        function_402a70(a1, a2, (char *)(int64_t)"ramfs");
                        // 0x402b68
                        return 0;
                    }
                    if (a6 > 0x858458f6) {
                        // 0x402bc5
                        if (a6 == 0xc97e8168) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"logfs");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0xc97e8168) {
                            // 0x402bd9
                            if (a6 == 0xf97cff8c) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"selinux");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0xf97cff8c) {
                                // 0x402ce0
                                v3 = (int64_t)"smb2";
                                switch (a6) {
                                    case 0xfe534d42: {
                                        goto lab_0x402c40;
                                    }
                                    case 0xff534d42: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"cifs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402d07
                                        if (a6 == 0xf995e849) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"hpfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                      lab_0x402c1d:
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x402bed
                                v3 = (int64_t)"efivarfs";
                                switch (a6) {
                                    case 0xde5e81e4: {
                                        goto lab_0x402c40;
                                    }
                                    case 0xf2f52010: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"f2fs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    case 0xcafe4a11: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"bpf_fs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        } else {
                            // 0x402d48
                            if (a6 == 0xaad7aaea) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"panfs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0xaad7aaea) {
                                // 0x402da0
                                v3 = (int64_t)"vmhgfs";
                                switch (a6) {
                                    case 0xbacbacbc: {
                                        goto lab_0x402c40;
                                    }
                                    case 0xbeefdead: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"snfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402dc7
                                        if (a6 == 0xabba1974) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"xenfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x402d59
                                v3 = (int64_t)"hugetlbfs";
                                switch (a6) {
                                    case 0x958458f6: {
                                        goto lab_0x402c40;
                                    }
                                    case 0xa501fcf5: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"vxfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402d81
                                        if (a6 == 0x9123683e) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"btrfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x4031f0
                        if (a6 == 0x73636673) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"securityfs");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0x73636673) {
                            // 0x403203
                            if (a6 == 0x7461636f) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"ocfs2");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x7461636f) {
                                // 0x403250
                                v3 = (int64_t)"overlayfs";
                                switch (a6) {
                                    case 0x794c7630: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x7c7c6673: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"prl_fs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403274
                                        if (a6 == 0x74726163) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"tracefs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x403212
                                v3 = (int64_t)"btrfs_test";
                                switch (a6) {
                                    case 0x73727279: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x73757245: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"coda");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403236
                                        if (a6 == 0x73717368) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"squashfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x403290
                            if (a6 == 0x68191122) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"qnx6");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x68191122) {
                                // 0x4032a3
                                v3 = (int64_t)"nfsd";
                                switch (a6) {
                                    case 0x6e667364: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x6e736673: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"nsfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x4032c7
                                        if (a6 == 0x6b414653) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"k-afs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x403520
                                v3 = (int64_t)"fuseblk";
                                switch (a6) {
                                    case 0x65735546: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x67596969: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"rpc_pipefs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    // 0x4030a0
                    if (a6 == 0x534f434b) {
                        // 0x402c40
                        function_402a70(a1, a2, (char *)(int64_t)"sockfs");
                        // 0x402b68
                        return 0;
                    }
                    if (a6 > 0x534f434b) {
                        // 0x403110
                        if (a6 == 0x6165676c) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"pstorefs");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0x6165676c) {
                            // 0x403123
                            if (a6 == 0x62656572) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"sysfs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x62656572) {
                                // 0x403170
                                v3 = (int64_t)"debugfs";
                                switch (a6) {
                                    case 0x64626720: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x64646178: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"daxfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403194
                                        if (a6 == 0x63677270) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"cgroup2fs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x403132
                                v3 = (int64_t)"bdevfs";
                                switch (a6) {
                                    case 0x62646576: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x62656570: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"configfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403156
                                        if (a6 == 0x61756673) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"aufs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x403330
                            if (a6 == 0x58295829) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"zsmallocfs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x58295829) {
                                // 0x403343
                                v3 = (int64_t)"aafs";
                                switch (a6) {
                                    case 0x5a3c69f0: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x61636673: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"acfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403367
                                        if (a6 == 0x58465342) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"xfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x4035e0
                                v3 = (int64_t)"ufs";
                                switch (a6) {
                                    case 0x54190100: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x565a4653: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"vzfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x4030af
                        if (a6 == 0x453dcd28) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"cramfs-wend");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0x453dcd28) {
                            // 0x4030c2
                            if (a6 == 0x5346314d) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"m1fs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x5346314d) {
                                // 0x4031b0
                                v3 = (int64_t)"wslfs";
                                switch (a6) {
                                    case 0x53464846: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x5346544e: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"ntfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x4031d4
                                        if (a6 == 0x5346414f) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"afs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x4030d5
                                v3 = (int64_t)"pipefs";
                                switch (a6) {
                                    case 0x50495045: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x52654973: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"reiserfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x4030f9
                                        if (a6 == 0x47504653) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"gpfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x4032e0
                            if (a6 == 0x3153464a) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"jfs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x3153464a) {
                                // 0x4032f3
                                v3 = (int64_t)"binfmt_misc";
                                switch (a6) {
                                    case 0x42494e4d: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x43415d53: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"smackfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403317
                                        if (a6 == 0x42465331) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"befs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x4034f0
                                v3 = (int64_t)"inotifyfs";
                                switch (a6) {
                                    case 0x2bad1dea: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x2fc12fc1: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"zfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                // 0x402de0
                if (a6 == 0xadf5) {
                    // 0x402c40
                    function_402a70(a1, a2, (char *)(int64_t)"adfs");
                    // 0x402b68
                    return 0;
                }
                if (a6 > 0xadf5) {
                    // 0x402df3
                    if (a6 == 0x12ff7b5) {
                        // 0x402c40
                        function_402a70(a1, a2, (char *)(int64_t)"sysv4");
                        // 0x402b68
                        return 0;
                    }
                    if (a6 > 0x12ff7b5) {
                        // 0x402e68
                        if (a6 == 0xbd00bd0) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"lustre");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0xbd00bd0) {
                            // 0x402e7b
                            if (a6 == 0x19800202) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"mqueue");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x19800202) {
                                // 0x402ec8
                                v3 = (int64_t)"bfs";
                                switch (a6) {
                                    case 0x1badface: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x24051905: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"ubifs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402eec
                                        if (a6 == 0x19830326) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"fhgfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x402e8a
                                v3 = (int64_t)"balloon-kvm-fs";
                                switch (a6) {
                                    case 0x13661366: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x15013346: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"udf");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402eae
                                        if (a6 == 0x11307854) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"inodefs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x403470
                            if (a6 == 0x13111a8) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"ibrix");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x13111a8) {
                                // 0x40347f
                                v3 = (int64_t)"anon-inode FS";
                                switch (a6) {
                                    case 0x9041934: {
                                        goto lab_0x402c40;
                                    }
                                    case 0xbad1dea: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"futexfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x4034a3
                                        if (a6 == 0x7655821) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"rdt");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x4034c0
                                v3 = (int64_t)"sysv2";
                                switch (a6) {
                                    case 0x12ff7b6: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x12ff7b7: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"coh");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x402e02
                        if (a6 == (int64_t)&g17) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"efs");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > (int64_t)&g17) {
                            // 0x402e15
                            if (a6 == 0x1021997) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"v9fs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x1021997) {
                                // 0x402f08
                                v3 = (int64_t)"xia";
                                switch (a6) {
                                    case 0x12fd16d: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x12ff7b4: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"xenix");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402f2c
                                        if (a6 == 0x1161970) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"gfs/gfs2");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x402e28
                                v3 = (int64_t)"ceph";
                                switch (a6) {
                                    case 0xc36400: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x1021994: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"tmpfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402e4c
                                        if (a6 == 0xc0ffee) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"hostfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x403420
                            if (a6 == 0xef53) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"ext2/ext3");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0xef53) {
                                // 0x403433
                                v3 = (int64_t)"ufs";
                                switch (a6) {
                                    case 0x11954: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x27e0eb: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"cgroupfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403457
                                        if (a6 == 0xf15f) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"ecryptfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x403550
                                v3 = (int64_t)"affs";
                                switch (a6) {
                                    case 0xadff: {
                                        goto lab_0x402c40;
                                    }
                                    case 0xef51: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"ext2");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    // 0x402f48
                    if (a6 == 0x4244) {
                        // 0x402c40
                        function_402a70(a1, a2, (char *)(int64_t)"hfs");
                        // 0x402b68
                        return 0;
                    }
                    if (a6 > 0x4244) {
                        // 0x402fc0
                        if (a6 == 0x5df5) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"exofs");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0x5df5) {
                            // 0x402fd3
                            if (a6 == 0x9660) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"isofs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x9660) {
                                // 0x403020
                                v3 = (int64_t)"openprom";
                                switch (a6) {
                                    case 0x9fa1: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x9fa2: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"usbdevfs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403044
                                        if (a6 == 0x9fa0) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"proc");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x402fe2
                                v3 = (int64_t)"romfs";
                                switch (a6) {
                                    case 0x7275: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x72b6: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"jffs2");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403006
                                        if (a6 == 0x6969) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"nfs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x4033d0
                            if (a6 == 0x4d44) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"msdos");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x4d44) {
                                // 0x4033e3
                                v3 = (int64_t)"smb";
                                switch (a6) {
                                    case 0x517b: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x564c: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"novell");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403407
                                        if (a6 == 0x4d5a) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"minix3");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x403580
                                v3 = (int64_t)"hfs+";
                                switch (a6) {
                                    case 0x482b: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x4858: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"hfsx");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x402f57
                        if (a6 == 0x138f) {
                            // 0x402c40
                            function_402a70(a1, a2, (char *)(int64_t)"minix (30 char.)");
                            // 0x402b68
                            return 0;
                        }
                        if (a6 > 0x138f) {
                            // 0x402f6a
                            if (a6 == 0x3434) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"nilfs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 0x3434) {
                                // 0x403060
                                v3 = (int64_t)"isofs";
                                switch (a6) {
                                    case 0x4004: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x4006: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"fat");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x403084
                                        if (a6 == 0x4000) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"isofs");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x402f7d
                                v3 = (int64_t)"minix v2";
                                switch (a6) {
                                    case 0x2468: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x2478: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"minix v2 (30 char.)");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x402fa1
                                        if (a6 == 0x1cd1) {
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)(int64_t)"devpts");
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            }
                        } else {
                            // 0x403380
                            if (a6 == 1984) {
                                // 0x402c40
                                function_402a70(a1, a2, (char *)(int64_t)"jffs");
                                // 0x402b68
                                return 0;
                            }
                            if (a6 > 1984) {
                                // 0x403393
                                v3 = (int64_t)"ext";
                                switch (a6) {
                                    case 0x137d: {
                                        goto lab_0x402c40;
                                    }
                                    case 0x137f: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"minix");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        // 0x4033b7
                                        v3 = (int64_t)"devfs";
                                        if (a6 == 0x1373) {
                                          lab_0x402c40:
                                            // 0x402c40
                                            function_402a70(a1, a2, (char *)v3);
                                            // 0x402b68
                                            return 0;
                                        }
                                        // 0x402c1d
                                        __sprintf_chk((char *)&g44, 1, 29, "UNKNOWN (0x%lx)", (int32_t)a6);
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)&g44);
                                        // 0x402b68
                                        return 0;
                                    }
                                }
                            } else {
                                // 0x4035b0
                                v3 = (int64_t)"qnx4";
                                switch (a6) {
                                    case 47: {
                                        goto lab_0x402c40;
                                    }
                                    case 391: {
                                        // 0x402c40
                                        function_402a70(a1, a2, (char *)(int64_t)"autofs");
                                        // 0x402b68
                                        return 0;
                                    }
                                    default: {
                                        goto lab_0x402c1d;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        case 14: {
            // 0x402c50
            function_402af0(a1, a2, *(int64_t *)(a6 + 32));
            // 0x402b68
            return 0;
        }
        case 15: {
            // 0x402c60
            function_402af0(a1, a2, *(int64_t *)(a6 + 16));
            // 0x402b68
            return 0;
        }
        case 16: {
            // 0x402b5d
            function_402ab0(a1, a2, *(int64_t *)(a6 + 40));
            // 0x402b68
            return 0;
        }
        case 17: {
            // 0x402cd0
            function_402af0(a1, a2, *(int64_t *)(a6 + 48));
            // 0x402b68
            return 0;
        }
        case 19: {
            // 0x402c70
            function_402af0(a1, a2, *(int64_t *)(a6 + 24));
            // 0x402b68
            return 0;
        }
        case 22: {
            uint32_t v4 = *(int32_t *)(a6 + 56); // 0x402c80
            uint32_t v5 = *(int32_t *)(a6 + 60); // 0x402c84
            function_402a30(a1, a2, 0x100000000 * (int64_t)v4 | (int64_t)v5);
            // 0x402b68
            return 0;
        }
        case 25: {
            // 0x402ca0
            function_402ab0(a1, a2, *(int64_t *)(a6 + 64));
            // 0x402b68
            return 0;
        }
        case 27: {
            // 0x402cb0
            function_402a70(a1, a2, (char *)a5);
            // 0x402b68
            return 0;
        }
        case 32: {
            goto lab_0x402b59;
        }
        case 33: {
            // 0x402b78
            function_402a30(a1, a2, a6);
            // 0x402b68
            return 0;
        }
        default: {
            int64_t v6 = (int64_t)g35; // 0x402d20
            int64_t * v7 = (int64_t *)(v6 + 40); // 0x402d27
            uint64_t v8 = *v7; // 0x402d27
            if (v8 >= *(int64_t *)(v6 + 48)) {
                // 0x40370a
                __overflow(g35, 63);
            } else {
                // 0x402d35
                *v7 = v8 + 1;
                *(char *)v8 = 63;
            }
            // 0x402b68
            return 0;
        }
    }
}
// Address range: 0x4037b0 - 0x403d69
int64_t function_4037b0(int64_t str, int64_t * a2, int64_t a3, int64_t a4, int64_t * a5) {
    int64_t v1 = (int64_t)strlen((char *)str) + 3; // 0x4037d9
    int64_t v2 = function_409560(v1); // 0x4037dd
    char v3 = v1;
    int64_t * v4 = (int64_t *)v2;
    char result = 0; // 0x4037f1
    if (v3 == 0) {
      lab_0x4038c5_2:
        // 0x4038c5
        free(v4);
        fputs_unlocked(g23, g35);
        return result;
    }
    char v5 = 0;
    char v6 = v3; // 0x403826
    int64_t v7 = str; // 0x4037b0
    int64_t v8; // 0x4037b0
    int64_t v9; // 0x4037b0
    int64_t v10; // 0x4037b0
    int64_t v11; // 0x4037b0
    int64_t v12; // 0x4037b0
    int64_t v13; // 0x4037b0
    char v14; // 0x4037b0
    char v15; // 0x4037b0
    char v16; // 0x4037b0
    int64_t v17; // 0x4037b0
    char v18; // 0x403850
    int64_t v19; // 0x4039ed
    int64_t v20; // 0x4039f8
    int64_t str2; // 0x403833
    while (true) {
      lab_0x403833:
        // 0x403833
        v16 = v5;
        v11 = v7;
        unsigned char v21 = v6;
        str2 = v11 + 1;
        while (v21 != 37) {
            if (v21 != 92) {
                int64_t v22 = (int64_t)g35; // 0x403800
                int64_t * v23 = (int64_t *)(v22 + 40); // 0x403807
                uint64_t v24 = *v23; // 0x403807
                if (v24 >= *(int64_t *)(v22 + 48)) {
                    // 0x403ac8
                    __overflow(g35, (int32_t)v21);
                    v15 = v16;
                    v13 = v11;
                    v7 = str2;
                    goto lab_0x403826;
                } else {
                    // 0x403815
                    *v23 = v24 + 1;
                    *(char *)v24 = v21;
                    v15 = v16;
                    v13 = v11;
                    v7 = str2;
                    goto lab_0x403826;
                }
            }
            // 0x403847
            if (g47 != 0) {
                // 0x403850
                v18 = *(char *)str2;
                if ((v18 & -8) == 48) {
                    int64_t v25 = v11 + 2; // 0x403a60
                    char v26 = *(char *)v25; // 0x403a60
                    int64_t v27 = (int64_t)v18 + 0xffffffd0 & 0xffffffff; // 0x403a69
                    v8 = v27;
                    v12 = v25;
                    if ((v26 & -8) == 48) {
                        int64_t v28 = 8 * v27 + 0xffffffd0 + (int64_t)v26 & 0xffffffff; // 0x403a79
                        int64_t v29 = v11 + 3; // 0x403a7e
                        char v30 = *(char *)v29; // 0x403a7e
                        v8 = v28;
                        v12 = v29;
                        if ((v30 & -8) == 48) {
                            // 0x403a8f
                            v8 = 8 * v28 + 0xffffffd0 + (int64_t)v30 & 0xffffffff;
                            v12 = v11 + 4;
                            goto lab_0x403a98;
                        } else {
                            goto lab_0x403a98;
                        }
                    } else {
                        goto lab_0x403a98;
                    }
                }
                if (v18 == 120) {
                    int16_t ** v31 = __ctype_b_loc(); // 0x4039e8
                    v19 = v11 + 2;
                    unsigned char v32 = *(char *)v19; // 0x4039ed
                    v20 = (int64_t)*v31 + 1;
                    v9 = 120;
                    if ((*(char *)(v20 + 2 * (int64_t)v32) & 16) != 0) {
                        int64_t v33 = v32; // 0x403ae3
                        if (v32 < 103) {
                            // 0x403b85
                            v17 = v33 + 0xffffffa9;
                            goto lab_0x403b00;
                        } else {
                            // 0x403af0
                            v17 = (v32 < 71 ? 0xffffffc9 : 0xffffffd0) + v33;
                            goto lab_0x403b00;
                        }
                    } else {
                        goto lab_0x403a09;
                    }
                }
                if (v18 != 0) {
                    int64_t v34 = v18; // 0x4039d3
                    g66 = v18 - 34;
                    v9 = v34;
                    v14 = v18;
                    v10 = v34;
                    switch (v18) {
                        case 34: {
                            goto lab_0x403a30;
                        }
                        case 92: {
                            goto lab_0x403a30;
                        }
                        case 97: {
                            // 0x403b8d
                            v14 = 7;
                            v10 = 7;
                            goto lab_0x403a30;
                        }
                        case 98: {
                            // 0x403b9d
                            v14 = 8;
                            v10 = 8;
                            goto lab_0x403a30;
                        }
                        case 101: {
                            // 0x403bad
                            v14 = 27;
                            v10 = 27;
                            goto lab_0x403a30;
                        }
                        case 102: {
                            // 0x403bbd
                            v14 = 12;
                            v10 = 12;
                            goto lab_0x403a30;
                        }
                        case 110: {
                            // 0x403bcd
                            v14 = 10;
                            v10 = 10;
                            goto lab_0x403a30;
                        }
                        case 114: {
                            // 0x403bdd
                            v14 = 13;
                            v10 = 13;
                            goto lab_0x403a30;
                        }
                        case 116: {
                            // 0x403bed
                            v14 = 9;
                            v10 = 9;
                            goto lab_0x403a30;
                        }
                        case 118: {
                            // 0x403bfd
                            v14 = 11;
                            v10 = 11;
                            goto lab_0x403a30;
                        }
                        default: {
                            goto lab_0x403a09;
                        }
                    }
                }
                // 0x403873
                error(0, (int32_t)"warning: backslash at end of format" ^ (int32_t)"warning: backslash at end of format", dcgettext(NULL, "warning: backslash at end of format", 5));
            }
            int64_t v35 = (int64_t)g35; // 0x403892
            int64_t * v36 = (int64_t *)(v35 + 40); // 0x403899
            uint64_t v37 = *v36; // 0x403899
            if (v37 >= *(int64_t *)(v35 + 48)) {
                // 0x403b70
                __overflow(g35, 92);
                v15 = v16;
                v13 = v11;
                v7 = str2;
                goto lab_0x403826;
            }
            // 0x4038a7
            *v36 = v37 + 1;
            *(char *)v37 = 92;
            char v38 = *(char *)str2; // 0x4038b8
            result = v16;
            if (v38 == 0) {
                goto lab_0x4038c5_2;
            }
            v11 = str2;
            v21 = v38;
            str2 = v11 + 1;
        }
        int64_t str3 = str2 + (int64_t)strspn((char *)str2, "'-+ #0I"); // 0x40390a
        int64_t v39 = str3 + (int64_t)strspn((char *)str3, "0123456789"); // 0x403917
        char v40 = *(char *)v39; // 0x40391a
        int64_t v41 = v39; // 0x403923
        char v42 = v40; // 0x403923
        if (v40 == 46) {
            int64_t str4 = v39 + 1; // 0x403925
            v41 = str4 + (int64_t)strspn((char *)str4, "0123456789");
            v42 = *(char *)v41;
        }
        int64_t v43 = v41;
        int64_t v44 = v43 - str2; // 0x403946
        memcpy(v4, (int64_t *)v11, (int32_t)(v44 + 1));
        int64_t v45 = v43; // 0x4037b0
        switch (v42) {
            case 0: {
                // 0x403990
                v45 = v43 - 1;
            }
            case 37: {
                if (v44 != 0) {
                    // break -> 0x403c5f
                    break;
                }
                int64_t v46 = v45;
                int64_t v47 = (int64_t)g35; // 0x40399d
                int64_t v48 = v46 + 1; // 0x4039a4
                int64_t * v49 = (int64_t *)(v47 + 40); // 0x4039a8
                uint64_t v50 = *v49; // 0x4039a8
                if (v50 >= *(int64_t *)(v47 + 48)) {
                    // 0x403b60
                    __overflow(g35, 37);
                    v15 = v16;
                    v13 = v46;
                    v7 = v48;
                } else {
                    // 0x4039b6
                    *v49 = v50 + 1;
                    *(char *)v50 = 37;
                    v15 = v16;
                    v13 = v46;
                    v7 = v48;
                }
                // break -> 0x403826
                break;
            }
            default: {
                // 0x403963
                v15 = v16 | (char)a4;
                v13 = v43;
                v7 = v43 + 1;
                // break -> 0x403826
                break;
            }
        }
        goto lab_0x403826;
    }
    int64_t v51; // 0x403ca9
    if (v51 == 0) {
        // branch -> 0x403cbe
    }
    int64_t v52; // 0x403ccb
    if (v52 == 0) {
        // 0x403d08
    }
  lab_0x403826:
    // 0x403826
    v5 = v15;
    v6 = *(char *)(v13 + 1);
    result = v5;
    if (v6 == 0) {
        goto lab_0x4038c5_2;
    }
    goto lab_0x403833;
  lab_0x403a98:;
    int64_t v53 = v8;
    int64_t v54 = (int64_t)g35; // 0x403a98
    int64_t * v55 = (int64_t *)(v54 + 40); // 0x403a9f
    uint64_t v56 = *v55; // 0x403a9f
    if (v56 >= *(int64_t *)(v54 + 48)) {
        // 0x403c32
        __overflow(g35, (int32_t)v53 % 256);
        goto lab_0x403ab8;
    } else {
        // 0x403aad
        *v55 = v56 + 1;
        *(char *)v56 = (char)v53;
        goto lab_0x403ab8;
    }
  lab_0x403ab8:
    // 0x403ab8
    v15 = v16;
    v13 = v12 - 1;
    v7 = v12;
    goto lab_0x403826;
  lab_0x403a09:
    // 0x403a09
    error(0, (int32_t)"warning: unrecognized escape '\\%c'" ^ (int32_t)"warning: unrecognized escape '\\%c'", dcgettext(NULL, "warning: unrecognized escape '\\%c'", 5));
    v14 = v18;
    v10 = v9;
    goto lab_0x403a30;
  lab_0x403a30:;
    int64_t v57 = (int64_t)g35; // 0x403a30
    int64_t v58 = v11 + 2; // 0x403a37
    int64_t * v59 = (int64_t *)(v57 + 40); // 0x403a3b
    uint64_t v60 = *v59; // 0x403a3b
    if (v60 >= *(int64_t *)(v57 + 48)) {
        // 0x403c21
        __overflow(g35, (int32_t)v10 % 256);
        v15 = v16;
        v13 = str2;
        v7 = v58;
        goto lab_0x403826;
    } else {
        // 0x403a49
        *v59 = v60 + 1;
        *(char *)v60 = v14;
        v15 = v16;
        v13 = str2;
        v7 = v58;
        goto lab_0x403826;
    }
  lab_0x403b00:;
    int64_t v61 = v17 & 0xffffffff;
    int64_t v62 = v11 + 3; // 0x403b00
    unsigned char v63 = *(char *)v62; // 0x403b00
    int64_t v64 = v61; // 0x403b11
    int64_t v65 = v19; // 0x403b11
    int64_t v66; // 0x4037b0
    if ((*(char *)(2 * (int64_t)v63 + v20) & 16) == 0) {
        goto lab_0x403b30;
    } else {
        int64_t v67 = v63; // 0x403b13
        if (v63 < 103) {
            // 0x403b2b
            v66 = v67 + 0xffffffa9;
            goto lab_0x403b2e;
        } else {
            // 0x403c0d
            v66 = (v63 < 71 ? 0xffffffc9 : 0xffffffd0) + v67;
            goto lab_0x403b2e;
        }
    }
  lab_0x403b30:;
    int64_t v68 = v65;
    int64_t v69 = v64;
    int64_t v70 = (int64_t)g35; // 0x403b30
    int64_t v71 = v68 + 1; // 0x403b37
    int64_t * v72 = (int64_t *)(v70 + 40); // 0x403b3b
    uint64_t v73 = *v72; // 0x403b3b
    if (v73 >= *(int64_t *)(v70 + 48)) {
        // 0x403c52
        __overflow(g35, (int32_t)v69 % 256);
        v15 = v16;
        v13 = v68;
        v7 = v71;
        goto lab_0x403826;
    } else {
        // 0x403b49
        *v72 = v73 + 1;
        *(char *)v73 = (char)v69;
        v15 = v16;
        v13 = v68;
        v7 = v71;
        goto lab_0x403826;
    }
  lab_0x403b2e:
    // 0x403b2e
    v64 = v66 + 16 * v61 & 0xffffffff;
    v65 = v62;
    goto lab_0x403b30;
}
// Address range: 0x403d70 - 0x403e7d
int64_t function_403d70(int64_t a1) {
    // 0x403d70
    if (g41 == 0) {
        int64_t v1 = function_40b0c0(0); // 0x403e32
        g40 = v1;
        if (v1 == 0) {
            // 0x403e4f
            error(0, *__errno_location(), "%s", dcgettext(NULL, "cannot read table of mounted file systems", 5));
        }
        // 0x403e43
        g41 = 1;
    }
    char * str = (char *)a1; // 0x403d96
    int64_t v2; // bp-312, 0x403d70
    if (__xstat(1, str, (struct stat *)&v2) != 0 || g40 == 0) {
        // 0x403e1a
        return 0;
    }
    // 0x403db9
    int64_t v3; // bp-168, 0x403d70
    int64_t result; // 0x403d70
    int64_t * v4; // 0x403d70
    char * v5; // 0x403dc2
    int64_t v6; // 0x403d70
    int32_t v7; // 0x403d70
    if (*(char *)(g40 + 40) % 2 != 0) {
        // 0x403dbf
        v4 = (int64_t *)g40;
        v5 = (char *)*v4;
        if (*v5 == 47) {
            // 0x403dc8
            if (strcmp((char *)*(int64_t *)(g40 + 8), str) == 0) {
                // 0x403dd8
                if (v6 == (int64_t)v7 == __xstat(1, v5, (struct stat *)&v3) == 0) {
                    // 0x403e00
                    if (v2 == v3) {
                        // 0x403e0e
                        result = *v4;
                        return result;
                    }
                }
            }
        }
    }
    int64_t v8 = *(int64_t *)(g40 + 48); // 0x403db0
    result = 0;
    while (v8 != 0) {
        int64_t v9 = v8;
        if (*(char *)(v9 + 40) % 2 != 0) {
            // 0x403dbf
            v4 = (int64_t *)v9;
            v5 = (char *)*v4;
            if (*v5 == 47) {
                // 0x403dc8
                if (strcmp((char *)*(int64_t *)(v9 + 8), str) == 0) {
                    // 0x403dd8
                    if (v6 == (int64_t)v7 == __xstat(1, v5, (struct stat *)&v3) == 0) {
                        // 0x403e00
                        if (v2 == v3) {
                            // 0x403e0e
                            result = *v4;
                            return result;
                        }
                    }
                }
            }
        }
        // 0x403db0
        v8 = *(int64_t *)(v9 + 48);
        result = 0;
    }
  lab_0x403e1a:
    // 0x403e1a
    return result;
}
// Address range: 0x403e80 - 0x403f85
int64_t function_403e80(int64_t a1, int64_t a2, int32_t a3) {
    // 0x403e80
    if ((char)a1 != 0) {
        if ((char)a2 != 0) {
            // 0x403e8e
            return function_409790("%n %i %l %t %s %S %b %f %a %c %d\n");
        }
        // 0x403e9c
        return function_409790(dcgettext(NULL, "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n", 5));
    }
    if ((char)a2 != 0) {
        // 0x403ebe
        return function_409790("%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
    }
    int64_t v1 = function_409790(dcgettext(NULL, "  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n", 5)); // 0x403ee2
    char * v2 = (char)a3 != 0 ? "Device: %Dh/%dd\tInode: %-10i  Links: %-5h Device type: %t,%T\n" : "Device: %Dh/%dd\tInode: %-10i  Links: %h\n"; // 0x403eff
    int64_t v3; // 0x403e80
    int64_t v4 = function_409820("%s%s", v1, (int64_t)dcgettext(NULL, v2, 5), v3, v3, v3); // 0x403f11
    free((int64_t *)v1);
    int64_t v5 = function_409820("%s%s", v4, (int64_t)dcgettext(NULL, "Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n", 5), v3, v3, v3); // 0x403f3f
    free((int64_t *)v4);
    int64_t result = function_409820("%s%s", v5, (int64_t)dcgettext(NULL, "Access: %x\nModify: %y\nChange: %z\n Birth: %w\n", 5), v3, v3, v3); // 0x403f6d
    free((int64_t *)v5);
    return result;
}
// Address range: 0x403f90 - 0x4042d8
int64_t function_403f90(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_40aed0(a1, 46, a2); // 0x403fb7
    int32_t v2 = 0; // 0x403fbf
    int64_t v3 = 0; // 0x403fbf
    int64_t v4 = a2; // 0x403fbf
    int64_t v5; // 0x403f90
    int64_t v6; // 0x403f90
    int64_t v7; // 0x403f90
    int64_t v8; // 0x403f90
    int64_t v9; // 0x403f90
    int64_t v10; // 0x403f90
    int64_t v11; // 0x403f90
    int32_t v12; // 0x403f90
    int64_t v13; // 0x403f90
    int32_t v14; // 0x403f90
    int32_t v15; // 0x403f90
    if (v1 == 0) {
        goto lab_0x404120;
    } else {
        // 0x403fc5
        *(char *)(a2 + a1) = 0;
        char * str = (char *)(v1 + 1); // 0x403fd0
        char v16 = *str; // 0x403fd0
        int64_t v17 = v1 - a1; // 0x403fd4
        if (v16 == 57 || (int32_t)v16 < 57) {
            int64_t str_as_l = strtol(str, NULL, 10); // 0x4040d8
            int64_t v18 = 0x100000000 * v17 >> 32; // 0x4040e2
            int64_t v19 = str_as_l - 0x7fffffff; // 0x4040e7
            int64_t v20 = v19 < 0 == (0x7ffffffe - str_as_l & str_as_l) < 0 == (v19 != 0) ? 0x7fffffff : str_as_l; // 0x4040ed
            int64_t v21 = v20 & 0xffffffff; // 0x4040f3
            v2 = 0;
            v3 = v21;
            v4 = v18;
            if ((int32_t)v20 == 0) {
                goto lab_0x404120;
            } else {
                char v22 = *(char *)(v1 - 1); // 0x4040fb
                v11 = v18;
                v8 = v21;
                v14 = 0;
                v9 = v21;
                v5 = v18;
                if (v22 == 57 || (int32_t)v22 < 57) {
                    goto lab_0x403ff9;
                } else {
                    goto lab_0x404117;
                }
            }
        } else {
            char v23 = *(char *)(v1 - 1); // 0x403fe3
            v11 = v17;
            v8 = 9;
            v15 = 0;
            v12 = 1;
            v10 = 9;
            v13 = 1;
            v6 = v17;
            v7 = a4;
            if (v23 == 57 || (int32_t)v23 < 57) {
                goto lab_0x403ff9;
            } else {
                goto lab_0x40414b;
            }
        }
    }
  lab_0x404120:;
    int64_t v24 = 1;
    int64_t v25 = (v3 & 0xffffffff) + 1; // 0x404133
    int64_t v26 = 10 * v24; // 0x404136
    int64_t v27 = v25; // 0x40413b
    while ((int32_t)v25 != 9) {
        // 0x404130
        v24 = v26 & 0xfffffffe;
        v25 = (v27 & 0xffffffff) + 1;
        v26 = 10 * v24;
        v27 = v25;
    }
    int64_t v28 = 0xa00000000 * v24 >> 32; // 0x404140
    v15 = v2;
    v12 = v26;
    v10 = v3;
    v13 = v28;
    v6 = v4;
    v7 = a4 / v28;
    goto lab_0x40414b;
  lab_0x40414b:;
    int64_t v29 = a3; // 0x40414e
    int64_t v30 = v7; // 0x40414e
    int64_t v31; // 0x403f90
    int64_t v32; // 0x403f90
    if (a3 < 0 == (a4 != 0)) {
        uint32_t v33 = 0x3b9aca00 / v12 - (int32_t)v7 + (int32_t)(a4 % v13 != 0); // 0x40420e
        int64_t v34 = v33; // 0x40420e
        int64_t v35 = (int64_t)(v33 != 0) + a3; // 0x404217
        v29 = v35;
        v30 = v34;
        if (v35 != 0) {
            goto lab_0x404159;
        } else {
            // 0x404225
            function_402980(a1, v6, "'-+ 0", ".0f");
            __asm_movsd(-0x4030000000000000);
            v31 = v34;
            v32 = __printf_chk(1, (char *)a1);
            goto lab_0x404169;
        }
    } else {
        goto lab_0x404159;
    }
  lab_0x404159:
    // 0x404159
    v31 = v30;
    v32 = function_402af0(a1, v6, v29);
    goto lab_0x404169;
  lab_0x403ff9:
    // 0x403ff9
    *(char *)v1 = 0;
    int64_t v49 = v1 - 1; // 0x404000
    char v50 = *(char *)(v1 - 2); // 0x404004
    int64_t v51 = v49; // 0x40400f
    while (v50 == 57 || (int32_t)v50 < 57) {
        // 0x404000
        v49 = v51 - 1;
        v50 = *(char *)(v51 - 2);
        v51 = v49;
    }
    char * str2 = (char *)v49; // 0x404020
    int64_t str_as_l2 = strtol(str2, NULL, 10); // 0x404020
    int64_t v52 = str_as_l2 - 0x7fffffff; // 0x40402f
    uint64_t v53 = v52 < 0 == (0x7ffffffe - str_as_l2 & str_as_l2) < 0 == (v52 != 0) ? 0x7fffffff : str_as_l2; // 0x404035
    int32_t v45 = v53; // 0x40403c
    v14 = v45;
    v9 = v8;
    v5 = v11;
    int64_t v47; // 0x403f90
    int64_t v48; // 0x404079
    int64_t v46; // 0x404290
    if (v45 < 2) {
        goto lab_0x404117;
    } else {
        uint64_t v54 = v49 + (int64_t)(*str2 == 48); // 0x404055
        uint64_t v55 = (int64_t)g45; // 0x404058
        int64_t v56 = v54 - a1; // 0x404062
        v14 = v45;
        v9 = v8;
        v5 = v56;
        if (v53 > v55) {
            int64_t v57 = v53 - v55; // 0x40406e
            v14 = v45;
            v9 = v8;
            v5 = v56;
            if ((int32_t)v57 < 2) {
                goto lab_0x404117;
            } else {
                // 0x404079
                v48 = (v57 & 0xffffffff) - v8;
                v14 = v45;
                v9 = v8;
                v5 = v56;
                if ((int32_t)v48 < 2) {
                    goto lab_0x404117;
                } else {
                    // 0x404084
                    v47 = a1;
                    v46 = 0;
                    if (v54 <= a1) {
                        goto lab_0x40429c;
                    } else {
                        char v58 = *(char *)a1; // 0x4040b3
                        int64_t v59 = 1; // 0x4040b9
                        int64_t v60 = a1; // 0x4040b9
                        if (v58 != 45) {
                            // 0x4040a0
                            v59 = 0;
                            *(char *)a1 = v58;
                            v60 = a1 + 1;
                        }
                        int64_t v61 = v60;
                        int64_t v62 = v59;
                        int64_t v63 = a1 + 1; // 0x4040a6
                        int64_t v64 = v63; // 0x4040ad
                        while (v54 != v63) {
                            int64_t v65 = v61;
                            v58 = *(char *)v64;
                            v59 = 1;
                            v60 = v65;
                            if (v58 != 45) {
                                // 0x4040a0
                                v59 = v62;
                                *(char *)v65 = v58;
                                v60 = v65 + 1;
                            }
                            // 0x4040a6
                            v61 = v60;
                            v62 = v59;
                            v63 = v64 + 1;
                            v64 = v63;
                        }
                        // 0x40428d
                        v46 = v61 - a1;
                        v14 = v45;
                        v9 = v8;
                        v5 = v46;
                        v47 = v61;
                        if ((char)v62 != 0) {
                            goto lab_0x404117;
                        } else {
                            goto lab_0x40429c;
                        }
                    }
                }
            }
        } else {
            goto lab_0x404117;
        }
    }
  lab_0x404169:;
    int64_t result = v32;
    int32_t v36 = v10; // 0x404169
    if (v36 == 0) {
        // 0x4041cc
        return result;
    }
    int32_t v37 = v36 - 9; // 0x40416d
    uint64_t v38 = (int64_t)v15; // 0x40417a
    int64_t v39 = v37 == 0 | v37 < 0 != (8 - v36 & v36) < 0 ? v10 & 0xffffffff : 9; // 0x40417e
    uint64_t v40 = (int32_t)result < 0 ? 0 : result & 0xffffffff; // 0x404185
    int64_t v41 = 0; // 0x40418d
    if (v40 < v38) {
        int64_t v42 = v38 - v40; // 0x404192
        int32_t v43 = g45; // 0x404195
        int64_t v44 = 0x100000000 * v42 >> 32 > (int64_t)v43 ? (int64_t)((int32_t)v42 - (int32_t)v39 - v43) : 0; // 0x4041a8
        v41 = v44;
    }
    int64_t result2 = v10 - v39 & 0xffffffff; // 0x404181
    __printf_chk(1, "%s%.*d%-*.*d", g46, v39, v31 & 0xffffffff, v41, result2, 0);
    // 0x4041cc
    return result2;
  lab_0x404117:
    // 0x404117
    v2 = v14;
    v3 = v9;
    v4 = v5;
    v15 = v14;
    v12 = 1;
    v10 = v9;
    v13 = 1;
    v6 = v5;
    v7 = a4;
    if ((int32_t)v9 > 8) {
        goto lab_0x40414b;
    } else {
        goto lab_0x404120;
    }
  lab_0x40429c:
    // 0x40429c
    v14 = v45;
    v9 = v8;
    v5 = v46 + (int64_t)__sprintf_chk((char *)v47, 1, -1, "%d", v48 & 0xffffffff);
    goto lab_0x404117;
}
// Address range: 0x4042e0 - 0x404867
int64_t function_4042e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3 + 0xffffffbf; // 0x4042e2
    g72 = v1 & 0xffffffff;
    int64_t v2 = (int64_t)"-"; // 0x4042fe
    int64_t v3; // 0x4042e0
    int64_t v4; // 0x4042e0
    int64_t v5; // 0x4042e0
    int64_t v6; // 0x4042e0
    int64_t v7; // 0x4042e0
    int64_t v8; // 0x4042e0
    switch ((int32_t)v1) {
        case 0: {
            // 0x404730
            function_4059b0(a6);
            *(char *)&g43 = 0;
            function_402a70(a1, a2, (char *)&g42);
            // 0x404325
            return 0;
        }
        case 1: {
            // 0x404718
            function_402ab0(a1, a2, 512);
            // 0x404325
            return 0;
        }
        case 2: {
            int32_t * err_num = __errno_location(); // 0x4046a4
            *err_num = 95;
            function_408cc0(4, a5);
            error(0, *err_num, dcgettext(NULL, "failed to get security context of %s", 5));
            *(int16_t *)(a2 + a1) = 115;
            __printf_chk(1, (char *)a1);
            // 0x404325
            return 1;
        }
        case 3: {
            // 0x404690
            function_402a30(a1, a2, a6);
            // 0x404325
            return 0;
        }
        case 5: {
          lab_0x404680:
            // 0x404315
            function_402a70(a1, a2, (char *)function_405740(a6));
            // 0x404325
            return 0;
        }
        case 6: {
            struct group * v9 = getgrgid(*(int32_t *)(a6 + 32)); // 0x404664
            v4 = (int64_t)v9;
            if (v9 == NULL) {
                // 0x40435d
                function_402a70(a1, a2, (char *)(int64_t)"UNKNOWN");
                // 0x404325
                return 0;
            }
            goto lab_0x4045a7;
        }
        case 13: {
            int64_t v10 = function_4088a0(0); // 0x4045d5
            function_402a70(a1, a2, (char *)function_408cc0(v10 & 0xffffffff, a5));
            if ((*(int32_t *)(a6 + 24) & 0xf000) != 0xa000) {
                // 0x404325
                return 0;
            }
            int64_t v11 = function_405090(a5, *(int64_t *)(a6 + 48)); // 0x40461a
            if (v11 == 0) {
                // 0x404819
                function_408cc0(4, a5);
                error(0, *__errno_location(), dcgettext(NULL, "cannot read symbolic link %s", 5));
                // 0x404325
                return 1;
            }
            // 0x40462f
            __printf_chk(1, " -> ");
            int64_t v12 = function_408cc0(function_4088a0(0) & 0xffffffff, v11); // 0x40464c
            v5 = 0;
            v3 = v11;
            v7 = v12;
            goto lab_0x404480;
        }
        case 19: {
            uint64_t v13 = *(int64_t *)(a6 + 40); // 0x4045b0
            v6 = v13 % 256;
            v8 = v13 / 0x1000 & 0xfffffffffff00;
            goto lab_0x4043a0;
        }
        case 20: {
            struct passwd * v14 = getpwuid(*(int32_t *)(a6 + 28)); // 0x404594
            v2 = (int64_t)"UNKNOWN";
            v4 = (int64_t)v14;
            if (v14 == NULL) {
              lab_0x40435d:
                // 0x40435d
                function_402a70(a1, a2, (char *)v2);
                // 0x404325
                return 0;
            }
            goto lab_0x4045a7;
        }
        case 22: {
            // 0x404580
            function_403f90(a1, a2, 0, 0, a5, a6);
            // 0x404325
            return 0;
        }
        case 23: {
            // 0x404568
            function_403f90(a1, a2, *(int64_t *)(a6 + 72), *(int64_t *)(a6 + 80), a5, a6);
            // 0x404325
            return 0;
        }
        case 24: {
            // 0x404550
            function_403f90(a1, a2, *(int64_t *)(a6 + 88), *(int64_t *)(a6 + 96), a5, a6);
            // 0x404325
            return 0;
        }
        case 25: {
            // 0x404538
            function_403f90(a1, a2, *(int64_t *)(a6 + 104), *(int64_t *)(a6 + 112), a5, a6);
            // 0x404325
            return 0;
        }
        case 32: {
            // 0x404500
            function_402980(a1, a2, "-#0", "lo");
            __printf_chk(1, (char *)a1);
            // 0x404325
            return 0;
        }
        case 33: {
            // 0x4044f0
            function_402ab0(a1, a2, *(int64_t *)(a6 + 64));
            // 0x404325
            return 0;
        }
        case 35: {
            // 0x4044e0
            function_402ab0(a1, a2, a6);
            // 0x404325
            return 0;
        }
        case 37: {
            // 0x4044d0
            function_402a30(a1, a2, (int64_t)*(int32_t *)(a6 + 24));
            // 0x404325
            return 0;
        }
        case 38: {
            // 0x4044c0
            function_402ab0(a1, a2, (int64_t)*(int32_t *)(a6 + 32));
            // 0x404325
            return 0;
        }
        case 39: {
            // 0x4044b0
            function_402ab0(a1, a2, *(int64_t *)(a6 + 16));
            // 0x404325
            return 0;
        }
        case 40: {
            // 0x4044a0
            function_402ab0(a1, a2, *(int64_t *)(a6 + 8));
            // 0x404325
            return 0;
        }
        case 44: {
            // 0x404410
            if (g48 != 0) {
                goto lab_0x40442d;
            } else {
                // 0x404419
                if ((*(int32_t *)(a6 + 24) & 0xf000) == 0xa000) {
                    goto lab_0x404790;
                } else {
                    goto lab_0x40442d;
                }
            }
        }
        case 45: {
            // 0x404400
            function_402a70(a1, a2, (char *)a5);
            // 0x404325
            return 0;
        }
        case 46: {
            int64_t v15 = *(int64_t *)(a6 + 56); // 0x4043da
            function_402ab0(a1, a2, v15 < 0x2000000000000001 ? v15 : 512);
            // 0x404325
            return 0;
        }
        case 50: {
            // 0x4043b8
            function_402af0(a1, a2, *(int64_t *)(a6 + 48));
            // 0x404325
            return 0;
        }
        case 51: {
            uint64_t v16 = *(int64_t *)(a6 + 40); // 0x404380
            v6 = v16 / 256 % 0x1000;
            v8 = v16 / 0x100000000 & 0xfffff000;
            goto lab_0x4043a0;
        }
        case 52: {
            // 0x404370
            function_402ab0(a1, a2, (int64_t)*(int32_t *)(a6 + 28));
            // 0x404325
            return 0;
        }
        case 54: {
            goto lab_0x40435d;
        }
        case 55: {
            goto lab_0x404680;
        }
        case 56: {
            goto lab_0x404680;
        }
        case 57: {
            goto lab_0x404680;
        }
        default: {
            int64_t v17 = (int64_t)g35; // 0x404760
            int64_t * v18 = (int64_t *)(v17 + 40); // 0x404767
            uint64_t v19 = *v18; // 0x404767
            if (v19 >= *(int64_t *)(v17 + 48)) {
                // 0x404808
                __overflow(g35, 63);
            } else {
                // 0x404775
                *v18 = v19 + 1;
                *(char *)v19 = 63;
            }
            // 0x404325
            return 0;
        }
    }
  lab_0x4045a7:
    // 0x40435d
    function_402a70(a1, a2, (char *)*(int64_t *)v4);
    // 0x404325
    return 0;
  lab_0x404480:
    // 0x404480
    function_402a70(a1, a2, (char *)v7);
    free((int64_t *)v3);
    // 0x404325
    return v5 & 0xffffffff;
  lab_0x4043a0:
    // 0x4043a0
    function_402a30(a1, a2, v8 & 0xffffff00 | v6);
    // 0x404325
    return 0;
  lab_0x40442d:;
    char * v20 = canonicalize_file_name((char *)a5); // 0x404439
    int64_t v21 = (int64_t)v20; // 0x404439
    if (v20 == NULL) {
        // 0x4047be
        function_408cc0(4, a5);
        error(0, *__errno_location(), dcgettext(NULL, "failed to canonicalize %s", 5));
        v5 = 1;
        v3 = v21;
        v7 = (int64_t)&g1;
        goto lab_0x404480;
    } else {
        int64_t v22 = function_403d70(v21); // 0x404461
        free((int64_t *)v20);
        v5 = 0;
        v3 = 0;
        v7 = v22;
        if (v22 == 0) {
            goto lab_0x404790;
        } else {
            goto lab_0x404480;
        }
    }
  lab_0x404790:;
    int64_t v23 = function_404d10(a5, a6); // 0x404796
    v5 = 1;
    v3 = 0;
    v7 = (int64_t)&g1;
    if (v23 != 0) {
        int64_t v24 = function_403d70(v23); // 0x4047a6
        v5 = 0;
        v3 = v23;
        v7 = v24 == 0 ? v23 : v24;
    }
    goto lab_0x404480;
}
// Address range: 0x404870 - 0x404d0d
int64_t function_404870(int64_t a1) {
    int32_t status = a1; // 0x404886
    if (status != 0) {
        // 0x40488a
        __fprintf_chk(g37, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4048af
        exit(status);
        // UNREACHABLE
    }
    // 0x4048b6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Display file or file system status.\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "  -L, --dereference     follow links\n  -f, --file-system     display file system status instead of file status\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n                          output a newline after each use of FORMAT\n      --printf=FORMAT   like --format, but interpret backslash escapes,\n                          and do not output a mandatory trailing newline;\n                          if you want a newline, include \\n in FORMAT\n  -t, --terse           print the information in terse form\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "\nThe valid format sequences for files (without --file-system):\n\n  %a   access rights in octal (note '#' and '0' printf flags)\n  %A   access rights in human readable form\n  %b   number of blocks allocated (see %B)\n  %B   the size in bytes of each block reported by %b\n  %C   SELinux security context string\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "  %d   device number in decimal\n  %D   device number in hex\n  %f   raw mode in hex\n  %F   file type\n  %g   group ID of owner\n  %G   group name of owner\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "  %h   number of hard links\n  %i   inode number\n  %m   mount point\n  %n   file name\n  %N   quoted file name with dereference if symbolic link\n  %o   optimal I/O transfer size hint\n  %s   total size, in bytes\n  %t   major device type in hex, for character/block device special files\n  %T   minor device type in hex, for character/block device special files\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "  %u   user ID of owner\n  %U   user name of owner\n  %w   time of file birth, human-readable; - if unknown\n  %W   time of file birth, seconds since Epoch; 0 if unknown\n  %x   time of last access, human-readable\n  %X   time of last access, seconds since Epoch\n  %y   time of last data modification, human-readable\n  %Y   time of last data modification, seconds since Epoch\n  %z   time of last status change, human-readable\n  %Z   time of last status change, seconds since Epoch\n\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "Valid format sequences for file systems:\n\n  %a   free blocks available to non-superuser\n  %b   total data blocks in file system\n  %c   total file nodes in file system\n  %d   free file nodes in file system\n  %f   free blocks in file system\n", 5), g35);
    fputs_unlocked(dcgettext(NULL, "  %i   file system ID in hex\n  %l   maximum length of filenames\n  %n   file name\n  %s   block size (for faster transfers)\n  %S   fundamental block size (for block counts)\n  %t   file system type in hex\n  %T   file system type in human readable form\n", 5), g35);
    int128_t v1; // 0x404870
    int64_t v2 = v1; // 0x404a98
    int64_t v3 = v1; // 0x404a98
    int64_t v4; // 0x404870
    __printf_chk(1, dcgettext(NULL, "\n--terse is equivalent to the following FORMAT:\n    %s", 5), (int32_t *)"%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n", (char *)v4, v4, (float64_t)v2, (int32_t)v4, (float64_t)v3);
    __printf_chk(1, dcgettext(NULL, "--terse --file-system is equivalent to the following FORMAT:\n    %s", 5), (int32_t *)"%n %i %l %t %s %S %b %f %a %c %d\n", v4, v4, v4, (char *)v2, (char *)v3);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v5 = &g2; // bp-136, 0x404ae7
    bool v6; // 0x404870
    int64_t v7 = v6 ? -1 : 1;
    int64_t v8 = &v5;
    int64_t v9 = v8 + 16; // 0x404b70
    int64_t v10 = *(int64_t *)v9; // 0x404b74
    int64_t v11 = 5; // 0x404b7a
    while (v10 != 0) {
        int64_t v12 = (int64_t)"stat";
        int64_t v13 = v10;
        unsigned char v14 = *(char *)v12; // 0x404b86
        char v15 = *(char *)v13; // 0x404b86
        char v16 = v15; // 0x404b86
        bool v17 = false; // 0x404b86
        while (v14 == v15) {
            // 0x404b7c
            v11--;
            int64_t v18 = v13 + v7; // 0x404b86
            int64_t v19 = v12 + v7; // 0x404b86
            v16 = v14;
            v17 = true;
            if (v11 == 0) {
                // break -> 
                break;
            }
            v12 = v19;
            v13 = v18;
            v14 = *(char *)v12;
            v15 = *(char *)v13;
            v16 = v15;
            v17 = false;
        }
        unsigned char v20 = v16;
        if ((v14 >= v20 && !v17) == v14 < v20) {
            // break -> 0x404b92
            break;
        }
        v8 = v9;
        v9 = v8 + 16;
        v10 = *(int64_t *)v9;
        v11 = 5;
    }
    // 0x404b92
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v8 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x404ca4;
        } else {
            // 0x404c8e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404ce3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404bf4;
            } else {
                goto lab_0x404ca4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x404bf4;
        } else {
            // 0x404bda
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404ce3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404bf4;
            } else {
                goto lab_0x404bf4;
            }
        }
    }
  lab_0x404ca4:
    // 0x404ca4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404c34
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4048af
    exit(status);
    // UNREACHABLE
  lab_0x404bf4:
    // 0x404bf4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404c34
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4048af
    exit(status);
    // UNREACHABLE
}
// Address range: 0x404d10 - 0x405090
int64_t function_404d10(int64_t path, int64_t a2) {
    // 0x404d10
    int64_t v1; // bp-344, 0x404d10
    int64_t v2 = function_408f30(&v1); // 0x404d2f
    int32_t * err_num = __errno_location(); // 0x404d37
    if ((int32_t)v2 != 0) {
        // 0x405038
        error(0, *err_num, dcgettext(NULL, "cannot get current directory", 5));
        // 0x404f40
        return 0;
    }
    // 0x404d48
    int64_t v3; // 0x404d10
    int64_t result; // 0x404d10
    int64_t v4; // 0x404d10
    int64_t v5; // bp-328, 0x404d10
    if ((*(int32_t *)(a2 + 24) & 0xf000) == 0x4000) {
        int128_t v6 = __asm_movdqu(*(int128_t *)&v4); // 0x404f50
        int128_t v7 = __asm_movdqu(*(int128_t *)(a2 + 16)); // 0x404f54
        int128_t v8 = __asm_movdqu(*(int128_t *)(a2 + 32)); // 0x404f5c
        int128_t v9 = __asm_movdqu(*(int128_t *)(a2 + 48)); // 0x404f61
        v5 = __asm_movaps(v6);
        int128_t v10 = __asm_movdqu(*(int128_t *)(a2 + 64)); // 0x404f6d
        int128_t v11 = __asm_movdqu(*(int128_t *)(a2 + 80)); // 0x404f72
        __asm_movaps(v7);
        int128_t v12 = __asm_movdqu(*(int128_t *)(a2 + 96)); // 0x404f7e
        int128_t v13 = __asm_movdqu(*(int128_t *)(a2 + 112)); // 0x404f83
        int128_t v14 = __asm_movdqu(*(int128_t *)(a2 + 128)); // 0x404f88
        __asm_movaps(v8);
        __asm_movaps(v9);
        __asm_movaps(v10);
        __asm_movaps(v11);
        __asm_movaps(v12);
        __asm_movaps(v13);
        __asm_movaps(v14);
        int32_t v15 = chdir((char *)path); // 0x404fc1
        v4 = path;
        v3 = path;
        if (v15 >= 0) {
            goto lab_0x404eb7;
        } else {
            goto lab_0x404fd1;
        }
    } else {
        int64_t str = function_4055d0(); // 0x404d5e
        int32_t len = strlen((char *)str); // 0x404d69
        int64_t * v16 = (int64_t *)str; // 0x404d89
        int64_t * dest_mem = memcpy((int64_t *)((int64_t)&v1 + 15 - ((int64_t)len + 24 & -16) & -16), v16, len + 1); // 0x404d89
        int64_t v17 = (int64_t)dest_mem; // 0x404d89
        free(v16);
        if (chdir((char *)dest_mem) < 0) {
            // 0x405060
            v4 = v17;
            v3 = v17;
            goto lab_0x404fd1;
        } else {
            // 0x404da9
            if (__xstat(1, ".", (struct stat *)&v5) >= 0) {
                goto lab_0x404eb7;
            } else {
                // 0x404dc7
                function_408cc0(4, v17);
                error(0, *err_num, dcgettext(NULL, "cannot stat current directory (now %s)", 5));
                result = 0;
                goto lab_0x404f18;
            }
        }
    }
  lab_0x404eb7:;
    // 0x404eb7
    int128_t v18; // bp-184, 0x404d10
    int64_t v19; // 0x404d10
    if (__xstat(1, "..", (struct stat *)&v18) >= 0) {
        int64_t v20 = v5; // 0x404e08
        while (false && v20 == (int64_t)v18) {
            // 0x404e30
            if (chdir("..") < 0) {
                // 0x405010
                function_408cc0(4, (int64_t)"..");
                v19 = (int64_t)"cannot change to directory %s";
                goto lab_0x404ef1;
            }
            int128_t v21 = __asm_movdqa(0); // 0x404e42
            int128_t v22; // 0x404d10
            int128_t v23 = __asm_movdqa(v22); // 0x404e4a
            int128_t v24 = __asm_movdqa(v22); // 0x404e52
            int128_t v25 = __asm_movdqa(v22); // 0x404e5a
            v5 = __asm_movaps(v21);
            int128_t v26 = __asm_movdqa(v22); // 0x404e66
            int128_t v27 = __asm_movdqa(v22); // 0x404e6b
            int128_t v28 = __asm_movdqa(v22); // 0x404e70
            int128_t v29 = __asm_movdqa(v22); // 0x404e75
            __asm_movaps(v23);
            int128_t v30 = __asm_movdqa(v22); // 0x404e81
            __asm_movaps(v24);
            __asm_movaps(v25);
            __asm_movaps(v26);
            __asm_movaps(v27);
            __asm_movaps(v28);
            __asm_movaps(v29);
            __asm_movaps(v30);
            if (__xstat(1, "..", (struct stat *)&v18) < 0) {
                // 0x404ed5
                function_408cc0(4, (int64_t)"..");
                v19 = (int64_t)"cannot stat %s";
                goto lab_0x404ef1;
            }
            v20 = v5;
        }
        // 0x404f18
        int64_t v31; // 0x404d10
        result = v20 != (int64_t)v18 ? v20 : v31;
        goto lab_0x404f18;
    } else {
        // 0x404ed5
        function_408cc0(4, (int64_t)"..");
        v19 = (int64_t)"cannot stat %s";
        goto lab_0x404ef1;
    }
  lab_0x404fd1:
    // 0x404fd1
    function_408cc0(4, v3);
    error(0, *err_num, dcgettext(NULL, "cannot change to directory %s", 5));
    // 0x404f40
    return 0;
  lab_0x404f18:
    // 0x404f18
    if ((int32_t)function_408f80(&v1) != 0) {
        // 0x405068
        error(1, *err_num, dcgettext(NULL, "failed to return to initial working directory", 5));
        return &g65;
    }
    // 0x404f30
    function_408fa0(&v1);
    // 0x404f40
    return result;
  lab_0x404ef1:
    // 0x404ef1
    v4 = v19;
    error(0, *err_num, dcgettext(NULL, (char *)v19, 5));
    result = 0;
    goto lab_0x404f18;
}
// Address range: 0x405090 - 0x40517f
int64_t function_405090(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x4050c9
    int64_t * mem = malloc((int32_t)size); // 0x4050d3
    int64_t result = 0; // 0x4050de
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x4050e9
        if (v1 < 0) {
            // 0x405148
            if (*__errno_location() != 34) {
                // 0x405152
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x4050e9
        int64_t v3; // 0x405090
        if (buf_size > v2) {
            // 0x405160
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x4050fb
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x405108
            int64_t * mem2 = malloc((int32_t)size2); // 0x40510e
            if (mem2 == NULL) {
                // 0x40511b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x405148
                if (*__errno_location() != 34) {
                    // 0x405152
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x4050f6
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x405160
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x4050fb
            free(buf);
        }
        // 0x405130
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x405170
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x40511b_2:
    // 0x40511b
    return result;
}
// Address range: 0x405180 - 0x40518a
int64_t function_405180(void) {
    // 0x405180
    return function_404870(1);
}
// Address range: 0x405190 - 0x4052a6
int64_t function_405190(int64_t a1, char ** a2, int64_t * a3, int64_t n) {
    char * str = (char *)a1; // 0x4051b1
    int32_t len = strlen(str); // 0x4051b1
    if (a2 == NULL) {
        // 0x40527d
        return -1;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = -1;
    int64_t * str3 = (int64_t *)(v3 * n + v1);
    int32_t v4 = 0;
    int64_t v5 = 0; // 0x405217
    int64_t v6 = v1; // 0x405190
    int64_t v7 = v2; // 0x40521e
    int64_t str4; // 0x405190
    int64_t v8; // 0x405190
    int32_t v9; // 0x405190
    int32_t v10; // 0x405190
    int32_t v11; // 0x405190
    int64_t v12; // 0x405190
    int64_t result; // 0x405190
    int32_t v13; // 0x405213
    char * str2; // 0x405232
    while (true) {
        // 0x405227
        str4 = v6;
        v8 = v5;
        v10 = v4;
        str2 = (char *)v7;
        v9 = v10;
        if (strncmp(str2, str, len) == 0) {
            // 0x40523b
            result = v8;
            if (len == strlen(str2)) {
                // 0x40527d
                return result;
            }
            if (v3 == -1) {
                // break -> 0x40524f
                break;
            }
            // 0x4051e0
            v9 = 1;
            if (a3 != NULL) {
                // 0x4051ee
                v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                v9 = v13;
            }
        }
        // 0x405217
        v4 = v9;
        v5 = v8 + 1;
        v7 = *(int64_t *)(8 * v5 + v2);
        v6 = str4 + n;
        v12 = v3;
        v11 = v4;
        if (v7 == 0) {
            return (char)v11 == 0 ? v12 : -2;
        }
    }
    int64_t v14 = v8 + 1; // 0x405253
    int64_t v15 = *(int64_t *)(8 * v14 + v2); // 0x40525a
    v12 = v8;
    v11 = v10;
    while (v15 != 0) {
        // 0x405227
        v3 = v8;
        str3 = (int64_t *)(v3 * n + v1);
        v4 = v10;
        v5 = v14;
        v6 = str4 + n;
        v7 = v15;
        while (true) {
            // 0x405227
            str4 = v6;
            v8 = v5;
            v10 = v4;
            str2 = (char *)v7;
            v9 = v10;
            if (strncmp(str2, str, len) == 0) {
                // 0x40523b
                result = v8;
                if (len == strlen(str2)) {
                    // 0x40527d
                    return result;
                }
                if (v3 == -1) {
                    // break -> 0x40524f
                    break;
                }
                // 0x4051e0
                v9 = 1;
                if (a3 != NULL) {
                    // 0x4051ee
                    v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                    v9 = v13;
                }
            }
            // 0x405217
            v4 = v9;
            v5 = v8 + 1;
            v7 = *(int64_t *)(8 * v5 + v2);
            v6 = str4 + n;
            v12 = v3;
            v11 = v4;
            if (v7 == 0) {
                return (char)v11 == 0 ? v12 : -2;
            }
        }
        // 0x40524f
        v14 = v8 + 1;
        v15 = *(int64_t *)(8 * v14 + v2);
        v12 = v8;
        v11 = v10;
    }
  lab_0x405268:
    // 0x40527d
    return (char)v11 == 0 ? v12 : -2;
}
// Address range: 0x4052b0 - 0x405321
int64_t function_4052b0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x4052b0
    if (a3 == -1) {
        // 0x405310
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x4052c5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x4052d4
    function_408ef0(1, a1);
    function_408be0(0, 8, a2);
    error(0, 0, format);
    return &g65;
}
// Address range: 0x405330 - 0x405448
int64_t function_405330(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40535d
    fputs_unlocked(v1, g37);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x4053d0
        int64_t v5; // 0x4053d7
        int64_t v6; // 0x4053f7
        while (v3 != 0) {
            // 0x4053bb
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x405380
                break;
            }
            // 0x4053cd
            v4 = v3 + 1;
            v5 = function_408f10(v2);
            __fprintf_chk(g37, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x405400
                goto lab_0x405400;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x405383
        int64_t v8 = function_408f10(v2); // 0x40538d
        __fprintf_chk(g37, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x4053ad
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x4053bb
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x405380
                    break;
                }
                // 0x4053cd
                v4 = v3 + 1;
                v5 = function_408f10(v2);
                __fprintf_chk(g37, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x405400
                    goto lab_0x405400;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x405380
            v7 = v3 + 1;
            v8 = function_408f10(v2);
            __fprintf_chk(g37, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x405400:;
    int64_t v10 = (int64_t)g37; // 0x405400
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x405407
    uint64_t result = *v11; // 0x405407
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x405430
        return __overflow(g37, 10);
    }
    // 0x405411
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x405450 - 0x4054c0
int64_t function_405450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_405190(a2, (char **)a3, (int64_t *)a4, a5); // 0x40547c
    int64_t result = v1; // 0x405484
    if (v1 < 0) {
        // 0x405498
        function_4052b0(a1, a2, v1);
        function_405330(a3, a4, a5);
        result = -1;
    }
    // 0x405486
    return result;
}
// Address range: 0x4054c0 - 0x40550d
int64_t function_4054c0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x4054c0
    if (result == 0) {
        // 0x405501
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x4054f8
    int32_t n = a4; // 0x4054f8
    int64_t v1 = result; // 0x4054ff
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x405501
        return result;
    }
    int64_t str3 = str2; // 0x4054ff
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x4054e0
    int64_t result2 = 0; // 0x4054ed
    while (v2 != 0) {
        // 0x4054ef
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x405501
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x405501
    return result2;
}
// Address range: 0x405510 - 0x405518
int64_t function_405510(int64_t a1) {
    // 0x405510
    g50 = a1;
    int64_t result; // 0x405510
    return result;
}
// Address range: 0x405520 - 0x405528
int64_t function_405520(int64_t a1) {
    // 0x405520
    g49 = a1;
    int64_t result; // 0x405520
    return result;
}
// Address range: 0x405530 - 0x4055ce
int64_t function_405530(void) {
    // 0x405530
    int32_t * err_num; // 0x405546
    if ((int32_t)function_40c640((int64_t)g35) == 0) {
        goto lab_0x40555c;
    } else {
        // 0x405546
        err_num = __errno_location();
        if (g49 == 0) {
            goto lab_0x405573;
        } else {
            // 0x405557
            if (*err_num != 32) {
                goto lab_0x405573;
            } else {
                goto lab_0x40555c;
            }
        }
    }
  lab_0x40555c:;
    int64_t result = function_40c640((int64_t)g37); // 0x405563
    if ((int32_t)result == 0) {
        // 0x40556c
        return result;
    }
    // 0x4055ae
    _exit(g25);
    // UNREACHABLE
  lab_0x405573:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40557f
    if (g50 == 0) {
        // 0x4055b9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405593
        error(0, *err_num, "%s: %s", (char *)function_408d60((int64_t)g50), v1);
    }
    // 0x4055ae
    _exit(g25);
    // UNREACHABLE
}
// Address range: 0x4055d0 - 0x4055e8
int64_t function_4055d0(void) {
    // 0x4055d0
    int64_t v1; // 0x4055d0
    int64_t result = function_405650(v1); // 0x4055d4
    if (result != 0) {
        // 0x4055de
        return result;
    }
    // 0x4055e3
    function_4097b0(v1);
    // UNREACHABLE
}
// Address range: 0x4055f0 - 0x40564d
int64_t function_4055f0(int64_t a1) {
    // 0x4055f0
    int64_t v1; // 0x4055f0
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x4055fe
    int64_t v3 = function_4056b0(a1, v1); // 0x405602
    int64_t result = v3 - a1; // 0x40560a
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x405633
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x405620
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x405633
            break;
        }
        result2--;
    }
    // 0x405633
    return result2;
}
// Address range: 0x405650 - 0x4056aa
int64_t function_405650(int64_t a1) {
    // 0x405650
    int64_t v1; // 0x405650
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x40566f
    if (mem == NULL) {
        // 0x405696
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x405685
    int64_t v3; // 0x405650
    if (v2 == 0) {
        // 0x4056a0
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x405685
    *(char *)(v3 + result) = 0;
    // 0x405696
    return result;
}
// Address range: 0x4056b0 - 0x40570b
int64_t function_4056b0(int64_t a1, int64_t a2) {
    // 0x4056b0
    int64_t v1; // 0x4056b0
    char v2 = v1;
    int64_t v3 = a1; // 0x4056b9
    int64_t v4 = a1; // 0x4056b9
    char v5 = v2; // 0x4056b9
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x4056c4
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x4056c0
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x4056ce
    if (v5 == 0) {
      lab_0x40570a:
        // 0x40570a
        return result;
    }
    int64_t v7 = v4; // 0x4056f8
    int64_t v8 = 0; // 0x4056f8
    int64_t v9; // 0x4056b0
    int64_t v10; // 0x4056fa
    char v11; // 0x4056fe
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x4056f5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x4056fa
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x4056f5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x4056ea
    char v14 = *(char *)v13; // 0x4056ee
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
            // 0x4056f5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x4056fa
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x4056f5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x4056e0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40570a
    return result2;
}
// Address range: 0x405710 - 0x40573b
int64_t function_405710(int64_t str) {
    int32_t len = strlen((char *)str); // 0x405714
    int64_t result = len; // 0x405714
    if (len < 2) {
        // 0x40572a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x405728
    while (*(char *)(v1 + str) == 47) {
        // 0x405730
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40572a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40572a
    return result2;
}
// Address range: 0x405740 - 0x405824
int64_t function_405740(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 24); // 0x405740
    switch (((v1 & 0xf000) - 0x1000) / 0x1000) {
        case 7: {
            // 0x4057a0
            if (*(int64_t *)(a1 + 48) != 0) {
                // 0x4057b8
                return (int64_t)dcgettext(NULL, "regular file", 5);
            }
            // break -> 0x4057a7
            break;
        }
        case 3: {
            // 0x4057d8
            return (int64_t)dcgettext(NULL, "directory", 5);
        }
        case 9: {
            // 0x4057f8
            return (int64_t)dcgettext(NULL, "symbolic link", 5);
        }
        case 5: {
            // 0x405808
            return (int64_t)dcgettext(NULL, "block special file", 5);
        }
        case 1: {
            // 0x4057c8
            return (int64_t)dcgettext(NULL, "character special file", 5);
        }
        case 0: {
            // 0x405818
            return (int64_t)dcgettext(NULL, "fifo", 5);
        }
        case 11: {
            // 0x4057e8
            return (int64_t)dcgettext(NULL, "socket", 5);
        }
        default: {
            // 0x40578a
            return (int64_t)dcgettext(NULL, "weird file", 5);
        }
    }
    // 0x4057a7
    return (int64_t)dcgettext(NULL, "regular empty file", 5);
}
// Address range: 0x405830 - 0x4059a3
int64_t function_405830(int32_t a1, int64_t a2) {
    int32_t v1 = a1 & 0xf000; // 0x405837
    char v2 = 45; // 0x405830
    int64_t v3; // 0x405830
    uint64_t v4; // 0x405830
    switch ((v1 - 0x1000) / 0x1000) {
        case 3: {
            // 0x405899
            v2 = 100;
        }
        case 7: {
          lab_0x405899:
            // 0x405899
            v4 = (int64_t)a1;
            *(char *)a2 = v2;
            *(char *)(a2 + 1) = (v4 & 256) == 0 ? 45 : 114;
            int64_t v5 = v4 & 128; // 0x4058b2
            char v6 = v5; // 0x4058ba
            *(char *)(a2 + 2) = (v6 - ((char)(v5 == 0) | v6) & -74) + 119;
            int64_t v7 = v4 & 64; // 0x4058c7
            int64_t v8 = v7 - (v7 | (int64_t)(v7 == 0)); // 0x4058cd
            if ((v4 & 2048) == 0) {
                // 0x405970
                v3 = (v8 & 0xffffffb5) + 120 & 0xfffffffd;
            } else {
                // 0x4058db
                v3 = (v8 & 0xffffffe0) + 115 & 0xfffffff3;
            }
            // break -> 0x4058e1
            break;
        }
        case 5: {
            // 0x405899
            v2 = 98;
            // branch (via goto) -> 0x405899
            goto lab_0x405899;
        }
        case 1: {
            // 0x405899
            v2 = 99;
            // branch (via goto) -> 0x405899
            goto lab_0x405899;
        }
        case 9: {
            // 0x405899
            v2 = 108;
            // branch (via goto) -> 0x405899
            goto lab_0x405899;
        }
        case 0: {
            // 0x405899
            v2 = 112;
            // branch (via goto) -> 0x405899
            goto lab_0x405899;
        }
        default: {
            // 0x405886
            v2 = v1 != 0xc000 ? 63 : 115;
            // branch (via goto) -> 0x405899
            goto lab_0x405899;
        }
    }
    // 0x4058e1
    *(char *)(a2 + 3) = (char)v3;
    int64_t v9 = v4 & 32; // 0x4058e6
    char v10 = v9; // 0x4058ec
    *(char *)(a2 + 4) = (v10 - ((char)(v9 == 0) | v10) & -69) + 114;
    int64_t v11 = v4 & 16; // 0x4058f9
    char v12 = v11; // 0x4058ff
    *(char *)(a2 + 5) = (v12 - ((char)(v11 == 0) | v12) & -74) + 119;
    int64_t v13 = v4 & 8; // 0x40590c
    int64_t v14 = v13 - (v13 | (int64_t)(v13 == 0)); // 0x405912
    int64_t v15; // 0x405830
    if ((v4 & 1024) == 0) {
        // 0x405980
        v15 = (v14 & 0xffffffb5) + 120 & 0xfffffffd;
    } else {
        // 0x40591c
        v15 = (v14 & 0xffffffe0) + 115 & 0xfffffff3;
    }
    // 0x405922
    *(char *)(a2 + 6) = (char)v15;
    int64_t v16 = v4 & 4; // 0x405927
    char v17 = v16; // 0x40592d
    *(char *)(a2 + 7) = (v17 - ((char)(v16 == 0) | v17) & -69) + 114;
    int64_t v18 = v4 & 2; // 0x40593a
    char v19 = v18; // 0x405940
    *(char *)(a2 + 8) = (v19 - ((char)(v18 == 0) | v19) & -74) + 119;
    char v20 = v4 % 2 == 0; // 0x405953
    if ((v4 & 512) == 0) {
        // 0x405990
        *(char *)(a2 + 9) = (v20 & -75) + 120;
        *(int16_t *)(a2 + 10) = 32;
        return 32;
    }
    // 0x40595d
    *(char *)(a2 + 9) = (v20 & -32) + 116;
    *(int16_t *)(a2 + 10) = 32;
    return 32;
}
// Address range: 0x4059b0 - 0x4059b8
int64_t function_4059b0(int64_t a1) {
    // 0x4059b0
    int64_t v1; // 0x4059b0
    return function_405830(*(int32_t *)(a1 + 24), v1);
}
// Address range: 0x4059c0 - 0x405a5c
int64_t function_4059c0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x4059c0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x4059e5
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x405a16
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x405a38
    int64_t v4 = v2 - 1; // 0x405a48
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x405a50
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x405a60 - 0x405aa1
int64_t function_405a60(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x405a99
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x405a73
    int64_t v2 = a3; // 0x405a78
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x405a80
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x405a88
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x405a80
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x405a99
    return result;
}
// Address range: 0x405ab0 - 0x405af1
int64_t function_405ab0(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x405ae9
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x405ac3
    int64_t v2 = a3; // 0x405ac8
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x405ad0
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x405ad8
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x405ad0
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x405ae9
    return result;
}
// Address range: 0x405b00 - 0x4072c5
int64_t function_405b00(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3 = a2; // bp-1224, 0x405b24
    char v4 = *(char *)&v1; // 0x405b4c
    v3 = a2;
    int64_t result = 0; // 0x405b54
    int64_t v5 = v2; // 0x405b54
    char v6; // 0x405b00
    char v7; // 0x405b00
    char v8; // 0x405b00
    char v9; // 0x405b00
    char v10; // 0x405b00
    char v11; // 0x405b00
    char v12; // 0x405b00
    char v13; // 0x405b00
    char v14; // 0x405b00
    char v15; // 0x405b00
    int64_t v16; // 0x405b00
    int64_t v17; // 0x405b00
    int64_t v18; // 0x405b00
    int64_t v19; // 0x405b00
    int64_t v20; // 0x405b00
    int64_t v21; // 0x405b00
    int64_t v22; // 0x405b00
    int64_t v23; // 0x405b00
    int64_t v24; // 0x405b00
    int64_t v25; // 0x405b00
    int64_t v26; // 0x405b00
    int64_t v27; // 0x405b00
    int64_t v28; // 0x405b00
    int64_t v29; // 0x405b00
    char v30; // 0x405b00
    int64_t v31; // 0x405b00
    int64_t v32; // 0x405b00
    int64_t v33; // 0x405b00
    int64_t v34; // 0x405b00
    int64_t v35; // 0x405b00
    int64_t v36; // 0x405b00
    int64_t v37; // 0x405b00
    int64_t v38; // 0x405b00
    char * v39; // 0x405b00
    int64_t v40; // 0x405b00
    char * v41; // 0x405b00
    int64_t v42; // 0x405b00
    int64_t * str; // 0x405b00
    char * v43; // 0x405b00
    int64_t * v44; // 0x405b00
    int64_t format; // 0x405b00
    int16_t * v45; // 0x405b00
    int64_t * v46; // 0x405b00
    int32_t * v47; // 0x405b00
    int32_t * v48; // 0x405b00
    int64_t v49; // 0x405b15
    int64_t * v50; // 0x405b00
    int64_t * v51; // 0x405b00
    int64_t * v52; // 0x405b00
    int64_t * v53; // 0x405b00
    int64_t * v54; // 0x405b00
    int64_t * v55; // 0x405b00
    int32_t * v56; // 0x405b00
    int64_t v57; // 0x405b00
    char * v58; // 0x405b00
    int64_t * v59; // 0x405b00
    int32_t * v60; // 0x405b00
    int64_t * v61; // 0x405b00
    int64_t * v62; // 0x405b00
    int64_t * tm; // 0x405b00
    int64_t v63; // 0x405b00
    int32_t * v64; // 0x405b00
    int64_t * v65; // 0x405b00
    int64_t str2; // 0x405b00
    if (v4 != 0) {
        // 0x405b6a
        v49 = &v3;
        tm = (int64_t *)(v49 + 8);
        v63 = v49 + 48;
        v64 = (int32_t *)v63;
        v65 = (int64_t *)(v49 + 1232);
        str2 = v49 + 144;
        int64_t v66 = v49 + 64;
        v39 = (char *)v66;
        v40 = v49 + 135;
        v41 = (char *)v63;
        v42 = v49 + 44;
        str = (int64_t *)(v49 + 32);
        int64_t v67 = v49 + 72;
        v43 = (char *)v67;
        v44 = (int64_t *)v63;
        format = v49 + 112;
        v45 = (int16_t *)format;
        v46 = (int64_t *)(v49 + 16);
        v47 = (int32_t *)(v49 + 1240);
        v48 = (int32_t *)v66;
        v50 = (int64_t *)(v49 - 8);
        v51 = (int64_t *)(v49 - 16);
        v52 = (int64_t *)(v49 + 24);
        v53 = (int64_t *)v66;
        int64_t v68 = v49 + 80;
        v54 = (int64_t *)v68;
        v55 = (int64_t *)v67;
        v56 = (int32_t *)v67;
        v57 = v49 + 145;
        int64_t v69 = v49 + 88;
        v58 = (char *)v69;
        v59 = (int64_t *)v69;
        v60 = (int32_t *)v68;
        v61 = (int64_t *)(v49 + 104);
        v62 = (int64_t *)(v49 + 96);
        v30 = v4;
        v33 = a3;
        v19 = 0;
        v22 = v2;
        while (true) {
          lab_0x405b6a:
            // 0x405b6a
            v23 = v22;
            v20 = v19;
            int64_t v70 = v33;
            char v71 = v30;
            char v72 = v7;
            char v73 = v6;
            if (v71 == 37) {
                char v74 = v73; // 0x405bf4
                char v75 = v72; // 0x405bf4
                int64_t v76 = v70; // 0x405bf4
                int64_t v77 = 0; // 0x405bf4
                int64_t v78 = (int64_t)*(char *)(v49 + 43); // 0x405bf4
                int64_t v79 = 0; // 0x405bf4
                int64_t v80; // 0x405b00
                while (true) {
                  lab_0x405bf8_2:
                    // 0x405bf8
                    v16 = v78;
                    v10 = v74;
                    v11 = v75;
                    v34 = v76;
                    v26 = v77;
                    v17 = v79;
                    while (true) {
                      lab_0x405bf8:;
                        int64_t v81 = v26;
                        char v82 = v11;
                        char v83 = v10;
                        int64_t v84 = v34 + 1; // 0x405bf8
                        char v85 = *(char *)v84; // 0x405bfc
                        v14 = v83;
                        v15 = v82;
                        v31 = 48;
                        v36 = v84;
                        v28 = v81;
                        if (v85 == 48) {
                            goto lab_0x405c28;
                        } else {
                            // 0x405c08
                            v18 = v17;
                            v27 = v81;
                            v35 = v84;
                            v80 = v85;
                            v13 = v82;
                            v12 = v83;
                            while (v12 <= v13) {
                                if (v80 != 35) {
                                    // 0x405c30
                                    v14 = v12;
                                    v15 = v13;
                                    v31 = v80;
                                    v36 = v35;
                                    v28 = v27;
                                    if ((char)v80 == 45) {
                                        goto lab_0x405c28;
                                    } else {
                                        int64_t v86 = v80 & 0xffffffff;
                                        v38 = v86;
                                        v37 = v35;
                                        v32 = 0xffffffff;
                                        v29 = v86;
                                        if ((int32_t)v80 < 58) {
                                            goto lab_0x405c91;
                                        } else {
                                            goto lab_0x405c48_2;
                                        }
                                    }
                                }
                                int64_t v87 = v35 + 1; // 0x405c0e
                                char v88 = *(char *)v87; // 0x405c12
                                int64_t v89 = v88; // 0x405c12
                                v14 = v88;
                                v15 = 48;
                                v31 = v89;
                                v36 = v87;
                                v28 = 1;
                                if (v88 == 48) {
                                    goto lab_0x405c28;
                                }
                                v27 = 1;
                                v35 = v87;
                                v80 = v89;
                                v13 = 48;
                                v12 = v88;
                            }
                            char v90 = v80;
                            v74 = v12;
                            v75 = v13;
                            v76 = v35;
                            v77 = v27;
                            v78 = 1;
                            v79 = v18;
                            if (v90 != 94) {
                                // 0x405c80
                                v14 = v12;
                                v15 = v13;
                                v31 = v80;
                                v36 = v35;
                                v28 = v27;
                                if (v90 != 95) {
                                    // break (via goto) -> 0x405c84
                                    goto lab_0x405c84;
                                }
                                goto lab_0x405c28;
                            } else {
                                goto lab_0x405bf8_2;
                            }
                        }
                    }
                }
              lab_0x405c84:;
                int64_t v91 = v80 & 0xffffffff;
                v38 = v91;
                v37 = v35;
                v32 = 0xffffffff;
                v29 = v91;
                if ((int32_t)v80 < 58) {
                    goto lab_0x405c91;
                } else {
                    goto lab_0x405c48_2;
                }
            } else {
                int64_t v92 = v3 - v20; // 0x405b72
                v1 = v92;
                if (v92 < 2) {
                    // break -> 0x405bb3
                    break;
                }
                int64_t v93 = 0; // 0x405b7e
                if (v23 != 0) {
                    // 0x405b80
                    *(char *)v23 = v71;
                    v93 = v23 + 1;
                }
                // 0x405b87
                v8 = v73;
                v9 = v72;
                v25 = v70;
                v21 = v20 + 1;
                v24 = v93;
                goto lab_0x405b8e;
            }
        }
      lab_0x405bb3_11:
        // 0x405bb3
        return 0;
    }
    goto lab_0x405b9b_2;
  lab_0x405c28:
    // 0x405c28
    v10 = v14;
    v11 = v15;
    v34 = v36;
    v26 = v28;
    v17 = v31 & 0xffffffff;
    goto lab_0x405bf8;
  lab_0x405cde:;
    // 0x405cde
    int64_t v94; // 0x405c9b
    v38 = v94;
    int64_t v95; // 0x405c93
    v37 = v95;
    v32 = 0x7fffffff;
    v29 = v94;
    int64_t v96; // 0x405c9d
    if ((int32_t)v96 >= 10) {
        // break -> 0x405c48
        goto lab_0x405c48_2;
    }
    // 0x405ce3
    int64_t v97; // 0x405b00
    int64_t v98 = v97 + 2; // 0x405ce3
    int64_t v99 = (int64_t)*(char *)v98; // 0x405ce3
    int64_t v100 = v99 + 0xffffffd0 & 0xffffffff; // 0x405cf2
    v1 = v100;
    int64_t v101 = v100; // 0x405cf5
    int64_t v102 = v99; // 0x405cf5
    int64_t v103 = v99 & 0xffffffff; // 0x405cf5
    int64_t v104 = v98; // 0x405cf5
    int64_t v105 = 0x7fffffff; // 0x405cf5
    goto lab_0x405cba;
  lab_0x405cba:;
    int64_t v106 = v105;
    int64_t v107 = v104;
    int64_t v108 = v107; // 0x405cbd
    int64_t v109 = v106; // 0x405cbd
    if ((int32_t)v101 >= 10) {
        // 0x405cbf
        v38 = v103;
        v37 = v107;
        v32 = v106;
        v29 = v102 & 0xffffffff;
        goto lab_0x405c48_2;
    }
    goto lab_0x405c93;
  lab_0x405c91:
    // 0x405c91
    v108 = v35;
    v109 = 0;
    while (true) {
      lab_0x405c93:;
        int64_t v110 = v109;
        v97 = v108;
        v95 = v97 + 1;
        int64_t v111 = (int64_t)*(char *)v95; // 0x405c93
        v94 = v111 & 0xffffffff;
        v96 = v111 + 0xffffffd0;
        int64_t v112 = v96 & 0xffffffff; // 0x405c9d
        v1 = v112;
        int32_t v113 = v110; // 0x405ca0
        if (v113 > 0xccccccc) {
            goto lab_0x405cde;
        } else {
            char v114 = *(char *)v97; // 0x405ca8
            if (v113 != 0xccccccc || v114 < 56) {
                // 0x405cad
                v101 = v112;
                v102 = v111;
                v103 = v94;
                v104 = v95;
                v105 = 10 * v110 + 0xffffffd0 + (int64_t)v114 & 0xffffffff;
                goto lab_0x405cba;
            } else {
                goto lab_0x405cde;
            }
        }
    }
    goto lab_0x405c48_2;
  lab_0x405c48_2:;
    int64_t v115 = v32;
    int64_t v116 = v37;
    int64_t v117 = v38; // 0x405b00
    int64_t v118 = v116; // 0x405b00
    int64_t v119 = 0; // 0x405b00
    int64_t v120; // 0x405b00
    switch ((char)v120) {
        case 69: {
        }
        case 79: {
            int64_t v121 = v116 + 1; // 0x405cc8
            v117 = (int64_t)*(char *)v121;
            v118 = v121;
            v119 = v29;
            // break -> 0x405c5e
            break;
        }
    }
    int64_t v122 = v119;
    int64_t v123 = v118;
    int64_t v124 = v117;
    g67 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v124; // 0x405c61
    int64_t v127 = v16; // 0x405c61
    int64_t v128 = 0; // 0x405c61
    int64_t v129 = 1; // 0x405c61
    int64_t v130 = v123; // 0x405c61
    int64_t v131 = v16; // 0x405c61
    int64_t v132 = v123; // 0x405c61
    int64_t v133 = 0; // 0x405c61
    int64_t v134; // 0x405b00
    int64_t v135; // 0x405b00
    int64_t v136; // 0x405b00
    int64_t v137; // 0x405b00
    int64_t v138; // 0x405b00
    int64_t v139; // 0x405b00
    int64_t v140; // 0x405b00
    int64_t v141; // 0x405b00
    int64_t v142; // 0x405b00
    int64_t v143; // 0x405b00
    int64_t v144; // 0x405b00
    int64_t v145; // 0x405b00
    int64_t v146; // 0x405b00
    int64_t v147; // 0x405b00
    int64_t v148; // 0x405b00
    int64_t v149; // 0x405b00
    int64_t v150; // 0x405b00
    int64_t v151; // 0x405b00
    int64_t v152; // 0x405b00
    int64_t v153; // 0x405b00
    int64_t v154; // 0x405b00
    int64_t v155; // 0x405b00
    int64_t v156; // 0x405b00
    int64_t v157; // 0x405b00
    int64_t v158; // 0x405b00
    int64_t v159; // 0x405b00
    int64_t v160; // 0x405b00
    int64_t v161; // 0x405b00
    int64_t v162; // 0x405b00
    int64_t v163; // 0x405b00
    int64_t v164; // 0x405b00
    int64_t v165; // 0x405b00
    int64_t v166; // 0x405b00
    int64_t v167; // 0x405b00
    int64_t v168; // 0x405b00
    int64_t v169; // 0x405b00
    int64_t v170; // 0x405b00
    int64_t v171; // 0x405b00
    int64_t v172; // 0x405b00
    int64_t v173; // 0x405b00
    int64_t v174; // 0x405b00
    int64_t v175; // 0x405b00
    int64_t v176; // 0x405b00
    int64_t v177; // 0x405b00
    int64_t v178; // 0x405b00
    int64_t v179; // 0x405b00
    int64_t v180; // 0x405b00
    int64_t v181; // 0x405b00
    int64_t v182; // 0x405b00
    int64_t v183; // 0x405b00
    int64_t v184; // 0x405b00
    int64_t v185; // 0x405b00
    int32_t v186; // 0x405b00
    switch (v125) {
        case 0: {
            // 0x406be3
            v177 = v123 - 1;
            goto lab_0x406ad7;
        }
        case 37: {
            int64_t v187 = v3 - v20; // 0x406b7e
            v1 = v187;
            int32_t v188 = v115; // 0x406b81
            int64_t v189 = 0x100000000 * v115 >> 32;
            int64_t v190 = v188 >= 0 ? v189 : 0; // 0x406b86
            int64_t v191 = v190 != 0 ? v190 : 1; // 0x406b8b
            v134 = v187;
            v162 = v190;
            v176 = 1;
            v160 = v123;
            v161 = v123;
            v142 = v16;
            v152 = v191;
            if ((int32_t)v122 != 0) {
                goto lab_0x406983;
            } else {
                // 0x406b98
                if (v191 >= v187) {
                    // break -> 0x405bb3
                    break;
                }
                // 0x406ba1
                v155 = v191;
                v156 = 0;
                if (v23 != 0) {
                    int64_t v192 = v124; // 0x406bad
                    int64_t v193 = v23; // 0x406bad
                    if (v188 >= 2) {
                        int64_t v194 = v189 - 1; // 0x406bb2
                        v1 = v194;
                        int64_t v195 = v194 + v23; // 0x406bb6
                        int64_t * v196 = (int64_t *)v23;
                        int32_t v197 = v194;
                        if (v18 == 48) {
                            // 0x407246
                            memset(v196, 48, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        } else {
                            // 0x406bc4
                            memset(v196, 32, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        }
                    }
                    // 0x406bd7
                    *(char *)v193 = (char)v192;
                    v155 = v191;
                    v156 = v193 + 1;
                }
                goto lab_0x406526;
            }
        }
        case 58: {
            int64_t v198 = v123 + 1; // 0x406c3f
            char v199 = *(char *)v198; // 0x406c3f
            v1 = v198;
            int64_t v200 = v198; // 0x406c4f
            char v201 = v199; // 0x406c4f
            int64_t v202 = 1; // 0x406c4f
            if (v199 == 58) {
                int64_t v203 = 2; // 0x406c77
                int64_t v204 = v203 + v123; // 0x406c7b
                char v205 = *(char *)v204; // 0x406c7b
                v1 = v204;
                v200 = v204;
                v201 = v205;
                v202 = v203;
                int64_t v206 = v203; // 0x406c86
                while (v205 == 58) {
                    // 0x406c77
                    v203 = v206 + 1;
                    v204 = v203 + v123;
                    v205 = *(char *)v204;
                    v1 = v204;
                    v200 = v204;
                    v201 = v205;
                    v202 = v203;
                    v206 = v203;
                }
            }
            // 0x406c51
            v130 = v123;
            v131 = v16;
            v132 = v200;
            v133 = v202;
            if (v201 != 122) {
                goto lab_0x406948;
            } else {
                goto lab_0x406a20;
            }
        }
        case 65: {
            goto lab_0x405d10;
        }
        case 66: {
            goto lab_0x405d10;
        }
        case 67: {
            // 0x406873
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x4062b2;
            } else {
                // 0x40687d
                *v41 = 0;
                int32_t v207 = *(int32_t *)(*tm + 20); // 0x406892
                int32_t v208 = v207 / 100; // 0x4068a3
                int32_t v209 = v208 + 19; // 0x4068a7
                int32_t v210 = v207 + 1900; // 0x4068bb
                v171 = v123;
                v168 = v115;
                v182 = v209 - (int32_t)(-100 * v208 + v207 < 0 == v209 >= 0 == (v209 != 0));
                v178 = 0;
                v157 = v210 < 0 != ((v210 ^ v207) & (v207 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40629f;
            }
        }
        case 68: {
            // 0x406007
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x406948;
            } else {
                // 0x406010
                *v44 = (int64_t)"%m/%d/%y";
                goto lab_0x406019;
            }
        }
        case 70: {
            // 0x406109
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x406948;
            } else {
                // 0x406112
                *v44 = (int64_t)"%Y-%m-%d";
                goto lab_0x406019;
            }
        }
        case 71: {
            goto lab_0x406120;
        }
        case 72: {
            // 0x4063b2
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x4063bc
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 8);
                v138 = 2;
                v148 = v18;
                goto lab_0x406290;
            }
        }
        case 73: {
            // 0x4063cf
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x4063d9
                v167 = v115;
                v181 = (int64_t)*(int32_t *)v42;
                v138 = 2;
                v148 = v18;
                goto lab_0x406290;
            }
        }
        case 77: {
            // 0x4063e8
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x4063f2
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 4);
                v138 = 2;
                v148 = v18;
                goto lab_0x406290;
            }
        }
        case 78: {
            // 0x406405
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                uint32_t v211 = (int32_t)v115; // 0x40640f
                if (v211 != -1) {
                    int64_t v212 = (int64_t)*v47;
                    int64_t v213 = v212; // 0x4070a1
                    int64_t v214 = v115; // 0x4070a1
                    int64_t v215 = v212; // 0x4070a1
                    if (v211 <= 8) {
                        int64_t v216 = v213;
                        int64_t v217 = (v214 & 0xffffffff) + 1; // 0x4070c5
                        int64_t v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31); // 0x4070d0
                        v214 = v217;
                        v215 = v218;
                        while ((int32_t)v217 != 9) {
                            // 0x4070c0
                            v216 = v218;
                            v217 = (v214 & 0xffffffff) + 1;
                            v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31);
                            v214 = v217;
                            v215 = v218;
                        }
                    }
                    // 0x4070d7
                    v167 = v115;
                    v181 = v215;
                    v138 = v115 & 0xffffffff;
                    v148 = v18;
                } else {
                    // 0x406418
                    v167 = 9;
                    v181 = (int64_t)*v47;
                    v138 = 9;
                    v148 = v18;
                }
                goto lab_0x406290;
            }
        }
        case 80: {
            goto lab_0x406435;
        }
        case 82: {
            // 0x4063a4
            *v44 = (int64_t)"%H:%M";
            goto lab_0x406019;
        }
        case 83: {
            // 0x406820
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x40682a
                v167 = v115;
                v181 = (int64_t)*(int32_t *)*tm;
                v138 = 2;
                v148 = v18;
                goto lab_0x406290;
            }
        }
        case 84: {
            // 0x406c69
            *v44 = (int64_t)"%H:%M:%S";
            goto lab_0x406019;
        }
        case 85: {
            // 0x40683c
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                int64_t v219 = *tm; // 0x406846
                v186 = *(int32_t *)(v219 + 28) + 7 - *(int32_t *)(v219 + 24);
                goto lab_0x40685d;
            }
        }
        case 86: {
            goto lab_0x406120;
        }
        case 87: {
            // 0x4068ce
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                int64_t v220 = *tm; // 0x4068d4
                int32_t v221 = *(int32_t *)(v220 + 24); // 0x4068de
                int32_t v222 = v221 + 6; // 0x4068e2
                *v64 = v221;
                int32_t v223 = *(int32_t *)(v220 + 28); // 0x406905
                v186 = 1 - v221 + v223 + 7 * ((v222 + (int32_t)(-0x6db6db6d * (int64_t)v222 / 0x100000000) >> 2) - (v222 >> 31));
                goto lab_0x40685d;
            }
        }
        case 88: {
            goto lab_0x405e50;
        }
        case 89: {
            // 0x4067cd
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            v130 = v123;
            v131 = v16;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x4062b2;
                }
                case 79: {
                    goto lab_0x406948;
                }
                default: {
                    // 0x4067e1
                    *v41 = 0;
                    int32_t v224 = *(int32_t *)(*tm + 20); // 0x4067f1
                    int32_t v225 = v224 + 1900; // 0x4067f4
                    v174 = v123;
                    v164 = v115;
                    v185 = v225;
                    v180 = 0;
                    v159 = v225 < 0 != ((v225 ^ v224) & (v224 ^ -0x80000000)) < 0;
                    v136 = 4;
                    v145 = v18;
                    goto lab_0x406810;
                }
            }
        }
        case 90: {
            char v226 = v27; // 0x4062d4
            *v43 = v226;
            *v39 = v226 != 0 ? 0 : (char)v16;
            int32_t len = strlen((char *)*str); // 0x4062ef
            uint64_t v227 = (int64_t)len; // 0x4062ef
            int64_t v228 = 0x100000000 * v115 >> 32;
            uint64_t v229 = (int32_t)v115 >= 0 ? v228 : 0; // 0x406305
            int64_t v230 = v229 <= v227 ? v227 : v229; // 0x40630d
            int64_t v231 = v3 - v20; // 0x406311
            v1 = v231;
            *v44 = v230;
            if (v231 <= v230) {
                // break -> 0x405bb3
                break;
            }
            int64_t v232 = v230; // 0x406325
            int64_t v233 = 0; // 0x406325
            if (v23 != 0) {
                char v234 = *v39; // 0x40632a
                char v235 = *v43; // 0x406330
                char v236 = v235; // 0x406336
                char v237 = v234; // 0x406336
                int64_t v238 = v23; // 0x406336
                if (v229 > v227) {
                    int64_t v239 = v228 - v227; // 0x40633b
                    v1 = v239;
                    int64_t v240 = v239 + v23; // 0x40633e
                    if (v18 == 48) {
                        // 0x40725e
                        memset((int64_t *)v23, 48, (int32_t)v239);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    } else {
                        // 0x40634c
                        *v43 = v235;
                        *v39 = v234;
                        memset((int64_t *)v23, 32, (int32_t)v1);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    }
                }
                int64_t v241 = v238;
                v1 = v227;
                int64_t v242 = *str; // 0x406375
                if (v236 != 0) {
                    // 0x40719c
                    function_405a60(v241, v242, v227);
                } else {
                    // 0x406386
                    if (v237 == 0) {
                        // 0x407192
                        memcpy((int64_t *)v241, (int64_t *)v242, len);
                    } else {
                        // 0x40638f
                        function_405ab0(v241, v242, v227);
                    }
                }
                // 0x406394
                v232 = *v44;
                v233 = v241 + v227;
            }
            // 0x406397
            v8 = v12;
            v9 = v13;
            v25 = v123;
            v21 = v232 + v20;
            v24 = v233;
            goto lab_0x405b8e;
        }
        case 97: {
            goto lab_0x405d10;
        }
        case 98: {
            goto lab_0x406931;
        }
        case 99: {
            goto lab_0x405e50;
        }
        case 100: {
            // 0x406b0d
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x406b17
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 12);
                v138 = 2;
                v148 = v18;
                goto lab_0x406290;
            }
        }
        case 101: {
            // 0x406b2a
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x406b34
                v183 = *tm + 12;
                goto lab_0x406461;
            }
        }
        case 103: {
            goto lab_0x406120;
        }
        case 104: {
            goto lab_0x406931;
        }
        case 106: {
            // 0x406b41
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x406b4b
                *v41 = 0;
                int32_t v243 = *(int32_t *)(*tm + 28); // 0x406b5b
                int32_t v244 = v243 + 1; // 0x406b5e
                v171 = v123;
                v168 = v115;
                v182 = v244;
                v178 = 0;
                v157 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v139 = 3;
                v149 = v18;
                goto lab_0x40629f;
            }
        }
        case 107: {
            // 0x40644f
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x406459
                v183 = *tm + 8;
                goto lab_0x406461;
            }
        }
        case 108: {
            // 0x406486
            v183 = v42;
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                goto lab_0x406461;
            }
        }
        case 109: {
            // 0x406496
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x4064a0
                *v41 = 0;
                int32_t v245 = *(int32_t *)(*tm + 16); // 0x4064b0
                int32_t v246 = v245 + 1; // 0x4064b3
                v171 = v123;
                v168 = v115;
                v182 = v246;
                v178 = 0;
                v157 = v246 < 0 != (v246 & (v245 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40629f;
            }
        }
        case 110: {
            int32_t v247 = v115; // 0x4064c4
            int64_t v248 = 0x100000000 * v115 >> 32;
            int64_t v249 = v247 >= 0 ? v248 : 0; // 0x4064d5
            int64_t v250 = v249 == 0 ? 1 : v249; // 0x4064db
            if (v3 - v20 <= v250) {
                // break -> 0x405bb3
                break;
            }
            // 0x4064ef
            v155 = v250;
            v156 = 0;
            if (v23 != 0) {
                int64_t v251 = v23; // 0x4064f7
                if (v247 >= 2) {
                    int64_t v252 = v248 - 1; // 0x4064fc
                    v1 = v252;
                    int64_t v253 = v252 + v23; // 0x406500
                    int64_t * v254 = (int64_t *)v23;
                    int32_t v255 = v252;
                    if (v18 == 48) {
                        // 0x4071eb
                        memset(v254, 48, v255);
                        v251 = v253;
                    } else {
                        // 0x40650e
                        memset(v254, 32, v255);
                        v251 = v253;
                    }
                }
                // 0x40651e
                *(char *)v251 = 10;
                v155 = v250;
                v156 = v251 + 1;
            }
            goto lab_0x406526;
        }
        case 112: {
            // 0x406c61
            v129 = 0;
            goto lab_0x406435;
        }
        case 113: {
            // 0x406531
            v172 = v123;
            v169 = v115;
            v140 = 1;
            v150 = v18;
            if ((int32_t)v122 == 79) {
                goto lab_0x4062b2;
            } else {
                // 0x406549
                *v41 = 0;
                v173 = v123;
                v163 = v115;
                v184 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v179 = 0;
                v158 = 0;
                v141 = 1;
                v151 = v18;
                goto lab_0x406560;
            }
        }
        case 114: {
            goto lab_0x405e5d;
        }
        case 115: {
            int64_t v256 = *tm; // 0x405e7d
            *v39 = (char)v16;
            int128_t v257 = __asm_movdqu(*(int128_t *)(v256 + 32)); // 0x405e9f
            int128_t v258 = __asm_movdqu(*(int128_t *)v256); // 0x405ea4
            int128_t v259 = __asm_movdqu(*(int128_t *)(v256 + 16)); // 0x405ea8
            *(int128_t *)str2 = (int128_t)__asm_movaps(v258);
            *(int128_t *)(v49 + 160) = (int128_t)__asm_movaps(v259);
            *(int128_t *)v63 = (int128_t)__asm_movaps(v257);
            *(int128_t *)(v49 + 176) = (int128_t)__asm_movaps(v257);
            *(int64_t *)(v49 + 192) = *(int64_t *)(v256 + 48);
            int64_t v260 = function_40c500(*v65, str2, v1, v124); // 0x405ed6
            int64_t v261 = v260;
            int64_t v262 = v261 >> 63; // 0x405f08
            int64_t v263 = (v261 >> 63 & -10) + v261; // 0x405f15
            int64_t v264 = (v260 < 0 ? -v263 : v263) + 48; // 0x405f28
            v1 = v264 & 0xffffffff;
            int64_t v265 = v40 - 1; // 0x405f2b
            *(char *)v265 = (char)v264;
            int64_t v266 = v265; // 0x405f36
            while (v262 != 0) {
                // 0x405ef0
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & -10) + v261;
                v264 = (v260 < 0 ? -v263 : v263) + 48;
                v1 = v264 & 0xffffffff;
                v265 = v266 - 1;
                *(char *)v265 = (char)v264;
                v266 = v265;
            }
            int64_t v267 = (int64_t)*v39; // 0x405edb
            int32_t v268 = v115; // 0x405f38
            int64_t v269 = v268 >= 0 == (v268 != 0) ? v115 & 0xffffffff : 1; // 0x405f40
            v170 = v123;
            v166 = v115;
            v135 = v269;
            v144 = v267;
            v147 = v18;
            v154 = v265;
            v175 = v123;
            v165 = v115;
            v137 = v269;
            v143 = v267;
            v146 = v18;
            v153 = v265;
            if (v260 < 0) {
                goto lab_0x406ca8;
            } else {
                goto lab_0x405f4d;
            }
        }
        case 116: {
            int32_t v270 = v115; // 0x406724
            int64_t v271 = 0x100000000 * v115 >> 32;
            int64_t v272 = v270 >= 0 ? v271 : 0; // 0x406735
            int64_t v273 = v272 == 0 ? 1 : v272; // 0x40673b
            if (v3 - v20 <= v273) {
                // break -> 0x405bb3
                break;
            }
            // 0x40674f
            v155 = v273;
            v156 = 0;
            if (v23 != 0) {
                int64_t v274 = v23; // 0x40675b
                if (v270 >= 2) {
                    int64_t v275 = v271 - 1; // 0x406760
                    v1 = v275;
                    int64_t v276 = v275 + v23; // 0x406764
                    int64_t * v277 = (int64_t *)v23;
                    int32_t v278 = v275;
                    if (v18 == 48) {
                        // 0x407200
                        memset(v277, 48, v278);
                        v274 = v276;
                    } else {
                        // 0x406772
                        memset(v277, 32, v278);
                        v274 = v276;
                    }
                }
                // 0x406782
                *(char *)v274 = 9;
                v155 = v273;
                v156 = v274 + 1;
            }
            goto lab_0x406526;
        }
        case 117: {
            int32_t v279 = *(int32_t *)(*tm + 24); // 0x40679f
            int32_t v280 = v279 + 6; // 0x4067a2
            *v64 = v279;
            v167 = v115;
            v181 = v279 + 7 + -7 * ((v280 + (int32_t)(-0x6db6db6d * (int64_t)v280 / 0x100000000) >> 2) - (v280 >> 31));
            v138 = 1;
            v148 = v18;
            goto lab_0x406290;
        }
        case 119: {
            // 0x406918
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406948;
            } else {
                // 0x40691e
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 24);
                v138 = 1;
                v148 = v18;
                goto lab_0x406290;
            }
        }
        case 120: {
            goto lab_0x405e50;
        }
        case 121: {
            // 0x406bf0
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x4062b2;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x406c0a
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x406c22
                v167 = v115;
                v181 = v283;
                v138 = 2;
                v148 = v18;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x406c31
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x406c37
                    v167 = v115;
                    v181 = v285 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
                goto lab_0x406290;
            }
        }
        case 122: {
            goto lab_0x406a20;
        }
        default: {
            goto lab_0x406948;
        }
    }
  lab_0x405b8e:
    // 0x405b8e
    v5 = v24;
    result = v21;
    int64_t v286 = v25 + 1; // 0x405b8e
    char v287 = *(char *)v286; // 0x405b8e
    v6 = v8;
    v7 = v9;
    v30 = v287;
    v33 = v286;
    v19 = result;
    v22 = v5;
    if (v287 == 0) {
        // 0x405b9b
        goto lab_0x405b9b_2;
    }
    goto lab_0x405b6a;
  lab_0x405d10:
    // 0x405d10
    v130 = v123;
    v131 = v16;
    int64_t v288; // 0x405b00
    if ((int32_t)v122 != 0) {
        goto lab_0x406948;
    } else {
        // 0x405d19
        v288 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff;
        goto lab_0x405d20;
    }
  lab_0x406120:
    // 0x406120
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 69) {
        goto lab_0x406948;
    } else {
        int64_t v289 = *tm; // 0x40612a
        int32_t v290 = *(int32_t *)(v289 + 20); // 0x40612f
        uint32_t v291 = *(int32_t *)(v289 + 28); // 0x406132
        uint32_t v292 = *(int32_t *)(v289 + 24); // 0x406136
        *v64 = v290;
        int32_t v293 = v290 - 100 + (v290 >> 31 & 400); // 0x40614d
        int32_t v294 = v291 - v292; // 0x406154
        int32_t v295 = v294 + 382; // 0x406157
        int32_t v296 = v291 - 379 - v294 + 7 * ((v295 + (int32_t)(-0x6db6db6d * (int64_t)v295 / 0x100000000) >> 2) - (v295 >> 31)); // 0x40617e
        int32_t v297; // 0x405b00
        int32_t v298; // 0x406209
        if (v296 < 0) {
            // 0x407017
            v1 = 365;
            int64_t v299 = 365; // 0x407023
            if ((v293 + 3) % 4 == 0) {
                int32_t v300 = v293 - 1;
                v1 = 366;
                v299 = 366;
                if (v300 % 100 - v300 == 1 - v293) {
                    uint32_t v301 = v300 % 400;
                    int64_t v302 = v301; // 0x40704e
                    int64_t v303 = v302 + 366 + (v302 ^ 0xffffffff) + (int64_t)(v301 == 0) & 0xffffffff; // 0x407057
                    v1 = v303;
                    v299 = v303;
                }
            }
            int64_t v304 = v299; // 0x40705d
            int64_t v305; // 0x406132
            int64_t v306 = v304 + v305; // 0x40705d
            int64_t v307; // 0x406136
            int64_t v308 = v306 - v307 + 382; // 0x407071
            v297 = (int32_t)(v306 - v308) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v308 >> 32) / 0x100000000 + v308) >> 2) - ((int32_t)v308 >> 31));
        } else {
            int64_t v309 = 365; // 0x406195
            if (v293 % 4 == 0) {
                // 0x406197
                v309 = 366;
                if (v293 % 100 == 0) {
                    // 0x4061bc
                    v309 = v293 == 0 ? 366 : 365;
                }
            }
            int64_t v310 = (int64_t)v291 - v309; // 0x4061e0
            int64_t v311 = v310 - (int64_t)v292 + 382; // 0x4061e7
            v298 = (int32_t)(v310 - v311) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v311 >> 32) / 0x100000000 + v311) >> 2) - ((int32_t)v311 >> 31));
            v297 = v298 >= 0 ? v298 : v296;
        }
        int64_t v312 = (v298 >> 31) + 1;
        if (v125 == 71) {
            uint32_t v313 = *v64; // 0x407105
            *v41 = 0;
            int32_t v314 = -1900 - (int32_t)v312; // 0x407119
            int32_t v315 = v313 - v314; // 0x40711c
            v171 = v123;
            v168 = v115;
            v182 = v312 + 1900 + (int64_t)v313 & 0xffffffff;
            v178 = 0;
            v157 = v315 < 0 != ((v315 ^ v313) & (v313 ^ v314)) < 0;
            v139 = 4;
            v149 = v18;
            goto lab_0x40629f;
        } else {
            if (v125 != 103) {
                int32_t v316 = v297;
                int32_t v317 = v316 < 0 ? 2 : 1; // 0x4070fa
                v167 = v115;
                v181 = v317 + (v316 + (int32_t)(-0x6db6db6d * (int64_t)v316 / 0x100000000) >> 2);
                v138 = 2;
                v148 = v18;
            } else {
                int32_t v318 = *v64; // 0x40622f
                int32_t v319 = v312; // 0x40625a
                int32_t v320 = (v318 % 100 + v319) % 100;
                int64_t v321 = v320; // 0x406270
                v167 = v115;
                v181 = v321;
                v138 = 2;
                v148 = v18;
                if (v320 < 0) {
                    int32_t v322 = -1900 - v319; // 0x406280
                    int32_t v323 = v318 - v322; // 0x406285
                    int64_t v324 = v323 < 0 == ((v323 ^ v318) & (v318 ^ v322)) < 0 ? v321 + 100 : -v321; // 0x406288
                    v167 = v115;
                    v181 = v324 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
            }
            goto lab_0x406290;
        }
    }
  lab_0x406435:
    // 0x406435
    v126 = 112;
    v127 = (char)v27 != 0 ? 0 : v16;
    v128 = ((char)v27 != 0 ? v27 : v129) & 0xffffffff;
    goto lab_0x405e5d;
  lab_0x405e50:
    // 0x405e50
    v126 = v124;
    v127 = v16;
    v128 = 0;
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 79) {
        goto lab_0x406948;
    } else {
        goto lab_0x405e5d;
    }
  lab_0x406931:;
    int64_t v660 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff; // 0x406934
    v288 = v660;
    v130 = v123;
    v131 = v660;
    if ((int32_t)v122 == 0) {
        goto lab_0x405d20;
    } else {
        goto lab_0x406948;
    }
  lab_0x405e5d:;
    int64_t v325 = v128;
    int64_t v326 = v127;
    int64_t v327 = v126;
    *v45 = 0x2520;
    int64_t v328 = v327; // 0x405e6a
    int64_t v329 = v123; // 0x405e6a
    int64_t v330 = v115; // 0x405e6a
    int64_t v331 = 0; // 0x405e6a
    int64_t v332 = v326; // 0x405e6a
    int64_t v333 = v18; // 0x405e6a
    int64_t v334 = v325; // 0x405e6a
    int64_t v335; // 0x405b00
    int64_t v336; // 0x405b00
    int64_t v337; // 0x405b00
    int64_t v338; // 0x405b00
    int64_t v339; // 0x405b00
    int64_t v340; // 0x405b00
    int64_t v341; // 0x405b00
    int64_t v342; // 0x405b00
    if ((int32_t)v122 != 0) {
        goto lab_0x4062bf;
    } else {
        // 0x405e70
        v340 = *v46;
        v342 = v327;
        v341 = v115;
        v338 = v123;
        v339 = v122;
        v335 = v326;
        v336 = v18;
        v337 = v325;
        goto lab_0x405d40;
    }
  lab_0x406a20:;
    int64_t v343 = v132;
    int64_t v344 = *tm; // 0x406a20
    v8 = v12;
    v9 = v13;
    v25 = v343;
    v21 = v20;
    v24 = v23;
    int64_t v345; // 0x405b00
    uint32_t v346; // 0x406a6e
    uint32_t v347; // 0x406aa3
    int32_t v348; // 0x406aa7
    if (*(int32_t *)(v344 + 32) < 0) {
        goto lab_0x405b8e;
    } else {
        int64_t v349 = *(int64_t *)(v344 + 40); // 0x406a30
        int32_t v350 = v349; // 0x406a3a
        int64_t v351 = 1; // 0x406a3c
        if (v350 >= 0) {
            // 0x406a3e
            v351 = 0;
            if (v350 == 0) {
                // 0x406a46
                v351 = *(char *)*str == 45;
            }
        }
        // 0x406a52
        v345 = v351;
        int64_t v352 = 0x100000000 * v349 >> 32; // 0x406a5e
        int32_t v353 = v350 >> 31; // 0x406a62
        *v48 = v353;
        v346 = ((int32_t)(-0x6e5d4c3b * v352 / 0x100000000) + v350 >> 11) - v353;
        *v64 = v346;
        int32_t v354 = ((int32_t)(-0x77777777 * v352 / 0x100000000 + v349) >> 5) - *v48; // 0x406a80
        v347 = -60 * ((v354 + (int32_t)(-0x77777777 * (int64_t)v354 / 0x100000000) >> 5) - (v354 >> 31)) + v354;
        v348 = -60 * v354 + v350;
        v177 = v343;
        switch (v133) {
            case 1: {
                goto lab_0x407176;
            }
            case 0: {
                // 0x4071a6
                *v41 = 1;
                v171 = v343;
                v168 = v115;
                v182 = v347 + 100 * v346;
                v178 = 0;
                v157 = v345;
                v139 = 5;
                v149 = v18;
                goto lab_0x40629f;
            }
            case 2: {
                goto lab_0x407152;
            }
            case 3: {
                if (v348 != 0) {
                    goto lab_0x407152;
                } else {
                    if (v347 != 0) {
                        goto lab_0x407176;
                    } else {
                        // 0x4071c7
                        *v41 = 1;
                        v171 = v343;
                        v168 = v115;
                        v182 = v346;
                        v178 = v347;
                        v157 = v345;
                        v139 = 3;
                        v149 = v18;
                        goto lab_0x40629f;
                    }
                }
            }
            default: {
                goto lab_0x406ad7;
            }
        }
    }
  lab_0x406948:;
    int64_t v355 = v130 + 1; // 0x40694c
    v1 = v355 & 0xffffffff;
    int64_t v356 = v130 - 1;
    int64_t v357 = v356; // 0x40695e
    while (*(char *)v356 != 37) {
        // 0x40694f
        v356 = v357 - 1;
        v357 = v356;
    }
    int64_t v358 = 0x100000000 * (v355 - v356) >> 32; // 0x406969
    int64_t v359 = v3 - v20; // 0x40696f
    v1 = v359;
    int64_t v360 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x406977
    v134 = v359;
    v162 = v360;
    v176 = v358;
    v160 = v130;
    v161 = v356;
    v142 = v131;
    v152 = v358 >= v360 ? v358 : v360;
    goto lab_0x406983;
  lab_0x406983:
    // 0x406983
    if (v134 <= v152) {
        // break -> 0x405bb3
        goto lab_0x405bb3_11;
    }
    int64_t v361 = v160;
    int64_t v362 = v361; // 0x40698f
    int64_t v363 = 0; // 0x40698f
    if (v23 != 0) {
        int64_t v364 = v142;
        int64_t v365 = v161;
        int64_t v366 = v176;
        int64_t v367 = v366; // 0x406998
        int64_t v368 = v361; // 0x406998
        int64_t v369 = v365; // 0x406998
        int64_t v370 = v364; // 0x406998
        int64_t v371 = v23; // 0x406998
        if (v366 < v162) {
            // 0x40699a
            *v54 = v366;
            int64_t v372 = (0x100000000 * v115 >> 32) - v366; // 0x4069a2
            v1 = v372;
            *v55 = v361;
            int64_t v373 = v372 + v23; // 0x4069aa
            *v53 = v365;
            *v41 = (char)v364;
            int64_t * v374 = (int64_t *)v23;
            int32_t v375 = v1;
            if (v18 == 48) {
                // 0x406f24
                memset(v374, 48, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            } else {
                // 0x4069c2
                memset(v374, 32, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            }
        }
        int64_t v376 = v371;
        int64_t v377 = v369;
        *v53 = v368;
        v1 = v367;
        *v44 = v367;
        if ((char)v370 == 0) {
            // 0x406d6e
            memcpy((int64_t *)v376, (int64_t *)v377, (int32_t)v1);
        } else {
            // 0x406a03
            function_405ab0(v376, v377, v1);
        }
        // 0x406a12
        v362 = *v53;
        v363 = *v44 + v376;
    }
    // 0x406a15
    v8 = v12;
    v9 = v13;
    v25 = v362;
    v21 = v152 + v20;
    v24 = v363;
    goto lab_0x405b8e;
  lab_0x406ad7:;
    int64_t v378 = v177;
    int64_t v379 = v3 - v20; // 0x406ae0
    v1 = v379;
    v130 = v378;
    v131 = v16;
    if (*(char *)v378 != 37) {
        goto lab_0x406948;
    } else {
        int64_t v380 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x406ae8
        v134 = v379;
        v162 = v380;
        v176 = 1;
        v160 = v378;
        v161 = v378;
        v142 = v16;
        v152 = v380 != 0 ? v380 : 1;
        goto lab_0x406983;
    }
  lab_0x4062b2:
    // 0x4062b2
    *v45 = 0x2520;
    v328 = v124;
    v329 = v172;
    v330 = v169;
    v331 = v140;
    v332 = v16;
    v333 = v150;
    v334 = 0;
    goto lab_0x4062bf;
  lab_0x406019:
    // 0x406019
    *v50 = (int64_t)*v47;
    *v51 = *v65;
    int64_t v643 = *v44; // 0x406042
    v1 = v643;
    uint64_t v644 = function_405b00(0, -1, v643, *tm, v16, *v52); // 0x406047
    int64_t v645 = 0x100000000 * v115 >> 32;
    uint64_t v646 = (int32_t)v115 >= 0 ? v645 : 0; // 0x406060
    int64_t v647 = v644 >= v646 ? v644 : v646; // 0x406068
    int64_t v648 = v3 - v20; // 0x40606c
    *v53 = v647;
    if (v648 <= v647) {
        // break -> 0x405bb3
        goto lab_0x405bb3_11;
    }
    int64_t v649 = v647; // 0x406080
    int64_t v650 = 0; // 0x406080
    if (v23 != 0) {
        int64_t v651 = v644; // 0x406085
        int64_t v652 = v648; // 0x406085
        int64_t v653 = v23; // 0x406085
        if (v644 < v646) {
            // 0x406087
            *v54 = v644;
            int64_t v654 = v645 - v644; // 0x40608f
            v1 = v654;
            *v55 = v648;
            int64_t v655 = v654 + v23; // 0x406097
            int64_t * v656 = (int64_t *)v23;
            int32_t v657 = v1;
            if (v18 == 48) {
                // 0x406ff8
                memset(v656, 48, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            } else {
                // 0x4060a5
                memset(v656, 32, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            }
        }
        // 0x4060bf
        *v55 = v651;
        *v50 = (int64_t)*v47;
        *v51 = *v65;
        int64_t v658 = *v44; // 0x4060e6
        v1 = v658;
        function_405b00((int32_t)v653, v652, v658, *tm, v16, *v52);
        v649 = *v53;
        v650 = *v55 + v653;
    }
    // 0x4060fc
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v649 + v20;
    v24 = v650;
    goto lab_0x405b8e;
  lab_0x405d20:
    // 0x405d20
    *v45 = 0x2520;
    v340 = *v46;
    v342 = v124;
    v341 = v115;
    v338 = v123;
    v339 = 0;
    v335 = v288;
    v336 = v18;
    v337 = 0;
    goto lab_0x405d40;
  lab_0x406461:;
    int64_t v659 = (int64_t)*(int32_t *)v183;
    v167 = v115;
    v181 = v659;
    v138 = 2;
    v148 = v18;
    switch ((int32_t)v18) {
        case 48: {
            goto lab_0x406290;
        }
        case 45: {
            goto lab_0x406290;
        }
        default: {
            // 0x40647b
            v167 = v115;
            v181 = v659;
            v138 = 2;
            v148 = 95;
            goto lab_0x406290;
        }
    }
  lab_0x406526:
    // 0x406526
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v155 + v20;
    v24 = v156;
    goto lab_0x405b8e;
  lab_0x4062bf:
    // 0x4062bf
    *(char *)(v49 + 114) = (char)v122;
    v340 = v49 + 115;
    v342 = v328;
    v341 = v330;
    v338 = v329;
    v339 = v331 & 0xffffffff;
    v335 = v332;
    v336 = v333;
    v337 = v334;
    goto lab_0x405d40;
  lab_0x406ca8:;
    int64_t v630 = v153;
    int64_t v631 = v143;
    int64_t v632 = v137;
    int64_t v633 = v165;
    int64_t v634 = v175;
    *v41 = 45;
    char v436 = 45; // 0x406cb6
    int64_t v437 = v634; // 0x406cb6
    int64_t v438 = v633; // 0x406cb6
    int64_t v439 = v632; // 0x406cb6
    int64_t v440 = v631; // 0x406cb6
    int64_t v441 = v146; // 0x406cb6
    int64_t v442 = v630; // 0x406cb6
    int32_t v429; // 0x405b00
    int64_t v433; // 0x405b00
    int64_t v434; // 0x405b00
    int64_t v435; // 0x405b00
    int64_t v432; // 0x405b00
    int64_t v431; // 0x405b00
    int64_t v430; // 0x405b00
    if ((int32_t)v146 != 45) {
        goto lab_0x4065f0;
    } else {
        // 0x406ca8
        v429 = v633;
        v430 = 45;
        v431 = v634;
        v432 = v633;
        v433 = v632;
        v434 = v631;
        v435 = v630;
        goto lab_0x406cbc;
    }
  lab_0x405f4d:;
    int64_t v524 = v135;
    int64_t v523 = v166;
    int64_t v522 = v40 - v154; // 0x405f59
    char v505; // 0x405b00
    int64_t v510; // 0x405b00
    int64_t v511; // 0x405b00
    int64_t v512; // 0x405b00
    int64_t v509; // 0x405b00
    int64_t v506; // 0x405b00
    int64_t v508; // 0x405b00
    int64_t v507; // 0x405b00
    if ((int32_t)v147 == 45) {
        goto lab_0x405f74;
    } else {
        int32_t v635 = v524 - v522; // 0x405f6b
        if (v635 >= 0 == (v635 != 0)) {
            int64_t v636; // 0x405f5c
            int32_t v637; // 0x405f5f
            if (v637 == 95) {
                // 0x406e6e
                *v41 = 0;
                v505 = 0;
                v506 = v636;
                int64_t v638; // 0x405b00
                v507 = v638;
                v508 = v523;
                int64_t v639; // 0x405f68
                v509 = v639;
                v510 = v524;
                int64_t v640; // 0x405b00
                v511 = v640;
                int64_t v641; // 0x405b00
                v512 = v641;
                goto lab_0x406e73;
            } else {
                int64_t v642 = 0x100000000 * v524 >> 32; // 0x40713b
                v1 = v642;
                if (v642 >= v636) {
                    // break -> 0x405bb3
                    goto lab_0x405bb3_11;
                }
                // 0x407147
                goto lab_0x4066c5;
            }
        } else {
            goto lab_0x405f74;
        }
    }
  lab_0x406290:
    // 0x406290
    *v41 = 0;
    v171 = v123;
    v168 = v167;
    v182 = v181;
    v178 = 0;
    v157 = 0;
    v139 = v138;
    v149 = v148;
    goto lab_0x40629f;
  lab_0x40629f:;
    int64_t v596 = v149;
    int64_t v597 = v139;
    int64_t v598 = v157;
    int64_t v599 = v178;
    int64_t v600 = v182;
    int64_t v601 = v168;
    int64_t v602 = v171;
    v174 = v602;
    v164 = v601;
    v185 = v600;
    v180 = v599;
    v159 = v598;
    v136 = v597;
    v145 = v596;
    int64_t v603; // 0x405b00
    int64_t v604; // 0x405b00
    int64_t v605; // 0x405b00
    int64_t v606; // 0x405b00
    int64_t v607; // 0x405b00
    int64_t v608; // 0x405b00
    int64_t v609; // 0x405b00
    if ((int32_t)v122 != 79) {
        goto lab_0x406810;
    } else {
        // 0x4062a9
        v172 = v602;
        v169 = v601;
        v140 = v597;
        v150 = v596;
        v607 = v602;
        v606 = v601;
        v609 = v600;
        v608 = v599;
        v605 = v598;
        v603 = v597;
        v604 = v596;
        if ((char)v598 != 0) {
            goto lab_0x406819;
        } else {
            goto lab_0x4062b2;
        }
    }
  lab_0x40685d:;
    int32_t v610 = v186;
    int64_t v611 = -0x6db6db6d * (int64_t)v610 / 0x100000000;
    v1 = v611;
    v167 = v115;
    v181 = (v610 + (int32_t)v611 >> 2) - (v610 >> 31);
    v138 = 2;
    v148 = v18;
    goto lab_0x406290;
  lab_0x406810:
    // 0x406810
    v173 = v174;
    v163 = v164;
    v184 = v185;
    v179 = v180;
    v158 = v159;
    v141 = v136;
    v151 = v145;
    v607 = v174;
    v606 = v164;
    v609 = v185;
    v608 = v180;
    v605 = v159;
    v603 = v136;
    v604 = v145;
    if ((char)v159 == 0) {
        goto lab_0x406560;
    } else {
        goto lab_0x406819;
    }
  lab_0x405d40:;
    int64_t v381 = v337;
    int64_t v382 = v336;
    int64_t v383 = v341;
    *(char *)v340 = (char)v342;
    v1 = format;
    *(char *)(v340 + 1) = 0;
    *v44 = v338;
    *v56 = (int32_t)v339;
    *v39 = (char)v335;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x405d6c
    int64_t v384 = *v44; // 0x405d71
    v8 = v12;
    v9 = v13;
    v25 = v384;
    v21 = v20;
    v24 = v23;
    int64_t v385; // 0x405b00
    int64_t v386; // 0x405b00
    int64_t v387; // 0x405b00
    int64_t v388; // 0x405b00
    int64_t v389; // 0x405b00
    int64_t v390; // 0x405b00
    int64_t v391; // 0x405b00
    int64_t v392; // 0x405b00
    int64_t v393; // 0x405b00
    int64_t v394; // 0x405b00
    int64_t v395; // 0x405b00
    int64_t v396; // 0x405b00
    if (copied_chars == 0) {
        goto lab_0x405b8e;
    } else {
        uint64_t v397 = (int64_t)copied_chars - 1; // 0x405d7f
        int64_t v398 = 0x100000000 * v383 >> 32;
        uint64_t v399 = (int32_t)v383 >= 0 ? v398 : 0; // 0x405d91
        int64_t v400 = v397 >= v399 ? v397 : v399; // 0x405d99
        int64_t v401 = v3 - v20; // 0x405d9d
        v1 = v401;
        if (v401 <= v400) {
            // break -> 0x405bb3
            goto lab_0x405bb3_11;
        }
        // 0x405da9
        v392 = v400;
        v391 = v384;
        v388 = v20;
        v390 = 0;
        if (v23 == 0) {
            goto lab_0x405e46;
        } else {
            char v402 = *v39; // 0x405db7
            int64_t v403 = v397; // 0x405dc0
            int64_t v404 = v384; // 0x405dc0
            char v405 = v402; // 0x405dc0
            int64_t v406 = v23; // 0x405dc0
            if (v397 < v399 == *v56 == 0) {
                // 0x405dc7
                *v55 = v397;
                int64_t v407 = v398 - v397; // 0x405dcf
                v1 = v407;
                *v53 = v384;
                int64_t v408 = v407 + v23; // 0x405dd7
                *v41 = v402;
                int64_t * v409 = (int64_t *)v23;
                int32_t v410 = v1;
                if ((int32_t)v382 == 48) {
                    // 0x406d96
                    memset(v409, 48, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                } else {
                    // 0x405dea
                    memset(v409, 32, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                }
            }
            int64_t v411 = v406;
            *v53 = v404;
            v1 = v403;
            *v44 = v403;
            v393 = v400;
            v396 = v57;
            v395 = v411;
            v385 = v405;
            v386 = v20;
            if ((char)v381 != 0) {
                // 0x406d82
                function_405a60(v411, v57, v1);
                v394 = v400;
                v387 = v20;
                v389 = v411;
                goto lab_0x405e43;
            } else {
                goto lab_0x405e2b;
            }
        }
    }
  lab_0x406560:;
    int64_t v412 = v151;
    int64_t v413 = v141;
    int64_t v414 = v163;
    int64_t v415 = v173;
    *v39 = (char)v158;
    int64_t v416 = v184; // 0x406573
    int64_t v417 = v40 - 1;
    int64_t v418 = v417; // 0x406580
    if (v179 % 2 != 0) {
        // 0x406582
        *(char *)v417 = 58;
        v418 = v40 - 2;
    }
    int64_t v419 = v418;
    uint32_t v420 = (int32_t)v179 >> 1; // 0x406595
    int64_t v421 = 0xcccccccd * v416 / 0x800000000; // 0x406597
    v1 = v421;
    *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    while (v416 < 10 != (v420 == 0)) {
        // 0x4065ba
        v416 = v1 & 0xffffffff;
        int64_t v422 = v420; // 0x4065bc
        int64_t v423 = v419;
        v417 = v423 - 1;
        v418 = v417;
        if (v422 % 2 != 0) {
            // 0x406582
            *(char *)v417 = 58;
            v418 = v423 - 2;
        }
        // 0x406590
        v419 = v418;
        v420 = (int32_t)v422 >> 1;
        v421 = 0xcccccccd * v416 / 0x800000000;
        v1 = v421;
        *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    }
    int32_t v424 = v413; // 0x4065c6
    int32_t v425 = v414;
    int32_t v426 = v424 - v425; // 0x4065c6
    int64_t v427 = v426 < 0 == ((v426 ^ v424) & (int32_t)(v413 ^ v414)) < 0 ? v413 : v414;
    int64_t v428 = v427 & 0xffffffff; // 0x4065c9
    v175 = v415;
    v165 = v414;
    v137 = v428;
    v143 = v16;
    v146 = v412;
    v153 = v419;
    if (*v39 != 0) {
        goto lab_0x406ca8;
    } else {
        // 0x4065d6
        v170 = v415;
        v166 = v414;
        v135 = v428;
        v144 = v16;
        v147 = v412;
        v154 = v419;
        if (*v41 == 0) {
            goto lab_0x405f4d;
        } else {
            // 0x4065e1
            v429 = v425;
            v430 = 43;
            v431 = v415;
            v432 = v414;
            v433 = v428;
            v434 = v16;
            v435 = v419;
            if ((int32_t)v412 == 45) {
                goto lab_0x406cbc;
            } else {
                // 0x4065eb
                *v41 = 43;
                v436 = 43;
                v437 = v415;
                v438 = v414;
                v439 = v428;
                v440 = v16;
                v441 = v412;
                v442 = v419;
                goto lab_0x4065f0;
            }
        }
    }
  lab_0x4065f0:;
    int64_t v443 = v442;
    int64_t v444 = v441;
    int64_t v445 = v440;
    int64_t v446 = v439;
    int64_t v447 = v438;
    int64_t v448 = v437;
    int64_t v449 = v40 - v443; // 0x406600
    int64_t v450 = (v449 ^ 0xffffffff) + v446; // 0x406603
    uint64_t v451 = v3 - v20; // 0x406606
    int64_t v452; // 0x405b00
    int64_t v453; // 0x405b00
    int64_t v454; // 0x405b00
    int64_t v455; // 0x405b00
    int64_t v456; // 0x405b00
    int64_t v457; // 0x405b00
    int64_t v458; // 0x405b00
    int64_t v459; // 0x405b00
    int64_t v460; // 0x405b00
    int64_t v461; // 0x405b00
    int64_t v462; // 0x405b00
    int64_t v463; // 0x405b00
    int64_t v464; // 0x405b00
    int64_t v465; // 0x405b00
    int64_t v466; // 0x405b00
    int64_t v467; // 0x405b00
    int64_t v468; // 0x405b00
    int64_t v469; // 0x405b00
    int64_t v470; // 0x405b00
    int64_t v471; // 0x405b00
    int64_t v472; // 0x405b00
    int64_t v473; // 0x405b00
    int64_t v474; // 0x405b00
    int64_t v475; // 0x405b00
    int64_t v476; // 0x405b00
    int64_t v477; // 0x40664a
    if ((int32_t)v450 < 1) {
        int64_t v478 = 0x100000000 * v447 >> 32;
        int64_t v479 = (int32_t)v447 >= 0 ? v478 : 0; // 0x406dcd
        int64_t v480 = v479 != 0 ? v479 : 1; // 0x406dd3
        if (v480 >= v451) {
            // break -> 0x405bb3
            goto lab_0x405bb3_11;
        }
        int64_t v481 = v449; // 0x406de3
        int64_t v482 = v480; // 0x406de3
        int64_t v483 = v479; // 0x406de3
        int64_t v484 = v446; // 0x406de3
        int64_t v485 = v445; // 0x406de3
        int64_t v486 = 0; // 0x406de3
        if (v23 != 0) {
            int32_t v487 = v446; // 0x406de5
            int64_t v488 = v449; // 0x406de8
            int64_t v489 = v480; // 0x406de8
            int64_t v490 = v479; // 0x406de8
            int64_t v491 = v446; // 0x406de8
            int64_t v492 = v445; // 0x406de8
            int64_t v493 = v23; // 0x406de8
            if (v487 == 0 && v479 >= 2) {
                // 0x406df0
                *v61 = v449;
                int64_t v494 = v478 - 1; // 0x406df8
                v1 = v494;
                *v62 = v480;
                *v59 = v479;
                *v53 = v494 + v23;
                *v60 = v487;
                *v43 = (char)v445;
                if ((int32_t)v444 == 48) {
                    // 0x407215
                    int64_t * v495; // 0x405b00
                    int32_t v496; // 0x405b00
                    memset(v495, 48, v496);
                    int64_t v497 = *v53; // 0x407222
                    unsigned char v498 = *v43; // 0x407227
                    uint32_t v499 = *v60; // 0x40722d
                    int64_t v500 = *v59; // 0x407232
                    int64_t v501 = *v62; // 0x407237
                    int64_t v502 = *v61; // 0x40723c
                    v488 = v502;
                    v489 = v501;
                    v490 = v500;
                    v491 = v499;
                    v492 = v498;
                    v493 = v497;
                } else {
                    // 0x406e23
                    memset((int64_t *)v23, 32, (int32_t)v1);
                    v488 = *v61;
                    v489 = *v62;
                    v490 = *v59;
                    v491 = (int64_t)*v60;
                    v492 = (int64_t)*v43;
                    v493 = *v53;
                }
            }
            // 0x406e4f
            *(char *)v493 = *v41;
            v481 = v488;
            v482 = v489;
            v483 = v490;
            v484 = v491;
            v485 = v492;
            v486 = v493 + 1;
        }
        int64_t v503 = v482 + v20; // 0x406e60
        v472 = v3 - v503;
        v476 = v481;
        v473 = v447;
        v468 = v448;
        v469 = v483;
        v453 = v484;
        v457 = v485;
        v459 = v444;
        v461 = v443;
        v462 = v503;
        v466 = v486;
        goto lab_0x405f86;
    } else {
        int32_t v504 = v444; // 0x406612
        v505 = v436;
        v506 = v451;
        v507 = v448;
        v508 = v447;
        v509 = v450;
        v510 = v446;
        v511 = v445;
        v512 = v443;
        if (v504 == 95) {
            goto lab_0x406e73;
        } else {
            // 0x40661c
            if (0x100000000 * v446 >> 32 >= v451) {
                // break -> 0x405bb3
                goto lab_0x405bb3_11;
            }
            int64_t v513 = 0x100000000 * v447 >> 32;
            int64_t v514 = (int32_t)v447 >= 0 ? v513 : 0; // 0x406637
            v1 = v514;
            uint64_t v515 = v514 != 0 ? v514 : 1; // 0x40663d
            if (v515 >= v451) {
                // break -> 0x405bb3
                goto lab_0x405bb3_11;
            }
            // 0x40664a
            v477 = v515 + v20;
            int64_t v516 = 0x100000000 * v450 >> 32; // 0x40664d
            v475 = v449;
            v467 = v448;
            v471 = v516;
            v452 = v446;
            v456 = v445;
            v458 = v444;
            v460 = v443;
            v463 = v477;
            v465 = 0;
            if (v23 == 0) {
                goto lab_0x406710;
            } else {
                int32_t v517 = v446; // 0x40665c
                v474 = v449;
                v470 = v516;
                v454 = v446;
                v455 = v445;
                v464 = v23;
                if (v517 == 0 && v514 >= 2) {
                    // 0x406667
                    *v59 = v516;
                    int64_t v518 = v513 - 1; // 0x40666f
                    v1 = v518;
                    *v54 = v449;
                    int64_t v519 = v518 + v23; // 0x406678
                    *v56 = v517;
                    *v39 = (char)v445;
                    int64_t * v520 = (int64_t *)v23;
                    int32_t v521 = v1;
                    if (v504 == 48) {
                        // 0x40727f
                        memset(v520, 48, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    } else {
                        // 0x406690
                        memset(v520, 32, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    }
                }
                // 0x4066b5
                *(char *)v464 = *v41;
                goto lab_0x4066c5;
            }
        }
    }
  lab_0x405f74:
    // 0x405f74
    v472 = v3 - v20;
    v476 = v522;
    v473 = v523;
    v468 = v170;
    v469 = (int32_t)v523 >= 0 ? 0x100000000 * v523 >> 32 : 0;
    v453 = v524;
    v457 = v144;
    v459 = v147;
    v461 = v154;
    v462 = v20;
    v466 = v23;
    goto lab_0x405f86;
  lab_0x407176:
    // 0x407176
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v347 + 100 * v346;
    v178 = 4;
    v157 = v345;
    v139 = 6;
    v149 = v18;
    goto lab_0x40629f;
  lab_0x407152:
    // 0x407152
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v348 + 0x2710 * v346 + 100 * v347;
    v178 = 20;
    v157 = v345;
    v139 = 9;
    v149 = v18;
    goto lab_0x40629f;
  lab_0x406819:
    // 0x406819
    v173 = v607;
    v163 = v606;
    v184 = -v609 & 0xffffffff;
    v179 = v608;
    v158 = v605;
    v141 = v603;
    v151 = v604;
    goto lab_0x406560;
  lab_0x406cbc:;
    int64_t v612 = 0x100000000 * v432 >> 32;
    int64_t v613 = v429 >= 0 ? v612 : 0; // 0x406cd2
    uint64_t v614 = v613 != 0 ? v613 : 1; // 0x406cd8
    if (v3 - v20 <= v614) {
        // break -> 0x405bb3
        goto lab_0x405bb3_11;
    }
    int64_t v615 = v434;
    int64_t v616 = v433;
    int64_t v617 = v613; // 0x406ceb
    int64_t v618 = v616; // 0x406ceb
    int64_t v619 = v615; // 0x406ceb
    int64_t v620 = 0; // 0x406ceb
    if (v23 != 0) {
        int64_t v621 = v430;
        int32_t v622 = v616; // 0x406ced
        int64_t v623 = v621; // 0x406cf0
        int64_t v624 = v613; // 0x406cf0
        int64_t v625 = v616; // 0x406cf0
        int64_t v626 = v615; // 0x406cf0
        int64_t v627 = v23; // 0x406cf0
        if (v622 == 0 && v613 >= 2) {
            // 0x406cf8
            *v58 = (char)v621;
            int64_t v628 = v612 - 1; // 0x406d07
            *v54 = v613;
            v1 = v628;
            *v56 = v622;
            *v39 = (char)v615;
            *v44 = v628;
            memset((int64_t *)v23, 32, (int32_t)v628);
            v624 = *v54;
            v623 = (int64_t)*v58;
            v625 = (int64_t)*v56;
            v626 = (int64_t)*v39;
            v627 = *v44 + v23;
        }
        // 0x406d44
        *(char *)v627 = (char)v623;
        v617 = v624;
        v618 = v625;
        v619 = v626;
        v620 = v627 + 1;
    }
    int64_t v629 = v614 + v20; // 0x406d4f
    v472 = v3 - v629;
    v476 = v40 - v435;
    v473 = v432;
    v468 = v431;
    v469 = v617;
    v453 = v618;
    v457 = v619;
    v459 = 45;
    v461 = v435;
    v462 = v629;
    v466 = v620;
    goto lab_0x405f86;
  lab_0x405f86:;
    uint64_t v525 = v469;
    uint64_t v526 = v476;
    int64_t v527 = v526 >= v525 ? v526 : v525; // 0x405f8c
    if (v527 >= v472) {
        // break -> 0x405bb3
        goto lab_0x405bb3_11;
    }
    int64_t v528 = v466;
    int64_t v529 = v462;
    int64_t v530 = v468;
    v392 = v527;
    v391 = v530;
    v388 = v529;
    v390 = 0;
    if (v528 == 0) {
        goto lab_0x405e46;
    } else {
        int64_t v531 = v457;
        int64_t v532 = v526; // 0x405fa5
        int64_t v533 = v530; // 0x405fa5
        int64_t v534 = v531; // 0x405fa5
        int64_t v535 = v528; // 0x405fa5
        if (v526 < v525 == (int32_t)v453 == 0) {
            // 0x405fac
            *v55 = v526;
            int64_t v536 = (0x100000000 * v473 >> 32) - v526; // 0x405fb4
            v1 = v536;
            *v53 = v530;
            *v41 = (char)v531;
            if ((int32_t)v459 == 48) {
                // 0x406ef7
                int64_t * v537; // 0x405b00
                int32_t v538; // 0x405b00
                memset(v537, 48, v538);
                unsigned char v539 = *v41; // 0x406f07
                int64_t v540 = *v53; // 0x406f0d
                int64_t v541 = *v55; // 0x406f12
                v532 = v541;
                v533 = v540;
                v534 = v539;
                int64_t v542; // 0x405fbc
                v535 = v542;
            } else {
                // 0x405fcf
                memset((int64_t *)v528, 32, (int32_t)v1);
                v532 = *v55;
                v533 = *v53;
                v534 = (int64_t)*v41;
                v535 = v528 + v536;
            }
        }
        // 0x405fef
        *v53 = v533;
        v1 = v532;
        *v44 = v532;
        v393 = v527;
        v396 = v461;
        v395 = v535;
        v385 = v534;
        v386 = v529;
        goto lab_0x405e2b;
    }
  lab_0x405e46:
    // 0x405e46
    v8 = v12;
    v9 = v13;
    v25 = v391;
    v21 = v388 + v392;
    v24 = v390;
    goto lab_0x405b8e;
  lab_0x406e73:;
    int64_t v543 = v509;
    int64_t v544 = 0x100000000 * v543 >> 32; // 0x406e73
    if (v544 >= v506) {
        // break -> 0x405bb3
        goto lab_0x405bb3_11;
    }
    int64_t v545 = v512;
    int64_t v546 = v511;
    int64_t v547 = v510;
    int64_t v548 = v508;
    int64_t v549 = v507;
    char v550 = v505; // 0x406e82
    int64_t v551 = v543 & 0xffffffff; // 0x406e82
    int64_t v552 = v547; // 0x406e82
    int64_t v553 = v546; // 0x406e82
    int64_t v554 = 0; // 0x406e82
    if (v23 != 0) {
        // 0x406e84
        v1 = v544;
        *v60 = (int32_t)v543;
        *v56 = (int32_t)v547;
        *v39 = (char)v546;
        memset((int64_t *)v23, 32, (int32_t)v544);
        v550 = *v41;
        v551 = (int64_t)*v60;
        v552 = (int64_t)*v56;
        v553 = (int64_t)*v39;
        v554 = v544 + v23;
    }
    int64_t v555 = v554;
    int64_t v556 = v553;
    int64_t v557 = v552;
    int64_t v558 = v551;
    char v559 = v550; // 0x406ed0
    int64_t v560 = v544 + v20; // 0x406eb8
    int32_t v561 = v558; // 0x406ebe
    int32_t v562 = v561 - (int32_t)v548; // 0x406ebe
    int64_t v563 = v562 < 0 == ((v562 ^ v561) & (int32_t)(v558 ^ v548)) < 0 ? 0 : v548 - v558 & 0xffffffff; // 0x406ec6
    int64_t v564 = v3 - v560; // 0x406ecd
    int64_t v565 = 0x100000000 * v563 >> 32;
    if (v559 != 0) {
        int64_t v566 = v563 != 0 ? v565 : 1; // 0x406f6b
        if (v566 >= v564) {
            // break -> 0x405bb3
            goto lab_0x405bb3_11;
        }
        int64_t v567 = v566; // 0x406f7b
        int64_t v568 = v565; // 0x406f7b
        int64_t v569 = v557; // 0x406f7b
        int64_t v570 = v556; // 0x406f7b
        int64_t v571 = 0; // 0x406f7b
        if (v555 != 0) {
            int32_t v572 = v557; // 0x406f7d
            char v573 = v559; // 0x406f80
            int64_t v574 = v566; // 0x406f80
            int64_t v575 = v565; // 0x406f80
            int64_t v576 = v557; // 0x406f80
            int64_t v577 = v556; // 0x406f80
            int64_t v578 = v555; // 0x406f80
            if (v572 == 0 && v565 >= 2) {
                int64_t v579 = v565 - 1; // 0x406f88
                *v59 = v566;
                v1 = v579;
                *v60 = v572;
                *v43 = (char)v556;
                *v53 = v565;
                memset((int64_t *)v555, 32, (int32_t)v579);
                v574 = *v59;
                v575 = *v53;
                v573 = *v41;
                v576 = (int64_t)*v60;
                v577 = (int64_t)*v43;
                v578 = v579 + v555;
            }
            // 0x406fc8
            v568 = v575;
            v567 = v574;
            *(char *)v578 = v573;
            v569 = v576;
            v570 = v577;
            v571 = v578 + 1;
        }
        int64_t v580 = v567 + v560; // 0x406fd9
        v472 = v3 - v580;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v568;
        v453 = v569;
        v457 = v570;
        v459 = 95;
        v461 = v545;
        v462 = v580;
        v466 = v571;
    } else {
        // 0x406edb
        v472 = v564;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v565;
        v453 = v557;
        v457 = v556;
        v459 = 95;
        v461 = v545;
        v462 = v560;
        v466 = v555;
    }
    goto lab_0x405f86;
  lab_0x405e2b:;
    int64_t v581 = v386;
    int64_t v582 = v395;
    int64_t v583 = v396;
    int64_t v584 = v393;
    if ((char)v385 == 0) {
        // 0x406c90
        memcpy((int64_t *)v582, (int64_t *)v583, (int32_t)v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    } else {
        // 0x405e34
        function_405ab0(v582, v583, v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    }
    goto lab_0x405e43;
  lab_0x406710:;
    int64_t v585 = v463 + v471; // 0x406714
    v472 = v3 - v585;
    v476 = v475;
    v473 = 0;
    v468 = v467;
    v469 = 0;
    v453 = v452;
    v457 = v456;
    v459 = v458;
    v461 = v460;
    v462 = v585;
    v466 = v465;
    goto lab_0x405f86;
  lab_0x4066c5:;
    int64_t v586 = v464 + 1;
    int64_t v587 = v477;
    int64_t v588 = v443;
    int64_t v589 = v444;
    int64_t v590 = v455;
    int64_t v591 = v454;
    int64_t v592 = v470;
    int64_t v593 = v448;
    int64_t v594 = v474;
    v475 = v594;
    v467 = v593;
    v471 = v592;
    v452 = v591;
    v456 = v590;
    v458 = v589;
    v460 = v588;
    v463 = v587;
    v465 = 0;
    if (v586 != 0) {
        // 0x4066ca
        v1 = v592;
        *v59 = v594;
        *v60 = (int32_t)v591;
        *v55 = v593;
        *v39 = (char)v590;
        *v44 = v592;
        memset((int64_t *)v586, 48, (int32_t)v592);
        int64_t v595 = *v44; // 0x4066f3
        v475 = *v59;
        v467 = *v55;
        v471 = v595;
        v452 = (int64_t)*v60;
        v456 = (int64_t)*v39;
        v458 = v589;
        v460 = v588;
        v463 = v587;
        v465 = v595 + v586;
    }
    goto lab_0x406710;
  lab_0x405e43:
    // 0x405e43
    v392 = v394;
    v391 = *v53;
    v388 = v387;
    v390 = *v44 + v389;
    goto lab_0x405e46;
  lab_0x405b9b_2:
    // 0x405b9b
    if (v3 != 0 && v5 != 0) {
        // 0x405ba7
        *(char *)v5 = 0;
    }
    // 0x405bb3
    return result;
}
// Address range: 0x4072d0 - 0x4072ef
int64_t function_4072d0(int64_t * a1, int64_t a2, char * a3, int64_t * a4, int64_t a5, int64_t a6) {
    char v1 = 0; // bp-9, 0x4072d4
    int64_t result = function_405b00((int32_t)(int64_t)a1, a2, (int64_t)a3, (int64_t)a4, 0, (int64_t)&v1); // 0x4072e5
    return result;
}
// Address range: 0x4072f0 - 0x407389
int64_t function_4072f0(int64_t str) {
    // 0x4072f0
    if (str == 0) {
        // 0x407369
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g37);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4072fe
    int64_t result = (int64_t)found_char_pos; // 0x4072fe
    if (found_char_pos == NULL) {
        // 0x407359
        g51 = str;
        g36 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x407308
    if (v1 - str < 7) {
        // 0x407359
        g51 = str;
        g36 = str;
        return result;
    }
    // 0x407318
    bool v2; // 0x4072f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4072f0
    int64_t v5 = result - 6; // 0x4072f0
    int64_t v6 = 7; // 0x407326
    unsigned char v7 = *(char *)v5; // 0x407326
    char v8 = *(char *)v4; // 0x407326
    char v9 = v8; // 0x407326
    bool v10 = false; // 0x407326
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
    int64_t v12 = (int64_t)"lt-"; // 0x407330
    int64_t v13 = v1; // 0x407330
    int64_t v14 = 3; // 0x407330
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x407359
        g51 = str;
        g36 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x407342
    char v16 = *(char *)v12; // 0x407342
    char v17 = v16; // 0x407342
    bool v18 = false; // 0x407342
    while (v15 == v16) {
        // 0x407332
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
    int64_t v20 = v1; // 0x40734c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40734e
        v20 = result + 4;
        g34 = v20;
    }
    // 0x407359
    g51 = v20;
    g36 = v20;
    return result;
}
// Address range: 0x407390 - 0x407482
int64_t function_407390(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4073a4
    int64_t result = (int64_t)v1; // 0x4073a4
    if (result != a1) {
        // 0x4073b1
        return result;
    }
    int64_t v2 = function_40c750(); // 0x4073c0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x407476
    if (v3 == 85) {
        // 0x4073d0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x407468
            result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x4073fe
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x40740b
        // 0x4073b1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x407468
        result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40744d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40745a
    // 0x4073b1
    return result4;
}
// Address range: 0x407490 - 0x4074e7
int64_t function_407490(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x407490
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4074d8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4074e7 - 0x4086b1
int64_t function_4074e7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x407531
    int64_t v3 = 0; // 0x407531
    int64_t v4; // 0x4074e7
    int64_t v5; // 0x4074e7
    int64_t v6; // 0x4074e7
    int64_t v7; // 0x4074e7
    int64_t v8; // 0x4074e7
    int64_t v9; // 0x4074e7
    int64_t v10; // 0x4074e7
    int64_t v11; // 0x4074e7
    int64_t v12; // 0x4074e7
    int64_t v13; // 0x4074e7
    int64_t v14; // 0x4074e7
    int64_t v15; // 0x4074e7
    int64_t v16; // 0x4074e7
    int64_t v17; // 0x4074e7
    int64_t v18; // 0x4074e7
    int64_t result; // 0x4074e7
    int64_t v19; // 0x4074e7
    int32_t wc; // bp+132, 0x4074e7
    int64_t ps; // bp+136, 0x4074e7
    char v20; // 0x407aa0
    int64_t v21; // 0x407aa0
    int64_t v22; // 0x407e48
    int64_t v23; // 0x4074e7
    int64_t v24; // 0x407e67
    int32_t v25; // 0x4074e7
    while (true) {
      lab_0x407538_2:
        // 0x407538
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4074e7
        int64_t v27; // 0x40756c
        while (true) {
          lab_0x407538:
            // 0x407538
            v5 = v26;
            bool v28 = v15 == v5; // 0x407543
            if (v15 == -1) {
                // 0x407545
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x407553
            if (v28) {
                // break (via goto) -> 0x407cb8
                goto lab_0x407cb8;
            }
            // 0x40755c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g73 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x407b4b
                    if (v25 % 2 == 0) {
                        goto lab_0x407691;
                    }
                    // 0x407f6d
                    v26 = v5 + 1;
                    goto lab_0x407538;
                }
                case 7: {
                    goto lab_0x407691;
                }
                case 8: {
                    goto lab_0x407691;
                }
                case 9: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x407691;
                }
                case 12: {
                    goto lab_0x407691;
                }
                case 13: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40765d;
                }
                case 36: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x407691;
                }
                case 38: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x407691;
                }
                case 44: {
                    goto lab_0x407691;
                }
                case 45: {
                    goto lab_0x407691;
                }
                case 46: {
                    goto lab_0x407691;
                }
                case 47: {
                    goto lab_0x407691;
                }
                case 48: {
                    goto lab_0x407691;
                }
                case 49: {
                    goto lab_0x407691;
                }
                case 50: {
                    goto lab_0x407691;
                }
                case 51: {
                    goto lab_0x407691;
                }
                case 52: {
                    goto lab_0x407691;
                }
                case 53: {
                    goto lab_0x407691;
                }
                case 54: {
                    goto lab_0x407691;
                }
                case 55: {
                    goto lab_0x407691;
                }
                case 56: {
                    goto lab_0x407691;
                }
                case 57: {
                    goto lab_0x407691;
                }
                case 58: {
                    goto lab_0x407691;
                }
                case 59: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x407691;
                }
                case 66: {
                    goto lab_0x407691;
                }
                case 67: {
                    goto lab_0x407691;
                }
                case 68: {
                    goto lab_0x407691;
                }
                case 69: {
                    goto lab_0x407691;
                }
                case 70: {
                    goto lab_0x407691;
                }
                case 71: {
                    goto lab_0x407691;
                }
                case 72: {
                    goto lab_0x407691;
                }
                case 73: {
                    goto lab_0x407691;
                }
                case 74: {
                    goto lab_0x407691;
                }
                case 75: {
                    goto lab_0x407691;
                }
                case 76: {
                    goto lab_0x407691;
                }
                case 77: {
                    goto lab_0x407691;
                }
                case 78: {
                    goto lab_0x407691;
                }
                case 79: {
                    goto lab_0x407691;
                }
                case 80: {
                    goto lab_0x407691;
                }
                case 81: {
                    goto lab_0x407691;
                }
                case 82: {
                    goto lab_0x407691;
                }
                case 83: {
                    goto lab_0x407691;
                }
                case 84: {
                    goto lab_0x407691;
                }
                case 85: {
                    goto lab_0x407691;
                }
                case 86: {
                    goto lab_0x407691;
                }
                case 87: {
                    goto lab_0x407691;
                }
                case 88: {
                    goto lab_0x407691;
                }
                case 89: {
                    goto lab_0x407691;
                }
                case 90: {
                    goto lab_0x407691;
                }
                case 91: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x407691;
                }
                case 94: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x407691;
                }
                case 96: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x407691;
                }
                case 98: {
                    goto lab_0x407691;
                }
                case 99: {
                    goto lab_0x407691;
                }
                case 100: {
                    goto lab_0x407691;
                }
                case 101: {
                    goto lab_0x407691;
                }
                case 102: {
                    goto lab_0x407691;
                }
                case 103: {
                    goto lab_0x407691;
                }
                case 104: {
                    goto lab_0x407691;
                }
                case 105: {
                    goto lab_0x407691;
                }
                case 106: {
                    goto lab_0x407691;
                }
                case 107: {
                    goto lab_0x407691;
                }
                case 108: {
                    goto lab_0x407691;
                }
                case 109: {
                    goto lab_0x407691;
                }
                case 110: {
                    goto lab_0x407691;
                }
                case 111: {
                    goto lab_0x407691;
                }
                case 112: {
                    goto lab_0x407691;
                }
                case 113: {
                    goto lab_0x407691;
                }
                case 114: {
                    goto lab_0x407691;
                }
                case 115: {
                    goto lab_0x407691;
                }
                case 116: {
                    goto lab_0x407691;
                }
                case 117: {
                    goto lab_0x407691;
                }
                case 118: {
                    goto lab_0x407691;
                }
                case 119: {
                    goto lab_0x407691;
                }
                case 120: {
                    goto lab_0x407691;
                }
                case 121: {
                    goto lab_0x407691;
                }
                case 122: {
                    goto lab_0x407691;
                }
                case 123: {
                    goto lab_0x407635;
                }
                case 124: {
                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x407635;
                }
                case 126: {
                    goto lab_0x40765d;
                }
                default: {
                    goto lab_0x407a35;
                }
            }
        }
      lab_0x407a35:
        if (v23 != 1) {
            // 0x407da0
            ps = 0;
            int64_t len = v15; // 0x407db0
            if (v15 == -1) {
                // 0x407db2
                len = strlen((char *)str);
            }
            // 0x407dde
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x407e3f:
                // 0x407e3f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x407e44
                int64_t v30 = v29 + str;
                v24 = function_40ae50(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4083ba_2;
                    }
                    case -1: {
                        goto lab_0x4083ba_2;
                    }
                    case -2: {
                        // 0x40849d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4084d7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4084da
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4084e7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4084e0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4083ba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4083ba_2;
                    }
                    case 1: {
                        goto lab_0x407e10;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x407ebc
                        char v34 = *(char *)v33; // 0x407ecd
                        unsigned char v35; // 0x4074e7
                        if (v34 < 125) {
                            // 0x407ed8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x407eef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_407490(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x407ec0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x407ecd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x407ed8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x407eef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_407490(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x407ec0
                            v33++;
                        }
                        goto lab_0x407e10;
                    }
                }
            }
            goto lab_0x4083ba_2;
        } else {
            // 0x407a84
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x407691;
        }
    }
  lab_0x407cb8:
    // 0x407cb8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4085ba
        if (v8 > result) {
            // 0x4085c3
            *(char *)(v12 + result) = 0;
        }
        // 0x4078e7
        return result;
    }
    return function_407490(v10, v6, str, v4, 2, v25 & -3);
  lab_0x407691:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4076a0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4078aa_2;
        }
    }
    int64_t v39 = result; // 0x4077a1
    char v40 = v20; // 0x4077a1
    int64_t v41 = v38; // 0x4077a1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4077a1
    int64_t v43 = v36; // 0x4077a1
    goto lab_0x40771d;
  lab_0x4078aa_2:
    // 0x4078e7
    return function_407490(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4083ba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x407691;
    } else {
        uint64_t v49 = v46 + v5; // 0x407f8e
        int64_t v50 = v5 + 1; // 0x408071
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x408078
        char v52 = v20; // 0x408078
        int64_t v53 = result; // 0x408078
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x408041
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x408045
            int64_t v56 = v54 + 1; // 0x40804a
            int64_t v57 = v51 + 1; // 0x408071
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40803c
                v54 = v56;
                if (v47 > v54) {
                    // 0x408041
                    *(char *)(v54 + v48) = v55;
                }
                // 0x408045
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
        goto lab_0x40771d;
    }
  lab_0x407e10:
    // 0x407e10
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x407e2f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x407e32
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4083ba
        goto lab_0x4083ba_2;
    }
    goto lab_0x407e3f;
  lab_0x40765d:
    // 0x40765d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4078aa_2;
    }
    goto lab_0x407691;
  lab_0x407635:;
    bool v60 = v15 == 1; // 0x407640
    if (v15 == -1) {
        // 0x407642
        v60 = *(char *)v1 == 0;
    }
    // 0x40764e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x407691;
    } else {
        goto lab_0x40765d;
    }
  lab_0x40771d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x407722
        *(char *)(v44 + v45) = v40;
    }
    // 0x407726
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x407538_2;
}
// Address range: 0x4086c0 - 0x40885e
int64_t function_4086c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4086c2
    int32_t * v3 = __errno_location(); // 0x4086dc
    int64_t v4 = (int64_t)g27; // 0x4086e1
    int32_t v5 = *v3; // 0x4086eb
    int64_t v6 = v4; // 0x408701
    if (v2 >= (int64_t)*(int32_t *)&g30) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x408859
            function_4097b0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x408710
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x408717
        int64_t v9; // 0x4086c0
        if (g27 == &g28) {
            int64_t v10 = function_4095c0(0, v8); // 0x40883a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g28); // 0x40883f
            *(int64_t *)&g27 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4095c0(v4, v8); // 0x40872b
            *(int64_t *)&g27 = v12;
            v9 = v12;
        }
        // 0x40873a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g30; // 0x40873a
        int32_t v14 = v7; // 0x408741
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g30 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x408771
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40877b
    int64_t * v17 = (int64_t *)v15; // 0x40877e
    uint64_t v18 = *v17; // 0x40877e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x408781
    int64_t result = *v19; // 0x408781
    int64_t v20; // 0x4086c0
    uint64_t v21 = function_407490(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4087a4
    if (v18 > v21) {
        // 0x40881b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4087b7
    *v17 = v22;
    if (result != (int64_t)&g52) {
        // 0x4087c7
        free((int64_t *)result);
    }
    int64_t result2 = function_409560(v22); // 0x4087e1
    *v19 = result2;
    int64_t v23; // 0x4086c0
    function_407490(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40881b
    *v3 = v5;
    return result2;
}
// Address range: 0x408860 - 0x408894
int64_t function_408860(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x408867
    int64_t result = function_409760(a1 == 0 ? (int64_t)&g53 : a1, 56); // 0x408886
    return result;
}
// Address range: 0x4088a0 - 0x4088af
int64_t function_4088a0(int32_t a1) {
    uint32_t result = *((a1 == 0 ? (int32_t *)&g53 : (int32_t *)(int64_t)a1)); // 0x4088ac
    return result;
}
// Address range: 0x4088b0 - 0x4088bf
int64_t function_4088b0(int32_t a1, int32_t a2) {
    // 0x4088b0
    *((a1 == 0 ? (int32_t *)&g53 : (int32_t *)(int64_t)a1)) = a2;
    return (int64_t)&g53;
}
// Address range: 0x4088c0 - 0x4088f3
int64_t function_4088c0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g53 + 8 : a1 + 8; // 0x4088d9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4088de
    uint32_t v3 = *v2; // 0x4088de
    uint32_t v4 = (int32_t)a2 % 32; // 0x4088e2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x408900 - 0x408913
int64_t function_408900(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g53 + 4 : a1 + 4); // 0x40890c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x408920 - 0x40894b
int64_t function_408920(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g53 : a1; // 0x408928
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x408945
        abort();
        // UNREACHABLE
    }
    // 0x40893c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g53;
}
// Address range: 0x408950 - 0x4089c2
int64_t function_408950(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g53 : a5; // 0x408972
    int32_t * v2 = __errno_location(); // 0x40897b
    uint32_t v3 = *(int32_t *)v1; // 0x40899b
    int64_t result = function_407490(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4089aa
    return result;
}
// Address range: 0x4089d0 - 0x408ab1
int64_t function_4089d0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g53 : a4; // 0x4089f2
    int32_t * v2 = __errno_location(); // 0x4089f8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x408a17
    int32_t * v4 = (int32_t *)v1; // 0x408a1a
    int64_t v5 = function_407490(0, 0, a1, a2, (int64_t)*v4, v3); // 0x408a35
    int64_t v6 = v5 + 1; // 0x408a3a
    int64_t result = function_409560(v6); // 0x408a4f
    function_407490(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x408a94
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x408a9d
    return result;
}
// Address range: 0x408ac0 - 0x408aca
int64_t function_408ac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408ac0
    return function_4089d0(a1, a2, 0, a3);
}
// Address range: 0x408ad0 - 0x408b65
int64_t function_408ad0(void) {
    uint32_t v1 = *(int32_t *)&g30; // 0x408ad0
    int64_t v2 = v1; // 0x408ad0
    int64_t v3 = v2; // 0x408ae4
    if (v1 >= 2) {
        int64_t v4 = &g30;
        int64_t v5 = v4 + 16; // 0x408b03
        free((int64_t *)*(int64_t *)v4);
        v3 = &g65;
        while (v5 != (int64_t)g27 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x408b00
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g65;
        }
    }
    int64_t v6 = v3; // 0x408b1d
    if (g28 != 0x6174a0) {
        // 0x408b1f
        free((int64_t *)g28);
        g28 = 256;
        *(int64_t *)&g29 = (int64_t)&g52;
        v6 = &g65;
    }
    int64_t result = v6; // 0x408b41
    if (g27 != &g28) {
        // 0x408b43
        free(g27);
        *(int64_t *)&g27 = (int64_t)&g28;
        result = &g65;
    }
    // 0x408b56
    *(int32_t *)&g30 = 1;
    return result;
}
// Address range: 0x408b70 - 0x408b81
int64_t function_408b70(void) {
    // 0x408b70
    int64_t v1; // 0x408b70
    return function_4086c0(v1, v1, -1, (int64_t *)&g53);
}
// Address range: 0x408b90 - 0x408b9a
int64_t function_408b90(void) {
    // 0x408b90
    int64_t v1; // 0x408b90
    return function_4086c0(v1, v1, v1, (int64_t *)&g53);
}
// Address range: 0x408ba0 - 0x408bb6
int64_t function_408ba0(int64_t a1) {
    // 0x408ba0
    return function_4086c0(0, a1, -1, (int64_t *)&g53);
}
// Address range: 0x408bc0 - 0x408bd2
int64_t function_408bc0(int64_t a1, int64_t a2) {
    // 0x408bc0
    return function_4086c0(0, a1, a2, (int64_t *)&g53);
}
// Address range: 0x408be0 - 0x408c48
int64_t function_408be0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408bf0
    return function_4086c0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408c50 - 0x408cb4
int64_t function_408c50(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408c60
    return function_4086c0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x408cc0 - 0x408ccc
int64_t function_408cc0(int64_t a1, int64_t a2) {
    // 0x408cc0
    return function_408be0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x408cd0 - 0x408cdf
int64_t function_408cd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408cd0
    return function_408c50(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x408ce0 - 0x408d50
int64_t function_408ce0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g53); // 0x408ced
    int128_t v2 = __asm_movdqa(g54); // 0x408cf5
    int128_t v3 = __asm_movdqa(g55); // 0x408cfd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x408d12
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x408d28
    uint32_t v6 = *v5; // 0x408d28
    uint32_t v7 = (int32_t)a3 % 32; // 0x408d2d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4086c0(0, a1, a2, &v4);
}
// Address range: 0x408d50 - 0x408d5d
int64_t function_408d50(int64_t a1, int64_t a2) {
    // 0x408d50
    return function_408ce0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x408d60 - 0x408d71
int64_t function_408d60(int64_t a1) {
    // 0x408d60
    return function_408ce0(a1, -1, 58);
}
// Address range: 0x408d80 - 0x408d8a
int64_t function_408d80(void) {
    // 0x408d80
    int64_t v1; // 0x408d80
    return function_408ce0(v1, v1, 58);
}
// Address range: 0x408d90 - 0x408dfe
int64_t function_408d90(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408daa
    return function_4086c0(a1, a3, -1, &v1);
}
// Address range: 0x408e00 - 0x408e6c
int64_t function_408e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g53); // 0x408e07
    int128_t v2 = __asm_movdqa(g54); // 0x408e0f
    int128_t v3 = __asm_movdqa(g55); // 0x408e17
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x408e39
    if (a2 == 0 || a3 == 0) {
        // 0x408e67
        abort();
        // UNREACHABLE
    }
    // 0x408e4a
    return function_4086c0(a1, a4, a5, &v4);
}
// Address range: 0x408e70 - 0x408e79
int64_t function_408e70(void) {
    // 0x408e70
    int64_t v1; // 0x408e70
    return function_408e00(v1, v1, v1, v1, -1);
}
// Address range: 0x408e80 - 0x408e97
int64_t function_408e80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408e80
    return function_408e00(0, a1, a2, a3, -1);
}
// Address range: 0x408ea0 - 0x408eb3
int64_t function_408ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x408ea0
    return function_408e00(0, a1, a2, a3, a4);
}
// Address range: 0x408ec0 - 0x408eca
int64_t function_408ec0(void) {
    // 0x408ec0
    int64_t v1; // 0x408ec0
    return function_4086c0(v1, v1, v1, &g26);
}
// Address range: 0x408ed0 - 0x408ee2
int64_t function_408ed0(int64_t a1, int64_t a2) {
    // 0x408ed0
    return function_4086c0(0, a1, a2, &g26);
}
// Address range: 0x408ef0 - 0x408f01
int64_t function_408ef0(int64_t a1, int64_t a2) {
    // 0x408ef0
    return function_4086c0(a1, a2, -1, &g26);
}
// Address range: 0x408f10 - 0x408f26
int64_t function_408f10(int64_t a1) {
    // 0x408f10
    return function_4086c0(0, a1, -1, &g26);
}
// Address range: 0x408f30 - 0x408f7a
int64_t function_408f30(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x408f3b
    *v1 = 0;
    int64_t v2; // 0x408f30
    int32_t v3 = function_40c6a0((int64_t *)".", 0x80000, v2); // 0x408f4f
    *(int32_t *)a1 = v3;
    if (v3 >= 0) {
        // 0x408f57
        return 0;
    }
    int64_t v4 = function_409bb0(0, 0); // 0x408f64
    *v1 = v4;
    return v4 == 0 ? 0xffffffff : 0;
}
// Address range: 0x408f80 - 0x408f99
int64_t function_408f80(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t fd = v1;
    if (fd < 0) {
        // 0x408f90
        return function_409940(*(int64_t *)(v1 + 8));
    }
    // 0x408f86
    return fchdir(fd);
}
// Address range: 0x408fa0 - 0x408fb9
int64_t function_408fa0(int64_t * a1) {
    // 0x408fa0
    int64_t v1; // 0x408fa0
    uint32_t fd = (int32_t)v1;
    if (fd >= 0) {
        // 0x408faa
        close(fd);
    }
    // 0x408faf
    free((int64_t *)*(int64_t *)((int64_t)a1 + 8));
    return &g65;
}
// Address range: 0x408fc0 - 0x40939d
int64_t function_408fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x409058
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x408fdc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x408ff6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40903b
    if (a6 < 10) {
        // 0x40904a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x409142
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4093a0 - 0x4093c0
int64_t function_4093a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4093a0
    if (a5 == 0) {
        // 0x4093bb
        return function_408fc0(a1, a2, a3, a4, a5, 0, (int64_t)&g65);
    }
    int64_t v1 = 0; // 0x4093a7
    v1++;
    int64_t v2 = v1; // 0x4093b9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4093b0
        v1++;
        v2 = v1;
    }
    // 0x4093bb
    return function_408fc0(a1, a2, a3, a4, a5, v2, (int64_t)&g65);
}
// Address range: 0x4093c0 - 0x409420
int64_t function_4093c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4093c0
    int64_t v3 = &v2; // 0x4093c0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4093f3
    int64_t v6; // 0x4093dd
    int64_t * v7; // 0x4093fb
    int64_t v8; // 0x4093fb
    int64_t v9; // 0x409407
    if (v5 < 48) {
        // 0x4093d0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x409413
            break;
        }
    } else {
        // 0x4093fb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x409413
            break;
        }
    }
    int64_t v10 = 10; // 0x4093f1
    while (v4 != 9) {
        // 0x4093e9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4093d0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x409413
                break;
            }
        } else {
            // 0x4093fb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x409413
                break;
            }
        }
        // 0x4093e9
        v10 = 10;
    }
    // 0x409413
    return function_408fc0(a1, a2, a3, a4, v3, v10, (int64_t)&g65);
}
// Address range: 0x409420 - 0x4094dc
int64_t function_409420(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x409420
    int64_t v1; // bp-168, 0x409420
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x409420
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x409420
    int64_t v8; // 0x409420
    int64_t v9; // bp-56, 0x409420
    int64_t v10; // 0x409485
    int64_t v11; // 0x4094a9
    if ((int32_t)v6 < 48) {
        // 0x409470
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4094c0
            break;
        }
    } else {
        // 0x4094a2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4094c0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40949a
    int64_t v13 = 10; // 0x40949a
    while (v5 != 9) {
        // 0x40949c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x409470
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4094c0
                break;
            }
        } else {
            // 0x4094a2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4094c0
                break;
            }
        }
        // 0x409492
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4094c0
    int64_t v14; // bp-136, 0x409420
    int64_t result = function_408fc0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g65); // 0x4094cf
    return result;
}
// Address range: 0x4094e0 - 0x409554
int64_t function_4094e0(int64_t a1) {
    // 0x4094e0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x409543
    return fputs_unlocked(v1, g35);
}
// Address range: 0x409560 - 0x40957a
int64_t function_409560(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x409564
    if (size != 0 != (mem == NULL)) {
        // 0x409573
        return (int64_t)mem;
    }
    // 0x409575
    function_4097b0(size);
    // UNREACHABLE
}
// Address range: 0x409580 - 0x4095a1
int64_t function_409580(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x409583
    int64_t v2 = v1; // 0x409583
    if (v2 < 0) {
        // 0x40959b
        function_4097b0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409599
        return function_409560(v2);
    }
    // 0x40959b
    function_4097b0(v2);
    // UNREACHABLE
}
// Address range: 0x4095b0 - 0x4095b2
int64_t function_4095b0(void) {
    // 0x4095b0
    int64_t v1; // 0x4095b0
    return function_409560(v1);
}
// Address range: 0x4095c0 - 0x4095f6
int64_t function_4095c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4095e8
        free(v1);
        return (int32_t)&g65 ^ (int32_t)&g65;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4095d1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4095e0
        return (int64_t)mem;
    }
    // 0x4095f1
    function_4097b0(a1);
    // UNREACHABLE
}
// Address range: 0x409600 - 0x409621
int64_t function_409600(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x409603
    int64_t v2 = v1; // 0x409603
    if (v2 < 0) {
        // 0x40961b
        function_4097b0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409619
        return function_4095c0(a1, v2);
    }
    // 0x40961b
    function_4097b0(a1);
    // UNREACHABLE
}
// Address range: 0x409630 - 0x4096b6
int64_t function_409630(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40968b
            function_4097b0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4095c0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x409673
    if (a2 == 0) {
        // 0x409698
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x409678
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40968b
        function_4097b0(a1);
        // UNREACHABLE
    }
    // 0x40965a
    *(int64_t *)a2 = v2;
    return function_4095c0(a1, v2 * a3);
}
// Address range: 0x4096c0 - 0x409710
int64_t function_4096c0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4096c0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40970a
            function_4097b0(a1);
            // UNREACHABLE
        }
        // 0x4096e2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4095c0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4096f5
        *(int64_t *)a2 = 128;
        return function_4095c0(0, 128);
    }
    // 0x409708
    if (a2 < 0) {
        // 0x40970a
        function_4097b0(a1);
        // UNREACHABLE
    }
    // 0x4096e2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4095c0(a1, v1);
}
// Address range: 0x409710 - 0x409727
int64_t function_409710(int64_t a1, int64_t a2) {
    // 0x409710
    return (int64_t)memset((int64_t *)function_409560(a1), 0, (int32_t)a1);
}
// Address range: 0x409730 - 0x40975e
int64_t function_409730(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x409737
    if ((int64_t)v1 < 0) {
        // 0x409759
        function_4097b0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x409759
        function_4097b0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40974a
    if (mem != NULL) {
        // 0x409754
        return (int64_t)mem;
    }
    // 0x409759
    function_4097b0(nmemb);
    // UNREACHABLE
}
// Address range: 0x409760 - 0x409788
int64_t function_409760(int64_t a1, int64_t a2) {
    int64_t v1 = function_409560(a2); // 0x40976f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x409790 - 0x4097a3
int64_t function_409790(char * str) {
    // 0x409790
    return function_409760((int64_t)str, (int64_t)strlen(str) + 1);
}
// Address range: 0x4097b0 - 0x4097e1
int64_t function_4097b0(int64_t a1) {
    // 0x4097b0
    error(g25, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4097f0 - 0x40981f
int64_t function_4097f0(int64_t a1, int64_t a2) {
    int64_t result = function_409bb0(0, 0); // 0x4097f5
    if (result != 0 || *__errno_location() != 12) {
        // 0x409802
        return result;
    }
    // 0x40981a
    function_4097b0(0);
    // UNREACHABLE
}
// Address range: 0x409820 - 0x4098b4
int64_t function_409820(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409820
    int64_t v1; // 0x409820
    if ((char)v1 != 0) {
        // 0x409844
        int128_t v2; // 0x409820
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 8; // bp-208, 0x409888
    return function_40ce40((int64_t)a1, &v3);
}
// Address range: 0x4098c0 - 0x409900
int64_t function_4098c0(int32_t fd) {
    // 0x4098c0
    if (fd < 0) {
        // 0x4098c4
        int64_t result; // 0x4098c0
        return result;
    }
    int32_t result2 = close(fd); // 0x4098cc
    if (result2 == 0) {
        // 0x4098d5
        return result2;
    }
    // 0x4098da
    __assert_fail("! close_fail", "lib/chdir-long.c", 64, "cdb_free");
    return &g65;
}
// Address range: 0x409900 - 0x409937
int64_t function_409900(int32_t * a1) {
    // 0x409900
    int64_t path; // 0x409900
    int32_t fd = path;
    uint32_t v1 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x409912
    int64_t result = 0xffffffff; // 0x409919
    if (v1 >= 0) {
        // 0x40991b
        function_4098c0(fd);
        *a1 = v1;
        result = 0;
    }
    // 0x409928
    return result;
}
// Address range: 0x409940 - 0x409bb0
int64_t function_409940(int64_t a1) {
    char * path = (char *)a1; // 0x40994f
    uint32_t result = chdir(path); // 0x40994f
    if (result == 0) {
        // 0x409a86
        return 0;
    }
    int32_t * v1 = __errno_location(); // 0x40995e
    if (*v1 != 36) {
        // 0x409a86
        return result;
    }
    int32_t len = strlen(path); // 0x409972
    int32_t fd = -100; // bp-44, 0x409977
    if (len == 0) {
        // 0x409b92
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g65;
    }
    if (len < 0x1000) {
        // 0x409b79
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x409b92
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g65;
    }
    int64_t v2 = len; // 0x409972
    int32_t ini_seg_bytes = strspn(path, "/"); // 0x40999f
    int64_t v3; // 0x409940
    if (ini_seg_bytes == 2) {
        int64_t v4 = function_40aed0(a1 + 3, 47, v2 - 3); // 0x409ac5
        if (v4 == 0) {
            // 0x409a86
            return 0xffffffff;
        }
        char * v5 = (char *)v4; // 0x409ad2
        *v5 = 0;
        int64_t v6 = function_409900(&fd); // 0x409add
        *v5 = 47;
        if ((int32_t)v6 != 0) {
            goto lab_0x409a70;
        } else {
            int64_t str = v4 + 1; // 0x409ae9
            v3 = str + (int64_t)strspn((char *)str, "/");
            goto lab_0x4099bd;
        }
    } else {
        // 0x4099b1
        v3 = a1;
        if (ini_seg_bytes != 0) {
            // 0x409a98
            if ((int32_t)function_409900(&fd) != 0) {
                goto lab_0x409a70;
            } else {
                // 0x409aab
                v3 = (int64_t)ini_seg_bytes + a1;
                goto lab_0x4099bd;
            }
        } else {
            goto lab_0x4099bd;
        }
    }
  lab_0x409a70:
    // 0x409a70
    function_4098c0(fd);
    // 0x409a86
    return 0xffffffff;
  lab_0x4099bd:
    // 0x4099bd
    if (*(char *)v3 == 47) {
      lab_0x409b47:
        // 0x409b47
        __assert_fail("*dir != '/'", "lib/chdir-long.c", 162, "chdir_long");
        // 0x409b60
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x409b79
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x409b92
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g65;
    }
    uint64_t v7 = v2 + a1; // 0x4099c7
    if (v7 < v3) {
        // 0x409b60
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x409b79
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x409b92
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g65;
    }
    int64_t v8 = v3; // 0x409a3d
    int64_t v9 = v3; // 0x409a3d
    if (v7 - v3 > 4095) {
        int64_t * v10 = memrchr((int64_t *)v8, 47, 0x1000); // 0x4099e5
        while (v10 != NULL) {
            int64_t v11 = (int64_t)v10; // 0x4099e5
            *(char *)v10 = 0;
            if (v11 - v8 > 4095) {
                // 0x409b2e
                __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 179, "chdir_long");
                goto lab_0x409b47;
            }
            int64_t v12 = function_409900(&fd); // 0x409a10
            *(char *)v10 = 47;
            if ((int32_t)v12 != 0) {
                goto lab_0x409a70;
            }
            int64_t str2 = v11 + 1; // 0x409a1c
            int64_t v13 = str2 + (int64_t)strspn((char *)str2, "/"); // 0x409a2d
            v8 = v13;
            v9 = v13;
            if (v7 - v13 <= 4095) {
                goto lab_0x409a3f;
            }
            v10 = memrchr((int64_t *)v8, 47, 0x1000);
        }
        // 0x409b08
        *v1 = 36;
        // 0x409a86
        return 0xffffffff;
    }
  lab_0x409a3f:
    // 0x409a3f
    if (v7 > v9) {
        // 0x409a44
        if ((int32_t)function_409900(&fd) != 0) {
            goto lab_0x409a70;
        } else {
            goto lab_0x409a55;
        }
    } else {
        goto lab_0x409a55;
    }
  lab_0x409a55:
    // 0x409a55
    if (fchdir(fd) == 0) {
        // 0x409b20
        function_4098c0(fd);
        // 0x409a86
        return 0;
    }
    goto lab_0x409a70;
}
// Address range: 0x409bb0 - 0x40a072
int64_t function_409bb0(int32_t a1, int32_t a2) {
    // 0x409bb0
    int32_t size; // 0x409bb0
    int32_t v1; // 0x409bb0
    int32_t v2; // 0x409bb0
    if (a2 != 0) {
        // 0x409c10
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x409be2;
        } else {
            goto lab_0x409c2c;
        }
    } else {
        // 0x409bd0
        size = 0x1000;
        if (a1 != 0) {
            // 0x409fd0
            *__errno_location() = 22;
            // 0x409bf6
            return 0;
        }
        goto lab_0x409be2;
    }
  lab_0x409f70:;
    // 0x409f70
    int32_t v3; // 0x409f6a
    int64_t v4 = v3; // 0x409f72
    int64_t v5; // 0x409bb0
    int64_t dirp2 = v5; // 0x409f72
    int32_t * v6; // 0x409cb6
    if (v3 != 0) {
        goto lab_0x409f81;
    } else {
        // 0x409f74
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x409f81;
    }
  lab_0x409d82:;
    // 0x409d82
    int64_t v7; // 0x409bb0
    int64_t v8 = v7;
    int64_t v9; // 0x409bb0
    int64_t v10 = v9 + 19; // 0x409d82
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x409bb0
    int64_t v12; // 0x409bb0
    int32_t v13; // 0x409bb0
    int32_t fd; // 0x409cd2
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x409db5
        if (v11 == v12) {
            // break -> 0x409dd0
            goto lab_0x409dd0;
        }
    }
    int64_t v14 = v8; // 0x409bb0
    goto lab_0x409d40_2;
  lab_0x40a04e_2:
    // 0x40a04e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x409f81;
  lab_0x409be2:;
    int64_t * mem = malloc(size); // 0x409be7
    int32_t v41 = (int64_t)mem; // 0x409bec
    int32_t result = v41; // 0x409bf4
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x409bf6
        return result;
    }
    goto lab_0x409c2c;
  lab_0x409c2c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x409c31
    int64_t v46 = v45 - 1; // 0x409c40
    *(char *)v46 = 0;
    int64_t v47; // 0x409bb0
    int64_t v48; // 0x409bb0
    int32_t * v49; // 0x409bb0
    int64_t v50; // 0x409bb0
    int64_t v33; // 0x409bb0
    int64_t v40; // 0x409bb0
    int64_t v51; // 0x409bb0
    int32_t v38; // 0x409bb0
    int32_t v52; // 0x409bb0
    int32_t v53; // 0x409bb0
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x409fa8;
    } else {
        // 0x409c56
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x409fa8;
        } else {
            // 0x409c81
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x409ec8;
            } else {
                // 0x409cb6
                v6 = __errno_location();
                int32_t v54 = v1; // 0x409cc3
                int32_t v55 = v42; // 0x409cc3
                int64_t v56 = v11; // 0x409cc3
                int64_t v57 = v46; // 0x409cc3
                int64_t v58 = 0; // 0x409cc3
                int32_t fd2 = -100; // 0x409cc3
                int64_t dirp3; // 0x409bb0
                while (true) {
                    // 0x409cc6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x409ff7
                        break;
                    }
                    // 0x409ce2
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x40a008
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x409fed;
                        } else {
                            // 0x40a011
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x409fed;
                        }
                    }
                    // 0x409cfb
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x409d00
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x409fe9
                            v40 = (int64_t)*v6;
                            goto lab_0x409fed;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x409d27
                    if (dirp == NULL) {
                        // 0x409fe9
                        v40 = (int64_t)*v6;
                        goto lab_0x409fed;
                    }
                    // 0x409d38
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x409d40_2:;
                        int64_t v15 = v14; // 0x409bb0
                        int64_t v16; // 0x409bb0
                        int64_t v17; // 0x409bb0
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x409d4b
                            int64_t v20; // 0x409bb0
                            int64_t v21; // 0x409bb0
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x409f20
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x409f70;
                                }
                                // 0x409f2d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x409f38
                                if (v23 == NULL) {
                                    // 0x409f6a
                                    v3 = *v6;
                                    goto lab_0x409f70;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x409d82;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x409d63
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x409f50
                            if (*(char *)v28 != 0) {
                                // 0x409f5a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x409d63
                                    break;
                                }
                            }
                            // 0x409d40
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x409d82;
                        } else {
                            // 0x409d68
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x409d7d
                            int64_t v32; // 0x409bb0
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x409d40
                                v14 = v31;
                                goto lab_0x409d40_2;
                            } else {
                                goto lab_0x409d82;
                            }
                        }
                    }
                  lab_0x409dd0:;
                    int64_t v61 = v38; // 0x409dd8
                    uint64_t v62 = v57 - v61; // 0x409dd8
                    int32_t len = strlen(str); // 0x409ddd
                    uint64_t v63 = (int64_t)len; // 0x409ddd
                    int32_t v64 = v60; // 0x409de8
                    int32_t v65 = v38; // 0x409de8
                    int64_t dest_mem = v57; // 0x409de8
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x40a060
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x409f81;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x409df6
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x409e01
                        uint64_t v68 = v67 + v66; // 0x409e05
                        if (v68 < v66) {
                            goto lab_0x40a04e_2;
                        }
                        // 0x409e18
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x409e20
                        if (mem2 == NULL) {
                            goto lab_0x40a04e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x409e20
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x409e7d
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x409eae
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x409fb0;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x409ec8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x409ff7
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x409f89;
                } else {
                    goto lab_0x409f81;
                }
            }
        }
    }
  lab_0x409fa8:
    // 0x409fa8
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x409fb0;
  lab_0x409fb0:;
    int64_t v77 = (int64_t)*v49; // 0x409fb6
    int64_t v34 = v77; // 0x409fba
    int32_t * v35 = v49; // 0x409fba
    int32_t * v36 = v49; // 0x409fba
    int32_t v37 = v53; // 0x409fba
    int64_t v39 = v77; // 0x409fba
    if (a1 != 0) {
        goto lab_0x409f91;
    } else {
        goto lab_0x409fbc;
    }
  lab_0x409f91:
    // 0x409f91
    *v35 = (int32_t)v34;
    // 0x409bf6
    return 0;
  lab_0x409fbc:
    // 0x409fbc
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x409f91;
  lab_0x409ec8:
    // 0x409ec8
    if (v51 == v47 - 1 + v48) {
        // 0x40a037
        int64_t v78; // 0x409bb0
        int64_t v79 = v78 - 1; // 0x40a03c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x409ef2
    int32_t v81 = v50 - v51; // 0x409ef2
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x409efd
    if (a2 == 0) {
        // 0x40a020
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x409bf6
    return result2;
  lab_0x409f89:
    // 0x409f89
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x409fbc;
    } else {
        goto lab_0x409f91;
    }
  lab_0x409f81:
    // 0x409f81
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x409f89;
  lab_0x409fed:
    // 0x409fed
    close(fd);
    v33 = v40;
    goto lab_0x409f89;
}
// Address range: 0x40a080 - 0x40a15f
int64_t function_40a080(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40a08c
    uint32_t v2 = *v1; // 0x40a08c
    int64_t v3 = a2 & 0xffffffff; // 0x40a091
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40a094
    uint64_t v5 = (int64_t)*v4; // 0x40a094
    int64_t v6; // 0x40a102
    if (v3 <= v5) {
      lab_0x40a0fc_2:
        // 0x40a0fc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40a082
    int64_t v8 = v2; // 0x40a080
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40a0fc
        goto lab_0x40a0fc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40a0b8
    int64_t v17; // 0x40a0c6
    int64_t * v18; // 0x40a0e0
    int64_t * v19; // 0x40a0e3
    int64_t v20; // 0x40a0ee
    int64_t v21; // 0x40a0c6
    while ((v16 & 0xffffffff) > v10) {
        // 0x40a0c3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40a0e0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40a0f7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40a0fc
            goto lab_0x40a0fc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40a0fc
            goto lab_0x40a0fc_2;
        }
        // 0x40a0b2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40a13b
    int64_t * v23 = (int64_t *)v22; // 0x40a140
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40a143
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40a140
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40a157
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40a0ad
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40a0fc
            goto lab_0x40a0fc_2;
        }
        // 0x40a0b2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40a0c3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40a0e0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40a0f7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40a0fc
                goto lab_0x40a0fc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40a0fc
                goto lab_0x40a0fc_2;
            }
            // 0x40a0b2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40a120
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40a140
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40a157
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40a0fc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40a160 - 0x40a77c
int64_t function_40a160(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40a17f
    int64_t v2 = *v1; // 0x40a17f
    char * str2 = (char *)v2; // 0x40a18c
    char c = *str2; // 0x40a18c
    int64_t v3 = v2; // 0x40a1b8
    int64_t v4 = 0; // 0x40a160
    int32_t v5; // 0x40a160
    int64_t v6; // 0x40a160
    int64_t v7; // 0x40a160
    int64_t v8; // 0x40a160
    int64_t v9; // 0x40a160
    int64_t v10; // 0x40a160
    int64_t v11; // 0x40a160
    int64_t v12; // 0x40a160
    int64_t v13; // 0x40a160
    int64_t str3; // 0x40a160
    int64_t v14; // 0x40a160
    int64_t v15; // 0x40a160
    int64_t v16; // 0x40a160
    int64_t v17; // 0x40a160
    int32_t v18; // 0x40a160
    int32_t v19; // 0x40a160
    int32_t v20; // 0x40a160
    int32_t v21; // 0x40a160
    int32_t v22; // 0x40a160
    int32_t v23; // 0x40a160
    int32_t v24; // 0x40a160
    int32_t v25; // 0x40a160
    int32_t v26; // 0x40a160
    int32_t v27; // 0x40a160
    int32_t v28; // 0x40a160
    int32_t v29; // 0x40a160
    int64_t nmemb; // 0x40a160
    int64_t v30; // 0x40a160
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40a1bc
            while (v31 != 0 == (v31 != 61)) {
                // 0x40a1b8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40a1c8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40a1ce
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40a198
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40a1fc
                int64_t v34; // 0x40a160
                int64_t v35; // 0x40a160
                if (strncmp(str, str2, n) == 0) {
                    // 0x40a205
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40a380;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40a216
                int64_t v37 = *(int64_t *)v36; // 0x40a21a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40a1f0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40a205
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40a380;
                        }
                    }
                    // 0x40a216
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
                  lab_0x40a266:
                    // 0x40a266
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
                        goto lab_0x40a2c0;
                    } else {
                        if (v11 == 0) {
                            // 0x40a430
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40a2c0;
                        } else {
                            if (v39 == 0) {
                                // 0x40a3e0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40a28a;
                                } else {
                                    // 0x40a3ec
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40a28a;
                                    } else {
                                        // 0x40a3fa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40a28a;
                                        } else {
                                            goto lab_0x40a2c0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40a28a;
                            }
                        }
                    }
                }
              lab_0x40a2d1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40a4a6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40a652
                            flockfile(g37);
                            int64_t v41 = *v1; // 0x40a672
                            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40a6bf
                            int64_t v43 = (int64_t)g37;
                            int64_t v44 = v43; // 0x40a6d9
                            int64_t v45; // 0x40a6db
                            if (*(char *)v42 != 0) {
                                // 0x40a6db
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g37;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40a6d3
                            while (v17 + nmemb != v42) {
                                // 0x40a6d5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40a6db
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g37;
                                }
                                // 0x40a6c8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40a700
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g37);
                            v40 = *v1;
                        } else {
                            // 0x40a4b4
                            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40a60f
                        free((int64_t *)v17);
                    }
                    // 0x40a509
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40a520
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40a3ce
                    return 63;
                }
                // 0x40a2f0
                v5 = v39;
                if (v13 != 0) {
                    // 0x40a374
                    v35 = v13;
                    v34 = v25;
                  lab_0x40a380:;
                    int32_t * v49 = (int32_t *)a7; // 0x40a390
                    uint32_t v50 = *v49; // 0x40a390
                    int64_t v51 = v50; // 0x40a390
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40a39a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40a3a3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40a5cf
                                __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40a57a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40a3ce
                            return 63;
                        }
                        // 0x40a418
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40a72f
                                    __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40a62d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40a640
                                // 0x40a3ce
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40a53e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40a552
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40a3bb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40a3be
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40a3c2
                    int64_t result = v59; // 0x40a3c8
                    if (v58 != 0) {
                        // 0x40a3ca
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40a3ce
                    return result;
                }
            } else {
                // 0x40a1ce
                v5 = v32;
            }
            // break -> 0x40a2f5
            break;
        }
    }
    // 0x40a2f5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40a30d
        if (*(char *)(v60 + 1) != 45) {
            // 0x40a317
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40a3ce
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40a459
        __fprintf_chk(g37, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40a346
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40a356
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40a2c0:
    // 0x40a2c0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40a2c0
    int64_t v63 = *(int64_t *)v62; // 0x40a2c4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40a2d1
        goto lab_0x40a2d1;
    }
    goto lab_0x40a266;
  lab_0x40a28a:
    // 0x40a28a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40a160
    int32_t v65; // 0x40a160
    int32_t v66; // 0x40a160
    if (v27 != 0) {
        goto lab_0x40a2c0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40a440
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40a2c0;
            } else {
                goto lab_0x40a2b1;
            }
        } else {
            // 0x40a2a5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40a59c
                int64_t v67 = (int64_t)mem; // 0x40a59c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40a2c0;
                } else {
                    // 0x40a5af
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40a2b1;
                }
            } else {
                goto lab_0x40a2b1;
            }
        }
    }
  lab_0x40a2b1:
    // 0x40a2b1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40a2c0;
}
// Address range: 0x40a780 - 0x40ad46
int64_t function_40a780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40a7a1
    if (v3 < 1) {
        // 0x40a95e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40a79d
    int32_t v5 = *(int32_t *)a7; // 0x40a7a9
    uint64_t v6 = a1 & 0xffffffff; // 0x40a7ab
    int64_t v7 = v2; // 0x40a7b0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40a7b3
    *v8 = 0;
    int64_t v9; // 0x40a780
    int64_t v10; // 0x40a780
    int64_t v11; // 0x40a780
    int64_t v12; // 0x40a780
    int64_t str; // 0x40a780
    int64_t v13; // 0x40a780
    int64_t v14; // 0x40a780
    int64_t v15; // 0x40a780
    int64_t v16; // 0x40a780
    int64_t v17; // 0x40a780
    int32_t v18; // 0x40a780
    char v19; // 0x40a780
    if (v5 == 0) {
        // 0x40a998
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40a7ca;
    } else {
        // 0x40a7c3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40a810
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40a813
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40a8d8;
            } else {
                int64_t v22 = v7 + 1; // 0x40a826
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40a836
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40a8ec;
                } else {
                    goto lab_0x40a848;
                }
            }
        } else {
            goto lab_0x40a7ca;
        }
    }
  lab_0x40a7ca:
    // 0x40a7ca
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40a7d0
    *v24 = 0;
    int64_t v25; // 0x40a780
    int64_t v26; // 0x40a780
    int64_t v27; // 0x40a780
    switch (*(char *)&v2) {
        case 45: {
            // 0x40a8c0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40a8cd;
        }
        case 43: {
            // 0x40abd0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40a8cd;
        }
        default: {
            // 0x40a7ec
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40ab4f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40ac68
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40a8cd;
                } else {
                    // 0x40ab5d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40a7fa;
                }
            } else {
                goto lab_0x40a7fa;
            }
        }
    }
  lab_0x40a8d8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40a8df
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40a848;
    } else {
        goto lab_0x40a8ec;
    }
  lab_0x40a7fa:
    // 0x40a7fa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40a8cd;
  lab_0x40a8cd:
    // 0x40a8cd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40a8d8;
  lab_0x40a848:;
    uint32_t v30 = *(int32_t *)a7; // 0x40a848
    int64_t v31 = v30; // 0x40a848
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40a84a
    if ((int64_t)*v32 > v31) {
        // 0x40a84f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40a852
    if (*v33 > v30) {
        // 0x40a857
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40a85a
    int64_t v35 = v31; // 0x40a85e
    int64_t v36 = v15; // 0x40a85e
    int64_t v37; // 0x40a780
    int64_t v38; // 0x40a780
    int64_t v39; // 0x40a780
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40a9c8
        int64_t v41 = v40; // 0x40a9c8
        v2 = v41;
        int64_t v42; // 0x40a780
        if (*v33 == v40) {
            // 0x40abb0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40abb8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40a9d4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40a9d8
                function_40a080(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40a9e8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40a9f1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40a9fa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40aa11
            int64_t v47 = v45 & 0xffffffff; // 0x40aa15
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40aa1e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40aa24
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40aa26;
                }
            }
            int64_t v48 = v47 + 1; // 0x40aa00
            int64_t v49 = v48 & 0xffffffff; // 0x40aa00
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40aa11
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40aa1e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40aa24
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40aa26;
                    }
                }
                // 0x40aa00
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40abc8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40aa26;
    } else {
        goto lab_0x40a864;
    }
  lab_0x40a8ec:
    // 0x40a8ec
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40a8ef
    int64_t v51 = v12; // 0x40a8ef
    int64_t v52 = v14; // 0x40a8ef
    if (*(char *)v10 == 0) {
        goto lab_0x40a848;
    } else {
        goto lab_0x40a8f5;
    }
  lab_0x40a864:;
    int32_t v53 = v35; // 0x40a864
    int64_t v54; // 0x40a780
    int64_t v55; // 0x40a780
    int64_t v56; // 0x40a780
    int64_t v57; // 0x40a780
    int64_t v58; // 0x40a780
    int64_t v59; // 0x40a780
    char * v60; // 0x40a780
    int64_t v61; // 0x40a780
    int64_t v62; // 0x40a879
    int64_t v63; // 0x40a780
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40a9b3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40a9b6;
    } else {
        // 0x40a86c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40a780
        int64_t v66 = v65 ? -1 : 1; // 0x40a880
        int64_t v67 = (int64_t)"--"; // 0x40a780
        int64_t v68 = v62; // 0x40a780
        int64_t v69 = 3; // 0x40a880
        unsigned char v70 = *(char *)v68; // 0x40a880
        char v71 = *(char *)v67; // 0x40a880
        char v72 = v71; // 0x40a880
        bool v73 = false; // 0x40a880
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
            // 0x40a970
            if (*(char *)v62 == 45) {
                // 0x40aa30
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40aa30
                if (c == 0) {
                    goto lab_0x40a97a;
                } else {
                    // 0x40aa3d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40aac0;
                    } else {
                        if (c == 45) {
                            // 0x40aca3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40ab15;
                        } else {
                            // 0x40aa4e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40aac0;
                            } else {
                                // 0x40aa53
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40aa74;
                                } else {
                                    // 0x40aa5a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40aac0;
                                    } else {
                                        goto lab_0x40aa74;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40a97a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40a890
            v2 = v75;
            int32_t v76 = *v32; // 0x40a893
            int64_t v77 = v35 + 1; // 0x40a896
            int32_t v78 = v77; // 0x40a899
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40ac00
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40a8a7
                    function_40a080(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40a8b5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40a9b6;
        }
    }
  lab_0x40a8f5:;
    // 0x40a8f5
    int64_t v79; // bp-104, 0x40a780
    int64_t v80 = &v79; // 0x40a78a
    int64_t v81 = v50 + 1; // 0x40a8f5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40a8fc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40a901
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40a905
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40a909
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40a911
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40a916
    int32_t c2 = v84; // 0x40a916
    char * found_char_pos = strchr(str2, c2); // 0x40a916
    int64_t v87 = *v82; // 0x40a91b
    v2 = v87;
    int64_t v88 = *v85; // 0x40a925
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40a930
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40ac20
            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40abed
        *(int32_t *)(v1 + 8) = c2;
        // 0x40a95e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40a916
    char v91 = *(char *)(v90 + 1); // 0x40a94b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40a905
        if (v91 != 58) {
            // 0x40a95e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40ab74
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40ac78
                *v8 = 0;
            } else {
                // 0x40ac5c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40ab9e
            *v83 = 0;
            // 0x40a95e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40ab7e
        if (v93 != 0) {
            // 0x40ac10
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40ab9e
            *v83 = 0;
            // 0x40a95e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40ab91
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40ab9e
            *v83 = 0;
            // 0x40a95e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40acda
            __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40ac8a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40ac91
        // 0x40ab9e
        *v83 = 0;
        // 0x40a95e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40aae9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40aaeb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40ad10
                __fprintf_chk(g37, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40acc1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40acc8
            // 0x40a95e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40aaf6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40aafa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40ab15;
  lab_0x40aa26:
    // 0x40aa26
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40a864;
  lab_0x40ab15:;
    int64_t v99 = function_40a160(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40ab33
    // 0x40a95e
    return v99 & 0xffffffff;
  lab_0x40a9b6:;
    int32_t v100 = v55; // 0x40a9b6
    if (v100 != (int32_t)v59) {
        // 0x40a9ba
        *(int32_t *)a7 = v100;
    }
    // 0x40a95e
    return 0xffffffff;
  lab_0x40a97a:
    // 0x40a97a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40a981
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40a95e
    return v99 & 0xffffffff;
  lab_0x40aac0:
    // 0x40aac0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40a8f5;
  lab_0x40aa74:
    // 0x40aa74
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40a160(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40aa9a
    if ((int32_t)v101 != -1) {
        // 0x40a95e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40aaaf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40aac0;
}
// Address range: 0x40ad50 - 0x40ada6
int64_t function_40ad50(int64_t a1) {
    // 0x40ad50
    *(int32_t *)&g56 = g33;
    *(int32_t *)&g57 = g32;
    int64_t v1; // 0x40ad50
    int64_t result = function_40a780(v1, v1, v1, v1, v1, v1, &g56, a1 & 0xffffffff); // 0x40ad76
    g33 = *(int32_t *)&g56;
    g64 = g59;
    *(int32_t *)&g31 = g58;
    return result;
}
// Address range: 0x40adb0 - 0x40adc8
int64_t function_40adb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40adb0
    return function_40ad50(1);
}
// Address range: 0x40add0 - 0x40ade3
int64_t function_40add0(int64_t a1, int64_t a2, char * a3, char (**a4)[12], int32_t a5, int64_t a6) {
    // 0x40add0
    return function_40ad50(0);
}
// Address range: 0x40adf0 - 0x40ae05
int64_t function_40adf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40adf0
    return function_40a780(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40ae10 - 0x40ae26
int64_t function_40ae10(void) {
    // 0x40ae10
    return function_40ad50(0);
}
// Address range: 0x40ae30 - 0x40ae48
int64_t function_40ae30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40ae30
    return function_40a780(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40ae50 - 0x40aeca
int64_t function_40ae50(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40ae5b
    int64_t v2 = (int64_t)&g13; // 0x40ae5b
    int32_t * pwc; // 0x40ae50
    int64_t v3; // 0x40ae50
    int64_t n; // 0x40ae50
    if (a2 == 0) {
        goto lab_0x40aea2;
    } else {
        // 0x40ae5d
        if (a3 == 0) {
            // 0x40ae88
            return -2;
        }
        // 0x40ae69
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40aea2;
        } else {
            goto lab_0x40ae74;
        }
    }
  lab_0x40aea2:
    // 0x40aea2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40ae50
    pwc = (int32_t *)&v4;
    goto lab_0x40ae74;
  lab_0x40ae74:;
    char * wstr = (char *)v3; // 0x40ae7a
    int64_t ps; // 0x40ae50
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40ae7a
    int64_t result = v5; // 0x40ae7a
    if (v5 < 0xfffffffe) {
        // 0x40ae88
        return result;
    }
    int64_t result2 = result; // 0x40aeb9
    if ((char)function_40c6f0(0, v3) == 0) {
        // 0x40aebb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40ae88
    return result2;
}
// Address range: 0x40aed0 - 0x40afd4
int64_t function_40aed0(int64_t result, uint64_t a2, int64_t a3) {
    // 0x40aed0
    if (a3 == 0) {
        // 0x40af09
        return 0;
    }
    int64_t v1 = result; // 0x40aedc
    int64_t v2 = a3; // 0x40aedc
    int64_t result2; // 0x40aed0
    if (result % 8 != 0) {
        char v3 = a2; // 0x40aede
        int64_t v4 = result; // 0x40aee1
        if ((char)result == v3) {
            // 0x40af09
            return result;
        }
        int64_t v5 = a3; // 0x40aee1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40aef0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40af10;
            }
            // 0x40aef6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40af09
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40af09
        return result2;
    }
  lab_0x40af10:;
    int64_t result3 = v1; // 0x40af3d
    int64_t v6 = v2; // 0x40af3d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40af1f
        int64_t v8 = 0x10000 * v7 | v7; // 0x40af2c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x40af36
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x40af56
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x40af85
            int64_t v12 = v1 + 8; // 0x40af89
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x40af73
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40af9c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x40af93
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x40af09
                return 0;
            }
        }
    }
  lab_0x40af9c:;
    char v14 = a2; // 0x40af9c
    if (*(char *)result3 == v14) {
        // 0x40af09
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x40afb0
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x40af09
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x40af09
    return result2;
}
// Address range: 0x40afe0 - 0x40b06a
int64_t function_40afe0(int64_t str, int64_t a2, int64_t a3) {
    uint64_t result = (int64_t)strlen((char *)str) + 1; // 0x40afee
    int64_t v1 = str; // 0x40aff2
    int64_t v2 = 0; // 0x40aff2
    int64_t v3; // 0x40afe0
    char v4; // 0x40b007
    int64_t v5; // 0x40b00b
    while (true) {
      lab_0x40b007:;
        int64_t v6 = v2;
        v3 = v1;
        int64_t v7 = v6 + str;
        v4 = *(char *)v7;
        v5 = v6 + 1;
        if (v4 != 92) {
            goto lab_0x40aff8;
        } else {
            int64_t v8 = v6 + 4; // 0x40b015
            if (v8 >= result) {
                goto lab_0x40aff8;
            } else {
                char v9 = *(char *)(v5 + str); // 0x40b01e
                if ((v9 & -4) == 48) {
                    char v10 = *(char *)(v7 + 2); // 0x40b02d
                    if ((v10 & -8) == 48) {
                        char v11 = *(char *)(v7 + 3); // 0x40b03d
                        if ((v11 & -8) == 48) {
                            // 0x40b04c
                            *(char *)v3 = 8 * (v10 + 8 * v9) + 80 + v11;
                            v2 = v8;
                            goto lab_0x40b004;
                        } else {
                            goto lab_0x40aff8;
                        }
                    } else {
                        goto lab_0x40aff8;
                    }
                } else {
                    goto lab_0x40aff8;
                }
            }
        }
    }
    // 0x40b068
    return result;
  lab_0x40aff8:
    // 0x40aff8
    *(char *)v3 = v4;
    v2 = v5;
    if (result <= v5) {
        return result;
    }
    goto lab_0x40b004;
  lab_0x40b004:
    // 0x40b004
    v1 = v3 + 1;
    goto lab_0x40b007;
}
// Address range: 0x40b070 - 0x40b0b2
int64_t function_40b070(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40b077
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 8));
    free((int64_t *)*(int64_t *)(a1 + 16));
    if ((*(char *)(a1 + 40) & 4) == 0) {
        // 0x40b094
        free(v1);
        return &g65;
    }
    // 0x40b0a0
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g65;
}
// Address range: 0x40b0c0 - 0x40b87f
int64_t function_40b0c0(int32_t a1) {
    // 0x40b0c0
    int64_t v1; // bp-152, 0x40b0c0
    int64_t v2 = &v1; // 0x40b0d4
    struct _IO_FILE * file = fopen("/proc/self/mountinfo", "r"); // 0x40b0d8
    bool v3; // 0x40b0c0
    bool v4; // 0x40b0c0
    int64_t * v5; // 0x40b0c0
    int64_t v6; // 0x40b0c0
    int64_t v7; // 0x40b0c0
    int64_t v8; // 0x40b0c0
    int64_t v9; // 0x40b0c0
    int64_t v10; // 0x40b0c0
    int64_t v11; // 0x40b0c0
    int64_t v12; // 0x40b0c0
    int64_t v13; // 0x40b0c0
    int64_t v14; // 0x40b0c0
    int32_t * v15; // 0x40b0c0
    int32_t v16; // 0x40b0c0
    struct mntent * v17; // 0x40b0c0
    char v18; // 0x40b0c0
    char v19; // 0x40b0c0
    int64_t v20; // bp-80, 0x40b0c0
    int32_t * v21; // 0x40b122
    char * v22; // 0x40b2a4
    unsigned char v23; // 0x40b798
    int64_t v24; // 0x40b30a
    unsigned char v25; // 0x40b4c0
    bool v26; // 0x40b0c0
    int64_t * v27; // 0x40b0c0
    int64_t v28; // 0x40b0c0
    int64_t v29; // 0x40b0c0
    struct _IO_FILE * v30; // 0x40b4fa
    int64_t v31; // 0x40b545
    char * v32; // 0x40b581
    int64_t v33; // 0x40b6e4
    char ** v34; // 0x40b122
    int64_t v35; // 0x40b234
    bool v36; // 0x40b0c0
    bool v37; // 0x40b0c0
    if (file == NULL) {
        // 0x40b4f0
        v30 = setmntent("/etc/mtab", "r");
        if (v30 == NULL) {
            // 0x40b37a
            return 0;
        }
        int64_t v38 = &v20; // 0x40b50e
        struct mntent * v39 = getmntent(v30); // 0x40b51a
        v12 = v38;
        if (v39 != NULL) {
            // 0x40b530
            v29 = v26 ? -1 : 1;
            v17 = v39;
            v10 = v38;
            while (true) {
              lab_0x40b530:
                // 0x40b530
                v11 = v10;
                int64_t v40 = (int64_t)v17;
                char * v41 = hasmntopt(v17, "bind"); // 0x40b538
                v31 = function_409560(56);
                int64_t v42 = function_409790((char *)*(int64_t *)v17); // 0x40b551
                int64_t * v43 = (int64_t *)v31; // 0x40b55a
                *v43 = v42;
                int64_t v44 = function_409790((char *)*(int64_t *)(v40 + 8)); // 0x40b55d
                *(int64_t *)(v31 + 16) = 0;
                *(int64_t *)(v31 + 8) = v44;
                int64_t v45 = function_409790((char *)*(int64_t *)(v40 + 16)); // 0x40b572
                v32 = (char *)(v31 + 40);
                *v32 = *v32 | 4;
                *(int64_t *)(v31 + 24) = v45;
                int64_t v46 = 7; // 0x40b594
                int64_t v47 = v45;
                int64_t v48 = (int64_t)"autofs";
                unsigned char v49 = *(char *)v47; // 0x40b594
                char v50 = *(char *)v48; // 0x40b594
                char v51 = v50; // 0x40b594
                bool v52 = false; // 0x40b594
                while (v49 == v50) {
                    v46--;
                    int64_t v53 = v48 + v29; // 0x40b594
                    int64_t v54 = v47 + v29; // 0x40b594
                    v51 = v49;
                    v52 = true;
                    if (v46 == 0) {
                        // break -> 
                        break;
                    }
                    v47 = v54;
                    v48 = v53;
                    v49 = *(char *)v47;
                    v50 = *(char *)v48;
                    v51 = v50;
                    v52 = false;
                }
                unsigned char v55 = v51;
                int64_t v56 = v45; // 0x40b59d
                int64_t v57 = 5; // 0x40b59d
                char v58 = 1; // 0x40b59d
                if ((v49 >= v55 && !v52) != v49 < v55) {
                    int64_t v59 = v56;
                    int64_t v60 = (int64_t)"proc";
                    unsigned char v61 = *(char *)v59; // 0x40b5b0
                    char v62 = *(char *)v60; // 0x40b5b0
                    char v63 = v62; // 0x40b5b0
                    bool v64 = false; // 0x40b5b0
                    while (v61 == v62) {
                        int64_t v65 = v57 - 1; // 0x40b5b0
                        int64_t v66 = v60 + v29; // 0x40b5b0
                        v56 = v59 + v29;
                        v57 = v65;
                        v63 = v61;
                        v64 = true;
                        if (v65 == 0) {
                            // break -> 
                            break;
                        }
                        v59 = v56;
                        v60 = v66;
                        v61 = *(char *)v59;
                        v62 = *(char *)v60;
                        v63 = v62;
                        v64 = false;
                    }
                    unsigned char v67 = v63;
                    int64_t v68 = v45; // 0x40b5b9
                    int64_t v69 = 6; // 0x40b5b9
                    v58 = 1;
                    if ((v61 >= v67 && !v64) != v61 < v67) {
                        int64_t v70 = v68;
                        int64_t v71 = (int64_t)"subfs";
                        unsigned char v72 = *(char *)v70; // 0x40b5cc
                        char v73 = *(char *)v71; // 0x40b5cc
                        char v74 = v73; // 0x40b5cc
                        bool v75 = false; // 0x40b5cc
                        while (v72 == v73) {
                            int64_t v76 = v69 - 1; // 0x40b5cc
                            int64_t v77 = v71 + v29; // 0x40b5cc
                            v68 = v70 + v29;
                            v69 = v76;
                            v74 = v72;
                            v75 = true;
                            if (v76 == 0) {
                                // break -> 
                                break;
                            }
                            v70 = v68;
                            v71 = v77;
                            v72 = *(char *)v70;
                            v73 = *(char *)v71;
                            v74 = v73;
                            v75 = false;
                        }
                        unsigned char v78 = v74;
                        int64_t v79 = v45; // 0x40b5d5
                        int64_t v80 = 8; // 0x40b5d5
                        v58 = 1;
                        if ((v72 >= v78 && !v75) != v72 < v78) {
                            int64_t v81 = v79;
                            int64_t v82 = (int64_t)"debugfs";
                            unsigned char v83 = *(char *)v81; // 0x40b5e8
                            char v84 = *(char *)v82; // 0x40b5e8
                            char v85 = v84; // 0x40b5e8
                            bool v86 = false; // 0x40b5e8
                            while (v83 == v84) {
                                int64_t v87 = v80 - 1; // 0x40b5e8
                                int64_t v88 = v82 + v29; // 0x40b5e8
                                v79 = v81 + v29;
                                v80 = v87;
                                v85 = v83;
                                v86 = true;
                                if (v87 == 0) {
                                    // break -> 
                                    break;
                                }
                                v81 = v79;
                                v82 = v88;
                                v83 = *(char *)v81;
                                v84 = *(char *)v82;
                                v85 = v84;
                                v86 = false;
                            }
                            unsigned char v89 = v85;
                            int64_t v90 = v45; // 0x40b5f1
                            int64_t v91 = 7; // 0x40b5f1
                            v58 = 1;
                            if ((v83 >= v89 && !v86) != v83 < v89) {
                                int64_t v92 = v90;
                                int64_t v93 = (int64_t)"devpts";
                                unsigned char v94 = *(char *)v92; // 0x40b604
                                char v95 = *(char *)v93; // 0x40b604
                                char v96 = v95; // 0x40b604
                                bool v97 = false; // 0x40b604
                                while (v94 == v95) {
                                    int64_t v98 = v91 - 1; // 0x40b604
                                    int64_t v99 = v93 + v29; // 0x40b604
                                    v90 = v92 + v29;
                                    v91 = v98;
                                    v96 = v94;
                                    v97 = true;
                                    if (v98 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v92 = v90;
                                    v93 = v99;
                                    v94 = *(char *)v92;
                                    v95 = *(char *)v93;
                                    v96 = v95;
                                    v97 = false;
                                }
                                unsigned char v100 = v96;
                                int64_t v101 = v45; // 0x40b60d
                                int64_t v102 = 8; // 0x40b60d
                                v58 = 1;
                                if ((v94 >= v100 && !v97) != v94 < v100) {
                                    int64_t v103 = v101;
                                    int64_t v104 = (int64_t)"fusectl";
                                    unsigned char v105 = *(char *)v103; // 0x40b620
                                    char v106 = *(char *)v104; // 0x40b620
                                    char v107 = v106; // 0x40b620
                                    bool v108 = false; // 0x40b620
                                    while (v105 == v106) {
                                        int64_t v109 = v102 - 1; // 0x40b620
                                        int64_t v110 = v104 + v29; // 0x40b620
                                        v101 = v103 + v29;
                                        v102 = v109;
                                        v107 = v105;
                                        v108 = true;
                                        if (v109 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v103 = v101;
                                        v104 = v110;
                                        v105 = *(char *)v103;
                                        v106 = *(char *)v104;
                                        v107 = v106;
                                        v108 = false;
                                    }
                                    unsigned char v111 = v107;
                                    int64_t v112 = v45; // 0x40b629
                                    int64_t v113 = 7; // 0x40b629
                                    v58 = 1;
                                    if ((v105 >= v111 && !v108) != v105 < v111) {
                                        int64_t v114 = v112;
                                        int64_t v115 = (int64_t)"mqueue";
                                        unsigned char v116 = *(char *)v114; // 0x40b63c
                                        char v117 = *(char *)v115; // 0x40b63c
                                        char v118 = v117; // 0x40b63c
                                        bool v119 = false; // 0x40b63c
                                        while (v116 == v117) {
                                            int64_t v120 = v113 - 1; // 0x40b63c
                                            int64_t v121 = v115 + v29; // 0x40b63c
                                            v112 = v114 + v29;
                                            v113 = v120;
                                            v118 = v116;
                                            v119 = true;
                                            if (v120 == 0) {
                                                // break -> 
                                                break;
                                            }
                                            v114 = v112;
                                            v115 = v121;
                                            v116 = *(char *)v114;
                                            v117 = *(char *)v115;
                                            v118 = v117;
                                            v119 = false;
                                        }
                                        unsigned char v122 = v118;
                                        int64_t v123 = v45; // 0x40b645
                                        int64_t v124 = 11; // 0x40b645
                                        v58 = 1;
                                        if ((v116 >= v122 && !v119) != v116 < v122) {
                                            int64_t v125 = v123;
                                            int64_t v126 = (int64_t)"rpc_pipefs";
                                            unsigned char v127 = *(char *)v125; // 0x40b658
                                            char v128 = *(char *)v126; // 0x40b658
                                            char v129 = v128; // 0x40b658
                                            bool v130 = false; // 0x40b658
                                            while (v127 == v128) {
                                                int64_t v131 = v124 - 1; // 0x40b658
                                                int64_t v132 = v126 + v29; // 0x40b658
                                                v123 = v125 + v29;
                                                v124 = v131;
                                                v129 = v127;
                                                v130 = true;
                                                if (v131 == 0) {
                                                    // break -> 
                                                    break;
                                                }
                                                v125 = v123;
                                                v126 = v132;
                                                v127 = *(char *)v125;
                                                v128 = *(char *)v126;
                                                v129 = v128;
                                                v130 = false;
                                            }
                                            unsigned char v133 = v129;
                                            int64_t v134 = v45; // 0x40b661
                                            int64_t v135 = 6; // 0x40b661
                                            v58 = 1;
                                            if ((v127 >= v133 && !v130) != v127 < v133) {
                                                int64_t v136 = v134;
                                                int64_t v137 = (int64_t)"sysfs";
                                                unsigned char v138 = *(char *)v136; // 0x40b670
                                                char v139 = *(char *)v137; // 0x40b670
                                                char v140 = v139; // 0x40b670
                                                bool v141 = false; // 0x40b670
                                                while (v138 == v139) {
                                                    int64_t v142 = v135 - 1; // 0x40b670
                                                    int64_t v143 = v137 + v29; // 0x40b670
                                                    v134 = v136 + v29;
                                                    v135 = v142;
                                                    v140 = v138;
                                                    v141 = true;
                                                    if (v142 == 0) {
                                                        // break -> 
                                                        break;
                                                    }
                                                    v136 = v134;
                                                    v137 = v143;
                                                    v138 = *(char *)v136;
                                                    v139 = *(char *)v137;
                                                    v140 = v139;
                                                    v141 = false;
                                                }
                                                unsigned char v144 = v140;
                                                int64_t v145 = v45; // 0x40b679
                                                int64_t v146 = 6; // 0x40b679
                                                v58 = 1;
                                                if ((v138 >= v144 && !v141) != v138 < v144) {
                                                    int64_t v147 = v145;
                                                    int64_t v148 = (int64_t)"devfs";
                                                    unsigned char v149 = *(char *)v147; // 0x40b688
                                                    char v150 = *(char *)v148; // 0x40b688
                                                    char v151 = v150; // 0x40b688
                                                    bool v152 = false; // 0x40b688
                                                    while (v149 == v150) {
                                                        int64_t v153 = v146 - 1; // 0x40b688
                                                        int64_t v154 = v148 + v29; // 0x40b688
                                                        v145 = v147 + v29;
                                                        v146 = v153;
                                                        v151 = v149;
                                                        v152 = true;
                                                        if (v153 == 0) {
                                                            // break -> 
                                                            break;
                                                        }
                                                        v147 = v145;
                                                        v148 = v154;
                                                        v149 = *(char *)v147;
                                                        v150 = *(char *)v148;
                                                        v151 = v150;
                                                        v152 = false;
                                                    }
                                                    unsigned char v155 = v151;
                                                    int64_t v156 = v45; // 0x40b691
                                                    int64_t v157 = 7; // 0x40b691
                                                    v58 = 1;
                                                    if ((v149 >= v155 && !v152) != v149 < v155) {
                                                        int64_t v158 = v156;
                                                        int64_t v159 = (int64_t)"kernfs";
                                                        unsigned char v160 = *(char *)v158; // 0x40b6a0
                                                        char v161 = *(char *)v159; // 0x40b6a0
                                                        char v162 = v161; // 0x40b6a0
                                                        bool v163 = false; // 0x40b6a0
                                                        while (v160 == v161) {
                                                            int64_t v164 = v157 - 1; // 0x40b6a0
                                                            int64_t v165 = v159 + v29; // 0x40b6a0
                                                            v156 = v158 + v29;
                                                            v157 = v164;
                                                            v162 = v160;
                                                            v163 = true;
                                                            if (v164 == 0) {
                                                                // break -> 
                                                                break;
                                                            }
                                                            v158 = v156;
                                                            v159 = v165;
                                                            v160 = *(char *)v158;
                                                            v161 = *(char *)v159;
                                                            v162 = v161;
                                                            v163 = false;
                                                        }
                                                        unsigned char v166 = v162;
                                                        v58 = 1;
                                                        if ((v160 >= v166 && !v163) != v160 < v166) {
                                                            char * str = (char *)v45; // 0x40b6b7
                                                            v58 = 1;
                                                            if (strcmp(str, "ignore") != 0) {
                                                                // 0x40b6c5
                                                                v58 = v41 == NULL == strcmp(str, "none") == 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x40b6e0
                v33 = *v43;
                *v32 = *v32 & -2 | v58;
                char * str2 = (char *)v33; // 0x40b6f7
                v19 = 1;
                if (strchr(str2, 58) == NULL) {
                    // 0x40b798
                    v23 = *str2;
                    if (v23 == 47) {
                        // 0x40b830
                        v3 = true;
                        v37 = false;
                        if (*(char *)(v33 + 1) != 47) {
                            goto lab___crit_edge183;
                        } else {
                            int64_t v167; // 0x40b0c0
                            unsigned char v168 = *(char *)v167; // 0x40b848
                            int64_t v169; // 0x40b0c0
                            char v170 = *(char *)v169; // 0x40b848
                            while (v168 == v170) {
                                // 0x40b83b
                                int64_t v171; // 0x40b0c0
                                int64_t v172 = v171;
                                int64_t v173 = v172 - 1; // 0x40b848
                                int64_t v174; // 0x40b0c0
                                v169 = v174 + v29;
                                int64_t v175; // 0x40b0c0
                                v167 = v175 + v29;
                                v171 = v173;
                                char v176 = v168; // 0x40b848
                                bool v177 = true; // 0x40b848
                                if (v173 == 0) {
                                    // break -> 
                                    break;
                                }
                                v175 = v167;
                                v174 = v169;
                                v168 = *(char *)v175;
                                v170 = *(char *)v174;
                                v176 = v170;
                                v177 = false;
                            }
                            unsigned char v178 = v170;
                            v19 = 1;
                            int64_t v179 = v45; // 0x40b851
                            int64_t v180 = 5; // 0x40b851
                            if ((v168 >= v178 && true) == v168 < v178) {
                                goto lab_0x40b70a;
                            } else {
                                int64_t v181 = v179;
                                int64_t v182 = (int64_t)"cifs";
                                unsigned char v183 = *(char *)v181; // 0x40b864
                                char v184 = *(char *)v182; // 0x40b864
                                char v185 = v184; // 0x40b864
                                bool v186 = false; // 0x40b864
                                while (v183 == v184) {
                                    int64_t v187 = v180 - 1; // 0x40b864
                                    int64_t v188 = v182 + v29; // 0x40b864
                                    v179 = v181 + v29;
                                    v180 = v187;
                                    v185 = v183;
                                    v186 = true;
                                    if (v187 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v181 = v179;
                                    v182 = v188;
                                    v183 = *(char *)v181;
                                    v184 = *(char *)v182;
                                    v185 = v184;
                                    v186 = false;
                                }
                                unsigned char v189 = v185;
                                v19 = 1;
                                if ((v183 >= v189 && !v186) == v183 < v189) {
                                    goto lab_0x40b70a;
                                } else {
                                    goto lab_0x40b7a2;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40b7a2;
                    }
                } else {
                    goto lab_0x40b70a;
                }
            }
        }
      lab_0x40b738:
        // 0x40b738
        v9 = v12;
        v13 = v12;
        if (endmntent(v30) != 0) {
            goto lab_0x40b36d;
        } else {
            goto lab_0x40b748;
        }
    } else {
        int64_t v190 = &v20; // 0x40b0f2
        int64_t v191 = v2 + 88; // 0x40b118
        int64_t v192 = v2 + 80; // 0x40b11d
        v34 = (char **)v192;
        v21 = (int32_t *)v191;
        if (__getdelim(v34, v21, 10, file) == -1) {
            // 0x40b0e6
            v5 = (int64_t *)v192;
            v8 = v190;
        } else {
            int64_t v193 = v2 + 31; // 0x40b13a
            int64_t * v194 = (int64_t *)(v2 - 16); // 0x40b13f
            int64_t v195 = v2 + 44; // 0x40b140
            int64_t v196 = v2 + 40; // 0x40b146
            v27 = (int64_t *)v192;
            int64_t v197 = v2 + 64; // 0x40b158
            int64_t v198 = v2 + 32; // 0x40b162
            int32_t * v199 = (int32_t *)(v2 + 36);
            int32_t * v200 = (int32_t *)(v2 + 68);
            int32_t * v201 = (int32_t *)v195;
            int64_t v202 = v2 + 60;
            int64_t v203 = v2 + 56;
            int64_t v204 = v2 + 52;
            int64_t v205 = v2 + 48;
            v28 = v26 ? -1 : 1;
            int32_t * v206 = (int32_t *)v203;
            int32_t * v207 = (int32_t *)v196;
            int32_t * v208 = (int32_t *)v197;
            v6 = v190;
            while (true) {
              lab_0x40b131:
                // 0x40b131
                v7 = v6;
                int64_t str4; // 0x40b187
                while (true) {
                    // 0x40b131
                    *v194 = v193;
                    *(int64_t *)(v2 - 24) = v195;
                    *(int64_t *)(v2 - 32) = v196;
                    int64_t str3 = *v27; // 0x40b14c
                    if ((sscanf((char *)str3, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", (int64_t *)v198, v199, (int64_t *)v197, v200) & -5) == 3) {
                        // 0x40b178
                        str4 = function_40bd00(*v27 + (int64_t)*v201, " - ");
                        if (str4 != 0) {
                            // 0x40b198
                            *v194 = v193;
                            if ((sscanf((char *)str4, " - %n%*s%n %n%*s%n %c", (int32_t **)v205, (int64_t *)v204, (char **)v203, (int32_t **)v202) & -5) == 1) {
                                // break -> 0x40b1ce
                                break;
                            }
                        }
                    }
                    // 0x40b110
                    v5 = v27;
                    v8 = v7;
                    if (__getdelim(v34, v21, 10, file) == -1) {
                        // break (via goto) -> 0x40b348
                        goto lab_0x40b348_2;
                    }
                }
                // 0x40b1ce
                *(char *)(*v27 + (int64_t)*v200) = 0;
                int64_t v209 = *v27; // 0x40b1e2
                *(char *)(v209 + (int64_t)*v201) = 0;
                *(char *)(str4 + (int64_t)*(int32_t *)v204) = 0;
                *(char *)(str4 + (int64_t)*(int32_t *)v202) = 0;
                function_40afe0(str4 + (int64_t)*v206, (int64_t)" - %n%*s%n %n%*s%n %c", v209);
                function_40afe0(*v27 + (int64_t)*v207, (int64_t)" - %n%*s%n %n%*s%n %c", v209);
                function_40afe0(*v27 + (int64_t)*v208, (int64_t)" - %n%*s%n %n%*s%n %c", v209);
                v35 = function_409560(56);
                int64_t v210 = function_409790((char *)(str4 + (int64_t)*v206)); // 0x40b244
                int64_t * v211 = (int64_t *)v35; // 0x40b253
                *v211 = v210;
                int64_t v212 = function_409790((char *)(*v27 + (int64_t)*v207)); // 0x40b256
                *(int64_t *)(v35 + 8) = v212;
                int64_t v213 = function_409790((char *)(*v27 + (int64_t)*v208)); // 0x40b269
                *(int64_t *)(v35 + 16) = v213;
                int64_t v214 = function_409790((char *)(str4 + (int64_t)*(int32_t *)v205)); // 0x40b27a
                uint32_t v215 = *(int32_t *)v198; // 0x40b27f
                *(int64_t *)(v35 + 24) = v214;
                uint32_t v216 = *v199; // 0x40b299
                int64_t v217 = 0x100000000 * (int64_t)v215; // 0x40b2a0
                v22 = (char *)(v35 + 40);
                *v22 = *v22 | 4;
                int64_t v218 = v215 < 0xfffff001 ? v217 : v217 + 0xfffffffffff; // 0x40b2ac
                int64_t v219 = v218 | (int64_t)(256 * v215 & 0xfff00) | (int64_t)(v216 % 256) | 0x1000 * (int64_t)v216 & 0xffffff00000; // 0x40b2cd
                int64_t v220 = 7; // 0x40b2d0
                int64_t v221 = v214;
                int64_t v222 = (int64_t)"autofs";
                unsigned char v223 = *(char *)v221; // 0x40b2d0
                char v224 = *(char *)v222; // 0x40b2d0
                char v225 = v224; // 0x40b2d0
                bool v226 = false; // 0x40b2d0
                while (v223 == v224) {
                    v220--;
                    int64_t v227 = v222 + v28; // 0x40b2d0
                    int64_t v228 = v221 + v28; // 0x40b2d0
                    v225 = v223;
                    v226 = true;
                    if (v220 == 0) {
                        // break -> 
                        break;
                    }
                    v221 = v228;
                    v222 = v227;
                    v223 = *(char *)v221;
                    v224 = *(char *)v222;
                    v225 = v224;
                    v226 = false;
                }
                unsigned char v229 = v225;
                *(int64_t *)(v35 + 32) = v219;
                int64_t v230 = v214; // 0x40b2dd
                int64_t v231 = 5; // 0x40b2dd
                char v232 = 1; // 0x40b2dd
                if ((v223 >= v229 && !v226) != v223 < v229) {
                    int64_t v233 = v230;
                    int64_t v234 = (int64_t)"proc";
                    unsigned char v235 = *(char *)v233; // 0x40b2ec
                    char v236 = *(char *)v234; // 0x40b2ec
                    char v237 = v236; // 0x40b2ec
                    bool v238 = false; // 0x40b2ec
                    while (v235 == v236) {
                        int64_t v239 = v231 - 1; // 0x40b2ec
                        int64_t v240 = v234 + v28; // 0x40b2ec
                        v230 = v233 + v28;
                        v231 = v239;
                        v237 = v235;
                        v238 = true;
                        if (v239 == 0) {
                            // break -> 
                            break;
                        }
                        v233 = v230;
                        v234 = v240;
                        v235 = *(char *)v233;
                        v236 = *(char *)v234;
                        v237 = v236;
                        v238 = false;
                    }
                    unsigned char v241 = v237;
                    v232 = 1;
                    int64_t v242 = v214; // 0x40b2f5
                    int64_t v243 = 6; // 0x40b2f5
                    if ((v235 >= v241 && !v238) != v235 < v241) {
                        int64_t v244 = v242;
                        int64_t v245 = (int64_t)"subfs";
                        unsigned char v246 = *(char *)v244; // 0x40b39d
                        char v247 = *(char *)v245; // 0x40b39d
                        char v248 = v247; // 0x40b39d
                        bool v249 = false; // 0x40b39d
                        while (v246 == v247) {
                            int64_t v250 = v243 - 1; // 0x40b39d
                            int64_t v251 = v245 + v28; // 0x40b39d
                            v242 = v244 + v28;
                            v243 = v250;
                            v248 = v246;
                            v249 = true;
                            if (v250 == 0) {
                                // break -> 
                                break;
                            }
                            v244 = v242;
                            v245 = v251;
                            v246 = *(char *)v244;
                            v247 = *(char *)v245;
                            v248 = v247;
                            v249 = false;
                        }
                        unsigned char v252 = v248;
                        v232 = 1;
                        int64_t v253 = v214; // 0x40b3a6
                        int64_t v254 = 8; // 0x40b3a6
                        if ((v246 >= v252 && !v249) != v246 < v252) {
                            int64_t v255 = v253;
                            int64_t v256 = (int64_t)"debugfs";
                            unsigned char v257 = *(char *)v255; // 0x40b3b9
                            char v258 = *(char *)v256; // 0x40b3b9
                            char v259 = v258; // 0x40b3b9
                            bool v260 = false; // 0x40b3b9
                            while (v257 == v258) {
                                int64_t v261 = v254 - 1; // 0x40b3b9
                                int64_t v262 = v256 + v28; // 0x40b3b9
                                v253 = v255 + v28;
                                v254 = v261;
                                v259 = v257;
                                v260 = true;
                                if (v261 == 0) {
                                    // break -> 
                                    break;
                                }
                                v255 = v253;
                                v256 = v262;
                                v257 = *(char *)v255;
                                v258 = *(char *)v256;
                                v259 = v258;
                                v260 = false;
                            }
                            unsigned char v263 = v259;
                            v232 = 1;
                            int64_t v264 = v214; // 0x40b3c2
                            int64_t v265 = 7; // 0x40b3c2
                            if ((v257 >= v263 && !v260) != v257 < v263) {
                                int64_t v266 = v264;
                                int64_t v267 = (int64_t)"devpts";
                                unsigned char v268 = *(char *)v266; // 0x40b3d5
                                char v269 = *(char *)v267; // 0x40b3d5
                                char v270 = v269; // 0x40b3d5
                                bool v271 = false; // 0x40b3d5
                                while (v268 == v269) {
                                    int64_t v272 = v265 - 1; // 0x40b3d5
                                    int64_t v273 = v267 + v28; // 0x40b3d5
                                    v264 = v266 + v28;
                                    v265 = v272;
                                    v270 = v268;
                                    v271 = true;
                                    if (v272 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v266 = v264;
                                    v267 = v273;
                                    v268 = *(char *)v266;
                                    v269 = *(char *)v267;
                                    v270 = v269;
                                    v271 = false;
                                }
                                unsigned char v274 = v270;
                                v232 = 1;
                                int64_t v275 = v214; // 0x40b3de
                                int64_t v276 = 8; // 0x40b3de
                                if ((v268 >= v274 && !v271) != v268 < v274) {
                                    int64_t v277 = v275;
                                    int64_t v278 = (int64_t)"fusectl";
                                    unsigned char v279 = *(char *)v277; // 0x40b3f1
                                    char v280 = *(char *)v278; // 0x40b3f1
                                    char v281 = v280; // 0x40b3f1
                                    bool v282 = false; // 0x40b3f1
                                    while (v279 == v280) {
                                        int64_t v283 = v276 - 1; // 0x40b3f1
                                        int64_t v284 = v278 + v28; // 0x40b3f1
                                        v275 = v277 + v28;
                                        v276 = v283;
                                        v281 = v279;
                                        v282 = true;
                                        if (v283 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v277 = v275;
                                        v278 = v284;
                                        v279 = *(char *)v277;
                                        v280 = *(char *)v278;
                                        v281 = v280;
                                        v282 = false;
                                    }
                                    unsigned char v285 = v281;
                                    v232 = 1;
                                    int64_t v286 = v214; // 0x40b3fa
                                    int64_t v287 = 7; // 0x40b3fa
                                    if ((v279 >= v285 && !v282) != v279 < v285) {
                                        int64_t v288 = v286;
                                        int64_t v289 = (int64_t)"mqueue";
                                        unsigned char v290 = *(char *)v288; // 0x40b40d
                                        char v291 = *(char *)v289; // 0x40b40d
                                        char v292 = v291; // 0x40b40d
                                        bool v293 = false; // 0x40b40d
                                        while (v290 == v291) {
                                            int64_t v294 = v287 - 1; // 0x40b40d
                                            int64_t v295 = v289 + v28; // 0x40b40d
                                            v286 = v288 + v28;
                                            v287 = v294;
                                            v292 = v290;
                                            v293 = true;
                                            if (v294 == 0) {
                                                // break -> 
                                                break;
                                            }
                                            v288 = v286;
                                            v289 = v295;
                                            v290 = *(char *)v288;
                                            v291 = *(char *)v289;
                                            v292 = v291;
                                            v293 = false;
                                        }
                                        unsigned char v296 = v292;
                                        v232 = 1;
                                        int64_t v297 = v214; // 0x40b416
                                        int64_t v298 = 11; // 0x40b416
                                        if ((v290 >= v296 && !v293) != v290 < v296) {
                                            int64_t v299 = v297;
                                            int64_t v300 = (int64_t)"rpc_pipefs";
                                            unsigned char v301 = *(char *)v299; // 0x40b429
                                            char v302 = *(char *)v300; // 0x40b429
                                            char v303 = v302; // 0x40b429
                                            bool v304 = false; // 0x40b429
                                            while (v301 == v302) {
                                                int64_t v305 = v298 - 1; // 0x40b429
                                                int64_t v306 = v300 + v28; // 0x40b429
                                                v297 = v299 + v28;
                                                v298 = v305;
                                                v303 = v301;
                                                v304 = true;
                                                if (v305 == 0) {
                                                    // break -> 
                                                    break;
                                                }
                                                v299 = v297;
                                                v300 = v306;
                                                v301 = *(char *)v299;
                                                v302 = *(char *)v300;
                                                v303 = v302;
                                                v304 = false;
                                            }
                                            unsigned char v307 = v303;
                                            v232 = 1;
                                            int64_t v308 = v214; // 0x40b432
                                            int64_t v309 = 6; // 0x40b432
                                            if ((v301 >= v307 && !v304) != v301 < v307) {
                                                int64_t v310 = v308;
                                                int64_t v311 = (int64_t)"sysfs";
                                                unsigned char v312 = *(char *)v310; // 0x40b445
                                                char v313 = *(char *)v311; // 0x40b445
                                                char v314 = v313; // 0x40b445
                                                bool v315 = false; // 0x40b445
                                                while (v312 == v313) {
                                                    int64_t v316 = v309 - 1; // 0x40b445
                                                    int64_t v317 = v311 + v28; // 0x40b445
                                                    v308 = v310 + v28;
                                                    v309 = v316;
                                                    v314 = v312;
                                                    v315 = true;
                                                    if (v316 == 0) {
                                                        // break -> 
                                                        break;
                                                    }
                                                    v310 = v308;
                                                    v311 = v317;
                                                    v312 = *(char *)v310;
                                                    v313 = *(char *)v311;
                                                    v314 = v313;
                                                    v315 = false;
                                                }
                                                unsigned char v318 = v314;
                                                v232 = 1;
                                                int64_t v319 = v214; // 0x40b44e
                                                int64_t v320 = 6; // 0x40b44e
                                                if ((v312 >= v318 && !v315) != v312 < v318) {
                                                    int64_t v321 = v319;
                                                    int64_t v322 = (int64_t)"devfs";
                                                    unsigned char v323 = *(char *)v321; // 0x40b461
                                                    char v324 = *(char *)v322; // 0x40b461
                                                    char v325 = v324; // 0x40b461
                                                    bool v326 = false; // 0x40b461
                                                    while (v323 == v324) {
                                                        int64_t v327 = v320 - 1; // 0x40b461
                                                        int64_t v328 = v322 + v28; // 0x40b461
                                                        v319 = v321 + v28;
                                                        v320 = v327;
                                                        v325 = v323;
                                                        v326 = true;
                                                        if (v327 == 0) {
                                                            // break -> 
                                                            break;
                                                        }
                                                        v321 = v319;
                                                        v322 = v328;
                                                        v323 = *(char *)v321;
                                                        v324 = *(char *)v322;
                                                        v325 = v324;
                                                        v326 = false;
                                                    }
                                                    unsigned char v329 = v325;
                                                    v232 = 1;
                                                    int64_t v330 = v214; // 0x40b46a
                                                    int64_t v331 = 7; // 0x40b46a
                                                    if ((v323 >= v329 && !v326) != v323 < v329) {
                                                        int64_t v332 = v330;
                                                        int64_t v333 = (int64_t)"kernfs";
                                                        unsigned char v334 = *(char *)v332; // 0x40b47d
                                                        char v335 = *(char *)v333; // 0x40b47d
                                                        char v336 = v335; // 0x40b47d
                                                        bool v337 = false; // 0x40b47d
                                                        while (v334 == v335) {
                                                            int64_t v338 = v331 - 1; // 0x40b47d
                                                            int64_t v339 = v333 + v28; // 0x40b47d
                                                            v330 = v332 + v28;
                                                            v331 = v338;
                                                            v336 = v334;
                                                            v337 = true;
                                                            if (v338 == 0) {
                                                                // break -> 
                                                                break;
                                                            }
                                                            v332 = v330;
                                                            v333 = v339;
                                                            v334 = *(char *)v332;
                                                            v335 = *(char *)v333;
                                                            v336 = v335;
                                                            v337 = false;
                                                        }
                                                        unsigned char v340 = v336;
                                                        v232 = 1;
                                                        if ((v334 >= v340 && !v337) != v334 < v340) {
                                                            char * str5 = (char *)v214; // 0x40b494
                                                            v232 = 1;
                                                            if (strcmp(str5, "ignore") != 0) {
                                                                // 0x40b4a1
                                                                v232 = strcmp(str5, "none") == 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x40b2fb
                v24 = *v211;
                *v22 = *v22 & -2 | v232;
                char * str6 = (char *)v24; // 0x40b313
                v18 = 1;
                if (strchr(str6, 58) == NULL) {
                    // 0x40b4c0
                    v25 = *str6;
                    if (v25 == 47) {
                        // 0x40b7c0
                        v4 = true;
                        v36 = false;
                        if (*(char *)(v24 + 1) != 47) {
                            goto lab___crit_edge191;
                        } else {
                            int64_t v341; // 0x40b0c0
                            unsigned char v342 = *(char *)v341; // 0x40b7d8
                            int64_t v343; // 0x40b0c0
                            char v344 = *(char *)v343; // 0x40b7d8
                            while (v342 == v344) {
                                // 0x40b7cb
                                int64_t v345; // 0x40b0c0
                                int64_t v346 = v345;
                                int64_t v347 = v346 - 1; // 0x40b7d8
                                int64_t v348; // 0x40b0c0
                                v343 = v348 + v28;
                                int64_t v349; // 0x40b0c0
                                v341 = v349 + v28;
                                v345 = v347;
                                char v350 = v342; // 0x40b7d8
                                bool v351 = true; // 0x40b7d8
                                if (v347 == 0) {
                                    // break -> 
                                    break;
                                }
                                v349 = v341;
                                v348 = v343;
                                v342 = *(char *)v349;
                                v344 = *(char *)v348;
                                v350 = v344;
                                v351 = false;
                            }
                            unsigned char v352 = v344;
                            v18 = 1;
                            int64_t v353 = v214; // 0x40b7e1
                            int64_t v354 = 5; // 0x40b7e1
                            if ((v342 >= v352 && true) == v342 < v352) {
                                goto lab_0x40b326;
                            } else {
                                int64_t v355 = v353;
                                int64_t v356 = (int64_t)"cifs";
                                unsigned char v357 = *(char *)v355; // 0x40b7f4
                                char v358 = *(char *)v356; // 0x40b7f4
                                char v359 = v358; // 0x40b7f4
                                bool v360 = false; // 0x40b7f4
                                while (v357 == v358) {
                                    int64_t v361 = v354 - 1; // 0x40b7f4
                                    int64_t v362 = v356 + v28; // 0x40b7f4
                                    v353 = v355 + v28;
                                    v354 = v361;
                                    v359 = v357;
                                    v360 = true;
                                    if (v361 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v355 = v353;
                                    v356 = v362;
                                    v357 = *(char *)v355;
                                    v358 = *(char *)v356;
                                    v359 = v358;
                                    v360 = false;
                                }
                                unsigned char v363 = v359;
                                v18 = 1;
                                if ((v357 >= v363 && !v360) == v357 < v363) {
                                    goto lab_0x40b326;
                                } else {
                                    goto lab_0x40b4cb;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40b4cb;
                    }
                } else {
                    goto lab_0x40b326;
                }
            }
        }
      lab_0x40b348_2:;
        int64_t v364 = (int64_t)file; // 0x40b0d8
        free((int64_t *)*v5);
        if ((*(char *)file & 32) != 0) {
            int32_t * v365 = __errno_location(); // 0x40b810
            int32_t v366 = *v365; // 0x40b818
            function_40ced0(v364, v191);
            *v365 = v366;
            v14 = v8;
            v15 = v365;
            v16 = v366;
            goto lab_0x40b753;
        } else {
            // 0x40b35c
            v9 = v8;
            v13 = v8;
            if ((int32_t)function_40ced0(v364, v191) == -1) {
                goto lab_0x40b748;
            } else {
                goto lab_0x40b36d;
            }
        }
    }
  lab_0x40b326:
    // 0x40b326
    *v22 = *v22 & -3 | 2 * v18;
    *(int64_t *)v7 = v35;
    int64_t v367 = v35 + 48; // 0x40b338
    v6 = v367;
    v5 = v27;
    v8 = v367;
    if (__getdelim(v34, v21, 10, file) == -1) {
        // break -> 0x40b348
        goto lab_0x40b348_2;
    }
    goto lab_0x40b131;
  lab_0x40b4cb:;
    bool v368 = v25 > 45; // 0x40b4d8
    int64_t v369 = (int64_t)"-hosts"; // 0x40b4d8
    int64_t v370 = v24; // 0x40b4d8
    v4 = v25 > 45;
    v36 = false;
    if (v25 == 45) {
        int64_t v371 = 6; // 0x40b0c0
        v4 = v368;
        v36 = true;
        while (v371 != 0) {
            int64_t v372 = v370 + v28; // 0x40b4d8
            int64_t v373 = v369 + v28; // 0x40b4d8
            unsigned char v374 = *(char *)v372;
            unsigned char v375 = *(char *)v373; // 0x40b4d8
            v371--;
            v368 = v375 < v374;
            v369 = v373;
            v370 = v372;
            v4 = v375 < v374;
            v36 = false;
            if (v375 != v374) {
                // break -> ._crit_edge191
                break;
            }
            v4 = v368;
            v36 = true;
        }
    }
    goto lab___crit_edge191;
  lab___crit_edge191:;
    bool v376 = v4;
    v18 = !((v376 | v36)) == v376;
    goto lab_0x40b326;
  lab_0x40b70a:
    // 0x40b70a
    *(int64_t *)(v31 + 32) = -1;
    *v32 = *v32 & -3 | 2 * v19;
    *(int64_t *)v11 = v31;
    int64_t v377 = v31 + 48; // 0x40b723
    struct mntent * v378 = getmntent(v30); // 0x40b727
    v17 = v378;
    v10 = v377;
    v12 = v377;
    if (v378 == NULL) {
        // break -> 0x40b738
        goto lab_0x40b738;
    }
    goto lab_0x40b530;
  lab_0x40b7a2:;
    bool v379 = v23 > 45; // 0x40b7af
    int64_t v380 = (int64_t)"-hosts"; // 0x40b7af
    int64_t v381 = v33; // 0x40b7af
    v3 = v23 > 45;
    v37 = false;
    if (v23 == 45) {
        int64_t v382 = 6; // 0x40b0c0
        v3 = v379;
        v37 = true;
        while (v382 != 0) {
            int64_t v383 = v381 + v29; // 0x40b7af
            int64_t v384 = v380 + v29; // 0x40b7af
            unsigned char v385 = *(char *)v383;
            unsigned char v386 = *(char *)v384; // 0x40b7af
            v382--;
            v379 = v386 < v385;
            v380 = v384;
            v381 = v383;
            v3 = v386 < v385;
            v37 = false;
            if (v386 != v385) {
                // break -> ._crit_edge183
                break;
            }
            v3 = v379;
            v37 = true;
        }
    }
    goto lab___crit_edge183;
  lab___crit_edge183:;
    bool v387 = v3;
    v19 = !((v387 | v37)) == v387;
    goto lab_0x40b70a;
  lab_0x40b36d:
    // 0x40b36d
    *(int64_t *)v9 = 0;
    // 0x40b37a
    return *(int64_t *)(v2 + 72);
  lab_0x40b748:;
    int32_t * v388 = __errno_location(); // 0x40b748
    v14 = v13;
    v15 = v388;
    v16 = *v388;
    goto lab_0x40b753;
  lab_0x40b753:
    // 0x40b753
    *(int64_t *)v14 = 0;
    int64_t * v389 = (int64_t *)(v2 + 72); // 0x40b75b
    int64_t v390 = *v389; // 0x40b75b
    if (v390 == 0) {
        // 0x40b77e
        *v15 = v16;
        return 0;
    }
    int64_t v391 = *(int64_t *)(v390 + 48); // 0x40b768
    function_40b070(v390);
    *v389 = v391;
    int64_t v392 = v391; // 0x40b77c
    while (v391 != 0) {
        // 0x40b768
        v391 = *(int64_t *)(v392 + 48);
        function_40b070(v392);
        *v389 = v391;
        v392 = v391;
    }
    // 0x40b77e
    *v15 = v16;
    return 0;
}
// Address range: 0x40b880 - 0x40b9ae
int64_t function_40b880(int64_t a1, uint64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 1; // 0x40b8a7
    int64_t v2 = 0; // 0x40b8a7
    int64_t v3 = -1; // 0x40b8a7
    int64_t v4; // 0x40b880
    int64_t v5; // 0x40b880
    int64_t v6; // 0x40b880
    if (a2 <= 1) {
        // 0x40b8d3
        *a3 = 1;
        v5 = -1;
        v4 = -1;
        v6 = 1;
    } else {
        int64_t v7; // 0x40b880
        int64_t v8; // 0x40b880
        int64_t v9; // 0x40b880
        int64_t v10; // 0x40b880
        while (true) {
            // 0x40b8a9
            v9 = v3;
            int64_t v11 = v9 + a1; // 0x40b8a9
            char * v12 = (char *)(v11 + 1);
            int64_t v13 = 1;
            unsigned char v14 = *(char *)(v13 + v11); // 0x40b8ad
            unsigned char v15 = *(char *)(v1 + a1); // 0x40b8b2
            int64_t v16 = v1; // 0x40b8b5
            int64_t v17 = v1; // 0x40b8b5
            int64_t v18 = v13; // 0x40b8b5
            int64_t v19 = v2; // 0x40b8b5
            int64_t v20 = 1; // 0x40b8b5
            char v21 = v14; // 0x40b8b5
            char v22 = v15; // 0x40b8b5
            unsigned char v23; // 0x40b8ad
            unsigned char v24; // 0x40b8b2
            int64_t v25; // 0x40b8c7
            if (v15 < v14) {
                v10 = v16;
                v25 = v10 + 1;
                if (v25 >= a2) {
                    // break (via goto) -> 0x40b8d3
                    goto lab_0x40b8d3;
                }
                // 0x40b8a9
                v23 = *v12;
                v24 = *(char *)(v25 + a1);
                while (v24 < v23) {
                    // 0x40b8bb
                    v10 = v25;
                    v25 = v10 + 1;
                    if (v25 >= a2) {
                        // break (via goto) -> 0x40b8d3
                        goto lab_0x40b8d3;
                    }
                    // 0x40b8a9
                    v23 = *v12;
                    v24 = *(char *)(v25 + a1);
                }
                // 0x40b938
                v17 = v25;
                v18 = 1;
                v19 = v10;
                v20 = v10 - v9;
                v21 = v23;
                v22 = v24;
            }
            // 0x40b938
            v3 = v19;
            while (v22 == v21) {
                int64_t v26 = v18;
                v13 = v26 == v20 ? 1 : v26 + 1;
                int64_t v27 = v26 == v20 ? v17 : v3;
                int64_t v28 = v27 + v13; // 0x40b8a0
                v8 = v9;
                v7 = v20;
                if (v28 >= a2) {
                    goto lab_0x40b8d3_3;
                }
                v14 = *(char *)(v13 + v11);
                v15 = *(char *)(v28 + a1);
                v16 = v28;
                v17 = v28;
                v18 = v13;
                v19 = v27;
                v21 = v14;
                v22 = v15;
                if (v15 < v14) {
                    v10 = v16;
                    v25 = v10 + 1;
                    if (v25 >= a2) {
                        // break (via goto) -> 0x40b8d3
                        goto lab_0x40b8d3;
                    }
                    // 0x40b8a9
                    v23 = *v12;
                    v24 = *(char *)(v25 + a1);
                    while (v24 < v23) {
                        // 0x40b8bb
                        v10 = v25;
                        v25 = v10 + 1;
                        if (v25 >= a2) {
                            // break (via goto) -> 0x40b8d3
                            goto lab_0x40b8d3;
                        }
                        // 0x40b8a9
                        v23 = *v12;
                        v24 = *(char *)(v25 + a1);
                    }
                    // 0x40b938
                    v17 = v25;
                    v18 = 1;
                    v19 = v10;
                    v20 = v10 - v9;
                    v21 = v23;
                    v22 = v24;
                }
                // 0x40b938
                v3 = v19;
            }
            // 0x40b93a
            v1 = v3 + 2;
            v2 = v3 + 1;
            v8 = v3;
            v7 = 1;
            if (v1 >= a2) {
                goto lab_0x40b8d3_3;
            }
        }
      lab_0x40b8d3:
        // 0x40b8d3
        v8 = v9;
        v7 = v10 - v9;
      lab_0x40b8d3_3:
        // 0x40b8d3
        *a3 = v7;
        int64_t v29 = 1; // 0x40b8f7
        int64_t v30 = -1; // 0x40b8f7
        int64_t v31 = 0; // 0x40b8f7
        v5 = v8;
        v4 = -1;
        v6 = 1;
        if (a2 > 1) {
            int64_t v32; // 0x40b880
            int64_t v33; // 0x40b880
            while (true) {
                // 0x40b8f9
                v32 = v30;
                int64_t v34 = v32 + a1; // 0x40b8f9
                char * v35 = (char *)(v34 + 1);
                int64_t v36 = 1;
                unsigned char v37 = *(char *)(v36 + v34); // 0x40b8fd
                unsigned char v38 = *(char *)(v29 + a1); // 0x40b902
                int64_t v39 = v29; // 0x40b906
                int64_t v40 = v29; // 0x40b906
                int64_t v41 = 1; // 0x40b906
                int64_t v42 = v36; // 0x40b906
                int64_t v43 = v31; // 0x40b906
                char v44 = v37; // 0x40b906
                char v45 = v38; // 0x40b906
                int64_t v46; // 0x40b914
                unsigned char v47; // 0x40b8fd
                unsigned char v48; // 0x40b902
                if (v38 > v37) {
                    v33 = v39;
                    v46 = v33 + 1;
                    if (v46 >= a2) {
                        // break (via goto) -> 0x40b920
                        goto lab_0x40b920;
                    }
                    // 0x40b8f9
                    v47 = *v35;
                    v48 = *(char *)(v46 + a1);
                    while (v48 > v47) {
                        // 0x40b908
                        v33 = v46;
                        v46 = v33 + 1;
                        if (v46 >= a2) {
                            // break (via goto) -> 0x40b920
                            goto lab_0x40b920;
                        }
                        // 0x40b8f9
                        v47 = *v35;
                        v48 = *(char *)(v46 + a1);
                    }
                    // 0x40b958
                    v40 = v46;
                    v41 = v33 - v32;
                    v42 = 1;
                    v43 = v33;
                    v44 = v47;
                    v45 = v48;
                }
                int64_t v49 = v43;
                while (v45 == v44) {
                    int64_t v50 = v42;
                    v36 = v50 == v41 ? 1 : v50 + 1;
                    int64_t v51 = v50 == v41 ? v40 : v49;
                    int64_t v52 = v51 + v36; // 0x40b8f0
                    v5 = v8;
                    v4 = v32;
                    v6 = v41;
                    if (v52 >= a2) {
                        goto lab_0x40b920_3;
                    }
                    v37 = *(char *)(v36 + v34);
                    v38 = *(char *)(v52 + a1);
                    v39 = v52;
                    v40 = v52;
                    v42 = v36;
                    v43 = v51;
                    v44 = v37;
                    v45 = v38;
                    if (v38 > v37) {
                        v33 = v39;
                        v46 = v33 + 1;
                        if (v46 >= a2) {
                            // break (via goto) -> 0x40b920
                            goto lab_0x40b920;
                        }
                        // 0x40b8f9
                        v47 = *v35;
                        v48 = *(char *)(v46 + a1);
                        while (v48 > v47) {
                            // 0x40b908
                            v33 = v46;
                            v46 = v33 + 1;
                            if (v46 >= a2) {
                                // break (via goto) -> 0x40b920
                                goto lab_0x40b920;
                            }
                            // 0x40b8f9
                            v47 = *v35;
                            v48 = *(char *)(v46 + a1);
                        }
                        // 0x40b958
                        v40 = v46;
                        v41 = v33 - v32;
                        v42 = 1;
                        v43 = v33;
                        v44 = v47;
                        v45 = v48;
                    }
                    // 0x40b958
                    v49 = v43;
                }
                int64_t v53 = v49 + 2; // 0x40b8f0
                v29 = v53;
                v30 = v49;
                v31 = v49 + 1;
                v5 = v8;
                v4 = v49;
                v6 = 1;
                if (v53 >= a2) {
                    goto lab_0x40b920_3;
                }
            }
          lab_0x40b920:
            // 0x40b920
            v5 = v8;
            v4 = v32;
            v6 = v33 - v32;
        }
    }
  lab_0x40b920_3:;
    int64_t v54 = v4 + 1; // 0x40b920
    int64_t v55 = v5 + 1; // 0x40b924
    int64_t result = v55; // 0x40b92b
    if (v54 >= v55) {
        // 0x40b92d
        *a3 = v6;
        result = v54;
    }
    // 0x40b933
    return result;
}
// Address range: 0x40b9b0 - 0x40bcf9
int64_t function_40b9b0(int64_t a1, int64_t a2, int64_t str, int64_t a4) {
    // 0x40b9b0
    int64_t v1; // 0x40b9b0
    int64_t v2; // bp-2112, 0x40b9b0
    int64_t v3; // 0x40b9b0
    if (a4 < 3) {
        // 0x40bcd0
        v2 = 1;
        v1 = a4 - 1;
        v3 = 1;
    } else {
        // 0x40b9d7
        int64_t v4; // 0x40b9b0
        v1 = function_40b880(str, a4, &v2, a4, v4, v4);
        v3 = v2;
    }
    // 0x40b9f4
    int64_t v5; // bp-2184, 0x40b9b0
    int64_t v6 = &v5; // 0x40b9c6
    int64_t n = v1;
    int64_t v7; // bp-2104, 0x40b9b0
    int64_t v8 = &v7; // 0x40ba01
    *(int64_t *)v8 = a4;
    v8 += 8;
    int64_t v9; // bp-56, 0x40b9b0
    while (v8 != (int64_t)&v9) {
        // 0x40ba08
        *(int64_t *)v8 = a4;
        v8 += 8;
    }
    int64_t str2 = v3 + str; // 0x40ba19
    int64_t v10; // 0x40b9b0
    int64_t result; // 0x40b9b0
    if (a4 == 0) {
        // 0x40bb6a
        v10 = -1;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x40bb7f
            return 0;
        }
    } else {
        int64_t v11 = a4 - 1;
        int64_t v12 = v6 + 80; // 0x40ba45
        int64_t v13 = str + 1; // 0x40ba41
        *(int64_t *)(8 * (int64_t)*(char *)str + v12) = v11 + str - str;
        while (a4 + str != v13) {
            int64_t v14 = v13;
            unsigned char v15 = *(char *)v14; // 0x40ba38
            v13 = v14 + 1;
            *(int64_t *)(8 * (int64_t)v15 + v12) = v11 + str - v14;
        }
        // 0x40ba4f
        v10 = v11;
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x40bb9b
            if (function_40aed0(a2 + a1, 0, a4 - a2) != 0) {
                // 0x40bb7f
                return 0;
            }
            int64_t v16 = a4 - v3; // 0x40bbb2
            int64_t v17 = 0;
            int64_t v18 = 0; // 0x40b9b0
            int64_t v19 = a4;
            while (v19 != 0) {
                int64_t v20 = v17;
                int64_t v21 = 0x100000000 * v18;
                uint64_t v22 = *(int64_t *)(8 * (int64_t)*(char *)(a1 - 1 + v19) + v12); // 0x40bc34
                int64_t v23; // 0x40b9b0
                int64_t v24; // 0x40b9b0
                if (v22 != 0) {
                    int64_t v25 = v22; // 0x40bbd5
                    if (v22 < v3) {
                        // 0x40bbd7
                        v25 = v21 != 0 ? 0x100000000 * v16 >> 32 : v22;
                    }
                    // 0x40bbe0
                    v23 = 0;
                    v24 = v25 + v20;
                } else {
                    uint64_t v26 = v21 >> 32; // 0x40bc1b
                    int64_t v27 = v26 >= n ? v26 : n; // 0x40bc44
                    if (v27 >= v11) {
                        // 0x40bc80
                        if (v26 < n) {
                            int64_t v28 = v20 + a1; // 0x40bc8d
                            char * v29; // 0x40b9b0
                            char v30 = *v29; // 0x40bc91
                            int64_t v31; // 0x40bb9b
                            char v32 = *(char *)(v28 + v31); // 0x40bc96
                            int64_t v33 = v31; // 0x40bc9a
                            if (v32 == v30) {
                                int64_t v34 = v33;
                                while (v26 != v34) {
                                    int64_t v35 = v34 - 1;
                                    char v36 = *(char *)(v35 + v28); // 0x40bca0
                                    char v37 = *(char *)(v35 + str); // 0x40bca5
                                    v33 = v35;
                                    if (v37 != v36) {
                                        // break -> 0x40bcb8
                                        break;
                                    }
                                    v34 = v33;
                                }
                            }
                        }
                        // 0x40bcb8
                        if (v26 + 1 > n) {
                            // 0x40bcf0
                            result = v20 + a1;
                            return result;
                        }
                        // 0x40bcc1
                        v23 = v16;
                        v24 = v20 + v3;
                    } else {
                        int64_t v38 = v27;
                        char v39 = *(char *)(v20 + a1 + v38); // 0x40bc61
                        while (*(char *)(v38 + str) == v39) {
                            int64_t v40 = v38 + 1; // 0x40bc58
                            if (v40 == v11) {
                                goto lab_0x40bc80;
                            }
                            v38 = v40;
                            v39 = *(char *)(v20 + a1 + v38);
                        }
                        // 0x40bc6b
                        v23 = 0;
                        v24 = v38 + v20 + 1 - n;
                    }
                }
                // 0x40bbe6
                v17 = v24;
                int64_t v41 = v17 + a4; // 0x40bbe9
                v18 = v23;
                if (function_40aed0(v19 + a1, 0, v41 - v19) != 0) {
                    // break -> 0x40bb7f
                    break;
                }
                v19 = v41;
            }
            // 0x40bb7f
            return 0;
        }
    }
    uint64_t v42 = a4 - n; // 0x40ba6e
    int64_t v43 = (v42 < n ? n : v42) + 1; // 0x40ba7b
    v2 = v43;
    int64_t v44 = function_40aed0(a2 + a1, 0, a4 - a2); // 0x40bac0
    if (a4 == 0) {
        // 0x40bb7f
        return 0;
    }
    int64_t v45 = n - 1;
    int64_t v46 = v44; // 0x40b9b0
    int64_t v47 = a4; // 0x40baa6
    int64_t v48 = 0;
    int64_t v49; // 0x40b9b0
    int64_t v50; // 0x40b9b0
    int64_t v51; // 0x40b9b0
    int64_t v52; // 0x40b9b0
    int64_t v53; // 0x40bad6
    int64_t v54; // 0x40baf1
    while (true) {
      lab_0x40bad3:
        // 0x40bad3
        result = 0;
        if (v46 != 0) {
            // break -> 0x40bb7f
            break;
        }
        // 0x40bae1
        v49 = v47;
        v53 = 0x100000000 * v48 >> 32;
        unsigned char v55 = *(char *)(a1 - 1 + v49); // 0x40bae1
        int64_t v56 = *(int64_t *)(v6 + 80 + 8 * (int64_t)v55); // 0x40bae7
        v51 = v56;
        v50 = v53;
        if (v56 != 0) {
            goto lab_0x40baa0;
        } else {
            // 0x40baf1
            v54 = v53 + a1;
            if (n >= v10) {
                goto lab_0x40bb23;
            } else {
                // 0x40bafa
                v52 = n;
                if (*(char *)(v54 + n) == *(char *)(n + str)) {
                    int64_t v57 = n + 1; // 0x40bb1a
                    while (v57 < v10) {
                        int64_t v58 = v57; // 0x40bb18
                        v52 = v57;
                        if (*(char *)(v57 + str) != *(char *)(v57 + v54)) {
                            goto lab_0x40bb60;
                        }
                        v57 = v58 + 1;
                    }
                    goto lab_0x40bb23;
                } else {
                    goto lab_0x40bb60;
                }
            }
        }
    }
  lab_0x40bb7f_3:
    // 0x40bb7f
    return result;
  lab_0x40bb60:
    // 0x40bb60
    v51 = v52;
    v50 = 1 - n + v53;
    goto lab_0x40baa0;
  lab_0x40baa0:;
    int64_t v59 = v50 + v51; // 0x40baa0
    goto lab_0x40baa3;
  lab_0x40baa3:
    // 0x40baa3
    v48 = v59;
    v47 = v48 + a4;
    v46 = function_40aed0(v49 + a1, 0, v47 - v49);
    result = 0;
    if (v47 == 0) {
        // break -> 0x40bb7f
        goto lab_0x40bb7f_3;
    }
    goto lab_0x40bad3;
  lab_0x40bb23:
    // 0x40bb23
    result = v54;
    if (n == 0) {
        // break -> 0x40bb7f
        goto lab_0x40bb7f_3;
    }
    // 0x40bb2d
    if (*(char *)(v54 + v45) == *(char *)(v45 + str)) {
        result = v54;
        if (v45 == 0) {
            // break (via goto) -> 0x40bb7f
            goto lab_0x40bb7f_3;
        }
        int64_t v60 = v45 - 1; // 0x40bb4a
        int64_t v61 = v60; // 0x40bb48
        while (*(char *)(v60 + str) == *(char *)(v60 + v54)) {
            // 0x40bb4a
            result = v54;
            if (v61 == 0) {
                // break (via goto) -> 0x40bb7f
                goto lab_0x40bb7f_3;
            }
            // 0x40bb40
            v60 = v61 - 1;
            v61 = v60;
        }
    }
    // 0x40bb91
    v59 = v53 + v43;
    goto lab_0x40baa3;
}
// Address range: 0x40bd00 - 0x40c094
int64_t function_40bd00(int64_t result, char * str) {
    int64_t v1 = (int64_t)str;
    char v2 = result;
    char c = v1;
    if (v2 == 0) {
        // 0x40bdc5
        return c == 0 ? result : 0;
    }
    int64_t v3 = result; // 0x40bd20
    int64_t v4 = v1; // 0x40bd20
    if (c == 0) {
        // 0x40bdc5
        return result;
    }
    int64_t v5 = 1; // 0x40bd20
    v3++;
    v4++;
    unsigned char v6 = *(char *)v4; // 0x40bd51
    v5 &= (int64_t)(c == v2);
    char v7 = *(char *)v3; // 0x40bd57
    while (v7 != 0) {
        // 0x40bd40
        if (v6 == 0) {
            goto lab_0x40bd65;
        }
        char v8 = v6;
        v3++;
        v4++;
        v6 = *(char *)v4;
        v5 &= (int64_t)(v8 == v7);
        v7 = *(char *)v3;
    }
    // 0x40bd5e
    if (v6 != 0) {
        // 0x40bdc5
        return 0;
    }
  lab_0x40bd65:
    // 0x40bd65
    if (v5 != 0) {
        // 0x40bdc5
        return result;
    }
    uint64_t v9 = v4 - v1; // 0x40bd77
    char * found_char_pos = strchr((char *)(result + 1), (int32_t)c); // 0x40bd7e
    int64_t result2 = (int64_t)found_char_pos; // 0x40bd7e
    if (v9 == 1 || found_char_pos == NULL) {
        // 0x40bdc5
        return result2;
    }
    uint64_t v10 = v9 + result; // 0x40bd91
    int64_t v11 = v10 < result2 ? 1 : v10 - result2; // 0x40bda7
    if (v9 >= 32) {
        // 0x40bdc5
        return function_40b9b0(result2, v11, v1, v9);
    }
    int64_t v12; // 0x40bd00
    int64_t v13; // bp-64, 0x40bd00
    int64_t v14; // 0x40bd00
    if (v9 < 3) {
        // 0x40c069
        v13 = 1;
        v12 = v9 - 1;
        v14 = 1;
    } else {
        // 0x40bdea
        v12 = function_40b880(v1, v9, &v13, (int64_t)v6, v11, v1 % 256);
        v14 = v13;
    }
    int64_t n = v12;
    int64_t v15; // 0x40bd00
    int64_t v16; // 0x40bd00
    int64_t v17; // 0x40bd00
    int64_t v18; // 0x40bd00
    int64_t v19; // 0x40bd00
    int64_t v20; // 0x40bf70
    int64_t v21; // 0x40bd00
    int64_t v22; // 0x40bd00
    if (memcmp((int64_t *)str, (int64_t *)(v14 + v1), (int32_t)n) != 0) {
        uint64_t v23 = v9 - n; // 0x40bf63
        v20 = (v23 < n ? n : v23) + 1;
        v13 = v20;
        if (v9 == 0 | function_40aed0(v11 + result2, 0, v9 - v11) != 0) {
            // 0x40bdc5
            return 0;
        }
        // 0x40bfb8
        v21 = n - 1;
        int64_t v24 = 0x100000000 - 0x100000000 * n >> 32;
        v15 = v9;
        v17 = 0;
        while (true) {
          lab_0x40bfb8:
            // 0x40bfb8
            v18 = v17;
            v16 = v15;
            v22 = v18 + result2;
            if (v9 > n) {
                // 0x40bfc1
                if (*(char *)(v22 + n) == *(char *)(n + v1)) {
                    int64_t v25 = n + 1; // 0x40bfea
                    while (v9 > v25) {
                        int64_t v26 = v25; // 0x40bfe8
                        int64_t v27 = v25; // 0x40bfe8
                        if (*(char *)(v25 + v1) != *(char *)(v25 + v22)) {
                            // 0x40c030
                            v19 = v18 + v24 + v27;
                            goto lab_0x40c03d;
                        }
                        v25 = v26 + 1;
                    }
                    goto lab_0x40bff3;
                } else {
                    // 0x40c030
                    v19 = v18 + v24 + n;
                    goto lab_0x40c03d;
                }
            } else {
                goto lab_0x40bff3;
            }
        }
      lab_0x40bdc5_3:
        // 0x40bdc5
        return 0;
    }
    // 0x40be37
    if (v9 == 0 | function_40aed0(v11 + result2, 0, v9 - v11) != 0) {
        // 0x40bdc5
        return 0;
    }
    int64_t v28 = n - 1; // 0x40be37
    char * v29 = (char *)(v28 + v1);
    int64_t v30 = 0x100000000 * (v9 - v14) / 0x100000000;
    int64_t v31 = 0x100000000 - 0x100000000 * n >> 32;
    int64_t v32 = v9; // 0x40bd00
    int64_t v33 = 0; // 0x40bd00
    int64_t v34 = 0; // 0x40bd00
    int64_t v35; // 0x40bd00
    uint64_t v36; // 0x40bd00
    int64_t v37; // 0x40bd00
    int64_t v38; // 0x40bd00
    while (true) {
      lab_0x40be92:
        // 0x40be92
        v36 = v34;
        v37 = v33;
        v35 = v32;
        int64_t v39 = n >= v36 ? n : v36; // 0x40be98
        if (v9 > v39) {
            // 0x40bea1
            v38 = v39;
            if (*(char *)(v39 + v37 + result2) != *(char *)(v39 + v1)) {
                goto lab_0x40bf40;
            } else {
                int64_t v40; // 0x40bd00
                while (v9 != v40 + 1) {
                    // 0x40bec0
                    int64_t v41; // 0x40bd00
                    int64_t v42; // 0x40beca
                    char v43 = *(char *)(v42 + v41); // 0x40bec0
                    char v44 = *(char *)(v42 + v1); // 0x40bec4
                    v40 = v42;
                    v38 = v42;
                    if (v44 != v43) {
                        goto lab_0x40bf40;
                    }
                    int64_t v45 = v40;
                    v42 = v45 + 1;
                }
                goto lab_0x40bed3;
            }
        } else {
            goto lab_0x40bed3;
        }
    }
  lab_0x40c08c:
    // 0x40bdc5
    return v37 + result2;
  lab_0x40bff3:
    // 0x40bff3
    if (n == 0) {
        return 0;
    }
    // 0x40bffd
    int64_t result3; // 0x40bd00
    if (*(char *)(v22 + v21) == *(char *)(v21 + v1)) {
        result3 = v22;
        if (v21 == 0) {
            return result3;
        }
        int64_t v46 = v21 - 1; // 0x40c01a
        int64_t v47 = v46; // 0x40c018
        while (*(char *)(v46 + v1) == *(char *)(v46 + v22)) {
            // 0x40c01a
            result3 = v22;
            if (v47 == 0) {
                return result3;
            }
            // 0x40c010
            v46 = v47 - 1;
            v47 = v46;
        }
    }
    // 0x40c048
    v19 = v18 + v20;
    goto lab_0x40c03d;
  lab_0x40c03d:;
    int64_t v48 = v19 + v9; // 0x40bf98
    int64_t v49 = function_40aed0(v16 + result2, 0, v48 - v16); // 0x40bfa9
    v15 = v48;
    v17 = v19;
    if (v48 == 0 || v49 != 0) {
        // break -> 0x40bdc5
        goto lab_0x40bdc5_3;
    }
    goto lab_0x40bfb8;
  lab_0x40bf40:;
    int64_t v50 = 0; // 0x40bf50
    int64_t v51 = v37 + v31 + v38; // 0x40bf50
    goto lab_0x40bf2f;
  lab_0x40bed3:;
    int64_t v54 = n; // 0x40bedb
    if (n > v36) {
        int64_t v55 = v37 + result2; // 0x40bee6
        v54 = n;
        if (*v29 == *(char *)(v55 + v28)) {
            int64_t v56 = v28;
            v54 = v56;
            while (v36 != v56) {
                int64_t v57 = v56 - 1;
                int64_t v58 = v57; // 0x40bf0a
                v54 = v56;
                if (*(char *)(v57 + v1) != *(char *)(v57 + v55)) {
                    // break -> 0x40bf18
                    break;
                }
                v56 = v58;
                v54 = v56;
            }
        }
    }
    // 0x40bf18
    if (v36 + 1 > v54) {
        // break -> 0x40c08c
        goto lab_0x40c08c;
    }
    // 0x40bf25
    v50 = v30;
    v51 = v37 + v14;
    goto lab_0x40bf2f;
  lab_0x40bf2f:;
    int64_t v52 = v51 + v9; // 0x40be60
    int64_t v53 = function_40aed0(v35 + result2, 0, v52 - v35); // 0x40be76
    result3 = 0;
    v32 = v52;
    v33 = v51;
    v34 = v50;
    if (v52 == 0 || v53 != 0) {
      lab_0x40bdc5_3:
        // 0x40bdc5
        return result3;
    }
    goto lab_0x40be92;
}
// Address range: 0x40c0a0 - 0x40c0e5
int64_t function_40c0a0(int64_t a1) {
    // 0x40c0a0
    int32_t v1; // 0x40c0a0
    if (*(char *)(a1 + 8) != 0) {
        // 0x40c0d0
        v1 = setenv("TZ", (char *)(a1 + 9), 1);
    } else {
        // 0x40c0aa
        v1 = unsetenv("TZ");
    }
    int64_t result = 0; // 0x40c0b8
    if (v1 == 0) {
        // 0x40c0ba
        tzset();
        result = 1;
    }
    // 0x40c0c4
    return result;
}
// Address range: 0x40c0f0 - 0x40c119
int64_t function_40c0f0(int64_t a1) {
    // 0x40c0f0
    if (a1 == 0) {
        // 0x40c110
        int64_t result; // 0x40c0f0
        return result;
    }
    int64_t * v1 = (int64_t *)a1; // 0x40c100
    int64_t v2 = *v1; // 0x40c100
    free(v1);
    while (v2 != 0) {
        // 0x40c100
        v1 = (int64_t *)v2;
        v2 = *v1;
        free(v1);
    }
    // 0x40c110
    return &g65;
}
// Address range: 0x40c120 - 0x40c161
int64_t function_40c120(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40c12d
    int64_t v2 = function_40c0a0(a1); // 0x40c13b
    int32_t v3 = *v1; // 0x40c144
    if ((char)v2 == 0) {
        // 0x40c146
        v3 = *v1;
    }
    // 0x40c149
    function_40c0f0(a1);
    *v1 = v3;
    return v2 & 0xffffffff;
}
// Address range: 0x40c170 - 0x40c1ff
int64_t function_40c170(int64_t str, int64_t a2, int64_t a3) {
    int64_t result2; // 0x40c170
    if (str == 0) {
        int64_t * mem = malloc(128); // 0x40c1dd
        int64_t result = (int64_t)mem; // 0x40c1dd
        result2 = result;
        if (mem != NULL) {
            // 0x40c1ea
            *mem = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int32_t len = strlen((char *)str); // 0x40c17c
        uint64_t v1 = (int64_t)len + 1; // 0x40c186
        int64_t * mem2 = malloc(v1 >= 118 ? len + 18 & -8 : 128); // 0x40c19a
        int64_t v2 = (int64_t)mem2; // 0x40c19a
        result2 = v2;
        if (mem2 != NULL) {
            // 0x40c1a7
            *mem2 = 0;
            int64_t v3 = v2 + 9; // 0x40c1b3
            *(int16_t *)(v2 + 8) = 1;
            memcpy((int64_t *)v3, (int64_t *)str, (int32_t)v1);
            *(char *)(v3 + v1) = 0;
            result2 = v2;
        }
    }
    // 0x40c1cb
    return result2;
}
// Address range: 0x40c200 - 0x40c375
int64_t function_40c200(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x40c20e
    uint64_t v2 = *v1; // 0x40c20e
    if (v2 == 0) {
        // 0x40c2b1
        return 1;
    }
    int64_t v3; // 0x40c200
    if (v2 >= a2) {
        int64_t v4 = a2 + 56; // 0x40c226
        v3 = v4;
        if (v2 < v4) {
            // 0x40c2b1
            return 1;
        }
    }
    char * str2 = (char *)v2; // 0x40c234
    if (*str2 == 0) {
        // 0x40c2a8
        *v1 = (int64_t)&g13;
        // 0x40c2b1
        return 1;
    }
    int64_t str = a1 + 9; // 0x40c239
    if (strcmp((char *)str, str2) == 0) {
        // 0x40c2a8
        *v1 = str;
        // 0x40c2b1
        return 1;
    }
    int64_t v5 = a1;
    int64_t v6 = str;
    char * str3 = (char *)v6; // 0x40c257
    int64_t v7; // 0x40c200
    int64_t v8; // 0x40c200
    int64_t v9; // 0x40c200
    int64_t v10; // 0x40c25c
    if (*str3 == 0) {
        // 0x40c25c
        v10 = v5 + 9;
        if (v6 != v10) {
            // break (via goto) -> 0x40c2e8
            goto lab_0x40c2e8;
        }
        // 0x40c269
        if (*(char *)(v5 + 8) == 0) {
            // 0x40c318
            v8 = 0;
            v9 = v3;
            v7 = (int64_t)strlen(str2) + 1;
            goto lab_0x40c326;
        }
    }
    int64_t v11 = v6 + 1 + (int64_t)strlen(str3); // 0x40c27b
    char * str5 = (char *)v11;
    int64_t v12; // 0x40c200
    int64_t v13; // 0x40c285
    int64_t str4; // 0x40c28e
    int32_t strcmp_rc; // 0x40c29b
    while (*str5 == 0) {
        // 0x40c285
        v13 = *(int64_t *)v5;
        if (v13 == 0) {
            // break -> 0x40c248
            break;
        }
        // 0x40c28e
        str4 = v13 + 9;
        strcmp_rc = strcmp((char *)str4, str2);
        v12 = str4;
        if (strcmp_rc == 0) {
            // 0x40c2a8
            *v1 = v12;
            // 0x40c2b1
            return 1;
        }
        v5 = v13;
        v6 = str4;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40c25c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40c2e8
                goto lab_0x40c2e8;
            }
            // 0x40c269
            if (*(char *)(v5 + 8) == 0) {
                // 0x40c318
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40c326;
            }
        }
        // 0x40c273
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
    }
    // 0x40c2a8
    *v1 = v11;
    while (strcmp(str5, str2) != 0) {
        // 0x40c257
        v6 = v11;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40c25c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40c2e8
                goto lab_0x40c2e8;
            }
            // 0x40c269
            if (*(char *)(v5 + 8) == 0) {
                // 0x40c318
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40c326;
            }
        }
        // 0x40c273
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
        while (*str5 == 0) {
            // 0x40c285
            v13 = *(int64_t *)v5;
            if (v13 == 0) {
                // break -> 0x40c248
                break;
            }
            // 0x40c28e
            str4 = v13 + 9;
            strcmp_rc = strcmp((char *)str4, str2);
            v12 = str4;
            if (strcmp_rc == 0) {
                // 0x40c2a8
                *v1 = v12;
                // 0x40c2b1
                return 1;
            }
            v5 = v13;
            v6 = str4;
            str3 = (char *)v6;
            if (*str3 == 0) {
                // 0x40c25c
                v10 = v5 + 9;
                if (v6 != v10) {
                    // break (via goto) -> 0x40c2e8
                    goto lab_0x40c2e8;
                }
                // 0x40c269
                if (*(char *)(v5 + 8) == 0) {
                    // 0x40c318
                    v8 = 0;
                    v9 = v3;
                    v7 = (int64_t)strlen(str2) + 1;
                    goto lab_0x40c326;
                }
            }
            // 0x40c273
            v11 = v6 + 1 + (int64_t)strlen(str3);
            str5 = (char *)v11;
        }
        // 0x40c2a8
        *v1 = v11;
    }
    // 0x40c2b1
    return 1;
  lab_0x40c2e8:;
    int64_t v14 = (int64_t)strlen(str2) + 1; // 0x40c2f0
    int64_t v15 = v6 - v10; // 0x40c2f7
    int64_t v16 = -1 - v15;
    v8 = v15;
    v9 = v16;
    v7 = v14;
    if (v14 > v16) {
        // 0x40c305
        *__errno_location() = 12;
        // 0x40c2b1
        return 0;
    }
    goto lab_0x40c326;
  lab_0x40c326:
    // 0x40c326
    if (v7 + v8 < 119) {
        // 0x40c32f
        memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v7);
        *(char *)(v7 + v6) = 0;
        // 0x40c2a8
        *v1 = v6;
        // 0x40c2b1
        return 1;
    }
    int64_t v17 = function_40c170(v2, v2, v9); // 0x40c353
    *(int64_t *)v5 = v17;
    if (v17 == 0) {
        // 0x40c2b1
        return 0;
    }
    // 0x40c361
    *(char *)(v17 + 8) = 0;
    // 0x40c2a8
    *v1 = v17 + 9;
    // 0x40c2b1
    return 1;
}
// Address range: 0x40c380 - 0x40c42f
int64_t function_40c380(int64_t a1) {
    char * env_val = getenv("TZ"); // 0x40c38c
    int64_t v1 = (int64_t)env_val; // 0x40c38c
    char v2 = *(char *)(a1 + 8);
    int64_t v3; // 0x40c380
    if (env_val == NULL) {
        // 0x40c3f0
        if (v2 == 0) {
            // 0x40c3bd
            return 1;
        }
    } else {
        if (v2 != 0) {
            // 0x40c3c8
            v3 = v1;
            if (strcmp((char *)(a1 + 9), env_val) == 0) {
                // 0x40c3bd
                return 1;
            }
        }
    }
    // 0x40c3a1
    int64_t v4; // 0x40c380
    int64_t result = function_40c170(v1, v3, v4); // 0x40c3a4
    if (result == 0) {
        // 0x40c3bd
        return 0;
    }
    // 0x40c3b1
    if ((char)function_40c0a0(a1) != 0) {
        // 0x40c3bd
        return result;
    }
    int32_t * v5 = __errno_location(); // 0x40c408
    if (result != 1) {
        // 0x40c419
        function_40c0f0(result);
    }
    // 0x40c421
    return 0;
}
// Address range: 0x40c430 - 0x40c441
int64_t function_40c430(int64_t a1) {
    // 0x40c430
    if (a1 == 1) {
        // 0x40c440
        int64_t result; // 0x40c430
        return result;
    }
    // 0x40c436
    return function_40c0f0(a1);
}
// Address range: 0x40c450 - 0x40c4f5
int64_t function_40c450(int64_t a1, int64_t * timep, int64_t * time) {
    if (a1 == 0) {
        // 0x40c4e0
        return (int64_t)gmtime_r((int32_t *)timep, (struct tm *)time);
    }
    int64_t v1 = function_40c380(a1); // 0x40c468
    if (v1 == 0) {
        // 0x40c49a
        return 0;
    }
    // 0x40c475
    if (localtime_r((int32_t *)timep, (struct tm *)time) != NULL) {
        int64_t result = (int64_t)time;
        if ((char)function_40c200(a1, result) != 0) {
            // 0x40c494
            if (v1 == 1 || (char)function_40c120(v1) != 0) {
                // 0x40c49a
                return result;
            }
            // 0x40c49a
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x40c4b6
        function_40c120(v1);
    }
    // 0x40c49a
    return 0;
}
// Address range: 0x40c500 - 0x40c61c
int64_t function_40c500(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40c500
    int32_t v1; // 0x40c500
    int32_t v2 = v1;
    if (a1 == 0) {
        // 0x40c5f8
        return function_40c620(a2);
    }
    int64_t v3 = function_40c380(a1); // 0x40c517
    if (v3 == 0) {
        // 0x40c56e
        return -1;
    }
    int64_t v4 = function_40d6b0(a2); // 0x40c52b
    int64_t timep = v4; // bp-96, 0x40c530
    if (v4 == -1) {
        // 0x40c580
        int32_t time; // bp-88, 0x40c500
        if (localtime_r((int32_t *)&timep, (struct tm *)&time) == NULL) {
            goto lab_0x40c553;
        } else {
            int32_t v5 = *(int32_t *)(a2 + 32); // 0x40c594
            if (v2 >= 0 == v5 > -1 == (v5 == 0 != (v2 == 0))) {
                goto lab_0x40c553;
            } else {
                int32_t v6 = *(int32_t *)(a2 + 16); // 0x40c5b3
                int32_t v7 = *(int32_t *)(a2 + 20); // 0x40c5b6
                int32_t v8 = *(int32_t *)(a2 + 12); // 0x40c5c3
                int32_t v9 = *(int32_t *)(a2 + 8); // 0x40c5cc
                int32_t v10 = *(int32_t *)(a2 + 4); // 0x40c5d5
                if ((v7 ^ v1 | v6 ^ v1 | v8 ^ v1 | v9 ^ v1 || v10 ^ v1 || time ^ (int32_t)(int64_t)&time) == 0) {
                    goto lab_0x40c53b;
                } else {
                    goto lab_0x40c553;
                }
            }
        }
    } else {
        goto lab_0x40c53b;
    }
  lab_0x40c53b:
    // 0x40c53b
    if ((char)function_40c200(a1, a2) == 0) {
        // 0x40c54a
        timep = -1;
    }
    goto lab_0x40c553;
  lab_0x40c553:
    if (v3 != 1) {
        // 0x40c559
        if ((char)function_40c120(v3) == 0) {
            // 0x40c56e
            return -1;
        }
    }
    // 0x40c56e
    return timep;
}
// Address range: 0x40c620 - 0x40c636
int64_t function_40c620(int64_t a1) {
    // 0x40c620
    *(int32_t *)(a1 + 32) = 0;
    return function_40d270(a1, 0x401fd0, &g60);
}
// Address range: 0x40c640 - 0x40c69d
int64_t function_40c640(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40c647
    int64_t v2; // 0x40c640
    int64_t result = function_40ced0(a1, v2); // 0x40c658
    if ((v2 & 32) != 0) {
        // 0x40c680
        if ((int32_t)result == 0) {
            // 0x40c684
            *__errno_location() = 0;
        }
        // 0x40c67a
        return 0xffffffff;
    }
    // 0x40c661
    if ((int32_t)result == 0) {
        // 0x40c67a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40c668
    if (v1 == 0) {
        // 0x40c66a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40c67a
    return result2;
}
// Address range: 0x40c6a0 - 0x40c6ea
int64_t function_40c6a0(int64_t * path, int64_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x40c6b3
    return function_40ccc0((int64_t)fd);
}
// Address range: 0x40c6f0 - 0x40c74e
int64_t function_40c6f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40c6f6
    if (locale == NULL) {
        // 0x40c723
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40c6f6
    bool v2; // 0x40c6f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g15; // 0x40c6f0
    int64_t v5 = v1; // 0x40c6f0
    int64_t v6 = 2; // 0x40c715
    unsigned char v7 = *(char *)v5; // 0x40c715
    char v8 = *(char *)v4; // 0x40c715
    char v9 = v8; // 0x40c715
    bool v10 = false; // 0x40c715
    while (v7 == v8) {
        // 0x40c708
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40c721
    int64_t v13 = v1; // 0x40c721
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40c723
        return 0;
    }
    int64_t v14 = 6; // 0x40c721
    unsigned char v15 = *(char *)v13; // 0x40c73d
    char v16 = *(char *)v12; // 0x40c73d
    char v17 = v16; // 0x40c73d
    bool v18 = false; // 0x40c73d
    while (v15 == v16) {
        // 0x40c730
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
// Address range: 0x40c750 - 0x40ccb2
int64_t function_40c750(void) {
    char * v1 = nl_langinfo(14); // 0x40c766
    char * v2 = g61; // 0x40c76b
    char * v3; // 0x40c750
    int64_t v4; // 0x40c750
    int64_t v5; // 0x40c750
    int64_t v6; // 0x40c750
    int64_t v7; // 0x40c750
    int32_t size; // 0x40c750
    int32_t size2; // 0x40c750
    int32_t len; // 0x40c822
    int64_t v8; // 0x40c822
    char * env_val; // 0x40c80d
    if (v2 == NULL) {
        // 0x40c808
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40c875;
        } else {
            // 0x40c81a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40c875;
            } else {
                // 0x40c81f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40c80d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40cca5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40c875;
                    } else {
                        // 0x40cc19
                        size2 = len + 14;
                        goto lab_0x40c83b;
                    }
                } else {
                    goto lab_0x40c83b;
                }
            }
        }
    } else {
        // 0x40c750
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40c78a;
    }
  lab_0x40cabc:;
    // 0x40cabc
    struct _IO_FILE * stream; // 0x40c8fb
    int32_t v10 = __uflow(stream); // 0x40cabf
    int64_t v11; // 0x40c750
    int64_t v12 = v11; // 0x40cac9
    int64_t v13; // 0x40c750
    int64_t v14 = v13; // 0x40cac9
    int32_t v15 = v10; // 0x40cac9
    int64_t v16; // 0x40c750
    int64_t v17 = v16; // 0x40cac9
    int64_t v18 = v11; // 0x40cac9
    int64_t v19 = v13; // 0x40cac9
    int64_t v20 = v16; // 0x40cac9
    if (v10 == -1) {
        // break -> 0x40cacf
        goto lab_0x40cacf;
    }
    goto lab_0x40c949;
  lab_0x40c93e:;
    // 0x40c93e
    int64_t v90; // 0x40c750
    int64_t * v32; // 0x40c930
    *v32 = v90 + 1;
    int64_t v89; // 0x40c750
    v12 = v89;
    int64_t v91; // 0x40c750
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40c750
    v17 = v92;
    goto lab_0x40c949;
  lab_0x40c949:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40c750
    int32_t v25; // bp-120, 0x40c750
    int32_t v26; // bp-184, 0x40c750
    int64_t v27; // 0x40c8fb
    int64_t v28; // 0x40c918
    int64_t v29; // 0x40c91d
    int64_t * v30; // 0x40c934
    switch (c) {
        case 32: {
            goto lab_0x40c930;
        }
        case 10: {
            goto lab_0x40c930;
        }
        case 9: {
            goto lab_0x40c930;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40cb21
            int32_t v33; // 0x40c750
            char v34; // 0x40c750
            int32_t v35; // 0x40cb2e
            if (v31 < *v30) {
                // 0x40cb00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40cb2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40cb21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40cb00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40cb2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40cb10
                v36 = v33;
            }
            // 0x40cbff
            if (v36 == -1) {
                // break -> 0x40cacf
                break;
            }
            goto lab_0x40c930;
        }
        default: {
            // 0x40c95f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40cacf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40c988
            int64_t v39 = v37 + 4; // 0x40c98a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40c996
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40c998
            while (v41 == 0) {
                // 0x40c988
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40c9b6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40c9c2
            int64_t v45 = v43 + 4; // 0x40c9c4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40c9d0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40c9d2
            while (v47 == 0) {
                // 0x40c9c2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40c9bf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40c9e8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40c9f8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40c9fc
            int64_t v52 = v51 + v48; // 0x40ca05
            int64_t * mem; // 0x40c750
            int64_t v53; // 0x40c750
            int64_t v54; // 0x40c750
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40cb3b
                int64_t v56 = v55 + 3; // 0x40cb47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40ca21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40ca30
            if (mem == NULL) {
                // 0x40cc5c
                free((int64_t *)v21);
                function_40ced0(v27, v53);
                v24 = (int64_t)&g13;
                goto lab_0x40c8d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40ca48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40ca52
            uint32_t v62 = (int32_t)v59; // 0x40ca55
            int64_t v63; // 0x40c750
            if (v62 >= 8) {
                // 0x40cb64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40cb7e
                int64_t v66 = v61 - v65; // 0x40cb82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40cb8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40cb9e
                    int64_t v70 = v69 & 0xffffffff; // 0x40cb9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40cb9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40cc2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40ca67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40ca6b
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
            int64_t v73 = v51 + 1; // 0x40ca7b
            int64_t v74 = v60 - 1; // 0x40ca7f
            uint32_t v75 = (int32_t)v73; // 0x40ca84
            int64_t v76; // 0x40c750
            if (v75 >= 8) {
                // 0x40cbb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40cbbc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40cbcc
                int64_t v80 = v74 - v79; // 0x40cbd0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40cbdb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40cbeb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40cbe9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40cc46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40cc4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40ca96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40ca9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40cc93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40caae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40c93e;
            } else {
                goto lab_0x40cabc;
            }
        }
    }
  lab_0x40c930:;
    int64_t v93 = v23; // 0x40c750
    int64_t v94 = v22; // 0x40c750
    int64_t v95 = v21; // 0x40c750
    goto lab_0x40c930_2;
  lab_0x40c875:;
    int64_t * mem3 = malloc(size); // 0x40c875
    int64_t v97 = (int64_t)&g13; // 0x40c880
    int64_t v98; // 0x40c750
    int64_t path; // 0x40c750
    if (mem3 == NULL) {
        goto lab_0x40c852;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40c875
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40c896;
    }
  lab_0x40c78a:;
    int64_t str = v1 == NULL ? (int64_t)&g13 : (int64_t)v1; // 0x40c77d
    char v100 = *v3; // 0x40c78a
    int64_t v101; // 0x40c750
    if (v100 == 0) {
        // 0x40c7e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40c750
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40c750
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40c7d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40c7d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40c7a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40c7ad
        char v107 = *(char *)v106; // 0x40c7b2
        v102 = v107;
        if (v107 == 0) {
            // 0x40c7e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40c7bb
    v104 = v103 + 1;
  lab_0x40c7d7:
    // 0x40c7e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40c852:;
    char * v108 = (char *)v97;
    g61 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40c78a;
  lab_0x40c896:;
    int64_t v109 = v98 + path; // 0x40c896
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40c8c2
    v24 = (int64_t)&g13;
    if (fd >= 0) {
        // 0x40c8f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40cc22
            close(fd);
            v24 = (int64_t)&g13;
        } else {
            // 0x40c915
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40c930_2:;
                uint64_t v96 = *v32; // 0x40c930
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40cabc;
                } else {
                    goto lab_0x40c93e;
                }
            }
          lab_0x40cacf:
            // 0x40cacf
            function_40ced0(v27, v19);
            v24 = (int64_t)&g13;
            if (v18 != 0) {
                // 0x40caee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40c8d4;
  lab_0x40c83b:;
    int64_t * mem4 = malloc(size2); // 0x40c83b
    v97 = (int64_t)&g13;
    if (mem4 != NULL) {
        // 0x40c8e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40c896;
    } else {
        goto lab_0x40c852;
    }
  lab_0x40c8d4:
    // 0x40c8d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40c852;
}
// Address range: 0x40ccc0 - 0x40cd0e
int64_t function_40ccc0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40cccc
    if (fd >= 3) {
        // 0x40ccd1
        return a1 & 0xffffffff;
    }
    // 0x40cce0
    int64_t v1; // 0x40ccc0
    int64_t v2 = function_40d730(a1, v1); // 0x40cce0
    int32_t * v3 = __errno_location(); // 0x40cce8
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40cd10 - 0x40ce37
int64_t function_40cd10(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int128_t v2 = *(int128_t *)&v1; // 0x40cd1e
    int128_t v3; // 0x40cd10
    __asm_movups(v3, __asm_movdqu(v2));
    int64_t result; // 0x40cd10
    int64_t v4; // 0x40cd10
    if (a1 == 0) {
        int64_t v5 = function_409560(1); // 0x40ce05
        v4 = v5;
        result = v5;
    } else {
        int64_t v6 = v2;
        int64_t v7 = 0; // 0x40cd4b
        int64_t v8 = a1; // 0x40cd4b
        int64_t v9 = v3;
        int32_t v10 = v3;
        int64_t str; // 0x40cd10
        int64_t v11; // 0x40cd10
        int64_t v12; // 0x40cd10
        int64_t v13; // 0x40cd10
        int32_t v14; // 0x40cd10
        int32_t v15; // 0x40cd52
        if (v10 < 48) {
            // 0x40cd50
            v15 = (int32_t)v9 + 8;
            v14 = v15;
            v13 = v15;
            v11 = v12;
            str = (v9 & 0xffffffff) + *(int64_t *)(a2 + 16);
        } else {
            // 0x40cd7a
            v14 = v10;
            v13 = v9;
            v11 = v12 + 8;
            str = v12;
        }
        uint64_t v16 = v7 + (int64_t)strlen((char *)*(int64_t *)str); // 0x40cd64
        int64_t v17 = v16 < v7 ? -1 : v16; // 0x40cd67
        v8--;
        v7 = v17;
        while (v8 != 0) {
            int64_t v18 = v11;
            v9 = v13;
            v10 = v14;
            if (v10 < 48) {
                // 0x40cd50
                v15 = (int32_t)v9 + 8;
                v14 = v15;
                v13 = v15;
                v11 = v18;
                str = (v9 & 0xffffffff) + *(int64_t *)(a2 + 16);
            } else {
                // 0x40cd7a
                v14 = v10;
                v13 = v9;
                v11 = v18 + 8;
                str = v18;
            }
            // 0x40cd5c
            v16 = v7 + (int64_t)strlen((char *)*(int64_t *)str);
            v17 = v16 < v7 ? -1 : v16;
            v8--;
            v7 = v17;
        }
        if (v17 >= 0x80000000) {
            // 0x40ce28
            *__errno_location() = 75;
            // 0x40ce13
            return 0;
        }
        int64_t v19 = function_409560(v17 + 1); // 0x40cda1
        int64_t * v20 = (int64_t *)(v6 + 8);
        int64_t v21 = v19; // 0x40cdac
        int64_t v22 = a1; // 0x40cdac
        uint32_t v23 = (int32_t)v2; // 0x40cde3
        int64_t v24; // 0x40cd10
        int64_t v25; // 0x40cdec
        if (v23 < 48) {
            // 0x40cdb0
            *(int32_t *)v6 = v23 + 8;
            v24 = *(int64_t *)(v6 + 16) + (int64_t)v23;
        } else {
            // 0x40cdec
            v25 = *v20;
            *v20 = v25 + 8;
            v24 = v25;
        }
        int64_t str2 = *(int64_t *)v24; // 0x40cdbe
        int32_t len = strlen((char *)str2); // 0x40cdc4
        memcpy((int64_t *)v21, (int64_t *)str2, len);
        v21 += (int64_t)len;
        v22--;
        v4 = v21;
        result = v19;
        while (v22 != 0) {
            // 0x40cdbe
            v23 = *(int32_t *)&v1;
            if (v23 < 48) {
                // 0x40cdb0
                *(int32_t *)v6 = v23 + 8;
                v24 = *(int64_t *)(v6 + 16) + (int64_t)v23;
            } else {
                // 0x40cdec
                v25 = *v20;
                *v20 = v25 + 8;
                v24 = v25;
            }
            // 0x40cdbe
            str2 = *(int64_t *)v24;
            len = strlen((char *)str2);
            memcpy((int64_t *)v21, (int64_t *)str2, len);
            v21 += (int64_t)len;
            v22--;
            v4 = v21;
            result = v19;
        }
    }
    // 0x40ce10
    *(char *)v4 = 0;
    // 0x40ce13
    return result;
}
// Address range: 0x40ce40 - 0x40ceca
int64_t function_40ce40(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    char v2 = a1;
    if (v2 == 0) {
        // 0x40ce78
        return function_40cd10(0, v1);
    }
    if (v2 == 37) {
        // 0x40ce4f
        if (*(char *)(a1 + 1) == 115) {
            int64_t v3 = 1; // 0x40ce6c
            int64_t v4 = 2 * v3 + a1;
            char v5 = *(char *)v4; // 0x40ce70
            int64_t v6 = v3; // 0x40ce76
            while (v5 != 0) {
                if (v5 != 37) {
                    goto lab_0x40ce88_2;
                }
                // 0x40ce65
                if (*(char *)(v4 + 1) != 115) {
                    goto lab_0x40ce88_2;
                }
                v3++;
                v4 = 2 * v3 + a1;
                v5 = *(char *)v4;
                v6 = v3;
            }
            // 0x40ce78
            return function_40cd10(v6, v1);
        }
    }
  lab_0x40ce88_2:;
    // 0x40ce88
    int64_t result; // bp-16, 0x40ce40
    if ((int32_t)function_40d6d0(&result, a1, v1) >= 0) {
        // 0x40ce9c
        return result;
    }
    // 0x40ceb0
    if (*__errno_location() != 12) {
        // 0x40ceba
        return 0;
    }
    // 0x40cec5
    function_4097b0((int64_t)&result);
    // UNREACHABLE
}
// Address range: 0x40ced0 - 0x40cf4b
int64_t function_40ced0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40ced7
    if (fileno(stream) < 0) {
        // 0x40cf37
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40ceea
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40cf1b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40cf37
            return fclose(stream);
        }
    }
    // 0x40ceec
    if ((int32_t)function_40cf50(a1, v1) == 0) {
        // 0x40cf37
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40cef8
    int32_t v3 = *v2; // 0x40cf00
    int64_t result = fclose(stream); // 0x40cf0e
    if (v3 != 0) {
        // 0x40cf40
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40cf10
    return result;
}
// Address range: 0x40cf50 - 0x40cf90
int64_t function_40cf50(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40cf6a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40cf6a
        return fflush(stream);
    }
    // 0x40cf78
    function_40cf90(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40cf90 - 0x40cfe7
int64_t function_40cf90(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40cf90
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40cf9a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40cfcb
    int64_t result = -1; // 0x40cfd4
    if (v1 != -1) {
        // 0x40cfd6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40cfe2
    return result;
}
// Address range: 0x40cff0 - 0x40d107
int64_t function_40cff0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a1 / 4 + 475 + (int64_t)(a1 % 4 == 0); // 0x40d01e
    int32_t v2 = (a6 >> 2) + 475 + (int32_t)(a6 % 4 == 0); // 0x40d03a
    int32_t v3 = v1; // 0x40d043
    int32_t v4 = ((int32_t)(0x51eb851f * (0x100000000 * v1 >> 32) / 0x100000000) >> 3) - (v3 >> 31); // 0x40d054
    int32_t v5 = v4 - (int32_t)(-25 * v4 + v3 < 0); // 0x40d064
    int32_t v6 = v2 / 25; // 0x40d078
    int32_t v7 = v6 - (int32_t)(-25 * v6 + v2 < 0); // 0x40d089
    return (0x100000000 * a5 >> 32) - (0x100000000 * a10 >> 32) + 60 * ((0x100000000 * a4 >> 32) - (0x100000000 * a9 >> 32) + 60 * ((0x100000000 * a3 >> 32) - (0x100000000 * a8 >> 32) + 24 * (365 * (a1 - (int64_t)a6) + a2 - (0x100000000 * a7 >> 32) + (int64_t)(v3 - v2 - v5 + (v5 >> 2) + v7 - (v7 >> 2)))));
}
// Address range: 0x40d110 - 0x40d1a1
int64_t function_40d110(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, uint64_t a6, int64_t a7) {
    if (a7 != 0) {
        uint32_t v1 = *(int32_t *)a7; // 0x40d11e
        uint32_t v2 = *(int32_t *)(a7 + 4); // 0x40d123
        uint32_t v3 = *(int32_t *)(a7 + 8); // 0x40d129
        uint32_t v4 = *(int32_t *)(a7 + 28); // 0x40d12f
        int32_t v5 = *(int32_t *)(a7 + 20); // 0x40d135
        int64_t v6 = function_40cff0(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, v5, (int64_t)v4, (int64_t)v3, (int64_t)v2, (int64_t)v1); // 0x40d139
        int64_t result = v6 + a6; // 0x40d142
        if (((result ^ v6) & (result ^ a6)) >= 0) {
            // 0x40d147
            return result;
        }
    }
    if (a6 >= 0) {
        int64_t v7 = a6 - 0x7ffffffffffffffd; // 0x40d16d
        int64_t result2 = v7 < 0 == (0x7ffffffffffffffc - a6 & a6) < 0 == (v7 != 0) ? a6 - 1 : 0x7fffffffffffffff; // 0x40d171
        return result2;
    }
    // 0x40d180
    if (a6 > -0x7fffffffffffffff) {
        // 0x40d147
        return -0x8000000000000000;
    }
    // 0x40d18f
    return a6 + 1;
}
// Address range: 0x40d1b0 - 0x40d26f
int64_t function_40d1b0(int64_t a1, int64_t result, uint64_t a3) {
    if (result == 0 != a3 != 0) {
        // 0x40d1dd
        return result;
    }
    int64_t v1 = ((int64_t)a3 >> 1) + a3 % 2; // 0x40d21b
    if (v1 != 0 == (v1 != a3)) {
        // 0x40d1dd
        return result;
    }
    int64_t v2 = v1; // 0x40d221
    while (v2 != 0) {
        // 0x40d228
        v2 = (v2 >> 1) + v2 % 2;
    }
    // 0x40d1dd
    return result;
}
// Address range: 0x40d270 - 0x40d6aa
int64_t function_40d270(int64_t a1, int64_t a2, int64_t * a3) {
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x40d28b
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x40d293
    uint32_t v3 = *(int32_t *)(a1 + 8); // 0x40d2a4
    int32_t v4 = *(int32_t *)(a1 + 16); // 0x40d2a7
    int32_t v5 = v4 / 12; // 0x40d2c5
    int32_t v6 = -12 * v5 + v4; // 0x40d2cf
    int32_t v7 = *(int32_t *)(a1 + 20); // 0x40d2da
    int64_t v8 = (int64_t)(v5 - (int32_t)(v6 < 0)) + (int64_t)v7; // 0x40d2e1
    int64_t v9 = 0; // 0x40d2e7
    if (v8 % 4 == 0) {
        // 0x40d2e9
        v9 = 1;
        if (v8 == (v8 >> 63 & 100)) {
            // 0x40d550
            v9 = v8 < 0;
        }
    }
    // 0x40d325
    int64_t v10; // 0x40d270
    int32_t v11 = v10;
    int64_t v12 = v9;
    uint16_t v13 = *(int16_t *)(2 * (v12 + (int64_t)((v6 >> 31 & 12) + v6) + 4 * v12) + (int64_t)&g16); // 0x40d357
    int32_t v14 = v11 - 59; // 0x40d370
    int64_t v15 = v14 == 0 | v14 < 0 != (58 - v11 & v11) < 0 ? v10 & 0xffffffff : 59; // 0x40d373
    int64_t v16 = (int32_t)v15 >= 0 ? v15 : 0; // 0x40d387
    int64_t v17 = function_40cff0(v8, (int64_t)v1 - 1 + (int64_t)v13, (int64_t)v3, (int64_t)v2, v16, 70, 0, 0, 0, -v12 & 0xffffffff); // 0x40d3b0
    int64_t v18; // bp-280, 0x40d270
    int64_t v19 = &v18; // 0x40d3b5
    int64_t * v20 = (int64_t *)(v19 + 16);
    int64_t v21 = v19 + 96; // 0x40d403
    int64_t v22 = v19 + 80; // 0x40d408
    int64_t * v23 = (int64_t *)v22;
    int64_t * v24 = (int64_t *)(v19 - 16);
    int32_t * v25 = (int32_t *)(v19 + 28);
    int32_t * v26 = (int32_t *)(v19 + 12);
    int32_t * v27 = (int32_t *)(v19 + 24);
    int64_t * v28 = (int64_t *)(v19 + 32);
    int64_t v29 = v19 + 128;
    int32_t * v30 = (int32_t *)v29;
    int64_t v31 = v19 + 40;
    int32_t * v32 = (int32_t *)v31;
    int32_t v33 = 6; // 0x40d3d3
    int64_t v34 = v17; // 0x40d3d3
    int64_t v35 = v17;
    uint64_t v36 = 0;
    int64_t v37 = function_40d1b0(*v20, v22, v21); // 0x40d40d
    int64_t v38 = *v23; // 0x40d412
    *v24 = v37;
    int64_t v39 = function_40d110(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g65); // 0x40d434
    while (v38 != v39) {
        // 0x40d444
        if (v38 != v35 && v38 == v34) {
            int32_t v40 = *v30; // 0x40d44e
            if (v40 < 0) {
                goto lab_0x40d477_3;
            }
            int32_t v41 = *v32; // 0x40d45b
            if (v41 < 0) {
                if (v36 <= (int64_t)(v40 != 0)) {
                    goto lab_0x40d477_3;
                }
            } else {
                if (v41 != 0 != v40 != 0) {
                    goto lab_0x40d477_3;
                }
            }
        }
        // 0x40d3d8
        v33--;
        if (v33 == 0) {
            // 0x40d537
            return -1;
        }
        // 0x40d3e1
        *v23 = v39;
        v34 = v35;
        v35 = v38;
        v36 = (int64_t)(*v30 != 0);
        v37 = function_40d1b0(*v20, v22, v21);
        v38 = *v23;
        *v24 = v37;
        v39 = function_40d110(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g65);
    }
    int32_t v42 = *v32; // 0x40d580
    int32_t v43 = *v30; // 0x40d584
    int64_t v44 = *(int64_t *)(v19 + 72); // 0x40d58b
    *(char *)v31 = (char)(v42 == 0);
    int64_t v45 = v38; // 0x40d5a4
    int64_t v46 = v44; // 0x40d5a4
    if (v43 >= 0 && v42 >= 0 && v42 == 0 != (v43 == 0)) {
        int64_t * v47 = (int64_t *)v31; // 0x40d5c0
        *v47 = v8;
        int64_t v48 = v19 + 88; // 0x40d5fb
        int64_t * v49 = (int64_t *)v48;
        int64_t v50 = v19 + 160;
        int64_t v51 = v38; // 0x40d5c5
        int64_t v52 = 0x92c70; // 0x40d5c5
        while (true) {
            int64_t v53 = -v52; // 0x40d5f2
            int64_t v54 = v53 & 0xffffffff; // 0x40d5f2
            int64_t v55 = 0x100000000 * v53 >> 32; // 0x40d5f5
            int64_t v56 = v55 + v51; // 0x40d5f8
            *v49 = v56;
            int64_t v57 = v51; // 0x40d600
            int32_t v58 = 2; // 0x40d600
            int64_t v59 = v54; // 0x40d600
            int32_t v60 = 2; // 0x40d600
            int64_t v61 = v54; // 0x40d600
            if (((v56 ^ v55) & (v56 ^ v51)) >= 0) {
              lab_0x40d61e:
                // 0x40d61e
                function_40d1b0(*v20, v48, v50);
                int32_t v62 = *(int32_t *)(v19 + 192); // 0x40d635
                if (v42 == 0 != (v62 == 0) != v62 >= 0) {
                    // break -> 0x40d64a
                    break;
                }
                // 0x40d6a0
                v59 = v61;
                v58 = v60;
                v57 = *v23;
            }
            int64_t v63 = 2 * v52; // 0x40d5e7
            int64_t v64 = v57;
            int32_t v65 = v58; // 0x40d270
            int64_t v66 = v59; // 0x40d602
            while (v65 != 1) {
                int64_t v67 = v66 + v63; // 0x40d602
                v66 = v67 & 0xffffffff;
                int64_t v68 = 0x100000000 * v67 >> 32; // 0x40d60b
                int64_t v69 = v68 + v64; // 0x40d614
                *v49 = v69;
                v65 = 1;
                v60 = 1;
                v61 = v66;
                if (((v69 ^ v68) & (v69 ^ v64)) >= 0) {
                    goto lab_0x40d61e;
                }
            }
            int64_t v70 = v52 + 0x92c70; // 0x40d5d0
            v45 = v64;
            v46 = v44;
            v51 = v64;
            v52 = v70 & 0xffffffff;
            if ((int32_t)v70 == 0x100dc400) {
                goto lab_0x40d480;
            }
        }
        // 0x40d64a
        *v24 = v50;
        int64_t v71 = function_40d110(*v47, *v28, *v27, *v26, *v25, *v49, (int64_t)&g65); // 0x40d676
        *v23 = v71;
        function_40d1b0(*v20, v22, v21);
        v45 = *v23;
        v46 = v44;
    }
    goto lab_0x40d480;
  lab_0x40d477_3:
    // 0x40d477
    v45 = v38;
    v46 = *(int64_t *)(v19 + 72);
    goto lab_0x40d480;
  lab_0x40d480:;
    int64_t v72 = *(int64_t *)(v19 + 56); // 0x40d488
    int32_t v73 = *(int32_t *)v21; // 0x40d490
    int32_t v74 = *(int32_t *)(v19 + 64); // 0x40d494
    int64_t v75 = *(int64_t *)(v19 + 48); // 0x40d49b
    *(int64_t *)v75 = v45 - (int64_t)*(int32_t *)(v19 + 68) - v72;
    int64_t result = v45; // 0x40d4a5
    if (v73 != v74) {
        int32_t v76 = *v25; // 0x40d4a9
        int64_t v77 = (int64_t)(v73 == 60 == v74 < 1) - (int64_t)v76 + (int64_t)v74; // 0x40d4c5
        int64_t v78 = v77 + v45; // 0x40d4c8
        *v23 = v78;
        if (((v78 ^ v45) & (v78 ^ v77)) < 0) {
            // 0x40d537
            return -1;
        }
        // 0x40d4d2
        *(int64_t *)(v19 + 160) = v78;
        if (*v20 == 0) {
            // 0x40d537
            return -1;
        }
        // 0x40d4f3
        result = *v23;
    }
    int128_t v79 = __asm_movdqa(*(int128_t *)v21); // 0x40d4f8
    int128_t v80 = __asm_movdqa(*(int128_t *)(v19 + 112)); // 0x40d4fe
    int128_t v81 = __asm_movdqa(*(int128_t *)v29); // 0x40d504
    __asm_movups(*(int128_t *)v46, v79);
    __asm_movups(*(int128_t *)(v46 + 16), v80);
    __asm_movups(*(int128_t *)(v46 + 32), v81);
    *(int64_t *)(v46 + 48) = *(int64_t *)(v19 + 144);
    // 0x40d537
    return result;
}
// Address range: 0x40d6b0 - 0x40d6cc
int64_t function_40d6b0(int64_t a1) {
    // 0x40d6b0
    tzset();
    return function_40d270(a1, 0x401e50, &g62);
}
// Address range: 0x40d6d0 - 0x40d729
int64_t function_40d6d0(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x40d6d0
    int32_t v1; // bp-16, 0x40d6d0
    int64_t v2; // 0x40d6d0
    int64_t v3 = function_40d880(0, (int64_t *)&v1, a2, a3, v2, v2, v2, (int64_t)&g65); // 0x40d6e5
    if (v3 == 0) {
        // 0x40d702
        return 0xffffffff;
    }
    // 0x40d6ef
    int64_t result; // 0x40d6d0
    if (v1 > -1) {
        // 0x40d6fd
        *a1 = v3;
        result = v1;
    } else {
        // 0x40d708
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x40d702
    return result;
}
// Address range: 0x40d730 - 0x40d73e
int64_t function_40d730(int64_t a1, int64_t a2) {
    // 0x40d730
    int64_t v1; // 0x40d730
    return function_40d740(a1, 0, 3, v1);
}
// Address range: 0x40d740 - 0x40d875
int64_t function_40d740(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x40d820
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40d77c
    int64_t v2; // 0x40d740
    if (g63 < 0) {
        int64_t v3 = function_40d740(fd, 0, v1, a4); // 0x40d7c4
        int64_t v4 = v3 & 0xffffffff; // 0x40d7c9
        if ((int32_t)v3 < 0) {
            // 0x40d7b0
            return v4 & 0xffffffff;
        }
        // 0x40d7cf
        v2 = v4;
        if (g63 != -1) {
            // 0x40d7b0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40d797
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40d7a6
            g63 = 1;
            // 0x40d7b0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40d740(fd & 0xffffffff, 0, v1, a4); // 0x40d857
        int64_t v7 = v6 & 0xffffffff; // 0x40d85c
        if ((int32_t)v6 < 0) {
            // 0x40d7b0
            return v7 & 0xffffffff;
        }
        // 0x40d866
        g63 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40d7df
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40d7ea
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40d7b0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40d802
    close(fd2);
    // 0x40d7b0
    return 0xffffffff;
}
// Address range: 0x40d880 - 0x40f399
int64_t function_40d880(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x40d880
    int64_t v1; // bp-1416, 0x40d880
    int64_t v2; // bp-1656, 0x40d880
    if ((int32_t)function_40f5c0(a3, &v1, &v2) < 0) {
        // 0x40def0
        return 0;
    }
    int64_t v3 = &v2; // 0x40d88b
    int64_t v4; // bp-1384, 0x40d880
    int64_t v5; // bp-1640, 0x40d880
    int64_t v6; // 0x40d880
    if ((int32_t)function_40f3a0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x40e7d7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x40e7f3
            free((int64_t *)v6);
        }
        // 0x40e7f8
        *__errno_location() = 22;
        // 0x40def0
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40d8eb
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x40d8f3
    uint64_t v9 = v8 + v6; // 0x40d8f7
    int64_t v10; // 0x40d880
    char * v11; // 0x40d880
    int64_t v12; // 0x40d880
    if (v9 < v8) {
        // 0x40dfa0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40dea9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x40dfa0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x40dea9;
        } else {
            uint64_t size = v9 + 6; // 0x40d907
            if (size < 4000) {
                // 0x40da50
                v12 = 0;
                int64_t v13; // bp-1784, 0x40d880
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x40d944;
            } else {
                if (size == -1) {
                    // 0x40dfa0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x40dea9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x40d928
                    if (mem == NULL) {
                        // 0x40dfa0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x40dea9;
                    } else {
                        // 0x40d93d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x40d944;
                    }
                }
            }
        }
    }
  lab_0x40de70_2:;
    // 0x40de70
    int64_t v14; // 0x40d880
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x40de78
    int64_t v17 = v16; // 0x40de86
    int64_t v18 = v16; // 0x40de86
    int64_t v19 = v15; // 0x40de86
    int64_t v20; // 0x40d968
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x40e098;
    } else {
        goto lab_0x40de91;
    }
  lab_0x40dea9:
    // 0x40dea9
    if (v6 != (int64_t)&v4) {
        // 0x40dec0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40dedc
        free((int64_t *)v6);
    }
    // 0x40dee1
    *(int32_t *)v10 = 12;
    // 0x40def0
    return 0;
  lab_0x40d944:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x40d97d
    int64_t v23 = *v22; // 0x40d97d
    int64_t v24 = 0; // 0x40d983
    int64_t v25 = v20; // 0x40d983
    int64_t v26 = v21; // 0x40d983
    int64_t v27 = 0; // 0x40d983
    int64_t v28; // 0x40d880
    int64_t v29; // 0x40d880
    int64_t v30; // 0x40d880
    int64_t v31; // 0x40d880
    int64_t v32; // 0x40d880
    int64_t v33; // 0x40d880
    int64_t v34; // 0x40d880
    if (v23 == a3) {
        goto lab_0x40df93;
    } else {
        int64_t v35 = v23 - a3; // 0x40d989
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40d99b;
    }
  lab_0x40df93:;
    int64_t v36 = v24; // 0x40df96
    float80_t v37; // 0x40d880
    float80_t v38 = v37; // 0x40df96
    float80_t v39; // 0x40d880
    float80_t v40 = v39; // 0x40df96
    int64_t v41 = v25; // 0x40df96
    int64_t v42 = v26; // 0x40df96
    int64_t v43 = v27; // 0x40df96
    int64_t v44; // 0x40d880
    int64_t v45 = v44; // 0x40df96
    goto lab_0x40daf8;
  lab_0x40daf8:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x40d880
    int64_t v51; // 0x40d880
    int64_t v52; // 0x40d880
    int64_t v53; // 0x40d880
    int64_t v54; // 0x40d880
    int64_t v55; // 0x40d880
    int64_t v56; // 0x40d880
    int64_t v57; // 0x40d880
    int64_t dest_mem2; // 0x40d880
    int64_t dest_mem3; // 0x40d880
    int64_t v58; // 0x40d880
    float80_t v59; // 0x40d880
    float80_t v60; // 0x40d880
    float80_t v61; // 0x40d880
    float80_t v62; // 0x40d880
    float80_t v63; // 0x40d880
    uint64_t v64; // 0x40ec26
    char * v65; // 0x40db0c
    char v66; // 0x40db0c
    int64_t v67; // 0x40db34
    uint32_t v68; // 0x40db38
    int64_t v69; // 0x40df15
    char v70; // 0x40d880
    if (v1 == v49) {
        // 0x40ec20
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40f38a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x40ec82;
            } else {
                goto lab_0x40de70_2;
            }
        } else {
            // 0x40ec30
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x40ec82;
            } else {
                if (v47 != 0) {
                    // 0x40f24d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40de70_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x40f253
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40ec4e;
                        } else {
                            goto lab_0x40f25f;
                        }
                    }
                } else {
                    // 0x40ec3e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40ec4e;
                    } else {
                        goto lab_0x40f25f;
                    }
                }
            }
        }
    } else {
        // 0x40db0c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x40db11
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40e5ac
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x40e6e0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x40de70_2;
                } else {
                    goto lab_0x40df72;
                }
            } else {
                // 0x40df22
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x40df72;
                } else {
                    if (v47 != 0) {
                        // 0x40e810
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x40de70_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x40e816
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x40df40;
                            } else {
                                goto lab_0x40e822;
                            }
                        }
                    } else {
                        // 0x40df30
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x40df40;
                        } else {
                            goto lab_0x40e822;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40e5ac
                abort();
                // UNREACHABLE
            }
            // 0x40db29
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g68 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x40e4a0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40df77;
                }
                case 19: {
                    // 0x40e490
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40df77;
                }
                case 20: {
                    // 0x40e478
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40df77;
                }
                case 21: {
                    goto lab_0x40e060;
                }
                case 22: {
                    goto lab_0x40e060;
                }
                default: {
                    // 0x40db4a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x40dff0
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40e00d;
                        } else {
                            // 0x40dff7
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x40db80;
                            } else {
                                goto lab_0x40e00d;
                            }
                        }
                    } else {
                        goto lab_0x40db80;
                    }
                }
            }
        }
    }
  lab_0x40d99b:;
    int64_t v75 = v34;
    float80_t v76; // 0x40d880
    float80_t v77 = v76;
    float80_t v78; // 0x40d880
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x40d880
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40d99e
    int64_t v89 = v85; // 0x40d99e
    int64_t v90 = v84; // 0x40d99e
    float80_t v91 = v79; // 0x40d99e
    float80_t v92 = v77; // 0x40d99e
    int64_t v93 = v75; // 0x40d99e
    int64_t v94 = v80; // 0x40d99e
    int64_t v95 = v81; // 0x40d99e
    int64_t v96 = v82; // 0x40d99e
    int64_t v97 = v87; // 0x40d99e
    int64_t v98; // 0x40d880
    int64_t v99; // 0x40d880
    int64_t v100; // 0x40d880
    int64_t v101; // 0x40d880
    int64_t v102; // 0x40d880
    if (v82 >= v87) {
        goto lab_0x40dae9;
    } else {
        if (v82 != 0) {
            // 0x40da80
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x40de70_2;
            } else {
                int64_t v103 = 2 * v82; // 0x40da86
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40da9b;
                } else {
                    goto lab_0x40da8e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x40d9c4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40daae;
                } else {
                    goto lab_0x40d9d0;
                }
            } else {
                goto lab_0x40da8e;
            }
        }
    }
  lab_0x40dae9:
    // 0x40dae9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x40daf8;
  lab_0x40ec82:
    // 0x40ec82
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40ec8a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40ec9b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x40eca7
    if (v12 != 0) {
        // 0x40ecb3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x40ecd2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40ecee
        free((int64_t *)v6);
    }
    // 0x40ecf3
    *a2 = v46;
    // 0x40def0
    return result;
  lab_0x40e060:
    // 0x40e060
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x40df77;
  lab_0x40da8e:
    // 0x40da8e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x40de70_2;
    } else {
        goto lab_0x40da9b;
    }
  lab_0x40e098:
    // 0x40e098
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x40de91;
  lab_0x40de91:
    if (v12 == 0) {
        // 0x40dfa0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40dea9;
    } else {
        // 0x40dea1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x40dea9;
    }
  lab_0x40df72:
    // 0x40df72
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x40df77;
  lab_0x40db80:;
    int64_t v273 = (int64_t)v11; // 0x40db80
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x40db87
    int64_t v275 = v273 + 1; // 0x40db8b
    *v11 = 37;
    int64_t v276 = v275; // 0x40db94
    if (v274 % 2 != 0) {
        // 0x40db96
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x40db87
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x40dba7
    if ((v277 & 2) != 0) {
        // 0x40dba9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x40dbb3
    if ((v277 & 4) != 0) {
        // 0x40dbb5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x40dbbf
    if ((v277 & 8) != 0) {
        // 0x40dbc1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40dbcb
    if ((v277 & 16) != 0) {
        // 0x40dbcd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x40dbd7
    if ((v277 & 64) != 0) {
        // 0x40dbd9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x40dbe3
    if ((v277 & 32) != 0) {
        // 0x40dbe5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40dbed
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x40dbf1
    int64_t v293 = v290; // 0x40dbf8
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x40dc07
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40dc2a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40dc2e
    int64_t v298 = v295; // 0x40dc35
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x40dc44
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40db3a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x40dc70
    int64_t v272; // 0x40d880
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x40dc79
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x40e078;
        } else {
            if (v301 == 12) {
                // 0x40e838
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x40dca0;
            } else {
                // 0x40dc90
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x40e070
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x40e078;
                } else {
                    goto lab_0x40dca0;
                }
            }
        }
    } else {
        goto lab_0x40dca0;
    }
  lab_0x40df77:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x40df77
    int64_t v111 = v55 + 88; // 0x40df7b
    int64_t v112 = *(int64_t *)v111; // 0x40df7f
    int64_t v113 = v49 + 1; // 0x40df82
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x40d989
        int64_t v115 = v114 + v105; // 0x40d98f
        v28 = v115;
        v29 = v114;
        v31 = v105;
        v83 = v111;
        v30 = v106;
        v32 = v110;
        v33 = v107;
        v78 = v108;
        v76 = v109;
        v34 = v113;
        if (v115 < v105) {
            // 0x40dfb8
            v88 = v114;
            v89 = v105;
            v90 = v111;
            v91 = v108;
            v92 = v109;
            v93 = v113;
            v94 = v107;
            v95 = v110;
            v96 = v106;
            v97 = -1;
            v14 = v107;
            if (v106 != -1) {
                goto lab_0x40de70_2;
            } else {
                goto lab_0x40dae9;
            }
        } else {
            goto lab_0x40d99b;
        }
    } else {
        goto lab_0x40df93;
    }
  lab_0x40da9b:;
    int64_t v116 = v80 == v20; // 0x40daa2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x40d9d0;
    } else {
        goto lab_0x40daae;
    }
  lab_0x40daae:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x40d880
    if (v102 != 0) {
        goto lab_0x40d9d0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40daca
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x40e085;
        } else {
            // 0x40dad8
            v88 = v86;
            v89 = v85;
            v90 = v84;
            v91 = v79;
            v92 = v77;
            v93 = v75;
            v94 = (int64_t)mem3;
            v95 = 0x100000000000000 * v81 >> 56;
            v96 = v117;
            v97 = v87;
            goto lab_0x40dae9;
        }
    }
  lab_0x40d9d0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x40d9e7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x40de70_2;
    } else {
        // 0x40da0d
        v88 = v86;
        v89 = v85;
        v90 = v84;
        v91 = v79;
        v92 = v77;
        v93 = v75;
        v94 = (int64_t)mem4;
        v95 = v81;
        v96 = size2;
        v97 = v87;
        if (v85 != 0 && (char)v101 != 0) {
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x40da35
            v88 = v86;
            v89 = v85;
            v90 = v84;
            v91 = v79;
            v92 = v77;
            v93 = v75;
            v94 = (int64_t)dest_mem;
            v95 = 0x100000000000000 * v81 >> 56;
            v96 = size2;
            v97 = v87;
        }
        goto lab_0x40dae9;
    }
  lab_0x40ec4e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x40f214
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x40de70_2;
        } else {
            // 0x40f225
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40f23a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x40ec82;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x40ec71
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x40e085;
        } else {
            // 0x40ec7f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x40ec82;
        }
    }
  lab_0x40f25f:
    // 0x40f25f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x40de70_2;
    } else {
        goto lab_0x40ec4e;
    }
  lab_0x40e00d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40e00d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x40e011
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x40e015
    int64_t v123 = 0; // 0x40e01c
    int64_t v124 = v122; // 0x40e01c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x40e022
        int64_t v126 = v120; // 0x40e02a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x40efb1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x40efc9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40efdb
            int64_t v131 = v128; // 0x40efe4
            int64_t v132 = v130; // 0x40efe4
            int64_t v133; // 0x40d880
            int64_t v134; // 0x40eff6
            if (v130 < v129) {
                // 0x40efe6
                if (v121 == v128) {
                    // break -> 0x40de00
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40ddeb
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x40de00
                        goto lab_0x40de00;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x40efa8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x40efb1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x40efe6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x40de00
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40ddeb
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x40de00
                            goto lab_0x40de00;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x40efa8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x40e034
            if (*(int32_t *)v135 != 5) {
                // 0x40e5ac
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x40e040
            int64_t v137 = v136; // 0x40e040
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40e04d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x40de00:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x40de00
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x40de04
    int64_t v142; // 0x40d880
    int64_t v143; // 0x40d880
    int64_t v144; // 0x40d880
    if (v140 == v141) {
        goto lab_0x40e4b0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x40de11
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x40f014
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40f01d
            if (v141 == v146) {
                goto lab_0x40e4ce;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x40f043
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40f04a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x40f063
                int64_t v152 = v151; // 0x40f06c
                int64_t v153 = v149; // 0x40f06c
                int64_t v154; // 0x40d880
                int64_t v155; // 0x40f077
                if (v151 < v150) {
                    // 0x40f06e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x40de70_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40f08a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x40de70_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x40f030
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x40f039
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40f06e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x40de70_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40f08a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x40de70_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x40f030
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40de3c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x40de23
            if (*(int32_t *)v156 != 5) {
                // 0x40e5ac
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x40de30
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x40e4b0;
            } else {
                goto lab_0x40de3c;
            }
        }
    }
  lab_0x40dca0:
    // 0x40dca0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40dcad
    int64_t v160 = 0; // 0x40dcb5
    if (v159 != -1) {
        // 0x40dcbb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40e5ac
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40dcde
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40dcec
        if (*(int32_t *)v162 != 5) {
            // 0x40e5ac
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40dcff
        int64_t v164; // bp-8, 0x40d880
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x40d880
    uint64_t v165; // 0x40dd16
    if (v46 > 0xfffffffffffffffd) {
        // 0x40e748
        v14 = v48;
        if (v47 == -1) {
            // 0x40dd74
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x40de70_2;
    } else {
        // 0x40dd20
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x40dd74
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x40e450
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x40de70_2;
            } else {
                int64_t v167 = 2 * v47; // 0x40e456
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x40dd42;
                } else {
                    goto lab_0x40e462;
                }
            }
        } else {
            // 0x40dd32
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x40dd42;
            } else {
                goto lab_0x40e462;
            }
        }
    }
  lab_0x40df40:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x40e769
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x40de70_2;
        } else {
            // 0x40e781
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x40e792
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x40df72;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x40df61
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x40e085;
        } else {
            // 0x40df6f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x40df72;
        }
    }
  lab_0x40e822:
    // 0x40e822
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x40de70_2;
    } else {
        goto lab_0x40df40;
    }
  lab_0x40e4b0:
    // 0x40e4b0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x40e4ce;
  lab_0x40e078:
    // 0x40e078
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x40dca0;
  lab_0x40e085:
    // 0x40e085
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x40e098;
  lab_0x40e4ce:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x40e4d4
    v14 = v48;
    int64_t v170; // 0x40d880
    int64_t v171; // 0x40d880
    int64_t * v172; // 0x40d880
    int64_t v173; // 0x40d880
    int64_t v174; // bp-760, 0x40d880
    uint64_t size5; // 0x40e4d8
    if (v169 == -1) {
        goto lab_0x40de70_2;
    } else {
        // 0x40e4e9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x40e549;
        } else {
            // 0x40e4f5
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x40de70_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40e51d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x40de70_2;
                } else {
                    goto lab_0x40e549;
                }
            }
        }
    }
  lab_0x40de3c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x40e4ce;
    } else {
        // 0x40de45
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x40e4ce;
        } else {
            goto lab_0x40de70_2;
        }
    }
  lab_0x40dd42:
    // 0x40dd42
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x40e709
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x40e724
            if (v48 == v20 && v46 != 0) {
                // 0x40e732
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x40dd74
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x40dd63
        v14 = v48;
        if (mem11 != NULL) {
            // 0x40dd74
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x40de70_2;
  lab_0x40e462:
    // 0x40e462
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x40de70_2;
    } else {
        goto lab_0x40dd42;
    }
  lab_0x40e549:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x40d880
    int64_t v181; // 0x40d880
    int64_t v182; // 0x40d880
    int64_t v183; // 0x40d880
    int64_t v184; // 0x40d880
    int64_t v185; // 0x40d880
    int64_t v186; // 0x40d880
    int64_t v187; // 0x40d880
    int64_t v188; // 0x40d880
    int64_t v189; // 0x40d880
    int64_t v190; // 0x40d880
    int64_t v191; // 0x40d880
    int64_t v192; // 0x40d880
    int64_t v193; // 0x40d880
    float80_t v194; // 0x40d880
    float80_t v195; // 0x40d880
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x40f0c2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x40f0d0
            *v197 = 78;
            *(int16_t *)v178 = 0x414e;
            v194 = v119;
            v195 = v62;
            v190 = v179;
            v189 = v196;
            v182 = v177;
            v184 = v176;
            v188 = 0;
        } else {
            // 0x40f1fd
            *v197 = 110;
            *(int16_t *)v178 = 0x616e;
            v194 = v119;
            v195 = v62;
            v190 = v179;
            v189 = v196;
            v182 = v177;
            v184 = v176;
            v188 = 0;
        }
        goto lab_0x40ea09;
    } else {
        // 0x40e551
        int64_t v198; // 0x40d880
        float80_t v199; // 0x40d880
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x40ed11
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40ed1e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40eb7a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40e57f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x40e588
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40e5ac
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40e5ac
                            abort();
                            // UNREACHABLE
                        }
                        // 0x40f0f6
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x40f0f6
                            v181 = v187 + 3;
                            goto lab_0x40f271;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x40f271;
                            } else {
                                goto lab_0x40f132;
                            }
                        }
                    } else {
                        // 0x40ee03
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x40e9f7;
                        } else {
                            int64_t v202 = v187 + 2; // 0x40ee11
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40f35a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x40ee58
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40ee6b
                                int64_t v207 = v176 & 0xffffffff; // 0x40ee6e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40ee7c
                                int64_t v209 = v187 + 1; // 0x40ee99
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40eeae
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40eebb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x40ea09;
                        }
                    }
                } else {
                    // 0x40eba8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x40eba8
                        v180 = v187 + 1;
                        goto lab_0x40f157;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x40f157;
                        } else {
                            goto lab_0x40ebc8;
                        }
                    }
                }
            } else {
                // 0x40e9e0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x40e9f7;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40ef2c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40ef3d
                    char v215 = *v213; // 0x40ef44
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x40ef80
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40ef8d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x40ef55
                        v182 = v218;
                        int64_t v219; // 0x40ef47
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x40ea09;
                }
            }
        } else {
            float80_t v220; // 0x40d880
            if (v220 != 0.0L) {
                // 0x40e5ac
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40ebfb
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40ec0a
                *v222 = 70;
                *(int16_t *)v187 = 0x4e49;
                v194 = 0.0L;
                v195 = 0.0L;
                v190 = v179;
                v189 = v221;
                v182 = v177;
                v184 = v176;
                v188 = 0;
            } else {
                // 0x40eee3
                *v222 = 102;
                *(int16_t *)v187 = 0x6e69;
                v194 = 0.0L;
                v195 = 0.0L;
                v190 = v179;
                v189 = v221;
                v182 = v177;
                v184 = v176;
                v188 = 0;
            }
            goto lab_0x40ea09;
        }
    }
  lab_0x40ea09:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40ea0c
    int64_t v229 = v228; // 0x40ea12
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x40ea14
        int64_t v232 = v231 + v224; // 0x40ea17
        int64_t v233 = v232 - v225; // 0x40ea1e
        if ((v230 & 2) != 0) {
            // 0x40eec3
            v229 = v233;
            int64_t v234 = v224; // 0x40eec6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x40eed0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x40eed0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x40ed35
                int64_t v238 = v224; // 0x40ed3b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x40ed49
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x40ed40
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x40ed55
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x40ed68
                    *(char *)v238 = 32;
                    v229 = v233;
                    while (v241 != v238 + v231) {
                        int64_t v242 = v241;
                        v241 = v242 + 1;
                        *(char *)v242 = 32;
                        v229 = v233;
                    }
                }
            } else {
                int64_t v243 = v224; // 0x40ea41
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x40ea61
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x40ea58
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40ea6a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x40ea78
                    *(char *)v243 = 48;
                    v229 = v233;
                    while (v246 != v243 + v231) {
                        int64_t v247 = v246;
                        v246 = v247 + 1;
                        *(char *)v247 = 48;
                        v229 = v233;
                    }
                }
            }
        }
    }
    int64_t v248 = v229;
    if (size5 <= v248) {
        // 0x40e5ac
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x40eaa8
    int64_t dest_mem5 = v48; // 0x40eab5
    int64_t v250 = v248; // 0x40eab5
    int64_t v251 = v47; // 0x40eab5
    int64_t v252; // 0x40d880
    if (v47 - v46 > v248) {
        goto lab_0x40eb30;
    } else {
        if (v249 < v46) {
            // 0x40ed02
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x40de70_2;
            } else {
                goto lab_0x40eb30;
            }
        } else {
            // 0x40eac0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x40eb30;
            } else {
                if (v47 != 0) {
                    // 0x40f098
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40de70_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x40f09e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40eade;
                        } else {
                            goto lab_0x40f0aa;
                        }
                    }
                } else {
                    // 0x40eace
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40eade;
                    } else {
                        goto lab_0x40f0aa;
                    }
                }
            }
        }
    }
  lab_0x40eb30:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x40eb41
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40eb5d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x40df77;
  lab_0x40e9f7:
    // 0x40e9f7
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x40ea09;
  lab_0x40f157:;
    char * v257 = nl_langinfo(0x10000); // 0x40f18a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40f19b
    char v259 = *v257; // 0x40f1a2
    int64_t v260 = v176 & 0xffffffff; // 0x40f1a5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x40f1b3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x40f1e0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40f1ed
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x40ebc8;
  lab_0x40ebc8:
    // 0x40ebc8
    *(char *)(v192 + 3) = 48;
    *(char *)v192 = *v65;
    *(int16_t *)(v192 + 1) = 0x302b;
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v192 + 4;
    v182 = v183;
    v184 = v185;
    v188 = v187;
    goto lab_0x40ea09;
  lab_0x40eade:
    // 0x40eade
    if (v48 == 0 || v48 == v20) {
        // 0x40ed7b
        int64_t size7; // 0x40d880
        int64_t * mem12 = malloc((int32_t)size7); // 0x40ed92
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x40de70_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40ed9e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x40edc9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x40eb30;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40eb0d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x40de70_2;
        } else {
            // 0x40eb1b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x40eb30;
        }
    }
  lab_0x40f0aa:
    // 0x40f0aa
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x40de70_2;
    } else {
        goto lab_0x40eade;
    }
  lab_0x40f271:;
    int64_t v265 = v187 + 4; // 0x40f271
    char v266 = *nl_langinfo(0x10000); // 0x40f2bc
    int64_t v267 = v176 & 0xffffffff; // 0x40f2bf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x40f2c6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40f2ed
        int64_t v270 = v265 + 1; // 0x40f2f5
        *(char *)v265 = 48;
        v191 = v268;
        v193 = v269;
        v186 = v267;
        while (v270 != v269) {
            int64_t v271 = v270;
            v270 = v271 + 1;
            *(char *)v271 = 48;
            v191 = v268;
            v193 = v269;
            v186 = v267;
        }
    }
    goto lab_0x40f132;
  lab_0x40f132:
    // 0x40f132
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x40ea09;
}
// Address range: 0x40f3a0 - 0x40f5b9
int64_t function_40f3a0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x40f403
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x40f3b8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x40f3c9
    g69 = v5;
    int64_t v6; // 0x40f3a0
    int64_t v7; // 0x40f3a0
    int64_t v8; // 0x40f3a0
    int64_t v9; // 0x40f3a0
    int64_t v10; // 0x40f3a0
    int64_t v11; // 0x40f3a0
    int64_t v12; // 0x40f3a0
    uint32_t v13; // 0x40f4c0
    int64_t * v14; // 0x40f4f0
    int64_t v15; // 0x40f4f8
    uint32_t v16; // 0x40f540
    uint32_t v17; // 0x40f510
    int64_t * v18; // 0x40f4a0
    int64_t v19; // 0x40f4a0
    int64_t * v20; // 0x40f4b0
    int64_t v21; // 0x40f4b0
    int64_t * v22; // 0x40f488
    int64_t v23; // 0x40f488
    int64_t * v24; // 0x40f470
    int64_t v25; // 0x40f470
    int64_t * v26; // 0x40f590
    uint32_t v27; // 0x40f450
    int64_t v28; // 0x40f590
    int64_t * v29; // 0x40f580
    int64_t v30; // 0x40f580
    uint32_t v31; // 0x40f430
    int64_t * v32; // 0x40f5a8
    int64_t v33; // 0x40f5a8
    int64_t v34; // 0x40f553
    uint32_t v35; // 0x40f410
    int64_t v36; // 0x40f527
    uint32_t v37; // 0x40f3d8
    int32_t * v38; // 0x40f4c0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x40f450
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x40f457
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x40f4a0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x40f463
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x40f3f6
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x40f430
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x40f437
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x40f4b0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x40f443
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x40f3f6
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x40f410
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x40f417
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x40f488
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x40f423
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x40f3f6
            break;
        }
        case 7: {
        }
        case 8: {
        }
        case 9: {
        }
        case 10: {
        }
        case 17: {
        }
        case 18: {
        }
        case 19: {
        }
        case 20: {
        }
        case 21: {
        }
        case 22: {
            // 0x40f3d8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x40f3e3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x40f470
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x40f3ef
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x40f3f6
            break;
        }
        case 11: {
            // 0x40f4c0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x40f4cf
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x40f590
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x40f4dc
            *(int64_t *)(v4 + 16) = __asm_movsd_3(__asm_movsd(*(int64_t *)v10));
            // break -> 0x40f3f6
            break;
        }
        case 12: {
            // 0x40f4f0
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x40f3f6
            break;
        }
        case 15: {
            // 0x40f540
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x40f547
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x40f580
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x40f553
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x40f3f6
            break;
        }
        case 16: {
            // 0x40f510
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40f51b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x40f5a8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x40f527
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x40f3f6
            break;
        }
        default: {
            // 0x40f403
            return 0xffffffff;
        }
    }
    // 0x40f3f6
    v3++;
    int64_t v39 = v4 + 32; // 0x40f401
    while (v3 < v2) {
        // 0x40f3c0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g69 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x40f450
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x40f457
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x40f4a0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x40f463
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x40f3f6
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x40f430
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x40f437
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x40f4b0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x40f443
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x40f3f6
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x40f410
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x40f417
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x40f488
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x40f423
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x40f3f6
                break;
            }
            case 7: {
            }
            case 8: {
            }
            case 9: {
            }
            case 10: {
            }
            case 17: {
            }
            case 18: {
            }
            case 19: {
            }
            case 20: {
            }
            case 21: {
            }
            case 22: {
                // 0x40f3d8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x40f3e3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x40f470
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x40f3ef
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x40f3f6
                break;
            }
            case 11: {
                // 0x40f4c0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x40f4cf
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x40f590
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x40f4dc
                *(int64_t *)(v4 + 16) = __asm_movsd_3(__asm_movsd(*(int64_t *)v10));
                // break -> 0x40f3f6
                break;
            }
            case 12: {
                // 0x40f4f0
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x40f3f6
                break;
            }
            case 15: {
                // 0x40f540
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x40f547
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x40f580
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x40f553
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x40f3f6
                break;
            }
            case 16: {
                // 0x40f510
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40f51b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x40f5a8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x40f527
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x40f3f6
                break;
            }
            default: {
                // 0x40f403
                return 0xffffffff;
            }
        }
        // 0x40f3f6
        v3++;
        v39 = v4 + 32;
    }
    // 0x40f403
    return 0;
}
// Address range: 0x40f5c0 - 0x4102c9
int64_t function_40f5c0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x40f5c2
    int64_t v4 = v1 + 16; // 0x40f5c6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x40f5f9
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x40f60e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40f63b
    int32_t v8 = 0; // 0x40f640
    int64_t v9 = 0; // 0x40f640
    int64_t v10 = v3; // 0x40f640
    int64_t v11 = a1; // 0x40f640
    int64_t v12 = 0; // 0x40f640
    char v13; // 0x40f5c0
    int64_t v14; // 0x40f5c0
    int64_t v15; // 0x40f5c0
    int64_t v16; // 0x40f5c0
    int64_t v17; // 0x40f5c0
    int64_t v18; // 0x40f5c0
    int64_t v19; // 0x40f5c0
    int64_t v20; // 0x40f5c0
    int64_t v21; // 0x40f5c0
    int64_t v22; // 0x40f5c0
    int64_t v23; // 0x40f5c0
    int64_t v24; // 0x40f5c0
    int64_t v25; // 0x40f5c0
    int64_t v26; // 0x40f5c0
    int64_t v27; // 0x40f5c0
    int64_t v28; // 0x40f5c0
    int64_t v29; // 0x40f5c0
    int64_t v30; // 0x40f5c0
    int32_t v31; // 0x40f5c0
    int64_t v32; // 0x40f5c0
    int64_t v33; // 0x40f630
    int64_t v34; // 0x40f680
    int64_t * v35; // 0x40f6a3
    int64_t v36; // 0x40f706
    if (v7 != 0) {
        // 0x40f630
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x40f5c0
        int64_t v38 = 7; // 0x40f5c0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x40f5c0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x40f630:
            // 0x40f630
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x40f673
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x40f688
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x40f6c4
                int64_t v43 = v42; // 0x40f6c4
                int64_t v44 = v43; // 0x40f6cd
                int64_t v45 = v33; // 0x40f6cd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x40fa60
                    char v47 = *(char *)v46; // 0x40fa64
                    int64_t v48 = v46; // 0x40fa6d
                    while (v47 < 58) {
                        // 0x40fa60
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40fa6f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x410105
                        char v52 = *(char *)v51; // 0x410105
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x410109
                        int64_t v54 = v33; // 0x41011d
                        int64_t v55 = v51; // 0x41011d
                        char v56 = v52; // 0x41011d
                        int64_t v57 = v53; // 0x41011d
                        bool v58 = v52 < 58; // 0x41011d
                        bool v59 = v52 < 58; // 0x41011d
                        char v60 = v52; // 0x41011d
                        int64_t v61 = v51; // 0x41011d
                        int64_t v62; // 0x410132
                        int64_t v63; // 0x410105
                        char v64; // 0x410105
                        int64_t v65; // 0x410109
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x40fd88_9;
                            }
                            // 0x410103
                            v62 = v60;
                            v63 = v61 + 1;
                            v64 = *(char *)v63;
                            v65 = v62 - 49;
                            v54 = v61;
                            v55 = v63;
                            v56 = v64;
                            v57 = v65;
                            v58 = v64 < 58;
                            v61 = v63;
                            while (v65 < v62 - 48) {
                                // 0x41011f
                                if (v64 >= 58) {
                                    goto lab_0x40fd88_9;
                                }
                                // 0x410103
                                v62 = v64;
                                v63 = v61 + 1;
                                v64 = *(char *)v63;
                                v65 = v62 - 49;
                                v54 = v61;
                                v55 = v63;
                                v56 = v64;
                                v57 = v65;
                                v58 = v64 < 58;
                                v61 = v63;
                            }
                        }
                        int64_t v66 = v57;
                        int64_t v67 = v55; // 0x4100d8
                        while (v58) {
                            // 0x4100de
                            v49 = v66;
                            v50 = (int64_t)((0x1000000 * (int32_t)(int64_t)v56 >> 24) - 48);
                            v51 = v67 + 1;
                            v52 = *(char *)v51;
                            v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50;
                            v54 = v67;
                            v55 = v51;
                            v56 = v52;
                            v57 = v53;
                            v58 = v52 < 58;
                            v59 = v52 < 58;
                            v60 = v52;
                            v61 = v51;
                            if (v53 < v50) {
                                if (!v59) {
                                    goto lab_0x40fd88_9;
                                }
                                // 0x410103
                                v62 = v60;
                                v63 = v61 + 1;
                                v64 = *(char *)v63;
                                v65 = v62 - 49;
                                v54 = v61;
                                v55 = v63;
                                v56 = v64;
                                v57 = v65;
                                v58 = v64 < 58;
                                v61 = v63;
                                while (v65 < v62 - 48) {
                                    // 0x41011f
                                    if (v64 >= 58) {
                                        goto lab_0x40fd88_9;
                                    }
                                    // 0x410103
                                    v62 = v64;
                                    v63 = v61 + 1;
                                    v64 = *(char *)v63;
                                    v65 = v62 - 49;
                                    v54 = v61;
                                    v55 = v63;
                                    v56 = v64;
                                    v57 = v65;
                                    v58 = v64 < 58;
                                    v61 = v63;
                                }
                            }
                            // 0x4100d4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x4101dd
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x40fd88_9;
                        }
                        int64_t v68 = v54 + 2; // 0x4101ee
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x40f5c0
                v36 = v45;
                char v70; // 0x40f5c0
                while (true) {
                    // 0x40f706
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x40f720
                                *v41 = *v41 | 2;
                                // break -> 0x40f700
                                break;
                            }
                            case 43: {
                                // 0x40f730
                                *v41 = *v41 | 4;
                                // break -> 0x40f700
                                break;
                            }
                            case 32: {
                                // 0x40f740
                                *v41 = *v41 | 8;
                                // break -> 0x40f700
                                break;
                            }
                            case 35: {
                                // 0x40f750
                                *v41 = *v41 | 16;
                                // break -> 0x40f700
                                break;
                            }
                            case 48: {
                                // 0x40f760
                                *v41 = *v41 | 32;
                                // break -> 0x40f700
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x40f768
                                    break;
                                }
                                // 0x40f6f6
                                *v41 = *v41 | 64;
                                // break -> 0x40f700
                                break;
                            }
                        }
                    } else {
                        // 0x40f70f
                        *v41 = *v41 | 1;
                    }
                    // 0x40f700
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x40f5c0
                int64_t * v72; // 0x40f691
                int64_t * v73; // 0x40f69a
                if (v70 == 42) {
                    // 0x40f7dd
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x40f7fd
                    int64_t v75 = v74; // 0x40f7fd
                    int64_t v76 = v75 + 0xffffffd0; // 0x40f801
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x40f807
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40fbdd
                        char v80 = *(char *)v79; // 0x40fbe1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40fbdd
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x40fbed
                        v26 = v79;
                        int64_t v81 = v75; // 0x40fbf1
                        int64_t v82 = v36; // 0x40fbf1
                        int64_t v83 = 0; // 0x40fbf1
                        if (v80 != 36) {
                            goto lab_0x40f80d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x40fc22
                            int64_t v89 = v85; // 0x40fc22
                            int64_t v90 = v87; // 0x40fc22
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x40fc27
                            int64_t v95 = v92 + 1; // 0x40fc2a
                            char v96 = *(char *)v95; // 0x40fc2a
                            int64_t v97 = v96; // 0x40fc2a
                            while (v94 < v91) {
                                // 0x40fc41
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x40fd88_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40fbfb
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x40fc04
                                v84 = v83;
                                v85 = v82;
                                v86 = v81;
                                v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                                v88 = v86;
                                v89 = v85;
                                v90 = v87;
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                                while (v94 < v91) {
                                    // 0x40fc41
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x40fd88_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40fbfb
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x41027b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x40fd88_9;
                            }
                            // 0x410289
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40f81c;
                        }
                    } else {
                        goto lab_0x40f80d;
                    }
                } else {
                    // 0x40f76d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x40f5c0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x40fe8b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x40fe90
                        int64_t v102 = v71; // 0x40fe99
                        char * v103 = v100; // 0x40fe99
                        int64_t v104 = v36; // 0x40fe99
                        int64_t v105 = v71; // 0x40fe99
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x40fea3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x40fea3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x40fea3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x40feb2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x40fed5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x40f778;
                }
            } else {
                goto lab_0x40f638;
            }
        }
    }
  lab_0x40f642:
    // 0x40f642
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x40f664
    return 0;
  lab_0x40fd88_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x40fd93
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x40fda5
    if (v3 != v115) {
        // 0x40fdb0
        free((int64_t *)v115);
    }
    // 0x40fdb5
    *__errno_location() = 22;
    // 0x40f664
    return 0xffffffff;
  lab_0x40ff60_5:;
    // 0x40ff60
    int64_t v116; // 0x40f5c0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x40ff65
    int64_t v119; // 0x40f5c0
    if (v4 == v117) {
        goto lab_0x40ff79_3;
    } else {
        // 0x40ff67
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x40ff79_3;
    }
  lab_0x40ff79_3:;
    int64_t v120 = *v5; // 0x40ff79
    int32_t * v121; // 0x40ff89
    if (v3 == v120) {
        // 0x40ff89
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x40ff84
    free((int64_t *)v120);
    // 0x40ff89
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x40f638:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40f63b
    v13 = v124;
    v14 = v15;
    v25 = v33;
    v21 = v22;
    v32 = v122;
    v31 = v123;
    v8 = v123;
    v9 = v122;
    v10 = v22;
    v11 = v33;
    v12 = v15;
    if (v124 == 0) {
        // break -> 0x40f642
        goto lab_0x40f642;
    }
    goto lab_0x40f630;
  lab_0x40f80d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x40f80d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x40fbb3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x40fd88_9;
        }
        // 0x40fbcb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40f81c;
  lab_0x40f778:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40f77b
    int64_t v147 = v339; // 0x40f77b
    int64_t v145 = v338; // 0x40f77b
    int64_t v143 = v337; // 0x40f77b
    int64_t v186; // 0x40f5c0
    int64_t v190; // 0x40f5c0
    int64_t v189; // 0x40f5c0
    int64_t v188; // 0x40f5c0
    int64_t v187; // 0x40f5c0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x40f880;
    } else {
        goto lab_0x40f781;
    }
  lab_0x40f81c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40f81c
    int64_t v132 = v128; // 0x40f823
    int64_t v133 = v16; // 0x40f823
    int64_t v134 = v131; // 0x40f823
    int64_t v135; // 0x40f5c0
    int64_t v136; // 0x40f5c0
    int64_t v137; // 0x40f5c0
    int64_t v138; // 0x40facf
    if (v16 > v127) {
        goto lab_0x40f82c;
    } else {
        uint64_t v139 = 2 * v16; // 0x40fac5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x40ff60_5;
        }
        int64_t size = 32 * v138; // 0x40faee
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x41004c
            if (mem == NULL) {
                goto lab_0x40ff79_3;
            }
            // 0x41006e
            v135 = (int64_t)mem;
            goto lab_0x410079;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40fb0f
            int64_t v140 = *v6; // 0x40fb14
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x40ff60_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40fb0f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x410079;
            } else {
                goto lab_0x40fb4d;
            }
        }
    }
  lab_0x40f781:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x40f788
    int64_t v151 = v146; // 0x40f788
    int64_t v152 = v144; // 0x40f788
    uint64_t v153; // 0x40f5c0
    int64_t v154; // 0x40f5c0
    int64_t v155; // 0x40f7c7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x40f7cb
        int64_t v158; // 0x40f5c0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x40f930
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x40f7c3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x40f938
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x40f7c0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x40f7c3
                    break;
                }
            }
        } else {
            // 0x40f7d0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x40f7c3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x40f938
    int64_t v162 = v161 % 256; // 0x40f944
    g70 = v162;
    int64_t v163 = 17; // 0x40f947
    int64_t v164 = v154; // 0x40f947
    int64_t v165 = v154; // 0x40f947
    switch ((char)v161) {
        case 0: {
            goto lab_0x40f9b1;
        }
        case 28: {
            goto lab_0x40fd02;
        }
        case 30: {
            // 0x40fd2e
            v163 = 14;
            v164 = 99;
            goto lab_0x40f959;
        }
        case 32: {
            goto lab_0x40fd02;
        }
        case 33: {
            goto lab_0x40fd02;
        }
        case 34: {
            goto lab_0x40fd02;
        }
        case 46: {
            // 0x40fd1f
            v163 = 16;
            v164 = 115;
            goto lab_0x40f959;
        }
        case 51: {
            goto lab_0x40fd3d;
        }
        case 60: {
            goto lab_0x40fd02;
        }
        case 62: {
            int32_t v166 = v153; // 0x40fc59
            int32_t v167 = v166 - 7; // 0x40fc59
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40fc5f
            v163 = v168;
            v164 = v154;
            goto lab_0x40f959;
        }
        case 63: {
            goto lab_0x40fcb0;
        }
        case 64: {
            goto lab_0x40fd02;
        }
        case 65: {
            goto lab_0x40fd02;
        }
        case 66: {
            goto lab_0x40fd02;
        }
        case 68: {
            goto lab_0x40fcb0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40fc6f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x40fc75
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40fc7d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40fc8b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40fc9f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x40f959;
        }
        case 74: {
            goto lab_0x40fd3d;
        }
        case 75: {
            goto lab_0x40f959;
        }
        case 78: {
            int32_t v171 = v153; // 0x40f950
            int32_t v172 = v171 - 7; // 0x40f950
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x40f956
            v163 = v173;
            v164 = v154;
            goto lab_0x40f959;
        }
        case 80: {
            goto lab_0x40fd3d;
        }
        case 83: {
            goto lab_0x40fd3d;
        }
        default: {
            goto lab_0x40fd88_9;
        }
    }
  lab_0x40f82c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x40f843
        int64_t v178 = v176; // 0x40f5c0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x40f838
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x40f838
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x40f851
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40f85d
    int32_t v182 = *v181; // 0x40f85d
    if (v182 != 0) {
        // 0x40fede
        if (v182 != 5) {
            goto lab_0x40fd88_9;
        }
        unsigned char v183 = *(char *)v129; // 0x40fee7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x40f778;
    } else {
        // 0x40f867
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40f86d
        int64_t v185 = v129 + 1;
        v149 = v130;
        v147 = v184;
        v145 = v129;
        v143 = v175;
        v186 = v185;
        v187 = v130;
        v188 = v185;
        v189 = v129;
        v190 = v175;
        if (v184 != 46) {
            goto lab_0x40f781;
        } else {
            goto lab_0x40f880;
        }
    }
  lab_0x40f880:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x40f880
    char v197 = *v196; // 0x40f880
    int64_t * v198; // 0x40f6a8
    *v198 = v192;
    int64_t v199; // 0x40f5c0
    int64_t v200; // 0x40f5c0
    int64_t v201; // 0x40f5c0
    int64_t v202; // 0x40f5c0
    int64_t v203; // 0x40f5c0
    int64_t * v204; // 0x40f6b1
    int64_t * v205; // 0x40f6ba
    int64_t v206; // 0x40f899
    if (v197 != 42) {
        char v207 = *v196; // 0x40fa80
        int64_t v208 = v193; // 0x40fa89
        char * v209; // 0x40f5c0
        int64_t v210; // 0x40f5c0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x40fa90
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x40fa94
            v208 = v212;
            while (v214 < 58) {
                // 0x40fa90
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40fa9e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x40fa80
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x40fab1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x40f781;
    } else {
        // 0x40f88f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40f8af
        int64_t v219 = v218; // 0x40f8af
        int64_t v220 = v219 + 0xffffffd0; // 0x40f8b3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x40f8b9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x410164
            char v224 = *(char *)v223; // 0x410168
            v221 = v223;
            while (v224 < 58) {
                // 0x410164
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x410174
            v201 = v223;
            int64_t v225 = v219; // 0x410178
            int64_t v226 = v206; // 0x410178
            int64_t v227 = 0; // 0x410178
            if (v224 != 36) {
                goto lab_0x40f8bf;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x4101a9
                int64_t v233 = v229; // 0x4101a9
                int64_t v234 = v231; // 0x4101a9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x4101ae
                int64_t v239 = v236 + 1; // 0x4101b5
                char v240 = *(char *)v239; // 0x4101b9
                int64_t v241 = v240; // 0x4101b9
                while (v238 < v235) {
                    // 0x4101c7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x40fd88_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x410182
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x41018b
                    v228 = v227;
                    v229 = v226;
                    v230 = v225;
                    v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                    v232 = v230;
                    v233 = v229;
                    v234 = v231;
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                    while (v238 < v235) {
                        // 0x4101c7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x40fd88_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x410182
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x410297
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x40fd88_9;
                }
                // 0x4102a5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x40f8ce;
            }
        } else {
            goto lab_0x40f8bf;
        }
    }
  lab_0x40f9b1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x40f9b6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x40f9be
    *a2 = v245;
    int64_t v246; // 0x40f5c0
    int64_t v247; // 0x40f5c0
    int64_t dest_mem; // 0x40f5c0
    int64_t v248; // 0x40f5c0
    int64_t v249; // 0x4102b3
    if (v246 > v245) {
        // 0x40f9ca
        goto lab_0x40f638;
    } else {
        if (v246 < 0) {
            // 0x4102b3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40ff60_5;
        }
        int64_t v250 = 2 * v246; // 0x40f9e6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x4102b3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40ff60_5;
        }
        int64_t v251 = *v5; // 0x40f9f7
        int64_t size2 = 176 * v246; // 0x40fa09
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x40fb59
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x4100bc
                v118 = v252;
                if (v4 == v252) {
                    // 0x40ff89
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x40ff67
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x40ff79_3;
            }
            goto lab_0x40fb74;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x40fa1b
            if (mem4 == NULL) {
                // 0x4102b3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40ff60_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x40fa1b
            int64_t v254 = *v5; // 0x40fa3d
            int64_t v255 = *a2; // 0x40fa41
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x40fb74;
            } else {
                goto lab_0x40fa4f;
            }
        }
    }
  lab_0x40fd02:
    // 0x40fd02
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x40fd17
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x40f959;
  lab_0x40fd3d:;
    uint32_t v335 = (int32_t)v153; // 0x40fd45
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40fd4b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40fd53
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x40fd61
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40fd6e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40f959;
  lab_0x40fcb0:;
    uint32_t v336 = (int32_t)v153; // 0x40fcb8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x40fcbe
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40fcc6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x40fcd4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40fce1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40f959;
  lab_0x40f959:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x40f5c0
    int64_t v260; // 0x40f5c0
    int64_t * v261; // 0x40f6bf
    if (v259 == -1) {
        // 0x40fe64
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x40fd88_9;
        }
        // 0x40fe7c
        v260 = v148;
    } else {
        // 0x40f963
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x40f968
    int64_t v264 = v258; // 0x40f96f
    int64_t v265 = v162; // 0x40f96f
    int64_t v266 = v263; // 0x40f96f
    int64_t v267; // 0x40f5c0
    int64_t v268; // 0x40f5c0
    int64_t v269; // 0x40f5c0
    int64_t v270; // 0x40f5c0
    int64_t v271; // 0x40f5c0
    if (v142 > v262) {
        goto lab_0x40f975;
    } else {
        uint64_t v272 = 2 * v142; // 0x40fdd8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x40fde2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x40ff60_5;
        }
        int64_t size3 = 32 * v273; // 0x40fe01
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x40fe14
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x40fef9
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x40ff79_3;
            }
            goto lab_0x40ff16;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x40fe21
            if (mem6 == NULL) {
                // 0x4102b3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40ff60_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x40fe21
            int64_t v276 = v274 & 0xffffffff; // 0x40fe26
            int64_t v277 = *v6; // 0x40fe51
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x40ff16;
            } else {
                goto lab_0x40fe5b;
            }
        }
    }
  lab_0x40f975:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40f98b
        int64_t v282 = v279; // 0x40f5c0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x40f980
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x40f980
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x40f999
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x40f9a5
    int32_t v286 = *v285; // 0x40f9a5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40fdca
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x40fd88_9;
        }
    } else {
        // 0x40f9af
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x40f9b1;
  lab_0x410079:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x410079
    int64_t * v290; // 0x40f5c0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40fb4d;
  lab_0x40fb4d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40f82c;
  lab_0x40f8bf:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x40f8bf
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x41013a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x40fd88_9;
        }
        // 0x410152
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x40f8ce;
  lab_0x40f8ce:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x40f8ce
    int64_t v300 = v296; // 0x40f8d5
    int64_t v301 = v191; // 0x40f8d5
    int64_t v302 = v299; // 0x40f8d5
    int64_t v303; // 0x40f5c0
    int64_t v304; // 0x40f5c0
    int64_t v305; // 0x40f5c0
    int64_t v306; // 0x40ffb2
    if (v191 > v295) {
        goto lab_0x40f8de;
    } else {
        uint64_t v307 = 2 * v191; // 0x40ffa8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x40ff60_5;
        }
        int64_t size4 = 32 * v306; // 0x40ffcd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x4101fe
            if (mem7 == NULL) {
                goto lab_0x40ff79_3;
            }
            // 0x410220
            v304 = (int64_t)mem7;
            goto lab_0x41022b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x40ffee
            int64_t v308 = *v6; // 0x40fff3
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x40ff60_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x40ffee
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x41022b;
            } else {
                goto lab_0x41002c;
            }
        }
    }
  lab_0x40fb74:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x40f5c0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40fa4f;
  lab_0x40fa4f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x40f638;
  lab_0x40ff16:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40ff2c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40fe5b;
  lab_0x40fe5b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x40f975;
  lab_0x40f8de:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x40f8f3
        int64_t v324 = v322; // 0x40f5c0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x40f8e8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x40f8e8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x40f901
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x40f90e
    int32_t v328 = *v327; // 0x40f90e
    if (v328 != 0) {
        // 0x410035
        if (v328 != 5) {
            goto lab_0x40fd88_9;
        }
        unsigned char v329 = *(char *)v297; // 0x41003e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x40f918
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x40f921
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x40f781;
  lab_0x41022b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x41022b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x41002c;
  lab_0x41002c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x40f8de;
}
// Address range: 0x4102d0 - 0x41032d
int64_t function_4102d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4102d0
    return function_401d70();
}
// Address range: 0x410330 - 0x410331
int64_t function_410330(void) {
    // 0x410330
    int64_t result; // 0x410330
    return result;
}
// Address range: 0x410340 - 0x410358
int64_t function_410340(int64_t a1, int64_t a2, int64_t a3) {
    // 0x410340
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g22);
}
// Address range: 0x410358 - 0x410378
int64_t function_410358(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g18; // 0x410362
    while (*(int64_t *)v1 != -1) {
        // 0x410363
        v1 -= 8;
    }
    // 0x410374
    return result;
}
