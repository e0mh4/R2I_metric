// Address range: 0x402000 - 0x402005
int64_t function_402000(void) {
    // 0x402000
    abort();
    // UNREACHABLE
}
// Address range: 0x402005 - 0x40200a
int64_t function_402005(void) {
    // 0x402005
    abort();
    // UNREACHABLE
}
// Address range: 0x40200a - 0x40200f
int64_t function_40200a(void) {
    // 0x40200a
    abort();
    // UNREACHABLE
}
// Address range: 0x40200f - 0x402014
int64_t function_40200f(void) {
    // 0x40200f
    abort();
    // UNREACHABLE
}
// Address range: 0x402014 - 0x402019
int64_t function_402014(void) {
    // 0x402014
    abort();
    // UNREACHABLE
}
// Address range: 0x402019 - 0x40201e
int64_t function_402019(void) {
    // 0x402019
    abort();
    // UNREACHABLE
}
// Address range: 0x40201e - 0x402023
int64_t function_40201e(void) {
    // 0x40201e
    abort();
    // UNREACHABLE
}
// Address range: 0x402023 - 0x402028
int64_t function_402023(void) {
    // 0x402023
    abort();
    // UNREACHABLE
}
// Address range: 0x402030 - 0x402de0
int64_t function_402030(int64_t a1, int64_t a2) {
    int32_t v1 = 0x6f686365; // bp-229, 0x402049
    int64_t v2 = a2 == 0 ? (int64_t)"xargs" : a2;
    function_4075c0((char *)v2);
    int64_t v3; // 0x402030
    function_4053a0(v2, a2, v3);
    g46 = 0;
    g49 = getpid();
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("findutils", "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("findutils");
    if ((int32_t)function_40bc80(0x4058e0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3) == 0) {
        // 0x40215d
        if ((int32_t)function_40bc80(0x403ec0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3) != 0) {
            goto lab_0x4020b8;
        } else {
            goto lab_0x4020e2;
        }
    } else {
        goto lab_0x4020b8;
    }
  lab_0x40222b:;
    // 0x40222b
    int64_t v4; // 0x402030
    int64_t v5; // 0x402030
    int64_t v6; // 0x402030
    int64_t v7; // 0x402030
    int64_t v8; // 0x402030
    int64_t v9; // 0x402030
    int32_t v10; // 0x402030
    int32_t v11; // 0x402030
    int32_t v12; // 0x402030
    int32_t v13; // 0x402030
    if (g94 == NULL) {
        goto lab_0x40268b;
    } else {
        // 0x40223b
        if (*g94 == 0) {
            goto lab_0x40268b;
        } else {
            // 0x402244
            g54 = g94;
            v13 = v12;
            v11 = v10;
            v9 = v8;
            v5 = v4;
            v7 = v6;
            goto lab_0x402128;
        }
    }
  lab_0x4021f9:;
    char * v14 = g94; // 0x4021f9
    g60 = v14 == NULL ? "{}" : v14;
    g64 = 0;
    g63 = 0;
    v13 = v12;
    v11 = v10;
    v9 = v8;
    v5 = v4;
    v7 = v6;
    goto lab_0x402128;
  lab_0x402128:;
    int64_t v15 = v7;
    int64_t v16 = v5;
    int64_t v17 = v9;
    int32_t v18 = v11;
    int32_t v19 = v13;
    int64_t v20; // bp-236, 0x402030
    int64_t v21; // 0x402039
    int64_t v22 = function_40b0f0(v21, a2, "+0a:E:e::i::I:l::L:n:prs:txP:d:", &g1, &v20, v17); // 0x40213c
    int64_t v23 = v22; // 0x402144
    int64_t v24 = v15; // 0x402144
    int64_t v25 = v16; // 0x402144
    int64_t v26 = v17; // 0x402144
    int32_t v27 = v18; // 0x402144
    int32_t v28 = v19; // 0x402144
    int64_t str2; // 0x402030
    int64_t v29; // 0x402030
    int32_t v30; // 0x402030
    int32_t v31; // 0x402030
    if ((int32_t)v22 == -1) {
        // 0x4026dc
        str2 = v15;
        v29 = v17;
        v30 = v18;
        v31 = v19;
        if (v16 == 0x403790 == (g54 != NULL)) {
            // 0x402cd6
            error(0, (int32_t)"warning: the -E option has no effect if -0 or -d is used.\n" ^ (int32_t)"warning: the -E option has no effect if -0 or -d is used.\n", dcgettext(NULL, "warning: the -E option has no effect if -0 or -d is used.\n", 5));
            str2 = v15;
            v29 = v17;
            v30 = v18;
            v31 = v19;
            goto lab_0x4026f3;
        } else {
            goto lab_0x4026f3;
        }
    }
    goto lab_0x40214a;
  lab_0x40217b:
    // 0x40217b
    g45 = 1;
    v13 = v12;
    v11 = v10;
    v9 = v8;
    v5 = v4;
    v7 = v6;
    goto lab_0x402128;
  lab_0x40268b:
    // 0x40268b
    g54 = NULL;
    v13 = v12;
    v11 = v10;
    v9 = v8;
    v5 = v4;
    v7 = v6;
    goto lab_0x402128;
  lab_0x40244c:;
    int64_t v46; // 0x402030
    int64_t v47; // 0x402030
    int64_t v42; // 0x402030
    char * endptr; // bp-216, 0x402030
    int64_t v48; // 0x402030
    int64_t v34; // 0x40242c
    unsigned char v35; // 0x40243c
    if (v35 != 92) {
        // 0x4026a5
        error(1, (int32_t)"Invalid input delimiter specification %s: the delimiter must be either a single character or an escape sequence starting with \\." ^ (int32_t)"Invalid input delimiter specification %s: the delimiter must be either a single character or an escape sequence starting with \\.", dcgettext(NULL, "Invalid input delimiter specification %s: the delimiter must be either a single character or an escape sequence starting with \\.", 5));
        v42 = 0;
        goto lab_0x40260c;
    } else {
        int64_t v49 = v34 + 1; // 0x402456
        unsigned char v50 = *(char *)v49; // 0x402456
        g96 = v50 - 92;
        v42 = 92;
        switch (v50) {
            case 92: {
                goto lab_0x40260c;
            }
            case 97: {
                // 0x402a38
                v42 = 7;
                goto lab_0x40260c;
            }
            case 98: {
                // 0x402a64
                v42 = 8;
                goto lab_0x40260c;
            }
            case 102: {
                // 0x402a59
                v42 = 12;
                goto lab_0x40260c;
            }
            case 110: {
                // 0x402a4e
                v42 = 10;
                goto lab_0x40260c;
            }
            case 114: {
                // 0x402a43
                v42 = 13;
                goto lab_0x40260c;
            }
            case 116: {
                // 0x402a7a
                v42 = 9;
                goto lab_0x40260c;
            }
            case 118: {
                // 0x402a6f
                v42 = 11;
                goto lab_0x40260c;
            }
            default: {
                int32_t * v51 = __errno_location(); // 0x40251a
                if (v50 == 120) {
                    // 0x402cfa
                    *v51 = 0;
                    endptr = NULL;
                    int32_t str_as_ul = strtoul((char *)(v34 + 2), &endptr, 16); // 0x402d17
                    int64_t v52 = str_as_ul; // 0x402d17
                    v46 = v52;
                    v48 = (int64_t)"Invalid escape sequence %s in input delimiter specification; character values must not exceed %lx.";
                    v47 = v52;
                    if (str_as_ul < 256) {
                        goto lab_0x4025c8;
                    } else {
                        goto lab_0x40259d;
                    }
                } else {
                    int16_t * v53 = *__ctype_b_loc(); // 0x402547
                    int64_t str = v49; // 0x402550
                    if ((*(char *)((2 * (int64_t)v50 | 1) + (int64_t)v53) & 8) == 0) {
                        // 0x402d44
                        error(1, (int32_t)"Invalid escape sequence %s in input delimiter specification." ^ (int32_t)"Invalid escape sequence %s in input delimiter specification.", dcgettext(NULL, "Invalid escape sequence %s in input delimiter specification.", 5));
                        str = 0;
                    }
                    // 0x40255a
                    *v51 = 0;
                    endptr = NULL;
                    int32_t str_as_ul2 = strtoul((char *)str, &endptr, 8); // 0x402579
                    int64_t v54 = str_as_ul2; // 0x402579
                    v46 = v54;
                    v48 = (int64_t)"Invalid escape sequence %s in input delimiter specification; character values must not exceed %lo.";
                    v47 = v54;
                    if (str_as_ul2 < 256) {
                        goto lab_0x4025c8;
                    } else {
                        goto lab_0x40259d;
                    }
                }
            }
        }
    }
  lab_0x40260c:
    // 0x40260c
    *(char *)&g43 = (char)v42;
    v13 = v12;
    v11 = v10;
    v9 = v34;
    v5 = 0x403790;
    v7 = v6;
    goto lab_0x402128;
  lab_0x4025c8:
    // 0x4025c8
    v42 = v47;
    if (*endptr != 0) {
        // 0x4025d3
        error(1, (int32_t)"Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised." ^ (int32_t)"Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised.", dcgettext(NULL, "Invalid escape sequence %s in input delimiter specification; trailing characters %s not recognised.", 5));
        int64_t v55; // 0x402030
        v42 = v55;
    }
    goto lab_0x40260c;
  lab_0x40259d:
    // 0x40259d
    error(1, 0, dcgettext(NULL, (char *)v48, 5));
    v47 = v46;
    goto lab_0x4025c8;
  lab_0x4020b8:
    // 0x4020b8
    error(1, *__errno_location(), dcgettext(NULL, "The atexit library function failed", 5));
    goto lab_0x4020e2;
  lab_0x4020e2:;
    int32_t v56 = function_404ea0(&g56, 2048);
    if (v56 >= 3) {
        int32_t v57 = sysconf(_SC_ARG_MAX); // 0x4024a9
        int64_t v58; // 0x402030
        if (v57 < 1) {
            // 0x4024da
            v58 = g58;
        } else {
            if (v57 < 2049) {
                // 0x402da2
                __assert_fail("val > XARGS_POSIX_HEADROOM", "xargs.c", 472, "main");
                // 0x402dbb
                __assert_fail("bc_ctl.arg_max >= LINE_MAX", "xargs.c", 500, "main");
                return &g100;
            }
            uint64_t v59 = g58; // 0x4024bf
            uint64_t v60 = (int64_t)v57 - 2048; // 0x4024c6
            int64_t v61 = v60 > v59 ? v59 : v60; // 0x4024cf
            g58 = v61;
            v58 = v61;
        }
        // 0x4024da
        if (v58 < 2048) {
            // 0x402dbb
            __assert_fail("bc_ctl.arg_max >= LINE_MAX", "xargs.c", 500, "main");
            return &g100;
        }
        // 0x4024eb
        g62 = 0x404120;
        function_404f80(&g56);
    }
    // 0x402106
    v21 = a1 & 0xffffffff;
    int64_t v62 = function_40b0f0(v21, a2, "+0a:E:e::i::I:l::L:n:prs:txP:d:", &g1, &v20, v3); // 0x40213c
    str2 = (int64_t)"-";
    v30 = 1;
    v31 = 0;
    bool v41; // 0x402030
    if ((int32_t)v62 != -1) {
        // 0x40214a
        v23 = v62;
        v24 = (int64_t)"-";
        v25 = 0x4038b0;
        v27 = 1;
        v28 = 0;
        while (true) {
          lab_0x40214a:
            // 0x40214a
            v12 = v28;
            v10 = v27;
            v8 = v26;
            v4 = v25;
            v6 = v24;
            int64_t v32 = v23 + 0xffffffd0; // 0x40214a
            g95 = v32 & 0xffffffff;
            v13 = 1;
            v11 = v10;
            v9 = v8;
            v5 = v4;
            v7 = v6;
            switch ((int32_t)v32) {
                case 0: {
                    // 0x402250
                    *(char *)&g43 = 0;
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = 0x403790;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 21: {
                    goto lab_0x40222b;
                }
                case 25: {
                    goto lab_0x4021f9;
                }
                case 28: {
                    int64_t v33 = function_403570((int64_t)g94, 76, 1, -1, 1); // 0x4021d2
                    g64 = 0;
                    g63 = v33;
                    g60 = NULL;
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 32: {
                    // 0x40218e
                    g16 = function_403570((int64_t)g94, 80, 0, 0x7fffffff, 1);
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 35: {
                    goto lab_0x402128;
                }
                case 49: {
                    // 0x402472
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = (int64_t)g94;
                    goto lab_0x402128;
                }
                case 52: {
                    // 0x40242c
                    v34 = (int64_t)g94;
                    v35 = *g94;
                    int64_t v36 = v35; // 0x40243c
                    int64_t v37 = v34; // 0x402440
                    int64_t v38 = -1; // 0x402030
                    while (v38 != 0) {
                        int64_t v39 = v37;
                        int64_t v40 = v38 - 1; // 0x402440
                        v38 = v40;
                        v37 = v39 + (v41 ? -1 : 1);
                        if (*(char *)v39 == 0) {
                            v42 = v36;
                            if (v40 == -3) {
                                goto lab_0x40260c;
                            } else {
                                goto lab_0x40244c;
                            }
                        }
                    }
                    goto lab_0x40244c;
                }
                case 53: {
                    goto lab_0x40222b;
                }
                case 56: {
                    // 0x40247e
                    function_4032b0((int64_t)g31);
                    // 0x402334
                    return 0;
                }
                case 57: {
                    goto lab_0x4021f9;
                }
                case 60: {
                    int32_t v43 = 1; // 0x4023eb
                    if (g94 != NULL) {
                        // 0x4023f1
                        v43 = function_403570((int64_t)g94, 108, 1, -1, 1);
                    }
                    // 0x402411
                    g63 = v43;
                    g64 = 0;
                    g60 = NULL;
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 62: {
                    int64_t v44 = function_403570((int64_t)g94, 110, 1, -1, 1); // 0x4023b0
                    g63 = 0;
                    g64 = v44;
                    if (v44 != 1 || g60 == NULL) {
                        // 0x4023d1
                        g60 = NULL;
                        v13 = v12;
                        v11 = v10;
                        v9 = v8;
                        v5 = v4;
                        v7 = v6;
                    } else {
                        // 0x40263c
                        g64 = 0;
                        v13 = v12;
                        v11 = v10;
                        v9 = v8;
                        v5 = v4;
                        v7 = v6;
                    }
                    goto lab_0x402128;
                }
                case 64: {
                    // 0x402174
                    g44 = 1;
                    goto lab_0x40217b;
                }
                case 66: {
                    // 0x402388
                    v13 = v12;
                    v11 = 0;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 67: {
                    int64_t v45 = function_403570((int64_t)g94, 115, 1, g57, 0); // 0x402364
                    if (g57 < v45) {
                        // 0x40264c
                        error(0, (int32_t)"warning: value %ld for -s option is too large, using %ld instead" ^ (int32_t)"warning: value %ld for -s option is too large, using %ld instead", dcgettext(NULL, "warning: value %ld for -s option is too large, using %ld instead", 5));
                    }
                    // 0x40237c
                    g58 = v45;
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 68: {
                    goto lab_0x40217b;
                }
                case 70: {
                    // 0x402328
                    function_404580("xargs");
                    // 0x402334
                    return 0;
                }
                case 72: {
                    // 0x402319
                    *(int32_t *)&g56 = 1;
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    goto lab_0x402128;
                }
                case 80: {
                    // 0x402262
                    if (strchr(g94, 61) != NULL) {
                        // 0x402278
                        error(1, (int32_t)"option --%s may not be set to a value which includes `='" ^ (int32_t)"option --%s may not be set to a value which includes `='", dcgettext(NULL, "option --%s may not be set to a value which includes `='", 5));
                    }
                    // 0x4022b4
                    g42 = g94;
                    v13 = v12;
                    v11 = v10;
                    v9 = v8;
                    v5 = v4;
                    v7 = v6;
                    if (unsetenv(g94) != 0) {
                        // 0x4022dc
                        error(1, *__errno_location(), dcgettext(NULL, "failed to unset environment variable %s", 5));
                        v13 = v12;
                        v11 = v10;
                        v9 = v8;
                        v5 = v4;
                        v7 = v6;
                    }
                    goto lab_0x402128;
                }
                default: {
                    goto lab_0x402491;
                }
            }
        }
      lab_0x402491:
        // 0x402491
        function_4032b0((int64_t)g35);
        // 0x402334
        return 1;
    }
    goto lab_0x4026f3;
  lab_0x4026f3:
    if (v56 != 0) {
        // 0x402d89
        __assert_fail("BC_INIT_OK == bcstatus", "xargs.c", 674, "main");
        // 0x402da2
        __assert_fail("val > XARGS_POSIX_HEADROOM", "xargs.c", 472, "main");
        // 0x402dbb
        __assert_fail("bc_ctl.arg_max >= LINE_MAX", "xargs.c", 500, "main");
        return &g100;
    }
    // 0x4026ff
    endptr = (char *)0x402ed0;
    int64_t set; // bp-208, 0x402030
    sigemptyset((struct _TYPEDEF_sigset_t *)&set);
    if (sigaction(SIGBUS, (struct sigaction *)&endptr, NULL) != 0) {
        // 0x402c97
        error(0, *__errno_location(), dcgettext(NULL, "Cannot set SIGUSR1 signal handler", 5));
    }
    // 0x402736
    endptr = (char *)0x403720;
    sigemptyset((struct _TYPEDEF_sigset_t *)&set);
    int32_t v63 = sigaction(SIGSYS, (struct sigaction *)&endptr, NULL); // 0x402760
    int64_t v64 = 0; // 0x402767
    if (v63 != 0) {
        char * format = dcgettext(NULL, "Cannot set SIGUSR2 signal handler", 5); // 0x402c77
        error(0, *__errno_location(), format);
        v64 = (int64_t)format;
    }
    // 0x40276d
    int64_t v65; // 0x402030
    int64_t v66; // 0x402030
    if (strcmp((char *)str2, "-") != 0) {
        // 0x402c05
        g71 = 1;
        int64_t v67 = function_4036c0(str2, (int64_t)"-"); // 0x402c12
        g73 = (struct _IO_FILE *)v67;
        v65 = (int64_t)&g1;
        v66 = v64;
        if (v67 == 0) {
            int64_t v68 = function_408c90(0, 8, str2); // 0x402c31
            char * format2 = dcgettext(NULL, "Cannot open input file %s", 5); // 0x402c45
            error(1, *__errno_location(), format2);
            v65 = v68;
            v66 = (int64_t)format2;
        }
    } else {
        // 0x402782
        *(int64_t *)&g73 = (int64_t)g32;
        v65 = (int64_t)&g1;
        v66 = v64;
    }
    // 0x402790
    if (g60 == NULL != (g63 == 0)) {
        // 0x40279e
        *(int32_t *)&g56 = 1;
    }
    int64_t v69 = a2; // 0x4027ae
    int64_t v70 = v21; // 0x4027ae
    if (*(int32_t *)0x61233c == (int32_t)a1) {
        // 0x4027b0
        g28 = 0;
        int64_t v71 = &v1; // bp-224, 0x4027c9
        v69 = &v71;
        v70 = 1;
    }
    int64_t v72 = v66; // 0x4027d3
    if (v31 != 0) {
        // 0x402a85
        function_404e60();
        fprintf(g35, dcgettext(NULL, "Your environment variables take up %lu bytes\n", 5));
        fprintf(g35, dcgettext(NULL, "POSIX upper limit on argument length (this system): %lu\n", 5));
        fprintf(g35, dcgettext(NULL, "POSIX smallest allowable upper limit on argument length (all systems): %lu\n", 5));
        function_404e60();
        fprintf(g35, dcgettext(NULL, "Maximum length of command we could actually use: %lu\n", 5));
        fprintf(g35, dcgettext(NULL, "Size of command buffer we are actually using: %lu\n", 5));
        fprintf(g35, dcgettext(NULL, "Maximum parallelism (--max-procs must be no greater): %lu\n", 5));
        v72 = 0x7fffffff;
        if (isatty(0) != 0) {
            // 0x402ba3
            fprintf(g35, dcgettext(NULL, "\nExecution of xargs will continue now, and it will try to read its input and run commands; if this is not what you wanted to happen, please type the end-of-file keystroke.\n", 5));
            v72 = 5;
            if (v30 != 0) {
                // 0x402bd0
                fprintf(g35, dcgettext(NULL, "Warning: %s will be run at least once.  If you do not want that to happen, then press the interrupt keystroke.\n", 5));
                v72 = *(int64_t *)(8 * (int64_t)g28 + v69);
            }
        }
    }
    // 0x4027d9
    int64_t v73; // bp-280, 0x402030
    int64_t v74 = &v73; // 0x40203f
    g72 = (char *)function_409680(g58 + 1);
    g67 = function_409680(g58 + 1);
    signal(SIGSTOP, SIG_DFL);
    if (g60 == NULL) {
        int64_t v75 = g28; // 0x40298b
        int64_t v76 = v65; // 0x402994
        int64_t v77 = v72; // 0x402994
        int64_t v78 = &v20; // 0x402994
        int64_t v79 = v29; // 0x402994
        if (v70 > v75) {
            int64_t * v80 = (int64_t *)(v74 - 8); // 0x40296d
            int64_t v81 = *(int64_t *)(8 * v75 + v69); // 0x402952
            int64_t v82 = v81; // 0x402964
            int64_t v83 = -1;
            int64_t v84 = 0; // 0x402964
            int64_t v85; // 0x402030
            int64_t v86; // 0x402964
            while (v83 != 0) {
                v85 = v82;
                v86 = v83 - 1;
                v82 = v85 + (v41 ? -1 : 1);
                v84 = v86;
                if (*(char *)v85 == 0) {
                    // break -> 0x40298b
                    break;
                }
                v83 = v86;
                v84 = 0;
            }
            // 0x40298b
            *v80 = 0;
            *(int64_t *)(v74 - 16) = (int64_t)g18;
            int64_t v87 = -1 - v84;
            function_4047a0(&g56, &g65, v81, v87, 0, 0, (int64_t)&g100);
            g28 = &g29;
            int64_t v88 = &g29; // 0x402994
            int64_t v89 = &g65; // 0x402994
            while (v70 > (int64_t)(int32_t)&g29) {
                // 0x402952
                v81 = *(int64_t *)(8 * v88 + v69);
                v82 = v81;
                v83 = -1;
                v84 = 0;
                while (v83 != 0) {
                    v85 = v82;
                    v86 = v83 - 1;
                    v82 = v85 + (v41 ? -1 : 1);
                    v84 = v86;
                    if (*(char *)v85 == 0) {
                        // break -> 0x40298b
                        break;
                    }
                    v83 = v86;
                    v84 = 0;
                }
                // 0x40298b
                *v80 = v89;
                *(int64_t *)(v74 - 16) = (int64_t)g18;
                v87 = -1 - v84;
                function_4047a0(&g56, &g65, v81, v87, 0, 0, (int64_t)&g100);
                g28 = &g29;
                v88 = &g29;
                v89 = &g65;
            }
            // 0x40298b
            v76 = v87;
            v77 = v81;
            v78 = *v80;
            v79 = 0;
        }
        // 0x402996
        g18 = 0;
        g61 = g65;
        g69 = g68;
        if ((int32_t)g68 == -1) {
            goto lab_0x402a02;
        } else {
            int64_t v90 = g63; // 0x4029c1
            int64_t v91 = g70; // 0x4029cb
            int64_t v92 = v90; // 0x4029cb
            if (g63 != 0 && g70 >= v90) {
                // 0x4029d6
                v92 = function_404c00(&g56, &g65, v77, v76, v78, v79);
                g70 = 0;
                v91 = 0;
            }
            int64_t v93 = v91;
            while ((int32_t)v92 != -1) {
                // 0x4029c1
                v90 = g63;
                v91 = v93;
                v92 = v90;
                if (g63 != 0 && v93 >= v90) {
                    // 0x4029d6
                    v92 = function_404c00(&g56, &g65, v77, v76, v78, v79);
                    g70 = 0;
                    v91 = 0;
                }
                // 0x4029b9
                v93 = v91;
            }
            // 0x4029f2
            if (g65 != g61) {
                goto lab_0x402a12;
            } else {
                goto lab_0x402a02;
            }
        }
      lab_0x402a02:
        // 0x402a02
        if (*(int32_t *)(v74 + 12) == 0 || g53 != 0) {
            // 0x402a21
            g46 = g47;
            // 0x402334
            return g47;
        }
        goto lab_0x402a12;
      lab_0x402a12:
        // 0x402a12
        function_404c00(&g56, &g65, v77, v76, v78, v79);
        // 0x402a21
        g46 = g47;
        // 0x402334
        return g47;
    }
    int64_t v94 = function_409680(0x100000000 * v70 >> 29); // 0x40282c
    int64_t v95 = g28; // 0x402831
    int64_t v96 = v41 ? -1 : 1;
    if (v70 > v95) {
        int64_t v97 = 8 * v95; // 0x402845
        int64_t v98 = *(int64_t *)(v97 + v69); // 0x40284c
        int64_t v99 = -1;
        int64_t v100 = 0; // 0x40284c
        int64_t v101; // 0x402030
        int64_t v102; // 0x40284c
        while (v99 != 0) {
            v101 = v98;
            v102 = v99 - 1;
            v98 = v101 + v96;
            v100 = v102;
            if (*(char *)v101 == 0) {
                // break -> 
                break;
            }
            v99 = v102;
            v100 = 0;
        }
        *(int64_t *)(v97 + v94) = -2 - v100;
        int64_t v103 = v95 + 1; // 0x402859
        int64_t v104 = v103; // 0x40285f
        while (v103 != v70) {
            // 0x402845
            v97 = 8 * v104;
            v98 = *(int64_t *)(v97 + v69);
            v99 = -1;
            v100 = 0;
            while (v99 != 0) {
                v101 = v98;
                v102 = v99 - 1;
                v98 = v101 + v96;
                v100 = v102;
                if (*(char *)v101 == 0) {
                    // break -> 
                    break;
                }
                v99 = v102;
                v100 = 0;
            }
            *(int64_t *)(v97 + v94) = -2 - v100;
            v103 = v104 + 1;
            v104 = v103;
        }
    }
    int64_t v105 = -1; // 0x40286e
    int64_t v106 = (int64_t)g60; // 0x40286e
    int64_t v107 = 0; // 0x40286e
    while (v105 != 0) {
        int64_t v108 = v106;
        v105--;
        v106 = v108 + v96;
        v107 = v105;
        if (*(char *)v108 == 0) {
            // break -> 
            break;
        }
        v107 = 0;
    }
    int64_t v109 = -2 - v107; // 0x402876
    g59 = v109;
    if ((int32_t)v109 == -1) {
        // 0x402a21
        g46 = g47;
        // 0x402334
        return g47;
    }
    int64_t * v110 = (int64_t *)(v74 - 8);
    int64_t * v111 = (int64_t *)(v74 - 16);
    function_405050(&g56, &g65);
    int64_t v112 = g28; // 0x4028b1
    int64_t v113 = (0x100000000 * v109 >> 32) - 1; // 0x4028b8
    g68 = 0;
    int64_t v114 = 8 * v112; // 0x4028c7
    int64_t v115 = *(int64_t *)(v114 + v94); // 0x4028c7
    int64_t v116 = *(int64_t *)(v114 + v69); // 0x4028cb
    *v110 = v112;
    *v111 = (int64_t)g18;
    function_4047a0(&g56, &g65, v116, v115 + 1, 0, 0, (int64_t)&g100);
    g18 = 0;
    int64_t v117 = &g29; // 0x4028fd
    int64_t v118 = *v110; // 0x4028fd
    int64_t v119 = *v111; // 0x4028fd
    int64_t v120; // 0x402904
    int64_t v121; // 0x402904
    int64_t v122; // 0x402908
    int64_t v123; // 0x402923
    if (v70 > (int64_t)&g29) {
        v120 = 8 * v117;
        v121 = *(int64_t *)(v120 + v94);
        v122 = *(int64_t *)(v120 + v69);
        v123 = v117 + 1;
        *v111 = (int64_t)0;
        *(int64_t *)(v74 - 24) = v113;
        *(int64_t *)(v74 - 32) = (int64_t)g72;
        function_404a40(&g56, &g65, v122, v121, 0, 0, (int64_t)&g100, (int64_t)&g100, (int64_t)&g100);
        v118 = v121;
        v119 = v122;
        while (v70 > v123) {
            // 0x402900
            v120 = 8 * v123;
            v121 = *(int64_t *)(v120 + v94);
            v122 = *(int64_t *)(v120 + v69);
            v123++;
            *v111 = (int64_t)g18;
            *(int64_t *)(v74 - 24) = v113;
            *(int64_t *)(v74 - 32) = (int64_t)g72;
            function_404a40(&g56, &g65, v122, v121, 0, 0, (int64_t)&g100, (int64_t)&g100, (int64_t)&g100);
            v118 = v121;
            v119 = v122;
        }
    }
    int64_t v124 = function_404c00(&g56, &g65, v119, v118, 0, 0); // 0x402948
    while ((int32_t)v124 != -1) {
        // 0x402894
        function_405050(&g56, &g65);
        v112 = g28;
        v113 = (0x100000000 * v124 >> 32) - 1;
        g68 = 0;
        v114 = 8 * v112;
        v115 = *(int64_t *)(v114 + v94);
        v116 = *(int64_t *)(v114 + v69);
        *v110 = v112;
        *v111 = (int64_t)g18;
        function_4047a0(&g56, &g65, v116, v115 + 1, 0, 0, (int64_t)&g100);
        g18 = 0;
        v117 = &g29;
        v118 = *v110;
        v119 = *v111;
        if (v70 > (int64_t)&g29) {
            v120 = 8 * v117;
            v121 = *(int64_t *)(v120 + v94);
            v122 = *(int64_t *)(v120 + v69);
            v123 = v117 + 1;
            *v111 = (int64_t)0;
            *(int64_t *)(v74 - 24) = v113;
            *(int64_t *)(v74 - 32) = (int64_t)g72;
            function_404a40(&g56, &g65, v122, v121, 0, 0, (int64_t)&g100, (int64_t)&g100, (int64_t)&g100);
            v118 = v121;
            v119 = v122;
            while (v70 > v123) {
                // 0x402900
                v120 = 8 * v123;
                v121 = *(int64_t *)(v120 + v94);
                v122 = *(int64_t *)(v120 + v69);
                v123++;
                *v111 = (int64_t)g18;
                *(int64_t *)(v74 - 24) = v113;
                *(int64_t *)(v74 - 32) = (int64_t)g72;
                function_404a40(&g56, &g65, v122, v121, 0, 0, (int64_t)&g100, (int64_t)&g100, (int64_t)&g100);
                v118 = v121;
                v119 = v122;
            }
        }
        // 0x40293e
        v124 = function_404c00(&g56, &g65, v119, v118, 0, 0);
    }
    // 0x402a21
    g46 = g47;
    // 0x402334
    return g47;
}
// Address range: 0x402de0 - 0x402e0b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402de0
    int64_t v1; // 0x402de0
    __libc_start_main(0x402030, (int32_t)a4, (char **)&v1, (void (*)())0x40bc10, (void (*)())0x40bc70, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x402e0b - 0x402e2a
int64_t function_402e0b(void) {
    // 0x402e0b
    return &g30;
}
// Address range: 0x402e2a - 0x402e61
int64_t function_402e2a(void) {
    // 0x402e2a
    return 0;
}
// Address range: 0x402e61 - 0x402eb8
int64_t function_402e61(void) {
    // 0x402e61
    if (g36 != 0) {
        // 0x402eb7
        int64_t result; // 0x402e61
        return result;
    }
    int64_t v1 = g37; // 0x402e94
    int64_t result2; // 0x402ea6
    if (g37 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x402ea6
        result2 = function_402e0b();
        g36 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x402e96
        v1++;
    }
    // 0x402e8a
    g37 = v1;
    // 0x402ea6
    result2 = function_402e0b();
    g36 = 1;
    return result2;
}
// Address range: 0x402eb8 - 0x402ebd
int64_t function_402eb8(void) {
    // 0x402eb8
    return function_402e2a();
}
// Address range: 0x402ec0 - 0x402ec1
int64_t function_402ec0(void) {
    // 0x402ec0
    int64_t result; // 0x402ec0
    return result;
}
// Address range: 0x402ed0 - 0x402ef7
int64_t function_402ed0(void) {
    int64_t result = 0x7fffffff; // 0x402edb
    if (g16 != 0x7fffffff) {
        // 0x402edd
        g16 = &g17;
        result = &g17;
    }
    // 0x402eec
    g48 = 1;
    return result;
}
// Address range: 0x402f00 - 0x402f2a
int64_t function_402f00(int64_t a1) {
    // 0x402f00
    error(1, (int32_t)"environment is too large for exec" ^ (int32_t)"environment is too large for exec", dcgettext(NULL, "environment is too large for exec", 5));
    return &g100;
}
// Address range: 0x402f30 - 0x40319f
int64_t function_402f30(int64_t a1, uint32_t a2) {
    // 0x402f30
    int64_t result; // 0x402f30
    if (g52 == 0) {
        // 0x402fa2
        return result;
    }
    int64_t v1 = 0; // 0x402f63
    int32_t options; // 0x402f30
    int32_t result2; // 0x402f8c
    while (true) {
        // 0x402f68
        g48 = 0;
        int64_t v2 = (a1 ^ 1) & (int64_t)(v1 >= (int64_t)a2); // 0x402f7e
        int32_t * v3; // 0x402f30
        int64_t v4; // 0x402f30
        int32_t stat_loc; // bp-60, 0x402f30
        int64_t v5; // 0x402f30
        while (true) {
            int64_t v6 = v2;
            options = v6;
            while (true) {
                // 0x402f80
                result2 = waitpid(-1, &stat_loc, options);
                if (result2 == -1) {
                    int32_t * err_num = __errno_location(); // 0x402fb8
                    if (*err_num != 4) {
                        // 0x402fc5
                        error(1, *err_num, dcgettext(NULL, "error waiting for child process", 5));
                    }
                    // 0x402fe8
                    if (g48 != 0) {
                        // break -> 0x402ff2
                        break;
                    }
                } else {
                    if (result2 == 0) {
                        // break (via goto) -> 0x402f9a
                        goto lab_0x402f9a;
                    }
                    // 0x403000
                    if (g50 != 0) {
                        uint64_t v7 = (int64_t)g50; // 0x403000
                        v5 = (int64_t)g51;
                        v4 = 0;
                        if (*g51 == result2) {
                            // break (via goto) -> 0x403040
                            goto lab_0x403040_3;
                        }
                        int64_t v8 = 1; // 0x40302d
                        while (v8 < v7) {
                            int32_t * v9 = (int32_t *)(4 * v8 + v5);
                            int64_t v10 = v8; // 0x40302b
                            v3 = v9;
                            if (*v9 == result2) {
                                goto lab_0x403040_2;
                            }
                            v8 = v10 + 1 & 0xffffffff;
                        }
                        // 0x403038
                        v4 = v8;
                        if (v8 != v7) {
                            // break (via goto) -> 0x403040
                            goto lab_0x403040_3;
                        }
                    }
                }
            }
            // 0x402ff2
            v2 = (char)a1 == 0 ? 1 : v6 & 0xffffffff;
        }
      lab_0x403040_3:
        // 0x403040
        v3 = (int32_t *)(4 * v4 + v5);
      lab_0x403040_2:
        // 0x403040
        *v3 = 0;
        g52--;
        int32_t v11 = stat_loc; // 0x40305f
        if ((stat_loc & 0xff00) == 0xff00) {
            // 0x403127
            error(124, (int32_t)"%s: exited with status 255; aborting" ^ (int32_t)"%s: exited with status 255; aborting", dcgettext(NULL, "%s: exited with status 255; aborting", 5));
            v11 = stat_loc;
        }
        int32_t v12 = v11; // 0x403068
        if ((char)v11 == 127) {
            // 0x4030e2
            error(125, (int32_t)"%s: stopped by signal %d" ^ (int32_t)"%s: stopped by signal %d", dcgettext(NULL, "%s: stopped by signal %d", 5));
            v12 = stat_loc;
        }
        int64_t v13 = v12;
        int64_t v14 = v13 % 128 + 1; // 0x40306f
        int64_t v15 = v14; // 0x403074
        int64_t v16 = v13; // 0x403074
        if ((char)v14 >= 2) {
            // 0x403076
            error(125, (int32_t)"%s: terminated by signal %d" ^ (int32_t)"%s: terminated by signal %d", dcgettext(NULL, "%s: terminated by signal %d", 5));
            v15 = &g100;
            v16 = stat_loc;
        }
        // 0x4030b6
        if ((char)(v16 / 256) != 0) {
            // 0x4030bb
            g47 = 123;
        }
        // 0x4030c5
        v1 = v1 + 1 & 0xffffffff;
        result = v15;
        if (g52 == 0) {
            // 0x402fa2
            return result;
        }
    }
  lab_0x402f9a:
    // 0x402f9a
    if (options != 0) {
        // 0x402fa2
        return result2;
    }
    // 0x403166
    error(0, (int32_t)"WARNING: Lost track of %lu child processes" ^ (int32_t)"WARNING: Lost track of %lu child processes", dcgettext(NULL, "WARNING: Lost track of %lu child processes", 5));
    return &g100;
}
// Address range: 0x4031a0 - 0x4032b0
int64_t function_4031a0(int64_t a1) {
    int32_t v1 = g50; // 0x4031ad
    int64_t v2 = v1; // 0x4031ad
    int32_t * v3 = g51; // 0x4031b4
    int64_t v4 = (int64_t)v3; // 0x4031b4
    int64_t v5; // 0x4031a0
    int64_t v6; // 0x4031a0
    int64_t v7; // 0x4031a0
    int64_t v8; // 0x4031a0
    int64_t v9; // 0x4031a0
    int64_t v10; // 0x4031a0
    int32_t * v11; // 0x4031a0
    int32_t v12; // 0x4031a0
    int64_t v13; // 0x4031a0
    if (v1 == 0) {
        // 0x40321c
        v9 = 0;
        v12 = 32;
        v10 = 0;
        v13 = 128;
        if (v3 == NULL) {
            goto lab_0x403238;
        } else {
            goto lab_0x403225;
        }
    } else {
        // 0x4031c0
        v11 = v3;
        v7 = 0;
        if (*v3 == 0) {
            goto lab_0x4031fd;
        } else {
            int64_t v14 = 1; // 0x4031da
            int64_t v15 = 4 * v14; // 0x4031e0
            while (v14 < v2) {
                int32_t * v16 = (int32_t *)(v15 + v4);
                v11 = v16;
                v7 = v14;
                if (*v16 == 0) {
                    goto lab_0x4031fd;
                }
                v14 = v14 + 1 & 0xffffffff;
                v15 = 4 * v14;
            }
            // 0x4031ed
            v5 = v4;
            v8 = v15;
            v6 = v14;
            v9 = v15;
            if (v14 == v2) {
                goto lab_0x403225;
            } else {
                goto lab_0x4031ef;
            }
        }
    }
  lab_0x4031fd:
    // 0x4031fd
    *v11 = (int32_t)a1;
    g52++;
    g53 = 1;
    return v7 & 0xffffffff;
  lab_0x403238:
    // 0x403238
    g50 = v12;
    int64_t v17 = function_4096d0(v4, v13); // 0x403242
    g51 = (int32_t *)v17;
    v5 = v17;
    v8 = v10;
    v6 = v2;
    if (v1 < g50) {
        int64_t v18 = v2; // 0x40325c
        *(int32_t *)(4 * v18 + v17) = 0;
        v18 = v18 + 1 & 0xffffffff;
        v5 = v17;
        v8 = v10;
        v6 = v2;
        while (v18 < (int64_t)g50) {
            // 0x403260
            *(int32_t *)(4 * v18 + v17) = 0;
            v18 = v18 + 1 & 0xffffffff;
            v5 = v17;
            v8 = v10;
            v6 = v2;
        }
    }
    goto lab_0x4031ef;
  lab_0x403225:;
    int64_t v20 = v2 + 1 + v2 / 2; // 0x40322b
    v12 = v20;
    v10 = v9;
    v13 = 4 * v20;
    goto lab_0x403238;
  lab_0x4031ef:;
    int32_t * v19 = (int32_t *)(v8 + v5); // 0x4031f3
    v11 = v19;
    v7 = v6;
    if (*v19 != 0) {
        // 0x40328f
        __assert_fail("0 == pids[i]", "xargs.c", 1420, "add_proc");
        return &g100;
    }
    goto lab_0x4031fd;
}
// Address range: 0x4032b0 - 0x40356b
int64_t function_4032b0(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4032dc
    fprintf(stream, dcgettext(NULL, "Usage: %s [OPTION]... COMMAND [INITIAL-ARGS]...\n", 5));
    fputs(dcgettext(NULL, "Run COMMAND with arguments INITIAL-ARGS and more arguments read from input.\n\n", 5), stream);
    fputs(dcgettext(NULL, "Mandatory and optional arguments to long options are also\nmandatory or optional for the corresponding short option.\n", 5), stream);
    fputs(dcgettext(NULL, "  -0, --null                   items are separated by a null, not whitespace;\n                                 disables quote and backslash processing and\n                                 logical EOF processing\n", 5), stream);
    fputs(dcgettext(NULL, "  -a, --arg-file=FILE          read arguments from FILE, not standard input\n", 5), stream);
    fputs(dcgettext(NULL, "  -d, --delimiter=CHARACTER    items in input stream are separated by CHARACTER,\n                                 not by whitespace; disables quote and backslash\n                                 processing and logical EOF processing\n", 5), stream);
    fputs(dcgettext(NULL, "  -E END                       set logical EOF string; if END occurs as a line\n                                 of input, the rest of the input is ignored\n                                 (ignored if -0 or -d was specified)\n", 5), stream);
    fputs(dcgettext(NULL, "  -e, --eof[=END]              equivalent to -E END if END is specified;\n                                 otherwise, there is no end-of-file string\n", 5), stream);
    fputs(dcgettext(NULL, "  -I R                         same as --replace=R\n", 5), stream);
    fputs(dcgettext(NULL, "  -i, --replace[=R]            replace R in INITIAL-ARGS with names read\n                                 from standard input; if R is unspecified,\n                                 assume {}\n", 5), stream);
    fputs(dcgettext(NULL, "  -L, --max-lines=MAX-LINES    use at most MAX-LINES non-blank input lines per\n                                 command line\n", 5), stream);
    fputs(dcgettext(NULL, "  -l[MAX-LINES]                similar to -L but defaults to at most one non-\n                                 blank input line if MAX-LINES is not specified\n", 5), stream);
    fputs(dcgettext(NULL, "  -n, --max-args=MAX-ARGS      use at most MAX-ARGS arguments per command line\n", 5), stream);
    fputs(dcgettext(NULL, "  -P, --max-procs=MAX-PROCS    run at most MAX-PROCS processes at a time\n", 5), stream);
    fputs(dcgettext(NULL, "  -p, --interactive            prompt before running commands\n", 5), stream);
    fputs(dcgettext(NULL, "      --process-slot-var=VAR   set environment variable VAR in child processes\n", 5), stream);
    fputs(dcgettext(NULL, "  -r, --no-run-if-empty        if there are no arguments, then do not run COMMAND;\n                                 if this option is not given, COMMAND will be\n                                 run at least once\n", 5), stream);
    fputs(dcgettext(NULL, "  -s, --max-chars=MAX-CHARS    limit length of command line to MAX-CHARS\n", 5), stream);
    fputs(dcgettext(NULL, "      --show-limits            show limits on command-line length\n", 5), stream);
    fputs(dcgettext(NULL, "  -t, --verbose                print commands before executing them\n", 5), stream);
    fputs(dcgettext(NULL, "  -x, --exit                   exit if the size (see -s) is exceeded\n", 5), stream);
    fputs(dcgettext(NULL, "      --help                   display this help and exit\n", 5), stream);
    fputs(dcgettext(NULL, "      --version                output version information and exit\n", 5), stream);
    return fputs(dcgettext(NULL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5), stream);
}
// Address range: 0x403570 - 0x4036b2
int64_t function_403570(int64_t str, int64_t a2, int32_t result, int64_t result3, int64_t a5) {
    // 0x403570
    char * endptr; // bp-48, 0x403570
    int32_t str_as_l = strtol((char *)str, &endptr, 10); // 0x403595
    if ((int64_t)endptr != str) {
        // 0x4035a8
        if (*endptr == 0) {
            if (str_as_l < result) {
                // 0x403610
                fprintf(g35, dcgettext(NULL, "%s: value for -%c option should be >= %ld\n", 5));
                if ((int32_t)a5 == 0) {
                    // 0x4035fe
                    return result;
                }
                // 0x40369c
                function_4032b0((int64_t)g35);
                exit(1);
                // UNREACHABLE
            }
            int64_t result2 = str_as_l; // 0x403595
            if (result3 > -1 != result2 > result3) {
                // 0x4035fe
                return result2;
            }
            // 0x4035c0
            fprintf(g35, dcgettext(NULL, "%s: value for -%c option should be <= %ld\n", 5));
            if ((int32_t)a5 == 0) {
                // 0x4035fe
                return result3;
            }
            // 0x40369c
            function_4032b0((int64_t)g35);
            exit(1);
            // UNREACHABLE
        }
    }
    // 0x403657
    fprintf(g35, dcgettext(NULL, "%s: invalid number for -%c option\n", 5));
    function_4032b0((int64_t)g35);
    exit(1);
    // UNREACHABLE
}
// Address range: 0x4036c0 - 0x403718
int64_t function_4036c0(int64_t a1, int64_t a2) {
    // 0x4036c0
    int64_t v1; // 0x4036c0
    int32_t fd = function_405410(a1, 0, v1); // 0x4036d5
    if (fd < 0) {
        // 0x4036ef
        return 0;
    }
    struct _IO_FILE * v2 = fdopen(fd, "r"); // 0x4036e2
    if (v2 == NULL) {
        int32_t * v3 = __errno_location(); // 0x403700
        close(fd);
    }
    // 0x4036ef
    return (int64_t)v2;
}
// Address range: 0x403720 - 0x40373b
int64_t function_403720(void) {
    int32_t result = g16; // 0x403729
    if (g16 >= 2) {
        // 0x40372b
        result = g16 - 1;
        g16 = result;
    }
    // 0x40373a
    return result;
}
// Address range: 0x403740 - 0x403782
int64_t function_403740(void) {
    // 0x403740
    if (g60 != NULL || g18 != 0) {
        // 0x40374a
        int64_t result; // 0x403740
        return result;
    }
    // 0x403759
    if (g65 == g61) {
        // 0x40374a
        return g61;
    }
    uint32_t result2 = *(int32_t *)&g56; // 0x403769
    if (result2 != 0) {
        // 0x40374a
        return result2;
    }
    // 0x403773
    int64_t v1; // 0x403740
    return function_404c00(&g56, &g65, v1, v1, v1, v1);
}
// Address range: 0x403790 - 0x4038ae
int64_t function_403790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403790
    if (g41 != 0) {
        // 0x403849
        return 0xffffffff;
    }
    int64_t v1 = (int64_t)g72; // 0x40379f
    int32_t v2 = _IO_getc(g73); // 0x4037d7
    int32_t v3 = v2; // 0x4037e1
    int64_t v4 = v1; // 0x4037e1
    int64_t v5; // 0x403790
    int64_t v6; // 0x403790
    if (v2 == -1) {
      lab_0x403820:;
        int64_t v7 = (int64_t)g72; // 0x403820
        g41 = 1;
        if (v4 == v7) {
            // 0x403849
            return 0xffffffff;
        }
        // 0x403833
        *(char *)v4 = 0;
        v5 = v4;
        v6 = v7;
    } else {
        int64_t v8 = v1;
        while (v3 != (int32_t)*(char *)&g43) {
            if (v8 >= g58 + -1 - g69 + v1) {
                // 0x4037f3
                function_403740();
                error(1, (int32_t)"argument line too long" ^ (int32_t)"argument line too long", dcgettext(NULL, "argument line too long", 5));
            }
            int64_t v9 = v8 + 1; // 0x4037c8
            *(char *)v8 = (char)v3;
            v3 = _IO_getc(g73);
            v4 = v9;
            if (v3 == -1) {
                goto lab_0x403820;
            }
            v8 = v9;
        }
        // 0x403858
        g70++;
        *(char *)v8 = 0;
        v5 = v8;
        v6 = (int64_t)g72;
    }
    int64_t v10 = v5 + 1 - v6; // 0x40383a
    int64_t result = v10 & 0xffffffff; // 0x403845
    if (g60 != NULL) {
        // 0x403849
        return result;
    }
    // 0x403870
    function_4047a0(&g56, &g65, v6, 0x100000000 * v10 >> 32, 0, 0, (int64_t)g18);
    return result;
}
// Address range: 0x4038b0 - 0x403ebb
int64_t function_4038b0(void) {
    // 0x4038b0
    if (g38 != 0) {
      lab_0x403b0f:
        // 0x403b15
        return 0xffffffff;
    }
    int64_t v1 = (int64_t)g72; // 0x4038c5
    int64_t v2; // bp-72, 0x4038b0
    int64_t v3 = &v2; // 0x4038ba
    int32_t v4 = _IO_getc(g73); // 0x403976
    int64_t v5 = v1; // 0x403981
    int64_t v6 = 1; // 0x403981
    int32_t v7; // 0x4038b0
    int32_t v8; // 0x4038b0
    int64_t v9; // 0x4038b0
    int64_t v10; // 0x4038b0
    int64_t v11; // 0x4038b0
    int64_t v12; // 0x4038b0
    int64_t v13; // 0x4038b0
    int64_t v14; // 0x4038b0
    int64_t v15; // 0x4038b0
    int64_t v16; // 0x4038b0
    int64_t v17; // 0x4038b0
    int64_t v18; // 0x4038b0
    int64_t v19; // 0x4038b0
    int64_t v20; // 0x4038b0
    int64_t v21; // 0x4038b0
    int64_t v22; // 0x4038b0
    int64_t v23; // 0x4038b0
    int64_t v24; // 0x4038b0
    int64_t v25; // 0x4038b0
    int64_t v26; // 0x4038b0
    int64_t v27; // 0x4038b0
    int64_t v28; // 0x4038b0
    uint64_t v29; // 0x4038d7
    int64_t * v30; // 0x4038b0
    char * v31; // 0x4038b0
    int32_t * v32; // 0x4038b0
    if (v4 == -1) {
        goto lab_0x403d50;
    } else {
        // 0x403987
        v29 = g58 + -1 - g69 + v1;
        v30 = (int64_t *)(v3 - 16);
        v31 = (char *)(v3 + 15);
        v32 = (int32_t *)(v3 + 8);
        v7 = v4;
        v13 = 0;
        v9 = 1;
        v21 = -1;
        v26 = v1;
        while (true) {
          lab_0x403987:;
            int64_t v33 = v26;
            int64_t v34 = v21;
            int64_t v35 = v9;
            int64_t v36 = v13;
            uint32_t v37 = v7;
            int64_t v38 = v37;
            v28 = v33;
            v22 = v34;
            v15 = v36;
            v19 = v38;
            if (v35 == 1) {
                goto lab_0x403a4d;
            } else {
                // 0x403991
                v23 = v33;
                v20 = v34;
                v10 = v36;
                v16 = v38;
                if (v35 != 2) {
                    goto lab_0x403910;
                } else {
                    // 0x40399b
                    v25 = v33;
                    v11 = v36;
                    v17 = 10;
                    if (v37 == 10) {
                        goto lab_0x403bdd;
                    } else {
                        // 0x40399b
                        v8 = *v32;
                        v27 = v33;
                        v14 = v36;
                        v18 = v38;
                        goto lab_0x4039a5;
                    }
                }
            }
        }
      lab_0x403b80_4:;
        int64_t v39 = (int64_t)g72; // 0x403b80
        g38 = 1;
        if (v24 == v39) {
            // 0x403b15
            return 0xffffffff;
        }
        // 0x403b97
        *(char *)v24 = 0;
        v12 = v24 + 1 - v39 & 0xffffffff;
        goto lab_0x403d7b;
    }
  lab_0x403d50:;
    int64_t v40 = (int64_t)g72; // 0x403d50
    g38 = 1;
    if (v5 == v40) {
        // 0x403b15
        return 0xffffffff;
    }
    // 0x403d67
    *(char *)v5 = 0;
    int64_t v41 = v5 + 1 - v40 & 0xffffffff; // 0x403d6e
    v12 = v41;
    int32_t * v42; // 0x4038b0
    int64_t v43; // 0x4038b0
    if ((int32_t)v6 == 2) {
        // 0x403d67
        v42 = (int32_t *)(v3 + 8);
        v43 = v41;
        goto lab_0x403e60;
    } else {
        goto lab_0x403d7b;
    }
  lab_0x403a4d:;
    int64_t v44 = v28;
    int64_t v45 = v22; // 0x403a54
    int64_t v46 = v19; // 0x403a54
    int64_t v47 = v22; // 0x403a54
    int64_t v48 = v19; // 0x403a54
    if ((v19 & 0xffffff80) != 0) {
        goto lab_0x403a97;
    } else {
        goto lab_0x403a56;
    }
  lab_0x403a97:;
    int64_t v49 = v48;
    int32_t v50 = v49;
    int64_t v51 = v49; // 0x403a9e
    int64_t v52; // 0x4038b0
    int64_t v53; // 0x4038b0
    int64_t v54; // 0x4038b0
    int64_t v55; // 0x4038b0
    int64_t v56; // 0x4038b0
    if (v50 < 13) {
        goto lab_0x403a73;
    } else {
        // 0x403aa0
        v55 = v44;
        v53 = v49;
        v56 = v44;
        v54 = v47;
        v52 = v15;
        if (v50 != 10) {
            goto lab_0x40391a;
        } else {
            goto lab_0x403aaa;
        }
    }
  lab_0x403a56:;
    int64_t v57 = v46;
    unsigned char v58 = *(char *)((0x100000000 * v57 >> 31) + (int64_t)*__ctype_b_loc()); // 0x403a61
    v51 = v57;
    if (v58 % 2 != 0) {
        goto lab_0x403a73;
    } else {
        int32_t v59 = v57; // 0x403a67
        v51 = v57;
        v47 = v45;
        v48 = v57;
        if (v59 != 10 == (v59 != 13)) {
            goto lab_0x403a97;
        } else {
            goto lab_0x403a73;
        }
    }
  lab_0x403910:
    // 0x403910
    v55 = v23;
    v53 = v16;
    v56 = v23;
    v54 = v20;
    v52 = v10;
    if (v16 == 10) {
        goto lab_0x403aaa;
    } else {
        goto lab_0x40391a;
    }
  lab_0x403a73:;
    int32_t v60 = _IO_getc(g73); // 0x403a7a
    v24 = v44;
    if (v60 == -1) {
        // break -> 0x403b80
        goto lab_0x403b80_4;
    }
    int64_t v61 = v60; // 0x403a7a
    int64_t v62 = 0x100000000 * v51 >> 32; // 0x403a88
    int64_t v63 = v61 & 0xffffffff; // 0x403a8b
    v45 = v62;
    v46 = v63;
    v47 = v62;
    v48 = v63;
    if ((v61 & 0xffffff80) == 0) {
        goto lab_0x403a56;
    } else {
        goto lab_0x403a97;
    }
  lab_0x403aaa:;
    int64_t v64 = v52;
    int64_t v65 = v54;
    int64_t v66 = v56;
    if ((v65 & 0xffffff80) == 0) {
        // 0x403d00
        if (*(char *)(2 * v65 + (int64_t)*__ctype_b_loc()) % 2 != 0) {
            goto lab_0x403abe;
        } else {
            // 0x403ab6
            g70++;
            goto lab_0x403abe;
        }
    } else {
        // 0x403ab6
        g70++;
        goto lab_0x403abe;
    }
  lab_0x40391a:;
    int64_t v67 = v53;
    int64_t v68 = v55;
    int64_t v69; // 0x4038b0
    if (g60 == NULL) {
        if ((v67 & 0xffffff80) != 0) {
            goto lab_0x403928;
        } else {
            int16_t ** v70 = __ctype_b_loc(); // 0x403c55
            int64_t v71 = 0x100000000 * v67;
            if (*(char *)((v71 >> 31) + (int64_t)*v70) % 2 == 0) {
                goto lab_0x403928;
            } else {
                int64_t v72 = (int64_t)g72; // 0x403c6a
                *(char *)v68 = 0;
                int64_t v73 = v68 + 1 - v72; // 0x403c7f
                if (g54 != NULL) {
                    // 0x403c8a
                    if (*g54 == *g72) {
                        // 0x403c92
                        if (strcmp(g54, g72) == 0) {
                            // 0x403b01
                            v69 = v73 & 0xffffffff;
                            goto lab_0x403b01_2;
                        }
                    }
                }
                // 0x403ca2
                *v30 = (int64_t)g18;
                function_4047a0(&g56, &g65, v72, 0x100000000 * v73 >> 32, 0, 0, (int64_t)&g100);
                uint32_t v74 = _IO_getc(g73); // 0x403cd7
                *v31 = 0;
                int64_t v75 = (int64_t)g72;
                v24 = v75;
                if (v74 == -1) {
                    // break -> 0x403b80
                    goto lab_0x403b80_4;
                }
                // 0x403cec
                v28 = v75;
                v22 = v71 >> 32;
                v15 = 1;
                v19 = v74;
                goto lab_0x403a4d;
            }
        }
    } else {
        goto lab_0x403928;
    }
  lab_0x403bdd:;
    int64_t v76 = v11;
    int64_t v77 = v25;
    function_403740();
    int64_t v78; // 0x4038b0
    int64_t v79; // 0x4038b0
    int64_t v80; // 0x4038b0
    int64_t v81; // 0x4038b0
    int64_t v82; // 0x4038b0
    int64_t v83; // 0x4038b0
    if (*v32 == 34) {
        // 0x403df0
        dcgettext(NULL, "double", 5);
        error(1, (int32_t)"unmatched %s quote; by default quotes are special to xargs unless you use the -0 option" ^ (int32_t)"unmatched %s quote; by default quotes are special to xargs unless you use the -0 option", dcgettext(NULL, "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option", 5));
        v83 = v77;
        v81 = 10;
        v78 = 2;
        v79 = v76;
        goto lab_0x40395f;
    } else {
        // 0x403bf2
        dcgettext(NULL, "single", 5);
        error(1, (int32_t)"unmatched %s quote; by default quotes are special to xargs unless you use the -0 option" ^ (int32_t)"unmatched %s quote; by default quotes are special to xargs unless you use the -0 option", dcgettext(NULL, "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option", 5));
        v83 = v77;
        v81 = 10;
        v78 = 2;
        v79 = v76;
        v82 = v77;
        v80 = v17;
        if (*v32 == 10) {
            goto lab_0x403d20;
        } else {
            goto lab_0x40395f;
        }
    }
  lab_0x4039a5:;
    int64_t v84 = v18;
    int64_t v85 = v27;
    v82 = v85;
    v80 = v84;
    int64_t v86; // 0x4038b0
    int64_t v87; // 0x4038b0
    int64_t v88; // 0x4038b0
    if (v8 == (int32_t)v84) {
        goto lab_0x403d20;
    } else {
        int64_t v89 = 0x100000000 * v84 >> 32; // 0x4039b0
        v83 = v85;
        v81 = v89;
        v78 = 2;
        v79 = v14;
        v88 = v85;
        v86 = 2;
        v87 = v14;
        if ((g55 || (int32_t)v89) != 0) {
            goto lab_0x40395f;
        } else {
            goto lab_0x4039c6;
        }
    }
  lab_0x403928:;
    int32_t v90 = v67;
    int64_t v91; // 0x4038b0
    switch (v90) {
        case 39: {
            goto lab_0x403bb0;
        }
        case 92: {
            int32_t v92 = _IO_getc(g73); // 0x403b6f
            v91 = v92;
            if (v92 == -1) {
                // break -> 0x403b80
                break;
            }
            goto lab_0x403949;
        }
        case 34: {
            goto lab_0x403bb0;
        }
        default: {
            // 0x403946
            v91 = 0x100000000 * v67 >> 32;
            goto lab_0x403949;
        }
    }
  lab_0x403abe:;
    int64_t v93 = (int64_t)g72;
    int64_t v94; // 0x403ae2
    int64_t v95; // 0x403ae5
    if (((char)(v66 != v93) || (char)v64) != 0) {
        // 0x403ad4
        *(char *)v66 = 0;
        v94 = v66 + 1 - v93;
        v95 = v94 & 0xffffffff;
        if (g54 == NULL) {
            goto lab_0x403b30;
        } else {
            // 0x403aed
            if (*g54 != *g72) {
                goto lab_0x403b30;
            } else {
                // 0x403af5
                v69 = v95;
                if (strcmp(g54, g72) != 0) {
                    goto lab_0x403b30;
                } else {
                    goto lab_0x403b01_2;
                }
            }
        }
    }
    uint32_t v96 = _IO_getc(g73); // 0x403a37
    v24 = v66;
    if (v96 == -1) {
        // break -> 0x403b80
        goto lab_0x403b80_4;
    }
    // 0x403a45
    v28 = v66;
    v22 = 10;
    v15 = 0;
    v19 = v96;
    goto lab_0x403a4d;
  lab_0x40395f:;
    int64_t v97 = v83; // 0x403962
    int64_t v98 = v81; // 0x403962
    int64_t v99 = v78; // 0x403962
    int64_t v100 = v79; // 0x403962
    int64_t v101 = v83; // 0x403962
    int64_t v102 = v81; // 0x403962
    int64_t v103 = v78; // 0x403962
    int64_t v104 = v79; // 0x403962
    if (v29 > v83) {
        goto lab_0x403968;
    } else {
        goto lab_0x403a00;
    }
  lab_0x403d20:;
    uint32_t v105 = _IO_getc(g73); // 0x403d2d
    v24 = v82;
    if (v105 == -1) {
        // break -> 0x403b80
        goto lab_0x403b80_4;
    }
    // 0x403d3b
    v23 = v82;
    v20 = 0x100000000 * v80 >> 32;
    v10 = 1;
    v16 = v105;
    goto lab_0x403910;
  lab_0x403bb0:;
    uint32_t v106 = _IO_getc(g73); // 0x403bb7
    if (v106 == -1) {
        int64_t v107 = (int64_t)g72; // 0x403e37
        g38 = 1;
        if (v68 == v107) {
            goto lab_0x403b0f;
        } else {
            // 0x403e4e
            *(char *)v68 = 0;
            *v32 = v90;
            v42 = v32;
            v43 = v68 + 1 - v107 & 0xffffffff;
            goto lab_0x403e60;
        }
    }
    int64_t v108 = v106;
    *v32 = v90;
    v8 = v90;
    v27 = v68;
    v14 = 1;
    v18 = v108;
    v25 = v68;
    v11 = 1;
    v17 = v108;
    if (v106 != 10) {
        goto lab_0x4039a5;
    } else {
        goto lab_0x403bdd;
    }
  lab_0x403968:
    // 0x403968
    *(char *)v97 = (char)v98;
    int64_t v109 = v97 + 1; // 0x40396b
    int32_t v110 = _IO_getc(g73); // 0x403976
    v7 = v110;
    v13 = v100;
    v9 = v99;
    v21 = v98;
    v26 = v109;
    v5 = v109;
    v6 = v99;
    if (v110 == -1) {
        goto lab_0x403d50;
    }
    goto lab_0x403987;
  lab_0x403a00:
    // 0x403a00
    function_403740();
    error(1, (int32_t)"argument line too long" ^ (int32_t)"argument line too long", dcgettext(NULL, "argument line too long", 5));
    v97 = v101;
    v98 = v102;
    v99 = v103;
    v100 = v104;
    goto lab_0x403968;
  lab_0x4039c6:
    // 0x4039c6
    error(0, (int32_t)"WARNING: a NUL character occurred in the input.  It cannot be passed through in the argument list.  Did you mean to use the --null option?" ^ (int32_t)"WARNING: a NUL character occurred in the input.  It cannot be passed through in the argument list.  Did you mean to use the --null option?", dcgettext(NULL, "WARNING: a NUL character occurred in the input.  It cannot be passed through in the argument list.  Did you mean to use the --null option?", 5));
    g55 = 1;
    v101 = v88;
    v102 = 0;
    v103 = v86;
    v104 = v87;
    if (v29 > v88) {
        goto lab_0x403968;
    } else {
        goto lab_0x403a00;
    }
  lab_0x403949:
    // 0x403949
    v83 = v68;
    v81 = v91;
    v78 = 0;
    v79 = 1;
    v88 = v68;
    v86 = 0;
    v87 = 1;
    if ((g55 || (int32_t)v91) == 0) {
        goto lab_0x4039c6;
    } else {
        goto lab_0x40395f;
    }
  lab_0x403d7b:
    // 0x403d7b
    if (*(char *)(v3 + 15) != 0) {
        // 0x403d82
        if (g54 != NULL) {
            // 0x403d8e
            if (*g54 == *g72) {
                // 0x403d9c
                if (strcmp(g54, g72) == 0) {
                    // 0x403b15
                    return 0xffffffff;
                }
            }
        }
    }
    int64_t v111 = v12; // 0x403db1
    if (g60 == NULL) {
        // 0x403db7
        *(int64_t *)(v3 - 16) = (int64_t)g18;
        function_4047a0(&g56, &g65, (int64_t)g72, 0x100000000 * v12 >> 32, 0, 0, (int64_t)&g100);
        v111 = v12;
    }
  lab_0x403b15:
    // 0x403b15
    return v111 & 0xffffffff;
  lab_0x403e60:
    // 0x403e60
    function_403740();
    if (*v42 == 34) {
        // 0x403eaa
        dcgettext(NULL, "double", 5);
    } else {
        // 0x403e71
        dcgettext(NULL, "single", 5);
    }
    // 0x403e80
    error(1, (int32_t)"unmatched %s quote; by default quotes are special to xargs unless you use the -0 option" ^ (int32_t)"unmatched %s quote; by default quotes are special to xargs unless you use the -0 option", dcgettext(NULL, "unmatched %s quote; by default quotes are special to xargs unless you use the -0 option", 5));
    v12 = v43;
    goto lab_0x403d7b;
  lab_0x403b30:
    // 0x403b30
    v111 = v95;
    if (g60 != NULL) {
        goto lab_0x403b15;
    } else {
        // 0x403b3a
        *v30 = (int64_t)g18;
        function_4047a0(&g56, &g65, v93, 0x100000000 * v94 >> 32, 0, 0, (int64_t)&g100);
        v111 = v95;
        goto lab_0x403b15;
    }
  lab_0x403b01_2:
    // 0x403b01
    g38 = 1;
    v111 = v69;
    if (*v31 == 0) {
        goto lab_0x403b15;
    } else {
        goto lab_0x403b0f;
    }
}
// Address range: 0x403ec0 - 0x404120
int64_t function_403ec0(int64_t a1, int64_t a2) {
    int32_t pid = getpid(); // 0x403ec4
    if (pid != g49) {
        // 0x403f15
        __assert_fail("getpid () == parent", "xargs.c", 1548, "wait_for_proc_all");
        int64_t v1 = 0; // 0x403f3e
        int64_t v2 = (int64_t)"xargs.c"; // 0x403f3e
        if (g65 != 1) {
            int64_t v3 = *(int64_t *)(g66 + 8 * v1); // 0x403f6f
            int64_t v4 = (int64_t)"%s "; // 0x403f7c
            char * format; // 0x403f8a
            uint32_t err_num; // 0x403f9f
            if (fprintf(g35, "%s ", (char *)v3) < 0) {
                // 0x403f7e
                format = dcgettext(NULL, "Failed to write to stderr", 5);
                err_num = *__errno_location();
                error(1, err_num, format);
                v4 = err_num;
            }
            int64_t v5 = v1 + 1; // 0x403f4f
            v1 = v5;
            v2 = v4;
            while (g65 - 1 > v5) {
                // 0x403f5c
                v3 = *(int64_t *)(g66 + 8 * v1);
                v4 = (int64_t)"%s ";
                if (fprintf(g35, "%s ", (char *)v3) < 0) {
                    // 0x403f7e
                    format = dcgettext(NULL, "Failed to write to stderr", 5);
                    err_num = *__errno_location();
                    error(1, err_num, format);
                    v4 = err_num;
                }
                // 0x403f48
                v5 = v1 + 1;
                v1 = v5;
                v2 = v4;
            }
        }
        if ((char)"getpid () == parent" == 0) {
            // 0x404080
            _IO_putc(10, g35);
            return 0;
        }
        // 0x403fb9
        if (g40 == NULL) {
            int64_t v6 = function_4036c0((int64_t)"/dev/tty", v2); // 0x4040d5
            g40 = (struct _IO_FILE *)v6;
            if (v6 == 0) {
                // 0x4040ea
                error(1, *__errno_location(), dcgettext(NULL, "failed to open /dev/tty for reading", 5));
            }
        }
        // 0x403fc7
        fwrite((int64_t *)"?...", 1, 4, g35);
        if ((int32_t)function_409e80((int64_t)g35, 1) != 0) {
            // 0x404048
            error(1, *__errno_location(), dcgettext(NULL, "Failed to write to stderr", 5));
        }
        uint32_t v7 = _IO_getc(g40); // 0x403ff9
        int64_t v8 = v7; // 0x403ffe
        int64_t v9 = v8; // 0x403ec0
        switch (v7) {
            default: {
                int32_t v10 = _IO_getc(g40); // 0x40401f
                while (v10 != -1 == (v10 != 10)) {
                    // 0x404018
                    v10 = _IO_getc(g40);
                }
                // 0x40402e
                v9 = v10;
            }
            case 10: {
            }
            case -1: {
                int64_t v11 = v9; // 0x404031
                if ((int32_t)v9 == -1) {
                    // 0x4040a0
                    error(1, *__errno_location(), dcgettext(NULL, "Failed to read from stdin", 5));
                    v11 = &g100;
                }
                // 0x404033
                return v11 & -256 | (int64_t)((v8 & 0xffffffdf) == 89);
            }
        }
    }
    // 0x403ed1
    if (g39 != 0) {
        // 0x403eda
        return pid;
    }
    // 0x403ee0
    g39 = 1;
    function_402f30(1, 0);
    g39 = 0;
    if (g46 == g47) {
        // 0x403eda
        return g47;
    }
    // 0x403f0a
    _exit(g47);
    // UNREACHABLE
}
// Address range: 0x404120 - 0x404572
int64_t function_404120(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * exec_argv[1]; // 0x4044b8
    int32_t fds[2]; // 0x404194
    int64_t v1 = 0; // 0x404137
    if (g16 != 0) {
        int64_t v2 = g16; // 0x404139
        v1 = v2;
        if (g52 >= v2) {
            function_402f30(0, 1);
            int64_t v3 = g16; // 0x40415c
            v1 = v3;
            while (g52 >= v3) {
                // 0x404150
                function_402f30(0, 1);
                v3 = g16;
                v1 = v3;
            }
        }
    }
    // 0x40416c
    if ((char)v1 == 0 == (g44 != 0)) {
        // 0x404273
        return 1;
    }
    // 0x404186
    function_402f30(0, 0);
    int32_t fd2; // bp-60, 0x404120
    fds[0] = &fd2;
    if (pipe(fds) != 0) {
        // 0x4042a8
        error(1, *__errno_location(), dcgettext(NULL, "could not create pipe before fork", 5));
    }
    // 0x4041a1
    int32_t fd3; // 0x404120
    function_409d40(fd3, 2, 1, a4);
    int32_t v4 = fork(); // 0x4041e0
    int64_t v5 = v4; // 0x4041e5
    int64_t v6 = 2; // 0x4041e9
    int32_t pid = v4; // 0x4041e9
    int64_t v7 = v5; // 0x4041e9
    if (v4 < 0) {
        int32_t v8 = *__errno_location(); // 0x4041c5
        v6 = 2;
        pid = v4;
        v7 = v5;
        if (v8 == 11 && g52 != 0) {
            function_402f30(0, 1);
            int32_t v9 = fork(); // 0x4041e0
            int64_t v10 = v9; // 0x4041e5
            v6 = 1;
            pid = v9;
            v7 = v10;
            while (v9 < 0) {
                int32_t v11 = *__errno_location(); // 0x4041c5
                v6 = 1;
                pid = v9;
                v7 = v10;
                if (v11 != 11 || g52 == 0) {
                    // break -> 0x4041eb
                    break;
                }
                function_402f30(0, 1);
                v9 = fork();
                v10 = v9;
                v6 = 1;
                pid = v9;
                v7 = v10;
            }
        }
    }
    int64_t v12 = 1; // 0x404120
    int64_t v13 = v6; // 0x404120
    int64_t v14; // 0x404120
    int64_t stat_loc; // bp-52, 0x404120
    int32_t * err_num2; // 0x404402
    switch (pid) {
        case -1: {
            char * format = dcgettext(NULL, "cannot fork", 5); // 0x40439f
            uint32_t err_num = *__errno_location(); // 0x4043b4
            error(1, err_num, format);
            v12 = (int64_t)format;
            v13 = err_num;
        }
        case 0: {
            // 0x4043bd
            close(fd2);
            g47 = 0;
            function_405550((int64_t)fd2, v13, v12);
            int64_t v15 = function_4031a0(0); // 0x4043d7
            int64_t v16 = v15 & 0xffffffff; // 0x4043e5
            int32_t v17 = v15; // 0x4043ec
            int32_t size = snprintf(NULL, 0, "%u", v17) + 1; // 0x4043f1
            int64_t * mem = malloc(size); // 0x4043fa
            err_num2 = __errno_location();
            if (mem == NULL) {
                // 0x404527
                error(0, *err_num2, dcgettext(NULL, "unable to allocate memory", 5));
                v14 = v16;
            } else {
                // 0x404413
                snprintf((char *)mem, size, "%u", v17);
                int64_t v18 = v16; // 0x404432
                if (g42 != NULL) {
                    // 0x404434
                    v18 = v16;
                    if (setenv(g42, (char *)mem, 1) < 0) {
                        // 0x40454b
                        error(0, *err_num2, dcgettext(NULL, "failed to set environment variable %s", 5));
                        v18 = (int64_t)g42;
                    }
                }
                // 0x40444c
                free(mem);
                v14 = v18;
            }
            // break -> 0x404454
            break;
        }
        default: {
            // 0x4041fc
            close(fd3);
            int32_t v19; // bp-64, 0x404120
            int64_t v20 = function_408fe0((int64_t)fd2, (int64_t *)&v19, 4); // 0x404213
            switch (v20) {
                case 4: {
                    // 0x404328
                    close(fd2);
                    waitpid(pid, (int32_t *)&stat_loc, 0);
                    switch (v19) {
                        case 7: {
                            // 0x404273
                            return 0;
                        }
                        case 2: {
                            // 0x404382
                            exit(127);
                            // UNREACHABLE
                        }
                    }
                    // break -> 0x40434d
                    break;
                }
                case -1: {
                    // 0x4042f0
                    close(fd2);
                    char * format2 = dcgettext(NULL, "errno-buffer safe_read failed in xargs_do_exec (this is probably a bug, please report it)", 5); // 0x404305
                    error(0, *__errno_location(), format2);
                    // 0x404265
                    close(fd2);
                    // 0x404273
                    return 1;
                }
                case 0: {
                    // 0x4042e0
                    function_4031a0(v7);
                    // 0x404265
                    close(fd2);
                    // 0x404273
                    return 1;
                }
                default: {
                    char * format3 = dcgettext(NULL, "read returned unexpected value %zu; this is probably a bug, please report it", 5); // 0x404244
                    error(1, *__errno_location(), format3);
                    // 0x404265
                    close(fd2);
                    // 0x404273
                    return 1;
                }
            }
            // 0x40434d
            exit(126);
            // UNREACHABLE
        }
    }
    int64_t file = v14; // 0x40445b
    if (g71 == 0) {
        // 0x4044cb
        stat_loc = 0x6c756e2f7665642f;
        close(0);
        int32_t fd = open((char *)&stat_loc, O_RDONLY); // 0x4044f1
        file = v14;
        if (fd < 0) {
            int64_t v21 = function_408c90(0, 8, (int64_t)&stat_loc); // 0x40450a
            error(0, *err_num2, "%s", (char *)v21);
            file = v21;
        }
    }
    // 0x40445d
    if ((char)function_405070(a4) == 0) {
        // 0x4044b1
        exec_argv[0] = (char *)a4;
        execvp((char *)file, exec_argv);
        if (*err_num2 == 0) {
            goto lab_0x404480;
        } else {
            // 0x40446f
            write(fd3, (int64_t *)err_num2, 4);
            goto lab_0x404480;
        }
    } else {
        // 0x404469
        *err_num2 = 7;
        // 0x40446f
        write(fd3, (int64_t *)err_num2, 4);
        goto lab_0x404480;
    }
  lab_0x404480:
    // 0x404480
    close(fd3);
    int32_t err_num3 = *err_num2; // 0x404489
    if (err_num3 != 7) {
        // 0x404490
        error(0, err_num3, "%s", (char *)file);
        if (*err_num2 == 2) {
            // 0x4044ac
            _exit(127);
            // UNREACHABLE
        }
    }
    // 0x4044ac
    _exit(126);
    // UNREACHABLE
}
// Address range: 0x404580 - 0x4045fa
int64_t function_404580(char * a1) {
    // 0x404580
    int64_t v1; // 0x404580
    function_409e80((int64_t)g35, v1);
    char * v2 = dcgettext(NULL, "Kevin Dalley", 5); // 0x40459f
    char * v3 = dcgettext(NULL, "James Youngman", 5); // 0x4045b3
    function_409550((int64_t)g31, (int64_t)a1, "GNU findutils", (int64_t)g19, (int64_t)dcgettext(NULL, "Eric B. Decker", 5), (int64_t)v3);
    return (int64_t)v2;
}
// Address range: 0x404600 - 0x404700
int64_t function_404600(int64_t a1, int64_t a2, int32_t a3, uint64_t a4) {
    int64_t * v1 = (int64_t *)(a2 + 64); // 0x404600
    uint64_t v2 = *v1; // 0x404600
    int64_t v3; // 0x404600
    int64_t v4; // 0x404600
    if ((char)a3 == 0) {
        int64_t * v5 = (int64_t *)(a2 + 72); // 0x404670
        uint64_t v6 = *v5; // 0x404670
        int64_t v7 = v6; // 0x404677
        if (v6 <= a4 != v6 != 0) {
            // 0x40467e
            *v5 = a4;
            v7 = a4;
        }
        // 0x404682
        if (v2 != 0 == v7 > v2) {
            uint64_t v8 = v7 - v2; // 0x4046e0
            v4 = (v8 == 1 ? -1 : -((v8 / 2))) + a4;
        } else {
            // 0x404690
            v4 = a4 / 2;
        }
        goto lab_0x404696;
    } else {
        if (v2 < a4) {
            // 0x40460d
            *v1 = a4;
            v3 = a4;
            goto lab_0x404612;
        } else {
            // 0x40460d
            v3 = v2;
            if (v2 == 0) {
                goto lab_0x40461f;
            } else {
                goto lab_0x404612;
            }
        }
    }
  lab_0x404696:;
    int64_t v9 = v4;
    int64_t v10 = *(int64_t *)(a1 + 56); // 0x404696
    int64_t result = v9; // 0x40469d
    int64_t v11 = v10; // 0x40469d
    if (v10 == 0) {
        // 0x40469f
        return v9 == 0 ? 1 : v9;
    }
    goto lab_0x40463b;
  lab_0x40463b:;
    uint64_t v12 = v11 + 1; // 0x40463b
    if (v12 < result) {
        // 0x404668
        return result;
    }
    // 0x404644
    return v12 == 0 ? 1 : v12;
  lab_0x404612:;
    uint64_t v13 = *(int64_t *)(a2 + 72); // 0x404612
    if (v13 > v3) {
        uint64_t v14 = v13 - v3; // 0x4046bf
        v4 = (v14 == 1 ? 1 : v14 / 2) + a4;
        goto lab_0x404696;
    } else {
        goto lab_0x40461f;
    }
  lab_0x40461f:;
    int64_t v15 = *(int64_t *)(a1 + 56); // 0x40461f
    int64_t result2 = a4 == -1 ? -1 : a4 + 1; // 0x404632
    result = result2;
    v11 = v15;
    if (v15 == 0) {
        // 0x404668
        return result2;
    }
    goto lab_0x40463b;
}
// Address range: 0x404700 - 0x404703
int64_t function_404700(void) {
    // 0x404700
    return 0;
}
// Address range: 0x404710 - 0x404798
int64_t function_404710(char * name, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * env_val = getenv(name); // 0x404720
    if (env_val == NULL) {
        // 0x404750
        return 0;
    }
    if ((int32_t)(int64_t)env_val == 0) {
        // 0x404750
        int64_t v1; // 0x404710
        return (uint64_t)v1 < a2;
    }
    // 0x404760
    error(1, *__errno_location(), dcgettext(NULL, "Environment variable %s is not set to a valid decimal number", 5));
    return 0;
}
// Address range: 0x4047a0 - 0x404a40
int64_t function_4047a0(int64_t * a1, int64_t * a2, int64_t str3, int64_t a4, int32_t a5, int32_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1;
    if (str3 == 0) {
        // 0x404a1b
        __assert_fail("arg != NULL", "buildcmd.c", 357, "bc_push_arg");
        return &g100;
    }
    int64_t v3 = a6;
    int64_t str = a5;
    int64_t v4 = (int64_t)a2;
    if ((int32_t)a7 == 0) {
        // 0x404950
        *(int32_t *)(v4 + 56) = 1;
        if (str3 != (int64_t)"do_not_care") {
            goto lab_0x4047e6;
        } else {
            goto lab_0x404964;
        }
    } else {
        if (str3 == (int64_t)"do_not_care") {
            goto lab_0x404964;
        } else {
            goto lab_0x4047e6;
        }
    }
  lab_0x4047e6:;
    int64_t * v5 = (int64_t *)(v4 + 32);
    int64_t v6; // 0x4047a0
    if (v3 + a4 + *v5 > *(int64_t *)(v1 + 24)) {
        if ((int32_t)a7 != 0) {
            goto lab_0x4049d0;
        } else {
            // 0x4047fe
            if (*(int64_t *)(v1 + 56) == v4) {
                goto lab_0x4049d0;
            } else {
                // 0x40480b
                if (*(int64_t *)(v1 + 48) == 0) {
                    // 0x4049a0
                    v6 = str3;
                    if (*(int32_t *)&v2 == 0) {
                        // 0x404838
                        function_404c00(a1, a2, str3, a4, str, v3);
                        goto lab_0x404843;
                    } else {
                        goto lab_0x4049ab;
                    }
                } else {
                    goto lab_0x404816;
                }
            }
        }
    } else {
        goto lab_0x404843;
    }
  lab_0x404964:;
    uint64_t v7 = *(int64_t *)(v4 + 16); // 0x404967
    int64_t v8 = *(int64_t *)(v4 + 8); // 0x40496b
    int64_t v9 = v8; // 0x404972
    int64_t v10 = v7; // 0x404972
    int64_t v11 = v8; // 0x404972
    int64_t v12 = v4; // 0x404972
    if (v7 <= v4) {
        goto lab_0x404881;
    } else {
        goto lab_0x404978;
    }
  lab_0x404843:;
    int64_t v13 = a4; // 0x404849
    if ((int32_t)a7 != 0) {
        goto lab_0x404860;
    } else {
        int64_t v14 = *(int64_t *)(v1 + 80); // 0x40484b
        v13 = a4;
        if (v14 == 0) {
            goto lab_0x404860;
        } else {
            int64_t v15 = v4 - *(int64_t *)(v1 + 56); // 0x404857
            v13 = v15;
            if (v14 == v15) {
                // 0x404866
                function_404c00(a1, a2, v4, v14, str, v3);
                goto lab_0x404874;
            } else {
                goto lab_0x404860;
            }
        }
    }
  lab_0x404881:;
    // 0x404881
    int64_t v16; // 0x4047a0
    int64_t v17; // 0x4047a0
    if (v9 == 0) {
        // 0x404a00
        *(int64_t *)(v4 + 16) = 64;
        int64_t v18 = function_409680(512); // 0x404a0d
        *(int64_t *)(v4 + 8) = v18;
        v16 = v18;
        v17 = v10;
    } else {
        int64_t v19 = 16 * v10; // 0x404891
        *(int64_t *)(v4 + 16) = 2 * v10;
        int64_t v20 = function_4096d0(v9, v19); // 0x404899
        *(int64_t *)(v4 + 8) = v20;
        v16 = v20;
        v17 = v19;
    }
    // 0x4048a2
    v11 = v16;
    v12 = v17;
    int64_t * v21; // 0x4047a0
    int64_t v22; // 0x4047a0
    int64_t v23; // 0x4047a0
    if (str3 == (int64_t)"do_not_care") {
        goto lab_0x404978;
    } else {
        // 0x4048a2
        v21 = (int64_t *)(v4 + 32);
        v22 = v16;
        v23 = v17;
        goto lab_0x4048b2;
    }
  lab_0x404978:
    // 0x404978
    *a2 = v12 + 1;
    *(int64_t *)(8 * v12 + v11) = 0;
    int64_t result = v11; // 0x404987
    goto lab_0x404932;
  lab_0x4049d0:;
    char * format2 = dcgettext(NULL, "cannot fit single argument within argument list size limit", 5); // 0x4049dc
    v2 = 1;
    error(1, (int32_t)"cannot fit single argument within argument list size limit" ^ (int32_t)"cannot fit single argument within argument list size limit", format2);
    if (*(int64_t *)(v1 + 48) != 0) {
        goto lab_0x404816;
    } else {
        // 0x4049a0
        v6 = (int64_t)format2;
        goto lab_0x4049ab;
    }
  lab_0x404860:
    // 0x404860
    if (*(int64_t *)(v1 + 32) != v4) {
        goto lab_0x404874;
    } else {
        // 0x404866
        function_404c00(a1, a2, v4, v13, str, v3);
        goto lab_0x404874;
    }
  lab_0x404932:
    // 0x404932
    if ((int32_t)a7 == 0) {
        // 0x40493f
        return result;
    }
    int64_t result2 = result; // 0x404937
    int64_t v24 = *(int64_t *)(v4 + 32); // 0x404937
    goto lab_0x40493b;
  lab_0x404816:;
    char * format = dcgettext(NULL, "argument list too long", 5); // 0x404822
    error(1, (int32_t)"argument list too long" ^ (int32_t)"argument list too long", format);
    // 0x404838
    function_404c00(a1, a2, (int64_t)format, a4, str, v3);
    goto lab_0x404843;
  lab_0x404874:;
    uint64_t v29 = *(int64_t *)(v4 + 16); // 0x404874
    int64_t v30 = *(int64_t *)(v4 + 8); // 0x404878
    v9 = v30;
    v10 = v29;
    v21 = v5;
    v22 = v30;
    v23 = v4;
    if (v29 > v4) {
        goto lab_0x4048b2;
    } else {
        goto lab_0x404881;
    }
  lab_0x4048b2:;
    int64_t v31 = *v21; // 0x4048b6
    *a2 = v23 + 1;
    int64_t * v32 = (int64_t *)(v4 + 24); // 0x4048bd
    *(int64_t *)(8 * v23 + v22) = *v32 + v31;
    int64_t v33 = v31; // 0x4048d0
    if (a5 != 0) {
        // 0x4048d2
        strcpy((char *)(*v32 + v31), (char *)str);
        int64_t v34 = *v21 + v3; // 0x4048e2
        *v21 = v34;
        v33 = v34;
    }
    int64_t str2 = *v32 + v33; // 0x4048e9
    strcpy((char *)str2, (char *)str3);
    int64_t v35 = *v21 + a4; // 0x4048f8
    *v21 = v35;
    int64_t v26; // 0x4047a0
    int64_t v25; // 0x4047a0
    int64_t v28; // 0x40490c
    int64_t v27; // 0x404918
    if ((int32_t)a7 != 0) {
        // 0x404990
        v26 = str2;
        v25 = v23;
        result2 = str3;
        v24 = v35;
        if (*(int64_t *)(v1 + 32) == str3) {
            goto lab_0x404927;
        } else {
            goto lab_0x40493b;
        }
    } else {
        // 0x40490c
        v28 = *(int64_t *)(v1 + 80);
        v27 = str2;
        if (v28 == 0) {
            goto lab_0x404921;
        } else {
            // 0x404915
            v27 = str3 - *(int64_t *)(v1 + 56);
            v26 = v28;
            v25 = v28;
            if (v28 == v27) {
                goto lab_0x404927;
            } else {
                goto lab_0x404921;
            }
        }
    }
  lab_0x40493b:
    // 0x40493b
    *(int64_t *)(v4 + 40) = v24;
    // 0x40493f
    return result2;
  lab_0x4049ab:
    // 0x4049ab
    if (*(int64_t *)(v1 + 72) != 0) {
        goto lab_0x404816;
    } else {
        // 0x4049b6
        if (*(int64_t *)(v1 + 80) == 0) {
            // 0x404838
            function_404c00(a1, a2, v6, a4, str, v3);
            goto lab_0x404843;
        } else {
            goto lab_0x404816;
        }
    }
  lab_0x404927:
    // 0x404927
    result = function_404c00(a1, a2, v25, v26, str, v3);
    goto lab_0x404932;
  lab_0x404921:
    // 0x404921
    v26 = v27;
    v25 = v28;
    if (*(int64_t *)(v1 + 32) != str3) {
        // 0x40493f
        return str3;
    }
    goto lab_0x404927;
}
// Address range: 0x404a40 - 0x404bf8
int64_t function_404a40(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int32_t a5, int32_t a6, int64_t str6, int64_t a8, int64_t a9) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = *(int64_t *)(v1 + 24); // 0x404a57
    int64_t v3 = (int64_t)g74; // 0x404a9d
    if (g74 == NULL) {
        // 0x404be0
        v3 = function_409680(v2 + 1);
        g74 = (char *)v3;
    }
    int64_t str4 = a5;
    int64_t v4 = a6;
    uint64_t v5 = v4 + a8;
    int64_t v6 = a3; // 0x404a40
    int64_t v7 = v3; // 0x404a40
    int64_t v8 = v2 - 1; // 0x404a40
    int64_t v9 = a4; // 0x404a40
    int64_t v10 = a3; // 0x404a40
    int64_t v11; // 0x404a40
    int64_t v12; // 0x404a40
    int64_t v13; // 0x404a40
    while (true) {
        int64_t str2 = v10;
        int64_t n2 = v9;
        uint64_t v14 = v8;
        int64_t str = v7;
        int64_t v15 = function_4066f0(str2, *(int64_t *)(v1 + 48), v6, a4, str4); // 0x404b34
        if (v15 != 0) {
            int64_t n = v15 - str2; // 0x404ab3
            v13 = str;
            v11 = str2;
            if (v14 <= n) {
                // break -> 0x404bb5
                break;
            }
            uint64_t v16 = v14 - n; // 0x404ac8
            strncpy((char *)str, (char *)str2, (int32_t)n);
            int64_t str3 = n + str; // 0x404ada
            v13 = str3;
            v11 = v15;
            if (v16 <= v5) {
                // break -> 0x404bb5
                break;
            }
            int64_t str5 = str3; // 0x404af1
            if (a5 != 0) {
                // 0x404af3
                strcpy((char *)str3, (char *)str4);
                str5 = str3 + v4;
            }
            // 0x404b03
            strcpy((char *)str5, (char *)str6);
            int64_t v17 = *(int64_t *)(v1 + 40); // 0x404b10
            int64_t v18 = str5 + a8; // 0x404b19
            int64_t v19 = v17 + v15; // 0x404b21
            v6 = n;
            v7 = v18;
            v8 = v16 - v5;
            v9 = n2 - n - v17;
            v10 = v19;
            v12 = v18;
            if (*(char *)v19 == 0) {
                goto lab_0x404b6c_2;
            }
        } else {
            // 0x404b47
            v13 = str;
            v11 = str2;
            if (v14 <= n2) {
                // break -> 0x404bb5
                break;
            }
            int64_t v20 = str2 + n2; // 0x404b55
            strncpy((char *)str, (char *)str2, (int32_t)n2);
            int64_t v21 = n2 + str; // 0x404b60
            v6 = n2;
            v7 = v21;
            v8 = v14 - n2;
            v9 = 0;
            v10 = v20;
            v12 = v21;
            if (*(char *)v20 == 0) {
                goto lab_0x404b6c_2;
            }
        }
    }
    // 0x404bb5
    v12 = v13;
    if (*(char *)v11 != 0) {
        // 0x404bbb
        error(1, (int32_t)"command too long" ^ (int32_t)"command too long", dcgettext(NULL, "command too long", 5));
        v12 = v13;
    }
  lab_0x404b6c_2:
    // 0x404b6c
    *(char *)v12 = 0;
    int64_t v22 = (int64_t)g74; // 0x404b7a
    return function_4047a0(a1, a2, v22, v12 + 1 - v22, 0, 0, 0x100000000 * a9 >> 32);
}
// Address range: 0x404c00 - 0x404e51
int64_t function_404c00(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404c00
    function_4047a0(a1, a2, (int64_t)"do_not_care", 0, 0, 0, 0);
    int32_t v1; // 0x404e36
    if (a2 == NULL) {
        // 0x404e14
        __assert_fail("state->cmd_argc > 0", "buildcmd.c", 277, "bc_do_exec");
        v1 = sysconf((int32_t)"state->cmd_argc > 0" ^ (int32_t)"state->cmd_argc > 0");
        return v1 < 1 ? 0x7fffffffffffffff : (int64_t)v1;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x404c37
    int64_t v4 = 8 * v2; // 0x404c3c
    if (*(int64_t *)(v4 - 8 + *v3) != 0) {
        // 0x404dfb
        __assert_fail("state->cmd_argv[state->cmd_argc-1] == NULL", "buildcmd.c", 278, "bc_do_exec");
        // 0x404e14
        __assert_fail("state->cmd_argc > 0", "buildcmd.c", 277, "bc_do_exec");
        v1 = sysconf((int32_t)"state->cmd_argc > 0" ^ (int32_t)"state->cmd_argc > 0");
        return v1 < 1 ? 0x7fffffffffffffff : (int64_t)v1;
    }
    int64_t v5 = (int64_t)a1;
    int64_t v6 = function_409680(v4 + 8); // 0x404c53
    int64_t * v7 = (int64_t *)(v5 + 56); // 0x404c5c
    int64_t v8 = v6 - 8;
    int64_t v9 = v2; // 0x404c66
    int64_t v10 = *v7; // 0x404c66
    int64_t v11 = v2; // 0x404c66
    int64_t v12 = 0; // 0x404c66
    while (true) {
        int64_t v13 = v12;
        uint64_t v14 = v11;
        int64_t v15 = v10;
        uint64_t v16 = v9;
        int64_t v17 = v13; // 0x404c73
        if (v15 != 0) {
            int64_t v18 = 0; // 0x404c7e
            v18++;
            int64_t v19 = 8 * v18; // 0x404c84
            *(int64_t *)(v19 + v8) = *(int64_t *)(*v3 - 8 + v19);
            while (v18 != v15) {
                // 0x404c80
                v18++;
                v19 = 8 * v18;
                *(int64_t *)(v19 + v8) = *(int64_t *)(*v3 - 8 + v19);
            }
            // 0x404c93
            v17 = v13 + v15;
        }
        int64_t v20 = v17;
        int64_t v21; // 0x404c00
        int64_t v22; // 0x404c00
        int64_t v23; // 0x404c00
        if (v14 <= v15 || v20 >= v16) {
            // 0x404c9b
            v21 = 8 * v15;
            v22 = v20;
            v23 = v15;
        } else {
            int64_t v24 = v20 + 1; // 0x404cb5
            int64_t v25 = v15 + 1; // 0x404cb9
            int64_t v26 = 8 * v25;
            *(int64_t *)(v26 + v8) = *(int64_t *)(*v3 - 8 + 8 * v24);
            int64_t v27 = v24; // 0x404cca
            int64_t v28 = v25; // 0x404cca
            while (v14 > v25 && v24 < v16) {
                // 0x404cb5
                v24 = v27 + 1;
                v25 = v28 + 1;
                v26 = 8 * v25;
                *(int64_t *)(v26 + v8) = *(int64_t *)(*v3 - 8 + 8 * v24);
                v27 = v24;
                v28 = v25;
            }
            // 0x404ccc
            v21 = v26;
            v22 = v24;
            v23 = v25;
            if (v25 < v15) {
                // break -> 0x404de2
                break;
            }
        }
        int64_t v29 = v23;
        *(int64_t *)(v21 + v6) = 0;
        int64_t v30; // 0x404c00
        int64_t v31; // 0x404c00
        int64_t v32; // 0x404c00
        if ((int32_t)v22 != 0) {
            int64_t v33 = function_404600(v5, v2, 1, v14); // 0x404dbe
            int64_t v34 = *v7; // 0x404dc3
            v31 = v34;
            v32 = v2;
            v11 = v33;
            v30 = v29 + v13 - v34;
        } else {
            // 0x404d00
            if (*v7 + 1 < v14) {
                int64_t v35 = function_404600(v5, v2, 0, v14); // 0x404d9b
                v31 = *v7;
                v32 = v2;
                v11 = v35;
                v30 = v13;
            } else {
                // 0x404d11
                error(1, (int32_t)"can't call exec() due to argument size restrictions" ^ (int32_t)"can't call exec() due to argument size restrictions", dcgettext(NULL, "can't call exec() due to argument size restrictions", 5));
                v31 = *v7;
                v32 = (int32_t)"can't call exec() due to argument size restrictions" ^ (int32_t)"can't call exec() due to argument size restrictions";
                v11 = v14;
                v30 = v13;
            }
        }
        // 0x404d41
        v12 = v30;
        v9 = v32;
        v10 = v31;
        if (v12 + 1 >= v9 - v10) {
            // 0x404d58
            free((int64_t *)v6);
            *a2 = v10;
            *(int64_t *)(v2 + 32) = *(int64_t *)(v2 + 40);
            *(int64_t *)(v2 + 56) = -0x100000000;
            return -0x100000000;
        }
    }
    // 0x404de2
    __assert_fail("dst_pos >= ctl->initial_argc", "buildcmd.c", 258, "copy_args");
    // 0x404dfb
    __assert_fail("state->cmd_argv[state->cmd_argc-1] == NULL", "buildcmd.c", 278, "bc_do_exec");
    // 0x404e14
    __assert_fail("state->cmd_argc > 0", "buildcmd.c", 277, "bc_do_exec");
    v1 = sysconf((int32_t)"state->cmd_argc > 0" ^ (int32_t)"state->cmd_argc > 0");
    return v1 < 1 ? 0x7fffffffffffffff : (int64_t)v1;
}
// Address range: 0x404e60 - 0x404ea0
int64_t function_404e60(void) {
    int64_t str = *(int64_t *)g33; // 0x404e6f
    int64_t v1 = g33; // 0x404e75
    int64_t result = 0; // 0x404e75
    if (str == 0) {
        // 0x404e96
        return 0;
    }
    int32_t len = strlen((char *)str); // 0x404e80
    v1 += 8;
    int64_t str2 = *(int64_t *)v1; // 0x404e89
    result = result + 1 + (int64_t)len;
    while (str2 != 0) {
        // 0x404e80
        len = strlen((char *)str2);
        v1 += 8;
        str2 = *(int64_t *)v1;
        result = result + 1 + (int64_t)len;
    }
    // 0x404e96
    return result;
}
// Address range: 0x404ea0 - 0x404f80
int64_t function_404ea0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = function_404e60(); // 0x404eaa
    *(int64_t *)(v1 + 16) = 0x1000;
    int32_t v3 = sysconf(_SC_ARG_MAX); // 0x404ebc
    *(int32_t *)a1 = 0;
    uint64_t v4 = v3 < 1 ? 0x7fffffffffffffff : (int64_t)v3; // 0x404ed4
    int64_t * v5 = (int64_t *)(v1 + 8); // 0x404ed8
    *v5 = v4;
    if (v2 > v4) {
        // 0x404f40
        return 1;
    }
    uint64_t v6 = v2 + a2; // 0x404ee1
    if (v4 <= v6) {
        // 0x404f40
        return 2;
    }
    uint64_t v7 = v4 - v6; // 0x404eeb
    *v5 = v7;
    int64_t v8 = v7 / 8 - 2; // 0x404ef9
    *(int64_t *)(v1 + 32) = v8;
    if (v8 == 0) {
        // 0x404f5a
        __assert_fail("ctl->max_arg_count > 0", "buildcmd.c", 534, "bc_init_controlinfo");
        return &g100;
    }
    // 0x404f03
    *(int64_t *)(v1 + 24) = v7;
    *(int64_t *)(v1 + 40) = 0;
    *(int64_t *)(v1 + 48) = 0;
    *(int64_t *)(v1 + 56) = 0;
    *(int64_t *)(v1 + 64) = 0x404700;
    *(int64_t *)(v1 + 72) = 0;
    *(int64_t *)(v1 + 80) = 0;
    return 0;
}
// Address range: 0x404f80 - 0x404fa4
int64_t function_404f80(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = *(int64_t *)(v1 + 8); // 0x404f80
    int64_t result = v2; // 0x404f8a
    if (v2 >= 0x20000) {
        uint64_t v3 = *(int64_t *)(v1 + 16); // 0x404f8c
        result = v3 > 0x20000 ? v3 : 0x20000;
    }
    // 0x404f9f
    *(int64_t *)(v1 + 24) = result;
    return result;
}
// Address range: 0x404fb0 - 0x405050
int64_t function_404fb0(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 24); // 0x404fc0
    *(int64_t *)a2 = 0;
    int64_t * v2 = (int64_t *)(a2 + 32); // 0x404fcb
    *v2 = 0;
    *(int64_t *)(a2 + 8) = 0;
    *(int64_t *)(a2 + 16) = 0;
    *(int64_t *)(a2 + 64) = 0;
    *(int64_t *)(a2 + 72) = 0;
    if (v1 >= 0x7ffffffffffff800) {
        // 0x405034
        __assert_fail("ctl->arg_max <= (LONG_MAX - 2048L)", "buildcmd.c", 588, "bc_init_state");
        return &g100;
    }
    int64_t v3 = function_409680(v1 + 1); // 0x405002
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)(a2 + 24) = v3;
    *v2 = 0;
    *(int64_t *)(a2 + 56) = -0x100000000;
    *(int64_t *)(a2 + 48) = a3;
    return -0x100000000;
}
// Address range: 0x405050 - 0x40506e
int64_t function_405050(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    *a2 = *(int64_t *)((int64_t)a1 + 56);
    *(int64_t *)(v1 + 32) = *(int64_t *)(v1 + 40);
    *(int64_t *)(v1 + 56) = -0x100000000;
    return -0x100000000;
}
// Address range: 0x405070 - 0x4050d9
int64_t function_405070(int64_t str) {
    int64_t v1 = 0; // 0x405081
    int64_t v2 = 0; // 0x405081
    int64_t v3 = 0; // 0x405081
    int64_t v4 = 0; // 0x405081
    if (str != 0) {
        int32_t len = strlen((char *)str); // 0x405088
        v1++;
        int64_t str2 = *(int64_t *)(8 * v1 + str); // 0x405091
        v2 += (int64_t)len;
        v3 = v1;
        v4 = v2;
        while (str2 != 0) {
            // 0x405088
            len = strlen((char *)str2);
            v1++;
            str2 = *(int64_t *)(8 * v1 + str);
            v2 += (int64_t)len;
            v3 = v1;
            v4 = v2;
        }
    }
    // 0x40509d
    int64_t v5; // 0x405070
    if ((int32_t)function_404710("__GNU_FINDUTILS_EXEC_ARG_COUNT_LIMIT", v3, v5, v5, v5) == 0) {
        // 0x4050c0
        return (int32_t)function_404710("__GNU_FINDUTILS_EXEC_ARG_LENGTH_LIMIT", v4, 1, v5, v5) != 0;
    }
    // 0x4050b3
    return 1;
}
// Address range: 0x4050e0 - 0x40515c
int64_t function_4050e0(void) {
    int64_t v1 = function_405aa0(); // 0x4050e9
    if (v1 == 0) {
        // 0x40514e
        return 0xffffffff;
    }
    struct __dirstream * dirp = (struct __dirstream *)v1; // 0x405101
    struct dirent * v2 = readdir(dirp); // 0x405101
    struct dirent * v3 = v2; // 0x405109
    int64_t v4 = 0; // 0x405109
    int64_t v5 = 0xffffffff; // 0x405109
    if (v2 == NULL) {
        // 0x405141
        closedir(dirp);
        // 0x40514e
        return 0xffffffff;
    }
    int64_t v6; // 0x4050e0
    struct dirent * v7; // 0x4050e0
    int64_t v8; // 0x4050e0
    int64_t v9; // 0x4050e0
    int64_t v10; // 0x40510b
    while (true) {
        // 0x40510b
        v7 = v3;
        v8 = v5;
        v6 = v4;
        while (true) {
          lab_0x40510b:
            // 0x40510b
            v5 = v8;
            int64_t v11 = (int64_t)v7;
            v10 = v11 + 19;
            if (*(char *)v10 != 46) {
                goto lab_0x40511e;
            } else {
                // 0x405111
                switch (*(char *)(v11 + 20)) {
                    case 46: {
                        goto lab_0x4050fe;
                    }
                    case 0: {
                        goto lab_0x4050fe;
                    }
                    default: {
                        goto lab_0x40511e;
                    }
                }
            }
        }
      lab_0x4050fe:
        // 0x4050fe
        v4 = v6;
        v3 = readdir(dirp);
        if (v3 == NULL) {
            // 0x405141
            closedir(dirp);
            v9 = v5;
            if ((int32_t)v4 == 0) {
                return 0xffffffff;
            } else {
                return v9 & 0xffffffff;
            }
        }
    }
  lab_0x405141:
    // 0x405141
    closedir(dirp);
    int64_t v12; // 0x405134
    v9 = v12;
    // 0x40514e
    return v9 & 0xffffffff;
  lab_0x40511e:;
    int64_t v13 = function_4055f0(v10, 0); // 0x40512a
    int32_t v14 = v5; // 0x405132
    int32_t v15 = v14 - (int32_t)v13; // 0x405132
    int64_t v16 = v15 < 0 == ((v15 ^ v14) & (int32_t)(v13 ^ v5)) < 0 ? v5 : v13;
    v12 = v16 & 0xffffffff;
    struct dirent * v17 = readdir(dirp); // 0x405137
    v7 = v17;
    v8 = v12;
    v6 = 1;
    if (v17 == NULL) {
        // break (via goto) -> 0x405141
        goto lab_0x405141;
    }
    goto lab_0x40510b;
}
// Address range: 0x405160 - 0x4051ca
int64_t function_405160(int64_t a1, int64_t a2) {
    int32_t v1 = a1; // 0x405171
    int64_t v2; // 0x405160
    if (function_409d40(v1, 1, v2, v2) % 2 != 0) {
        // 0x40517d
        return 0;
    }
    int64_t * v3 = (int64_t *)(a2 + 8); // 0x40518a
    int64_t v4 = function_405740(1, 4 * *v3 + 4, a2 + 16); // 0x40519e
    if (v4 == 0) {
        // 0x40517d
        return 0xffffffff;
    }
    int64_t v5 = *v3; // 0x4051a8
    *(int64_t *)a2 = v4;
    *(int32_t *)(4 * v5 + v4) = v1;
    *v3 = v5 + 1;
    return 0;
}
// Address range: 0x4051d0 - 0x405251
int64_t function_4051d0(int64_t a1, int64_t a2) {
    int32_t v1 = a1; // 0x4051e2
    int64_t v2; // 0x4051d0
    if (function_409d40(v1, 1, v2, v2) % 2 != 0) {
        // 0x405248
        return 0;
    }
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x4051eb
    uint64_t v4 = *v3; // 0x4051eb
    uint64_t v5 = *(int64_t *)(a2 + 8); // 0x4051ef
    if (v4 >= v5) {
        // 0x405228
        *(int32_t *)(a2 + 24) = v1;
        return 0xffffffff;
    }
    uint64_t v6 = a1 & 0xffffffff; // 0x4051dc
    uint32_t v7 = *(int32_t *)(v5 + 4 * v4); // 0x4051fc
    uint32_t v8 = v7; // 0x405201
    if (v6 <= (int64_t)v7) {
        goto lab_0x405244;
      lab_0x405244:
        // 0x405244
        if (v8 == v1) {
            // 0x405248
            return 0;
        }
        // 0x405228
        *(int32_t *)(a2 + 24) = v1;
        return 0xffffffff;
    }
    int64_t v9 = v4 + 1;
    while (v5 != v9) {
        int64_t v10 = v9 + 1; // 0x405210
        v8 = *(int32_t *)(v5 - 4 + 4 * v10);
        if (v6 <= (int64_t)v8) {
            // 0x405240
            *v3 = v9;
            goto lab_0x405244;
        }
        v9 = v10;
    }
    // 0x405224
    *v3 = v5;
    // 0x405228
    *(int32_t *)(a2 + 24) = v1;
    return 0xffffffff;
}
// Address range: 0x405260 - 0x4052a5
int64_t function_405260(void) {
    int32_t v1 = sysconf(_SC_OPEN_MAX); // 0x40526a
    int32_t v2 = v1 == -1 ? 20 : v1;
    int32_t rlp; // bp-24, 0x405260
    int32_t v3 = getrlimit(7, (struct rlimit *)&rlp); // 0x405287
    int32_t result = v2; // 0x405290
    if (v3 == 0) {
        int32_t v4 = rlp; // 0x405292
        result = v4 == -1 ? v2 : v4;
    }
    // 0x40529d
    return result;
}
// Address range: 0x4052b0 - 0x405399
int64_t function_4052b0(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x4052b0
    if ((int32_t)a1 < 1) {
        // 0x405364
        return 0;
    }
    uint64_t v1 = a1 & 0xffffffff; // 0x4052bc
    int64_t fds; // bp-568, 0x4052b0
    int64_t v2 = &fds; // 0x4052cd
    int64_t v3 = 0;
    int64_t v4 = v1 - v3; // 0x4052dd
    int32_t v5 = v4; // 0x4052df
    int32_t v6 = v5 - 64; // 0x4052df
    uint64_t v7 = v6 == 0 | v6 < 0 != (63 - v5 & v5) < 0 ? v4 & 0xffffffff : 64; // 0x4052e2
    int64_t nfds = 0x100000000 * v7 / 0x100000000; // 0x4052e6
    int64_t v8 = v2; // 0x4052eb
    int64_t v9 = 0; // 0x4052eb
    int64_t result; // 0x4052b0
    int64_t v10; // 0x405313
    int32_t v11; // 0x405327
    if (v5 < 1) {
        // 0x405380
        if (poll((struct pollfd *)&fds, (int32_t)nfds, 0) == -1) {
            // break -> 0x405364
            break;
        }
    } else {
        *(int16_t *)(v8 | 6) = 0;
        v10 = v9 + 1 & 0xffffffff;
        *(int16_t *)(v8 | 4) = 5;
        *(int32_t *)v8 = (int32_t)(v9 + v3);
        v8 += 8;
        v9 = v10;
        while (v10 < v7) {
            // 0x405300
            *(int16_t *)(v8 | 6) = 0;
            v10 = v9 + 1 & 0xffffffff;
            *(int16_t *)(v8 | 4) = 5;
            *(int32_t *)v8 = (int32_t)(v9 + v3);
            v8 += 8;
            v9 = v10;
        }
        // 0x405322
        v11 = poll((struct pollfd *)&fds, (int32_t)nfds, 0);
        if (v11 == -1) {
            // break -> 0x405364
            break;
        }
        for (int64_t i = 0; i < v7; i++) {
            // 0x405338
            if (v11 != 0 == (*(int16_t *)(8 * i + (v2 || 6)) != 32)) {
                // 0x405364
                result = v11;
                return result;
            }
        }
    }
    int64_t v12 = v7 + v3 & 0xffffffff; // 0x405356
    result = 0;
    while (v1 > v12) {
        // 0x4052d4
        v3 = v12;
        v4 = v1 - v3;
        v5 = v4;
        v6 = v5 - 64;
        v7 = v6 == 0 | v6 < 0 != (63 - v5 & v5) < 0 ? v4 & 0xffffffff : 64;
        nfds = 0x100000000 * v7 / 0x100000000;
        v8 = v2;
        v9 = 0;
        if (v5 < 1) {
            int32_t v13 = poll((struct pollfd *)&fds, (int32_t)nfds, 0); // 0x405385
            result = 0xffffffff;
            if (v13 == -1) {
                // break -> 0x405364
                break;
            }
        } else {
            *(int16_t *)(v8 | 6) = 0;
            v10 = v9 + 1 & 0xffffffff;
            *(int16_t *)(v8 | 4) = 5;
            *(int32_t *)v8 = (int32_t)(v9 + v3);
            v8 += 8;
            v9 = v10;
            while (v10 < v7) {
                // 0x405300
                *(int16_t *)(v8 | 6) = 0;
                v10 = v9 + 1 & 0xffffffff;
                *(int16_t *)(v8 | 4) = 5;
                *(int32_t *)v8 = (int32_t)(v9 + v3);
                v8 += 8;
                v9 = v10;
            }
            // 0x405322
            v11 = poll((struct pollfd *)&fds, (int32_t)nfds, 0);
            result = 0xffffffff;
            if (v11 == -1) {
                // break -> 0x405364
                break;
            }
            for (int64_t i = 0; i < v7; i++) {
                // 0x405338
                if (v11 != 0 == (*(int16_t *)(8 * i + (v2 || 6)) != 32)) {
                    // 0x405364
                    result = v11;
                    return result;
                }
            }
        }
        // 0x405356
        v12 = v7 + v3 & 0xffffffff;
        result = 0;
    }
  lab_0x405364_2:
    // 0x405364
    return result;
}
// Address range: 0x4053a0 - 0x405403
int64_t function_4053a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4050e0(); // 0x4053a4
    int32_t v2 = v1;
    int32_t v3 = v2; // 0x4053ab
    int64_t v4 = v1; // 0x4053ab
    if (v2 < 0) {
        // 0x4053ad
        v4 = function_405260();
        v3 = v4;
    }
    int64_t v5 = 0; // bp-40, 0x4053be
    function_4052b0(v4 + (int64_t)(v3 != 0x7fffffff) & 0xffffffff, 0x405160, &v5);
    g78 = v5;
    g77 = 0;
    return 0;
}
// Address range: 0x405410 - 0x40551e
int64_t function_405410(int64_t a1, int32_t a2, int64_t a3) {
    // 0x405410
    if (g76 == 0) {
        int32_t fd = function_405b30((int64_t)&g3, 0x80000, a3); // 0x405484
        if (fd >= 0) {
            // 0x4054f0
            int64_t v1; // 0x405410
            int64_t v2 = function_409d40(fd, 1, a3, v1); // 0x4054f9
            close(fd);
            g76 = 1;
            g75 = (char)v2 % 2;
        } else {
            // 0x405488
            g75 = 0;
            g76 = 1;
        }
    }
    int64_t v3 = (a2 & 64) != 0 ? a3 & 0xffffffff : 0;
    int64_t v4 = function_405b30(a1, a2 | 0x80000, v3); // 0x40544a
    int64_t result = v4 & 0xffffffff; // 0x40544f
    if ((int32_t)v4 > -1 != (g75 == 0)) {
        // 0x40545e
        return result;
    }
    // 0x4054d0
    function_405860(result, 1, v3);
    return result;
}
// Address range: 0x405520 - 0x40554b
int64_t function_405520(void) {
    // 0x405520
    free((int64_t *)g78);
    g78 = 0;
    g77 = 0;
    return &g100;
}
// Address range: 0x405550 - 0x4055f0
int64_t function_405550(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4050e0(); // 0x405564
    int32_t v2 = v1;
    int32_t v3 = v2; // 0x40556b
    int64_t v4 = v1; // 0x40556b
    if (v2 < 0) {
        // 0x40556d
        v4 = function_405260();
        v3 = v4;
    }
    int64_t v5 = g78; // bp-56, 0x405586
    int64_t result = function_4052b0(v4 + (int64_t)(v3 != 0x7fffffff) & 0xffffffff, 0x4051d0, &v5); // 0x4055a2
    return result;
}
// Address range: 0x4055f0 - 0x40573e
int64_t function_4055f0(int64_t a1, uint32_t a2) {
    int32_t * err_num = __errno_location(); // 0x405602
    *err_num = 0;
    char * str = (char *)a1; // 0x40561d
    char * endptr; // bp-48, 0x4055f0
    int64_t str_as_l = strtol(str, &endptr, 10); // 0x40561d
    if (str_as_l >= 0x7ffffffffffffffe) {
        // 0x405650
        error(1, *err_num, "%s", str);
        *err_num = 34;
        error(1, ERANGE, "%s", str);
        // 0x405671
        return str_as_l & 0xffffffff;
    }
    int64_t v1 = a2; // 0x4055f4
    if (*endptr != 0) {
        // 0x4056e0
        function_408c90(1, v1, a1);
        function_408c90(0, v1, (int64_t)endptr);
        error(1, *err_num, dcgettext(NULL, "Unexpected suffix %s on %s", 5));
        return str_as_l & 0xffffffff;
    }
    int64_t v2 = (int64_t)endptr; // 0x405692
    if (v2 == a1) {
        // 0x4056a1
        function_408c90(0, v1, v2);
        error(1, *err_num, dcgettext(NULL, "Expected an integer: %s", 5));
    }
    // 0x405671
    return str_as_l & 0xffffffff;
}
// Address range: 0x405740 - 0x40585d
int64_t function_405740(int64_t a1, uint64_t a2, uint64_t a3) {
    int32_t * v1 = __errno_location(); // 0x405751
    int64_t mem; // 0x405740
    int64_t size; // 0x405740
    int64_t v2; // 0x405740
    int32_t v3; // 0x405756
    int64_t v4; // 0x405776
    if (a2 == 0) {
        goto lab_0x405825;
    } else {
        // 0x405762
        v3 = *v1;
        if (a3 == 0) {
            // 0x4057c0
            v4 = 32;
            size = 16;
            if (a2 < 17) {
                goto lab_0x40579e;
            } else {
                goto lab_0x405794;
            }
        } else {
            // 0x40576e
            mem = a1;
            if (a3 >= a2) {
                goto lab_0x4057ac;
            } else {
                // 0x405776
                v4 = 2 * a3;
                v2 = a2;
                if (v4 > a3 | -1 * a3 == 0) {
                    goto lab_0x405794;
                } else {
                    goto lab_0x4057e8;
                }
            }
        }
    }
  lab_0x405825:
    // 0x405825
    __assert_fail("wanted > 0u", "extendbuf.c", 71, "extendbuf");
    int64_t result = function_405740((int64_t)"wanted > 0u", (int64_t)"extendbuf.c", 71); // 0x405844
    if (result == 0) {
        // 0x405850
        free((int64_t *)"wanted > 0u");
        function_4098a0((int64_t)"wanted > 0u");
        // UNREACHABLE
    }
    // 0x4057fc
    return result;
  lab_0x40579e:
    if (a1 != 0) {
        // 0x40580c
        __assert_fail("NULL == existing", "extendbuf.c", 79, "extendbuf");
        goto lab_0x405825;
    } else {
        // 0x4057a3
        *(int64_t *)a3 = size;
        mem = (int64_t)malloc((int32_t)size);
        goto lab_0x4057ac;
    }
  lab_0x405794:;
    int64_t v5 = v4;
    int64_t v6; // 0x405740
    while (v5 < a2) {
        int64_t v7 = 2 * v5; // 0x405788
        if (!((v5 < v7 | -1 * v5 == 0))) {
            // 0x4057d8
            size = a2;
            v6 = a2;
            if (a3 == 0) {
                goto lab_0x40579e;
            } else {
                goto lab_0x4057e0;
            }
        }
        v5 = v7;
    }
    // 0x405799
    size = v5;
    v6 = v5;
    if (a3 != 0) {
        goto lab_0x4057e0;
    } else {
        goto lab_0x40579e;
    }
  lab_0x4057ac:
    // 0x4057ac
    if (mem == 0) {
        // 0x4057fc
        return 0;
    }
    // 0x4057b1
    *v1 = v3;
    return mem;
  lab_0x4057e0:
    // 0x4057e0
    mem = a1;
    v2 = v6;
    if (v6 == a3) {
        goto lab_0x4057ac;
    } else {
        goto lab_0x4057e8;
    }
  lab_0x4057e8:
    // 0x4057e8
    *(int64_t *)a3 = v2;
    int64_t * mem2 = realloc((int64_t *)a1, (int32_t)v2); // 0x4057f2
    if (mem2 == NULL) {
        // 0x4057fc
        return 0;
    }
    // 0x4057b1
    *v1 = v3;
    return (int64_t)mem2;
}
// Address range: 0x405860 - 0x4058b7
int64_t function_405860(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x405873
    int64_t v2; // 0x405860
    int64_t v3 = function_409d40(v1, 1, 0, v2); // 0x405873
    int32_t v4 = v3; // 0x405878
    if (v4 < 0) {
        // 0x4058a9
        return 0xffffffff;
    }
    int64_t v5 = v3 & 0xfffffffe | (int64_t)((char)a2 != 0); // 0x405889
    int64_t result = 0; // 0x405890
    if ((int32_t)v5 != v4) {
        // 0x405892
        result = (int32_t)function_409d40(v1, 2, v5, v3 & 0xffffffff) == -1 ? 0xffffffff : 0;
    }
    // 0x4058a9
    return result;
}
// Address range: 0x4058c0 - 0x4058ce
int64_t function_4058c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4058c0
    int64_t v1; // 0x4058c0
    return function_409d40((int32_t)a1, 1030, 0, v1);
}
// Address range: 0x4058d0 - 0x4058d8
int64_t function_4058d0(int64_t a1) {
    // 0x4058d0
    g79 = a1;
    int64_t result; // 0x4058d0
    return result;
}
// Address range: 0x4058e0 - 0x4059dd
int64_t function_4058e0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g32; // 0x4058e4
    int64_t v2; // 0x4058e0
    if (function_409ec0(v1) != 0) {
        int64_t v3 = function_409ef0(v1, 0, 1); // 0x40599a
        int64_t v4 = (int64_t)g32; // 0x40599f
        v2 = v4;
        if ((int32_t)v3 == 0) {
            int64_t v5 = function_409e80(v4, 0); // 0x405918
            int64_t v6 = (int64_t)g32; // 0x40591d
            v2 = v6;
            if ((int32_t)v5 == 0) {
                goto lab_0x4059ae;
            } else {
                // 0x40592c
                function_40b2b0(v6);
                goto lab_0x405938;
            }
        } else {
            goto lab_0x4059ae;
        }
    } else {
        // 0x4058fc
        if ((int32_t)function_40b2b0(v1) == 0) {
            // 0x405908
            return function_405a00();
        }
        goto lab_0x405938;
    }
  lab_0x4059ae:
    // 0x4059ae
    if ((int32_t)function_40b2b0(v2) == 0) {
        // 0x4059bb
        return function_405a00();
    }
    goto lab_0x405938;
  lab_0x405938:;
    char * v7 = dcgettext(NULL, "error closing file", 5); // 0x405944
    int32_t * err_num = __errno_location(); // 0x405953
    if (g79 == 0) {
        // 0x4059c8
        error(0, *err_num, "%s", v7);
    } else {
        // 0x405960
        error(0, *err_num, "%s: %s", (char *)function_408e10((int64_t)g79), v7);
    }
    // 0x40597f
    function_405a00();
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x4059e0 - 0x4059e8
int64_t function_4059e0(int64_t a1) {
    // 0x4059e0
    g81 = a1;
    int64_t result; // 0x4059e0
    return result;
}
// Address range: 0x4059f0 - 0x4059f8
int64_t function_4059f0(int64_t a1) {
    // 0x4059f0
    g80 = a1;
    int64_t result; // 0x4059f0
    return result;
}
// Address range: 0x405a00 - 0x405a9e
int64_t function_405a00(void) {
    // 0x405a00
    int32_t * err_num; // 0x405a16
    if ((int32_t)function_40b2b0((int64_t)g31) == 0) {
        goto lab_0x405a2c;
    } else {
        // 0x405a16
        err_num = __errno_location();
        if (g80 == 0) {
            goto lab_0x405a43;
        } else {
            // 0x405a27
            if (*err_num != 32) {
                goto lab_0x405a43;
            } else {
                goto lab_0x405a2c;
            }
        }
    }
  lab_0x405a2c:;
    int64_t result = function_40b2b0((int64_t)g35); // 0x405a33
    if ((int32_t)result == 0) {
        // 0x405a3c
        return result;
    }
    // 0x405a7e
    _exit(g20);
    // UNREACHABLE
  lab_0x405a43:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x405a4f
    if (g81 == 0) {
        // 0x405a89
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405a63
        error(0, *err_num, "%s: %s", (char *)function_408e10((int64_t)g81), v1);
    }
    // 0x405a7e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x405aa0 - 0x405b2e
int64_t function_405aa0(void) {
    // 0x405aa0
    int64_t name; // 0x405aa0
    struct __dirstream * dirp = opendir((char *)name); // 0x405aa8
    if (dirp == NULL) {
        // 0x405ac2
        return (int64_t)dirp;
    }
    uint32_t v1 = dirfd(dirp); // 0x405ab8
    if (v1 >= 3) {
        // 0x405ac2
        return (int64_t)dirp;
    }
    int64_t v2 = function_409080((int64_t)v1, name); // 0x405ad2
    int32_t * v3 = __errno_location(); // 0x405ada
    int32_t fd = v2; // 0x405ae2
    if (fd < 0) {
        // 0x405aed
        closedir(dirp);
        return 0;
    }
    struct __dirstream * v4 = fdopendir(fd); // 0x405b13
    if (v4 == NULL) {
        // 0x405b24
        close(fd);
    }
    // 0x405aed
    closedir(dirp);
    return (int64_t)v4;
}
// Address range: 0x405b30 - 0x405b7a
int64_t function_405b30(int64_t path, int32_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, oflag); // 0x405b43
    return function_409090((int64_t)fd);
}
// Address range: 0x405b80 - 0x405cf6
int64_t function_405b80(int64_t a1, int64_t a2, uint64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = a1;
    if (a3 >= 0x2000000000000000) {
        // 0x405c98
        return 0;
    }
    int64_t v2 = 8 * a3; // 0x405b9b
    v1 = v2;
    int64_t v3; // 0x405b80
    if (v2 < 4015) {
        // 0x405bb4
        int64_t v4; // bp-56, 0x405b80
        int64_t v5 = 31 - (v2 + 39 & -16) + (int64_t)&v4 & -16; // 0x405bc8
        v1 = v5;
        v3 = v5;
        if (v5 == 0) {
            // 0x405c98
            return 0;
        }
    } else {
        int64_t v6 = function_40b890(v2, a2, a3, (int64_t)a4); // 0x405c7b
        v1 = v6;
        v3 = v6;
        if (v6 == 0) {
            // 0x405c98
            return 0;
        }
    }
    // 0x405bd5
    *(int64_t *)(v3 + 8) = 1;
    if (a3 >= 3) {
        int64_t v7 = 0;
        int64_t v8 = 2;
        char v9 = *(char *)(a2 - 1 + v8); // 0x405bf0
        int64_t v10 = v7; // 0x405bfa
        int64_t v11 = v7; // 0x405bfa
        int64_t v12; // 0x405b80
        int64_t v13; // 0x405b80
        int64_t v14; // 0x405cd8
        int64_t v15; // 0x405c08
        if (v9 != *(char *)(v7 + a2)) {
            v12 = v10;
            while (v12 != 0) {
                // 0x405c08
                v15 = v12 - *(int64_t *)(8 * v12 + v1);
                if (*(char *)(v15 + a2) == v9) {
                    goto lab_0x405cd8;
                }
                v12 = v15;
            }
            // 0x405c1b
            *(int64_t *)(v1 + 8 * v8) = v8;
            v13 = 0;
        } else {
            // 0x405cd8
            v14 = v11 + 1;
            *(int64_t *)(v1 + 8 * v8) = v8 - v14;
            v13 = v14;
        }
        // 0x405c22
        v7 = v13;
        int64_t v16 = v8 + 1; // 0x405c22
        while (v16 != a3) {
            // 0x405bf0
            v8 = v16;
            v9 = *(char *)(a2 - 1 + v8);
            v10 = v7;
            v11 = v7;
            if (v9 != *(char *)(v7 + a2)) {
                v12 = v10;
                while (v12 != 0) {
                    // 0x405c08
                    v15 = v12 - *(int64_t *)(8 * v12 + v1);
                    if (*(char *)(v15 + a2) == v9) {
                        goto lab_0x405cd8;
                    }
                    v12 = v15;
                }
                // 0x405c1b
                *(int64_t *)(v1 + 8 * v8) = v8;
                v13 = 0;
            } else {
                // 0x405cd8
                v14 = v11 + 1;
                *(int64_t *)(v1 + 8 * v8) = v8 - v14;
                v13 = v14;
            }
            // 0x405c22
            v7 = v13;
            v16 = v8 + 1;
        }
    }
    // 0x405c2b
    *a4 = 0;
    char v17 = *(char *)&v1;
    char v18 = v17; // 0x405c43
    int64_t v19 = a1; // 0x405c43
    int64_t v20 = a1; // 0x405c43
    int64_t v21 = 0; // 0x405c43
    if (v17 == 0) {
        // 0x405c5f
        function_40b900(v1);
        return 1;
    }
    int64_t v22; // 0x405b80
    while (true) {
        char v23 = v18;
        int64_t v24 = v20; // 0x405c49
        int64_t v25 = v21; // 0x405c49
        int64_t v26 = v21; // 0x405c49
        int64_t v27 = v20; // 0x405c49
        if (*(char *)(v21 + a2) == v23) {
          lab_0x405ca0:
            // 0x405ca0
            v22 = v27;
            int64_t v28 = v26 + 1; // 0x405ca0
            v21 = v28;
            v20 = v22;
            if (v28 == a3) {
                // break -> 0x405cee
                break;
            }
        } else {
            int64_t v29 = v25;
            int64_t v30 = v24;
            while (v29 != 0) {
                int64_t v31 = *(int64_t *)(8 * v29 + v1); // 0x405c50
                int64_t v32 = v31 + v30; // 0x405c54
                int64_t v33 = v29 - v31; // 0x405c57
                v24 = v32;
                v25 = v33;
                v26 = v33;
                v27 = v32;
                if (*(char *)(v33 + a2) == v23) {
                    goto lab_0x405ca0;
                }
                v29 = v25;
                v30 = v24;
            }
            // 0x405cc0
            v21 = 0;
            v20 = v30 + 1;
        }
        // 0x405c40
        v19++;
        v18 = *(char *)v19;
        if (v18 == 0) {
            // 0x405c5f
            function_40b900(v1);
            return 1;
        }
    }
    // 0x405cee
    *a4 = v22;
    // 0x405c5f
    function_40b900(v1);
    return 1;
}
// Address range: 0x405d00 - 0x405d20
int64_t function_405d00(void) {
    // 0x405d00
    __assert_fail("iter->cur.wc == 0", "mbuiter.h", 179, "mbuiter_multi_next");
    return &g100;
}
// Address range: 0x405d20 - 0x4066f0
int64_t function_405d20(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = v1; // bp-280, 0x405d41
    uint64_t v3 = function_40ba40(a2); // 0x405d48
    if (v3 >= 0x492492492492493) {
        // 0x4061ed
        return 0;
    }
    int64_t v4 = 0x100000000 * v3 / 0x100000000; // 0x405d6a
    uint64_t v5 = 56 * v4; // 0x405d7c
    int64_t v6; // 0x405d20
    if (v5 < 4015) {
        // 0x405d8d
        v6 = (int64_t)&v2 + 31 - (v5 + 39 & -16) & -16;
    } else {
        // 0x4061fe
        v6 = function_40b890(v5, a2, v1, v3);
    }
    // 0x405da5
    if (v6 == 0) {
        // 0x4061ed
        return 0;
    }
    int64_t ps = 0; // bp-244, 0x405dd1
    int64_t v7 = v6 + 48 * v4; // 0x405de0
    int64_t v8 = a2; // 0x405de3
    char v9 = 0; // 0x405de3
    int64_t v10 = v6; // 0x405de3
    int64_t v11; // 0x405d20
    int32_t v12; // bp-212, 0x405d20
    char v13; // 0x405d20
    int32_t len; // 0x405d20
    int64_t str; // 0x405d20
    char v14; // 0x405d20
    while (true) {
      lab_0x405e95:
        // 0x405e95
        v11 = v10;
        str = v8;
        v14 = v9;
        if (v9 == 0) {
            unsigned char v15 = *(char *)str; // 0x405df7
            int32_t v16 = *(int32_t *)((int64_t)(4 * v15 / 32) + (int64_t)&g10); // 0x405e02
            if ((1 << (int32_t)(v15 % 32) & v16) == 0) {
                int32_t v17 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40621b
                v14 = 1;
                if (v17 == 0) {
                    // break -> 0x4066af
                    break;
                }
                goto lab_0x405ea2;
            } else {
                // 0x405e13
                v12 = v15;
                v9 = 0;
                len = 1;
                v13 = 1;
                if (v15 == 0) {
                    goto lab_0x405f57_2;
                }
                goto lab_0x405e4a;
            }
        } else {
            goto lab_0x405ea2;
        }
    }
  lab_0x4066af:
    // 0x4066af
    __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 150, "mbuiter_multi_next");
    // 0x4066c8
    function_405d00();
    // 0x4066cd
    __assert_fail("iter->cur.wc == 0", "mbuiter.h", 179, "mbuiter_multi_next");
    return &g100;
  lab_0x405f57_2:
    // 0x405f57
    *(int64_t *)(v7 + 8) = 1;
    struct _TYPEDEF___mbstate_t * v18 = (struct _TYPEDEF___mbstate_t *)2; // 0x405f7a
    int64_t v19 = v6; // 0x405f7a
    int64_t v20 = 0; // 0x405f7a
    if ((int32_t)v3 < 3) {
        goto lab_0x40600b;
    } else {
        goto lab_0x405f80;
    }
  lab_0x405ea2:;
    char v21 = v14;
    int64_t v22 = function_409040(str, (int64_t)__ctype_get_mb_cur_max()); // 0x405eb4
    int64_t v23 = function_40b170(&v12, str, v22); // 0x405ece
    v9 = v21;
    len = 1;
    v13 = 0;
    switch (v23) {
        case -1: {
            goto lab_0x405e4a;
        }
        case -2: {
            // 0x406280
            v9 = v21;
            len = strlen((char *)str);
            v13 = 0;
            goto lab_0x405e4a;
        }
        default: {
            int32_t v24 = v23; // 0x405ef1
            if (v23 == 0) {
                // 0x405ef3
                if (*(char *)str != 0) {
                    // 0x406696
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x4066af;
                }
                // 0x405f0e
                v24 = 1;
                if (v12 != 0) {
                    // 0x4066c8
                    function_405d00();
                    // 0x4066cd
                    __assert_fail("iter->cur.wc == 0", "mbuiter.h", 179, "mbuiter_multi_next");
                    return &g100;
                }
            }
            int32_t v25 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405f30
            v9 = v25 == 0 ? v21 : 0;
            len = v24;
            v13 = 1;
            if (v12 == 0) {
                goto lab_0x405f57_2;
            }
            goto lab_0x405e4a;
        }
    }
  lab_0x405e4a:;
    int32_t v26 = len;
    int64_t v27; // bp-208, 0x405d20
    if (str == (int64_t)&v27) {
        int64_t * dest_mem = memcpy((int64_t *)(v11 + 24), &v27, v26); // 0x40623f
        *(int64_t *)v11 = (int64_t)dest_mem;
    } else {
        // 0x405e6c
        *(int64_t *)v11 = str;
    }
    int64_t v28 = v26;
    *(int64_t *)(v11 + 8) = v28;
    *(char *)(v11 + 16) = v13;
    if (v13 != 0) {
        // 0x405e7a
        *(int32_t *)(v11 + 20) = v12;
    }
    // 0x405e83
    v8 = str + v28;
    v10 = v11 + 48;
    goto lab_0x405e95;
  lab_0x40600b:
    // 0x40600b
    *(int64_t *)v2 = 0;
    int64_t ps3 = 0; // bp-180, 0x40604f
    int64_t ps2 = 0; // bp-116, 0x40605a
    char v29 = 0; // 0x40607a
    char v30 = 0; // 0x40607a
    char v31 = 0; // 0x40607a
    int64_t v32 = a1; // 0x40607a
    int64_t v33 = a1; // 0x40607a
    int64_t v34 = 0; // 0x40607a
    goto lab_0x406080;
  lab_0x405f80:;
    struct _TYPEDEF___mbstate_t * v137 = v18;
    int64_t v142 = v19 + 48;
    int32_t * v67 = (int32_t *)(v19 + 68);
    int64_t * v77 = (int64_t *)(v19 + 56);
    int64_t * str2 = (int64_t *)v142;
    int64_t v65 = v20; // 0x405f85
    goto lab_0x405fad;
  lab_0x406080:;
    int64_t v35 = v34;
    int64_t v36 = v33;
    int64_t v37 = v32;
    char v38 = v31;
    char v39 = v30;
    char v40 = v29;
    char v41 = v40; // 0x406082
    char v42 = v39; // 0x406082
    int64_t v43 = v37; // 0x406082
    int64_t v44 = v36; // 0x406082
    int64_t v45 = v35; // 0x406082
    int64_t v46; // 0x405d20
    int64_t v47; // 0x405d20
    int64_t v48; // 0x405d20
    int64_t v49; // 0x405d20
    char v50; // 0x405d20
    char v51; // 0x405d20
    char v52; // 0x405d20
    char v53; // 0x405d20
    int64_t v54; // 0x405d20
    int64_t v55; // 0x405d20
    char v56; // 0x405d20
    char v57; // 0x405d20
    char v58; // 0x405d20
    char v59; // 0x405d20
    char v60; // 0x405d20
    int64_t v61; // 0x405d20
    int64_t v62; // 0x405d20
    int64_t v63; // 0x405d20
    if (v38 == 0) {
        goto lab_0x406142;
    } else {
        // 0x406088
        v52 = v40;
        v56 = v39;
        v50 = v38;
        v54 = v37;
        v48 = v36;
        v59 = v58;
        v62 = v61;
        v46 = v35;
        v53 = v40;
        v57 = v39;
        v51 = v38;
        v55 = v37;
        v49 = v36;
        v60 = v58;
        v63 = v61;
        v47 = v35;
        if (v58 != 0) {
            goto lab_0x406182;
        } else {
            goto lab_0x406092;
        }
    }
  lab_0x405fad:;
    int64_t v64 = v65;
    int64_t v66 = 48 * v64 + v6; // 0x405fb5
    if (*(char *)(v19 + 64) != 0) {
        // 0x405f90
        if (*(char *)(v66 + 16) == 0) {
            goto lab_0x405fbc;
        } else {
            // 0x405f96
            if (*v67 == *(int32_t *)(v66 + 20)) {
                goto lab_0x405fd5;
            } else {
                goto lab_0x405f9f;
            }
        }
    } else {
        goto lab_0x405fbc;
    }
  lab_0x406142:;
    int64_t v68 = v45;
    int64_t str4 = v44;
    int64_t v69 = v43;
    char v70 = v42;
    char v71 = v41;
    char v72 = v71; // 0x406146
    int32_t v73; // bp-84, 0x405d20
    if (v71 != 0) {
        goto lab_0x4062c8;
    } else {
        unsigned char v74 = *(char *)str4; // 0x406150
        int32_t v75 = *(int32_t *)((int64_t)(4 * v74 / 32) + (int64_t)&g10); // 0x40615b
        if ((1 << (int32_t)(v74 % 32) & v75) == 0) {
            int32_t v76 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x4062b7
            v72 = 1;
            if (v76 == 0) {
                goto lab_0x4066af;
            } else {
                goto lab_0x4062c8;
            }
        } else {
            // 0x40616c
            v73 = v74;
            v53 = v71;
            v57 = v70;
            v51 = 1;
            v55 = v69;
            v49 = str4;
            v60 = 1;
            v63 = 1;
            v47 = v68;
            goto lab_0x406182;
        }
    }
  lab_0x405fbc:;
    int64_t n = *v77; // 0x405fbc
    if (n != *(int64_t *)(v66 + 8)) {
        goto lab_0x405f9f;
    } else {
        int64_t str3 = *(int64_t *)v66; // 0x405fc6
        if (memcmp((int64_t *)*str2, (int64_t *)str3, (int32_t)n) != 0) {
            goto lab_0x405f9f;
        } else {
            goto lab_0x405fd5;
        }
    }
  lab_0x4062c8:;
    char v78 = v72;
    int64_t v79 = function_409040(str4, (int64_t)__ctype_get_mb_cur_max()); // 0x4062d7
    int64_t v80 = function_40b170(&v73, str4, v79); // 0x4062ee
    v52 = v78;
    v56 = v70;
    v50 = 1;
    v54 = v69;
    v48 = str4;
    v59 = 0;
    v62 = 1;
    v46 = v68;
    int64_t v81; // 0x405d20
    switch (v80) {
        case -1: {
            goto lab_0x406092;
        }
        case -2: {
            int32_t len2 = strlen((char *)str4); // 0x40662c
            v52 = v78;
            v56 = v70;
            v50 = 1;
            v54 = v69;
            v48 = str4;
            v59 = 0;
            v62 = len2;
            v46 = v68;
            goto lab_0x406092;
        }
        default: {
            // 0x40630b
            v81 = v80;
            if (v80 != 0) {
                goto lab_0x406330;
            } else {
                // 0x406310
                if (*(char *)str4 != 0) {
                    // 0x406696
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x4066af;
                } else {
                    // 0x406325
                    v81 = 1;
                    if (v73 != 0) {
                        goto lab_0x4066c8;
                    } else {
                        goto lab_0x406330;
                    }
                }
            }
        }
    }
  lab_0x406182:;
    int32_t v82 = v73; // 0x406182
    if (v82 == 0) {
        // 0x4061d1
        function_40b900(v6);
        return 1;
    }
    int64_t v83 = v47;
    int64_t v84 = v63;
    char v85 = v60;
    int64_t v86 = v49;
    int64_t v87 = v55;
    char v88 = v51;
    char v89 = v57;
    char v90 = v53;
    int64_t v91 = 48 * v83 + v6; // 0x406191
    char v92 = v90; // 0x406198
    char v93 = v89; // 0x406198
    char v94 = v88; // 0x406198
    int64_t v95 = v87; // 0x406198
    int64_t v96 = v86; // 0x406198
    char v97 = v85; // 0x406198
    int64_t v98 = v84; // 0x406198
    int64_t v99 = v91; // 0x406198
    int64_t v100 = v83; // 0x406198
    int64_t v101; // 0x405d20
    int64_t v102; // 0x405d20
    int64_t v103; // 0x405d20
    int64_t v104; // 0x405d20
    char v105; // 0x405d20
    char v106; // 0x405d20
    char v107; // 0x405d20
    int64_t v108; // 0x405d20
    int64_t v109; // 0x405d20
    char v110; // 0x405d20
    char v111; // 0x405d20
    char v112; // 0x405d20
    int64_t v113; // 0x405d20
    int64_t v114; // 0x405d20
    if (*(char *)(v91 + 16) == 0) {
        goto lab_0x40609d;
    } else {
        // 0x40619e
        v106 = v90;
        v110 = v89;
        v105 = v88;
        v108 = v87;
        v103 = v86;
        v112 = v85;
        v113 = v84;
        v102 = v83;
        v107 = v90;
        v111 = v89;
        v109 = v87;
        v104 = v86;
        v114 = v84;
        v101 = v83;
        if (*(int32_t *)(v91 + 20) != v82) {
            goto lab_0x4060ab;
        } else {
            goto lab_0x4061a7;
        }
    }
  lab_0x406092:
    // 0x406092
    v92 = v52;
    v93 = v56;
    v94 = v50;
    v95 = v54;
    v96 = v48;
    v97 = v59;
    v98 = v62;
    v99 = 48 * v46 + v6;
    v100 = v46;
    goto lab_0x40609d;
  lab_0x405f9f:;
    int64_t v139; // 0x405d20
    int64_t v140; // 0x405d20
    if (v64 == 0) {
        int64_t v185 = (int64_t)v137;
        *(int64_t *)(8 * v185 + v7) = v185;
        v139 = v185;
        v140 = 0;
        goto lab_0x405feb;
    } else {
        // 0x405fa8
        v65 = v64 - *(int64_t *)(8 * v64 + v7);
        goto lab_0x405fad;
    }
  lab_0x40609d:;
    int64_t v115 = v100;
    int64_t v116 = v99;
    int64_t n2 = v98;
    char v117 = v97;
    int64_t str6 = v96;
    int64_t v118 = v95;
    char v119 = v94;
    char v120 = v93;
    char v121 = v92;
    v106 = v121;
    v110 = v120;
    v105 = v119;
    v108 = v118;
    v103 = str6;
    v112 = v117;
    v113 = n2;
    v102 = v115;
    int64_t v122; // 0x405d20
    int64_t v123; // 0x405d20
    int64_t v124; // 0x405d20
    int64_t v125; // 0x405d20
    char v126; // 0x405d20
    char v127; // 0x405d20
    char v128; // 0x405d20
    int64_t v129; // 0x405d20
    int64_t v130; // 0x405d20
    char v131; // 0x405d20
    char v132; // 0x405d20
    char v133; // 0x405d20
    int64_t v134; // 0x405d20
    int64_t v135; // 0x405d20
    if (*(int64_t *)(v116 + 8) == n2) {
        int64_t str5 = *(int64_t *)v116; // 0x40635c
        int32_t memcmp_rc = memcmp((int64_t *)str5, (int64_t *)str6, (int32_t)n2); // 0x40635f
        v107 = v121;
        v111 = v120;
        v109 = v118;
        v104 = str6;
        v114 = n2;
        v101 = v115;
        if (memcmp_rc == 0) {
            goto lab_0x4061a7;
        } else {
            // 0x40636c
            v128 = v121;
            v132 = v120;
            v129 = v118;
            v124 = str6;
            v134 = n2;
            v123 = 0;
            v127 = v121;
            v131 = v120;
            v126 = v119;
            v130 = v118;
            v125 = str6;
            v133 = v117;
            v135 = n2;
            v122 = v115;
            if (v115 == 0) {
                goto lab_0x4060c1;
            } else {
                goto lab_0x406375;
            }
        }
    } else {
        goto lab_0x4060ab;
    }
  lab_0x405fd5:;
    int64_t v136 = (int64_t)v137;
    int64_t v138 = v64 + 1; // 0x405fdc
    *(int64_t *)(8 * v136 + v7) = v136 - v138;
    v139 = v136;
    v140 = v138;
    goto lab_0x405feb;
  lab_0x406330:;
    int32_t v184 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x40633c
    v53 = v184 == 0 ? v78 : 0;
    v57 = v70;
    v51 = 1;
    v55 = v69;
    v49 = str4;
    v60 = 1;
    v63 = v81;
    v47 = v68;
    goto lab_0x406182;
  lab_0x4060ab:
    // 0x4060ab
    v128 = v106;
    v132 = v110;
    v129 = v108;
    v124 = v103;
    v134 = v113;
    v123 = v102;
    v127 = v106;
    v131 = v110;
    v126 = v105;
    v130 = v108;
    v125 = v103;
    v133 = v112;
    v135 = v113;
    v122 = v102;
    if (v102 != 0) {
        goto lab_0x406375;
    } else {
        goto lab_0x4060c1;
    }
  lab_0x405feb:;
    int64_t v141 = v139 + 1; // 0x405feb
    v18 = (struct _TYPEDEF___mbstate_t *)v141;
    v19 = v142;
    v20 = v140;
    if (v141 != v4) {
        goto lab_0x405f80;
    } else {
        goto lab_0x40600b;
    }
  lab_0x4061a7:;
    int64_t v143 = v109;
    int64_t v144 = v101 + 1; // 0x4061ab
    v41 = v107;
    v42 = v111;
    v43 = v143;
    v44 = v114 + v104;
    v45 = v144;
    if (v144 == v4) {
        // 0x4061c0
        *(int64_t *)v2 = v143;
        // 0x4061d1
        function_40b900(v6);
        return 1;
    }
    goto lab_0x406142;
  lab_0x406375:;
    int64_t v145 = *(int64_t *)(8 * v122 + v7); // 0x406375
    int64_t v146 = v122 - v145; // 0x406381
    char v147 = v131; // 0x406387
    int64_t v148 = v130; // 0x406387
    int64_t v149 = v122; // 0x406387
    char v150 = v131; // 0x406387
    int64_t v151 = v130; // 0x406387
    int64_t v152 = v145; // 0x406387
    if (v145 == 0) {
        goto lab_0x406080_2;
    } else {
        goto lab_0x4063be;
    }
  lab_0x4060c1:;
    int64_t str7 = v129;
    char v153 = v132;
    char v154 = v153; // 0x4060c8
    int32_t v155; // 0x405d20
    int32_t v156; // bp-148, 0x405d20
    int64_t v157; // 0x405d20
    char v158; // 0x405d20
    if (v153 != 0) {
        goto lab_0x406563;
    } else {
        unsigned char v159 = *(char *)str7; // 0x4060d5
        int32_t v160 = *(int32_t *)((int64_t)(4 * v159 / 32) + (int64_t)&g10); // 0x4060e0
        if ((1 << (int32_t)(v159 % 32) & v160) == 0) {
            int32_t v161 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x40654f
            v154 = 1;
            if (v161 == 0) {
                goto lab_0x4066af;
            } else {
                goto lab_0x406563;
            }
        } else {
            int32_t v162 = v159; // 0x406106
            v156 = v162;
            v155 = v162;
            v158 = v153;
            v157 = 1;
            goto lab_0x406113;
        }
    }
  lab_0x406080_2:
    // 0x406080
    v29 = v127;
    v30 = v147;
    v31 = v126;
    v32 = v148;
    v33 = v125;
    v58 = v133;
    v61 = v135;
    v34 = v149;
    goto lab_0x406080;
  lab_0x4063be:;
    int64_t str8 = v151;
    char v163 = v150;
    char v164 = v163; // 0x4063c5
    int32_t v165; // 0x405d20
    char v166; // 0x405d20
    if (v163 != 0) {
        goto lab_0x40643b;
    } else {
        unsigned char v167 = *(char *)str8; // 0x4063ce
        int32_t v168 = *(int32_t *)((int64_t)(4 * v167 / 32) + (int64_t)&g10); // 0x4063d9
        if ((1 << (int32_t)(v167 % 32) & v168) == 0) {
            int32_t v169 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x406427
            v164 = 1;
            if (v169 == 0) {
                goto lab_0x4066af;
            } else {
                goto lab_0x40643b;
            }
        } else {
            int32_t v170 = v167; // 0x4063fb
            v156 = v170;
            v165 = v170;
            v166 = v163;
            goto lab_0x406408;
        }
    }
  lab_0x406563:;
    char v171 = v154;
    int64_t v172 = function_409040(str7, (int64_t)__ctype_get_mb_cur_max()); // 0x406575
    int64_t v173 = function_40b170(&v156, str7, v172); // 0x406592
    char v174 = v171; // 0x405d20
    int64_t len3 = 1; // 0x405d20
    int64_t v175; // 0x405d20
    switch (v173) {
        case -1: {
            goto lab_0x406121;
        }
        case -2: {
            // 0x406677
            v174 = v171;
            len3 = strlen((char *)str7);
            goto lab_0x406121;
        }
        default: {
            // 0x4065b2
            v175 = v173;
            if (v173 != 0) {
                goto lab_0x4065e0;
            } else {
                // 0x4065b7
                if (*(char *)str7 != 0) {
                    // 0x406696
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x4066af;
                } else {
                    // 0x4065d2
                    v175 = 1;
                    if (v156 != 0) {
                        goto lab_0x4066c8;
                    } else {
                        goto lab_0x4065e0;
                    }
                }
            }
        }
    }
  lab_0x40643b:;
    char v176 = v164;
    int64_t v177 = function_409040(str8, (int64_t)__ctype_get_mb_cur_max()); // 0x40644d
    int64_t v178 = function_40b170(&v156, str8, v177); // 0x406467
    char v179 = v176; // 0x405d20
    int64_t len4 = 1; // 0x405d20
    switch (v178) {
        case -1: {
            goto lab_0x40639f;
        }
        case -2: {
            // 0x406500
            v179 = v176;
            len4 = strlen((char *)str8);
            goto lab_0x40639f;
        }
        default: {
            // 0x406483
            if (v178 != 0) {
                goto lab_0x4064b1;
            } else {
                // 0x406488
                if (*(char *)str8 != 0) {
                    // 0x406696
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x4066af;
                } else {
                    // 0x4064a3
                    if (v156 != 0) {
                        goto lab_0x4066cd;
                    } else {
                        goto lab_0x4064b1;
                    }
                }
            }
        }
    }
  lab_0x406121:
    // 0x406121
    v41 = v128;
    v42 = v174;
    v43 = len3 + str7;
    v44 = v134 + v124;
    v45 = v123;
    goto lab_0x406142;
  lab_0x40639f:;
    int64_t v180 = len4 + str8; // 0x4063ad
    int64_t v181 = v152 - 1; // 0x4063b4
    v147 = v179;
    v148 = v180;
    v149 = v146;
    v150 = v179;
    v151 = v180;
    v152 = v181;
    if (v181 == 0) {
        goto lab_0x406080_2;
    } else {
        goto lab_0x4063be;
    }
  lab_0x4065e0:;
    int32_t v182 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x4065f2
    v155 = v156;
    v158 = v182 == 0 ? v171 : 0;
    v157 = v175;
    goto lab_0x406113;
  lab_0x406113:
    // 0x406113
    v174 = v158;
    len3 = v157;
    if (v155 == 0) {
        abort();
        // UNREACHABLE
    }
    goto lab_0x406121;
  lab_0x4064b1:;
    int32_t v183 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x4064c3
    v165 = v156;
    v166 = v183 == 0 ? v176 : 0;
    goto lab_0x406408;
  lab_0x406408:
    // 0x406408
    v179 = v166;
    len4 = 1;
    if (v165 == 0) {
        // 0x406412
        abort();
        // UNREACHABLE
    }
    goto lab_0x40639f;
}
// Address range: 0x4066f0 - 0x4075c0
int64_t function_4066f0(int64_t result, int64_t str2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4066f0
    int64_t v1; // 0x4066f0
    char v2 = v1;
    int64_t v3; // 0x4066f0
    int64_t v4; // 0x4066f0
    int64_t v5; // 0x4066f0
    int64_t v6; // 0x4066f0
    int64_t v7; // 0x4066f0
    int64_t v8; // 0x4066f0
    int64_t v9; // 0x4066f0
    int64_t v10; // 0x4066f0
    int64_t result2; // 0x4066f0
    int64_t v11; // 0x4066f0
    int64_t v12; // 0x4066f0
    char v13; // 0x4066f0
    int64_t v14; // 0x4066f0
    int64_t v15; // 0x4067b2
    int64_t v16; // 0x4067aa
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x406716
        if (v2 == 0) {
            // 0x40684d
            return result;
        }
        char v17 = v1;
        if (v17 == 0) {
            // 0x40684d
            return 0;
        }
        // 0x4067aa
        v10 = 1;
        v13 = v17;
        v14 = 0;
        v11 = result;
        v6 = 0;
        v8 = str2;
        v3 = 0;
        while (true) {
          lab_0x4067aa:;
            int64_t str = v8;
            int64_t v18 = v6;
            int64_t v19 = v11;
            int64_t v20 = v14;
            v15 = v19 + 1;
            int64_t v21; // 0x4066f0
            if (v13 == v2) {
                char v22 = *(char *)(str2 + 1); // 0x406860
                result2 = v19;
                if (v22 == 0) {
                    // break -> 0x40684d
                    break;
                }
                char v23 = *(char *)v15; // 0x406869
                result2 = 0;
                if (v23 == 0) {
                    // break -> 0x40684d
                    break;
                }
                int64_t v24 = v20 + 2; // 0x406876
                v21 = v24;
                if (v22 == v23) {
                    int64_t v25 = v24; // 0x40688e
                    char v26 = *(char *)(str2 - v20 + v25); // 0x4068aa
                    result2 = v19;
                    if (v26 == 0) {
                        return result2;
                    }
                    char v27 = *(char *)(v19 - v20 + v25); // 0x406890
                    result2 = 0;
                    if (v27 == 0) {
                        return result2;
                    }
                    // 0x40689d
                    v25++;
                    v21 = v25;
                    while (v26 == v27) {
                        // 0x4068aa
                        v26 = *(char *)(str2 - v20 + v25);
                        result2 = v19;
                        if (v26 == 0) {
                            return result2;
                        }
                        // 0x406890
                        v27 = *(char *)(v19 - v20 + v25);
                        result2 = 0;
                        if (v27 == 0) {
                            return result2;
                        }
                        // 0x40689d
                        v25++;
                        v21 = v25;
                    }
                }
            } else {
                // 0x4067bf
                v21 = v20 + 1;
                result2 = 0;
                if (*(char *)v15 == 0) {
                    // break -> 0x40684d
                    break;
                }
            }
            // 0x4067c9
            v16 = v3 + 1;
            v12 = v21;
            unsigned char v28 = (char)(v16 >= 10) & (char)v10; // 0x4067d0
            v9 = v10;
            v5 = v18;
            v7 = str;
            if (v28 == 0) {
                goto lab_0x4067a0;
            } else {
                int64_t v29 = v28; // 0x4067d0
                v9 = v29;
                v5 = v18;
                v7 = str;
                if (v12 >= 5 * v16) {
                    // 0x406748
                    v4 = v18;
                    if (str == 0) {
                        goto lab_0x40676f;
                    } else {
                        int64_t v30 = str + (int64_t)strnlen((char *)str, (int32_t)(v12 - v18)); // 0x406766
                        v4 = v12;
                        v9 = v29;
                        v5 = v12;
                        v7 = v30;
                        if (*(char *)v30 != 0) {
                            goto lab_0x4067a0;
                        } else {
                            goto lab_0x40676f;
                        }
                    }
                } else {
                    goto lab_0x4067a0;
                }
            }
        }
      lab_0x40684d_2:
        // 0x40684d
        return result2;
    }
    int64_t ps = 0; // bp-372, 0x40680b
    int32_t * v31 = (int32_t *)((v1 / 8 & 28) + (int64_t)&g10); // 0x40681a
    int32_t v32 = 1 << (int32_t)(v2 % 32);
    int32_t v33; // 0x4066f0
    int32_t v34; // 0x4066f0
    char v35; // 0x4066f0
    int64_t v36; // 0x4066f0
    int32_t v37; // bp-340, 0x4066f0
    bool v38; // 0x4066f0
    int64_t v39; // 0x4066f0
    int64_t len; // 0x4066f0
    if ((*v31 & v32) == 0) {
        // 0x407430
        if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
          lab_0x40758c_5:
            // 0x40758c
            __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 150, "mbuiter_multi_next");
            // 0x4075a5
            __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
            return &g100;
        }
        int64_t v40 = function_409040(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x407455
        int64_t v41 = function_40b170(&v37, str2, v40); // 0x407468
        len = 1;
        v38 = true;
        switch (v41) {
            case -1: {
                goto lab_0x4068c7;
            }
            case -2: {
                // 0x40753e
                len = strlen((char *)str2);
                v38 = true;
                goto lab_0x4068c7;
            }
            default: {
                // 0x407486
                if (v41 == 0) {
                    if (v2 != 0) {
                        // 0x4075a5
                        __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    }
                    int32_t v42; // 0x4074a2
                    if (v42 != 0) {
                      lab_0x4074aa_6:
                        // 0x4074aa
                        function_405d00();
                    }
                }
                // 0x4074b0
                mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
                v33 = v37;
                v39 = v41;
                int32_t v43; // 0x4066f0
                v34 = v43;
                char v44; // 0x4066f0
                v35 = v44;
                int64_t v45; // 0x4066f0
                v36 = v45;
                goto lab_0x406842;
            }
        }
    } else {
        int32_t v46 = v2; // 0x406834
        v37 = v46;
        v33 = v46;
        v39 = 1;
        goto lab_0x406842;
    }
  lab_0x4067a0:
    // 0x4067a0
    v10 = v9;
    v13 = *(char *)v15;
    v14 = v12;
    v11 = v15;
    v6 = v5;
    v8 = v7;
    v3 = v16;
    goto lab_0x4067aa;
  lab_0x40676f:;
    int32_t len2 = strlen((char *)str2); // 0x406776
    char v47; // bp-120, 0x4066f0
    int64_t v48 = function_405b80(v15, str2, (int64_t)len2, (int64_t *)&v47, v4); // 0x40678c
    v9 = v48;
    v5 = v4;
    v7 = 0;
    if ((char)v48 != 0) {
        // 0x407531
        result2 = v47;
        goto lab_0x40684d_2;
    }
    goto lab_0x4067a0;
  lab_0x406c03:;
    // 0x406c03
    int64_t str3; // 0x4066f0
    int64_t v49 = function_409040(str3, (int64_t)__ctype_get_mb_cur_max()); // 0x406c16
    int32_t v50; // bp-84, 0x4066f0
    int64_t v51 = function_40b170(&v50, str3, v49); // 0x406c35
    int64_t len3 = 1; // 0x4066f0
    char v52 = 0; // 0x4066f0
    int64_t ps2; // bp-116, 0x4066f0
    int64_t str6; // 0x4066f0
    switch (v51) {
        case -1: {
            goto lab_0x406b37;
        }
        case -2: {
            // 0x406fe8
            len3 = strlen((char *)str3);
            v52 = 0;
            goto lab_0x406b37;
        }
        default: {
            // 0x406c56
            if (v51 == 0) {
                char v53 = *(char *)str3; // 0x406c6f
                if (v53 != 0) {
                    // 0x4075a5
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    return &g100;
                }
                int32_t v54 = v50; // 0x406c78
                if (v54 != 0) {
                    goto lab_0x4074aa_6;
                }
            }
            // 0x406c87
            if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) != 0) {
                // 0x406ca0
                v47 = 0;
            }
            // 0x406ca8
            result2 = str6;
            len3 = v51;
            v52 = 1;
            if (v50 == 0) {
                // 0x40684d
                return result2;
            }
            goto lab_0x406b37;
        }
    }
  lab_0x406b37:;
    // 0x406b37
    int64_t v55; // 0x4066f0
    int64_t v56 = v55 + 1;
    int64_t str5; // 0x4066f0
    char * str4 = (char *)str5;
    char v57 = v52;
    int64_t v58 = len3;
    char v59; // 0x4066f0
    char v60 = v59; // 0x406b3f
    int32_t v61; // 0x4066f0
    int32_t v62; // bp-148, 0x4066f0
    int32_t v63; // 0x4066f0
    int64_t ps3; // bp-180, 0x4066f0
    char v64; // 0x4066f0
    if (v59 != 0) {
        goto lab_0x406d45;
    } else {
        unsigned char v65 = *str4; // 0x406b4d
        int32_t v66 = *(int32_t *)((int64_t)(4 * v65 / 32) + (int64_t)&g10); // 0x406b58
        if ((1 << (int32_t)(v65 % 32) & v66) == 0) {
            int32_t v67 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x406d30
            v60 = 1;
            if (v67 == 0) {
                // break (via goto) -> 0x40758c
                goto lab_0x40758c_5;
            }
            goto lab_0x406d45;
        } else {
            int32_t v68 = v65; // 0x406b80
            v62 = v68;
            v63 = 1;
            v64 = v59;
            v61 = v68;
            if (v65 == 0) {
                // 0x40684d
                return 0;
            }
            goto lab_0x406b9e;
        }
    }
  lab_0x406d45:;
    char v69 = v60;
    int64_t v70 = function_409040(str5, (int64_t)__ctype_get_mb_cur_max()); // 0x406d58
    int64_t v71 = function_40b170(&v62, str5, v70); // 0x406d77
    int32_t len4 = 1; // 0x4066f0
    char v72 = v69; // 0x4066f0
    switch (v71) {
        case -1: {
            goto lab_0x406cec;
        }
        case -2: {
            // 0x407018
            len4 = strlen(str4);
            v72 = v69;
            goto lab_0x406cec;
        }
        default: {
            int32_t v73 = v71; // 0x406d9b
            if (v71 == 0) {
                // 0x406d9d
                if (*str4 != 0) {
                    // 0x4075a5
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    return &g100;
                }
                // 0x406dba
                v73 = 1;
                if (v62 != 0) {
                    goto lab_0x4074aa_6;
                }
            }
            int32_t v74 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x406dd9
            v63 = v73;
            v64 = v74 == 0 ? v69 : 0;
            v61 = v62;
            if (v62 == 0) {
                // 0x40684d
                return 0;
            }
            goto lab_0x406b9e;
        }
    }
  lab_0x406cec:;
    int32_t n = len4;
    int64_t v75; // 0x4066f0
    int64_t v76 = v75; // 0x406cfc
    char v77; // 0x4066f0
    char v78 = v77; // 0x406cfc
    char v79; // 0x4066f0
    char v80 = v79; // 0x406cfc
    int128_t v81; // 0x4066f0
    int128_t v82 = v81; // 0x406cfc
    int64_t v83; // 0x4066f0
    int64_t v84 = v83; // 0x406cfc
    int32_t v85; // 0x4066f0
    int32_t v86 = v85; // 0x406cfc
    int32_t v87 = n; // 0x406cfc
    char v88; // 0x4066f0
    char v89 = v88; // 0x406cfc
    int64_t v90; // 0x4066f0
    int64_t v91 = v90; // 0x406cfc
    int64_t v92 = v56; // 0x406cfc
    int64_t v93; // 0x4066f0
    int64_t v94 = v93; // 0x406cfc
    if (v58 != (int64_t)n) {
        // break -> 0x406d02
        goto lab_0x406d02_3;
    }
    int32_t memcmp_rc = memcmp((int64_t *)str5, (int64_t *)str3, n); // 0x406e38
    int32_t v95 = n; // 0x406e42
    char v96 = v72; // 0x406e42
    bool v97 = memcmp_rc == 0; // 0x406e42
    goto lab_0x406bb6;
  lab_0x406b9e:;
    char v305 = v64;
    int32_t v306 = v63;
    len4 = v306;
    v72 = v305;
    if (v57 == 0) {
        goto lab_0x406cec;
    } else {
        // 0x406bac
        v95 = v306;
        v96 = v305;
        v97 = v50 == v61;
        goto lab_0x406bb6;
    }
  lab_0x406bb6:;
    int32_t v98 = v95;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v82 = v81;
    v84 = v83;
    v86 = v85;
    v87 = v98;
    v89 = v88;
    v91 = v90;
    v92 = v56;
    v94 = v93;
    if (!v97) {
        // break -> 0x406d02
        goto lab_0x406d02_3;
    }
    int64_t v99 = v58 + str3; // 0x406bed
    int64_t v100 = str5 + (int64_t)v98; // 0x406bed
    char v101 = v96; // 0x406bed
    v55 = v56;
    goto lab_0x406bf5;
  lab_0x406f39:;
    // 0x406f39
    int128_t v104; // 0x4066f0
    int128_t v105 = v104;
    int64_t v106 = function_409040(str6, (int64_t)__ctype_get_mb_cur_max()); // 0x406f50
    int32_t v107; // bp-212, 0x4066f0
    int64_t v108 = function_40b170(&v107, str6, v106); // 0x406f67
    int32_t len5 = 1; // 0x4066f0
    int32_t v109; // 0x4066f0
    int32_t v110; // 0x4066f0
    int64_t ps4; // bp-244, 0x4066f0
    int128_t v111; // 0x4066f0
    switch (v108) {
        case -1: {
            goto lab_0x406e94;
        }
        case -2: {
            // 0x407208
            len5 = strlen((char *)str6);
            goto lab_0x406e94;
        }
        default: {
            int32_t v112 = v108; // 0x406f8b
            if (v108 == 0) {
                // 0x406f8d
                if (*(char *)str6 != 0) {
                    // 0x4075a5
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    return &g100;
                }
                // 0x406faa
                v112 = 1;
                if (v107 != 0) {
                    goto lab_0x4074aa_6;
                }
            }
            int32_t v113 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x406fc5
            v109 = v107;
            v111 = v113 == 0 ? v105 : 0;
            v110 = v112;
            goto lab_0x406980;
        }
    }
  lab_0x406e94:;
    int32_t v114 = len5;
    uint64_t v115; // 0x4066f0
    int64_t v116; // 0x4066f0
    unsigned char v117 = (char)(v115 >= 10) & (char)v116; // 0x406e9b
    int64_t v118; // 0x4066f0
    int64_t v119; // 0x4066f0
    int64_t v120; // 0x4066f0
    int128_t v121; // 0x4066f0
    int128_t v122; // 0x4066f0
    int32_t v123; // 0x4066f0
    int32_t v124; // 0x4066f0
    int128_t v125; // 0x4066f0
    int128_t v126; // 0x4066f0
    char v127; // 0x4066f0
    char v128; // 0x4066f0
    int64_t v129; // 0x4066f0
    int64_t v130; // 0x4066f0
    int64_t v131; // 0x4066f0
    int64_t v132; // 0x4066f0
    char v133; // 0x4066f0
    char v134; // 0x4066f0
    char v135; // 0x4066f0
    char v136; // 0x4066f0
    int64_t v137; // 0x4066f0
    int64_t v138; // 0x4066f0
    if (v117 == 0) {
        // 0x407058
        v132 = v131;
        v136 = v135;
        v134 = v133;
        v125 = v105;
        v138 = v137;
        v123 = v114;
        v121 = 0;
        v128 = v127;
        v130 = v129;
        v120 = v119 + 1;
        v118 = v116;
        goto lab_0x406eb8;
    } else {
        // 0x406ea4
        v126 = v105;
        v124 = v114;
        v122 = 0;
        if (v119 >= 5 * v115) {
            goto lab_0x407068;
        } else {
            // 0x406eb1
            v132 = v131;
            v136 = v135;
            v134 = v133;
            v125 = v105;
            v138 = v137;
            v123 = v114;
            v121 = 0;
            v128 = v127;
            v130 = v129;
            v120 = v119 + 1;
            v118 = v117;
            goto lab_0x406eb8;
        }
    }
  lab_0x406980:
    // 0x406980
    if (v109 == 0) {
        // 0x40684d
        return 0;
    }
    int32_t v139 = v110;
    int128_t v140 = v111;
    unsigned char v141 = (char)(v115 >= 10) & (char)v116; // 0x406998
    int64_t v142; // 0x4066f0
    int64_t v143; // 0x4066f0
    int128_t v144; // 0x4066f0
    int32_t v145; // 0x4066f0
    int128_t v146; // 0x4066f0
    char v147; // 0x4066f0
    int64_t v148; // 0x4066f0
    int64_t v149; // 0x4066f0
    char v150; // 0x4066f0
    char v151; // 0x4066f0
    int64_t v152; // 0x4066f0
    if (v141 == 0) {
        // 0x407048
        v149 = v131;
        v151 = v135;
        v150 = v133;
        v146 = v140;
        v152 = v137;
        v145 = v139;
        v144 = 1;
        v147 = v127;
        v148 = v129;
        v143 = v119 + 1;
        v142 = v116;
        goto lab_0x4069b5;
    } else {
        // 0x4069a1
        v126 = v140;
        v124 = v139;
        v122 = 1;
        if (v119 >= 5 * v115) {
            goto lab_0x407068;
        } else {
            // 0x4069ae
            v149 = v131;
            v151 = v135;
            v150 = v133;
            v146 = v140;
            v152 = v137;
            v145 = v139;
            v144 = 1;
            v147 = v127;
            v148 = v129;
            v143 = v119 + 1;
            v142 = v141;
            goto lab_0x4069b5;
        }
    }
  lab_0x406eb8:;
    int64_t v153 = v118;
    int64_t v154 = v120;
    int64_t v155 = v130;
    char v156 = v128;
    int32_t n2 = v123;
    int64_t v157 = v138;
    int128_t v158 = v125;
    char v159 = v134;
    char v160 = v136;
    int64_t v161 = v132;
    int64_t v162 = n2; // 0x406eb8
    int64_t v163 = v161; // 0x406ec5
    char v164 = v160; // 0x406ec5
    char v165 = v159; // 0x406ec5
    int128_t v166 = v158; // 0x406ec5
    int64_t v167 = v157; // 0x406ec5
    int32_t v168; // 0x4066f0
    int32_t v169 = v168; // 0x406ec5
    char v170 = v156; // 0x406ec5
    int64_t v171 = v155; // 0x406ec5
    int64_t v172 = v154; // 0x406ec5
    int64_t v173 = v153; // 0x406ec5
    int64_t v174 = v162; // 0x406ec5
    int64_t v175; // 0x4066f0
    int64_t v176; // 0x4066f0
    int128_t v177; // 0x4066f0
    int32_t v178; // 0x4066f0
    int128_t v179; // 0x4066f0
    char v180; // 0x4066f0
    int64_t v181; // 0x4066f0
    int64_t v182; // 0x4066f0
    char v183; // 0x4066f0
    char v184; // 0x4066f0
    int64_t v185; // 0x4066f0
    int64_t v186; // 0x4066f0
    if (v185 != v162) {
        goto lab_0x406d0a;
    } else {
        int32_t memcmp_rc2 = memcmp((int64_t *)str6, (int64_t *)str2, n2); // 0x406edb
        v182 = v161;
        v184 = v160;
        v183 = v159;
        v179 = v158;
        v186 = v157;
        v178 = n2;
        v177 = v121;
        v180 = v156;
        v181 = v155;
        v176 = v154;
        v175 = v153;
        v163 = v161;
        v164 = v160;
        v165 = v159;
        v166 = v158;
        v167 = v157;
        v169 = v168;
        v170 = v156;
        v171 = v155;
        v172 = v154;
        v173 = v153;
        v174 = v162;
        if (memcmp_rc2 != 0) {
            goto lab_0x406d0a;
        } else {
            goto lab_0x4069d1;
        }
    }
  lab_0x407068:;
    int128_t v187 = v122;
    int32_t v188 = v124;
    int128_t v189 = v126;
    int64_t v190 = v119 - v137; // 0x407070
    int64_t v191; // 0x4066f0
    int64_t v192; // 0x4066f0
    char v193; // 0x4066f0
    char v194; // 0x4066f0
    char v195; // 0x4066f0
    int64_t v196; // 0x4066f0
    int64_t v197; // 0x4066f0
    int64_t v198; // 0x4066f0
    int64_t v199; // 0x4066f0
    int64_t v200; // 0x4066f0
    int64_t v201; // 0x4066f0
    int64_t v202; // 0x4066f0
    int64_t v203; // 0x4066f0
    int64_t v204; // 0x4066f0
    int64_t v205; // 0x4066f0
    char v206; // 0x4066f0
    char v207; // 0x4066f0
    char v208; // 0x4066f0
    char v209; // 0x4066f0
    char v210; // 0x4066f0
    char v211; // 0x4066f0
    char v212; // 0x4066f0
    char v213; // 0x4066f0
    char v214; // 0x4066f0
    if (v190 == 0) {
        // 0x407574
        v200 = v131;
        v209 = v135;
        if (v133 == 0) {
            goto lab_0x407238;
        } else {
            // 0x40757c
            v201 = v131;
            v210 = v135;
            v207 = v133;
            v194 = v127;
            v196 = v129;
            v202 = v131;
            v211 = v135;
            v208 = v133;
            v195 = 0;
            v197 = v129;
            if (v127 == 0) {
                goto lab_0x40728c;
            } else {
                goto lab_0x40727e;
            }
        }
    } else {
        // 0x40707b
        v204 = v131;
        v213 = v135;
        v192 = v190;
        if (v133 == 0) {
            goto lab_0x40709f;
        } else {
            // 0x40707f
            v203 = v131;
            v212 = v135;
            v198 = v129;
            v191 = v190;
            v205 = v131;
            v214 = v135;
            v206 = v133;
            v193 = v127;
            v199 = v129;
            if (v127 != 0) {
                goto lab_0x4070e1;
            } else {
                goto lab_0x407086;
            }
        }
    }
  lab_0x4069b5:;
    int64_t v215 = v142;
    int64_t v216 = v143;
    int64_t v217 = v148;
    char v218 = v147;
    int128_t v219 = v144;
    int32_t v220 = v145;
    int64_t v221 = v152;
    int128_t v222 = v146;
    char v223 = v150;
    char v224 = v151;
    int64_t v225 = v149;
    v132 = v225;
    v136 = v224;
    v134 = v223;
    v125 = v222;
    v138 = v221;
    v123 = v220;
    v121 = v219;
    v128 = v218;
    v130 = v217;
    v120 = v216;
    v118 = v215;
    bool v226; // 0x4066f0
    if (v226) {
        goto lab_0x406eb8;
    } else {
        // 0x4069c0
        v182 = v225;
        v184 = v224;
        v183 = v223;
        v179 = v222;
        v186 = v221;
        v178 = v220;
        v177 = v219;
        v180 = v218;
        v181 = v217;
        v176 = v216;
        v175 = v215;
        v76 = v225;
        v78 = v224;
        v80 = v223;
        v82 = v222;
        v84 = v221;
        v86 = v220;
        v87 = v168;
        v89 = v218;
        v91 = v217;
        v92 = v216;
        v94 = v215;
        if (v107 != v37) {
            goto lab_0x406d02_3;
        } else {
            goto lab_0x4069d1;
        }
    }
  lab_0x406d0a:;
    int64_t v227 = v163; // 0x406d1e
    char v228 = v164; // 0x406d1e
    char v229 = v165; // 0x406d1e
    int64_t v230 = v174 + str6; // 0x406d1e
    int128_t v231 = v166; // 0x406d1e
    int64_t v232 = v167; // 0x406d1e
    int32_t v233 = v169; // 0x406d1e
    char v234 = v170; // 0x406d1e
    int64_t v235 = v171; // 0x406d1e
    int64_t v236 = v172; // 0x406d1e
    int64_t v237 = v115 + 1; // 0x406d1e
    int64_t v238 = v173; // 0x406d1e
    goto lab_0x406920;
  lab_0x4069d1:
    // 0x4069d1
    v93 = v175;
    int64_t v244 = v176;
    v90 = v181;
    v88 = v180;
    v85 = v178;
    v83 = v186;
    v81 = v179;
    v79 = v183;
    v77 = v184;
    v75 = v182;
    int128_t v245 = __asm_movdqa((int128_t)str6); // 0x4069d6
    int128_t v246 = __asm_movdqa(0); // 0x4069ef
    v47 = 0;
    int64_t v247 = __asm_movaps(v245); // 0x406a00
    int128_t v248 = __asm_movdqa(v177); // 0x406a10
    int128_t v249; // 0x4066f0
    int128_t v250 = __asm_movdqa(v249); // 0x406a23
    int64_t v251 = __asm_movaps(v246); // 0x406a2f
    __asm_movaps(v248);
    __asm_movaps(v250);
    ps2 = 0;
    int64_t v252; // 0x4066f0
    if ((*v31 & v32) == 0) {
        // 0x4072b8
        if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) == 0) {
            // break -> 0x40758c
            goto lab_0x40758c_5;
        }
        // 0x4072c8
        v47 = 1;
        int64_t v253 = function_409040(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x4072e7
        int64_t v254 = function_40b170(&v50, str2, v253); // 0x407301
        result2 = -1;
        switch (v254) {
            case -1: {
                goto lab_0x40684d_2;
            }
            case -2: {
                // 0x40684d
                return strlen((char *)str2);
            }
            default: {
                int64_t v255 = v254; // 0x407325
                if (v254 == 0) {
                    if (v2 != 0) {
                        // 0x4075a5
                        __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                        return &g100;
                    }
                    // 0x407344
                    v255 = 1;
                    if (v50 != 0) {
                        goto lab_0x4074aa_6;
                    }
                }
                int64_t v256 = v255;
                int32_t v257 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x407363
                v252 = v256;
                if (v257 != 0) {
                    // 0x40736c
                    v47 = 0;
                    v252 = v256;
                }
                goto lab_0x406a9a;
            }
        }
    } else {
        // 0x406a77
        v50 = v2;
        v252 = 1;
        goto lab_0x406a9a;
    }
  lab_0x407238:;
    char v258 = v209;
    int64_t str7 = v200;
    char v259 = v258; // 0x40723d
    int32_t v260; // 0x4066f0
    int32_t v261; // bp-276, 0x4066f0
    char v262; // 0x4066f0
    int64_t v263; // 0x4066f0
    int64_t v264; // 0x4066f0
    char v265; // 0x4066f0
    int64_t ps5; // bp-308, 0x4066f0
    char v266; // 0x4066f0
    if (v258 != 0) {
        goto lab_0x407398;
    } else {
        unsigned char v267 = *(char *)str7; // 0x407248
        int32_t v268 = *(int32_t *)((int64_t)(4 * v267 / 32) + (int64_t)&g10); // 0x407253
        if ((1 << (int32_t)(v267 % 32) & v268) == 0) {
            int32_t v269 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x407386
            v259 = 1;
            if (v269 == 0) {
                // break -> 0x40758c
                goto lab_0x40758c_5;
            }
            goto lab_0x407398;
        } else {
            int32_t v270 = v267; // 0x407275
            v261 = v270;
            v260 = v270;
            v264 = str7;
            v266 = v258;
            v265 = 1;
            v262 = 1;
            v263 = 1;
            goto lab_0x40727e_2;
        }
    }
  lab_0x40709f:;
    int64_t v271 = v192;
    char v272 = v213;
    int64_t str8 = v204;
    char v273 = v272; // 0x4070a4
    if (v272 != 0) {
        goto lab_0x40713f;
    } else {
        unsigned char v274 = *(char *)str8; // 0x4070af
        int32_t v275 = *(int32_t *)((int64_t)(4 * v274 / 32) + (int64_t)&g10); // 0x4070ba
        if ((1 << (int32_t)(v274 % 32) & v275) == 0) {
            int32_t v276 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x40712d
            v273 = 1;
            if (v276 == 0) {
                // break -> 0x40758c
                goto lab_0x40758c_5;
            }
            goto lab_0x40713f;
        } else {
            // 0x4070c7
            v261 = v274;
            v205 = str8;
            v214 = v272;
            v206 = 1;
            v193 = 1;
            v199 = 1;
            goto lab_0x4070e1;
        }
    }
  lab_0x406d02_3:
    // 0x406d02
    v163 = v76;
    v164 = v78;
    v165 = v80;
    v166 = v82;
    v167 = v84;
    v169 = v87;
    v170 = v89;
    v171 = v91;
    v172 = v92;
    v173 = v94;
    v174 = v86;
    goto lab_0x406d0a;
  lab_0x407398:;
    char v277 = v259;
    int64_t v278 = function_409040(str7, (int64_t)__ctype_get_mb_cur_max()); // 0x4073a8
    int64_t v279 = function_40b170(&v261, str7, v278); // 0x4073c1
    v202 = str7;
    v211 = v277;
    v208 = 1;
    v195 = 0;
    v197 = 1;
    switch (v279) {
        case -1: {
            goto lab_0x40728c;
        }
        case -2: {
            int32_t len6 = strlen((char *)str7); // 0x407518
            v202 = str7;
            v211 = v277;
            v208 = 1;
            v195 = 0;
            v197 = len6;
            goto lab_0x40728c;
        }
        default: {
            int64_t v280 = v279; // 0x4073e2
            if (v279 == 0) {
                // 0x4073e4
                if (*(char *)str7 != 0) {
                    // 0x4075a5
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    return &g100;
                }
                // 0x4073fb
                v280 = 1;
                if (v261 != 0) {
                    goto lab_0x4074aa_6;
                }
            }
            int32_t v281 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x407413
            v201 = str7;
            v210 = v281 == 0 ? v277 : 0;
            v207 = 1;
            v194 = 1;
            v196 = v280;
            goto lab_0x40727e;
        }
    }
  lab_0x40728c:;
    int64_t v282 = v202; // 0x407294
    char v283 = v211; // 0x407294
    char v284 = v208; // 0x407294
    char v285 = v195; // 0x407294
    int64_t v286 = v197; // 0x407294
    int64_t v287 = 1; // 0x407294
    goto lab_0x40729a;
  lab_0x40727e:
    // 0x40727e
    v260 = v261;
    v264 = v201;
    v266 = v210;
    v265 = v207;
    v262 = v194;
    v263 = v196;
    goto lab_0x40727e_2;
  lab_0x40713f:;
    char v298 = v273;
    int64_t v299 = function_409040(str8, (int64_t)__ctype_get_mb_cur_max()); // 0x40714f
    int64_t v300 = function_40b170(&v261, str8, v299); // 0x407168
    v203 = str8;
    v212 = v298;
    v198 = 1;
    v191 = v271;
    switch (v300) {
        case -1: {
            goto lab_0x407086;
        }
        case -2: {
            int32_t len7 = strlen((char *)str8); // 0x4071ed
            v203 = str8;
            v212 = v298;
            v198 = len7;
            v191 = v271;
            goto lab_0x407086;
        }
        default: {
            int64_t v301 = v300; // 0x407181
            if (v300 == 0) {
                // 0x407183
                if (*(char *)str8 != 0) {
                    // 0x4075a5
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    return &g100;
                }
                // 0x40719a
                v301 = 1;
                if (v261 != 0) {
                    goto lab_0x4074aa_6;
                }
            }
            int32_t v302 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x4071b2
            v205 = str8;
            v214 = v302 == 0 ? v298 : 0;
            v206 = 1;
            v193 = 1;
            v199 = v301;
            goto lab_0x4070e1;
        }
    }
  lab_0x4070e1:;
    int64_t v289 = v205; // 0x4070e9
    char v290 = v214; // 0x4070e9
    char v291 = v206; // 0x4070e9
    char v292 = v193; // 0x4070e9
    int64_t v293 = v199; // 0x4070e9
    if (v261 != 0) {
        goto lab_0x407086;
    } else {
        goto lab_0x4070f6;
    }
  lab_0x407086:;
    int64_t v303 = v198 + v203; // 0x407090
    int64_t v304 = v191 - 1; // 0x407095
    v204 = v303;
    v213 = v212;
    v192 = v304;
    v200 = v303;
    v209 = v212;
    if (v304 == 0) {
        goto lab_0x407238;
    } else {
        goto lab_0x40709f;
    }
  lab_0x406a9a:
    // 0x406a9a
    v99 = v252 + str2;
    v100 = v247 + (int64_t)v168;
    v101 = v251;
    v55 = v244;
    while (true) {
      lab_0x406bf5:
        // 0x406bf5
        v59 = v101;
        str5 = v100;
        str3 = v99;
        if (v47 == 0) {
            unsigned char v102 = *(char *)str3; // 0x406ad8
            int32_t v103 = *(int32_t *)((int64_t)(4 * v102 / 32) + (int64_t)&g10); // 0x406ae3
            if ((1 << (int32_t)(v102 % 32) & v103) == 0) {
                // 0x406e50
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) == 0) {
                    // break (via goto) -> 0x40758c
                    goto lab_0x40758c_5;
                }
                // 0x406e65
                v47 = 1;
                goto lab_0x406c03;
            } else {
                // 0x406af4
                v50 = v102;
                result2 = str6;
                len3 = 1;
                v52 = 1;
                if (v102 == 0) {
                    // 0x40684d
                    return result2;
                }
                goto lab_0x406b37;
            }
        } else {
            goto lab_0x406c03;
        }
    }
    goto lab_0x406d02_3;
  lab_0x40729a:;
    int64_t v288 = v119 + 1; // 0x40729a
    v149 = v282;
    v151 = v283;
    v150 = v284;
    v146 = v189;
    v152 = v119;
    v145 = v188;
    v144 = v187;
    v147 = v285;
    v148 = v286;
    v143 = v288;
    v142 = v287;
    v132 = v282;
    v136 = v283;
    v134 = v284;
    v125 = v189;
    v138 = v119;
    v123 = v188;
    v121 = v187;
    v128 = v285;
    v130 = v286;
    v120 = v288;
    v118 = v287;
    if ((char)v187 != 0) {
        goto lab_0x4069b5;
    } else {
        goto lab_0x406eb8;
    }
  lab_0x40727e_2:
    // 0x40727e
    v289 = v264;
    v290 = v266;
    v291 = v265;
    v292 = v262;
    v293 = v263;
    v202 = v264;
    v211 = v266;
    v208 = v265;
    v195 = v262;
    v197 = v263;
    if (v260 == 0) {
        goto lab_0x4070f6;
    } else {
        goto lab_0x40728c;
    }
  lab_0x4070f6:;
    int64_t v294 = function_405d20(result, str2, (int64_t *)&v47); // 0x407104
    if ((char)v294 != 0) {
        // 0x407531
        result2 = v47;
        goto lab_0x40684d_2;
    }
    // 0x407114
    v282 = v289;
    v283 = v290;
    v284 = v291;
    v285 = v292;
    v286 = v293;
    v287 = v294 & 0xffffffff;
    goto lab_0x40729a;
  lab_0x4068c7:
    // 0x4068c7
    v226 = v38;
    v185 = len;
    ps5 = 0;
    ps4 = 0;
    v227 = str2;
    v228 = 0;
    v229 = 0;
    v230 = result;
    v231 = 0;
    v232 = 0;
    int32_t v295; // 0x4066f0
    v233 = v295;
    char v296; // 0x4066f0
    v234 = v296;
    int64_t v297; // 0x4066f0
    v235 = v297;
    v236 = 0;
    v237 = 0;
    v238 = 1;
    while (true) {
      lab_0x406920:
        // 0x406920
        v116 = v238;
        v115 = v237;
        v119 = v236;
        v129 = v235;
        v127 = v234;
        v168 = v233;
        v137 = v232;
        int128_t v239 = v231;
        str6 = v230;
        v133 = v229;
        v135 = v228;
        v131 = v227;
        v104 = v239;
        if ((char)v239 != 0) {
            goto lab_0x406f39;
        } else {
            unsigned char v240 = *(char *)str6; // 0x40693e
            int32_t v241 = *(int32_t *)((int64_t)(4 * v240 / 32) + (int64_t)&g10); // 0x406949
            if ((1 << (int32_t)(v240 % 32) & v241) == 0) {
                int32_t v242 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x406f24
                v104 = 1;
                if (v242 == 0) {
                    // break -> 0x40758c
                    break;
                }
                goto lab_0x406f39;
            } else {
                int32_t v243 = v240; // 0x406971
                v107 = v243;
                v109 = v243;
                v111 = v239;
                v110 = 1;
                goto lab_0x406980;
            }
        }
    }
  lab_0x40758c_5:
    // 0x40758c
    __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 150, "mbuiter_multi_next");
    // 0x4075a5
    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
    return &g100;
  lab_0x406842:
    // 0x406842
    len = v39;
    v38 = false;
    v295 = v34;
    v296 = v35;
    v297 = v36;
    if (v33 == 0) {
        // 0x40684d
        return result;
    }
    goto lab_0x4068c7;
}
// Address range: 0x4075c0 - 0x407659
int64_t function_4075c0(char * str) {
    // 0x4075c0
    if (str == NULL) {
        // 0x407639
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g35);
        abort();
        // UNREACHABLE
    }
    int64_t v1 = (int64_t)str;
    char * found_char_pos = strrchr(str, 47); // 0x4075ce
    int64_t result = (int64_t)found_char_pos; // 0x4075ce
    if (found_char_pos == NULL) {
        // 0x407629
        g82 = v1;
        g34 = v1;
        return result;
    }
    int64_t v2 = result + 1; // 0x4075d8
    if (v2 - v1 < 7) {
        // 0x407629
        g82 = v1;
        g34 = v1;
        return result;
    }
    // 0x4075e8
    bool v3; // 0x4075c0
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = (int64_t)"/.libs/"; // 0x4075c0
    int64_t v6 = result - 6; // 0x4075c0
    int64_t v7 = 7; // 0x4075f6
    unsigned char v8 = *(char *)v6; // 0x4075f6
    char v9 = *(char *)v5; // 0x4075f6
    char v10 = v9; // 0x4075f6
    bool v11 = false; // 0x4075f6
    while (v8 == v9) {
        v7--;
        v5 += v4;
        v6 += v4;
        v10 = v8;
        v11 = true;
        if (v7 == 0) {
            // break -> 
            break;
        }
        v8 = *(char *)v6;
        v9 = *(char *)v5;
        v10 = v9;
        v11 = false;
    }
    unsigned char v12 = v10;
    int64_t v13 = (int64_t)"lt-"; // 0x407600
    int64_t v14 = v2; // 0x407600
    int64_t v15 = 3; // 0x407600
    if ((v8 >= v12 && !v11) != v8 < v12) {
        // 0x407629
        g82 = v1;
        g34 = v1;
        return result;
    }
    unsigned char v16 = *(char *)v14; // 0x407612
    char v17 = *(char *)v13; // 0x407612
    char v18 = v17; // 0x407612
    bool v19 = false; // 0x407612
    while (v16 == v17) {
        // 0x407602
        v15--;
        v13 += v4;
        v14 += v4;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = v2; // 0x40761c
    if ((v16 >= v20 && !v19) == v16 < v20) {
        // 0x40761e
        v21 = result + 4;
        g30 = v21;
    }
    // 0x407629
    g82 = v21;
    g34 = v21;
    return result;
}
// Address range: 0x407660 - 0x407752
int64_t function_407660(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x407674
    int64_t result = (int64_t)v1; // 0x407674
    if (result != a1) {
        // 0x407681
        return result;
    }
    int64_t v2 = function_40b320(); // 0x407690
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x407746
    if (v3 == 85) {
        // 0x4076a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x407738
            result2 = (int32_t)a2 != 9 ? (int64_t)&g2 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x4076ce
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x4076db
        // 0x407681
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x407738
        result2 = (int32_t)a2 != 9 ? (int64_t)&g2 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40771d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40772a
    // 0x407681
    return result4;
}
// Address range: 0x407760 - 0x4077b9
int64_t function_407760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x407760
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x4077c0 - 0x408763
int64_t function_4077c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t str) {
    // 0x4077c0
    int32_t v1; // 0x4077c0
    uint32_t v2 = v1;
    int64_t v3 = str + 1;
    int64_t v4 = 0; // 0x4077fd
    int64_t v5 = 0; // 0x4077fd
    int64_t v6; // 0x4077c0
    int64_t v7; // 0x4077c0
    int64_t v8; // 0x4077c0
    int64_t v9; // 0x4077c0
    int64_t v10; // 0x4077c0
    int64_t v11; // 0x4077c0
    int64_t v12; // 0x4077c0
    int64_t v13; // 0x4077c0
    int64_t v14; // 0x4077c0
    int64_t v15; // 0x4077c0
    int64_t v16; // 0x4077c0
    int64_t v17; // 0x4077c0
    int64_t v18; // 0x4077c0
    int64_t v19; // 0x4077c0
    int64_t v20; // 0x4077c0
    int64_t v21; // 0x4077c0
    int64_t v22; // 0x4077c0
    int64_t v23; // 0x4077c0
    int64_t v24; // 0x4077c0
    int64_t result; // 0x4077c0
    int64_t v25; // 0x4077c0
    int64_t v26; // 0x4077c0
    int64_t v27; // 0x4077c0
    int32_t wc; // bp+116, 0x4077c0
    int64_t ps; // bp+120, 0x4077c0
    char v28; // 0x407ef0
    int64_t v29; // 0x407ef0
    int64_t v30; // 0x408322
    int64_t v31; // 0x40833b
    int64_t v32; // 0x4077c0
    while (true) {
      lab_0x407800_2:
        // 0x407800
        v20 = v19;
        v14 = v13;
        v8 = v7;
        result = v4;
        int64_t v33 = v5; // 0x4077c0
        int64_t v34; // 0x407834
        while (true) {
          lab_0x407800:
            // 0x407800
            v12 = v33;
            bool v35 = v8 == v12; // 0x40780b
            if (v8 == -1) {
                // 0x40780d
                v35 = *(char *)(v12 + str) == 0;
            }
            // 0x40781b
            if (v35) {
                // break (via goto) -> 0x408210
                goto lab_0x408210;
            }
            // 0x407824
            v34 = v12 + str;
            v28 = *(char *)v34;
            v29 = v28;
            g99 = v29;
            v9 = v8;
            v18 = v14;
            v24 = v20;
            v6 = v8;
            v16 = v14;
            v22 = v20;
            switch (v28) {
                case 0: {
                    if (v2 % 2 == 0) {
                        // 0x408001
                        v11 = v8;
                        v17 = v14;
                        v23 = v20;
                        v10 = v8;
                        v15 = v14;
                        v21 = v20;
                        if (v32 == 0) {
                            goto lab_0x407e72;
                        } else {
                            goto lab_0x407919;
                        }
                    }
                    // 0x408420
                    v33 = v12 + 1;
                    goto lab_0x407800;
                }
                case 7: {
                    goto lab_0x407bc8;
                }
                case 8: {
                    goto lab_0x407bc8;
                }
                case 9: {
                    goto lab_0x407f52_2;
                }
                case 10: {
                    goto lab_0x407f52_2;
                }
                case 11: {
                    goto lab_0x407bc8;
                }
                case 12: {
                    goto lab_0x407bc8;
                }
                case 13: {
                    goto lab_0x407f52_2;
                }
                case 32: {
                    goto lab_0x407f52_2;
                }
                case 33: {
                    goto lab_0x407f52_2;
                }
                case 34: {
                    goto lab_0x407f52_2;
                }
                case 35: {
                    goto lab_0x407bb1;
                }
                case 36: {
                    goto lab_0x407f52_2;
                }
                case 37: {
                    goto lab_0x407bc8;
                }
                case 38: {
                    goto lab_0x407f52_2;
                }
                case 39: {
                    goto lab_0x407f52_2;
                }
                case 40: {
                    goto lab_0x407f52_2;
                }
                case 41: {
                    goto lab_0x407f52_2;
                }
                case 42: {
                    goto lab_0x407f52_2;
                }
                case 43: {
                    goto lab_0x407bc8;
                }
                case 44: {
                    goto lab_0x407bc8;
                }
                case 45: {
                    goto lab_0x407bc8;
                }
                case 46: {
                    goto lab_0x407bc8;
                }
                case 47: {
                    goto lab_0x407bc8;
                }
                case 48: {
                    goto lab_0x407bc8;
                }
                case 49: {
                    goto lab_0x407bc8;
                }
                case 50: {
                    goto lab_0x407bc8;
                }
                case 51: {
                    goto lab_0x407bc8;
                }
                case 52: {
                    goto lab_0x407bc8;
                }
                case 53: {
                    goto lab_0x407bc8;
                }
                case 54: {
                    goto lab_0x407bc8;
                }
                case 55: {
                    goto lab_0x407bc8;
                }
                case 56: {
                    goto lab_0x407bc8;
                }
                case 57: {
                    goto lab_0x407bc8;
                }
                case 58: {
                    goto lab_0x407bc8;
                }
                case 59: {
                    goto lab_0x407f52_2;
                }
                case 60: {
                    goto lab_0x407f52_2;
                }
                case 61: {
                    goto lab_0x407f52_2;
                }
                case 62: {
                    goto lab_0x407f52_2;
                }
                case 63: {
                    goto lab_0x407f52_2;
                }
                case 65: {
                    goto lab_0x407bc8;
                }
                case 66: {
                    goto lab_0x407bc8;
                }
                case 67: {
                    goto lab_0x407bc8;
                }
                case 68: {
                    goto lab_0x407bc8;
                }
                case 69: {
                    goto lab_0x407bc8;
                }
                case 70: {
                    goto lab_0x407bc8;
                }
                case 71: {
                    goto lab_0x407bc8;
                }
                case 72: {
                    goto lab_0x407bc8;
                }
                case 73: {
                    goto lab_0x407bc8;
                }
                case 74: {
                    goto lab_0x407bc8;
                }
                case 75: {
                    goto lab_0x407bc8;
                }
                case 76: {
                    goto lab_0x407bc8;
                }
                case 77: {
                    goto lab_0x407bc8;
                }
                case 78: {
                    goto lab_0x407bc8;
                }
                case 79: {
                    goto lab_0x407bc8;
                }
                case 80: {
                    goto lab_0x407bc8;
                }
                case 81: {
                    goto lab_0x407bc8;
                }
                case 82: {
                    goto lab_0x407bc8;
                }
                case 83: {
                    goto lab_0x407bc8;
                }
                case 84: {
                    goto lab_0x407bc8;
                }
                case 85: {
                    goto lab_0x407bc8;
                }
                case 86: {
                    goto lab_0x407bc8;
                }
                case 87: {
                    goto lab_0x407bc8;
                }
                case 88: {
                    goto lab_0x407bc8;
                }
                case 89: {
                    goto lab_0x407bc8;
                }
                case 90: {
                    goto lab_0x407bc8;
                }
                case 91: {
                    goto lab_0x407f52_2;
                }
                case 92: {
                    goto lab_0x407f52_2;
                }
                case 93: {
                    goto lab_0x407bc8;
                }
                case 94: {
                    goto lab_0x407f52_2;
                }
                case 95: {
                    goto lab_0x407bc8;
                }
                case 96: {
                    goto lab_0x407f52_2;
                }
                case 97: {
                    goto lab_0x407bc8;
                }
                case 98: {
                    goto lab_0x407bc8;
                }
                case 99: {
                    goto lab_0x407bc8;
                }
                case 100: {
                    goto lab_0x407bc8;
                }
                case 101: {
                    goto lab_0x407bc8;
                }
                case 102: {
                    goto lab_0x407bc8;
                }
                case 103: {
                    goto lab_0x407bc8;
                }
                case 104: {
                    goto lab_0x407bc8;
                }
                case 105: {
                    goto lab_0x407bc8;
                }
                case 106: {
                    goto lab_0x407bc8;
                }
                case 107: {
                    goto lab_0x407bc8;
                }
                case 108: {
                    goto lab_0x407bc8;
                }
                case 109: {
                    goto lab_0x407bc8;
                }
                case 110: {
                    goto lab_0x407bc8;
                }
                case 111: {
                    goto lab_0x407bc8;
                }
                case 112: {
                    goto lab_0x407bc8;
                }
                case 113: {
                    goto lab_0x407bc8;
                }
                case 114: {
                    goto lab_0x407bc8;
                }
                case 115: {
                    goto lab_0x407bc8;
                }
                case 116: {
                    goto lab_0x407bc8;
                }
                case 117: {
                    goto lab_0x407bc8;
                }
                case 118: {
                    goto lab_0x407bc8;
                }
                case 119: {
                    goto lab_0x407bc8;
                }
                case 120: {
                    goto lab_0x407bc8;
                }
                case 121: {
                    goto lab_0x407bc8;
                }
                case 122: {
                    goto lab_0x407bc8;
                }
                case 123: {
                    goto lab_0x407b8d;
                }
                case 124: {
                    goto lab_0x407f52_2;
                }
                case 125: {
                    goto lab_0x407b8d;
                }
                case 126: {
                    goto lab_0x407bb1;
                }
                default: {
                    goto lab_0x407e8d;
                }
            }
        }
      lab_0x407e8d:
        if (v32 != 1) {
            // 0x408280
            ps = 0;
            int64_t len = v8; // 0x40828d
            if (v8 == -1) {
                // 0x40828f
                len = strlen((char *)str);
            }
            // 0x4082bb
            v30 = 0x100000000 * len >> 32;
            v25 = 0;
            while (true) {
              lab_0x408318:
                // 0x408318
                v26 = v25;
                uint64_t v36 = v26 + v12; // 0x40831d
                int64_t v37 = v36 + str;
                v31 = function_40b170(&wc, v37, v30 - v36);
                v27 = v26;
                switch (v31) {
                    case 0: {
                        goto lab_0x408620_2;
                    }
                    case -1: {
                        goto lab_0x408620_2;
                    }
                    case -2: {
                        // 0x408663
                        v27 = v26;
                        if (v30 > v36) {
                            // 0x40869e
                            v27 = v26;
                            int64_t v38 = v26; // 0x4086a1
                            if (*(char *)v37 != 0) {
                                int64_t v39 = v38 + 1; // 0x4086af
                                v27 = v39;
                                while (v30 > v39 + v12) {
                                    // 0x4086a8
                                    v27 = v39;
                                    v38 = v39;
                                    if (*(char *)(v39 + v34) == 0) {
                                        // break -> 0x408620
                                        break;
                                    }
                                    v39 = v38 + 1;
                                    v27 = v39;
                                }
                            }
                        }
                        goto lab_0x408620_2;
                    }
                    case 1: {
                        goto lab_0x4082f0;
                    }
                    default: {
                        int64_t v40 = v36 + v3; // 0x40838a
                        char v41 = *(char *)v40; // 0x40839d
                        unsigned char v42; // 0x4077c0
                        if (v41 < 125) {
                            // 0x4083a8
                            v42 = (v41 + 37) % 64;
                            if (v42 != 0 != ((1 << (int64_t)v42 & 0x20000002b) == 0)) {
                                // 0x4083c2
                                v6 = v30;
                                v16 = 0x100000000 * v14 >> 32;
                                v22 = 0x100000000 * v20 >> 32;
                                goto lab_0x407f52_2;
                            }
                        }
                        // 0x408390
                        v40++;
                        while (v37 + v31 != v40) {
                            // 0x40839d
                            v41 = *(char *)v40;
                            if (v41 < 125) {
                                // 0x4083a8
                                v42 = (v41 + 37) % 64;
                                if (v42 != 0 != ((1 << (int64_t)v42 & 0x20000002b) == 0)) {
                                    // 0x4083c2
                                    v6 = v30;
                                    v16 = 0x100000000 * v14 >> 32;
                                    v22 = 0x100000000 * v20 >> 32;
                                    goto lab_0x407f52_2;
                                }
                            }
                            // 0x408390
                            v40++;
                        }
                        goto lab_0x4082f0;
                    }
                }
            }
            goto lab_0x408620_2;
        } else {
            // 0x407ed8
            __ctype_b_loc();
            v9 = 0x100000000000000 * v8 >> 56;
            v18 = v14;
            v24 = v20;
            goto lab_0x407bc8;
        }
    }
  lab_0x408210:
    // 0x408210
    v6 = v8;
    v16 = v14;
    v22 = v20;
    if (result != 0) {
        // 0x408265
        if (result < v14) {
            // 0x40826e
            *(char *)(v20 + result) = 0;
        }
        // 0x407f8c
        return result;
    }
    goto lab_0x407f52_2;
  lab_0x407f52_2:;
    // 0x407f8c
    char * v43; // 0x4077c0
    return function_407760(v22, v16, str, v6, 2, v2 & -3, 0, (int64_t)v43, (int64_t)v43);
  lab_0x408620_2:;
    uint64_t v44 = v27;
    int64_t v45 = 0x100000000 * v14 >> 32;
    int64_t v46 = 0x100000000 * v20 >> 32;
    v9 = v30;
    v18 = v45;
    v24 = v46;
    int64_t v47; // 0x4077c0
    int64_t v48; // 0x4077c0
    int64_t v49; // 0x4077c0
    int64_t v50; // 0x4077c0
    if (v44 < 2) {
        goto lab_0x407bc8;
    } else {
        uint64_t v51 = v44 + v12; // 0x40842e
        int64_t v52 = v12 + 1; // 0x408524
        v50 = result;
        v47 = v30;
        v5 = v52;
        v48 = v45;
        v49 = v46;
        int64_t v53 = v52; // 0x40852b
        int64_t v54 = result; // 0x40852b
        char v55 = v28; // 0x40852b
        if (v52 < v51) {
            uint64_t v56 = v54;
            if (v56 < v45) {
                // 0x4084f4
                *(char *)(v56 + v46) = v55;
            }
            char v57 = *(char *)(v53 + str); // 0x4084f8
            int64_t v58 = v56 + 1; // 0x4084fd
            int64_t v59 = v53 + 1; // 0x408524
            v50 = v58;
            v47 = v30;
            v5 = v59;
            v48 = v45;
            v49 = v46;
            v53 = v59;
            while (v59 < v51) {
                // 0x4084ef
                v56 = v58;
                if (v56 < v45) {
                    // 0x4084f4
                    *(char *)(v56 + v46) = v57;
                }
                // 0x4084f8
                v57 = *(char *)(v53 + str);
                v58 = v56 + 1;
                v59 = v53 + 1;
                v50 = v58;
                v47 = v30;
                v5 = v59;
                v48 = v45;
                v49 = v46;
                v53 = v59;
            }
        }
        goto lab_0x407997;
    }
  lab_0x4082f0:
    // 0x4082f0
    iswprint(wc);
    int64_t v60 = v31 + v26; // 0x408308
    int32_t v61 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40830b
    v25 = v60;
    v27 = v60;
    if (v61 != 0) {
        // break -> 0x408620
        goto lab_0x408620_2;
    }
    goto lab_0x408318;
  lab_0x407bc8:
    // 0x407bc8
    v11 = v9;
    v17 = v18;
    v23 = v24;
    v10 = v9;
    v15 = v18;
    v21 = v24;
    if (v32 == 0) {
        goto lab_0x407e72;
    } else {
        goto lab_0x407919;
    }
  lab_0x407bb1:
    // 0x407bb1
    v9 = v8;
    v18 = v14;
    v24 = v20;
    v6 = v8;
    v16 = v14;
    v22 = v20;
    if (v12 == 0) {
        goto lab_0x407f52_2;
    }
    goto lab_0x407bc8;
  lab_0x407b8d:;
    bool v62 = v8 == 1; // 0x407b98
    if (v8 == -1) {
        // 0x407b9a
        v62 = *(char *)v3 == 0;
    }
    // 0x407ba6
    v9 = v8;
    v18 = v14;
    v24 = v20;
    if (!v62) {
        goto lab_0x407bc8;
    } else {
        goto lab_0x407bb1;
    }
  lab_0x407e72:
    // 0x407e72
    v50 = result;
    v47 = v10;
    v5 = v12 + 1;
    v48 = v15;
    v49 = v21;
    goto lab_0x407997;
  lab_0x407919:
    // 0x407919
    v10 = v11;
    v15 = v17;
    v21 = v23;
    v6 = v11;
    v16 = v17;
    v22 = v23;
    if ((*(int32_t *)((v29 / 8 & 28) + v32) & 1 << (int32_t)(v28 % 32)) != 0) {
        goto lab_0x407f52_2;
    }
    goto lab_0x407e72;
  lab_0x407997:
    // 0x407997
    if (v50 < v48) {
        // 0x40799c
        char v63; // 0x4077c0
        int64_t v64; // 0x4077c0
        uint64_t v65; // 0x4077c0
        *(char *)(v64 + v65) = v63;
    }
    // 0x4079a0
    v4 = v50 + 1;
    v7 = v47;
    v13 = v48;
    v19 = v49;
    goto lab_0x407800_2;
}
// Address range: 0x408770 - 0x40890b
int64_t function_408770(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x408772
    int32_t * v3 = __errno_location(); // 0x40878c
    int64_t v4 = (int64_t)g22; // 0x408791
    int32_t v5 = *v3; // 0x40879b
    int64_t v6 = v4; // 0x4087b1
    if (*(int32_t *)&g25 <= (int32_t)v2) {
        int64_t v7 = v2 + 1; // 0x4087b3
        int64_t v8 = 16 * v7 & 0xffffffff0; // 0x4087bd
        int64_t v9; // 0x408770
        if (g22 == &g23) {
            int64_t v10 = function_4096d0(0, v8); // 0x4088e7
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x4088ec
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4096d0(v4, v8); // 0x4087d6
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x4087ea
        v6 = v9;
        uint32_t v13 = *(int32_t *)&g25; // 0x4087ea
        int32_t v14 = v7;
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x40881b
    int64_t v17 = v15 + 8; // 0x40881e
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x408825
    int64_t * v19 = (int64_t *)v16; // 0x408828
    uint64_t v20 = *v19; // 0x408828
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x40882b
    int64_t result = *v21; // 0x40882b
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x408836
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x40883f
    int64_t v24; // 0x408770
    uint64_t v25 = function_407760(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x40884e
    if (v20 > v25) {
        // 0x4088c5
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x408861
    *v19 = v26;
    if (result != (int64_t)&g83) {
        // 0x408871
        free((int64_t *)result);
    }
    int64_t result2 = function_409680(v26); // 0x40888b
    *v21 = result2;
    int64_t v27 = *v22; // 0x4088a5
    int64_t v28 = *v23; // 0x4088a8
    int64_t v29; // 0x408770
    function_407760(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x4088c5
    *v3 = v5;
    return result2;
}
// Address range: 0x408910 - 0x408944
int64_t function_408910(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x408917
    int64_t result = function_409840(a1 == 0 ? (int64_t)&g84 : a1, 56); // 0x408936
    return result;
}
// Address range: 0x408950 - 0x40895f
int64_t function_408950(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g84 : a1); // 0x40895c
    return result;
}
// Address range: 0x408960 - 0x40896f
int64_t function_408960(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g84 : a1; // 0x408968
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g84;
}
// Address range: 0x408970 - 0x4089a3
int64_t function_408970(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g84 + 8 : a1 + 8; // 0x408989
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40898e
    uint32_t v3 = *v2; // 0x40898e
    uint32_t v4 = (int32_t)a2 % 32; // 0x408992
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4089b0 - 0x4089c3
int64_t function_4089b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g84 + 4 : a1 + 4); // 0x4089bc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4089d0 - 0x4089fb
int64_t function_4089d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g84 : a1; // 0x4089d8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4089f5
        abort();
        // UNREACHABLE
    }
    // 0x4089ec
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g84;
}
// Address range: 0x408a00 - 0x408a72
int64_t function_408a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g84 : a5; // 0x408a22
    int32_t * v2 = __errno_location(); // 0x408a2b
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x408a44
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x408a48
    uint32_t v5 = *(int32_t *)v1; // 0x408a4b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x408a51
    int64_t result = function_407760(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x408a5a
    return result;
}
// Address range: 0x408a80 - 0x408b61
int64_t function_408a80(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g84 : a4; // 0x408aa2
    int32_t * v2 = __errno_location(); // 0x408aa8
    int64_t v3 = v1 + 8; // 0x408abf
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x408ac7
    int32_t * v5 = (int32_t *)v1; // 0x408aca
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x408ad8
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x408adb
    int64_t v8 = function_407760(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x408ae5
    int64_t v9 = v8 + 1; // 0x408aea
    int64_t result = function_409680(v9); // 0x408aff
    function_407760(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x408b44
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x408b4d
    return result;
}
// Address range: 0x408b70 - 0x408b7a
int64_t function_408b70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408b70
    return function_408a80(a1, a2, 0, a3);
}
// Address range: 0x408b80 - 0x408c15
int64_t function_408b80(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x408b80
    int64_t v2 = v1; // 0x408b80
    int64_t v3 = v2; // 0x408b94
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x408bb3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g100;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x408bb0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g100;
        }
    }
    int64_t v6 = v3; // 0x408bcd
    if (g23 != 0x612540) {
        // 0x408bcf
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g83;
        v6 = &g100;
    }
    int64_t result = v6; // 0x408bf1
    if (g22 != &g23) {
        // 0x408bf3
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g100;
    }
    // 0x408c06
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x408c20 - 0x408c31
int64_t function_408c20(void) {
    // 0x408c20
    int64_t v1; // 0x408c20
    return function_408770(v1, v1, -1, (int64_t *)&g84);
}
// Address range: 0x408c40 - 0x408c4a
int64_t function_408c40(void) {
    // 0x408c40
    int64_t v1; // 0x408c40
    return function_408770(v1, v1, v1, (int64_t *)&g84);
}
// Address range: 0x408c50 - 0x408c66
int64_t function_408c50(int64_t a1) {
    // 0x408c50
    return function_408770(0, a1, -1, (int64_t *)&g84);
}
// Address range: 0x408c70 - 0x408c82
int64_t function_408c70(int64_t a1, int64_t a2) {
    // 0x408c70
    return function_408770(0, a1, a2, (int64_t *)&g84);
}
// Address range: 0x408c90 - 0x408cf8
int64_t function_408c90(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408ca0
    return function_408770((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408d00 - 0x408d64
int64_t function_408d00(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408d10
    return function_408770((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x408d70 - 0x408d7c
int64_t function_408d70(int64_t a1, int64_t a2) {
    // 0x408d70
    return function_408c90(0, a1 & 0xffffffff, a2);
}
// Address range: 0x408d80 - 0x408d8f
int64_t function_408d80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408d80
    return function_408d00(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x408d90 - 0x408e00
int64_t function_408d90(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g84); // 0x408d9d
    int128_t v2 = __asm_movdqa(g85); // 0x408da5
    int128_t v3 = __asm_movdqa(g86); // 0x408dad
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x408dc2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x408dd8
    uint32_t v6 = *v5; // 0x408dd8
    uint32_t v7 = (int32_t)a3 % 32; // 0x408ddd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_408770(0, a1, a2, &v4);
}
// Address range: 0x408e00 - 0x408e0d
int64_t function_408e00(int64_t a1, int64_t a2) {
    // 0x408e00
    return function_408d90(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x408e10 - 0x408e21
int64_t function_408e10(int64_t a1) {
    // 0x408e10
    return function_408d90(a1, -1, 58);
}
// Address range: 0x408e30 - 0x408e3a
int64_t function_408e30(void) {
    // 0x408e30
    int64_t v1; // 0x408e30
    return function_408d90(v1, v1, 58);
}
// Address range: 0x408e40 - 0x408eae
int64_t function_408e40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408e5a
    return function_408770(a1, a3, -1, &v1);
}
// Address range: 0x408eb0 - 0x408f1c
int64_t function_408eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g84); // 0x408eb7
    int128_t v2 = __asm_movdqa(g85); // 0x408ebf
    int128_t v3 = __asm_movdqa(g86); // 0x408ec7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x408ee9
    if (a2 == 0 || a3 == 0) {
        // 0x408f17
        abort();
        // UNREACHABLE
    }
    // 0x408efa
    return function_408770(a1, a4, a5, &v4);
}
// Address range: 0x408f20 - 0x408f29
int64_t function_408f20(void) {
    // 0x408f20
    int64_t v1; // 0x408f20
    return function_408eb0(v1, v1, v1, v1, -1);
}
// Address range: 0x408f30 - 0x408f47
int64_t function_408f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408f30
    return function_408eb0(0, a1, a2, a3, -1);
}
// Address range: 0x408f50 - 0x408f63
int64_t function_408f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x408f50
    return function_408eb0(0, a1, a2, a3, a4);
}
// Address range: 0x408f70 - 0x408f7a
int64_t function_408f70(void) {
    // 0x408f70
    int64_t v1; // 0x408f70
    return function_408770(v1, v1, v1, &g21);
}
// Address range: 0x408f80 - 0x408f92
int64_t function_408f80(int64_t a1, int64_t a2) {
    // 0x408f80
    return function_408770(0, a1, a2, &g21);
}
// Address range: 0x408fa0 - 0x408fb1
int64_t function_408fa0(void) {
    // 0x408fa0
    int64_t v1; // 0x408fa0
    return function_408770(v1, v1, -1, &g21);
}
// Address range: 0x408fc0 - 0x408fd6
int64_t function_408fc0(int64_t a1) {
    // 0x408fc0
    return function_408770(0, a1, -1, &g21);
}
// Address range: 0x408fe0 - 0x40903e
int64_t function_408fe0(int64_t fd, int64_t * buf, int64_t nbyte) {
    int32_t result = read((int32_t)fd, buf, (int32_t)nbyte); // 0x409001
    while (result < 0) {
        // 0x40900e
        if (*__errno_location() != 4) {
            // break -> 0x40901a
            break;
        }
        result = read((int32_t)fd, buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x409040 - 0x409071
int64_t function_409040(int64_t a1, int64_t a2) {
    int64_t v1 = function_40b1a0(a1, 0, a2); // 0x409051
    return v1 != 0 ? 1 - a1 + v1 : a2;
}
// Address range: 0x409080 - 0x40908e
int64_t function_409080(int64_t a1, int64_t a2) {
    // 0x409080
    int64_t v1; // 0x409080
    return function_409d40((int32_t)a1, 0, 3, v1);
}
// Address range: 0x409090 - 0x4090de
int64_t function_409090(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40909c
    if (fd >= 3) {
        // 0x4090a1
        return a1 & 0xffffffff;
    }
    // 0x4090b0
    int64_t v1; // 0x409090
    int64_t v2 = function_409080(a1, v1); // 0x4090b0
    int32_t * v3 = __errno_location(); // 0x4090b8
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x4090e0 - 0x4094c5
int64_t function_4090e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x409170
        fprintf(stream, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4090fc
        fprintf(stream, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x409111
    fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2015);
    int32_t fputs_rc = fputs(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), stream); // 0x409150
    if (a6 < 10) {
        // 0x40915f
        return fputs_rc;
    }
    char * format = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x409242
    return fprintf(stream, format);
}
// Address range: 0x4094d0 - 0x4094f0
int64_t function_4094d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // 0x4094d7
    int64_t result; // 0x4094eb
    if (a5 == 0) {
        // 0x4094eb
        result = function_4090e0(a1, a2, a3, a4, a5, 0, (int64_t)&g100, (int64_t)&g100);
        return result;
    }
    v1++;
    int64_t v2 = v1; // 0x4094e9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4094e0
        v1++;
        v2 = v1;
    }
    // 0x4094eb
    result = function_4090e0(a1, a2, a3, a4, a5, v2, (int64_t)&g100, (int64_t)&g100);
    return result;
}
// Address range: 0x4094f0 - 0x409550
int64_t function_4094f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4094f0
    int64_t v3 = &v2; // 0x4094f0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x409523
    int64_t v6; // 0x40950d
    int64_t * v7; // 0x40952b
    int64_t v8; // 0x40952b
    int64_t v9; // 0x409537
    if (v5 < 48) {
        // 0x409500
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x409543
            break;
        }
    } else {
        // 0x40952b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x409543
            break;
        }
    }
    int64_t v10 = 10; // 0x409521
    while (v4 != 9) {
        // 0x409519
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x409500
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x409543
                break;
            }
        } else {
            // 0x40952b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x409543
                break;
            }
        }
        // 0x409519
        v10 = 10;
    }
    int64_t result = function_4090e0(a1, a2, a3, a4, v3, v10, (int64_t)&g100, (int64_t)&g100); // 0x409546
    return result;
}
// Address range: 0x409550 - 0x40960c
int64_t function_409550(int64_t a1, int64_t a2, char * a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409550
    int64_t v1; // bp-168, 0x409550
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x409550
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x409550
    int64_t v8; // 0x409550
    int64_t v9; // bp-56, 0x409550
    int64_t v10; // 0x4095b5
    int64_t v11; // 0x4095d9
    if ((int32_t)v6 < 48) {
        // 0x4095a0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4095f0
            break;
        }
    } else {
        // 0x4095d2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4095f0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4095ca
    int64_t v13 = 10; // 0x4095ca
    while (v5 != 9) {
        // 0x4095cc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4095a0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4095f0
                break;
            }
        } else {
            // 0x4095d2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4095f0
                break;
            }
        }
        // 0x4095c2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4095f0
    int64_t v14; // bp-136, 0x409550
    int64_t result = function_4090e0(a1, a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g100, (int64_t)&g100); // 0x4095ff
    return result;
}
// Address range: 0x409610 - 0x40967a
int64_t function_409610(int64_t a1) {
    // 0x409610
    printf(dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    printf(dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * str = dcgettext(NULL, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5); // 0x409669
    return fputs(str, g31);
}
// Address range: 0x409680 - 0x40969a
int64_t function_409680(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x409684
    if (size != 0 != (mem == NULL)) {
        // 0x409693
        return (int64_t)mem;
    }
    // 0x409695
    function_4098a0(size);
    // UNREACHABLE
}
// Address range: 0x4096a0 - 0x4096b3
int64_t function_4096a0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4096a3
    if (v1 <= 0xffffffffffffffff) {
        // 0x4096a8
        return function_409680((int64_t)v1);
    }
    // 0x4096ad
    function_4098a0(a1);
    // UNREACHABLE
}
// Address range: 0x4096c0 - 0x4096c2
int64_t function_4096c0(void) {
    // 0x4096c0
    int64_t v1; // 0x4096c0
    return function_409680(v1);
}
// Address range: 0x4096d0 - 0x409706
int64_t function_4096d0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4096f8
        free(v1);
        return (int32_t)&g100 ^ (int32_t)&g100;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4096e1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4096f0
        return (int64_t)mem;
    }
    // 0x409701
    function_4098a0(a1);
    // UNREACHABLE
}
// Address range: 0x409710 - 0x409723
int64_t function_409710(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x409713
    if (v1 <= 0xffffffffffffffff) {
        // 0x409718
        return function_4096d0(a1, (int64_t)v1);
    }
    // 0x40971d
    function_4098a0(a1);
    // UNREACHABLE
}
// Address range: 0x409730 - 0x4097a6
int64_t function_409730(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x409730
    if (a1 != 0) {
        if (0xaaaaaaaaaaaaaaaa / a3 <= a2) {
            // 0x4097a0
            function_4098a0(a1);
            // UNREACHABLE
        }
        // 0x40975a
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4096d0(a1, v1 * a3);
    }
    // 0x409770
    if (a2 == 0) {
        int64_t v2 = 128 / a3 + (int64_t)(a3 >= 129); // 0x40978d
        *(int64_t *)a2 = v2;
        return function_4096d0(0, v2 * a3);
    }
    // 0x40975a
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4096d0(a1, v1 * a3);
}
// Address range: 0x4097b0 - 0x4097fd
int64_t function_4097b0(int64_t a1, uint64_t a2) {
    if (a1 == 0) {
        int64_t v1 = a2 == 0 ? 128 : a2; // 0x4097e8
        *(int64_t *)a2 = v1;
        return function_4096d0(0, v1);
    }
    if (a2 >= 0xaaaaaaaaaaaaaaaa) {
        // 0x4097f7
        function_4098a0(a1);
        // UNREACHABLE
    }
    int64_t v2 = a2 + 1 + a2 / 2; // 0x4097cd
    *(int64_t *)a2 = v2;
    return function_4096d0(a1, v2);
}
// Address range: 0x409800 - 0x409817
int64_t function_409800(int64_t a1, int64_t a2) {
    // 0x409800
    return (int64_t)memset((int64_t *)function_409680(a1), 0, (int32_t)a1);
}
// Address range: 0x409820 - 0x409838
int64_t function_409820(void) {
    // 0x409820
    int64_t nmemb; // 0x409820
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)nmemb); // 0x409824
    if (mem != NULL) {
        // 0x40982e
        return (int64_t)mem;
    }
    // 0x409833
    function_4098a0(nmemb);
    // UNREACHABLE
}
// Address range: 0x409840 - 0x409868
int64_t function_409840(int64_t a1, int64_t a2) {
    int64_t v1 = function_409680(a2); // 0x40984f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x409870 - 0x40989e
int64_t function_409870(int64_t str) {
    int64_t v1 = (int64_t)strlen((char *)str) + 1; // 0x40987e
    int64_t v2 = function_409680(v1); // 0x409885
    return (int64_t)memcpy((int64_t *)v2, (int64_t *)str, (int32_t)v1);
}
// Address range: 0x4098a0 - 0x4098d1
int64_t function_4098a0(int64_t a1) {
    // 0x4098a0
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4098e0 - 0x409d3d
int64_t function_4098e0(int64_t str, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x4098ee
    char * str4; // 0x4098e0
    int64_t v1; // 0x4098e0
    char v2; // 0x4098e0
    int64_t v3; // 0x4098e0
    int64_t v4; // 0x4098e0
    int64_t v5; // 0x4098e0
    int64_t v6; // 0x4098e0
    int64_t v7; // 0x4098e0
    int64_t v8; // 0x4098e0
    int64_t v9; // 0x4098e0
    int64_t v10; // 0x4098e0
    int64_t v11; // 0x4098e0
    int64_t v12; // 0x4098e0
    int64_t endptr; // 0x40990f
    int64_t * v13; // 0x4098e0
    int64_t v14; // 0x409961
    if (base < 37) {
        char c = str;
        int32_t * v15 = __errno_location(); // 0x409913
        *v15 = 0;
        int64_t v16 = (int64_t)*__ctype_b_loc() + 1; // 0x40994a
        char v17 = c; // 0x40994f
        if ((*(char *)(v16 + (2 * str & 510)) & 32) != 0) {
            int64_t v18 = str + 1; // 0x409940
            unsigned char v19 = *(char *)v18; // 0x409944
            int64_t v20 = v18; // 0x40994f
            v17 = v19;
            while ((*(char *)(2 * (int64_t)v19 + v16) & 32) != 0) {
                // 0x409940
                v18 = v20 + 1;
                v19 = *(char *)v18;
                v20 = v18;
                v17 = v19;
            }
        }
        // 0x409951
        if (v17 == 45) {
            // 0x40998b
            return 4;
        }
        // 0x409956
        int64_t v21; // bp-64, 0x4098e0
        endptr = a2 == 0 ? (int64_t)&v21 : a2;
        int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x40995c
        v13 = (int64_t *)endptr;
        v14 = *v13;
        if (v14 == str) {
            // 0x4099b8
            if (c == 0 || a5 == 0) {
                // 0x40998b
                return 4;
            }
            char * str2 = (char *)a5;
            char * found_char_pos = strchr(str2, (int32_t)c); // 0x4099da
            str4 = str2;
            v9 = 1;
            v6 = 0;
            v2 = c;
            if (found_char_pos == NULL) {
                // 0x40998b
                return 4;
            }
            goto lab_0x4099e9;
        } else {
            // 0x40996c
            if (*v15 != 0) {
                // branch -> 0x409976
            }
            int64_t v22 = str_as_ul; // 0x40995c
            int64_t v23 = 0;
            v8 = v22;
            v5 = v23;
            v3 = a4;
            if (a5 == 0) {
                goto lab_0x409988;
            } else {
                char c2 = *(char *)v14; // 0x40997b
                v8 = v22;
                v5 = v23;
                v3 = a4;
                if (c2 != 0) {
                    char * str3 = (char *)a5;
                    char * found_char_pos2 = strchr(str3, (int32_t)c2); // 0x409a3c
                    str4 = str3;
                    v9 = v22;
                    v6 = v23;
                    v2 = c2;
                    v10 = v22;
                    v7 = v23;
                    if (found_char_pos2 != NULL) {
                        goto lab_0x4099e9;
                    } else {
                        goto lab_0x409a4b;
                    }
                } else {
                    goto lab_0x409988;
                }
            }
        }
    } else {
        // 0x409ce8
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "xstrtol.c", 96, "xstrtoul");
        v1 = (int64_t)"0 <= strtol_base && strtol_base <= 36";
        v11 = (int64_t)"xstrtoul";
        v12 = (int64_t)"xstrtol.c";
        v4 = a5;
        goto lab_0x409d01;
    }
  lab_0x409d01:;
    int64_t v24 = v1; // 0x409d0b
    int64_t v25 = v11; // 0x409d0b
    int64_t v26 = -1; // 0x409d0b
    int64_t v27; // 0x4098e0
    int64_t v28 = v27; // 0x409d0b
    int64_t v29 = v12; // 0x409d0b
    int64_t v30 = v4; // 0x409d0b
    int64_t v31 = 1; // 0x409d0b
    int64_t v32; // 0x4098e0
    int64_t v33 = v32; // 0x409d0b
    int64_t v34; // 0x4098e0
    int64_t v35 = v34; // 0x409d0b
    goto lab_0x409b0f;
  lab_0x4099e9:;
    int64_t v67 = 0x100000000 * v14 >> 32;
    int64_t v71 = 1024; // 0x409a03
    int64_t v61 = 1; // 0x409a03
    int64_t * v62; // 0x4098e0
    int64_t v68; // 0x4098e0
    int64_t v66; // 0x4098e0
    int64_t v64; // 0x4098e0
    int64_t v63; // 0x4098e0
    int64_t v70; // 0x4098e0
    int64_t v73; // 0x4098e0
    int64_t v75; // 0x4098e0
    int64_t v77; // 0x4098e0
    int64_t v79; // 0x4098e0
    int64_t v81; // 0x4098e0
    int64_t v83; // 0x4098e0
    int128_t v86; // 0x4098e0
    int64_t v87; // 0x4098e0
    int64_t v82; // 0x4098e0
    int64_t v84; // 0x4098e0
    int64_t v65; // 0x4098e0
    int64_t v72; // 0x4098e0
    int64_t v74; // 0x4098e0
    int64_t v76; // 0x4098e0
    int64_t v78; // 0x4098e0
    int64_t v80; // 0x4098e0
    int64_t v69; // 0x4098e0
    int64_t v85; // 0x4098e0
    int64_t v60; // 0x4098e0
    if (strchr(str4, 48) == NULL) {
        goto lab_0x409a60;
    } else {
        // 0x409a05
        v71 = 1000;
        v61 = 2;
        switch (*(char *)(v67 + 1)) {
            case 68: {
                goto lab_0x409a60;
            }
            case 105: {
                char v124 = *(char *)(v67 + 2); // 0x409cb2
                v71 = 1024;
                v61 = (v124 == 66 ? 2 : 1) + (int64_t)(v124 == 66);
                goto lab_0x409a60;
            }
            case 66: {
                goto lab_0x409a60;
            }
            default: {
                // 0x409a1a
                g97 = v2 - 66;
                v10 = v9;
                v7 = v6;
                v60 = 1;
                v62 = v13;
                v63 = v9;
                v64 = v6;
                v65 = 1;
                v66 = v67;
                v68 = a4;
                v69 = 1;
                v70 = 1024;
                v72 = 1;
                v73 = 1024;
                v74 = 1;
                v75 = 1024;
                v76 = 1;
                v77 = 1024;
                v78 = 1;
                v79 = 1024;
                v80 = 1;
                v86 = 1024;
                v87 = 1;
                v81 = 1024;
                v82 = 1;
                v83 = 1024;
                v84 = 1;
                v85 = 1;
                switch (v2) {
                    case 66: {
                        goto lab_0x409bfc;
                    }
                    case 69: {
                        goto lab_0x409bd8;
                    }
                    case 71: {
                        goto lab_0x409bab;
                    }
                    case 75: {
                        goto lab_0x409b84;
                    }
                    case 77: {
                        goto lab_0x409b69;
                    }
                    case 80: {
                        goto lab_0x409b41;
                    }
                    case 84: {
                        goto lab_0x409b19;
                    }
                    case 89: {
                        goto lab_0x409af4;
                    }
                    case 90: {
                        goto lab_0x409acd;
                    }
                    case 98: {
                        goto lab_0x409ab7;
                    }
                    case 99: {
                        goto lab_0x409a98;
                    }
                    case 103: {
                        goto lab_0x409bab;
                    }
                    case 107: {
                        goto lab_0x409b84;
                    }
                    case 109: {
                        goto lab_0x409b69;
                    }
                    case 116: {
                        goto lab_0x409b19;
                    }
                    case 119: {
                        goto lab_0x409a85;
                    }
                    default: {
                        goto lab_0x409a4b;
                    }
                }
            }
        }
    }
  lab_0x409988:
    // 0x409988
    *(int64_t *)v3 = v8;
    // 0x40998b
    return v5 & 0xffffffff;
  lab_0x409b0f:;
    int64_t v36 = v35;
    int64_t v37 = v33;
    int64_t v38 = v31;
    int64_t v39 = v30;
    int64_t v40 = v29;
    int64_t v41 = v28;
    int64_t v42 = v26;
    uint32_t v43 = (int32_t)v24 - 1; // 0x409b0f
    int64_t v44 = v43; // 0x409b12
    int64_t v45 = v25; // 0x409b12
    int64_t v46 = v42; // 0x409b12
    int64_t v47 = v41; // 0x409b12
    int64_t v48 = v40; // 0x409b12
    int64_t v49 = v39; // 0x409b12
    int64_t v50 = v38; // 0x409b12
    int64_t v51 = v37; // 0x409b12
    int64_t v52 = v36; // 0x409b12
    int64_t * v53; // 0x4098e0
    int64_t v54; // 0x4098e0
    int64_t v55; // 0x4098e0
    int64_t v56; // 0x4098e0
    int64_t v57; // 0x4098e0
    int64_t v58; // 0x4098e0
    int64_t v59; // 0x4098e0
    if (v43 != 0) {
        goto lab_0x409b00;
    } else {
        // 0x409b0f
        v53 = (int64_t *)v36;
        v58 = v42;
        v57 = v41;
        v59 = v40;
        v55 = v39;
        v56 = v38;
        v54 = v37;
        goto lab_0x409aec;
    }
  lab_0x409a60:
    // 0x409a60
    g98 = v2 - 66;
    v10 = v9;
    v7 = v6;
    v60 = v61;
    v62 = v13;
    v63 = v9;
    v64 = v6;
    v65 = v61;
    v66 = v67;
    v68 = a4;
    v69 = v61;
    v70 = v71;
    v72 = v61;
    v73 = v71;
    v74 = v61;
    v75 = v71;
    v76 = v61;
    v77 = v71;
    v78 = v61;
    v79 = v71;
    v80 = v61;
    v81 = v71;
    v82 = v61;
    v83 = v71;
    v84 = v61;
    v85 = v61;
    switch (v2) {
        case 66: {
            goto lab_0x409bfc;
        }
        case 69: {
            goto lab_0x409bd8;
        }
        case 71: {
            goto lab_0x409bab;
        }
        case 75: {
            // 0x409b7e
            v86 = v71;
            v87 = v61;
            goto lab_0x409b84;
        }
        case 77: {
            goto lab_0x409b69;
        }
        case 80: {
            goto lab_0x409b41;
        }
        case 84: {
            goto lab_0x409b19;
        }
        case 89: {
            goto lab_0x409af4;
        }
        case 90: {
            goto lab_0x409acd;
        }
        case 98: {
            goto lab_0x409ab7;
        }
        case 99: {
            goto lab_0x409a98;
        }
        case 103: {
            goto lab_0x409bab;
        }
        case 107: {
            // 0x409b7e
            v86 = v71;
            v87 = v61;
            goto lab_0x409b84;
        }
        case 109: {
            goto lab_0x409b69;
        }
        case 116: {
            goto lab_0x409b19;
        }
        case 119: {
            goto lab_0x409a85;
        }
        default: {
            goto lab_0x409a4b;
        }
    }
  lab_0x409b00:;
    uint128_t v88 = (int128_t)v46 * (int128_t)v45; // 0x409b03
    v24 = v44;
    v25 = v45;
    v26 = v88;
    v28 = v47;
    v29 = v48;
    v30 = v49;
    v31 = v50;
    v33 = v51;
    v35 = v52;
    v1 = v44;
    v11 = v45;
    v27 = v47;
    v12 = v48;
    v4 = v49;
    v32 = v51;
    v34 = v52;
    if (v88 > 0xffffffffffffffff) {
        goto lab_0x409d01;
    } else {
        goto lab_0x409b0f;
    }
  lab_0x409bfc:;
    int64_t v89 = v85; // 0x409c03
    if (v9 >= 0x40000000000000) {
        goto lab_0x409b93;
    } else {
        // 0x409c05
        v62 = v13;
        v63 = 1024 * v9;
        v64 = v6;
        v65 = v85;
        v66 = v67;
        v68 = a4;
        goto lab_0x409a98;
    }
  lab_0x409bd8:;
    uint128_t v90 = (int128_t)v9 * (int128_t)v83; // 0x409be3
    int64_t v91 = (int64_t)(v90 < 0xffffffffffffffff ? v90 : 0xffffffffffffffff);
    int64_t v92 = v90 > 0xffffffffffffffff ? 1 : 0;
    int32_t v93 = 5; // 0x409bef
    v53 = v13;
    v58 = v91;
    v57 = v6;
    v59 = v84;
    v55 = v67;
    v56 = v92;
    v54 = a4;
    int32_t v94 = v93; // 0x409bf2
    int64_t v95 = v92; // 0x409bf2
    while (v93 != 0) {
        // 0x409be0
        v90 = (int128_t)v91 * (int128_t)v83;
        v91 = (int64_t)(v90 < 0xffffffffffffffff ? v90 : 0xffffffffffffffff);
        v92 = v90 > 0xffffffffffffffff ? 1 : v95;
        v93 = v94 - 1;
        v53 = v13;
        v58 = v91;
        v57 = v6;
        v59 = v84;
        v55 = v67;
        v56 = v92;
        v54 = a4;
        v94 = v93;
        v95 = v92;
    }
    goto lab_0x409aec;
  lab_0x409bab:;
    int128_t v99 = v81; // 0x409bae
    uint128_t v100 = v99 * (int128_t)v9; // 0x409bae
    v62 = v13;
    v63 = -1;
    v64 = 1;
    v65 = v82;
    v66 = v67;
    v68 = a4;
    if (v100 <= 0xffffffffffffffff) {
        uint128_t v101 = (v100 & 0xffffffffffffffff) * v99; // 0x409bb7
        v62 = v13;
        v63 = -1;
        v64 = 1;
        v65 = v82;
        v66 = v67;
        v68 = a4;
        if (v101 <= 0xffffffffffffffff) {
            uint128_t v102 = (v101 & 0xffffffffffffffff) * v99; // 0x409bc0
            v62 = v13;
            v63 = -1;
            v64 = 1;
            v65 = v82;
            v66 = v67;
            v68 = a4;
            if (v102 <= 0xffffffffffffffff) {
                // 0x409bc9
                v62 = v13;
                v63 = v102;
                v64 = v6 & 0xffffffff;
                v65 = v82;
                v66 = v67;
                v68 = a4;
            }
        }
    }
    goto lab_0x409a98;
  lab_0x409b69:;
    int128_t v103 = v79; // 0x409b6c
    uint128_t v104 = v103 * (int128_t)v9; // 0x409b6c
    v89 = v80;
    if (v104 > 0xffffffffffffffff) {
        goto lab_0x409b93;
    } else {
        uint128_t v105 = (v104 & 0xffffffffffffffff) * v103; // 0x409b71
        if (v105 > 0xffffffffffffffff) {
            goto lab_0x409b93;
        } else {
            // 0x409b76
            v62 = v13;
            v63 = v105;
            v64 = v6;
            v65 = v80;
            v66 = v67;
            v68 = a4;
            goto lab_0x409a98;
        }
    }
  lab_0x409b41:;
    uint128_t v106 = (int128_t)v9 * (int128_t)v77; // 0x409b53
    int64_t v107 = (int64_t)(v106 < 0xffffffffffffffff ? v106 : 0xffffffffffffffff);
    int64_t v108 = v106 > 0xffffffffffffffff ? 1 : 0;
    int32_t v109 = 4; // 0x409b5f
    v53 = v13;
    v58 = v107;
    v57 = v6;
    v59 = v78;
    v55 = v67;
    v56 = v108;
    v54 = a4;
    int32_t v110 = v109; // 0x409b62
    int64_t v111 = v108; // 0x409b62
    while (v109 != 0) {
        // 0x409b50
        v106 = (int128_t)v107 * (int128_t)v77;
        v107 = (int64_t)(v106 < 0xffffffffffffffff ? v106 : 0xffffffffffffffff);
        v108 = v106 > 0xffffffffffffffff ? 1 : v111;
        v109 = v110 - 1;
        v53 = v13;
        v58 = v107;
        v57 = v6;
        v59 = v78;
        v55 = v67;
        v56 = v108;
        v54 = a4;
        v110 = v109;
        v111 = v108;
    }
    goto lab_0x409aec;
  lab_0x409b19:;
    uint128_t v112 = (int128_t)v9 * (int128_t)v75; // 0x409b2b
    int64_t v113 = (int64_t)(v112 < 0xffffffffffffffff ? v112 : 0xffffffffffffffff);
    int64_t v114 = v112 > 0xffffffffffffffff ? 1 : 0;
    int32_t v115 = 3; // 0x409b37
    v53 = v13;
    v58 = v113;
    v57 = v6;
    v59 = v76;
    v55 = v67;
    v56 = v114;
    v54 = a4;
    int32_t v116 = v115; // 0x409b3a
    int64_t v117 = v114; // 0x409b3a
    while (v115 != 0) {
        // 0x409b28
        v112 = (int128_t)v113 * (int128_t)v75;
        v113 = (int64_t)(v112 < 0xffffffffffffffff ? v112 : 0xffffffffffffffff);
        v114 = v112 > 0xffffffffffffffff ? 1 : v117;
        v115 = v116 - 1;
        v53 = v13;
        v58 = v113;
        v57 = v6;
        v59 = v76;
        v55 = v67;
        v56 = v114;
        v54 = a4;
        v116 = v115;
        v117 = v114;
    }
    goto lab_0x409aec;
  lab_0x409af4:
    // 0x409af4
    v44 = 8;
    v45 = v73;
    v46 = v9;
    v47 = v6;
    v48 = v74;
    v49 = v67;
    v50 = 0;
    v51 = a4;
    v52 = endptr;
    goto lab_0x409b00;
  lab_0x409acd:;
    uint128_t v118 = (int128_t)v9 * (int128_t)v70; // 0x409adb
    int64_t v119 = (int64_t)(v118 < 0xffffffffffffffff ? v118 : 0xffffffffffffffff);
    int64_t v120 = v118 > 0xffffffffffffffff ? 1 : 0;
    int32_t v121 = 6; // 0x409ae7
    int32_t v122 = v121; // 0x409aea
    int64_t v123 = v120; // 0x409aea
    v53 = v13;
    v58 = v119;
    v57 = v6;
    v59 = v72;
    v55 = v67;
    v56 = v120;
    v54 = a4;
    while (v121 != 0) {
        // 0x409ad8
        v118 = (int128_t)v119 * (int128_t)v70;
        v119 = (int64_t)(v118 < 0xffffffffffffffff ? v118 : 0xffffffffffffffff);
        v120 = v118 > 0xffffffffffffffff ? 1 : v123;
        v121 = v122 - 1;
        v122 = v121;
        v123 = v120;
        v53 = v13;
        v58 = v119;
        v57 = v6;
        v59 = v72;
        v55 = v67;
        v56 = v120;
        v54 = a4;
    }
    goto lab_0x409aec;
  lab_0x409ab7:
    // 0x409ab7
    v89 = v69;
    if (v9 >= 0x80000000000000) {
        goto lab_0x409b93;
    } else {
        // 0x409ac4
        v62 = v13;
        v63 = 512 * v9;
        v64 = v6;
        v65 = v69;
        v66 = v67;
        v68 = a4;
        goto lab_0x409a98;
    }
  lab_0x409a98:;
    int64_t v96 = v64;
    int64_t v97 = v66 + v65; // 0x409a98
    *v62 = v97;
    v8 = v63;
    v5 = (*(char *)v97 != 0 ? v96 | 2 : v96) & 0xffffffff;
    v3 = v68;
    goto lab_0x409988;
  lab_0x409a85:
    // 0x409a85
    v89 = v60;
    if (v9 < 0) {
        goto lab_0x409b93;
    } else {
        // 0x409a8e
        v62 = v13;
        v63 = 2 * v9;
        v64 = v6;
        v65 = v60;
        v66 = v67;
        v68 = a4;
        goto lab_0x409a98;
    }
  lab_0x409a4b:
    // 0x409a4b
    *(int64_t *)a4 = v10;
    // 0x40998b
    return (v7 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x409aec:
    // 0x409aec
    v62 = v53;
    v63 = v58;
    v64 = (v56 | v57) & 0xffffffff;
    v65 = v59;
    v66 = v55;
    v68 = v54;
    goto lab_0x409a98;
  lab_0x409b93:
    // 0x409b93
    v62 = v13;
    v63 = -1;
    v64 = 1;
    v65 = v89;
    v66 = v67;
    v68 = a4;
    goto lab_0x409a98;
  lab_0x409b84:;
    uint128_t v98 = v86 * (int128_t)v9; // 0x409b87
    v62 = v13;
    v63 = v98;
    v64 = v6;
    v65 = v87;
    v66 = v67;
    v68 = a4;
    v89 = v87;
    if (v98 <= 0xffffffffffffffff) {
        goto lab_0x409a98;
    } else {
        goto lab_0x409b93;
    }
}
// Address range: 0x409d40 - 0x409e75
int64_t function_409d40(int32_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x409d70
    if (cmd != 1030) {
        // 0x409e20
        return fcntl(fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x409d7c
    int64_t v2; // 0x409d40
    if (g87 < 0) {
        int64_t v3 = function_409d40(fd, 0, v1, a4); // 0x409dc4
        int64_t v4 = v3 & 0xffffffff; // 0x409dc9
        if ((int32_t)v3 < 0) {
            // 0x409db0
            return v4 & 0xffffffff;
        }
        // 0x409dcf
        v2 = v4;
        if (g87 != -1) {
            // 0x409db0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl(fd, cmd); // 0x409d97
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x409da6
            g87 = 1;
            // 0x409db0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_409d40(fd, 0, v1, a4); // 0x409e57
        int64_t v7 = v6 & 0xffffffff; // 0x409e5c
        if ((int32_t)v6 < 0) {
            // 0x409db0
            return v7 & 0xffffffff;
        }
        // 0x409e66
        g87 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x409ddf
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x409dea
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x409db0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x409e02
    close(fd2);
    // 0x409db0
    return 0xffffffff;
}
// Address range: 0x409e80 - 0x409ec0
int64_t function_409e80(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x409e9a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x409e9a
        return fflush(stream);
    }
    // 0x409ea8
    function_409ef0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x409ec0 - 0x409ee8
int64_t function_409ec0(int64_t a1) {
    // 0x409ec0
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x409ee7
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 8); // 0x409ed0
    int64_t result = v1; // 0x409eda
    if ((a1 & 256) != 0) {
        // 0x409edc
        result = *(int64_t *)(a1 + 88) + v1 - *(int64_t *)(a1 + 72);
    }
    // 0x409ee7
    return result;
}
// Address range: 0x409ef0 - 0x409f47
int64_t function_409ef0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x409ef0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x409efa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x409f2b
    int64_t result = -1; // 0x409f34
    if (v1 != -1) {
        // 0x409f36
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x409f42
    return result;
}
// Address range: 0x409f50 - 0x40a02f
int64_t function_409f50(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 48); // 0x409f5c
    uint32_t v2 = *v1; // 0x409f5c
    int64_t v3 = a2 & 0xffffffff; // 0x409f61
    int32_t * v4 = (int32_t *)(a2 + 52); // 0x409f64
    uint64_t v5 = (int64_t)*v4; // 0x409f64
    int64_t v6; // 0x409fd2
    if (v3 <= v5) {
      lab_0x409fcc_2:
        // 0x409fcc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x409f52
    int64_t v8 = v2; // 0x409f50
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x409fcc
        goto lab_0x409fcc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x409f88
    int64_t v17; // 0x409f96
    int64_t * v18; // 0x409fb0
    int64_t * v19; // 0x409fb3
    int64_t v20; // 0x409fbe
    int64_t v21; // 0x409f96
    while ((v16 & 0xffffffff) > v10) {
        // 0x409f93
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x409fb0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x409fc7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x409fcc
            goto lab_0x409fcc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x409fcc
            goto lab_0x409fcc_2;
        }
        // 0x409f82
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40a00b
    int64_t * v23 = (int64_t *)v22; // 0x40a010
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40a013
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40a010
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40a027
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x409f7d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x409fcc
            goto lab_0x409fcc_2;
        }
        // 0x409f82
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x409f93
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x409fb0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x409fc7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x409fcc
                goto lab_0x409fcc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x409fcc
                goto lab_0x409fcc_2;
            }
            // 0x409f82
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x409ff0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40a010
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40a027
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x409fcc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40a030 - 0x40b063
int64_t function_40a030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int32_t v2 = a1; // 0x40a067
    if (v2 < 1) {
        // 0x40a309
        return 0xffffffff;
    }
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x40a06f
    *v3 = 0;
    int32_t v4 = *(int32_t *)a7; // 0x40a078
    int64_t v5; // 0x40a030
    int32_t v6; // 0x40a030
    char v7; // 0x40a030
    int64_t v8; // 0x40a030
    int64_t v9; // 0x40a030
    if (v4 != 0) {
        // 0x40a210
        v6 = v4;
        if (*(int32_t *)(v1 + 24) == 0) {
            goto lab_0x40a093;
        } else {
            int64_t v10 = *(int64_t *)(v1 + 32); // 0x40a221
            char v11 = *(char *)&v8; // 0x40a226
            v9 = a3;
            v7 = v11;
            v5 = v10;
            if ((v11 - 43 & -3) == 0) {
                int64_t v12 = a3 + 1; // 0x40a238
                v9 = v12;
                v7 = *(char *)v12;
                v5 = v10;
            }
            goto lab_0x40a0f3;
        }
    } else {
        // 0x40a086
        *(int32_t *)a7 = 1;
        v6 = 1;
        goto lab_0x40a093;
    }
  lab_0x40a680:;
    // 0x40a680
    int64_t v13; // 0x40a030
    int64_t v14 = v13 + 32; // 0x40a680
    int64_t v15 = *(int64_t *)v14; // 0x40a684
    int64_t v16; // 0x40a030
    int64_t v17 = v16; // 0x40a68d
    int64_t v18; // 0x40a030
    int64_t v19 = v18; // 0x40a68d
    int32_t v20; // 0x40a030
    int32_t v21 = v20; // 0x40a68d
    int64_t v22 = v14; // 0x40a68d
    int64_t v23; // 0x40a030
    int64_t v24 = v23; // 0x40a68d
    int64_t v25 = v15; // 0x40a68d
    int64_t v26 = v16; // 0x40a68d
    int64_t v27 = v18; // 0x40a68d
    int32_t v28 = v20; // 0x40a68d
    int64_t v29 = v23; // 0x40a68d
    if (v15 == 0) {
        // break -> 0x40a6e0
        goto lab_0x40a6e0;
    }
    goto lab_0x40a68f;
  lab_0x40a68f:;
    int64_t v30 = v17; // 0x40a68f
    int64_t v31 = v19; // 0x40a68f
    int32_t v32 = v21; // 0x40a68f
    int64_t v33 = v22; // 0x40a68f
    int64_t v34; // 0x40a030
    int64_t v35 = v34 + 1 & 0xffffffff; // 0x40a68f
    int64_t * v36; // 0x40a030
    int64_t str2 = *v36; // 0x40a68f
    int64_t v37 = v24; // 0x40a68f
    int64_t v38 = v25; // 0x40a68f
    goto lab_0x40a694;
  lab_0x40a65c:;
    int64_t * mem = malloc(16); // 0x40a661
    int64_t v39; // 0x40a030
    int64_t v40; // 0x40a030
    if (mem == NULL) {
        // 0x40aa08
        v18 = 1;
        v23 = 0;
        int64_t v52 = v39; // 0x40aa0b
        if (v39 != 0) {
            int64_t v53 = *(int64_t *)(v52 + 8); // 0x40aa10
            free((int64_t *)v52);
            v18 = 1;
            v23 = v53;
            v52 = v53;
            while (v53 != 0) {
                // 0x40aa10
                v53 = *(int64_t *)(v52 + 8);
                free((int64_t *)v52);
                v18 = 1;
                v23 = v53;
                v52 = v53;
            }
        }
    } else {
        int64_t v54 = (int64_t)mem; // 0x40a661
        *mem = v13;
        *(int64_t *)(v54 + 8) = v39;
        v18 = v40;
        v23 = v54;
    }
    goto lab_0x40a680;
  lab_0x40a093:
    // 0x40a093
    *(int32_t *)(v1 + 52) = v6;
    *(int32_t *)(v1 + 48) = v6;
    int64_t * v55 = (int64_t *)(v1 + 32); // 0x40a0a5
    *v55 = 0;
    int64_t v56; // 0x40a030
    int64_t v57; // 0x40a030
    int64_t v58; // 0x40a030
    int64_t v59; // 0x40a030
    int64_t v60; // 0x40a030
    if ((int32_t)a8 == 0) {
        // 0x40a320
        if (getenv("POSIXLY_CORRECT") != NULL) {
            int64_t v61 = *v55; // 0x40a434
            *(int32_t *)(v1 + 44) = 1;
            char v62 = *(char *)&v8; // 0x40a442
            v58 = v61;
            if (v62 == 45) {
                goto lab_0x40a350;
            } else {
                // 0x40a44d
                v56 = v61;
                v59 = v61;
                if (v62 != 43) {
                    goto lab_0x40a0da;
                } else {
                    goto lab_0x40a455;
                }
            }
        } else {
            // 0x40a333
            *(int32_t *)(v1 + 44) = 0;
            char v63 = *(char *)&v8; // 0x40a340
            if (v63 != 45) {
                if (v63 == 43) {
                    // 0x40ab9b
                    v59 = *v55;
                    goto lab_0x40a455;
                } else {
                    // 0x40a880
                    *(int32_t *)(v1 + 40) = 1;
                    v60 = a3;
                    v57 = *v55;
                    goto lab_0x40a0e3;
                }
            } else {
                // 0x40a34b
                v58 = *v55;
                goto lab_0x40a350;
            }
        }
    } else {
        // 0x40a0b7
        *(int32_t *)(v1 + 44) = 1;
        v56 = 0;
        v58 = 0;
        v59 = 0;
        switch (*(char *)&v8) {
            case 45: {
                goto lab_0x40a350;
            }
            case 43: {
                goto lab_0x40a455;
            }
            default: {
                goto lab_0x40a0da;
            }
        }
    }
  lab_0x40a0f3:;
    int64_t v64 = a1 & 0xffffffff; // 0x40a07c
    int64_t v65 = v5;
    char v66 = v7;
    int64_t str3 = v9;
    int64_t v67; // 0x40a030
    int64_t v68; // 0x40a030
    if (v65 == 0) {
        goto lab_0x40a250;
    } else {
        // 0x40a10c
        v68 = a4;
        v67 = v65;
        if (*(char *)v65 == 0) {
            goto lab_0x40a250;
        } else {
            goto lab_0x40a116;
        }
    }
  lab_0x40a350:
    // 0x40a350
    *(int32_t *)(v1 + 40) = 2;
    v60 = a3 + 1;
    v57 = v58;
    goto lab_0x40a0e3;
  lab_0x40a455:
    // 0x40a455
    *(int32_t *)(v1 + 40) = 0;
    v60 = a3 + 1;
    v57 = v59;
    goto lab_0x40a0e3;
  lab_0x40a0da:
    // 0x40a0da
    *(int32_t *)(v1 + 40) = 0;
    v60 = a3;
    v57 = v56;
    goto lab_0x40a0e3;
  lab_0x40a250:;
    uint32_t v211 = *(int32_t *)a7; // 0x40a250
    int64_t v212 = v211; // 0x40a250
    int32_t * v78 = (int32_t *)(v1 + 52); // 0x40a254
    if ((int64_t)*v78 > v212) {
        // 0x40a25b
        *v78 = v211;
    }
    int32_t * v77 = (int32_t *)(v1 + 48); // 0x40a260
    if (*v77 > v211) {
        // 0x40a267
        *v77 = v211;
    }
    int32_t * v209 = (int32_t *)(v1 + 40); // 0x40a26c
    int64_t v70 = v212; // 0x40a272
    int64_t v104; // 0x40a030
    int64_t v105; // 0x40a030
    if (*v209 == 1) {
        uint32_t v213 = *v78; // 0x40a388
        int64_t v214 = v213; // 0x40a388
        v8 = v214;
        int64_t v215; // 0x40a030
        if (*v77 == v213) {
            // 0x40a480
            v215 = v214;
            if (v211 != v213) {
                // 0x40a488
                *v77 = v211;
                v8 = v212;
                v215 = v212;
            }
        } else {
            // 0x40a398
            v215 = v214;
            if (v211 != v213) {
                // 0x40a39c
                function_409f50(a2, v1);
                int64_t v216 = (int64_t)*(int32_t *)a7; // 0x40a3a9
                v8 = v216;
                v215 = v216;
            }
        }
        int64_t v217 = v215; // 0x40a3ad
        int64_t v218 = v217; // 0x40a3af
        if (v64 > v217) {
            int64_t v219 = 0x100000000 * v217 >> 32;
            int64_t v220 = *(int64_t *)(8 * v219 + a2); // 0x40a3d3
            int64_t v221 = v219 & 0xffffffff; // 0x40a3d7
            v8 = v221;
            if (*(char *)v220 == 45) {
                // 0x40a3e0
                if (*(char *)(v220 + 1) != 0) {
                    // 0x40a3e6
                    v104 = v221;
                    v105 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40a3ea;
                }
            }
            int64_t v222 = v221 + 1; // 0x40a3c0
            int64_t v223 = v222 & 0xffffffff; // 0x40a3c0
            v8 = v223;
            int64_t v224 = v219 + 1; // 0x40a3c3
            *(int32_t *)a7 = (int32_t)v222;
            v218 = v223;
            while (v64 > v224) {
                // 0x40a3d3
                v219 = v224;
                v220 = *(int64_t *)(8 * v219 + a2);
                v221 = v219 & 0xffffffff;
                v8 = v221;
                if (*(char *)v220 == 45) {
                    // 0x40a3e0
                    if (*(char *)(v220 + 1) != 0) {
                        // 0x40a3e6
                        v104 = v221;
                        v105 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40a3ea;
                    }
                }
                // 0x40a3c0
                v222 = v221 + 1;
                v223 = v222 & 0xffffffff;
                v8 = v223;
                v224 = v219 + 1;
                *(int32_t *)a7 = (int32_t)v222;
                v218 = v223;
            }
        }
        // 0x40a790
        v104 = v218;
        v105 = v218 & 0xffffffff;
        goto lab_0x40a3ea;
    } else {
        goto lab_0x40a278;
    }
  lab_0x40a0e3:
    // 0x40a0e3
    *(int32_t *)(v1 + 24) = 1;
    v9 = v60;
    v7 = *(char *)v60;
    v5 = v57;
    goto lab_0x40a0f3;
  lab_0x40a278:;
    int64_t v69 = v70;
    int32_t v71 = v69; // 0x40a278
    int64_t v72; // 0x40a030
    int64_t v73; // 0x40a030
    bool v74; // 0x40a030
    int64_t v75; // 0x40a292
    if (v2 == v71) {
        int64_t v76 = (int64_t)*v77; // 0x40a36d
        v8 = v76;
        v72 = v76;
        v73 = (int64_t)*v78;
        goto lab_0x40a372;
    } else {
        // 0x40a280
        v75 = *(int64_t *)((0x100000000 * v69 >> 29) + a2);
        v8 = v75;
        int64_t v79 = v74 ? -1 : 1; // 0x40a299
        int64_t v80 = 3; // 0x40a299
        int64_t v81 = v75;
        int64_t v82 = (int64_t)"--";
        unsigned char v83 = *(char *)v81; // 0x40a299
        char v84 = *(char *)v82; // 0x40a299
        char v85 = v84; // 0x40a299
        bool v86 = false; // 0x40a299
        while (v83 == v84) {
            v80--;
            int64_t v87 = v82 + v79; // 0x40a299
            int64_t v88 = v81 + v79; // 0x40a299
            v85 = v83;
            v86 = true;
            if (v80 == 0) {
                // break -> 
                break;
            }
            v81 = v88;
            v82 = v87;
            v83 = *(char *)v81;
            v84 = *(char *)v82;
            v85 = v84;
            v86 = false;
        }
        unsigned char v89 = v85;
        if ((v83 >= v89 && !v86) != v83 < v89) {
            // 0x40a2e0
            if (*(char *)v75 == 45) {
                int64_t v90 = v75 + 1; // 0x40a3f8
                unsigned char v91 = *(char *)v90; // 0x40a3f8
                if (v91 == 0) {
                    goto lab_0x40a2e9;
                } else {
                    int64_t v92 = v90 + (int64_t)(a4 != 0 == v91 == 45); // 0x40a419
                    *(int64_t *)(v1 + 32) = v92;
                    v68 = v91;
                    v67 = v92;
                    goto lab_0x40a116;
                }
            } else {
                goto lab_0x40a2e9;
            }
        } else {
            uint32_t v93 = *v77; // 0x40a2a5
            v8 = v93;
            int32_t v94 = *v78; // 0x40a2aa
            int64_t v95 = v69 + 1; // 0x40a2af
            int32_t v96 = v95; // 0x40a2b2
            *(int32_t *)a7 = v96;
            if (v93 == v94) {
                // 0x40a868
                *v77 = v96;
                v8 = v95 & 0xffffffff;
            } else {
                if (v94 != v96) {
                    // 0x40a2c2
                    function_409f50(a2, v1);
                    v8 = (int64_t)*v77;
                }
            }
            // 0x40a2d2
            *v78 = v2;
            *(int32_t *)a7 = v2;
            v72 = v8;
            v73 = v64;
            goto lab_0x40a372;
        }
    }
  lab_0x40a116:;
    int64_t v97 = 0x100000000 * a6 >> 32; // 0x40a05e
    int32_t v98 = v66 != 58 ? *(int32_t *)(v1 + 4) : 0; // 0x40a0fa
    int64_t v99 = v67;
    int64_t v100 = v64; // 0x40a11c
    int64_t v101 = v99; // 0x40a11c
    int64_t v102; // 0x40a11e
    if (a4 == 0) {
        goto lab_0x40a178;
    } else {
        // 0x40a11e
        v102 = (int64_t)*(int32_t *)a7;
        v8 = v102;
        int64_t v103 = *(int64_t *)(8 * v102 + a2); // 0x40a12a
        char c = *(char *)(v103 + 1); // 0x40a12e
        if (c == 45) {
            goto lab_0x40a5c0;
        } else {
            // 0x40a13c
            if ((int32_t)v97 == 0) {
                goto lab_0x40a178;
            } else {
                // 0x40a146
                if (*(char *)(v103 + 2) != 0) {
                    goto lab_0x40a5c0;
                } else {
                    // 0x40a150
                    v8 = v102;
                    v100 = v64;
                    v101 = v99;
                    if (strchr((char *)str3, (int32_t)c) == NULL) {
                        goto lab_0x40a5c0;
                    } else {
                        goto lab_0x40a178;
                    }
                }
            }
        }
    }
  lab_0x40a3ea:
    // 0x40a3ea
    *v78 = (int32_t)v104;
    v70 = v105;
    goto lab_0x40a278;
  lab_0x40a178:;
    int64_t v106 = v101 + 1; // 0x40a178
    int64_t * v107 = (int64_t *)(v1 + 32); // 0x40a185
    *v107 = v106;
    char v108 = *(char *)v101; // 0x40a18a
    int32_t c2 = v108; // 0x40a18e
    char * str4 = (char *)str3; // 0x40a194
    char * found_char_pos = strchr(str4, c2); // 0x40a194
    char * v109 = (char *)v106;
    if (*v109 == 0) {
        // 0x40a470
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if ((v108 || 1) == 59 || found_char_pos == NULL) {
        if (v98 != 0) {
            // 0x40aa30
            fprintf(g35, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5), "%s: invalid option -- '%c'\n", v108);
        }
        // 0x40a7ac
        *(int32_t *)(v1 + 8) = c2;
        // 0x40a309
        return 63;
    }
    int64_t v110 = (int64_t)found_char_pos; // 0x40a194
    unsigned char v111 = *(char *)(v110 + 1); // 0x40a1c3
    v8 = v111;
    if (*found_char_pos != 87 || v111 != 59) {
        int64_t v112 = v108; // 0x40a18a
        if (v111 != 58) {
            // 0x40a309
            return v112 & 0xffffffff;
        }
        unsigned char v113 = *v109; // 0x40a1da
        v8 = v113;
        if (*(char *)(v110 + 2) == 58) {
            if (v113 == 0) {
                // 0x40ac71
                *v3 = 0;
            } else {
                // 0x40a970
                *v3 = v106;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40a1fd
            *v107 = 0;
            // 0x40a309
            return v112 & 0xffffffff;
        }
        int32_t v114 = *(int32_t *)a7; // 0x40a1e5
        if (v113 != 0) {
            // 0x40a1f1
            *v3 = v106;
            *(int32_t *)a7 = v114 + 1;
            // 0x40a1fd
            *v107 = 0;
            // 0x40a309
            return v112 & 0xffffffff;
        }
        if (v114 != (int32_t)v100) {
            // 0x40aa6d
            *(int32_t *)a7 = v114 + 1;
            *v3 = *(int64_t *)(8 * (int64_t)v114 + a2);
            // 0x40a1fd
            *v107 = 0;
            // 0x40a309
            return v112 & 0xffffffff;
        }
        if (v98 != 0) {
            // 0x40ae2b
            fprintf(g35, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5), "%s: option requires an argument -- '%c'\n", v108);
        }
        // 0x40aced
        *(int32_t *)(v1 + 8) = c2;
        char v115 = *str4; // 0x40acf9
        // 0x40a1fd
        *v107 = 0;
        // 0x40a309
        return (4 * (int64_t)(v115 != 58) | (v115 != 58 ? 59 : 58)) & 0xffffffff;
    }
    if (a4 == 0) {
        // 0x40ae17
        *v107 = 0;
        // 0x40a309
        return 87;
    }
    int32_t v116 = *(int32_t *)a7; // 0x40a4b2
    char * str6; // 0x40a030
    int64_t v117; // 0x40a030
    if (*v109 == 0) {
        if (v116 == (int32_t)v100) {
            if (v98 != 0) {
                // 0x40afb9
                fprintf(g35, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5), "%s: option requires an argument -- '%c'\n", v108);
            }
            // 0x40ae6c
            *(int32_t *)(v1 + 8) = c2;
            char v118 = *str4; // 0x40ae78
            // 0x40a309
            return (4 * (int64_t)(v118 != 58) | (v118 != 58 ? 59 : 58)) & 0xffffffff;
        }
        int64_t v119 = v116; // 0x40a4b2
        int64_t v120 = v119 + 1; // 0x40ac5c
        v8 = v120 & 0xffffffff;
        *(int32_t *)a7 = (int32_t)v120;
        int64_t v121 = *(int64_t *)(8 * v119 + a2); // 0x40ac63
        *v3 = v121;
        str6 = (char *)v121;
        v117 = v121;
    } else {
        // 0x40a4bc
        *v3 = v106;
        *(int32_t *)a7 = v116 + 1;
        str6 = v109;
        v117 = v106;
    }
    // 0x40a4c8
    *v107 = v117;
    unsigned char v122 = *str6; // 0x40a4cd
    int64_t v123 = v122; // 0x40a4cd
    int64_t v124 = v123; // 0x40a4d7
    int64_t v125 = v117; // 0x40a4d7
    int64_t v126 = v123; // 0x40a4d7
    int64_t v127 = v117; // 0x40a4d7
    if (v122 != 0) {
        v126 = v124;
        v127 = v125;
        while (v124 != 61) {
            int64_t v128 = v125 + 1; // 0x40a4e0
            unsigned char v129 = *(char *)v128; // 0x40a4e4
            v124 = v129;
            v125 = v128;
            v126 = 0;
            v127 = v128;
            if (v129 == 0) {
                // break -> 0x40a504
                break;
            }
            v126 = v124;
            v127 = v125;
        }
    }
    int64_t n2 = v127 - v117; // 0x40a510
    int64_t v130 = 0;
    int64_t v131 = 0;
    int32_t v132 = 0;
    int64_t v133 = 0;
    char * str5 = (char *)a4; // 0x40a58d
    int64_t v134 = v133; // 0x40a594
    int32_t v135 = v132; // 0x40a594
    int64_t v136 = v130; // 0x40a594
    int64_t v137; // 0x40a030
    int32_t v138; // 0x40a030
    int32_t v139; // 0x40abb3
    int32_t v140; // 0x40abb6
    if (strncmp(str5, str6, (int32_t)n2) == 0) {
        // 0x40a596
        if ((n2 & 0xffffffff) == (int64_t)strlen(str5)) {
            // 0x40ad21
            v138 = v131;
            v137 = a4;
            goto lab_0x40abfb;
        }
        if (v130 != 0) {
            // 0x40a550
            v134 = 1;
            v135 = v132;
            v136 = v130;
            if ((int32_t)v97 == 0) {
                // 0x40a55a
                v134 = 1;
                v135 = v132;
                v136 = v130;
                if (*(int32_t *)(v130 + 8) == *(int32_t *)(a4 + 8)) {
                    // 0x40aba5
                    v134 = 1;
                    v135 = v132;
                    v136 = v130;
                    if (*(int64_t *)(v130 + 16) == *(int64_t *)(a4 + 16)) {
                        // 0x40abb3
                        v139 = *(int32_t *)(a4 + 24);
                        v140 = *(int32_t *)(v130 + 24);
                        v134 = v140 == v139 ? 0x100000000 * v133 >> 32 : 1;
                        v135 = v132;
                        v136 = v130;
                    }
                }
            }
        } else {
            // 0x40a5ae
            v134 = v133;
            v135 = v131;
            v136 = a4;
        }
    }
    int64_t v141 = v136;
    int32_t v142 = v135;
    int64_t v143 = v134;
    int64_t v144 = a4 + 32; // 0x40a56f
    int64_t v145 = *(int64_t *)v144; // 0x40a573
    int64_t v146 = v131 + 1 & 0xffffffff; // 0x40a57e
    while (v145 != 0) {
        // 0x40a584
        v130 = v141;
        v131 = v146;
        int64_t v147 = v144;
        v132 = v142;
        v133 = v143;
        str5 = (char *)v145;
        v134 = v133;
        v135 = v132;
        v136 = v130;
        if (strncmp(str5, str6, (int32_t)n2) == 0) {
            // 0x40a596
            if ((n2 & 0xffffffff) == (int64_t)strlen(str5)) {
                // 0x40ad21
                v138 = v131;
                v137 = v147;
                goto lab_0x40abfb;
            }
            if (v130 != 0) {
                // 0x40a550
                v134 = 1;
                v135 = v132;
                v136 = v130;
                if ((int32_t)v97 == 0) {
                    // 0x40a55a
                    v134 = 1;
                    v135 = v132;
                    v136 = v130;
                    if (*(int32_t *)(v130 + 8) == *(int32_t *)(v147 + 8)) {
                        // 0x40aba5
                        v134 = 1;
                        v135 = v132;
                        v136 = v130;
                        if (*(int64_t *)(v130 + 16) == *(int64_t *)(v147 + 16)) {
                            // 0x40abb3
                            v139 = *(int32_t *)(v147 + 24);
                            v140 = *(int32_t *)(v130 + 24);
                            v134 = v140 == v139 ? 0x100000000 * v133 >> 32 : 1;
                            v135 = v132;
                            v136 = v130;
                        }
                    }
                }
            } else {
                // 0x40a5ae
                v134 = v133;
                v135 = v131;
                v136 = v147;
            }
        }
        // 0x40a56f
        v141 = v136;
        v142 = v135;
        v143 = v134;
        v144 = v147 + 32;
        v145 = *(int64_t *)v144;
        v146 = v131 + 1 & 0xffffffff;
    }
    if ((int32_t)v143 != 0) {
        char * str7 = str6; // 0x40adf1
        int64_t v148 = v117; // 0x40adf1
        if (v98 != 0) {
            // 0x40af42
            fprintf(g35, dcgettext(NULL, "%s: option '-W %s' is ambiguous\n", 5), "%s: option '-W %s' is ambiguous\n", str6);
            v148 = *v107;
            str7 = (char *)v148;
        }
        int32_t len = strlen(str7); // 0x40ae00
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
        *v107 = v148 + (int64_t)len;
        // 0x40a309
        return 63;
    }
    // 0x40abf2
    v138 = v142;
    v137 = v141;
    if (v141 == 0) {
        // 0x40ae17
        *v107 = 0;
        // 0x40a309
        return 87;
    }
    goto lab_0x40abfb;
  lab_0x40a372:;
    int32_t v210 = v72; // 0x40a372
    if (v210 != (int32_t)v73) {
        // 0x40a376
        *(int32_t *)a7 = v210;
    }
    // 0x40a309
    return 0xffffffff;
  lab_0x40abfb:;
    int32_t v149 = *(int32_t *)(v137 + 8); // 0x40abfb
    if ((char)v126 == 0) {
        if (v149 == 1) {
            int32_t v150 = *(int32_t *)a7; // 0x40ae89
            uint64_t v151 = (int64_t)v150; // 0x40ae89
            if ((v100 & 0xffffffff) <= v151) {
                if (v98 != 0) {
                    int64_t v152 = *(int64_t *)v137; // 0x40b030
                    fprintf(g35, dcgettext(NULL, "%s: option '-W %s' requires an argument\n", 5), "%s: option '-W %s' requires an argument\n", (char *)v152);
                }
                int64_t v153 = *v107; // 0x40af87
                v8 = v153;
                int64_t v154 = -1; // 0x40af95
                int64_t v155 = v153; // 0x40af95
                int64_t v156 = 0; // 0x40af95
                while (v154 != 0) {
                    int64_t v157 = v155;
                    v154--;
                    v155 = v157 + (v74 ? -1 : 1);
                    v156 = v154;
                    if (*(char *)v157 == 0) {
                        // break -> 
                        break;
                    }
                    v156 = 0;
                }
                *v107 = v153 - 2 - v156;
                if (*str4 != 58) {
                    // 0x40a309
                    return 63;
                }
                // 0x40a309
                return 58;
            }
            // 0x40ae95
            *(int32_t *)a7 = v150 + 1;
            *v3 = *(int64_t *)(8 * v151 + a2);
        } else {
            // 0x40ad13
            *v3 = 0;
        }
    } else {
        if (v149 == 0) {
            char * str8 = str6; // 0x40af21
            int64_t v158 = v117; // 0x40af21
            if (v98 != 0) {
                int64_t v159 = *(int64_t *)v137; // 0x40aff3
                fprintf(g35, dcgettext(NULL, "%s: option '-W %s' doesn't allow an argument\n", 5), "%s: option '-W %s' doesn't allow an argument\n", (char *)v159);
                v158 = *v107;
                str8 = (char *)v158;
            }
            // 0x40af27
            *v107 = v158 + (int64_t)strlen(str8);
            // 0x40a309
            return 63;
        }
        // 0x40ac10
        *v3 = (0x100000000 * v127 >> 32) + 1;
    }
    // 0x40ac19
    *v107 = v117 + (int64_t)strlen(str6);
    if (a5 != 0) {
        // 0x40ac33
        *(int32_t *)a5 = v138;
    }
    int64_t v160 = *(int64_t *)(v137 + 16); // 0x40ac39
    uint32_t v161 = *(int32_t *)(v137 + 24); // 0x40ac3d
    int64_t v162 = v160; // 0x40ac44
    int32_t v163 = v161; // 0x40ac44
    if (v160 == 0) {
        // 0x40a309
        return (int64_t)v161 & 0xffffffff;
    }
    goto lab_0x40a77c;
  lab_0x40a5c0:;
    int64_t v204 = v99; // 0x40a030
    int32_t v41 = 0; // 0x40a030
    int64_t n = 0; // 0x40a030
    int64_t v174 = v99; // 0x40a030
    switch (*(char *)v99) {
        case 0: {
            goto lab_0x40a5fb;
        }
        case 61: {
            goto lab_0x40a5fb;
        }
        default: {
            int64_t v205 = v204 + 1; // 0x40a5e0
            char v206 = *(char *)v205; // 0x40a5e4
            v204 = v205;
            while (v206 != 0 == (v206 != 61)) {
                // 0x40a5e0
                v205 = v204 + 1;
                v206 = *(char *)v205;
                v204 = v205;
            }
            int64_t v207 = v205 - v99; // 0x40a5f4
            v41 = v207;
            n = v207;
            v174 = v205;
            goto lab_0x40a5fb;
        }
    }
  lab_0x40a2e9:;
    int64_t v208 = 0xffffffff; // 0x40a2f1
    if (*v209 != 0) {
        // 0x40a2f7
        *v3 = v75;
        *(int32_t *)a7 = v71 + 1;
        v208 = 1;
    }
    // 0x40a309
    return v208 & 0xffffffff;
  lab_0x40a77c:
    // 0x40a77c
    *(int32_t *)v162 = v163;
    // 0x40a309
    return 0;
  lab_0x40a5fb:;
    int32_t v164; // 0x40a030
    int64_t v165; // 0x40a030
    int64_t v166; // 0x40a030
    int64_t v167; // 0x40a030
    int64_t v42; // 0x40a030
    int64_t v168; // 0x40a030
    int64_t v169; // 0x40a030
    int32_t v170; // 0x40a030
    int32_t v171; // 0x40a6f5
    int64_t v172; // 0x40a6ed
    int64_t v173; // 0x40a618
    if (v68 == 0) {
        // 0x40a5fb
        v164 = v97;
        v166 = v102;
        v172 = v64;
        goto lab_0x40a898;
    } else {
        // 0x40a60c
        v168 = 0x100000000 * v174;
        v173 = 0x100000000 * a1 >> 32;
        int32_t v43 = v97;
        v36 = (int64_t *)(v1 + 32);
        v30 = 0;
        v31 = 0;
        v32 = -1;
        v33 = a4;
        v35 = 0;
        str2 = v99;
        v37 = 0;
        v38 = v68;
        while (true) {
          lab_0x40a694:
            // 0x40a694
            v39 = v37;
            v34 = v35;
            v13 = v33;
            v20 = v32;
            v40 = v31;
            v16 = v30;
            char * str = (char *)v38; // 0x40a69a
            v18 = v40;
            v23 = v39;
            if (strncmp(str, (char *)str2, (int32_t)n) != 0) {
                goto lab_0x40a680;
            } else {
                // 0x40a6a3
                if (v41 == strlen(str)) {
                    // 0x40a7f0
                    v42 = v39;
                    if (v39 == 0) {
                        goto lab_0x40a821;
                    } else {
                        goto lab_0x40a810;
                    }
                }
                if (v16 != 0) {
                    // 0x40a640
                    v18 = v40;
                    v23 = v39;
                    if (v40 % 256 != 0) {
                        goto lab_0x40a680;
                    } else {
                        if (v43 != 0) {
                            goto lab_0x40a65c;
                        } else {
                            // 0x40a650
                            if (*(int32_t *)(v16 + 8) == *(int32_t *)(v13 + 8)) {
                                int64_t v44 = *(int64_t *)(v13 + 16); // 0x40a7c0
                                int64_t v45 = *(int64_t *)(v16 + 16); // 0x40a7c4
                                if (v45 != v44) {
                                    goto lab_0x40a65c;
                                } else {
                                    int32_t v46 = *(int32_t *)(v13 + 24); // 0x40a7ce
                                    int32_t v47 = *(int32_t *)(v16 + 24); // 0x40a7d1
                                    int64_t v48; // 0x40a030
                                    v18 = v48;
                                    v23 = v39;
                                    if (v47 != v46) {
                                        goto lab_0x40a65c;
                                    } else {
                                        goto lab_0x40a680;
                                    }
                                }
                            } else {
                                goto lab_0x40a65c;
                            }
                        }
                    }
                } else {
                    int64_t v49 = v13 + 32; // 0x40a6c4
                    int64_t v50 = *(int64_t *)v49; // 0x40a6c8
                    int32_t v51 = v34;
                    v17 = v13;
                    v19 = v40;
                    v21 = v51;
                    v22 = v49;
                    v24 = v39;
                    v25 = v50;
                    v26 = v13;
                    v27 = v40;
                    v28 = v51;
                    v29 = v39;
                    if (v50 == 0) {
                        // break -> 0x40a6e0
                        break;
                    }
                    goto lab_0x40a68f;
                }
            }
        }
      lab_0x40a6e0:
        // 0x40a6e0
        v171 = *(int32_t *)a7;
        int64_t v175 = v171; // 0x40a6f5
        v8 = v175;
        if ((char)v27 == 0 == v29 == 0) {
            // 0x40a70a
            v172 = v173 & 0xffffffff;
            v165 = v175;
            v169 = v26;
            v170 = v28;
            v167 = v172;
            v164 = v43;
            v166 = v175;
            if (v26 == 0) {
                goto lab_0x40a898;
            } else {
                goto lab_0x40a716;
            }
        } else {
            if (v98 == 0) {
                goto lab_0x40ab51;
            } else {
                if (v29 == 0) {
                    if ((char)v27 == 0) {
                        goto lab_0x40ab51;
                    } else {
                        int64_t v176 = *(int64_t *)(8 * v175 + a2); // 0x40ad5e
                        fprintf(g35, dcgettext(NULL, "%s: option '%s' is ambiguous\n", 5), "%s: option '%s' is ambiguous\n", (char *)v176);
                        goto lab_0x40ab23;
                    }
                } else {
                    int64_t v177 = *(int64_t *)(8 * v175 + a2); // 0x40aabc
                    fprintf(g35, dcgettext(NULL, "%s: option '%s' is ambiguous; possibilities:", 5), "%s: option '%s' is ambiguous; possibilities:", (char *)v177);
                    fprintf(g35, " '--%s'", (char *)*(int64_t *)v26);
                    int64_t v178; // bp-72, 0x40a030
                    int64_t v179 = *(int64_t *)((int64_t)&v178 + 8); // 0x40ab09
                    if (v179 != 0) {
                        fprintf(g35, " '--%s'", (char *)*(int64_t *)*(int64_t *)v179);
                        int64_t v180 = *(int64_t *)(v179 + 8); // 0x40ab09
                        int64_t v181 = v180; // 0x40ab10
                        while (v180 != 0) {
                            int64_t v182 = *(int64_t *)*(int64_t *)v181; // 0x40aaf3
                            fprintf(g35, " '--%s'", (char *)v182);
                            v180 = *(int64_t *)(v181 + 8);
                            v181 = v180;
                        }
                    }
                    // 0x40ab12
                    fputc(10, g35);
                    goto lab_0x40ab23;
                }
            }
        }
    }
  lab_0x40a898:;
    // 0x40a898
    char * v183; // 0x40a030
    int64_t v184; // 0x40a030
    int64_t v185; // 0x40a030
    int64_t v186; // 0x40a030
    if (v164 == 0) {
        // 0x40ac7f
        v184 = v166;
        if (v98 == 0) {
            goto lab_0x40a92f;
        } else {
            int64_t v187 = *(int64_t *)(v1 + 32); // 0x40ac92
            int64_t v188 = *(int64_t *)(8 * v166 + a2); // 0x40ac97
            v185 = v187;
            if (*(char *)(v188 + 1) != 45) {
                // 0x40ac8d
                v183 = (char *)v187;
                v186 = v188;
                goto lab_0x40a8f1;
            } else {
                goto lab_0x40aca8;
            }
        }
    } else {
        int64_t v189 = *(int64_t *)(8 * v166 + a2); // 0x40a8ae
        if (*(char *)(v189 + 1) == 45) {
            // 0x40add3
            v184 = v166;
            if (v98 == 0) {
                goto lab_0x40a92f;
            } else {
                // 0x40addf
                v185 = *(int64_t *)(v1 + 32);
                goto lab_0x40aca8;
            }
        } else {
            int64_t v190 = *(int64_t *)(v1 + 32); // 0x40a8bc
            char * c3 = (char *)v190;
            v8 = v166 & 0xffffffff;
            v100 = v172;
            v101 = v190;
            if (strchr((char *)str3, (int32_t)*c3) != NULL) {
                goto lab_0x40a178;
            } else {
                // 0x40a8e9
                v183 = c3;
                v186 = v189;
                if (v98 == 0) {
                    goto lab_0x40a92f;
                } else {
                    goto lab_0x40a8f1;
                }
            }
        }
    }
  lab_0x40a716:;
    int64_t v191 = v168 >> 32;
    int64_t v192 = v165 + 1; // 0x40a716
    *(int32_t *)a7 = (int32_t)v192;
    int32_t v193 = *(int32_t *)(v169 + 8); // 0x40a727
    if (*(char *)v191 == 0) {
        if (v193 == 1) {
            // 0x40a841
            if ((v192 & 0xffffffff) >= v167) {
                if (v98 != 0) {
                    int64_t v194 = *(int64_t *)v169; // 0x40aeed
                    fprintf(g35, dcgettext(NULL, "%s: option '--%s' requires an argument\n", 5), "%s: option '--%s' requires an argument\n", (char *)v194);
                }
                int64_t str9 = *v36; // 0x40ad99
                *v36 = str9 + (int64_t)strlen((char *)str9);
                *(int32_t *)(v1 + 8) = *(int32_t *)(v169 + 24);
                if (*(char *)str3 != 58) {
                    // 0x40a309
                    return 63;
                }
                // 0x40a309
                return 58;
            }
            // 0x40a849
            *(int32_t *)a7 = (int32_t)v165 + 2;
            *v3 = *(int64_t *)((0x100000000 * v192 >> 29) + a2);
        }
    } else {
        if (v193 == 0) {
            if (v98 != 0) {
                // 0x40a987
                if (*(char *)(*(int64_t *)(a2 - 8 + (0x100000000 * v192 >> 29)) + 1) == 45) {
                    // 0x40aeaf
                    fprintf(g35, dcgettext(NULL, "%s: option '--%s' doesn't allow an argument\n", 5));
                } else {
                    // 0x40a9a8
                    fprintf(g35, dcgettext(NULL, "%s: option '%c%s' doesn't allow an argument\n", 5));
                }
            }
            int64_t str10 = *v36; // 0x40a9d7
            *v36 = str10 + (int64_t)strlen((char *)str10);
            *(int32_t *)(v1 + 8) = *(int32_t *)(v169 + 24);
            // 0x40a309
            return 63;
        }
        // 0x40a738
        *v3 = v191 + 1;
    }
    int64_t str11 = *v36; // 0x40a741
    *v36 = str11 + (int64_t)strlen((char *)str11);
    if (a5 != 0) {
        // 0x40a760
        *(int32_t *)a5 = v170;
    }
    int64_t v195 = *(int64_t *)(v169 + 16); // 0x40a76b
    uint32_t v196 = *(int32_t *)(v169 + 24); // 0x40a76f
    v162 = v195;
    v163 = v196;
    if (v195 == 0) {
        // 0x40a309
        return (int64_t)v196 & 0xffffffff;
    }
    goto lab_0x40a77c;
  lab_0x40ab51:;
    int64_t str12 = *v36; // 0x40ab51
    int32_t len2 = strlen((char *)str12); // 0x40ab5c
    *(int32_t *)(v1 + 8) = 0;
    *v36 = str12 + (int64_t)len2;
    *(int32_t *)a7 = v171 + 1;
    if (v29 == 0) {
        // 0x40a309
        return 63;
    }
    int64_t v197 = *(int64_t *)(v29 + 8); // 0x40ab88
    free((int64_t *)v29);
    int64_t v198 = v197; // 0x40ab97
    while (v197 != 0) {
        // 0x40ab88
        v197 = *(int64_t *)(v198 + 8);
        free((int64_t *)v198);
        v198 = v197;
    }
    // 0x40a309
    return 63;
  lab_0x40a92f:
    // 0x40a92f
    *(int64_t *)(v1 + 32) = (int64_t)&g9;
    *(int32_t *)a7 = (int32_t)v184 + 1;
    *(int32_t *)(v1 + 8) = 0;
    // 0x40a309
    return 63;
  lab_0x40aca8:
    // 0x40aca8
    fprintf(g35, dcgettext(NULL, "%s: unrecognized option '--%s'\n", 5), "%s: unrecognized option '--%s'\n", (char *)v185);
    int64_t v199 = (int64_t)*(int32_t *)a7; // 0x40acd8
    v8 = v199;
    v184 = v199;
    goto lab_0x40a92f;
  lab_0x40ab23:;
    int64_t str13 = *v36; // 0x40ab23
    int32_t len3 = strlen((char *)str13); // 0x40ab2b
    *(int32_t *)a7 = *(int32_t *)a7 + 1;
    *(int32_t *)(v1 + 8) = 0;
    *v36 = str13 + (int64_t)len3;
    // 0x40a309
    return 63;
  lab_0x40a8f1:;
    char v200 = *(char *)v186; // 0x40a8f6
    fprintf(g35, dcgettext(NULL, "%s: unrecognized option '%c%s'\n", 5), "%s: unrecognized option '%c%s'\n", v200, v183);
    int64_t v201 = (int64_t)*(int32_t *)a7; // 0x40a92b
    v8 = v201;
    v184 = v201;
    goto lab_0x40a92f;
  lab_0x40a821:;
    int64_t v202 = (int64_t)*(int32_t *)a7; // 0x40a821
    v8 = v202;
    v165 = v202;
    v169 = v13;
    v170 = v34;
    v167 = v173 & 0xffffffff;
    goto lab_0x40a716;
  lab_0x40a810:;
    int64_t v203 = *(int64_t *)(v42 + 8); // 0x40a810
    free((int64_t *)v42);
    v42 = v203;
    if (v203 != 0) {
        goto lab_0x40a810;
    } else {
        goto lab_0x40a821;
    }
}
// Address range: 0x40b070 - 0x40b0c6
int64_t function_40b070(int64_t a1) {
    // 0x40b070
    *(int32_t *)&g88 = g28;
    *(int32_t *)&g89 = g27;
    int64_t v1; // 0x40b070
    int64_t result = function_40a030(v1, v1, v1, v1, v1, v1, &g88, a1 & 0xffffffff); // 0x40b096
    g28 = *(int32_t *)&g88;
    g94 = (char *)g91;
    *(int32_t *)&g26 = g90;
    return result;
}
// Address range: 0x40b0d0 - 0x40b0e8
int64_t function_40b0d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b0d0
    return function_40b070(1);
}
// Address range: 0x40b0f0 - 0x40b103
int64_t function_40b0f0(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int64_t * a5, int64_t a6) {
    // 0x40b0f0
    return function_40b070(0);
}
// Address range: 0x40b110 - 0x40b125
int64_t function_40b110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b110
    return function_40a030(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40b130 - 0x40b146
int64_t function_40b130(void) {
    // 0x40b130
    return function_40b070(0);
}
// Address range: 0x40b150 - 0x40b168
int64_t function_40b150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b150
    return function_40a030(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40b170 - 0x40b199
int64_t function_40b170(int32_t * pwc, int64_t wstr2, int64_t n) {
    // 0x40b170
    int64_t ps; // 0x40b170
    int32_t result; // 0x40b194
    if (wstr2 == 0) {
        int64_t wstr = (int64_t)&g9;
        result = mbrtowc((int32_t *)0, (char *)wstr, (int32_t)1, (struct _TYPEDEF___mbstate_t *)ps);
        return result;
    }
    // 0x40b175
    if (n == 0) {
        // 0x40b17a
        return -2;
    }
    // 0x40b194
    result = mbrtowc((int32_t *)(int64_t)pwc, (char *)wstr2, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps);
    return result;
}
// Address range: 0x40b1a0 - 0x40b2a4
int64_t function_40b1a0(int64_t result, int32_t a2, int64_t a3) {
    // 0x40b1a0
    if (a3 == 0) {
        // 0x40b1d9
        return 0;
    }
    int64_t v1 = result; // 0x40b1ac
    int64_t v2 = a3; // 0x40b1ac
    int64_t result2; // 0x40b1a0
    if (result % 8 != 0) {
        char v3 = a2; // 0x40b1ae
        int64_t v4 = result; // 0x40b1b1
        if ((char)result == v3) {
            // 0x40b1d9
            return result;
        }
        int64_t v5 = a3; // 0x40b1b1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40b1c0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40b1e0;
            }
            // 0x40b1c6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40b1d9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40b1d9
        return result2;
    }
  lab_0x40b1e0:;
    int64_t result3 = v1; // 0x40b20d
    int64_t v6 = v2; // 0x40b20d
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x40b1ef
        int64_t v9 = 0x10000 * v8 | v8; // 0x40b1fc
        int64_t v10 = 0x100000000 * v9 | v9; // 0x40b206
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x40b226
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x40b255
            int64_t v13 = v1 + 8; // 0x40b259
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x40b243
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x40b26c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x40b263
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x40b1d9
                return 0;
            }
        }
    }
  lab_0x40b26c:;
    char v15 = a2; // 0x40b26c
    if (*(char *)result3 == v15) {
        // 0x40b1d9
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x40b280
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x40b1d9
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x40b1d9
    return result2;
}
// Address range: 0x40b2b0 - 0x40b315
int64_t function_40b2b0(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40b2b7
    int32_t v1 = __fpending(stream); // 0x40b2b7
    int32_t is_ferror = ferror(stream); // 0x40b2c2
    int32_t v2 = fclose(stream); // 0x40b2cc
    if (is_ferror != 0) {
        // 0x40b2f8
        if (v2 == 0) {
            // 0x40b2fc
            *__errno_location() = 0;
        }
        // 0x40b2ee
        return 0xffffffff;
    }
    // 0x40b2d5
    if (v2 == 0) {
        // 0x40b2ee
        return 0;
    }
    int64_t result = 0xffffffff; // 0x40b2dc
    if (v1 == 0) {
        // 0x40b2de
        result = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40b2ee
    return result;
}
// Address range: 0x40b320 - 0x40b882
int64_t function_40b320(void) {
    char * v1 = nl_langinfo(14); // 0x40b336
    char * v2 = g92; // 0x40b33b
    char * v3; // 0x40b320
    int64_t v4; // 0x40b320
    int64_t v5; // 0x40b320
    int64_t v6; // 0x40b320
    int64_t v7; // 0x40b320
    int32_t size; // 0x40b320
    int32_t size2; // 0x40b320
    int32_t len; // 0x40b3f2
    int64_t v8; // 0x40b3f2
    char * env_val; // 0x40b3dd
    if (v2 == NULL) {
        // 0x40b3d8
        env_val = getenv("CHARSETALIASDIR");
        size = 116;
        v4 = 102;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 101;
        if (env_val == NULL) {
            goto lab_0x40b445;
        } else {
            // 0x40b3ea
            size = 116;
            v4 = 102;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 101;
            if (*env_val == 0) {
                goto lab_0x40b445;
            } else {
                // 0x40b3ef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40b3dd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40b875
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40b445;
                    } else {
                        // 0x40b7e9
                        size2 = len + 14;
                        goto lab_0x40b40b;
                    }
                } else {
                    goto lab_0x40b40b;
                }
            }
        }
    } else {
        // 0x40b320
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40b35a;
    }
  lab_0x40b68c:;
    // 0x40b68c
    int64_t v10; // 0x40b320
    int64_t v11 = v10;
    int64_t v12; // 0x40b320
    int64_t v13 = v12;
    struct _IO_FILE * stream; // 0x40b4cb
    int32_t v14 = __uflow(stream); // 0x40b68f
    int64_t v15 = v13; // 0x40b699
    int32_t v16 = v14; // 0x40b699
    int64_t v17 = v11; // 0x40b699
    int64_t v18 = v13; // 0x40b699
    int64_t v19 = v11; // 0x40b699
    if (v14 == -1) {
        // break -> 0x40b69f
        goto lab_0x40b69f;
    }
    goto lab_0x40b519;
  lab_0x40b50e:;
    // 0x40b50e
    int64_t v116; // 0x40b320
    int64_t v137 = v116;
    int64_t v115; // 0x40b320
    int64_t v138 = v115;
    int64_t v114; // 0x40b320
    int64_t v139 = v114;
    int64_t * v30; // 0x40b500
    *v30 = v138 + 1;
    unsigned char v140 = *(char *)v138; // 0x40b516
    v15 = v139;
    v16 = v140;
    v17 = v137;
    goto lab_0x40b519;
  lab_0x40b519:;
    int64_t v20 = v17;
    int32_t c = v16;
    int64_t v21 = v15;
    int64_t v22; // 0x40b320
    int32_t v23; // bp-120, 0x40b320
    int32_t v24; // bp-184, 0x40b320
    int64_t v25; // 0x40b320
    int64_t v26; // 0x40b4e8
    int64_t v27; // 0x40b4ed
    int64_t * v28; // 0x40b504
    switch (c) {
        case 32: {
            // 0x40b500
            v25 = v21;
            v22 = v20;
            goto lab_0x40b500_2;
        }
        case 10: {
            // 0x40b500
            v25 = v21;
            v22 = v20;
            goto lab_0x40b500_2;
        }
        case 9: {
            // 0x40b500
            v25 = v21;
            v22 = v20;
            goto lab_0x40b500_2;
        }
        case 35: {
            uint64_t v29 = *v30; // 0x40b6f1
            uint64_t v31 = *v28; // 0x40b6f5
            int32_t v32; // 0x40b320
            char v33; // 0x40b320
            unsigned char v34; // 0x40b6d8
            int32_t v35; // 0x40b6fe
            if (v29 < v31) {
                // 0x40b6d0
                *v30 = v29 + 1;
                v34 = *(char *)v29;
                v32 = v34;
                v33 = 1;
            } else {
                // 0x40b6fb
                v35 = __uflow(stream);
                v32 = v35;
                v33 = v35 != -1;
            }
            char v36 = v33;
            int32_t v37 = v32;
            while (v37 != 10 && v36 != 0) {
                // 0x40b6f1
                v29 = *v30;
                v31 = *v28;
                if (v29 < v31) {
                    // 0x40b6d0
                    *v30 = v29 + 1;
                    v34 = *(char *)v29;
                    v32 = v34;
                    v33 = 1;
                } else {
                    // 0x40b6fb
                    v35 = __uflow(stream);
                    v32 = v35;
                    v33 = v35 != -1;
                }
                // 0x40b6e0
                v36 = v33;
                v37 = v32;
            }
            // 0x40b7cf
            v18 = v21;
            v19 = v20;
            if (v37 == -1) {
                // break -> 0x40b69f
                break;
            }
            // 0x40b500
            v25 = v21;
            v22 = v20;
            goto lab_0x40b500_2;
        }
        default: {
            // 0x40b52f
            ungetc(c, stream);
            int32_t items_assigned = fscanf(stream, "%50s %50s", &v24, &v23); // 0x40b547
            int64_t v38 = v27; // 0x40b54f
            v18 = v21;
            v19 = v20;
            if (items_assigned < 2) {
                // break -> 0x40b69f
                break;
            }
            int64_t v39 = v38;
            int32_t v40 = *(int32_t *)v39; // 0x40b558
            int64_t v41 = v39 + 4; // 0x40b55a
            int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x40b566
            uint32_t v43 = v42 & -0x7f7f7f80; // 0x40b568
            v38 = v41;
            while (v43 == 0) {
                // 0x40b558
                v39 = v38;
                v40 = *(int32_t *)v39;
                v41 = v39 + 4;
                v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
                v43 = v42 & -0x7f7f7f80;
                v38 = v41;
            }
            int32_t v44 = (v42 & 0x8080) == 0 ? v43 / 0x10000 : v43; // 0x40b579
            int64_t v45 = v39 + 6; // 0x40b57c
            unsigned char v46 = (char)v44; // 0x40b586
            int64_t v47 = -1 - v46 < v46 ? 4 : 3; // 0x40b58b
            int64_t v48 = v26; // 0x40b58f
            int64_t v49 = v48;
            int32_t v50 = *(int32_t *)v49; // 0x40b592
            int64_t v51 = v49 + 4; // 0x40b594
            int32_t v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80); // 0x40b5a0
            uint32_t v53 = v52 & -0x7f7f7f80; // 0x40b5a2
            v48 = v51;
            while (v53 == 0) {
                // 0x40b592
                v49 = v48;
                v50 = *(int32_t *)v49;
                v51 = v49 + 4;
                v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80);
                v53 = v52 & -0x7f7f7f80;
                v48 = v51;
            }
            int64_t v54 = (v42 & 0x8080) == 0 ? v45 : v41; // 0x40b580
            int64_t v55 = v54 - v47 - v27; // 0x40b58f
            int32_t v56 = (v52 & 0x8080) == 0 ? v53 / 0x10000 : v53; // 0x40b5b8
            int64_t v57 = (v52 & 0x8080) == 0 ? v49 + 6 : v51; // 0x40b5bf
            unsigned char v58 = (char)v56; // 0x40b5c5
            int64_t v59 = -1 - v58 < v58 ? 4 : 3; // 0x40b5c8
            int64_t v60 = v57 - v59 - v26; // 0x40b5cc
            int64_t v61 = v60 + v55; // 0x40b5d5
            int64_t * v62; // 0x40b320
            int64_t v63; // 0x40b320
            if (v21 != 0) {
                int64_t v64 = v61 + v21; // 0x40b70b
                int64_t * mem = realloc((int64_t *)v20, (int32_t)v64 + 3); // 0x40b720
                v63 = v64;
                v62 = mem;
            } else {
                int64_t * mem2 = malloc((int32_t)v61 + 3); // 0x40b5f1
                v63 = v61;
                v62 = mem2;
            }
            int64_t * v65 = v62;
            if (v65 == NULL) {
                // 0x40b82c
                free((int64_t *)v20);
                fclose(stream);
                goto lab_0x40b4a4;
            }
            int64_t v66 = v63;
            int64_t v67 = (int64_t)v65;
            int64_t v68 = v66 + 2;
            int64_t v69 = v55 + 1; // 0x40b618
            int64_t v70 = v68 - v60 + v67;
            int64_t v71 = -2 - v55 + v70; // 0x40b622
            uint32_t v72 = (int32_t)v69; // 0x40b625
            if (v72 >= 8) {
                int32_t v73 = v24; // 0x40b734
                *(int64_t *)v71 = (int64_t)v73;
                int64_t v74 = (v69 & 0xffffffff) - 8;
                int64_t v75 = *(int64_t *)(v74 + v27); // 0x40b73d
                *(int64_t *)(v71 + v74) = v75;
                int64_t v76 = v71 + 8 & -8; // 0x40b74e
                int64_t v77 = v71 - v76; // 0x40b752
                uint32_t v78 = (int32_t)(v77 + v69); // 0x40b75d
                if (v78 >= 8) {
                    int64_t v79 = v27 - v77; // 0x40b757
                    uint32_t v80 = v78 & -8; // 0x40b779
                    int64_t v81 = 0; // 0x40b320
                    int64_t v82 = v81;
                    int64_t v83 = v82 + 8; // 0x40b76e
                    int64_t v84 = *(int64_t *)(v79 + v82); // 0x40b771
                    *(int64_t *)(v82 + v76) = v84;
                    v81 = v83 & 0xffffffff;
                    while (v80 > (int32_t)v83) {
                        // 0x40b76b
                        v82 = v81;
                        v83 = v82 + 8;
                        v84 = *(int64_t *)(v79 + v82);
                        *(int64_t *)(v82 + v76) = v84;
                        v81 = v83 & 0xffffffff;
                    }
                }
            } else {
                if ((v69 & 4) != 0) {
                    int32_t v85 = v24; // 0x40b7ff
                    *(int32_t *)v71 = v85;
                    int64_t v86 = (v69 & 0xffffffff) - 4;
                    int32_t v87 = *(int32_t *)(v86 + v27); // 0x40b807
                    *(int32_t *)(v71 + v86) = v87;
                } else {
                    if (v72 != 0) {
                        int32_t v88 = v24; // 0x40b63b
                        *(char *)v71 = (char)v88;
                        if ((v69 & 2) != 0) {
                            int64_t v89 = (v69 & 0xffffffff) - 2;
                            int16_t v90 = *(int16_t *)(v89 + v27); // 0x40b852
                            *(int16_t *)(v71 + v89) = v90;
                        }
                    }
                }
            }
            int64_t v91 = v60 + 1; // 0x40b64b
            int64_t v92 = v70 - 1; // 0x40b64f
            uint32_t v93 = (int32_t)v91; // 0x40b654
            if (v93 >= 8) {
                int32_t v94 = v23; // 0x40b782
                *(int64_t *)v92 = (int64_t)v94;
                int64_t v95 = (v91 & 0xffffffff) - 8;
                int64_t v96 = *(int64_t *)(v95 + v26); // 0x40b78e
                *(int64_t *)(v92 + v95) = v96;
                int64_t v97 = v70 + 7 & -8; // 0x40b79c
                int64_t v98 = v92 - v97; // 0x40b7a0
                uint32_t v99 = (int32_t)(v98 + v91); // 0x40b7ab
                if (v99 >= 8) {
                    int64_t v100 = v26 - v98; // 0x40b7a5
                    uint32_t v101 = v99 & -8; // 0x40b7c6
                    int64_t v102 = 0; // 0x40b320
                    int64_t v103 = v102;
                    int64_t v104 = v103 + 8; // 0x40b7bb
                    int64_t v105 = *(int64_t *)(v100 + v103); // 0x40b7be
                    *(int64_t *)(v103 + v97) = v105;
                    v102 = v104 & 0xffffffff;
                    while (v101 > (int32_t)v104) {
                        // 0x40b7b9
                        v103 = v102;
                        v104 = v103 + 8;
                        v105 = *(int64_t *)(v100 + v103);
                        *(int64_t *)(v103 + v97) = v105;
                        v102 = v104 & 0xffffffff;
                    }
                }
            } else {
                if ((v91 & 4) != 0) {
                    int32_t v106 = v23; // 0x40b816
                    *(int32_t *)v92 = v106;
                    int64_t v107 = (v91 & 0xffffffff) - 4;
                    int32_t v108 = *(int32_t *)(v107 + v26); // 0x40b81e
                    *(int32_t *)(v92 + v107) = v108;
                } else {
                    if (v93 != 0) {
                        int32_t v109 = v23; // 0x40b66a
                        *(char *)v92 = (char)v109;
                        if ((v91 & 2) != 0) {
                            int64_t v110 = (v91 & 0xffffffff) - 2;
                            int16_t v111 = *(int16_t *)(v110 + v26); // 0x40b865
                            *(int16_t *)(v92 + v110) = v111;
                        }
                    }
                }
            }
            uint64_t v112 = *v30; // 0x40b67e
            uint64_t v113 = *v28; // 0x40b682
            v114 = v68;
            v115 = v112;
            v116 = v67;
            v12 = v68;
            v10 = v67;
            if (v112 < v113) {
                goto lab_0x40b50e;
            } else {
                goto lab_0x40b68c;
            }
        }
    }
  lab_0x40b445:;
    int64_t * mem3 = malloc(size); // 0x40b445
    int64_t v117 = (int64_t)&g9; // 0x40b450
    int64_t v118; // 0x40b320
    int64_t path; // 0x40b320
    if (mem3 == NULL) {
        goto lab_0x40b422;
    } else {
        int64_t v119 = (int64_t)mem3; // 0x40b445
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v119) = 47;
        path = v119;
        v118 = v4;
        goto lab_0x40b466;
    }
  lab_0x40b35a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40b34d
    char v120 = *v3; // 0x40b35a
    int64_t v121; // 0x40b320
    if (v120 == 0) {
        // 0x40b3b4
        v121 = str;
        return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
    }
    char v122 = v120; // 0x40b320
    int64_t v123 = v7;
    char * str2 = (char *)v123;
    int64_t v124; // 0x40b320
    while (strcmp((char *)str, str2) != 0) {
        int64_t v125 = v123 + 1;
        if (v122 == 42) {
            // 0x40b3a0
            v124 = v125;
            if (*(char *)v125 == 0) {
                goto lab_0x40b3a7;
            }
        }
        int64_t str3 = v125 + (int64_t)strlen(str2); // 0x40b370
        int64_t v126 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40b37d
        char v127 = *(char *)v126; // 0x40b382
        v122 = v127;
        if (v127 == 0) {
            // 0x40b3b4
            v121 = str;
            return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
        }
        v123 = v126;
        str2 = (char *)v123;
    }
    // 0x40b38b
    v124 = v123 + 1;
  lab_0x40b3a7:
    // 0x40b3b4
    v121 = v124 + (int64_t)strlen(str2);
    return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
  lab_0x40b422:;
    char * v128 = (char *)v117;
    g92 = v128;
    v3 = v128;
    v7 = v117;
    goto lab_0x40b35a;
  lab_0x40b466:;
    int64_t v129 = v118 + path; // 0x40b466
    *(int64_t *)v129 = 0x2e74657372616863;
    *(int16_t *)(v129 + 12) = 115;
    *(int32_t *)(v129 + 8) = 0x61696c61;
    if (open((char *)path, O_RDONLY) >= 0) {
        // 0x40b4c1
        int32_t fd; // 0x40b492
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40b7f2
            close(fd);
        } else {
            int64_t v130 = (int64_t)stream; // 0x40b4cb
            v26 = &v23;
            v27 = &v24;
            v30 = (int64_t *)(v130 + 8);
            v28 = (int64_t *)(v130 + 16);
            v25 = 0;
            v22 = 0;
            while (true) {
              lab_0x40b500_2:;
                int64_t v131 = v22;
                int64_t v132 = v25;
                uint64_t v133 = *v30; // 0x40b500
                uint64_t v134 = *v28; // 0x40b504
                v114 = v132;
                v115 = v133;
                v116 = v131;
                v12 = v132;
                v10 = v131;
                if (v133 >= v134) {
                    goto lab_0x40b68c;
                } else {
                    goto lab_0x40b50e;
                }
            }
          lab_0x40b69f:;
            int64_t v135 = v18;
            fclose(stream);
            if (v135 != 0) {
                int64_t v136 = v19;
                *(char *)(v136 + v135) = 0;
            }
        }
    }
    goto lab_0x40b4a4;
  lab_0x40b40b:;
    int64_t * mem4 = malloc(size2); // 0x40b40b
    v117 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x40b4b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v118 = v8;
        goto lab_0x40b466;
    } else {
        goto lab_0x40b422;
    }
  lab_0x40b4a4:
    // 0x40b4a4
    free((int64_t *)path);
    v117 = (int64_t)&g9;
    goto lab_0x40b422;
}
// Address range: 0x40b890 - 0x40b8fc
int64_t function_40b890(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40b890
    if (a1 > 0xffffffffffffffef) {
        // 0x40b8ee
        return 0;
    }
    int64_t * mem = malloc((int32_t)a1 + 16); // 0x40b89a
    int64_t result = 0; // 0x40b8a7
    if (mem != NULL) {
        int64_t v1 = (int64_t)mem; // 0x40b89a
        result = v1 + 16;
        *(int32_t *)(v1 + 12) = 0x1415fb4a;
        int64_t v2 = g93; // 0x40b8db
        g93 = result;
        *mem = v2;
    }
    // 0x40b8ee
    return result;
}
// Address range: 0x40b900 - 0x40b986
int64_t function_40b900(int64_t a1) {
    if (a1 == 0 || *(int32_t *)(a1 - 4) != 0x1415fb4a) {
        // 0x40b90e
        int64_t result; // 0x40b900
        return result;
    }
    // 0x40b910
    if (g93 == 0) {
        // 0x40b90e
        return 0;
    }
    int64_t * v1 = &g93; // 0x40b944
    if (g93 == a1) {
      lab_0x40b96c:;
        int64_t * v2 = (int64_t *)(a1 - 16); // 0x40b96c
        *v1 = *v2;
        free(v2);
        return &g100;
    }
    int64_t * v3 = (int64_t *)(g93 - 16);
    int64_t result2 = *v3; // 0x40b958
    while (result2 != 0) {
        // 0x40b950
        v1 = v3;
        if (result2 == a1) {
            goto lab_0x40b96c;
        }
        v3 = (int64_t *)(result2 - 16);
        result2 = *v3;
    }
    // 0x40b90e
    return result2;
}
// Address range: 0x40b990 - 0x40b9b1
int64_t function_40b990(int64_t a1) {
    int32_t wc = a1; // 0x40b993
    int32_t result = wcwidth(wc); // 0x40b993
    if (result < 0) {
        // 0x40b9a0
        return iswcntrl(wc) == 0;
    }
    // 0x40b99c
    return result;
}
// Address range: 0x40b9c0 - 0x40ba16
int64_t function_40b9c0(int64_t a1, int64_t a2) {
    // 0x40b9c0
    *(int64_t *)a1 = a2;
    char v1 = *(char *)(a2 + 16); // 0x40b9df
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(char *)(a1 + 16) = v1;
    int64_t result = 0; // 0x40b9ec
    if (v1 != 0) {
        uint32_t v2 = *(int32_t *)(a2 + 20); // 0x40b9ee
        *(int32_t *)(a1 + 20) = v2;
        result = v2;
    }
    // 0x40b9f4
    return result;
}
// Address range: 0x40ba20 - 0x40ba37
int64_t function_40ba20(uint64_t a1) {
    uint32_t v1 = *(int32_t *)((a1 / 8 & 28) + (int64_t)&g10); // 0x40ba2a
    return (v1 >> (int32_t)a1 % 32) % 2;
}
// Address range: 0x40ba40 - 0x40bc6d
int64_t function_40ba40(int64_t str) {
    // 0x40ba40
    if ((uint32_t)__ctype_get_mb_cur_max() < 2) {
        // 0x40ba5f
        return strlen((char *)str);
    }
    int64_t ps = 0; // bp-84, 0x40ba7b
    char v1 = 0; // 0x40ba89
    int64_t v2 = str; // 0x40ba89
    int64_t v3 = 0; // 0x40ba89
    int32_t v4; // 0x40ba40
    int64_t v5; // 0x40ba40
    int32_t v6; // bp-52, 0x40ba40
    int64_t v7; // 0x40ba40
    int64_t str2; // 0x40ba40
    char v8; // 0x40ba40
    char v9; // 0x40ba40
    while (true) {
      lab_0x40bae1:
        // 0x40bae1
        v5 = v3;
        str2 = v2;
        v9 = v1;
        if (v1 == 0) {
            unsigned char v10 = *(char *)str2; // 0x40ba95
            int32_t v11 = *(int32_t *)((int64_t)(4 * v10 / 32) + (int64_t)&g10); // 0x40baa0
            if ((1 << (int32_t)(v10 % 32) & v11) == 0) {
                int32_t v12 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40bb75
                v9 = 1;
                if (v12 == 0) {
                    // break -> 0x40bbc1
                    break;
                }
                goto lab_0x40bae7;
            } else {
                int32_t v13 = v10; // 0x40bac2
                v6 = v13;
                v4 = v13;
                v8 = 0;
                v7 = 1;
                goto lab_0x40bac6;
            }
        } else {
            goto lab_0x40bae7;
        }
    }
    // 0x40bbc1
    __assert_fail("mbsinit (&iter->state)", "mbuiter.h", 150, "mbuiter_multi_next");
    // 0x40bbda
    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
    // 0x40bbf3
    __assert_fail("iter->cur.wc == 0", "mbuiter.h", 179, "mbuiter_multi_next");
    return function_401ab0();
  lab_0x40bae7:;
    char v14 = v9;
    int64_t v15 = function_409040(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x40baf7
    int64_t v16 = function_40b170(&v6, str2, v15); // 0x40bb0c
    v1 = v14;
    int64_t len = 1; // 0x40ba40
    switch (v16) {
        case -1: {
            goto lab_0x40bace;
        }
        case -2: {
            // 0x40bba8
            v1 = v14;
            len = strlen((char *)str2);
            goto lab_0x40bace;
        }
        default: {
            int64_t v17 = v16; // 0x40bb29
            if (v16 == 0) {
                // 0x40bb2b
                if (*(char *)str2 != 0) {
                    // 0x40bbda
                    __assert_fail("*iter->cur.ptr == '\\0'", "mbuiter.h", 178, "mbuiter_multi_next");
                    // 0x40bbf3
                    __assert_fail("iter->cur.wc == 0", "mbuiter.h", 179, "mbuiter_multi_next");
                    return function_401ab0();
                }
                // 0x40bb42
                v17 = 1;
                if (v6 != 0) {
                    // 0x40bbf3
                    __assert_fail("iter->cur.wc == 0", "mbuiter.h", 179, "mbuiter_multi_next");
                    return function_401ab0();
                }
            }
            int32_t v18 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40bb58
            v4 = v6;
            v8 = v18 == 0 ? v14 : 0;
            v7 = v17;
            goto lab_0x40bac6;
        }
    }
  lab_0x40bace:
    // 0x40bace
    v2 = len + str2;
    v3 = v5 + 1;
    goto lab_0x40bae1;
  lab_0x40bac6:;
    int64_t result = v5; // 0x40bacc
    v1 = v8;
    len = v7;
    if (v4 == 0) {
        // 0x40ba5f
        return result;
    }
    goto lab_0x40bace;
}
// Address range: 0x40bc70 - 0x40bc71
int64_t function_40bc70(void) {
    // 0x40bc70
    int64_t result; // 0x40bc70
    return result;
}
// Address range: 0x40bc80 - 0x40bc98
int64_t function_40bc80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bc80
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x40bc98 - 0x40bcb8
int64_t function_40bc98(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x40bca2
    while (*(int64_t *)v1 != -1) {
        // 0x40bca3
        v1 -= 8;
    }
    // 0x40bcb4
    return result;
}
