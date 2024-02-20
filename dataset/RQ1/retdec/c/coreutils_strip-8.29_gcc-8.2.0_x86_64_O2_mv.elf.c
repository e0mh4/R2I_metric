// Address range: 0x402d80 - 0x402d85
int64_t function_402d80(void) {
    // 0x402d80
    abort();
    // UNREACHABLE
}
// Address range: 0x402d85 - 0x402d8a
int64_t function_402d85(void) {
    // 0x402d85
    abort();
    // UNREACHABLE
}
// Address range: 0x402d8a - 0x402d8f
int64_t function_402d8a(void) {
    // 0x402d8a
    abort();
    // UNREACHABLE
}
// Address range: 0x402d8f - 0x402d94
int64_t function_402d8f(void) {
    // 0x402d8f
    abort();
    // UNREACHABLE
}
// Address range: 0x402d94 - 0x402d99
int64_t function_402d94(void) {
    // 0x402d94
    abort();
    // UNREACHABLE
}
// Address range: 0x402d99 - 0x402d9e
int64_t function_402d99(void) {
    // 0x402d99
    abort();
    // UNREACHABLE
}
// Address range: 0x402d9e - 0x402da3
int64_t function_402d9e(void) {
    // 0x402d9e
    abort();
    // UNREACHABLE
}
// Address range: 0x402da3 - 0x402da8
int64_t function_402da3(void) {
    // 0x402da3
    abort();
    // UNREACHABLE
}
// Address range: 0x402da8 - 0x402dad
int64_t function_402da8(void) {
    // 0x402da8
    abort();
    // UNREACHABLE
}
// Address range: 0x402dad - 0x402db2
int64_t function_402dad(void) {
    // 0x402dad
    abort();
    // UNREACHABLE
}
// Address range: 0x402db2 - 0x402db7
int64_t function_402db2(void) {
    // 0x402db2
    abort();
    // UNREACHABLE
}
// Address range: 0x402db7 - 0x402dbc
int64_t function_402db7(void) {
    // 0x402db7
    abort();
    // UNREACHABLE
}
// Address range: 0x402dbc - 0x402dc1
int64_t function_402dbc(void) {
    // 0x402dbc
    return abort();
}
// Address range: 0x402dc1 - 0x402dc6
int64_t function_402dc1(void) {
    // 0x402dc1
    abort();
    // UNREACHABLE
}
// Address range: 0x402dc6 - 0x402dcb
int64_t function_402dc6(void) {
    // 0x402dc6
    abort();
    // UNREACHABLE
}
// Address range: 0x402dd0 - 0x403430
int64_t function_402dd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402dd0
    function_40c350(a2);
    setlocale(LC_ALL, (char *)&g18);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_415170(0x40a6c0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v1; // bp-280, 0x402dd0
    function_4053c0(&v1);
    isatty(0);
    int64_t v2 = 0; // 0x402eb7
    int32_t v3 = 4; // 0x402eb7
    int64_t v4 = 0; // 0x402eb7
    int64_t v5 = 0; // 0x402eb7
    int64_t v6 = 0; // 0x402eb7
    int64_t v7 = 0; // 0x402eb7
    int64_t v8; // 0x402dd0
    int64_t v9; // 0x402dd0
    int64_t v10; // 0x402dd0
    int64_t v11; // 0x402dd0
    int64_t v12; // 0x402dd0
    int64_t v13; // 0x402dd0
    int32_t err_num; // 0x402dd0
    int64_t v14; // 0x402dd0
    int64_t v15; // 0x402dd0
    int64_t v16; // bp-200, 0x402dd0
    int32_t v17; // 0x402dd0
    int32_t v18; // 0x402dd0
    while (true) {
      lab_0x402ec0_2:
        // 0x402ec0
        v13 = v7;
        v12 = v6;
        int64_t v19 = v5;
        v9 = v4;
        v17 = v3;
        v8 = v2;
        int64_t v20; // 0x402dd0
        int32_t v21 = function_413690(a1 & 0xffffffff, a2, "bfint:uvS:TZ", &g2, 0, v20);
        v2 = v8;
        v3 = 1;
        v4 = v9;
        v5 = v19;
        v6 = v12;
        v7 = v13;
        v14 = a2;
        v15 = a2;
        v11 = v19;
        switch (v21) {
            case -1: {
                goto lab_0x4030a7;
            }
            case 102: {
                goto lab_0x402ec0_2;
            }
            default: {
                if (v21 > 102) {
                    if (v21 == 116) {
                        if (v19 != 0) {
                            // 0x4033c6
                            error(1, (int32_t)"multiple target directories specified" ^ (int32_t)"multiple target directories specified", dcgettext(NULL, "multiple target directories specified", 5));
                            err_num = 0;
                            v10 = v9;
                            goto lab_0x4033e8;
                        }
                        int32_t v22 = __xstat(1, g73, (struct stat *)&v16); // 0x40304a
                        int64_t v23 = (int64_t)g73;
                        if (v22 != 0) {
                            // 0x40331d
                            function_40dd80(4, v23);
                            error(1, *__errno_location(), dcgettext(NULL, "failed to access %s", 5));
                            goto lab_0x403368;
                        }
                        // 0x403057
                        v2 = v8;
                        v3 = v17;
                        v4 = v9;
                        v5 = v23;
                        v6 = v12;
                        v7 = v13;
                        if ((v18 & 0xf000) != 0x4000) {
                            int64_t v24 = function_40dd80(4, v23); // 0x40307a
                            error(1, (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory", dcgettext(NULL, "target %s is not a directory", 5));
                            v14 = v24;
                            v15 = (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory";
                            v11 = v23;
                            goto lab_0x4030a7;
                        }
                    } else {
                        if (v21 > 116) {
                            // 0x402ef6
                            v2 = v8;
                            v3 = v17;
                            v4 = v9;
                            v5 = v19;
                            v6 = v12;
                            v7 = v13;
                            if (v21 >= 119) {
                                if (v21 != 128) {
                                    // 0x402f75
                                    function_4036b0(1);
                                    // UNREACHABLE
                                }
                                // 0x402f47
                                g46 = 1;
                                v2 = v8;
                                v3 = v17;
                                v4 = v9;
                                v5 = v19;
                                v6 = v12;
                                v7 = v13;
                            }
                        } else {
                            // 0x402f58
                            v2 = v8;
                            v3 = 3;
                            v4 = v9;
                            v5 = v19;
                            v6 = v12;
                            v7 = v13;
                            if (v21 != 105) {
                                // 0x402fc0
                                v2 = v8;
                                v3 = 2;
                                v4 = v9;
                                v5 = v19;
                                v6 = v12;
                                v7 = v13;
                                if (v21 != 110) {
                                    // 0x402f75
                                    function_4036b0(1);
                                    // UNREACHABLE
                                }
                            }
                        }
                    }
                } else {
                    if (v21 == 83) {
                        // 0x403000
                        v2 = (int64_t)g73;
                        v3 = v17;
                        v4 = v9;
                        v5 = v19;
                        v6 = 1;
                        v7 = v13;
                    } else {
                        if (v21 <= 83) {
                            if (v21 == -131) {
                                // 0x402f87
                                function_40ff60((int64_t)g39, "mv", "GNU coreutils", (int64_t)g27, "Mike Parker", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v21 == -130) {
                                // 0x402fd9
                                function_4036b0(0);
                                // UNREACHABLE
                            }
                            goto lab_0x402f75;
                        }
                        // 0x402f1b
                        v2 = v8;
                        v3 = v17;
                        v4 = v9;
                        v5 = v19;
                        v6 = v12;
                        v7 = v13;
                        if (v21 != 90) {
                            if (v21 != 98) {
                                // 0x402f70
                                v2 = v8;
                                v3 = v17;
                                v4 = 1;
                                v5 = v19;
                                v6 = v12;
                                v7 = v13;
                                if (v21 != 84) {
                                  lab_0x402f75:
                                    // 0x402f75
                                    function_4036b0(1);
                                    // UNREACHABLE
                                }
                            } else {
                                char * v25 = g73; // 0x402f25
                                v2 = v8;
                                v3 = v17;
                                v4 = v9;
                                v5 = v19;
                                v6 = 1;
                                v7 = v25 != NULL ? (int64_t)v25 : v13;
                            }
                        }
                    }
                }
                goto lab_0x402ec0_2;
            }
        }
    }
  lab_0x4030a7:;
    int32_t v26 = (int32_t)a1 - g36; // 0x4030ae
    int64_t v27 = v26; // 0x4030ae
    int64_t v28 = 8 * (int64_t)g36 + v14; // 0x4030b0
    int64_t v29; // 0x402dd0
    int64_t v30; // 0x402dd0
    int64_t v31; // 0x402dd0
    int64_t v32; // 0x402dd0
    int64_t v33; // 0x402dd0
    int64_t v34; // 0x402dd0
    int64_t v35; // 0x402dd0
    int64_t v36; // 0x402dd0
    int64_t v37; // 0x402dd0
    int64_t v38; // 0x402dd0
    int64_t v39; // 0x402dd0
    int64_t * v40; // 0x403216
    if ((int64_t)(v11 == 0) < v27) {
        // 0x4030c4
        char * format; // 0x4032cb
        if (v9 == 0) {
            if (v11 == 0) {
                if (v26 == 1) {
                    // 0x4032a6
                    __assert_fail("2 <= n_files", "src/mv.c", 454, "main");
                    // 0x4032bf
                    format = dcgettext(NULL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
                    error(1, (int32_t)"cannot combine --target-directory (-t) and --no-target-directory (-T)" ^ (int32_t)"cannot combine --target-directory (-t) and --no-target-directory (-T)", format);
                    goto lab_0x4032e1;
                } else {
                    // 0x403204
                    v39 = 0x100000000 * v27;
                    v40 = (int64_t *)(v28 - 8 + (v39 >> 29));
                    int64_t v41 = *v40; // 0x403216
                    int32_t v42 = __xstat(1, (char *)v41, (struct stat *)&v16); // 0x40321d
                    v36 = v28;
                    v38 = v41;
                    if (v42 == 0) {
                        goto lab_0x40327c;
                    } else {
                        int32_t v43 = *__errno_location(); // 0x40322b
                        v36 = v28;
                        v38 = v41;
                        if (v43 == 0) {
                            goto lab_0x40327c;
                        } else {
                            // 0x403233
                            v35 = v28;
                            err_num = v43;
                            v10 = v41;
                            if (v43 != 2) {
                                goto lab_0x4033e8;
                            } else {
                                goto lab_0x40323d;
                            }
                        }
                    }
                }
            } else {
                // 0x40316c
                v33 = v28;
                v29 = v11;
                if (v12 != 0) {
                    goto lab_0x4030eb;
                } else {
                    // 0x403175
                    v1 = 0;
                    function_40a040(v8);
                    function_409750(v8, v15);
                    v34 = v28;
                    v31 = v27;
                    v37 = v15;
                    v30 = v11;
                    goto lab_0x40312e;
                }
            }
        } else {
            if (v11 != 0) {
                // 0x4032bf
                format = dcgettext(NULL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5);
                error(1, (int32_t)"cannot combine --target-directory (-t) and --no-target-directory (-T)" ^ (int32_t)"cannot combine --target-directory (-t) and --no-target-directory (-T)", format);
                goto lab_0x4032e1;
            } else {
                // 0x4030d6
                v32 = v28;
                if (v26 > 2) {
                    // 0x403382
                    function_40dd80(4, *(int64_t *)(v28 + 16));
                    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
                    function_4036b0(1);
                    // UNREACHABLE
                }
                goto lab_0x4030df;
            }
        }
    } else {
        goto lab_0x4032e1;
    }
    // 0x402ec0
    goto lab_0x402ec0_2;
  lab_0x4032e1:
    // 0x4032e1
    if (v26 == 1) {
        // 0x4032e6
        function_40dd80(4, *(int64_t *)v28);
        error(0, (int32_t)"missing destination file operand after %s" ^ (int32_t)"missing destination file operand after %s", dcgettext(NULL, "missing destination file operand after %s", 5));
        // 0x402f75
        function_4036b0(1);
        // UNREACHABLE
    }
  lab_0x403368:
    // 0x403368
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing file operand", 5));
    // 0x402f75
    function_4036b0(1);
    // UNREACHABLE
  lab_0x4030eb:
    // 0x4030eb
    if (v17 == 2) {
        // 0x403368
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"options --backup and --no-clobber are mutually exclusive", 5));
        // 0x402f75
        function_4036b0(1);
        // UNREACHABLE
    }
    char * v44 = dcgettext(NULL, "backup type", 5); // 0x403102
    int64_t v45 = 0x100000000 * function_40a5f0((int64_t)v44, v13) >> 32; // 0x40310d
    int64_t v46 = v33; // 0x40310d
    int64_t v47 = v27; // 0x40310d
    int64_t v48 = v13; // 0x40310d
    int64_t v49 = v29; // 0x40310d
    goto lab_0x403112;
  lab_0x4030df:
    // 0x4030df
    v33 = v32;
    v29 = 0;
    if (v12 == 0) {
        // 0x4031ca
        int64_t v58; // 0x402dd0
        int64_t v59 = v58;
        v1 = 0;
        function_40a040(v8);
        function_409750(v8, v59);
        goto lab_0x4031e1;
    } else {
        goto lab_0x4030eb;
    }
  lab_0x40327c:;
    int64_t v60 = v38;
    int64_t v61 = v36;
    v35 = v61;
    if ((v18 & 0xf000) != 0x4000) {
        goto lab_0x40323d;
    } else {
        // 0x40328c
        v45 = 0;
        v46 = v61;
        v47 = v26 - 1;
        v48 = v60;
        v49 = *(int64_t *)(v61 + (v39 - 0x100000000 >> 29));
        if (v12 != 0) {
            goto lab_0x4030eb;
        } else {
            goto lab_0x403112;
        }
    }
  lab_0x403112:
    // 0x403112
    v1 = v45;
    function_40a040(v8);
    function_409750(v8, v48);
    v34 = v46;
    v31 = v47;
    v37 = v48;
    v30 = v49;
    if (v49 == 0) {
        goto lab_0x4031e1;
    } else {
        goto lab_0x40312e;
    }
  lab_0x40312e:
    // 0x40312e
    if ((int32_t)v31 == 1) {
        int64_t v50 = function_403620(*(int64_t *)v34, v30, 1, &v1); // 0x403143
        // 0x40314a
        return (v50 & 0xffffffff) % 256 ^ 1;
    }
    // 0x40318e
    function_405360(&v1, v37);
    int64_t v51 = v34 + 8; // 0x4031b8
    int64_t v52 = function_403620(*(int64_t *)v34, v30, 1, &v1) & 1;
    int64_t v53 = v51; // 0x4031c6
    int64_t v54 = v52; // 0x4031c6
    while (v51 != v34 + 8 + (8 * v31 + 0x7fffffff8 & 0x7fffffff8)) {
        // 0x4031a8
        v51 = v53 + 8;
        v52 = function_403620(*(int64_t *)v53, v30, 1, &v1) & v54;
        v53 = v51;
        v54 = v52;
    }
    // 0x40314a
    return v52 % 256 ^ 1;
  lab_0x40323d:
    // 0x40323d
    v32 = v35;
    if (v26 == 2) {
        goto lab_0x4030df;
    } else {
        int64_t v55 = function_40dd80(4, *v40); // 0x40324f
        error(1, (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory", dcgettext(NULL, "target %s is not a directory", 5));
        v36 = v55;
        v38 = (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory";
        goto lab_0x40327c;
    }
  lab_0x4031e1:;
    int64_t v56 = *(int64_t *)v46; // 0x4031e5
    int64_t v57 = function_403620(v56, *(int64_t *)(v46 + 8), 0, &v1); // 0x4031ef
    // 0x40314a
    return (v57 & 0xffffffff) % 256 ^ 1;
  lab_0x4033e8:
    // 0x4033e8
    function_40dd80(4, v10);
    error(1, err_num, dcgettext(NULL, "failed to access %s", 5));
    return &g76;
}
// Address range: 0x403430 - 0x40345b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403430
    int64_t v1; // 0x403430
    __libc_start_main(0x402dd0, (int32_t)a4, (char **)&v1, (void (*)())0x415100, (void (*)())0x415160, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40345b - 0x40347a
int64_t function_40345b(void) {
    // 0x40345b
    return 0x61d488;
}
// Address range: 0x40347a - 0x4034b1
int64_t function_40347a(void) {
    // 0x40347a
    return 0;
}
// Address range: 0x4034b1 - 0x403508
int64_t function_4034b1(void) {
    // 0x4034b1
    if (g43 != 0) {
        // 0x403507
        int64_t result; // 0x4034b1
        return result;
    }
    int64_t v1 = g44; // 0x4034e4
    int64_t result2; // 0x4034f6
    if (g44 >= ((int64_t)&g22 - (int64_t)&g21 >> 3) - 1) {
        // 0x4034f6
        result2 = function_40345b();
        g43 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g22 - (int64_t)&g21 >> 3) - 1) {
        // 0x4034e6
        v1++;
    }
    // 0x4034da
    g44 = v1;
    // 0x4034f6
    result2 = function_40345b();
    g43 = 1;
    return result2;
}
// Address range: 0x403508 - 0x40350d
int64_t function_403508(void) {
    // 0x403508
    return function_40347a();
}
// Address range: 0x403510 - 0x403620
int64_t function_403510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403510
    char v1; // bp-73, 0x403510
    char v2; // bp-74, 0x403510
    int64_t result = function_4094d0(a1, a2, 0, a3, (int64_t *)&v2, (int64_t *)&v1); // 0x40352b
    if ((char)result == 0) {
        // 0x40353d
        return result;
    }
    // 0x403534
    if (v2 != 0) {
        // 0x40353d
        return 0;
    }
    // 0x403548
    if (a1 == 0 || v1 == 1) {
        // 0x40353d
        return result;
    }
    char v3 = 0; // bp-56, 0x403560
    if (function_40e240(&g45) == 0) {
        // 0x4035c8
        function_40dd80(4, (int64_t)"/");
        error(1, *__errno_location(), dcgettext(NULL, "failed to get attributes of %s", 5));
        // 0x403607
        __assert_fail("VALID_STATUS (status)", "src/mv.c", 236, "do_move");
        return &g76;
    }
    int64_t v4 = a1; // bp-72, 0x40359e
    int64_t v5 = function_4041b0(&v4, &v3, 0); // 0x4035b0
    int32_t v6 = v5;
    if (v6 < 5) {
        // 0x40353d
        return v5 & -256 | (int64_t)(v6 != 4);
    }
    // 0x403607
    __assert_fail("VALID_STATUS (status)", "src/mv.c", 236, "do_move");
    return &g76;
}
// Address range: 0x403620 - 0x4036af
int64_t function_403620(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x403620
    if (g46 != 0) {
        // 0x4036a8
        function_40aa90(a1);
    }
    int64_t v1 = (int64_t)a4;
    if ((char)a3 == 0) {
        // 0x403644
        return function_403510(a1, a2, v1);
    }
    // 0x403660
    function_40aa00(a1, a2);
    int64_t v2 = function_40aeb0(); // 0x403670
    function_40aa90(v2);
    int64_t v3 = function_403510(a1, v2, v1); // 0x403689
    free((int64_t *)v2);
    return v3 & 0xffffffff;
}
// Address range: 0x4036b0 - 0x403a75
int64_t function_4036b0(int64_t a1) {
    int32_t status = a1; // 0x4036c6
    if (status != 0) {
        // 0x4036ca
        __fprintf_chk(g42, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4036ef
        exit(status);
        // UNREACHABLE
    }
    // 0x4036f6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Rename SOURCE to DEST, or move SOURCE(s) to DIRECTORY.\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n  -f, --force                  do not prompt before overwriting\n  -i, --interactive            prompt before overwrite\n  -n, --no-clobber             do not overwrite an existing file\nIf you specify more than one of -i, -f, -n, only the final one takes effect.\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n  -S, --suffix=SUFFIX          override the usual backup suffix\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "  -t, --target-directory=DIRECTORY  move all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n  -u, --update                 move only when the SOURCE file is newer\n                                 than the destination file or when the\n                                 destination file is missing\n  -v, --verbose                explain what is being done\n  -Z, --context                set SELinux security context of destination\n                                 file to default type\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "\nThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n", 5), g39);
    int64_t v1 = &g1; // bp-136, 0x403855
    bool v2; // 0x4036b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4038d8
    int64_t v6 = *(int64_t *)v5; // 0x4038dc
    int64_t v7 = 3; // 0x4038e2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"mv";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4038ee
        char v11 = *(char *)v9; // 0x4038ee
        char v12 = v11; // 0x4038ee
        bool v13 = false; // 0x4038ee
        while (v10 == v11) {
            // 0x4038e4
            v7--;
            int64_t v14 = v9 + v3; // 0x4038ee
            int64_t v15 = v8 + v3; // 0x4038ee
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
            // break -> 0x4038fa
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x4038fa
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403a0c;
        } else {
            // 0x4039f6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403a4b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40395c;
            } else {
                goto lab_0x403a0c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40395c;
        } else {
            // 0x403942
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403a4b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40395c;
            } else {
                goto lab_0x40395c;
            }
        }
    }
  lab_0x403a0c:
    // 0x403a0c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40399c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4036ef
    exit(status);
    // UNREACHABLE
  lab_0x40395c:
    // 0x40395c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40399c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4036ef
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403a80 - 0x403c89
int64_t function_403a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * path = (int64_t *)(a2 + 48); // 0x403a9d
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x403aa1
    int32_t fd = *v1; // 0x403aa1
    if (unlinkat(fd, (char *)*path, 512 * (int32_t)((char)a4 != 0)) == 0) {
        // 0x403bc0
        if (*(char *)(a3 + 25) == 0) {
            // 0x403b5f
            return 2;
        }
        // 0x403bcd
        function_40dd80(4, *(int64_t *)(a2 + 56));
        char * v2; // 0x403a80
        if ((char)a4 == 0) {
            // 0x403c58
            v2 = dcgettext(NULL, "removed %s\n", 5);
        } else {
            // 0x403be8
            v2 = dcgettext(NULL, "removed directory %s\n", 5);
        }
        // 0x403bf7
        __printf_chk(1, v2);
        return 2;
    }
    int32_t * err_num = __errno_location(); // 0x403ab7
    uint32_t v3 = *err_num; // 0x403abc
    if (v3 == 30) {
        // 0x403c20
        int64_t v4; // bp-184, 0x403a80
        if (__fxstatat(1, *v1, (char *)*path, (struct stat *)&v4, 256) != 0) {
            // 0x403c3e
            if (*err_num == 2) {
                // 0x403b5f
                return 2;
            }
        }
        // 0x403c47
        *err_num = 30;
        goto lab_0x403afa;
    } else {
        if ((char)v3 == 0) {
            goto lab_0x403aef;
        } else {
            // 0x403ad1
            if (v3 == 20) {
                // 0x403b5f
                return 2;
            }
            if (v3 > 20) {
                // 0x403ae5
                switch (v3) {
                    case 22: {
                    }
                    case 84: {
                        // 0x403b5f
                        return 2;
                    }
                }
                goto lab_0x403aef;
            } else {
                // 0x403b70
                if (v3 == 2) {
                    // 0x403b5f
                    return 2;
                }
                // 0x403b75
                if (v3 < 40 == *(int16_t *)(a2 + 112) == 4) {
                    goto lab_0x403b89;
                } else {
                    goto lab_0x403afa;
                }
            }
        }
    }
  lab_0x403afa:
    // 0x403afa
    function_40dd80(4, *(int64_t *)(a2 + 56));
    error(0, *err_num, dcgettext(NULL, "cannot remove %s", 5));
    int64_t v5 = *(int64_t *)(a2 + 8); // 0x403b2f
    if (*(int64_t *)(v5 + 88) < 0) {
        // 0x403b5f
        return 4;
    }
    int64_t v6 = v5; // 0x403b38
    int64_t * v7 = (int64_t *)(v6 + 32); // 0x403b53
    while (*v7 == 0) {
        // 0x403b40
        *v7 = 1;
        int64_t v8 = *(int64_t *)(v6 + 8); // 0x403b48
        v6 = v8;
        if (*(int64_t *)(v8 + 88) < 0) {
            // break -> 0x403b5f
            break;
        }
        v7 = (int64_t *)(v6 + 32);
    }
    // 0x403b5f
    return 4;
  lab_0x403aef:
    // 0x403aef
    if (v3 < 40 == *(int16_t *)(a2 + 112) == 4) {
        goto lab_0x403b89;
    } else {
        goto lab_0x403afa;
    }
  lab_0x403b89:
    if ((1 << (int64_t)(v3 % 64) & 0x8000320000) != 0) {
        int32_t v9 = *(int32_t *)(a2 + 64); // 0x403b9d
        if (v9 != 1 != v9 != 13) {
            // 0x403bae
            *err_num = v9;
        }
    }
    goto lab_0x403afa;
}
// Address range: 0x403c90 - 0x403d00
int64_t function_403c90(int32_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 48); // 0x403c91
    int64_t v3 = *v2; // 0x403c91
    int64_t v4 = v3; // 0x403c9c
    if (v3 == -1) {
        // 0x403cb0
        if (__fxstatat(1, a1, (char *)a2, (struct stat *)a3, 256) != 0) {
            // 0x403ccc
            *v2 = -2;
            int32_t * v5 = __errno_location(); // 0x403cd4
            int32_t v6 = *v5; // 0x403cd9
            *(int64_t *)(v1 + 8) = (int64_t)v6;
            // 0x403ce3
            *v5 = v6;
            return 0xffffffff;
        }
        // 0x403cf0
        v4 = *v2;
    }
    // 0x403c9e
    if (v4 >= 0) {
        // 0x403ca3
        return 0;
    }
    // 0x403ce3
    *__errno_location() = *(int32_t *)(v1 + 8);
    return 0xffffffff;
}
// Address range: 0x403d00 - 0x4041a2
int64_t function_403d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403d00
    int64_t v1; // 0x403d00
    int64_t v2 = v1;
    int32_t fd = *(int32_t *)(a1 + 44); // 0x403d17
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x403d1a
    int64_t path = *(int64_t *)(a2 + 48); // 0x403d23
    struct dirent * v4; // 0x403d00
    int64_t v5; // 0x403d00
    int64_t v6; // 0x403d00
    struct __dirstream * dirp; // 0x403d6f
    if (a6 == 0) {
        // 0x403f90
        v6 = v2 + (int64_t)((char)a3 == 0) + (v2 ^ 7) & 4;
        v5 = (char)a3 != 0 ? 0 : a3 & 0xffffffff;
    } else {
        int32_t * v7 = (int32_t *)(int64_t)a6; // 0x403d39
        *v7 = 2;
        uint32_t fd2 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY | O_NOFOLLOW); // 0x403d60
        int32_t v8 = 3; // 0x403d67
        int64_t v9 = 0; // 0x403d67
        if (fd2 >= 0) {
            // 0x403d69
            dirp = fdopendir(fd2);
            if (dirp == NULL) {
                // 0x404100
                close(fd2);
                v8 = 3;
                v9 = 0;
            } else {
                int32_t * v10 = __errno_location(); // 0x403d84
                *v10 = 0;
                struct dirent * v11 = readdir(dirp); // 0x403d97
                v4 = v11;
                if (v11 == NULL) {
                  lab_0x404058:;
                    int32_t v12 = *(int32_t *)(0x100000000 * (int64_t)v10 >> 32); // 0x404060
                    closedir(dirp);
                    v8 = v12 != 0 ? 3 : 4;
                    v9 = v12 == 0;
                } else {
                    while (true) {
                      lab_0x403da5:;
                        int64_t v13 = (int64_t)v4;
                        if (*(char *)(v13 + 19) != 46) {
                            // break -> 0x403daf
                            break;
                        }
                        int64_t v14 = v13 + 20; // 0x404032
                        char v15 = *(char *)(v14 + (int64_t)(*(char *)v14 == 46)); // 0x404039
                        switch (v15) {
                            case 0: {
                                goto lab_0x403d94;
                            }
                            case 47: {
                                goto lab_0x403d94;
                            }
                            default: {
                                goto lab_0x403daf;
                            }
                        }
                    }
                  lab_0x403daf:
                    // 0x403daf
                    closedir(dirp);
                    v8 = 3;
                    v9 = 0;
                }
            }
        }
        // 0x403dbf
        *v7 = v8;
        v6 = 4 * (int64_t)((char)a3 != 0);
        v5 = v9;
    }
    // 0x403dc3
    if (*(int64_t *)(a2 + 32) != 0) {
        // 0x403ee5
        return 3;
    }
    int32_t * v16 = (int32_t *)(a4 + 4); // 0x403dce
    int32_t v17 = *v16; // 0x403dce
    if (v17 == 5) {
        // 0x403ee5
        return 2;
    }
    int32_t v18 = v17; // 0x403dde
    int32_t v19; // 0x403d00
    int64_t v20; // 0x403d00
    int64_t v21; // bp-200, 0x403d00
    int32_t v22; // 0x403d00
    if (*(char *)&v20 != 0) {
        goto lab_0x403f13;
    } else {
        if (v17 != 3) {
            // 0x403de9
            if (*(char *)(a4 + 24) == 0) {
                // 0x403ee5
                return 2;
            }
        }
        // 0x403df3
        if ((char)function_4100a0() != 0) {
            // 0x403f10
            v18 = *v16;
            goto lab_0x403f13;
        } else {
            // 0x403e00
            if ((int32_t)function_403c90(fd, path, &v21) != 0) {
                goto lab_0x4040e0;
            } else {
                int32_t v23; // 0x403d00
                if ((v23 & 0xf000) == 0xa000) {
                    // 0x403f10
                    v18 = *v16;
                    goto lab_0x403f13;
                } else {
                    // 0x403e30
                    if (faccessat(fd, (char *)path, W_OK, AT_REMOVEDIR) == 0) {
                        // 0x403f10
                        v18 = *v16;
                        goto lab_0x403f13;
                    } else {
                        int32_t v24 = *__errno_location(); // 0x403e53
                        v22 = 1;
                        v19 = v24;
                        if (v24 != 13) {
                            goto lab_0x4040e8;
                        } else {
                            goto lab_0x403f1b;
                        }
                    }
                }
            }
        }
    }
  lab_0x403d94:;
    struct dirent * v25 = readdir(dirp); // 0x403d97
    v4 = v25;
    if (v25 == NULL) {
        goto lab_0x404058;
    }
    goto lab_0x403da5;
  lab_0x403f13:
    // 0x403f13
    v22 = 0;
    if (v18 != 3) {
        // 0x403ee5
        return 2;
    }
    goto lab_0x403f1b;
  lab_0x403f1b:;
    int32_t v26 = v6; // 0x403f1b
    if (v26 == 0) {
        // 0x404090
        if ((int32_t)function_403c90(fd, path, &v21) != 0) {
            goto lab_0x4040e0;
        } else {
            int32_t v27; // 0x403d00
            switch ((int16_t)v27 & -0x1000) {
                case -0x6000: {
                    // 0x404148
                    if (*v16 != 3) {
                        // 0x403ee5
                        return 2;
                    }
                    // 0x4040c7
                    function_40dd80(4, v3);
                    goto lab_0x403e75;
                }
                case 0x4000: {
                    goto lab_0x403f2c;
                }
                default: {
                    // 0x4040c7
                    function_40dd80(4, v3);
                    goto lab_0x403e75;
                }
            }
        }
    } else {
        if (v26 != 4) {
            // 0x4040c7
            function_40dd80(4, v3);
            goto lab_0x403e75;
        } else {
            goto lab_0x403f2c;
        }
    }
  lab_0x4040e0:
    // 0x4040e0
    v19 = *__errno_location();
    goto lab_0x4040e8;
  lab_0x403f2c:;
    // 0x403f2c
    int32_t err_num; // 0x403d00
    if (*(char *)(a4 + 9) != 0) {
        // 0x403fc0
        function_40dd80(4, v3);
        if ((int32_t)a5 != 2) {
            goto lab_0x403e75;
        } else {
            if ((char)v5 != 0) {
                goto lab_0x403e75;
            } else {
                char * v29; // 0x403d00
                if (v22 != 0) {
                    // 0x404130
                    v29 = dcgettext(NULL, "%s: descend into write-protected directory %s? ", 5);
                } else {
                    // 0x403ffb
                    v29 = dcgettext(NULL, "%s: descend into directory %s? ", 5);
                }
                // 0x40400a
                __fprintf_chk(g42, 1, v29);
                goto lab_0x403ed7;
            }
        }
    } else {
        // 0x403f36
        if (*(char *)(a4 + 10) == 0) {
            // 0x403f45
            function_40dd80(4, v3);
            err_num = 21;
            goto lab_0x403f5d;
        } else {
            if ((char)v5 != 0) {
                // 0x4040c7
                function_40dd80(4, v3);
                goto lab_0x403e75;
            } else {
                // 0x403f45
                function_40dd80(4, v3);
                err_num = 21;
                goto lab_0x403f5d;
            }
        }
    }
  lab_0x4040e8:
    // 0x4040e8
    function_40dd80(4, v3);
    err_num = v19;
    goto lab_0x403f5d;
  lab_0x403e75:
    // 0x403e75
    if ((int32_t)function_403c90(fd, path, &v21) != 0) {
        // 0x404160
        error(0, *__errno_location(), dcgettext(NULL, "cannot remove %s", 5));
        // 0x403ee5
        return 4;
    }
    // 0x403e8c
    function_40ac30(&v21);
    char * v28; // 0x403d00
    if (v22 != 0) {
        // 0x404118
        v28 = dcgettext(NULL, "%s: remove write-protected %s %s? ", 5);
    } else {
        // 0x403eac
        v28 = dcgettext(NULL, "%s: remove %s %s? ", 5);
    }
    // 0x403eb8
    __fprintf_chk(g42, 1, v28);
    goto lab_0x403ed7;
  lab_0x403f5d:
    // 0x403f5d
    error(0, err_num, dcgettext(NULL, "cannot remove %s", 5));
    // 0x403ee5
    return 4;
  lab_0x403ed7:
    // 0x403ed7
    if ((char)function_4103f0() == 0) {
        // 0x403ee5
        return 3;
    }
    // 0x403ee5
    return 2;
}
// Address range: 0x4041b0 - 0x404886
int64_t function_4041b0(int64_t * a1, char * a2, int64_t a3) {
    // 0x4041b0
    if (a1 == NULL) {
        // 0x4042aa
        return 2;
    }
    int64_t v1 = (int64_t)a2;
    char * v2 = (char *)(v1 + 8); // 0x4041c8
    int64_t v3 = *v2 == 0 ? 536 : 600; // 0x4041dc
    int64_t v4 = function_410370((int64_t)a1, (int32_t)v3); // 0x4041e2
    int64_t v5 = fts_read(v4); // 0x4041f3
    g74 = v5;
    int64_t v6 = 2; // 0x4041fe
    if (v5 == 0) {
      lab_0x404288_2:;
        int32_t * err_num = __errno_location(); // 0x404288
        if (*err_num != 0) {
            // 0x4046e0
            error(0, *err_num, dcgettext(NULL, "fts_read failed", 5));
            if ((int32_t)fts_close(v4) == 0) {
                // 0x4042aa
                return 4;
            }
        } else {
            // 0x40429a
            if ((int32_t)fts_close(v4) == 0) {
                // 0x4042aa
                return v6 & 0xffffffff;
            }
        }
        // 0x404715
        error(0, *err_num, dcgettext(NULL, "fts_close failed", 5));
        // 0x4042aa
        return 4;
    }
    char * v7 = (char *)(v1 + 10);
    bool v8; // 0x4041b0
    int64_t v9 = v8 ? -1 : 1;
    int32_t v10; // bp-60, 0x4041b0
    int32_t v11 = &v10;
    int64_t v12 = v5; // 0x4041f3
    int64_t v13 = 2;
    int64_t v14 = v3; // 0x4041b0
    struct dirent * v15; // 0x4041b0
    int64_t v16; // 0x4041b0
    int64_t v17; // 0x4041b0
    int64_t v18; // 0x4041b0
    int64_t v19; // 0x4041b0
    int64_t v20; // 0x4041b0
    int64_t v21; // 0x4041b0
    int64_t v22; // 0x4041b0
    int64_t v23; // 0x4041b0
    int32_t err_num3; // 0x4041b0
    int32_t err_num2; // 0x4041b0
    char * format; // 0x4041b0
    int16_t v24; // 0x404204
    int64_t path; // 0x40439e
    struct __dirstream * dirp; // 0x4043ba
    int32_t * v25; // 0x4043cb
    while (true) {
      lab_0x404204_2:
        // 0x404204
        v16 = v12;
        v20 = v12;
        v22 = v14;
        v18 = v13;
        while (true) {
          lab_0x404204:
            // 0x404204
            v19 = v18;
            v21 = v20;
            switch (v16) {
                case 1: {
                    // 0x404388
                    v23 = v22;
                    if (*(char *)(v1 + 9) != 0) {
                        goto lab_0x404420;
                    } else {
                        // 0x404393
                        if (*v7 == 0) {
                            // 0x404530
                            err_num3 = 21;
                            goto lab_0x404536;
                        } else {
                            // 0x40439e
                            path = *(int64_t *)(v21 + 48);
                            int32_t fd = openat(*(int32_t *)(v4 + 44), (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY | O_NOFOLLOW); // 0x4043ac
                            if (fd < 0) {
                                goto lab_0x4043f8;
                            } else {
                                // 0x4043b8
                                dirp = fdopendir(fd);
                                if (dirp == NULL) {
                                    // 0x4047bb
                                    close(fd);
                                    goto lab_0x4043f8;
                                } else {
                                    // 0x4043cb
                                    v25 = __errno_location();
                                    *v25 = 0;
                                    struct dirent * v26 = readdir(dirp); // 0x4043dc
                                    v15 = v26;
                                    if (v26 == NULL) {
                                        goto lab_0x40440e;
                                    } else {
                                        while (true) {
                                          lab_0x4043e6:;
                                            int64_t v27 = (int64_t)v15;
                                            if (*(char *)(v27 + 19) != 46) {
                                                // break -> 0x4043f0
                                                break;
                                            }
                                            int64_t v28 = v27 + 20; // 0x404632
                                            char v29 = *(char *)(v28 + (int64_t)(*(char *)v28 == 46)); // 0x404639
                                            switch (v29) {
                                                case 0: {
                                                    goto lab_0x4043d9;
                                                }
                                                case 47: {
                                                    goto lab_0x4043d9;
                                                }
                                                default: {
                                                    goto lab_0x4043f0;
                                                }
                                            }
                                        }
                                      lab_0x4043f0:
                                        // 0x4043f0
                                        closedir(dirp);
                                        goto lab_0x4043f8;
                                    }
                                }
                            }
                        }
                    }
                }
                case 2: {
                    // 0x404350
                    function_40de50(0, 3, *(int64_t *)(v21 + 56));
                    err_num2 = (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n" ^ (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n";
                    format = dcgettext(NULL, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", 5);
                    goto lab_0x40424d;
                }
                case 3: {
                    goto lab_0x4042c0;
                }
                case 4: {
                    goto lab_0x4042c0;
                }
                case 6: {
                    goto lab_0x4042c0;
                }
                case 7: {
                    // 0x404220
                    function_40de50(0, 3, *(int64_t *)(v21 + 56));
                    char * v30 = dcgettext(NULL, "traversal failed: %s", 5); // 0x40423f
                    err_num2 = *(int32_t *)(v21 + 64);
                    format = v30;
                    goto lab_0x40424d;
                }
                case 8: {
                    goto lab_0x4042c0;
                }
                case 10: {
                    goto lab_0x4042c0;
                }
                case 11: {
                    goto lab_0x4042c0;
                }
                case 12: {
                    goto lab_0x4042c0;
                }
                case 13: {
                    goto lab_0x4042c0;
                }
                default: {
                    goto lab_0x4047c8;
                }
            }
        }
      lab_0x4042c0:
        // 0x4042c0
        v24 = *(int16_t *)(v21 + 112);
        if (v24 != 6) {
            goto lab_0x4042e8;
        } else {
            // 0x4042c6
            if (*v2 == 0) {
                goto lab_0x4042e8;
            } else {
                // 0x4042cd
                if (*(int64_t *)(v21 + 88) < 1) {
                    goto lab_0x4042e8;
                } else {
                    // 0x4042d4
                    if (*(int64_t *)(v21 + 120) != *(int64_t *)(v4 + 24)) {
                        int64_t v31 = *(int64_t *)(v21 + 8); // 0x404740
                        int64_t v32 = v31; // 0x404749
                        if (*(int64_t *)(v31 + 88) >= 0) {
                            int64_t v33 = v32;
                            int64_t * v34 = (int64_t *)(v33 + 32); // 0x404763
                            while (*v34 == 0) {
                                // 0x404750
                                *v34 = 1;
                                int64_t v35 = *(int64_t *)(v33 + 8); // 0x404758
                                v32 = v35;
                                if (*(int64_t *)(v35 + 88) < 0) {
                                    // break -> 0x40476a
                                    break;
                                }
                                v33 = v32;
                                v34 = (int64_t *)(v33 + 32);
                            }
                        }
                        // 0x40476a
                        function_40dd80(4, *(int64_t *)(v21 + 56));
                        error(0, (int32_t)"skipping %s, since it's on a different device" ^ (int32_t)"skipping %s, since it's on a different device", dcgettext(NULL, "skipping %s, since it's on a different device", 5));
                        v14 = (int32_t)"skipping %s, since it's on a different device" ^ (int32_t)"skipping %s, since it's on a different device";
                        v17 = 4;
                        goto lab_0x4041f0;
                    } else {
                        goto lab_0x4042e8;
                    }
                }
            }
        }
    }
  lab_0x4047c8:
    // 0x4047c8
    function_40de50(0, 3, *(int64_t *)(v21 + 56));
    error(0, (int32_t)"unexpected failure: fts_info=%d: %s\nplease report to %s" ^ (int32_t)"unexpected failure: fts_info=%d: %s\nplease report to %s", dcgettext(NULL, "unexpected failure: fts_info=%d: %s\nplease report to %s", 5));
    abort();
    // UNREACHABLE
  lab_0x404452_4:;
    int64_t v36 = function_403d00(v4, v21, 1, v1, 2, v11); // 0x40446b
    int64_t v37 = v36; // 0x404476
    if ((int32_t)v36 == 2) {
        // 0x4044e0
        v14 = v21;
        v17 = v19;
        if (v10 != 4) {
            goto lab_0x4041f0;
        } else {
            int64_t v38 = function_403a80(v4, v21, v1, 1); // 0x4044f9
            fts_set(v4, v21, 4);
            fts_read(v4);
            v14 = v21;
            v17 = v19;
            v37 = v38;
            if ((int32_t)v38 == 2) {
                goto lab_0x4041f0;
            } else {
                goto lab_0x404478;
            }
        }
    } else {
        goto lab_0x404478;
    }
  lab_0x40440e:
    // 0x40440e
    closedir(dirp);
    v23 = path;
    if (*v25 != 0) {
        goto lab_0x4043f8;
    } else {
        goto lab_0x404420;
    }
  lab_0x4043d9:;
    struct dirent * v39 = readdir(dirp); // 0x4043dc
    v15 = v39;
    if (v39 == NULL) {
        goto lab_0x40440e;
    }
    goto lab_0x4043e6;
  lab_0x404420:
    // 0x404420
    if (*(int64_t *)(v21 + 88) != 0) {
        goto lab_0x404452_4;
    }
    int64_t v40 = function_40aa00(*(int64_t *)(v21 + 48), v23); // 0x40442b
    if (*(char *)v40 == 46) {
        int64_t v41 = v40 + 1; // 0x4045aa
        char v42 = *(char *)(v41 + (int64_t)(*(char *)v41 == 46)); // 0x4045b1
        if (v42 != 0 == (v42 != 47)) {
            goto lab_0x404439;
        } else {
            // 0x4045c2
            function_40dca0(2, 4, *(int64_t *)(v21 + 56));
            function_40dca0(1, 4, (int64_t)"..");
            function_40dca0(0, 4, (int64_t)".");
            error(0, (int32_t)"refusing to remove %s or %s directory: skipping %s" ^ (int32_t)"refusing to remove %s or %s directory: skipping %s", dcgettext(NULL, "refusing to remove %s or %s directory: skipping %s", 5));
            goto lab_0x404256;
        }
    } else {
        goto lab_0x404439;
    }
  lab_0x40424d:
    // 0x40424d
    error(0, err_num2, format);
    goto lab_0x404256;
  lab_0x404439:;
    int64_t v59 = *(int64_t *)(v1 + 16); // 0x404439
    if (v59 == 0) {
        goto lab_0x404452_4;
    }
    // 0x404442
    if (*(int64_t *)(v21 + 128) != *(int64_t *)v59) {
        goto lab_0x404452_4;
    }
    // 0x404658
    if (*(int64_t *)(v21 + 120) != *(int64_t *)(v59 + 8)) {
        goto lab_0x404452_4;
    }
    int64_t * v60 = (int64_t *)(v21 + 56); // 0x404666
    int64_t v61 = *v60; // 0x404666
    int64_t v62 = 2; // 0x4041b0
    int64_t v63 = v61;
    int64_t v64 = (int64_t)"/";
    unsigned char v65 = *(char *)v63; // 0x404677
    char v66 = *(char *)v64; // 0x404677
    char v67 = v66; // 0x404677
    bool v68 = false; // 0x404677
    while (v65 == v66) {
        int64_t v69 = v62 - 1; // 0x404677
        int64_t v70 = v64 + v9; // 0x404677
        int64_t v71 = v63 + v9; // 0x404677
        v62 = v69;
        v67 = v65;
        v68 = true;
        if (v69 == 0) {
            // break -> 
            break;
        }
        v63 = v71;
        v64 = v70;
        v65 = *(char *)v63;
        v66 = *(char *)v64;
        v67 = v66;
        v68 = false;
    }
    unsigned char v72 = v67;
    if ((v65 >= v72 && !v68) != v65 < v72) {
        // 0x40480e
        function_40dca0(1, 4, (int64_t)"/");
        function_40dca0(0, 4, *v60);
        error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
    } else {
        // 0x404686
        function_40dd80(4, v61);
        error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
    }
    // 0x4046b8
    error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
    goto lab_0x404256;
  lab_0x404256:
    // 0x404256
    fts_set(v4, v21, 4);
    fts_read(v4);
    int64_t v43 = fts_read(v4); // 0x404277
    v6 = 4;
    if (v43 == 0) {
        goto lab_0x404288_2;
    }
    // 0x404204
    v16 = g74;
    v20 = v43;
    v22 = v21;
    v18 = 4;
    goto lab_0x404204;
  lab_0x404536:
    // 0x404536
    function_40dd80(4, *(int64_t *)(v21 + 56));
    error(0, err_num3, dcgettext(NULL, "cannot remove %s", 5));
    if (*(int64_t *)(*(int64_t *)(v21 + 8) + 88) >= 0) {
        int64_t v44; // 0x4041b0
        int64_t v45 = v44;
        int64_t * v46 = (int64_t *)(v45 + 32); // 0x404597
        int64_t v47 = *v46; // 0x404597
        while (v47 == 0) {
            // 0x404580
            *v46 = 1;
            int64_t v48 = *(int64_t *)(v45 + 8); // 0x404588
            int64_t v49 = *(int64_t *)(v48 + 88); // 0x40458c
            v44 = v48;
            if (v49 < 0) {
                // break -> 0x404256
                break;
            }
            v45 = v44;
            v46 = (int64_t *)(v45 + 32);
            v47 = *v46;
        }
    }
    goto lab_0x404256;
  lab_0x4043f8:
    // 0x4043f8
    err_num3 = 39;
    if (*v7 == 0) {
        // 0x404530
        err_num3 = 21;
        goto lab_0x404536;
    } else {
        goto lab_0x404536;
    }
  lab_0x4042e8:;
    int64_t v50 = (v24 - 4 & -3) == 0; // 0x404301
    int64_t v51 = function_403d00(v4, v21, v50, v1, 3, 0); // 0x40430b
    int64_t v52 = v51; // 0x404316
    if ((int32_t)v51 == 2) {
        // 0x4044c0
        v52 = function_403a80(v4, v21, v1, v50);
    }
    goto lab_0x40431c;
  lab_0x40431c:;
    int32_t v53 = v52;
    if (v53 < 5) {
        // 0x404329
        v14 = v21;
        v17 = 4;
        if (v53 != 4) {
            // 0x404333
            v14 = v21;
            v17 = v19;
            if (v53 == 3) {
                // 0x40433d
                v14 = v21;
                v17 = (int32_t)v19 == 2 ? 3 : v19 & 0xffffffff;
            }
        }
    } else {
        // 0x404862
        __assert_fail("VALID_STATUS (s)", "src/remove.c", 574, "rm");
        v14 = (int64_t)"src/remove.c";
        v17 = 4;
    }
    goto lab_0x4041f0;
  lab_0x4041f0:
    // 0x4041f0
    v13 = v17;
    v12 = fts_read(v4);
    g74 = v12;
    v6 = v13;
    if (v12 == 0) {
        goto lab_0x404288_2;
    }
    goto lab_0x404204_2;
  lab_0x404478:;
    int64_t v54 = *(int64_t *)(v21 + 8); // 0x404478
    int64_t v55 = v54; // 0x404481
    if (*(int64_t *)(v54 + 88) >= 0) {
        goto lab_0x40449b;
    } else {
        goto lab_0x4044a2;
    }
  lab_0x40449b:;
    int64_t v56 = v55;
    int64_t * v57 = (int64_t *)(v56 + 32); // 0x40449b
    if (*v57 == 0) {
        // 0x404488
        *v57 = 1;
        int64_t v58 = *(int64_t *)(v56 + 8); // 0x404490
        v55 = v58;
        if (*(int64_t *)(v58 + 88) < 0) {
            goto lab_0x4044a2;
        } else {
            goto lab_0x40449b;
        }
    } else {
        goto lab_0x4044a2;
    }
  lab_0x4044a2:
    // 0x4044a2
    fts_set(v4, v21, 4);
    fts_read(v4);
    v52 = v37;
    goto lab_0x40431c;
}
// Address range: 0x404890 - 0x4048d4
int64_t function_404890(int64_t a1, int32_t a2) {
    if ((a2 & 0xf000) == 0xa000 || (char)function_4100a0() != 0) {
        // 0x40489e
        return 1;
    }
    int32_t v1 = euidaccess((char *)a1, 2); // 0x4048c8
    return (int64_t)(v1 & -256) | (int64_t)(v1 == 0);
}
// Address range: 0x4048e0 - 0x404982
int64_t function_4048e0(int64_t a1, uint64_t a2) {
    int64_t v1 = g48; // 0x4048f2
    if (g48 == 0) {
        int64_t * mem = calloc(g26, 1); // 0x404954
        if (mem == NULL) {
            // 0x404967
            g48 = &g47;
            g26 = 1024;
            v1 = &g47;
        } else {
            int64_t v2 = (int64_t)mem; // 0x404954
            g48 = v2;
            v1 = v2;
        }
    }
    // 0x4048f4
    if (a2 == 0) {
        // 0x40492e
        return 1;
    }
    int64_t v3 = a1 & 0xffffffff; // 0x4048ea
    uint64_t v4 = (int64_t)g26; // 0x404905
    int64_t v5 = v4 > a2 ? a2 : v4; // 0x404919
    if (function_40afb0(v3, v1, v5) != v5) {
        // 0x40492e
        return 0;
    }
    int64_t v6 = a2; // 0x40492c
    v6 -= v5;
    int64_t result = 1; // 0x404903
    while (v6 != 0) {
        uint64_t v7 = (int64_t)g26; // 0x404905
        int64_t v8 = v6 < v7 ? v6 : v7; // 0x404919
        result = 0;
        if (function_40afb0(v3, g48, v8) != v8) {
            // break -> 0x40492e
            break;
        }
        v6 -= v8;
        result = 1;
    }
    // 0x40492e
    return result;
}
// Address range: 0x404990 - 0x4049c7
int64_t function_404990(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = fallocate((int32_t)a1, 3, (int32_t)a2, (int32_t)a3); // 0x40499c
    int64_t result = v1; // 0x4049a1
    if (v1 >= 0) {
        // 0x4049a7
        return result;
    }
    int32_t v2 = *__errno_location(); // 0x4049b5
    return v2 != 38 == (v2 != 95) ? result : 0;
}
// Address range: 0x4049d0 - 0x4049ed
int64_t function_4049d0(int64_t a1, int64_t path, int64_t mode) {
    int32_t fd = a1; // 0x4049d5
    if (fd >= 0) {
        // 0x4049e8
        return fchmod(fd, (int32_t)mode);
    }
    // 0x4049d9
    return chmod((char *)path, (int32_t)mode);
}
// Address range: 0x4049f0 - 0x404a30
int64_t function_4049f0(int64_t a1) {
    int32_t * err_num = __errno_location(); // 0x4049f1
    *err_num = 95;
    error(1, *err_num, dcgettext(NULL, "failed to restore the default file creation context", 5));
    return &g76;
}
// Address range: 0x404a30 - 0x404ade
int64_t function_404a30(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = function_40dca0(1, 4, a2); // 0x404a47
    __printf_chk(1, "%s -> %s", (char *)function_40dca0(0, 4, a1), (char *)v1);
    if (a3 != 0) {
        // 0x404a7a
        function_40dd80(4, (int64_t)a3);
        __printf_chk(1, dcgettext(NULL, " (backup: %s)", 5));
    }
    int64_t v2 = (int64_t)g39; // 0x404aad
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x404ab4
    uint64_t result = *v3; // 0x404ab4
    if (result >= *(int64_t *)(v2 + 48)) {
        // 0x404ad0
        return __overflow(g39, 10);
    }
    // 0x404abe
    *v3 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x404ae0 - 0x404c0c
int64_t function_404ae0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ae0
    int64_t v1; // 0x404ae0
    int32_t v2 = v1;
    if ((char)function_404890(a2, v2) != 0) {
        // 0x404ba0
        function_40dd80(4, a2);
        __fprintf_chk(g42, 1, dcgettext(NULL, "%s: overwrite %s? ", 5));
        return function_4103f0();
    }
    // 0x404b05
    int64_t v3; // bp-52, 0x404ae0
    function_40ad20(v2, &v3);
    function_40dd80(4, a2);
    if (*(char *)(a1 + 24) == 0) {
        // 0x404b44
        if ((*(int32_t *)(a1 + 20) & 0xffff00) == 0) {
            // 0x404b62
            __fprintf_chk(g42, 1, dcgettext(NULL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5));
            return function_4103f0();
        }
    }
    // 0x404b62
    __fprintf_chk(g42, 1, dcgettext(NULL, "%s: replace %s, overriding mode %04lo (%s)? ", 5));
    return function_4103f0();
}
// Address range: 0x404c10 - 0x404d13
int64_t function_404c10(int64_t a1, int64_t a2, uint64_t a3, char a4, int32_t a5) {
    int32_t v1 = function_409b50(0xffffff9c, a1, 0xffffff9c, a2, 1024 * (int32_t)(bool)((char)a5 != 0), a3 % 256); // 0x404c47
    if (v1 < 0) {
        // 0x404cb0
        function_40dca0(1, 4, a1);
        function_40dca0(0, 4, a2);
        error(0, *__errno_location(), dcgettext(NULL, "cannot create hard link %s to %s", 5));
        return 0;
    }
    unsigned char v2 = (char)(v1 != 0) & a4; // 0x404c4e
    if (v2 == 0) {
        // 0x404c53
        return 1;
    }
    // 0x404c68
    function_40dd80(4, a2);
    __printf_chk(1, dcgettext(NULL, "removed %s\n", 5));
    return a1 & 0xffffff00 | (int64_t)v2;
}
// Address range: 0x404d20 - 0x404dd7
int64_t function_404d20(uint32_t fd, int64_t a2, char a3, int64_t offset) {
    int32_t v1 = lseek(fd, (int32_t)offset, SEEK_CUR); // 0x404d3d
    int64_t v2; // 0x404d20
    if (v1 < 0) {
        // 0x404d90
        function_40dd80(4, a2);
        v2 = (int64_t)"cannot lseek %s";
    } else {
        if (a3 == 0 || (int32_t)function_404990((int64_t)fd, (int64_t)v1 - offset, offset) >= 0) {
            // 0x404d4c
            return 1;
        }
        // 0x404d74
        function_40dd80(4, a2);
        v2 = (int64_t)"error deallocating %s";
    }
    // 0x404daa
    error(0, *__errno_location(), dcgettext(NULL, (char *)v2, 5));
    return (int32_t)&g76 ^ (int32_t)&g76;
}
// Address range: 0x404de0 - 0x405203
int64_t function_404de0(char fd, int64_t a2, int64_t buf, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    char * v1 = (char *)a11; // 0x404e18
    *v1 = 0;
    int64_t * v2 = (int64_t *)a10; // 0x404e38
    *v2 = 0;
    if (a9 == 0) {
        // 0x404ee9
        return 1;
    }
    int64_t v3 = 0x100000000 * a2 >> 32; // 0x404e6f
    int32_t v4 = v3;
    char v5 = a6;
    int64_t v6 = a9; // 0x404e77
    int64_t v7 = 0; // 0x404e77
    int64_t v8 = 0; // 0x404e77
    char v9; // 0x404de0
    int64_t v10; // 0x404de0
    int64_t v11; // 0x404de0
    int64_t v12; // 0x404de0
    uint64_t v13; // 0x404de0
    int64_t v14; // 0x404de0
    int64_t v15; // 0x404de0
    int64_t v16; // 0x404de0
    int64_t v17; // 0x404de0
    int64_t v18; // 0x404de0
    int64_t result; // 0x404de0
    int64_t v19; // 0x404de0
    int64_t v20; // 0x404de0
    int64_t v21; // 0x404de0
    int64_t v22; // 0x404de0
    int64_t v23; // 0x404de0
    int64_t v24; // 0x404de0
    int64_t v25; // 0x404de0
    int64_t v26; // 0x404de0
    int64_t v27; // 0x404de0
    int64_t v28; // 0x404de0
    int64_t v29; // 0x404de0
    int64_t v30; // 0x404de0
    int64_t v31; // 0x404de0
    int64_t v32; // 0x404de0
    int64_t v33; // 0x404de0
    uint64_t v34; // 0x404de0
    int64_t v35; // 0x404de0
    uint64_t v36; // 0x404de0
    int64_t v37; // 0x404e96
    int64_t v38; // 0x404f33
    while (true) {
      lab_0x404e7c:
        // 0x404e7c
        v18 = v8;
        v15 = v7;
        v36 = v6;
        int32_t nbyte = v36 < a4 ? v36 : a4; // 0x404e96
        int32_t v39 = read((int32_t)fd, (int64_t *)buf, nbyte); // 0x404e96
        while (v39 < 0) {
            int32_t * err_num = __errno_location(); // 0x404ea5
            if (*err_num != 4) {
                // 0x404eaf
                function_40dd80(4, a7);
                error(0, *err_num, dcgettext(NULL, "error reading %s", 5));
                result = 0;
                return result;
            }
            v39 = read((int32_t)fd, (int64_t *)buf, nbyte);
        }
        if (v39 == 0) {
            // break -> 0x404f00
            break;
        }
        // 0x404f06
        v37 = v39;
        *v2 = *v2 + v37;
        int64_t v40 = a5 == 0 ? a4 : a5; // 0x404f2b
        int64_t v41 = v25; // 0x404f2b
        int64_t v42 = buf; // 0x404f2b
        int64_t v43 = v37; // 0x404f2b
        int64_t v44 = buf; // 0x404f2b
        int64_t v45 = v15; // 0x404f2b
        int64_t v46 = v18; // 0x404f2b
        while (true) {
            // 0x404f30
            v14 = v44;
            v13 = v43;
            int64_t * str = (int64_t *)v14;
            v33 = v40;
            v28 = v41;
            v10 = v42;
            v16 = v45;
            v19 = v46;
            while (true) {
              lab_0x404f30:
                // 0x404f30
                v20 = v19;
                v17 = v16;
                v11 = v10;
                v34 = v33;
                v38 = v34 > v13 ? v13 : v34;
                int64_t v47 = v28 & -256; // 0x404f3a
                int64_t v48 = v47 | (int64_t)!((a5 == 0 | v38 == 0)); // 0x404f3e
                int64_t v49 = v38; // 0x404f43
                int64_t v50 = v14; // 0x404f43
                if (a5 == 0 || v38 == 0) {
                    char v51 = v17;
                    int64_t v52 = v17 & 0xffffffff; // 0x40501e
                    v9 = v51;
                    v30 = v52;
                    v32 = v52;
                    if (v38 != 0 == ((v51 ^ 1) & (char)(v13 <= v34)) == 0) {
                        // break -> 0x405099
                        break;
                    }
                    goto lab_0x405030;
                } else {
                    int64_t v53 = v50;
                    while (*(char *)v53 == 0) {
                        int64_t n = v49 - 1; // 0x404f5c
                        if (n == 0) {
                            // 0x405080
                            v31 = v48;
                            v23 = (v17 ^ 1) & (int64_t)(v20 != 0);
                            goto lab_0x405090;
                        }
                        int64_t str2 = v53 + 1; // 0x404f58
                        v49 = n;
                        v50 = str2;
                        if (n % 16 == 0) {
                            int32_t memcmp_rc = memcmp(str, (int64_t *)str2, (int32_t)n); // 0x404f73
                            int64_t v54 = v47 | (int64_t)(memcmp_rc == 0); // 0x404f7f
                            v24 = memcmp_rc != 0;
                            v35 = v54 ^ v17;
                            v29 = v54;
                            goto lab_0x404f8d;
                        }
                        v53 = v50;
                    }
                    // 0x405160
                    v24 = v48 & 0xffffff01;
                    v35 = v17;
                    v29 = 0;
                    goto lab_0x404f8d;
                }
            }
          lab_0x405099:
            if (0x7fffffffffffffff - v38 < v20) {
                // 0x405120
                function_40dd80(4, a7);
                error(0, (int32_t)"overflow reading %s" ^ (int32_t)"overflow reading %s", dcgettext(NULL, "overflow reading %s", 5));
                result = 0;
                return result;
            }
            // 0x4050ab
            v26 = v32;
            v12 = v11;
            v21 = v20 + v38;
          lab_0x4050b7_2:
            // 0x4050b7
            v46 = v21;
            v42 = v12;
            v41 = v26;
            v45 = v41 & 0xffffffff;
            v43 = v13 - v38;
            v40 = v38;
            v44 = v38 + v14;
            v7 = v45;
            v27 = v41;
            v22 = v46;
            if (v43 == 0) {
                // break -> 0x4050e3
                break;
            }
        }
        goto lab_0x4050e3_2;
    }
    char v55 = v15; // 0x404de0
    int64_t v56 = v18; // 0x404de0
  lab_0x4051b3:
    // 0x4051b3
    result = 1;
    if (v55 != 0) {
        // 0x4051b8
        return function_404d20(v4, a8, v5, v56);
    }
  lab_0x404ee9:
    // 0x404ee9
    return result;
  lab_0x405030:;
    int64_t v57 = v20 + v38; // 0x405033
    int32_t v58 = 1; // 0x405046
    int64_t v59 = 0; // 0x405046
    int64_t v60 = v30; // 0x405046
    int64_t v61 = v57; // 0x405046
    int32_t v62 = 1; // 0x405046
    int64_t v63 = 0; // 0x405046
    int64_t v64 = v30; // 0x405046
    int64_t v65 = v57; // 0x405046
    if (v9 == 0) {
        goto lab_0x404fc9;
    } else {
        goto lab_0x40504c;
    }
  lab_0x404f8d:;
    int64_t v66 = v35 & (int64_t)(v20 != 0);
    v31 = v29;
    v23 = v66;
    int64_t v67; // 0x404de0
    int64_t v68; // 0x404de0
    int32_t v69; // 0x404de0
    if (v13 > v34 || (char)v24 == 0) {
        goto lab_0x405090;
    } else {
        // 0x404fa8
        v69 = 1;
        v68 = 0;
        v67 = 1;
        if (v66 == 0) {
            // 0x404fa8
            v9 = v17;
            v30 = 0;
            goto lab_0x405030;
        } else {
            goto lab_0x404fbb;
        }
    }
  lab_0x404fc9:;
    int64_t v70 = v61;
    int32_t v71 = v58; // 0x404fe1
    int64_t v72 = v60; // 0x404fe1
    int64_t v73 = v59; // 0x404fe1
    if (v70 != function_40afb0(v3 & 0xffffffff, v11, v70)) {
        // 0x40516c
        function_40dd80(4, a8);
        error(0, *__errno_location(), dcgettext(NULL, "error writing %s", 5));
        result = v17 & 0xffffffff;
        return result;
    }
    goto lab_0x404fe7;
  lab_0x40504c:;
    int64_t v76 = function_404d20(v4, a8, v5, v65); // 0x40505d
    v71 = v62;
    v72 = v64;
    v73 = v63;
    if ((char)v76 == 0) {
        // 0x405070
        result = v76 & 0xffffffff;
        goto lab_0x404ee9;
    }
    goto lab_0x404fe7;
  lab_0x405090:
    // 0x405090
    v69 = 0;
    v68 = v31;
    v67 = v23;
    v32 = v31;
    if ((char)v23 == 0) {
        // break -> 0x405099
        goto lab_0x405099;
    }
    goto lab_0x404fbb;
  lab_0x404fe7:;
    int64_t v74 = v72;
    v26 = v74;
    v12 = v14;
    v21 = v38;
    if (v71 == 0) {
        goto lab_0x4050b7_2;
    }
    if (v38 == 0) {
        // 0x4050e3
        v7 = v74 & 0xffffffff;
        v27 = v74;
        v22 = 0;
        goto lab_0x4050e3_2;
    }
    // 0x404ffc
    v26 = v74;
    v12 = v14;
    v21 = 0;
    if (v73 % 256 == 0) {
        goto lab_0x4050b7_2;
    }
    // 0x405005
    v33 = 0;
    v28 = v74;
    v10 = v14;
    v16 = v74 & 0xffffffff;
    v19 = v38;
    goto lab_0x404f30;
  lab_0x404fbb:
    // 0x404fbb
    v58 = v69;
    v59 = v67;
    v60 = v68;
    v61 = v20;
    v62 = v69;
    v63 = v67;
    v64 = v68;
    v65 = v20;
    if ((char)v17 != 0) {
        goto lab_0x40504c;
    } else {
        goto lab_0x404fc9;
    }
  lab_0x4050e3_2:
    // 0x4050e3
    v8 = v22;
    v6 = v36 - v37;
    char v75 = v27;
    *v1 = v75;
    v25 = v27;
    v55 = v75;
    v56 = v8;
    if (v6 == 0) {
        goto lab_0x4051b3;
    }
    goto lab_0x404e7c;
}
// Address range: 0x405210 - 0x4052d8
int64_t function_405210(int64_t a1, int64_t a2, int32_t a3, char a4, int64_t a5) {
    // 0x405210
    if (*(char *)(a5 + 37) == 0) {
        unsigned char v1 = *(char *)(a5 + 33) & a4; // 0x4052a2
        if (v1 == 0) {
            // 0x4052a8
            return 1;
        }
        // 0x4052c0
        *__errno_location() = 95;
        return (int64_t)a4 & 0xffffff00 | (int64_t)v1;
    }
    int32_t * err_num = __errno_location(); // 0x405227
    char * v2 = (char *)(a5 + 38);
    if (*(char *)(a5 + 35) != 0) {
        char v3 = *v2; // 0x405288
        if (v3 == 0) {
            // 0x405290
            *err_num = 95;
            // 0x405275
            return v3 ^ 1;
        }
    }
    // 0x405235
    *err_num = 95;
    function_40dd80(4, a1);
    error(0, *err_num, dcgettext(NULL, "failed to get security context of %s", 5));
    // 0x405275
    return (int64_t)(*v2 ^ 1);
}
// Address range: 0x4052e0 - 0x405353
int64_t function_4052e0(int64_t a1, char a2, int32_t a3, int64_t a4) {
    int32_t * err_num = __errno_location(); // 0x4052ea
    if (*(char *)(a4 + 35) != 0) {
        // 0x405340
        if (*(char *)(a4 + 38) == 0) {
            // 0x405346
            *err_num = 95;
            return 0;
        }
    }
    // 0x4052f8
    *err_num = 95;
    function_40dca0(0, 4, a1);
    error(0, *err_num, dcgettext(NULL, "failed to set the security context of %s", 5));
    return (int32_t)&g76 ^ (int32_t)&g76;
}
// Address range: 0x405360 - 0x405386
int64_t function_405360(int64_t * a1, int64_t a2) {
    int64_t result = function_40b8c0(61, 0, 0x40c280, 0x40c2c0, 0x40c330); // 0x40537b
    *(int64_t *)((int64_t)a1 + 56) = result;
    return result;
}
// Address range: 0x405390 - 0x4053b6
int64_t function_405390(int64_t a1, int64_t a2) {
    int64_t result = function_40b8c0(61, 0, 0x40c2b0, 0x40c2c0, 0x40c330); // 0x4053ab
    *(int64_t *)(a1 + 64) = result;
    return result;
}
// Address range: 0x4053c0 - 0x4053f1
int64_t function_4053c0(int64_t * a1) {
    // 0x4053c0
    int128_t v1; // 0x4053c0
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    int128_t v4 = __asm_pxor(v2, v2); // 0x4053c1
    *(int64_t *)(v3 + 64) = 0;
    int64_t v5; // 0x4053c0
    __asm_movups(*(int128_t *)&v5, v4);
    __asm_movups(*(int128_t *)(v3 + 16), v4);
    __asm_movups(*(int128_t *)(v3 + 32), v4);
    __asm_movups(*(int128_t *)(v3 + 48), v4);
    int32_t v6 = geteuid(); // 0x4053df
    char v7 = v6 == 0; // 0x4053e9
    *(char *)(v3 + 27) = v7;
    *(char *)(v3 + 26) = v7;
    return (int64_t)(v6 & -256) | (int64_t)(v6 == 0);
}
// Address range: 0x405400 - 0x405424
int64_t function_405400(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405404
    int32_t v2 = *v1; // 0x405409
    bool v3 = v2 == 1 | v2 == 22;
    int64_t result = (int64_t)v1 & -256 | (int64_t)v3; // 0x405419
    if (v3) {
        // 0x40541b
        result = (int64_t)(*(char *)(a1 + 26) ^ 1);
    }
    // 0x405422
    return result;
}
// Address range: 0x405430 - 0x40561b
int64_t function_405430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t * a6) {
    int32_t owner = *(int32_t *)(a4 + 28); // 0x405446
    int32_t group = *(int32_t *)(a4 + 32); // 0x40544a
    int64_t v1; // 0x405430
    if (a5 != 0) {
        goto lab_0x4054a0;
    } else {
        // 0x405453
        if (*(int64_t *)(a1 + 24) % 0xff000000000100 == 0) {
            // 0x4054f8
            if (*(char *)(a1 + 43) == 0) {
                goto lab_0x4054a0;
            } else {
                // 0x4054fe
                v1 = a1 + 16;
                goto lab_0x40546e;
            }
        } else {
            // 0x405467
            v1 = a4 + 24;
            goto lab_0x40546e;
        }
    }
  lab_0x4054a0:;
    int32_t fd = a3; // 0x4054a6
    if (fd == -1) {
        char * path = (char *)a2; // 0x405523
        if (lchown(path, owner, group) == 0) {
            // 0x4054e3
            return 1;
        }
        int32_t * v2 = __errno_location(); // 0x40552c
        int32_t v3 = *v2; // 0x405531
        if (v3 != 1 != v3 != 22) {
            // 0x405540
            lchown(path, -1, group);
            *v2 = v3;
        }
    } else {
        // 0x4054ab
        if (fchown(fd, owner, group) == 0) {
            // 0x4054e3
            return 1;
        }
        int32_t * v4 = __errno_location(); // 0x4054b6
        int32_t v5 = *v4; // 0x4054bb
        switch (v5) {
            case 1: {
            }
            case 22: {
                // 0x4055a0
                fchown(fd, -1, group);
                *v4 = v5;
                // break -> 0x4054d5
                break;
            }
        }
    }
    // 0x4054d5
    if ((char)function_405400(a1) != 0) {
        // 0x4054e3
        return 0;
    }
    // 0x405558
    function_40dd80(4, a2);
    error(0, *__errno_location(), dcgettext(NULL, "failed to preserve ownership for %s", 5));
    // 0x4054e3
    return -(int64_t)*(char *)(a1 + 36) & 0xffffffff;
  lab_0x40546e:;
    int32_t v6 = *(int32_t *)((int64_t)a6 + 24);
    uint32_t v7 = *(int32_t *)v1;
    if (((v7 % 512 ^ 4095) & v6) != 0) {
        // 0x40547e
        if ((int32_t)function_40c430(a2, a3 & 0xffffffff, v6 & 448 & v7) != 0) {
            int32_t * err_num = __errno_location(); // 0x4055c0
            switch (*err_num) {
                case 1: {
                }
                case 22: {
                    // 0x405610
                    if (*(char *)(a1 + 27) == 0) {
                        // 0x4054e3
                        return -(int64_t)*(char *)(a1 + 36) & 0xffffffff;
                    }
                    // break -> 0x4055d4
                    break;
                }
            }
            // 0x4055d4
            function_40dd80(4, a2);
            error(0, *err_num, dcgettext(NULL, "clearing permissions for %s", 5));
            // 0x4054e3
            return -(int64_t)*(char *)(a1 + 36) & 0xffffffff;
        }
    }
    goto lab_0x4054a0;
}
// Address range: 0x405620 - 0x40564a
int64_t function_405620(int64_t a1) {
    uint32_t result = g25; // 0x405621
    if (result != -1) {
        // 0x40562c
        return result;
    }
    int32_t cmask = umask(0); // 0x405632
    g25 = cmask;
    umask(cmask);
    return cmask;
}
// Address range: 0x405650 - 0x4094cc
int64_t function_405650(int64_t a1, int64_t str3, char a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x405650
    int64_t v1; // 0x405650
    int64_t v2 = v1;
    int64_t v3 = a6 + 24; // 0x405680
    char * v4 = (char *)v3; // 0x405680
    if (!((a10 == 0 | *v4 == 0))) {
        // 0x4056a3
        *(char *)a10 = 0;
    }
    int32_t * v5 = (int32_t *)(a6 + 4); // 0x4056ae
    int64_t v6 = 1; // 0x4056b6
    char * v7 = (char *)a9; // 0x4056bb
    *v7 = 0;
    int32_t v8 = v6;
    char * file_path = (char *)a1;
    int64_t v9; // 0x405650
    int64_t v10; // 0x405650
    int64_t v11; // bp-632, 0x405650
    if (*v5 == 2) {
        int32_t v12 = __lxstat(v8, file_path, (struct stat *)&v11); // 0x405ee0
        v10 = v1 & -256 | (int64_t)(v12 != 0);
        v9 = a1;
        if (v12 == 0) {
            goto lab_0x4056ec;
        } else {
            goto lab_0x405ef7;
        }
    } else {
        int32_t v13 = __xstat(v8, file_path, (struct stat *)&v11); // 0x4056d5
        v10 = v1 & -256 | (int64_t)(v13 != 0);
        v9 = a1;
        if (v13 != 0) {
            goto lab_0x405ef7;
        } else {
            goto lab_0x4056ec;
        }
    }
  lab_0x408c84:;
    // 0x408c84
    int64_t v14; // 0x405650
    free((int64_t *)v14);
    int32_t fd3; // 0x405650
    int32_t fd = fd3; // 0x408c90
    int64_t v15; // 0x405650
    int64_t v16 = v15; // 0x408c90
    int64_t v17; // 0x405650
    int64_t v18 = v17; // 0x408c90
    int64_t v19; // 0x405650
    int64_t v20 = v19; // 0x408c90
    int64_t v21; // 0x408ab9
    int64_t v22 = v21 & 0xffffffff; // 0x408c90
    int64_t v23 = 0; // 0x408c90
    int64_t v24; // 0x405650
    int64_t v25 = v24; // 0x408c90
    int64_t v26 = v10 % 256; // 0x408c90
    goto lab_0x408600;
  lab_0x4056ec:;
    int64_t v192 = &v11; // 0x4056c5
    int32_t owner; // 0x405650
    int32_t v138 = owner & 0xf000; // 0x4056f8
    int64_t * v470; // 0x405650
    int64_t v89; // 0x405650
    int64_t v473; // 0x405650
    int64_t v242; // 0x405650
    if (v138 == 0x4000) {
        // 0x405f48
        if (*(char *)(a6 + 42) == 0) {
            // 0x406970
            v6 = 4;
            function_40dd80(4, a1);
            v242 = (int64_t)"omitting directory %s";
            v473 = 5;
            if (*(char *)(a6 + 25) == 0) {
                goto lab_0x406ad8;
            } else {
                goto lab_0x406992;
            }
        } else {
            if ((char)a7 == 0) {
                goto lab_0x405732;
            } else {
                // 0x405f53
                v470 = (int64_t *)(a6 + 64);
                goto lab_0x40635f;
            }
        }
    } else {
        if ((char)a7 == 0) {
            goto lab_0x405732;
        } else {
            int64_t * v694 = (int64_t *)(a6 + 64);
            int64_t v695 = *v694; // 0x405716
            v6 = v695;
            if (*(int32_t *)&v89 == 0) {
                uint64_t v696 = function_40abf0(v695, a1, v192); // 0x406352
                v470 = v694;
                if ((char)v696 != 0) {
                    // 0x407330
                    function_40dd80(4, a1);
                    error(0, (int32_t)"warning: source file %s specified more than once" ^ (int32_t)"warning: source file %s specified more than once", dcgettext(NULL, "warning: source file %s specified more than once", 5));
                    // 0x405f31
                    return v696 % 256 & 0xffffffff;
                }
                goto lab_0x40635f;
            } else {
                // 0x405723
                function_40ab60(v695, a1, v192);
                goto lab_0x405732;
            }
        }
    }
  lab_0x405ef7:
    // 0x405ef7
    function_40dd80(4, v9);
    error(0, *__errno_location(), dcgettext(NULL, "cannot stat %s", 5));
    // 0x405f31
    return 0;
  lab_0x405732:;
    // 0x405732
    int64_t v471; // bp-888, 0x405650
    int64_t v135 = &v471; // 0x405666
    int64_t v79 = a7 & 0xffffffff; // 0x405685
    int32_t v472 = *v5; // 0x40573c
    int32_t v397 = v472 == 4 ? 1 : (int32_t)((int64_t)(v472 == 3) & a7);
    int64_t v278; // 0x405662
    if (a3 != 0) {
        goto lab_0x405a90;
    } else {
        // 0x40575f
        v278 = (int64_t)a3 & 0xffffffff;
        if (v138 == 0x8000) {
            goto lab_0x40578d;
        } else {
            // 0x40576c
            if (*(char *)(a6 + 20) == 0) {
                goto lab_0x406200;
            } else {
                switch ((int16_t)v138) {
                    case -0x6000: {
                        goto lab_0x406200;
                    }
                    case 0x4000: {
                        goto lab_0x406200;
                    }
                    default: {
                        goto lab_0x40578d;
                    }
                }
            }
        }
    }
  lab_0x406ad8:
    // 0x406ad8
    v6 = 0;
    // 0x406999
    error(0, 0, dcgettext(NULL, "-r not specified; omitting directory %s", (int32_t)v473));
    // 0x405f31
    return 0;
  lab_0x406992:
    // 0x406992
    v6 = 0;
    // 0x406999
    error(0, 0, dcgettext(NULL, (char *)v242, 5));
    // 0x405f31
    return 0;
  lab_0x405a90:;
    // 0x405a90
    int128_t v93; // 0x405650
    int32_t v123 = v93; // 0x405a99
    char v125 = 0; // 0x405a99
    int64_t v126 = 1; // 0x405a99
    int64_t v130 = v93; // 0x405a99
    int64_t v132 = 0; // 0x405a99
    int64_t v134 = v135; // 0x405a99
    goto lab_0x405aa4;
  lab_0x40635f:
    // 0x40635f
    function_40ab60(*v470, a1, v192);
    goto lab_0x405732;
  lab_0x405aa4:;
    int32_t v243 = v123; // 0x405aa6
    char v244 = v125; // 0x405aa6
    int64_t v245 = v126; // 0x405aa6
    int128_t v128; // 0x405650
    int128_t v246 = v128; // 0x405aa6
    int64_t v247 = v130; // 0x405aa6
    int64_t v248 = v134; // 0x405aa6
    int64_t v249; // 0x405650
    int64_t v250; // 0x405650
    int32_t v251; // 0x405650
    int64_t v252; // 0x405650
    int128_t v253; // 0x405650
    int64_t v254; // 0x405650
    char v255; // 0x405650
    if ((char)a7 != 0) {
        // 0x405ed0
        v251 = v123;
        v255 = v125;
        v254 = v126;
        v253 = v128;
        v252 = v130;
        v249 = v132;
        v250 = v134;
        v243 = v123;
        v244 = v125;
        v245 = v126;
        v246 = v128;
        v247 = v130;
        v248 = v134;
        if (*(int64_t *)(a6 + 56) != 0) {
            goto lab_0x4059e0;
        } else {
            goto lab_0x405aac;
        }
    } else {
        goto lab_0x405aac;
    }
  lab_0x40578d:;
    // 0x40578d
    int64_t v256; // 0x405650
    int32_t v165; // bp-488, 0x405650
    bool v257; // 0x405650
    if (*v4 != 0) {
        goto lab_0x406200;
    } else {
        // 0x405798
        if (*(char *)(a6 + 44) != 0) {
            goto lab_0x406200;
        } else {
            // 0x4057a3
            if (*(char *)(a6 + 23) != 0) {
                goto lab_0x406200;
            } else {
                // 0x4057ae
                if (*(int32_t *)&v89 != 0) {
                    goto lab_0x406200;
                } else {
                    // 0x4057bb
                    if (*(char *)(a6 + 21) != 0) {
                        goto lab_0x406200;
                    } else {
                        // 0x4057c6
                        v6 = 1;
                        int32_t v258 = __xstat(1, (char *)str3, (struct stat *)&v165); // 0x4057e3
                        v257 = v258 != 0;
                        v256 = 1;
                        if (v258 != 0) {
                            goto lab_0x40623b;
                        } else {
                            goto lab_0x405804;
                        }
                    }
                }
            }
        }
    }
  lab_0x405aac:;
    int32_t v259 = v243; // 0x405ab1
    char v260 = v244; // 0x405ab1
    int64_t v261 = v245; // 0x405ab1
    int128_t v262 = v246; // 0x405ab1
    int64_t v263 = v247; // 0x405ab1
    int64_t v264 = v248; // 0x405ab1
    int64_t v265; // 0x405650
    int64_t v266; // 0x405650
    int32_t v267; // 0x405650
    int32_t v268; // 0x405650
    int64_t v269; // 0x405650
    int64_t v270; // 0x405650
    int128_t v271; // 0x405650
    int128_t v272; // 0x405650
    int64_t v273; // 0x405650
    int64_t v274; // 0x405650
    char v275; // 0x405650
    char v276; // 0x405650
    if (*(char *)(a6 + 46) == 0) {
        goto lab_0x405f70;
    } else {
        // 0x405ab7
        v268 = v243;
        v276 = v244;
        v274 = v245;
        v272 = v246;
        v270 = v247;
        v266 = v248;
        v267 = v243;
        v275 = v244;
        v273 = v245;
        v271 = v246;
        v269 = v247;
        v265 = v248;
        if (*v4 != 0) {
            goto lab_0x406130;
        } else {
            goto lab_0x405ac2;
        }
    }
  lab_0x406200:
    // 0x406200
    v6 = 1;
    int32_t v277 = __lxstat(1, (char *)str3, (struct stat *)&v165); // 0x40621d
    v257 = false;
    v256 = v278;
    if (v277 == 0) {
        goto lab_0x405804;
    } else {
        goto lab_0x40623b;
    }
  lab_0x4059e0:;
    // 0x4059e0
    int64_t v279; // 0x405650
    int64_t v280; // 0x405650
    int64_t v281; // 0x405650
    int32_t v282; // 0x405650
    int32_t v283; // 0x405650
    int64_t v86; // bp-200, 0x405650
    int64_t v284; // 0x405650
    int64_t v285; // 0x405650
    int128_t v286; // 0x405650
    int128_t v287; // 0x405650
    int64_t v288; // 0x405650
    int64_t v289; // 0x405650
    char v290; // 0x405650
    char v291; // 0x405650
    if (*v4 != 0) {
        // 0x405f60
        v259 = v251;
        v260 = v255;
        v261 = v254;
        v262 = v253;
        v263 = v252;
        v264 = v250;
        v267 = v251;
        v275 = v255;
        v273 = v254;
        v271 = v253;
        v269 = v252;
        v265 = v250;
        if (*(char *)(a6 + 46) != 0) {
            goto lab_0x406130;
        } else {
            goto lab_0x405f70;
        }
    } else {
        // 0x4059eb
        if (*(int32_t *)&v89 != 0) {
            // 0x406490
            v268 = v251;
            v276 = v255;
            v274 = v254;
            v272 = v253;
            v270 = v252;
            v266 = v250;
            if (*(char *)(a6 + 46) != 0) {
                goto lab_0x405ac2;
            } else {
                // 0x40649b
                v283 = v251;
                v291 = v255;
                v289 = v254;
                v287 = v253;
                v285 = v252;
                v281 = v250;
                v282 = v251;
                v290 = v255;
                v288 = v254;
                v286 = v253;
                v284 = v252;
                v280 = v250;
                if (v138 != 0x4000) {
                    goto lab_0x405af3;
                } else {
                    goto lab_0x4064b0;
                }
            }
        } else {
            // 0x4059f7
            v279 = &v165;
            if ((char)v249 == 0) {
                int32_t v292 = __lxstat(1, (char *)str3, (struct stat *)&v86); // 0x407411
                v243 = v251;
                v244 = v255;
                v245 = v254;
                v246 = v253;
                v247 = v252;
                v248 = v250;
                if (v292 != 0) {
                    goto lab_0x405aac;
                } else {
                    // 0x40741e
                    v279 = &v86;
                    goto lab_0x405a06;
                }
            } else {
                goto lab_0x405a06;
            }
        }
    }
  lab_0x405f70:;
    int32_t v293 = v259; // 0x405f75
    char v294 = v260; // 0x405f75
    int64_t v295 = v261; // 0x405f75
    int128_t v296 = v262; // 0x405f75
    int64_t v297 = v263; // 0x405f75
    int64_t v298 = v264; // 0x405f75
    int32_t v299 = v259; // 0x405f75
    char v300 = v260; // 0x405f75
    int64_t v301 = v261; // 0x405f75
    int128_t v302 = v262; // 0x405f75
    int64_t v303 = v263; // 0x405f75
    int64_t v304 = v264; // 0x405f75
    if (v138 != 0x4000 | *(char *)(a6 + 42) == 0) {
        goto lab_0x405ae8;
    } else {
        goto lab_0x405f8b;
    }
  lab_0x405804:;
    int64_t v305 = &v165;
    int64_t v97 = v257;
    int64_t v150 = owner; // 0x40580b
    int64_t v306; // 0x405650
    int32_t v307; // 0x405650
    int64_t v308; // 0x405650
    int64_t v99; // 0x405650
    int64_t v309; // 0x405650
    int64_t v310; // 0x405650
    int64_t v94; // 0x405650
    int64_t v311; // 0x405650
    int32_t v95; // 0x405650
    int64_t v98; // 0x405650
    char v70; // bp-344, 0x405650
    int64_t v96; // 0x405650
    int64_t v312; // 0x405650
    if (v1 == v150) {
        // 0x406cc8
        if (v11 != (int64_t)v165) {
            goto lab_0x405818;
        } else {
            unsigned char v313 = *(char *)(a6 + 23); // 0x406cdc
            int32_t v314 = v93;
            v94 = str3;
            v95 = v314;
            v96 = 1;
            v98 = v93;
            v99 = v256;
            if (v313 != 0) {
                goto lab_0x405823;
            } else {
                // 0x406cea
                v312 = 1;
                if (*v5 == 2) {
                    goto lab_0x406af5;
                } else {
                    // 0x406cf5
                    v6 = 1;
                    int32_t v315 = __lxstat(1, (char *)str3, (struct stat *)&v70); // 0x406d19
                    int64_t v316 = v256 % 256; // 0x406d1e
                    v94 = str3;
                    v95 = v314;
                    v96 = v97;
                    v98 = v93;
                    v99 = v316;
                    if (v315 != 0) {
                        goto lab_0x405823;
                    } else {
                        // 0x406d2e
                        v6 = 1;
                        int32_t v317 = __lxstat(1, file_path, (struct stat *)&v86); // 0x406d47
                        v94 = a1;
                        v95 = v314;
                        v96 = v97;
                        v98 = v93;
                        v99 = v316;
                        if (v317 != 0) {
                            goto lab_0x405823;
                        } else {
                            int64_t v318 = v313; // 0x406d6a
                            // 0x406d6c
                            v318 = v86 == (int64_t)v70;
                            int64_t v319 = &v70; // 0x406d84
                            v89 = v319;
                            int64_t v320 = &v86; // 0x406d8b
                            int32_t v321 = v319;
                            v311 = a1;
                            v306 = v319;
                            v307 = v321;
                            v310 = v320;
                            v309 = v316;
                            v308 = v318;
                            if ((owner & 0xf000) != 0xa000) {
                                goto lab_0x406b19;
                            } else {
                                // 0x406da2
                                v311 = a1;
                                v306 = v319;
                                v307 = v321;
                                v310 = v320;
                                v309 = v316;
                                v308 = v318;
                                if ((owner & 0xf000) != 0xa000) {
                                    goto lab_0x406b19;
                                } else {
                                    // 0x406db8
                                    v94 = a1;
                                    v95 = v314;
                                    v96 = v97;
                                    v98 = v93;
                                    v99 = v316;
                                    v311 = a1;
                                    v306 = v319;
                                    v307 = v321;
                                    v310 = v320;
                                    v309 = v316;
                                    v308 = v318;
                                    if (*(char *)(a6 + 21) == 0) {
                                        goto lab_0x406b19;
                                    } else {
                                        goto lab_0x405823;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x405818;
    }
  lab_0x40623b:;
    int32_t * v322 = __errno_location(); // 0x40623b
    if (*v322 != 2) {
        // 0x406249
        function_40dd80(4, str3);
        char * format7 = dcgettext(NULL, "cannot stat %s", 5); // 0x406273
        error(0, *(int32_t *)(0x100000000000000 * (int64_t)v322 >> 56), format7);
        // 0x405f31
        return v278 & 0xffffffff;
    }
    goto lab_0x405a90;
  lab_0x405ae8:
    // 0x405ae8
    v283 = v293;
    v291 = v294;
    v289 = v295;
    v287 = v296;
    v285 = v297;
    v281 = v298;
    int32_t v323 = v293; // 0x405aed
    char v324 = v294; // 0x405aed
    int64_t v325 = v295; // 0x405aed
    int128_t v326 = v296; // 0x405aed
    int64_t v327 = v297; // 0x405aed
    int64_t v328 = v298; // 0x405aed
    if (*v4 != 0) {
        goto lab_0x406147;
    } else {
        goto lab_0x405af3;
    }
  lab_0x405f8b:;
    int64_t v329 = owner; // 0x405f92
    v6 = v329;
    int64_t v330 = v329; // 0x405f9b
    int32_t v331 = v299; // 0x405f9b
    char v332 = v300; // 0x405f9b
    int64_t v333 = v301; // 0x405f9b
    int128_t v334 = v302; // 0x405f9b
    int64_t v335 = v303; // 0x405f9b
    int64_t v336 = v304; // 0x405f9b
    int64_t v337; // 0x405650
    int32_t v338; // 0x405650
    int64_t v339; // 0x405650
    int128_t v340; // 0x405650
    int64_t v341; // 0x405650
    char v342; // 0x405650
    int64_t v343; // 0x405650
    if ((char)a7 == 0) {
        goto lab_0x4069d0;
    } else {
        // 0x405fa1
        v338 = v299;
        v342 = v300;
        v341 = v301;
        v340 = v302;
        v339 = v303;
        v337 = v304;
        v343 = function_4096d0(str3, v329, v11);
        goto lab_0x405fb7;
    }
  lab_0x406130:
    // 0x406130
    v323 = v267;
    v324 = v275;
    v325 = v273;
    v326 = v271;
    v327 = v269;
    v328 = v265;
    if (v138 != 0x4000) {
        goto lab_0x406147;
    } else {
        // 0x40613c
        v299 = v267;
        v300 = v275;
        v301 = v273;
        v302 = v271;
        v303 = v269;
        v304 = v265;
        v323 = v267;
        v324 = v275;
        v325 = v273;
        v326 = v271;
        v327 = v269;
        v328 = v265;
        if (*(char *)(a6 + 42) != 0) {
            goto lab_0x405f8b;
        } else {
            goto lab_0x406147;
        }
    }
  lab_0x405ac2:
    // 0x405ac2
    v282 = v268;
    v290 = v276;
    v288 = v274;
    v286 = v272;
    v284 = v270;
    v280 = v266;
    if (v138 == 0x4000) {
        goto lab_0x4064b0;
    } else {
        // 0x405ad2
        function_404a30(a1, str3, v276);
        v293 = v268;
        v294 = v276;
        v295 = v274;
        v296 = v272;
        v297 = v270;
        v298 = v266;
        goto lab_0x405ae8;
    }
  lab_0x405818:
    // 0x405818
    v94 = str3;
    v95 = v93;
    v96 = v97;
    v98 = v93;
    v99 = v256;
    v312 = 0;
    if (*v5 == 2) {
        goto lab_0x406af5;
    } else {
        goto lab_0x405823;
    }
  lab_0x406147:;
    // 0x406147
    int64_t v344; // 0x405650
    int64_t v345; // 0x405650
    int64_t v346; // 0x405650
    int32_t v347; // 0x405650
    int32_t v348; // 0x405650
    int32_t v349; // 0x405650
    int64_t v350; // 0x405650
    int64_t v351; // 0x405650
    int64_t v352; // 0x405650
    int128_t v353; // 0x405650
    int128_t v354; // 0x405650
    int128_t v355; // 0x405650
    int64_t v356; // 0x405650
    int64_t v357; // 0x405650
    int64_t v358; // 0x405650
    char v359; // 0x405650
    char v360; // 0x405650
    char v361; // 0x405650
    int64_t v362; // 0x405650
    if (v1 == 1) {
        // 0x4069e8
        v349 = v323;
        v361 = v324;
        v357 = v325;
        v355 = v326;
        v352 = v327;
        v346 = v328;
        v362 = function_409690((int64_t)owner, v11);
        goto lab_0x4062ec;
    } else {
        // 0x406155
        v347 = v323;
        v359 = v324;
        v356 = v325;
        v353 = v326;
        v350 = v327;
        v344 = v328;
        v348 = v323;
        v360 = v324;
        v354 = v326;
        v351 = v327;
        v358 = 0;
        v345 = v328;
        if (*(char *)(a6 + 34) != 0) {
            goto lab_0x406100;
        } else {
            goto lab_0x406167;
        }
    }
  lab_0x405af3:
    // 0x405af3
    v347 = v283;
    v359 = v291;
    v356 = v289;
    v353 = v287;
    v350 = v285;
    v344 = v281;
    int64_t v190; // 0x405650
    int32_t v363; // 0x405650
    int64_t v364; // 0x405650
    int128_t v365; // 0x405650
    int64_t v185; // 0x405650
    int64_t v72; // 0x405650
    int64_t v366; // 0x405650
    char v367; // 0x405650
    if (*(char *)(a6 + 34) != 0) {
        goto lab_0x406100;
    } else {
        // 0x405afe
        v363 = v283;
        v367 = v291;
        v72 = v289;
        v365 = v287;
        v364 = v285;
        v366 = 0;
        v185 = 0x100000000000000 * v289 >> 56;
        v190 = v281;
        goto lab_0x405b16;
    }
  lab_0x4069d0:
    // 0x4069d0
    v338 = v331;
    v342 = v332;
    v341 = v333;
    v340 = v334;
    v339 = v335;
    v337 = v336;
    v343 = function_409690(v330, v11);
    goto lab_0x405fb7;
  lab_0x4064b0:
    // 0x4064b0
    v283 = v282;
    v291 = v290;
    v289 = v288;
    v287 = v286;
    v285 = v284;
    v281 = v280;
    v299 = v282;
    v300 = v290;
    v301 = v288;
    v302 = v286;
    v303 = v284;
    v304 = v280;
    if (*(char *)(a6 + 42) == 0) {
        goto lab_0x405af3;
    } else {
        goto lab_0x405f8b;
    }
  lab_0x406af5:
    // 0x406af5
    v89 = v305;
    int32_t v462 = v305;
    v311 = str3;
    v306 = v305;
    v307 = v462;
    v310 = v192;
    v309 = v256;
    v308 = v312;
    int64_t v222; // 0x405650
    int64_t v221; // 0x405650
    int64_t v220; // 0x405650
    int64_t v219; // 0x405650
    if (v138 == 0xa000) {
        // 0x407890
        v311 = str3;
        v306 = v305;
        v307 = v462;
        v310 = v192;
        v309 = v256;
        v308 = v312;
        if ((owner & 0xf000) != 0xa000) {
            goto lab_0x406b19;
        } else {
            // 0x4078a6
            v6 = a1;
            if ((char)function_40e2f0(a1, str3) != 0) {
                goto lab_0x406b70;
            } else {
                int64_t v463 = v256 % 256; // 0x4078d1
                v94 = str3;
                v95 = v93;
                v96 = v97;
                v98 = v93;
                v99 = v463;
                if (v312 == 0 | *(int32_t *)&v89 != 0) {
                    goto lab_0x405823;
                } else {
                    // 0x4078ed
                    v219 = str3;
                    v220 = 1;
                    v221 = v463;
                    v222 = (int64_t)(*v4 ^ 1);
                    goto lab_0x4078fb;
                }
            }
        }
    } else {
        goto lab_0x406b19;
    }
  lab_0x405823:;
    int64_t v131 = v98;
    int128_t v464; // 0x405650
    int128_t v129 = v464;
    int64_t v127 = v96;
    int32_t v124 = v95;
    int64_t v419; // 0x405650
    int64_t v409; // 0x405650
    int64_t v418; // 0x405650
    int32_t v417; // 0x405650
    int64_t v51; // 0x405650
    int64_t v416; // 0x405650
    int64_t v103; // 0x405650
    int64_t v415; // 0x405650
    if (v138 == 0x4000) {
        // 0x406dd0
        v103 = v94;
        v409 = v99;
        if (*v4 == 0) {
            goto lab_0x40585f;
        } else {
            // 0x406ddb
            v415 = v94;
            v417 = *(int32_t *)(a6 + 8);
            v418 = v99;
            goto lab_0x406ddf;
        }
    } else {
        // 0x405833
        v416 = v94;
        v419 = v99;
        if (*(char *)(a6 + 45) != 0) {
            int64_t v465 = 0; // 0x406a17
            if (*(char *)(a6 + 31) != 0) {
                // 0x406a19
                v465 = 1;
                if (*v4 != 0) {
                    // 0x406a25
                    v465 = v11 != (int64_t)v165;
                }
            }
            // 0x406a38
            v6 = str3;
            int64_t v466 = function_40eb60(str3, v305, v192, v465); // 0x406a54
            v416 = v305;
            v419 = v99 % 256;
            if ((int32_t)v466 < 0) {
                goto lab_0x40583e;
            } else {
                if (a10 != 0) {
                    // 0x406a70
                    *(char *)a10 = 1;
                }
                int64_t v467 = function_4096d0(str3, v150, v11); // 0x406a8c
                if (v467 == 0) {
                    // 0x405f31
                    return 1;
                }
                char v468 = *(char *)(a6 + 46); // 0x406a9a
                v6 = v467;
                if ((char)function_404c10(v467, str3, 1, v468, v397) != 0) {
                    // 0x405f31
                    return 1;
                }
                // 0x406ac2
                v51 = 1;
                if (*(char *)(a6 + 37) == 0) {
                    // 0x405f31
                    return v10 & 0xffffffff;
                }
                goto lab_0x406acd;
            }
        } else {
            goto lab_0x40583e;
        }
    }
  lab_0x405a06:
    // 0x405a06
    v243 = v251;
    v244 = v255;
    v245 = v254;
    v246 = v253;
    v247 = v252;
    v248 = v250;
    int64_t v108; // 0x405650
    if ((*(int32_t *)(v279 + 24) & 0xf000) != 0xa000) {
        goto lab_0x405aac;
    } else {
        // 0x405a19
        v243 = v251;
        v244 = v255;
        v245 = v254;
        v246 = v253;
        v247 = v252;
        v248 = v250;
        if ((char)function_40abf0(*(int64_t *)(a6 + 56), str3, v279) == 0) {
            goto lab_0x405aac;
        } else {
            // 0x405a2d
            function_40dca0(1, 4, str3);
            v6 = 0;
            function_40dca0(0, 4, a1);
            v108 = (int64_t)"will not copy %s through just-created symlink %s";
            goto lab_0x405a68;
        }
    }
  lab_0x406100:;
    int32_t v375 = v347; // 0x406105
    char v376 = v359; // 0x406105
    int64_t v377 = v356; // 0x406105
    int128_t v378 = v353; // 0x406105
    int64_t v379 = v350; // 0x406105
    int64_t v380 = 0; // 0x406105
    int64_t v381 = v344; // 0x406105
    if (*(char *)(a6 + 23) == 0) {
        if (v1 < 2) {
            int32_t v469 = *v5; // 0x4062aa
            v375 = v347;
            v376 = v359;
            v377 = v356;
            v378 = v353;
            v379 = v350;
            v380 = 0;
            v381 = v344;
            if (((char)a7 == 0 || v469 != 3) == (v469 != 4)) {
                goto lab_0x406116;
            } else {
                goto lab_0x4062cb;
            }
        } else {
            goto lab_0x4062cb;
        }
    } else {
        goto lab_0x406116;
    }
  lab_0x405fb7:;
    int32_t v368 = v338; // 0x405fbf
    char v369 = v342; // 0x405fbf
    int64_t v370 = v341; // 0x405fbf
    int128_t v371 = v340; // 0x405fbf
    int64_t v372 = v339; // 0x405fbf
    int64_t v373 = v343; // 0x405fbf
    int64_t v374 = v337; // 0x405fbf
    v375 = v338;
    v376 = v342;
    v377 = v341;
    v378 = v340;
    v379 = v339;
    v380 = 0;
    v381 = v337;
    if (v343 == 0) {
        goto lab_0x406116;
    } else {
        goto lab_0x405fc5;
    }
  lab_0x406b19:;
    int64_t v382 = v308;
    int64_t v383 = v309;
    int64_t v384 = v310;
    int64_t v385 = v306; // 0x407fd2
    int64_t v386 = v311;
    v6 = v307;
    int64_t v387; // 0x405650
    int64_t v209; // 0x405650
    int64_t v388; // 0x405650
    int64_t v211; // 0x405650
    int64_t v389; // 0x405650
    int64_t v210; // 0x405650
    int64_t v208; // 0x405650
    int64_t v390; // 0x405650
    char v391; // 0x407160
    if (v307 == 0) {
        // 0x407160
        v391 = *v4;
        if (v391 != 0) {
            goto lab_0x4074d0;
        } else {
            // 0x40716d
            if (*(char *)(a6 + 21) != 0) {
                goto lab_0x4074d0;
            } else {
                // 0x407178
                v390 = v386;
                v387 = v385;
                v389 = v384;
                v388 = v383;
                v208 = v386;
                v209 = v385;
                v210 = v384;
                v211 = v383;
                if ((*(int32_t *)(v384 + 24) & 0xf000) == 0xa000) {
                    goto lab_0x4071ba;
                } else {
                    goto lab_0x407187;
                }
            }
        }
    } else {
        if ((char)v382 != 0) {
            // 0x407dc5
            v6 = a1;
            int64_t v392 = function_40e2f0(a1, str3); // 0x407dd6
            v219 = str3;
            v220 = 0;
            v221 = v383 % 256;
            v222 = v392 & 0xffffffff ^ 1;
            goto lab_0x4078fb;
        } else {
            int32_t v393 = v93;
            v94 = v386;
            v95 = v393;
            v96 = v97;
            v98 = v93;
            v99 = v383;
            if (*v4 != 0) {
                goto lab_0x405823;
            } else {
                // 0x406b39
                v94 = v386;
                v95 = v393;
                v96 = v97;
                v98 = v93;
                v99 = v383;
                if (*v5 == 2) {
                    goto lab_0x405823;
                } else {
                    // 0x406b44
                    v94 = v386;
                    v95 = v393;
                    v96 = v97;
                    v98 = v93;
                    v99 = v383;
                    if ((*(int32_t *)(v384 + 24) & 0xf000) != 0xa000) {
                        goto lab_0x405823;
                    } else {
                        // 0x406b57
                        v94 = v386;
                        v95 = v393;
                        v96 = v97;
                        v98 = v93;
                        v99 = v383;
                        if ((*(int32_t *)(v385 + 24) & 0xf000) == 0xa000) {
                            goto lab_0x405823;
                        } else {
                            goto lab_0x406b70;
                        }
                    }
                }
            }
        }
    }
  lab_0x4062ec:
    // 0x4062ec
    v375 = v349;
    v376 = v361;
    v377 = v357;
    v378 = v355;
    v379 = v352;
    v380 = 0;
    v381 = v346;
    int64_t v394; // 0x405650
    char v395; // 0x405650
    if (v362 == 0) {
        goto lab_0x406116;
    } else {
        // 0x4062fa
        v368 = v349;
        v369 = v361;
        v370 = v357;
        v371 = v355;
        v372 = v352;
        v373 = v362;
        v374 = v346;
        if (v138 == 0x4000) {
            goto lab_0x405fc5;
        } else {
            char v396 = *(char *)(a6 + 46); // 0x40630a
            v6 = v362;
            v395 = v361;
            v394 = 1;
            if ((char)function_404c10(v362, str3, 1, v396, v397) != 0) {
                // 0x405f31
                return 1;
            }
            goto lab_0x406068;
        }
    }
  lab_0x406167:
    // 0x406167
    v6 = a1;
    char * file_path2 = (char *)str3; // 0x406171
    int64_t v398; // 0x405650
    if (rename(file_path, file_path2) == 0) {
        // 0x406c78
        if (*(char *)(a6 + 46) != 0) {
            // 0x407558
            __printf_chk(1, dcgettext(NULL, "renamed ", 5));
            function_404a30(a1, str3, v360);
        }
        // 0x406c83
        if (*(char *)(a6 + 33) != 0) {
            // 0x407538
            function_4052e0(str3, 0, 1, a6);
        }
        if (a10 != 0) {
            // 0x406c95
            *(char *)a10 = 1;
        }
        // 0x406c9c
        v398 = 1;
        if ((char)a7 != 0) {
            // 0x406ca4
            function_40ab60(*(int64_t *)(a6 + 56), str3, v192);
            v398 = v79;
        }
        // 0x405f31
        return v398 & 0xffffffff;
    }
    int32_t * err_num3 = __errno_location(); // 0x40617e
    int32_t v399 = *err_num3; // 0x406186
    if (v399 == 22) {
        // 0x407958
        function_40dca0(1, 4, g49);
        function_40dca0(0, 4, g50);
        error(0, (int32_t)"cannot move %s to a subdirectory of itself, %s" ^ (int32_t)"cannot move %s to a subdirectory of itself, %s", dcgettext(NULL, "cannot move %s to a subdirectory of itself, %s", 5));
        *v7 = 1;
        // 0x405f31
        return 1;
    }
    int64_t v400; // 0x405650
    if (v399 != 18) {
        // 0x406ec8
        function_40dca0(1, 4, str3);
        v6 = 0;
        function_40dca0(0, 4, a1);
        v400 = (int64_t)"cannot move %s to %s";
        goto lab_0x406c3d;
    } else {
        // 0x40619a
        v6 = str3;
        if (v138 == 0x4000) {
            // 0x406bf0
            v363 = v348;
            v367 = v360;
            v72 = 1;
            v365 = v354;
            v364 = v351;
            v366 = v358;
            v185 = 1;
            v190 = v345;
            if (rmdir(file_path2) == 0) {
                goto lab_0x405b16;
            } else {
                // 0x406bfd
                v363 = v348;
                v367 = v360;
                v72 = 1;
                v365 = v354;
                v364 = v351;
                v366 = v358;
                v185 = 1;
                v190 = v345;
                if (*err_num3 == 2) {
                    goto lab_0x405b16;
                } else {
                    goto lab_0x406c08;
                }
            }
        } else {
            // 0x4061b1
            if (unlink(file_path2) == 0) {
                goto lab_0x4061c5;
            } else {
                // 0x4061ba
                if (*err_num3 != 2) {
                    goto lab_0x406c08;
                } else {
                    goto lab_0x4061c5;
                }
            }
        }
    }
  lab_0x406116:
    // 0x406116
    v348 = v375;
    v360 = v376;
    v354 = v378;
    v351 = v379;
    v358 = v380;
    v345 = v381;
    if (*v4 != 0) {
        goto lab_0x406167;
    } else {
        // 0x40611d
        v363 = v375;
        v367 = v376;
        v72 = v377;
        v365 = v378;
        v364 = v379;
        v366 = v380;
        v185 = 0x100000000000000 * v377 >> 56;
        v190 = v381;
        goto lab_0x405b16;
    }
  lab_0x405b16:;
    int64_t v55 = v366;
    char v53 = v367;
    char * v401 = (char *)(a6 + 43); // 0x405b24
    int32_t v73; // 0x405650
    if (*v401 != 0) {
        // 0x405b2b
        v73 = *(int32_t *)(a6 + 16);
    }
    uint32_t v402 = v73 % 0x1000;
    uint64_t v403 = (int64_t)v402;
    char * v404 = (char *)(a6 + 29); // 0x405b36
    int64_t * v405; // 0x405650
    int64_t * v171; // 0x405650
    int32_t v74; // 0x405b51
    if (*v404 != 0) {
        int32_t v406 = 0x1000000 * (int32_t)v185 >> 24; // 0x4063d0
        v6 = a1;
        if ((char)function_405210(a1, str3, owner, (char)v406, a6) == 0) {
            // 0x405f31
            return v10 & 0xffffffff;
        }
        int64_t * v407 = (int64_t *)(v403 % 64); // 0x406406
        v405 = v407;
        v74 = v406;
        v171 = v407;
        if (v138 != 0x4000) {
            goto lab_0x405b81;
        } else {
            goto lab_0x406412;
        }
    } else {
        if (v138 == 0x4000) {
            // 0x406930
            v6 = a1;
            if ((char)function_405210(a1, str3, owner, (char)v185, a6) == 0) {
                // 0x405f31
                return v10 & 0xffffffff;
            }
            // 0x406956
            v171 = (int64_t *)(v403 & 18);
            goto lab_0x406412;
        } else {
            // 0x405b51
            v74 = 0x1000000 * (int32_t)v185 >> 24;
            v6 = a1;
            v405 = NULL;
            if ((char)function_405210(a1, str3, owner, (char)v74, a6) == 0) {
                // 0x405f31
                return v10 & 0xffffffff;
            }
            goto lab_0x405b81;
        }
    }
  lab_0x405fc5:
    // 0x405fc5
    if ((char)function_40e2f0(a1, v373) != 0) {
        // 0x407380
        function_40dca0(1, 4, g49);
        function_40dca0(0, 4, g50);
        char * format8 = dcgettext(NULL, "cannot copy a directory, %s, into itself, %s", 5); // 0x4073bb
        v6 = 0;
        error(0, (int32_t)"cannot copy a directory, %s, into itself, %s" ^ (int32_t)"cannot copy a directory, %s, into itself, %s", format8);
        *v7 = 1;
        v395 = v369;
        v394 = (int64_t)format8;
        goto lab_0x406068;
    } else {
        // 0x405fdc
        if ((char)function_40e2f0(str3, v373) != 0) {
            // 0x407bd0
            function_40dd80(4, g50);
            error(0, (int32_t)"warning: source directory %s specified more than once" ^ (int32_t)"warning: source directory %s specified more than once", dcgettext(NULL, "warning: source directory %s specified more than once", 5));
            if (a10 != 0 != *v4 != 0) {
                // 0x405f31
                return 1;
            }
            // 0x406e6b
            *(char *)a10 = 1;
            // 0x405f31
            return 1;
        }
        int32_t v408 = *v5; // 0x405ff7
        v375 = v368;
        v376 = v369;
        v377 = v370;
        v378 = v371;
        v379 = v372;
        v380 = v373;
        v381 = v374;
        if (v408 == 4) {
            goto lab_0x406116;
        } else {
            if (v408 != 3) {
                goto lab_0x406011;
            } else {
                // 0x406009
                v375 = v368;
                v376 = v369;
                v377 = v370;
                v378 = v371;
                v379 = v372;
                v380 = v373;
                v381 = v374;
                if ((char)a7 != 0) {
                    goto lab_0x406116;
                } else {
                    goto lab_0x406011;
                }
            }
        }
    }
  lab_0x40585f:
    // 0x40585f
    if ((char)v127 != 0) {
        // 0x405f31
        return 1;
    }
    int64_t v105 = v409 & 0xffffffff ^ 1; // 0x405875
    int64_t v410; // 0x405650
    int64_t v106; // 0x405650
    int64_t v236; // 0x405650
    int64_t v235; // 0x405650
    int64_t v104; // 0x405650
    int64_t v234; // 0x405650
    int64_t v102; // 0x405650
    int64_t v233; // 0x405650
    int64_t v232; // 0x405650
    int64_t v107; // 0x407ab5
    if ((owner & 0xf000) == 0x4000) {
        // 0x4075c0
        v233 = v103;
        v235 = v105;
        if (v138 == 0x4000) {
            goto lab_0x405900;
        } else {
            // 0x4075d0
            if (*v4 == 0) {
                goto lab_0x407ee5;
            } else {
                uint32_t v411 = *(int32_t *)&v89; // 0x4075db
                v102 = v103;
                v104 = v105;
                v106 = v411;
                if (v411 == 0) {
                    goto lab_0x407ee5;
                } else {
                    goto lab_0x407600;
                }
            }
        }
    } else {
        if (v138 == 0x4000) {
            // 0x407aaa
            if (*v4 == 0) {
                goto lab_0x407e01;
            } else {
                uint32_t v412 = *(int32_t *)&v89; // 0x407ab5
                if (v412 == 0) {
                    goto lab_0x407e01;
                } else {
                    // 0x407ac2
                    v107 = v412;
                    v410 = v107;
                    if ((char)a7 != 0) {
                        goto lab_0x4058a4;
                    } else {
                        goto lab_0x407d38;
                    }
                }
            }
        } else {
            int64_t v413 = (int64_t)*(int32_t *)&v89; // 0x40589c
            v410 = v413;
            v232 = v103;
            v234 = v105;
            v236 = v413;
            if ((char)a7 == 0) {
                goto lab_0x405904;
            } else {
                goto lab_0x4058a4;
            }
        }
    }
  lab_0x40583e:;
    int32_t v414 = *(int32_t *)(a6 + 8); // 0x405843
    v415 = v416;
    v417 = v414;
    v418 = v419;
    if (*v4 != 0) {
        goto lab_0x406ddf;
    } else {
        // 0x40584d
        v103 = v416;
        v409 = v419;
        switch (v414) {
            case 2: {
                int64_t v420 = v398;
                return v420 & 0xffffffff;
            }
            case 3: {
                // 0x407c79
                v6 = a6;
                int64_t v421 = function_404ae0(a6, str3, v305 + 24); // 0x407c95
                v103 = str3;
                v409 = v419 % 256;
                if ((char)v421 == 0) {
                    // 0x405f31
                    return 1;
                }
                // break -> 0x40585f
                break;
            }
        }
        goto lab_0x40585f;
    }
  lab_0x4062cb:
    // 0x4062cb
    v349 = v347;
    v361 = v359;
    v357 = v356;
    v355 = v353;
    v352 = v350;
    v346 = v344;
    v362 = function_4096d0(str3, (int64_t)owner, v11);
    goto lab_0x4062ec;
  lab_0x406b70:
    // 0x406b70
    function_40dca0(1, 4, str3);
    v6 = 0;
    function_40dca0(0, 4, a1);
    v108 = (int64_t)"%s and %s are the same file";
    goto lab_0x405a68;
  lab_0x4074d0:;
    int32_t v454 = v93;
    v94 = v386;
    v95 = v454;
    v96 = v97;
    v98 = v93;
    v99 = v383;
    int64_t v229; // 0x405650
    int64_t v231; // 0x405650
    int64_t v230; // 0x405650
    int64_t v228; // 0x405650
    if ((*(int32_t *)(v385 + 24) & 0xf000) == 0xa000) {
        goto lab_0x405823;
    } else {
        if ((char)v382 == 0) {
            goto lab_0x4074f4;
        } else {
            // 0x4074e9
            if (*(int64_t *)(v385 + 16) < 2) {
                goto lab_0x4074f4;
            } else {
                // 0x407fc1
                v6 = a1;
                int64_t v455 = function_40e2f0(a1, str3); // 0x407fe0
                int64_t v456 = 0x100000000 * v385 >> 32; // 0x407fec
                v89 = v456;
                int64_t v457 = v383 % 256; // 0x407ff5
                if ((char)v455 == 0) {
                    // 0x4087a2
                    v219 = str3;
                    v220 = v455;
                    v221 = v457;
                    v222 = (int64_t)(*v4 ^ 1);
                    goto lab_0x4078fb;
                } else {
                    int64_t v458 = 0x100000000000000 * v384 >> 56; // 0x407fe5
                    v390 = str3;
                    v387 = v456;
                    v389 = v458;
                    v388 = v457;
                    v228 = str3;
                    v229 = v456;
                    v230 = v458;
                    v231 = v457;
                    if ((*(int32_t *)(v458 + 24) & 0xf000) != 0xa000) {
                        goto lab_0x407187;
                    } else {
                        goto lab_0x40719b;
                    }
                }
            }
        }
    }
  lab_0x406ddf:;
    int64_t v459 = v418; // 0x405650
    switch (v417) {
        case 2: {
            goto lab_0x406e60;
        }
        case 3: {
            goto lab_0x406e26;
        }
        default: {
            // 0x406de9
            v103 = v415;
            v409 = v418;
            if (v417 != 4) {
                goto lab_0x40585f;
            } else {
                // 0x406df2
                v103 = v415;
                v409 = v418;
                if (*(char *)(a6 + 47) == 0) {
                    goto lab_0x40585f;
                } else {
                    // 0x406dfd
                    v6 = str3;
                    int64_t v460 = function_404890(str3, owner); // 0x406e11
                    int64_t v461 = v418 % 256; // 0x406e16
                    v103 = owner;
                    v409 = v461;
                    v459 = v461;
                    if ((char)v460 != 0) {
                        goto lab_0x40585f;
                    } else {
                        goto lab_0x406e26;
                    }
                }
            }
        }
    }
  lab_0x405a68:
    // 0x405a68
    v6 = 0;
    // 0x405a78
    error(0, 0, dcgettext(NULL, (char *)v108, 5));
    // 0x405f31
    return 0;
  lab_0x406c3d:
    // 0x406c3d
    error(0, *err_num3, dcgettext(NULL, (char *)v400, 5));
    function_409640((int64_t)owner, v11);
    // 0x405f31
    return v10 & 0xffffffff;
  lab_0x405b81:;
    int64_t * v41 = v405;
    char v422 = *(char *)(a6 + 44); // 0x405b81
    int64_t v50; // 0x405650
    int64_t v69; // 0x405650
    int64_t v48; // 0x405650
    int64_t v49; // 0x405650
    int64_t v36; // 0x405650
    int64_t v47; // 0x405650
    int64_t v46; // 0x405650
    int64_t v59; // 0x405650
    int64_t v423; // 0x405650
    int64_t v45; // 0x405650
    int64_t v35; // 0x405650
    int64_t v42; // 0x405650
    int64_t v43; // 0x405650
    int64_t v44; // 0x405650
    int64_t * v40; // 0x405650
    int64_t v38; // 0x405650
    char v39; // 0x4064c0
    int64_t v424; // 0x405ba1
    bool v425; // 0x405650
    int64_t str7; // 0x407a35
    int32_t v426; // 0x408179
    if (v422 == 0) {
        // 0x4064c0
        v39 = *(char *)(a6 + 23);
        if (v39 != 0) {
            int64_t v427 = (int64_t)*(char *)(a6 + 22); // 0x406bb7
            v6 = a1;
            int64_t v428 = function_404c10(a1, str3, v427, 0, v397); // 0x406bc8
            v38 = 0;
            v40 = v41;
            v42 = v72;
            v43 = 0x100000000000000 * v428 >> 56;
            v44 = 0;
            v45 = v427;
            v46 = v79;
            v47 = 0;
            v48 = a1;
            v49 = v10;
            v35 = v427;
            v36 = v10;
            if ((char)v428 != 0) {
                goto lab_0x405c05;
            } else {
                goto lab_0x4065d0;
            }
        } else {
            // 0x4064d3
            v59 = owner;
            if (v138 == 0x8000) {
                goto lab_0x406f08;
            } else {
                unsigned char v429 = *(char *)(a6 + 20) & (char)(v138 != 0xa000); // 0x4064ed
                if (v429 != 0) {
                    goto lab_0x406f08;
                } else {
                    int64_t v430 = v429; // 0x4064ed
                    if (v138 == 0x1000) {
                        // 0x407cc5
                        v6 = 0;
                        v86 = 0;
                        uint32_t v431 = owner & -1 - (int32_t)(int64_t)v41; // 0x407ce8
                        int64_t v432 = v431; // 0x407cee
                        char * pathname = (char *)str3; // 0x407cf3
                        int32_t v433 = __xmknod(0, pathname, v431, (int32_t *)&v86); // 0x407cf3
                        v38 = v430;
                        v40 = v41;
                        v42 = v72;
                        v43 = 1;
                        v44 = v430;
                        v45 = v432;
                        v46 = v79;
                        v47 = v430;
                        v48 = a1;
                        v49 = v10;
                        if (v433 != 0) {
                            // 0x40812c
                            v6 = str3;
                            v38 = v430;
                            v40 = v41;
                            v42 = v72;
                            v43 = 1;
                            v44 = v430;
                            v45 = v432;
                            v46 = v79;
                            v47 = v430;
                            v48 = a1;
                            v49 = v10;
                            if (mkfifo(pathname, v431 & -0x1001) == 0) {
                                goto lab_0x405c05;
                            } else {
                                // 0x408151
                                v6 = 4;
                                function_40dd80(4, str3);
                                v69 = (int64_t)"cannot create fifo %s";
                                goto lab_0x4065b0;
                            }
                        } else {
                            goto lab_0x405c05;
                        }
                    } else {
                        if ((owner & 0xb000) != 0x2000 && v138 != 0xc000) {
                            if (v138 != 0xa000) {
                                // 0x407d78
                                v6 = 4;
                                function_40dd80(4, a1);
                                v50 = (int64_t)"%s has unknown file type";
                                goto lab_0x406472;
                            } else {
                                // 0x407a2b
                                str7 = function_409e80(a1, v1);
                                if (str7 == 0) {
                                    // 0x4087c0
                                    v6 = 4;
                                    function_40dd80(4, a1);
                                    v69 = (int64_t)"cannot read symbolic link %s";
                                    goto lab_0x4065b0;
                                } else {
                                    int64_t v434 = function_409c90(str7, 0xffffff9c, str3, *(char *)(a6 + 22)); // 0x407a5a
                                    v423 = str3;
                                    if ((int32_t)v434 < 0) {
                                        // 0x408174
                                        v426 = *__errno_location();
                                        v423 = str3;
                                        if (v426 == 0) {
                                            goto lab_0x407a67;
                                        } else {
                                            // 0x408189
                                            if ((char)v72 == 0 == *(char *)(a6 + 45) == 1) {
                                                if ((owner & 0xf000) != 0xa000) {
                                                    goto lab_0x40819d;
                                                } else {
                                                    // 0x4090ab
                                                    v6 = str7;
                                                    int64_t v435 = str7; // 0x4090c0
                                                    int64_t v436 = -1; // 0x4090c0
                                                    int64_t v437 = 0; // 0x4090c0
                                                    while (v436 != 0) {
                                                        int64_t v438 = v435;
                                                        v435 = v438 + (v425 ? -1 : 1);
                                                        v6 = v435;
                                                        v436--;
                                                        v437 = v436;
                                                        if (*(char *)v438 == 0) {
                                                            // break -> 
                                                            break;
                                                        }
                                                        v437 = 0;
                                                    }
                                                    if (v1 != -2 - v437) {
                                                        goto lab_0x40819d;
                                                    } else {
                                                        int64_t str6 = function_409e80(str3, v1); // 0x4090d9
                                                        if (str6 == 0) {
                                                            goto lab_0x40819d;
                                                        } else {
                                                            int32_t strcmp_rc = strcmp((char *)str6, (char *)str7); // 0x4090f4
                                                            int64_t v439 = 0x100000000 * str6 >> 32; // 0x4090f9
                                                            v6 = v439;
                                                            free((int64_t *)v439);
                                                            v423 = v439;
                                                            if (strcmp_rc != 0) {
                                                                goto lab_0x40819d;
                                                            } else {
                                                                goto lab_0x407a67;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                goto lab_0x40819d;
                                            }
                                        }
                                    } else {
                                        goto lab_0x407a67;
                                    }
                                }
                            }
                        } else {
                            // 0x406541
                            v6 = 0;
                            int64_t v440 = ((int64_t)v41 ^ 0xffffffff) & v59; // 0x406560
                            int32_t v441 = __xmknod(0, (char *)str3, (int32_t)v440, (int32_t *)&v86); // 0x406569
                            v38 = v430;
                            v40 = v41;
                            v42 = v72;
                            v43 = 1;
                            v44 = v430;
                            v45 = v440;
                            v46 = v79;
                            v47 = v430;
                            v48 = a1;
                            v49 = v10;
                            if (v441 == 0) {
                                goto lab_0x405c05;
                            } else {
                                // 0x40658c
                                v6 = 4;
                                function_40dd80(4, str3);
                                v69 = (int64_t)"cannot create special file %s";
                                goto lab_0x4065b0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        // 0x405b94
        if (*(char *)&v6 == 47) {
            goto lab_0x405bcd;
        } else {
            // 0x405b9a
            v424 = function_40a920();
            v6 = v424;
            int64_t v442 = v425 ? -1 : 1; // 0x405bb6
            int64_t v443 = v424; // 0x405bb6
            int64_t v444 = (int64_t)"."; // 0x405650
            int64_t v445 = 2; // 0x405bb6
            unsigned char v446 = *(char *)v444; // 0x405bb6
            char v447 = *(char *)v443; // 0x405bb6
            v443 += v442;
            v6 = v443;
            char v448 = v447; // 0x405bb6
            bool v449 = false; // 0x405bb6
            while (v446 == v447) {
                v445--;
                v444 += v442;
                v448 = v446;
                v449 = true;
                if (v445 == 0) {
                    // break -> 
                    break;
                }
                v446 = *(char *)v444;
                v447 = *(char *)v443;
                v443 += v442;
                v6 = v443;
                v448 = v447;
                v449 = false;
            }
            unsigned char v450 = v448;
            if ((v446 >= v450 && !v449) != v446 < v450) {
                // 0x407450
                if (__xstat(1, ".", (struct stat *)&v70) != 0) {
                    // 0x405bc5
                    free((int64_t *)v424);
                    goto lab_0x405bcd;
                } else {
                    // 0x40746e
                    if (__xstat(1, (char *)v424, (struct stat *)&v86) != 0) {
                        // 0x405bc5
                        free((int64_t *)v424);
                        goto lab_0x405bcd;
                    } else {
                        // 0x4086ca
                        if (v86 != (int64_t)v70) {
                            goto lab_0x40749e;
                        } else {
                            // 0x405bc5
                            free((int64_t *)v424);
                            goto lab_0x405bcd;
                        }
                    }
                }
            } else {
                // 0x405bc5
                free((int64_t *)v424);
                goto lab_0x405bcd;
            }
        }
    }
  lab_0x406412:;
    int64_t v451 = owner; // 0x40641a
    if (a5 != 0) {
        if (*(int64_t *)(a5 + 8) == v451) {
            // 0x406452
            if (*(int64_t *)(a5 + 16) == v11) {
                // 0x406458
                v6 = 4;
                function_40dd80(4, a1);
                v50 = (int64_t)"cannot copy cyclic symbolic link %s";
                goto lab_0x406472;
            }
        }
        int64_t v452 = *(int64_t *)a5; // 0x406440
        while (v452 != 0) {
            int64_t v453 = v452;
            if (*(int64_t *)(v453 + 8) == v451) {
                // 0x406452
                if (*(int64_t *)(v453 + 16) == v11) {
                    // 0x406458
                    v6 = 4;
                    function_40dd80(4, a1);
                    v50 = (int64_t)"cannot copy cyclic symbolic link %s";
                    goto lab_0x406472;
                }
            }
            // 0x406440
            v452 = *(int64_t *)v453;
        }
    }
    int64_t v184 = v190 - 17 & -16; // 0x406618
    *(int64_t *)v184 = a5;
    *(int64_t *)(v184 | 8) = v451;
    *(int64_t *)(v184 + 16) = v11;
    int64_t * v170; // 0x405650
    int64_t v169; // 0x405650
    int64_t v168; // 0x405650
    if ((owner & 0xf000) == 0x4000 == (char)v72 == 0) {
        // 0x407830
        v168 = 0;
        v170 = NULL;
        if ((*(int64_t *)(a6 + 32) & 0xff000000ff00) != 0) {
            // 0x407d97
            v6 = str3;
            v168 = 0;
            v170 = NULL;
            if ((char)function_4052e0(str3, *(char *)(a6 + 37), 0, a6) != 0) {
                goto lab_0x40674f;
            } else {
                // 0x407db5
                v35 = 0;
                v36 = v10;
                v168 = 0;
                v170 = NULL;
                if (*(char *)(a6 + 38) == 0) {
                    goto lab_0x40674f;
                } else {
                    goto lab_0x4065d0;
                }
            }
        } else {
            goto lab_0x40674f;
        }
    } else {
        char * path = (char *)str3; // 0x40665f
        if (mkdir(path, v402 & -1 - (int32_t)(int64_t)v171) != 0) {
            // 0x407598
            v6 = 4;
            function_40dd80(4, str3);
            v69 = (int64_t)"cannot create directory %s";
            goto lab_0x4065b0;
        } else {
            // 0x40666c
            v6 = 1;
            if (__lxstat(1, path, (struct stat *)&v165) != 0) {
                // 0x407c23
                v6 = 4;
                function_40dd80(4, str3);
                v69 = (int64_t)"cannot stat %s";
                goto lab_0x4065b0;
            } else {
                // 0x40668c
                v169 = 0;
                if ((owner & 448) == 448) {
                    goto lab_0x4066d4;
                } else {
                    // 0x4066a9
                    v6 = str3;
                    v169 = 1;
                    if (chmod(path, owner || 448) != 0) {
                        // 0x408070
                        v6 = 4;
                        function_40dd80(4, str3);
                        v69 = (int64_t)"setting permissions for %s";
                        goto lab_0x4065b0;
                    } else {
                        goto lab_0x4066d4;
                    }
                }
            }
        }
    }
  lab_0x406068:;
    char v52 = v395; // 0x40606d
    int64_t v54 = v10; // 0x40606d
    v51 = v394;
    if (*(char *)(a6 + 37) != 0) {
        goto lab_0x406acd;
    } else {
        goto lab_0x406073;
    }
  lab_0x4078fb:
    // 0x4078fb
    if ((char)v222 == 0) {
        goto lab_0x406b70;
    } else {
        // 0x407904
        v94 = v219;
        v95 = v93;
        v96 = 0x100000000000000 * v220 >> 56;
        v98 = v93;
        v99 = v221;
        goto lab_0x405823;
    }
  lab_0x405900:
    // 0x405900
    v232 = v233;
    v234 = v235;
    v236 = (int64_t)*(int32_t *)&v89;
    goto lab_0x405904;
  lab_0x406e60:
    // 0x406e60
    if (a10 == 0) {
        // 0x405f31
        return 1;
    }
    // 0x406e6b
    *(char *)a10 = 1;
    // 0x405f31
    return 1;
  lab_0x406e26:
    // 0x406e26
    v6 = a6;
    int64_t v478 = function_404ae0(a6, str3, v305 + 24); // 0x406e42
    v103 = str3;
    v409 = v459 % 256;
    if ((char)v478 != 0) {
        goto lab_0x40585f;
    } else {
        goto lab_0x406e60;
    }
  lab_0x406acd:
    // 0x406acd
    function_4049f0(v6);
    v473 = v51;
    goto lab_0x406ad8;
  lab_0x4061c5:;
    unsigned char v479 = *(char *)(a6 + 46) % 2; // 0x4061d2
    v363 = v348;
    v367 = v360;
    v72 = 1;
    v365 = v354;
    v364 = v351;
    v366 = v358;
    v185 = 1;
    v190 = v345;
    if (v479 != 0) {
        // 0x407910
        __printf_chk(1, dcgettext(NULL, "copied ", 5));
        function_404a30(a1, str3, v360);
        v363 = v348;
        v367 = v360;
        v72 = v479;
        v365 = v354;
        v364 = v351;
        v366 = v358;
        v185 = 1;
        v190 = v345;
    }
    goto lab_0x405b16;
  lab_0x406073:;
    int64_t file_path3 = v52; // 0x406073
    v6 = file_path3;
    if (v52 == 0) {
        // 0x405f31
        return v54 & 0xffffffff;
    }
    // 0x406083
    if (rename((char *)file_path3, (char *)str3) != 0) {
        // 0x406e80
        function_40dd80(4, str3);
        error(0, *__errno_location(), dcgettext(NULL, "cannot un-backup %s", 5));
        // 0x405f31
        return v54 & 0xffffffff;
    }
    // 0x406097
    if (*(char *)(a6 + 46) != 0) {
        // 0x4060a2
        function_40dca0(1, 4, str3);
        function_40dca0(0, 4, file_path3);
        __printf_chk(1, dcgettext(NULL, "%s -> %s (unbackup)\n", 5));
    }
    // 0x405f31
    return v54 & 0xffffffff;
  lab_0x406011:
    // 0x406011
    function_40dca0(1, 4, v373);
    function_40dca0(0, 4, str3);
    char * format10 = dcgettext(NULL, "will not create hard link %s to directory %s", 5); // 0x40604c
    v6 = 0;
    error(0, (int32_t)"will not create hard link %s to directory %s" ^ (int32_t)"will not create hard link %s to directory %s", format10);
    v395 = v369;
    v394 = (int64_t)format10;
    goto lab_0x406068;
  lab_0x4074f4:;
    int64_t v207 = v386; // 0x407501
    int64_t v205 = v385; // 0x407501
    char v212 = v391; // 0x407501
    int64_t v203 = v384; // 0x407501
    int64_t v201 = v383; // 0x407501
    int64_t v223 = v386; // 0x407501
    int32_t v224 = v454; // 0x407501
    int64_t v227 = v385; // 0x407501
    int64_t v226 = v384; // 0x407501
    int64_t v225 = v383; // 0x407501
    if ((*(int32_t *)(v384 + 24) & 0xf000) == 0xa000) {
        goto lab_0x4071a0;
    } else {
        goto lab_0x407507;
    }
  lab_0x4071ba:;
    int64_t v91 = v211;
    int64_t v84 = v210;
    int64_t v88 = v209; // 0x407df3
    int64_t v101 = v208;
    if (*(char *)(a6 + 44) != 0) {
        goto lab_0x407df0;
    } else {
        // 0x4071c5
        if ((*(int32_t *)(a6 + 20) & -0xff0100) == 0) {
            goto lab_0x4071e3;
        } else {
            // 0x4071cf
            if ((*(int32_t *)(v88 + 24) & 0xf000) == 0xa000) {
                goto lab_0x407df0;
            } else {
                goto lab_0x4071e3;
            }
        }
    }
  lab_0x407187:;
    int64_t v480 = v388;
    int64_t v481 = v389;
    int64_t v482 = v387; // 0x407187
    int64_t v483 = v390;
    v228 = v483;
    v229 = v482;
    v230 = v481;
    v231 = v480;
    if ((*(int32_t *)(v482 + 24) & 0xf000) != 0xa000) {
        // 0x407187
        v223 = v483;
        v224 = v93;
        v227 = v482;
        v226 = v481;
        v225 = v480;
        goto lab_0x407507;
    } else {
        goto lab_0x40719b;
    }
  lab_0x405904:;
    unsigned char v237 = *v4; // 0x405904
    int64_t v117; // 0x405650
    int64_t v136; // 0x405650
    int64_t v112; // 0x405650
    int64_t v133; // 0x405650
    int64_t v110; // 0x405650
    if (v237 != 0) {
        // 0x407baf
        uint32_t v238; // 0x405650
        if ((v238 & 0xf000) == 0x4000 || v138 != 0x4000) {
            // 0x407bc5
            v123 = v124;
            v125 = 0;
            v126 = v127;
            v128 = v129;
            v130 = v131;
            int64_t v239; // 0x405650
            v132 = v239;
            v134 = v135;
            int64_t v240; // 0x405650
            v102 = v240;
            v104 = v239;
            int64_t v241; // 0x405650
            v106 = v241;
            if (v241 == 0) {
                goto lab_0x405aa4;
            } else {
                goto lab_0x407600;
            }
        } else {
            goto lab_0x407d38;
        }
    } else {
        // 0x405911
        v136 = v237;
        v133 = v234;
        v110 = v232;
        v112 = v234;
        v117 = v236;
        if (v236 != 0) {
            goto lab_0x407b68;
        } else {
            goto lab_0x40591a;
        }
    }
  lab_0x407ee5:
    // 0x407ee5
    v6 = 4;
    function_40dd80(4, str3);
    v242 = (int64_t)"cannot overwrite directory %s with non-directory";
    goto lab_0x406992;
  lab_0x407e01:
    // 0x407e01
    function_40dca0(1, 4, a1);
    v6 = 0;
    function_40dca0(0, 4, str3);
    v108 = (int64_t)"cannot overwrite non-directory %s with directory %s";
    goto lab_0x405a68;
  lab_0x4058a4:
    // 0x4058a4
    if (v410 == 3) {
        // 0x407b5d
        v102 = v103;
        v104 = v105;
        v106 = 3;
        v110 = v103;
        v112 = v105;
        v117 = 3;
        if (*v4 != 0) {
            goto lab_0x407600;
        } else {
            goto lab_0x407b68;
        }
    } else {
        int64_t v474 = *(int64_t *)(a6 + 56); // 0x4058ae
        v6 = v474;
        int64_t v475 = function_40abf0(v474, str3, v305); // 0x4058c6
        v233 = str3;
        v235 = v105 % 256;
        if ((char)v475 != 0) {
            // 0x4081f3
            function_40dca0(1, 4, a1);
            v6 = 0;
            function_40dca0(0, 4, str3);
            v108 = (int64_t)"will not overwrite just-created %s with %s";
            goto lab_0x405a68;
        } else {
            goto lab_0x405900;
        }
    }
  lab_0x406c08:
    // 0x406c08
    function_40dca0(1, 4, str3);
    v6 = 0;
    function_40dca0(0, 4, a1);
    v400 = (int64_t)"inter-device move failed: %s to %s; unable to remove target";
    goto lab_0x406c3d;
  lab_0x405bcd:;
    int64_t v476 = v422; // 0x405b86
    v6 = a1;
    int64_t v477 = function_409c90(a1, 0xffffff9c, str3, *(char *)(a6 + 22)); // 0x405be1
    v38 = 0;
    v40 = v41;
    v42 = v72;
    v43 = v476;
    v44 = v476;
    v45 = str3;
    v46 = v79;
    v47 = 0;
    v48 = a1;
    v49 = v10;
    if ((int32_t)v477 < 0) {
        // 0x4079be
        function_40dca0(1, 4, a1);
        function_40dca0(0, 4, str3);
        char * format9 = dcgettext(NULL, "cannot create symbolic link %s to %s", 5); // 0x4079f5
        int32_t err_num4 = *__errno_location(); // 0x407a0b
        v6 = 0;
        error(0, err_num4, format9);
        v35 = (int64_t)format9;
        v36 = v10;
        goto lab_0x4065d0;
    } else {
        goto lab_0x405c05;
    }
  lab_0x40674f:;
    int128_t v172 = __asm_movdqu(*(int128_t *)&v89); // 0x40674f
    int128_t v173 = __asm_movdqu(*(int128_t *)(a6 + 16)); // 0x406755
    int128_t v174 = __asm_movdqu(*(int128_t *)(a6 + 32)); // 0x406763
    int128_t v175 = __asm_movdqu(*(int128_t *)(a6 + 48)); // 0x406769
    v86 = __asm_movaps(v172);
    __asm_movaps(v173);
    __asm_movaps(v174);
    __asm_movaps(v175);
    int64_t v176 = function_40e7f0(a1, 2); // 0x406793
    int32_t length2; // bp-680, 0x405650
    int32_t v177; // 0x405650
    int32_t v167; // 0x405650
    if (v176 == 0) {
        // 0x408022
        function_40dd80(4, a1);
        char * format6 = dcgettext(NULL, "cannot access %s", 5); // 0x408042
        int32_t * err_num2 = __errno_location(); // 0x40804a
        v6 = 0;
        error(0, *err_num2, format6);
        v177 = v167;
        v38 = v168;
        v40 = v170;
        v42 = v72;
        v43 = 0;
        v44 = 0;
        v45 = (int64_t)format6;
        v46 = v79;
        v47 = 0;
        v48 = a1;
        v49 = v10;
    } else {
        // 0x4067a8
        int64_t v178; // 0x405650
        uint32_t v179; // 0x405650
        char * v180; // 0x405650
        int64_t v181; // 0x4068ba
        if (*(char *)v176 == 0) {
            // branch -> 0x40690b
        } else {
            int64_t v182 = &v86;
            int64_t v183 = 0x100000000 * v184 >> 32;
            v179 = 0x1000000 * (int32_t)v185 >> 24;
            v180 = (char *)a8;
            int64_t v186 = 0; // 0x406825
            int64_t str5 = v176; // 0x40683f
            int64_t v187 = function_40aeb0(); // 0x40685b
            int64_t v188 = function_40aeb0(); // 0x40686f
            char v189 = *v180; // 0x40689c
            *(int64_t *)(v190 - 40) = 0;
            *(int64_t *)(v190 - 48) = (int64_t)&length2;
            *(int64_t *)(v190 - 56) = (int64_t)&v70;
            *(int64_t *)(v190 - 64) = 0;
            v70 = v189;
            int64_t v191 = function_405650(v187, v188, (char)v179, v192, v183, v182, (int64_t)v189, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76); // 0x4068b5
            v181 = 0x100000000000000 * (v191 & 1) >> 56;
            *v7 = *v7 | (char)length2;
            free((int64_t *)v188);
            free((int64_t *)v187);
            while ((char)length2 == 0) {
                // 0x406830
                v186 = v70 | (char)v186;
                str5 = str5 + 1 + (int64_t)strlen((char *)str5);
                v178 = v186;
                if (*(char *)str5 == 0) {
                    // break -> 0x4068ec
                    break;
                }
                v187 = function_40aeb0();
                v188 = function_40aeb0();
                v189 = *v180;
                *(int64_t *)(v190 - 40) = 0;
                *(int64_t *)(v190 - 48) = (int64_t)&length2;
                *(int64_t *)(v190 - 56) = (int64_t)&v70;
                *(int64_t *)(v190 - 64) = 0;
                v70 = v189;
                v191 = function_405650(v187, v188, (char)v179, v192, v183, v182, (int64_t)v189, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76);
                v181 = 0x100000000000000 * (v191 & v181) >> 56;
                *v7 = *v7 | (char)length2;
                free((int64_t *)v188);
                free((int64_t *)v187);
            }
        }
        // 0x40690b
        v6 = v176;
        free((int64_t *)v176);
        *v180 = (char)(v178 & 0xffffffff);
        v177 = v167;
        v38 = v168;
        v40 = v170;
        v42 = v72;
        v43 = v181;
        v44 = 0;
        v45 = v179;
        v46 = v79;
        v47 = 0;
        v48 = a1;
        v49 = v10 % 256;
    }
    goto lab_0x405c05;
  lab_0x4071a0:;
    int64_t v200 = v201;
    int64_t v202 = v203;
    int64_t v204 = v205; // 0x4080b9
    int64_t v206 = v207;
    v208 = v206;
    v209 = v204;
    v210 = v202;
    v211 = v200;
    if (v138 == 0xa000 == (v212 != 0)) {
        // 0x4080a4
        v208 = v206;
        v209 = v204;
        v210 = v202;
        v211 = v200;
        if (*(int64_t *)(v204 + 16) < 2) {
            goto lab_0x4071ba;
        } else {
            // 0x4080af
            v6 = a1;
            char * v213 = canonicalize_file_name(file_path); // 0x4080c7
            int64_t v214 = 0x100000000 * v204 >> 32; // 0x4080d3
            v89 = v214;
            int64_t v215 = v200 % 256; // 0x4080dd
            v208 = v206;
            v209 = v214;
            v210 = 0x100000000000000 * v202 >> 56;
            v211 = v215;
            if (v213 == NULL) {
                goto lab_0x4071ba;
            } else {
                int64_t v216 = (int64_t)v213; // 0x4080c7
                int64_t v217 = function_40e2f0(v216, str3); // 0x408103
                int64_t v218 = 0x100000000000000 * v216 >> 56; // 0x408108
                v6 = v218;
                free((int64_t *)v218);
                v219 = str3;
                v220 = (int32_t)&g76 ^ (int32_t)&g76;
                v221 = v215;
                v222 = v217 & 0xffffffff ^ 1;
                goto lab_0x4078fb;
            }
        }
    } else {
        goto lab_0x4071ba;
    }
  lab_0x407507:
    // 0x407507
    v94 = v223;
    v95 = v224;
    v96 = v97;
    v98 = v93;
    v99 = v225;
    if (*(int64_t *)(v226 + 8) != *(int64_t *)(v227 + 8)) {
        goto lab_0x405823;
    } else {
        // 0x407515
        v94 = v223;
        v95 = v224;
        v96 = v97;
        v98 = v93;
        v99 = v225;
        if (*(int64_t *)v226 != *(int64_t *)v227) {
            goto lab_0x405823;
        } else {
            // 0x407521
            v94 = v223;
            v95 = v224;
            v96 = 1;
            v98 = v93;
            v99 = v225;
            v228 = v223;
            v229 = v227;
            v230 = v226;
            v231 = v225;
            if (*(char *)(a6 + 23) == 0) {
                goto lab_0x40719b;
            } else {
                goto lab_0x405823;
            }
        }
    }
  lab_0x407df0:
    // 0x407df0
    v219 = v101;
    v220 = 0;
    v221 = v91;
    v222 = *(int64_t *)v88 == *(int64_t *)v84;
    goto lab_0x4078fb;
  lab_0x40719b:
    // 0x40719b
    v207 = v228;
    v205 = v229;
    v212 = *v4;
    v203 = v230;
    v201 = v231;
    goto lab_0x4071a0;
  lab_0x407600:;
    int64_t v484 = function_40aa00(a1, v102); // 0x407609
    int64_t v485 = v104 % 256; // 0x40760e
    int64_t v141 = v102; // 0x40761b
    int64_t v142 = v485; // 0x40761b
    int64_t str = v484; // 0x40761b
    int64_t v143 = v106; // 0x40761b
    int64_t v118 = v102; // 0x40761b
    int64_t v119 = v485; // 0x40761b
    int64_t v120 = v484; // 0x40761b
    int64_t v121 = v106; // 0x40761b
    int64_t v122 = 1; // 0x40761b
    if (*(char *)v484 == 46) {
        goto lab_0x407f93;
    } else {
        goto lab_0x407621;
    }
  lab_0x405c05:;
    int64_t v193 = v49;
    int64_t v194 = v48;
    int64_t v195 = v45;
    uint64_t v162 = v43;
    int64_t * v196 = v40;
    int64_t v197 = v38;
    int32_t v198 = v177;
    char v199 = v42; // 0x405c13
    int64_t v156 = v195; // 0x405c1a
    if (v199 != 0) {
        goto lab_0x405c70;
    } else {
        // 0x405c1c
        v156 = v195;
        if (v138 == 0x4000 | *(char *)(a6 + 20) == 1) {
            goto lab_0x405c70;
        } else {
            // 0x405c28
            v156 = v195;
            if ((*(int64_t *)(a6 + 32) & 0xff000000ff00) == 0) {
                goto lab_0x405c70;
            } else {
                // 0x405c38
                v6 = str3;
                v156 = 0;
                if ((char)function_4052e0(str3, *(char *)(a6 + 37), 0, a6) != 0) {
                    goto lab_0x405c70;
                } else {
                    // 0x405c61
                    v156 = 0;
                    v35 = 0;
                    v36 = v193;
                    if (*(char *)(a6 + 38) != 0) {
                        goto lab_0x4065d0;
                    } else {
                        goto lab_0x405c70;
                    }
                }
            }
        }
    }
  lab_0x4065d0:
    // 0x4065d0
    v51 = v35;
    if (*(char *)(a6 + 37) != 0) {
        goto lab_0x406acd;
    } else {
        // 0x4065db
        v52 = v53;
        v54 = v36;
        if (v55 == 0) {
            // 0x4065e9
            function_409640((int64_t)owner, v11);
            v52 = v53;
            v54 = v36;
        }
        goto lab_0x406073;
    }
  lab_0x406f08:;
    char * v56 = (char *)(a6 + 35); // 0x406f22
    unsigned char v57 = *v56; // 0x406f22
    int64_t v58 = function_40ab10(a1, 0x20000 * (int32_t)(*v5 == 2), v59); // 0x406f32
    int32_t v60 = v58; // 0x406f3d
    int32_t err_num5; // 0x405650
    int64_t v61; // 0x405650
    int64_t v62; // 0x405650
    int64_t v63; // 0x405650
    char * format11; // 0x405650
    int64_t v64; // 0x405650
    int64_t v65; // 0x405650
    int32_t v66; // 0x405650
    int32_t v67; // 0x405650
    uint32_t fd2; // 0x406f45
    uint32_t v68; // 0x406f8c
    if (v60 < 0) {
        // 0x407c46
        v6 = 4;
        function_40dd80(4, a1);
        v69 = (int64_t)"cannot open %s for reading";
        goto lab_0x4065b0;
    } else {
        // 0x406f45
        fd2 = 0x1000000 * v60 >> 24;
        if (__fxstat(1, fd2, (struct stat *)&v70) != 0) {
            // 0x407f1f
            function_40dd80(4, a1);
            v6 = 0;
            char * v71 = dcgettext(NULL, "cannot fstat %s", 5); // 0x407f3f
            err_num5 = *__errno_location();
            v64 = v72;
            format11 = v71;
            goto lab_0x4070f0;
        } else {
            if (v1 != (int64_t)owner) {
                goto lab_0x407acf;
            } else {
                // 0x406f78
                if (v11 != (int64_t)v70) {
                    goto lab_0x407acf;
                } else {
                    // 0x406f8c
                    v68 = v73 % 512;
                    if ((char)v72 != 0) {
                        // 0x406f8c
                        v66 = (int64_t)v41;
                        v61 = v74;
                        goto lab_0x407040;
                    } else {
                        int64_t v75 = function_40ab10(str3, *v56 == 0 ? 1 : 513, (int64_t)&v70); // 0x406fc6
                        int64_t v76 = 0x100000000 * v75 >> 32; // 0x406fcd
                        if ((*(int64_t *)(a6 + 32) & 0xff000000ff00) == 0) {
                            int64_t v77 = v76 & 0xffffffff; // 0x4082b5
                            v63 = v77;
                            v15 = v72;
                            v67 = 0;
                            v65 = v76;
                            v62 = v77;
                            if ((int32_t)v76 < 0) {
                                goto lab_0x406fef;
                            } else {
                                goto lab_0x4082cd;
                            }
                        } else {
                            // 0x406fe7
                            v63 = v75 & 0xffffffff;
                            if ((int32_t)v75 >= 0) {
                                int64_t v78 = function_4052e0(str3, *(char *)(a6 + 37), 0, a6); // 0x408903
                                v15 = v72;
                                v67 = 0;
                                v65 = v76;
                                v62 = a6;
                                if ((char)v78 != 0) {
                                    goto lab_0x4082cd;
                                } else {
                                    // 0x408913
                                    v15 = 0;
                                    v67 = 0;
                                    v65 = v76;
                                    v62 = a6;
                                    if (*(char *)(a6 + 38) == 0) {
                                        goto lab_0x4082cd;
                                    } else {
                                        // 0x408913
                                        fd = v76;
                                        v16 = 0;
                                        v18 = 0;
                                        v20 = 0;
                                        v22 = v79;
                                        v23 = v78 & 0xffffffff;
                                        v25 = a1;
                                        v26 = v10;
                                        goto lab_0x408600;
                                    }
                                }
                            } else {
                                goto lab_0x406fef;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4065b0:;
    char * format4 = dcgettext(NULL, (char *)v69, 5); // 0x4065b2
    int32_t * err_num = __errno_location(); // 0x4065ba
    v6 = 0;
    error(0, *err_num, format4);
    v35 = (int64_t)format4;
    v36 = v10;
    goto lab_0x4065d0;
  lab_0x4071e3:;
    // 0x4071e3
    int64_t v80; // 0x405650
    int64_t v81; // 0x405650
    int64_t v82; // 0x405650
    int32_t v83; // 0x405650
    if (*v5 != 2) {
        goto lab_0x406b70;
    } else {
        // 0x4071ee
        if ((*(int32_t *)(v84 + 24) & 0xf000) == 0xa000) {
            // 0x408974
            v6 = 1;
            int32_t v85 = __xstat(1, file_path, (struct stat *)&v86); // 0x408994
            int64_t v87 = 0x100000000000000 * v88 >> 56; // 0x408999
            v89 = v87;
            int64_t v90 = v91 % 256; // 0x4089a0
            int32_t v92 = v93;
            v94 = a1;
            v95 = v92;
            v96 = v97;
            v98 = v93;
            v99 = v90;
            v82 = a1;
            v80 = v87;
            v83 = v92;
            v81 = v90;
            if (v85 == 0) {
                goto lab_0x407260;
            } else {
                goto lab_0x405823;
            }
        } else {
            // 0x407201
            v86 = __asm_movaps(__asm_movdqa(*(int128_t *)v84));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 16)));
            int64_t v100 = __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 32))); // 0x40721d
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 48)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 64)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 80)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 96)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 112)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 128)));
            v82 = v101;
            v80 = v89;
            v83 = v100;
            v81 = v91;
            goto lab_0x407260;
        }
    }
  lab_0x407d38:
    // 0x407d38
    v102 = v103;
    v104 = v105;
    v106 = v107;
    if ((int32_t)v107 != 0) {
        goto lab_0x407600;
    } else {
        // 0x407d41
        function_40de50(0, 3, str3);
        v6 = 0;
        function_40de50(0, 3, a1);
        v108 = (int64_t)"cannot move directory onto non-directory: %s -> %s";
        goto lab_0x405a68;
    }
  lab_0x407b68:;
    int64_t v109 = function_40aa00(a1, v110); // 0x407b71
    int64_t v111 = v112 % 256; // 0x407b76
    int64_t v113 = v110; // 0x407b83
    int64_t v114 = v111; // 0x407b83
    int64_t v115 = v109; // 0x407b83
    int64_t v116 = v117; // 0x407b83
    v118 = v110;
    v119 = v111;
    v120 = v109;
    v121 = v117;
    v122 = 0;
    if (*(char *)v109 == 46) {
        goto lab_0x407f93;
    } else {
        goto lab_0x407b89;
    }
  lab_0x40591a:
    // 0x40591a
    v123 = v124;
    v125 = 0;
    v126 = v127;
    v128 = v129;
    v130 = v131;
    v132 = v133;
    v134 = v135;
    if (((char)v136 || (char)((owner & 0xf000) == 0x4000)) != 0) {
        goto lab_0x405aa4;
    } else {
        char v137 = *(char *)(a6 + 21); // 0x405942
        if (v137 != 0) {
            goto lab_0x40596a;
        } else {
            // 0x405951
            if (v1 < 2 | *(char *)(a6 + 34) == 0) {
                // 0x407f5d
                v123 = v124;
                v125 = 0;
                v126 = v137;
                v128 = v129;
                v130 = v131;
                v132 = v133;
                v134 = v135;
                if (v138 != 0x8000 == *v5 == 2) {
                    goto lab_0x40596a;
                } else {
                    goto lab_0x405aa4;
                }
            } else {
                goto lab_0x40596a;
            }
        }
    }
  lab_0x407f93:;
    int64_t v139 = v120 + 1; // 0x407f95
    char v140 = *(char *)(v139 + (int64_t)(*(char *)v139 == 46)); // 0x407f9d
    v136 = v122;
    v133 = v119;
    switch (v140) {
        case 0: {
            goto lab_0x40591a;
        }
        case 47: {
            goto lab_0x40591a;
        }
        default: {
            // 0x407fb4
            v141 = v118;
            v142 = v119;
            str = v120;
            v143 = v121;
            v113 = v118;
            v114 = v119;
            v115 = v120;
            v116 = v121;
            if (v122 == 0) {
                goto lab_0x407b89;
            } else {
                goto lab_0x407621;
            }
        }
    }
  lab_0x407621:;
    int64_t v144 = v142; // 0x407625
    if ((int32_t)v143 != 3) {
        uint32_t len = strlen((char *)str); // 0x40763b
        int64_t str2 = function_40aa00(str3, v141); // 0x40764e
        int32_t len2 = strlen((char *)str2); // 0x40765d
        int64_t v145 = len2; // 0x40765d
        int64_t len3 = strlen(g52); // 0x407676
        int64_t v146 = v142 % 256; // 0x40767b
        v144 = v146;
        if (0x100000000000000 * (int64_t)len >> 56 == len3 + v145) {
            // 0x40769d
            v144 = v146;
            if (memcmp((int64_t *)(str & 0xffffffff), (int64_t *)(0x100000000000000 * str2 >> 56), len2) == 0) {
                // 0x4076d2
                v144 = v146;
                if (strcmp((char *)((0x100000000 * str >> 32) + v145), g52) == 0) {
                    int32_t len4 = strlen((char *)str3); // 0x407705
                    int64_t v147 = function_4100e0(len3 + 1 + (int64_t)len4); // 0x40771d
                    int64_t * v148 = (int64_t *)v147; // 0x407744
                    strcpy((char *)mempcpy(v148, (int64_t *)str3, len4), g52);
                    uint32_t v149 = __xstat(1, (char *)v147, (struct stat *)&v86); // 0x40776a
                    v6 = v147;
                    free(v148);
                    v144 = v146;
                    if (v1 == v150 == v149 % 256 == 0) {
                        // 0x408e24
                        v144 = v146;
                        if (v11 == v86) {
                            // 0x408e38
                            char * format5; // 0x405650
                            if (*v4 == 0) {
                                // 0x408e89
                                format5 = dcgettext(NULL, "backing up %s might destroy source;  %s not copied", 5);
                            } else {
                                // 0x408e3f
                                format5 = dcgettext(NULL, "backing up %s might destroy source;  %s not moved", 5);
                            }
                            // 0x408e53
                            function_40dca0(1, 4, a1);
                            v6 = 0;
                            function_40dca0(0, 4, str3);
                            // 0x405a78
                            error(0, 0, format5);
                            // 0x405f31
                            return 0;
                        }
                    }
                }
            }
        }
    }
    int64_t str4 = function_40a570(str3, *(int32_t *)&v89); // 0x4077b9
    uint64_t v151 = 0x100000000000000 * v144 >> 56; // 0x4077d2
    int32_t * err_num6; // 0x405650
    int64_t v152; // 0x405650
    if (str4 == 0) {
        int32_t * v153 = __errno_location(); // 0x407e86
        v123 = v124;
        v125 = 0;
        v126 = 1;
        v128 = v129;
        v130 = v131;
        v132 = v151 % 256;
        v134 = v135;
        if (*v153 == 2) {
            goto lab_0x405aa4;
        } else {
            // 0x407ea5
            v6 = 4;
            function_40dd80(4, str3);
            err_num6 = v153;
            v152 = (int64_t)"cannot backup %s";
            goto lab_0x407ec3;
        }
    } else {
        int32_t len5 = strlen((char *)str4); // 0x4077e1
        int64_t v154 = v135 - ((int64_t)len5 + 24 & -16); // 0x4077f5
        int64_t * dest_mem = memcpy((int64_t *)(v154 + 15 & -16), (int64_t *)str4, len5 + 1); // 0x407801
        free((int64_t *)(0x100000000000000 * str4 >> 56));
        v123 = v124;
        v125 = (int64_t)dest_mem;
        v126 = 1;
        v128 = v129;
        v130 = v131;
        v132 = v151 % 256;
        v134 = v154;
        goto lab_0x405aa4;
    }
  lab_0x405c70:;
    int64_t v155 = v156;
    int64_t v157 = v155; // 0x405c72
    if ((char)v46 != 0) {
        int64_t * v158 = (int64_t *)(a6 + 56); // 0x405c74
        v157 = v155;
        if (*v158 != 0) {
            int64_t v159 = &v86; // 0x405c82
            v6 = 1;
            int32_t v160 = __lxstat(1, (char *)str3, (struct stat *)&v86); // 0x405c95
            v157 = v159;
            if (v160 == 0) {
                int64_t v161 = *v158; // 0x405ca6
                v6 = v161;
                function_40ab60(v161, str3, v159);
                v157 = v159;
            }
        }
    }
    // 0x405cc8
    if (v47 != 0 || v138 != 0x4000 == (*(char *)(a6 + 23) != 0)) {
        // 0x405f31
        return v162 % 256 & 0xffffffff;
    }
    char v163 = v44;
    if (*(char *)(a6 + 31) == 0) {
        goto lab_0x405da0;
    } else {
        // 0x405cec
        v6 = str3;
        if (v163 == 0) {
            // 0x4073e0
            if ((int32_t)function_40f8a0(str3, &v86) == 0) {
                goto lab_0x405dad;
            } else {
                goto lab_0x405d52;
            }
        } else {
            // 0x405d3f
            if ((int32_t)function_40f8b0(str3, &v86, v157) == 0 || *__errno_location() == 38) {
                // 0x405f31
                return v162 % 256 & 0xffffffff;
            }
            goto lab_0x405d52;
        }
    }
  lab_0x4066d4:;
    char * v164 = (char *)a8; // 0x4066d8
    if (*v164 == 0) {
        // 0x407b37
        v6 = str3;
        function_4096d0(str3, v1, (int64_t)v165);
        *v164 = 1;
    }
    // 0x4066e1
    int32_t v166; // 0x405650
    v167 = v166;
    v168 = v169;
    v170 = v171;
    if (*(char *)(a6 + 46) != 0) {
        // 0x4066e8
        if (*v4 == 0) {
            // 0x407caf
            v6 = a1;
            function_404a30(a1, str3, 0);
            v167 = v166;
            v168 = v169;
            v170 = v171;
        } else {
            // 0x4066f3
            function_40dd80(4, str3);
            v6 = 1;
            __printf_chk(1, dcgettext(NULL, "created directory %s\n", 5));
            v167 = v166;
            v168 = v169;
            v170 = v171;
        }
    }
    goto lab_0x40674f;
  lab_0x407b89:
    // 0x407b89
    v123 = v124;
    v125 = 0;
    v126 = v127;
    v128 = v129;
    v130 = v131;
    v132 = v114;
    v134 = v135;
    v141 = v113;
    v142 = v114;
    str = v115;
    v143 = v116;
    if ((owner & 0xf000) != 0x4000) {
        goto lab_0x407621;
    } else {
        goto lab_0x405aa4;
    }
  lab_0x405da0:
    if (v163 != 0) {
        // 0x405f31
        return v162 % 256 & 0xffffffff;
    }
    goto lab_0x405dad;
  lab_0x40596a:
    // 0x40596a
    if (unlink((char *)str3) == 0) {
        goto lab_0x40599f;
    } else {
        int32_t * v555 = __errno_location(); // 0x405987
        if (*v555 != 2) {
            // 0x4087df
            v6 = 4;
            function_40dd80(4, str3);
            err_num6 = v555;
            v152 = (int64_t)"cannot remove %s";
            goto lab_0x407ec3;
        } else {
            goto lab_0x40599f;
        }
    }
  lab_0x405dad:
    // 0x405dad
    if (*v404 != 0) {
        if (true != (true == v199 == 0)) {
            // 0x405dcf
            v6 = a6;
            int64_t v486 = function_405430(a6, str3, 0xffffffff, v192, v199, (int64_t *)&v165); // 0x405df4
            if ((int32_t)v486 == -1) {
                // 0x405f31
                return 0;
            }
        }
    }
    // 0x405e18
    char v487; // 0x405ec2
    if (*(int64_t *)v3 % 0xff000000000100 != 0) {
        // 0x407860
        if ((int32_t)function_409d90(v194, 0xffffffff, str3) == 0) {
            // 0x405f31
            return v162 % 256 & 0xffffffff;
        }
        // 0x405ebb
        v487 = *(char *)(a6 + 36);
        // 0x405f31
        return (v487 != 0 ? v193 : v162 % 256) & 0xffffffff & 0xffffffff;
    }
    // 0x405e2c
    int64_t v488; // 0x407b1b
    if (*v401 != 0) {
        // 0x407b01
        v488 = (int32_t)function_409e20(str3) != 0 ? v193 : v162 % 256;
        // 0x405f31
        return v488 & 0xffffffff & 0xffffffff;
    }
    // 0x405e37
    if (*(char *)(a6 + 32) != 0) {
        // 0x407c65
        function_405620(v6);
        // 0x407b01
        v488 = (int32_t)function_409e20(str3) != 0 ? v193 : v162 % 256;
        // 0x405f31
        return v488 & 0xffffffff & 0xffffffff;
    }
    int32_t v489 = (int64_t)v196; // 0x405e48
    int64_t * v490 = v196; // 0x405e4a
    int64_t * v491; // 0x405650
    int32_t v492; // 0x405650
    uint32_t v493; // 0x40637e
    int64_t * v494; // 0x40637e
    if (v489 != 0) {
        // 0x406377
        v493 = -1 - (int32_t)function_405620(v6) & v489;
        v494 = (int64_t *)(int64_t)v493;
        v490 = v494;
        if (v493 == 0) {
            goto lab_0x405e50;
        } else {
            // 0x40638a
            v492 = v198;
            v491 = v494;
            if ((char)v197 == 1) {
                goto lab_0x405e5d;
            } else {
                if (v199 != 0) {
                    int32_t v495 = __lxstat(1, (char *)str3, (struct stat *)&v165); // 0x408815
                    v9 = str3;
                    if (v495 == 0) {
                        goto lab_0x4063a4;
                    } else {
                        goto lab_0x405ef7;
                    }
                } else {
                    goto lab_0x4063a4;
                }
            }
        }
    } else {
        goto lab_0x405e50;
    }
  lab_0x4070f0:
    // 0x4070f0
    error(0, err_num5, format11);
    int64_t v27 = v64; // 0x4070fc
    int64_t v28 = 0; // 0x4070fc
    int64_t v29 = (int64_t)format11; // 0x4070fc
    int64_t v30 = v79; // 0x4070fc
    int64_t v31 = 0; // 0x4070fc
    int64_t v32 = a1; // 0x4070fc
    int64_t v33 = v10; // 0x4070fc
    goto lab_0x407107;
  lab_0x407acf:
    // 0x407acf
    function_40dd80(4, a1);
    v6 = 0;
    err_num5 = (int32_t)"skipping file %s, as it was replaced while being copied" ^ (int32_t)"skipping file %s, as it was replaced while being copied";
    v64 = v72;
    format11 = dcgettext(NULL, "skipping file %s, as it was replaced while being copied", 5);
    goto lab_0x4070f0;
  lab_0x40749e:
    // 0x40749e
    free((int64_t *)v424);
    v6 = 0;
    function_40de50(0, 3, str3);
    v50 = (int64_t)"%s: can make relative symbolic links only in current directory";
    goto lab_0x406472;
  lab_0x407260:;
    // 0x407260
    int64_t v496; // 0x405650
    int64_t v497; // 0x405650
    int64_t v498; // 0x405650
    int128_t v499; // 0x405650
    if ((*(int32_t *)(v80 + 24) & 0xf000) == 0xa000) {
        // 0x40893d
        v6 = 1;
        int32_t v500 = __xstat(1, (char *)str3, (struct stat *)&v70); // 0x40895a
        int64_t v501 = v81 % 256; // 0x40895f
        v94 = str3;
        v95 = v83;
        v96 = v97;
        v98 = v93;
        v99 = v501;
        v497 = str3;
        v498 = v93;
        v496 = v501;
        if (v500 == 0) {
            goto lab_0x4072eb;
        } else {
            goto lab_0x405823;
        }
    } else {
        // 0x407274
        v70 = __asm_movaps(__asm_movdqa(*(int128_t *)v80));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 16)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 32)));
        int64_t v502 = __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 48))); // 0x4072a0
        int64_t v503 = __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 64))); // 0x4072ad
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 80)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 96)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 112)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 128)));
        v497 = v82;
        v499 = v502;
        v498 = v503;
        v496 = v81;
        goto lab_0x4072eb;
    }
  lab_0x40599f:;
    int64_t v504 = v133 % 256;
    char v505 = *(char *)(a6 + 46); // 0x40599f
    if (v505 != 0) {
        // 0x408261
        function_40dd80(4, str3);
        __printf_chk(1, dcgettext(NULL, "removed %s\n", 5));
        v123 = v124;
        v125 = 0;
        v126 = v505;
        v128 = v129;
        v130 = v131;
        v132 = v504;
        v134 = v135;
        goto lab_0x405aa4;
    } else {
        if ((char)a7 == 0) {
            unsigned char v506 = *(char *)(a6 + 42) & (char)(v138 == 0x4000); // 0x40823a
            v293 = v124;
            v294 = 0;
            v295 = 1;
            v296 = v129;
            v297 = v131;
            v298 = v135;
            if (v506 != 0) {
                // 0x4069b2
                v6 = v150;
                v330 = v150;
                v331 = v124;
                v332 = 0;
                v333 = v506;
                v334 = v129;
                v335 = v131;
                v336 = v135;
                goto lab_0x4069d0;
            } else {
                goto lab_0x405ae8;
            }
        } else {
            int64_t v507 = 0x100000000000000 * a7 >> 56; // 0x4059bf
            v251 = v124;
            v255 = 0;
            v254 = v507;
            v253 = v129;
            v252 = v131;
            v249 = v504;
            v250 = v135;
            v259 = v124;
            v260 = 0;
            v261 = v507;
            v262 = v129;
            v263 = v131;
            v264 = v135;
            if (*(int64_t *)(a6 + 56) == 0) {
                goto lab_0x405f70;
            } else {
                goto lab_0x4059e0;
            }
        }
    }
  lab_0x407ec3:
    // 0x407ec3
    error(0, *err_num6, dcgettext(NULL, (char *)v152, 5));
    // 0x405f31
    return 0;
  lab_0x405e50:
    // 0x405e50
    v492 = v198;
    v491 = v490;
    if ((char)v197 == 0) {
        // 0x405f31
        return v162 % 256 & 0xffffffff;
    }
    goto lab_0x405e5d;
  lab_0x405d52:
    // 0x405d52
    function_40dd80(4, str3);
    char * format17 = dcgettext(NULL, "preserving times for %s", 5); // 0x405d72
    int32_t * err_num8 = __errno_location(); // 0x405d7a
    v6 = 0;
    error(0, *err_num8, format17);
    if (*(char *)(a6 + 36) != 0) {
        // 0x405f31
        return 0;
    }
    goto lab_0x405da0;
  lab_0x407107:
    // 0x407107
    if (close(fd2) < 0) {
        // 0x407e3b
        function_40dd80(4, v32);
        char * format2 = dcgettext(NULL, "failed to close %s", 5); // 0x407e57
        error(0, *__errno_location(), format2);
        int64_t v34 = 0x100000000 * v28 >> 32; // 0x407e75
        v6 = v34;
        free((int64_t *)v34);
        v35 = (int64_t)format2;
        v36 = v33;
        goto lab_0x4065d0;
    } else {
        int64_t v37 = 0x100000000 * v28 >> 32; // 0x407129
        v6 = v37;
        free((int64_t *)v37);
        v38 = v39;
        v40 = v41;
        v42 = v27;
        v43 = 0x100000000000000 * v31 >> 56;
        v44 = 0;
        v45 = v29;
        v46 = v30;
        v47 = v31 % 256;
        v48 = v32;
        v49 = v33;
        v35 = v29;
        v36 = v33;
        if ((char)v31 != 0) {
            goto lab_0x405c05;
        } else {
            goto lab_0x4065d0;
        }
    }
  lab_0x406472:;
    char * format3 = dcgettext(NULL, (char *)v50, 5); // 0x406474
    v6 = 0;
    error(0, 0, format3);
    v35 = (int64_t)format3;
    v36 = v10;
    goto lab_0x4065d0;
  lab_0x405e5d:
    // 0x405e5d
    if (chmod((char *)str3, v492 || (int32_t)(int64_t)v491) == 0) {
        // 0x405f31
        return v162 % 256 & 0xffffffff;
    }
    // 0x405e7d
    function_40dd80(4, str3);
    error(0, *__errno_location(), dcgettext(NULL, "preserving permissions for %s", 5));
    // 0x405ebb
    v487 = *(char *)(a6 + 36);
    // 0x405f31
    return (v487 != 0 ? v193 : v162 % 256) & 0xffffffff & 0xffffffff;
  lab_0x4072eb:
    // 0x4072eb
    v94 = v497;
    v95 = v83;
    v96 = v97;
    v464 = v499;
    v98 = v498;
    v99 = v496;
    // 0x4072ff
    v94 = v497;
    v95 = v83;
    v96 = v97;
    v464 = v499;
    v98 = v498;
    v99 = v496;
    if (v86 != (int64_t)v70) {
        goto lab_0x405823;
    } else {
        // 0x407313
        v94 = v497;
        v95 = v83;
        v96 = 1;
        v464 = v499;
        v98 = v498;
        v99 = v496;
        if (*(char *)(a6 + 23) == 0) {
            goto lab_0x406b70;
        } else {
            goto lab_0x405823;
        }
    }
  lab_0x407040:;
    int64_t v508 = v68 & -1 - v66; // 0x40705f
    int64_t v509 = 0x100000000 * function_40ab10(str3, 193, v508);
    int64_t v510 = v509 >> 32; // 0x40706e
    int32_t * v511 = __errno_location(); // 0x407074
    int32_t v512 = *v511; // 0x40707f
    char v513 = v509 < 0;
    char v514 = v513; // 0x40709b
    int64_t v515 = v510; // 0x40709b
    int32_t v516 = v512; // 0x40709b
    int32_t v517; // 0x405650
    int64_t v518; // 0x405650
    if (v509 < 0 != (v512 == 17)) {
        goto lab_0x408748;
    } else {
        char v519 = *v4; // 0x4070a1
        v518 = v519;
        v517 = 17;
        if (v519 == 0) {
            int32_t v520 = __lxstat(1, (char *)str3, (struct stat *)&v86); // 0x4086f6
            v514 = v513;
            v515 = v510;
            v516 = 17;
            if (v520 != 0) {
                goto lab_0x408748;
            } else {
                // 0x4086ff
                v514 = v513;
                v515 = v510;
                v516 = 17;
                if ((owner & 0xf000) != 0xa000) {
                    goto lab_0x408748;
                } else {
                    // 0x408711
                    if (*(char *)(a6 + 48) == 0) {
                        // 0x40946a
                        function_40dd80(4, str3);
                        char * format12 = dcgettext(NULL, "not writing through dangling symlink %s", 5); // 0x409491
                        error(0, (int32_t)"not writing through dangling symlink %s" ^ (int32_t)"not writing through dangling symlink %s", format12);
                        v27 = v509 < 0 == v512 == 17;
                        v28 = 0;
                        v29 = (int64_t)format12;
                        v30 = v79;
                        v31 = 0;
                        v32 = a1;
                        v33 = v10;
                        goto lab_0x407107;
                    } else {
                        int64_t v521 = 0x100000000 * function_40ab10(str3, 65, v508);
                        v514 = v521 < 0;
                        v515 = v521 >> 32;
                        v516 = *v511;
                        goto lab_0x408748;
                    }
                }
            }
        } else {
            goto lab_0x4070ba;
        }
    }
  lab_0x407a67:
    // 0x407a67
    v6 = str7;
    free((int64_t *)str7);
    char v522 = *(char *)(a6 + 37); // 0x407a6f
    v51 = v423;
    if (v522 != 0) {
        goto lab_0x406acd;
    } else {
        char v523 = *v404; // 0x407a82
        if (v523 != 0) {
            int64_t v524 = v522; // 0x407a74
            int64_t v525 = owner; // 0x408670
            v6 = str3;
            if (lchown((char *)str3, owner, owner) == 0) {
                int64_t v526 = v523; // 0x40882e
                v38 = v524;
                v40 = v41;
                v42 = v72;
                v43 = v526;
                v44 = v526;
                v45 = v525;
                v46 = v79;
                v47 = 0;
                v48 = a1;
                v49 = v10;
                goto lab_0x405c05;
            } else {
                // 0x40869f
                v6 = a6;
                int64_t v527 = function_405400(a6); // 0x4086a2
                int64_t v528 = 0x100000000000000 * v527 >> 56; // 0x4086a7
                v38 = v524;
                v40 = v41;
                v42 = v72;
                v43 = v528;
                v44 = v528;
                v45 = v525;
                v46 = v79;
                v47 = 0;
                v48 = a1;
                v49 = v10;
                if ((char)v527 == 0) {
                    char * format13 = dcgettext(NULL, "failed to preserve ownership for %s", 5); // 0x409042
                    int64_t v529 = (int64_t)format13; // 0x409042
                    int32_t * err_num7 = __errno_location(); // 0x40904a
                    v6 = 0;
                    error(0, *err_num7, format13);
                    char v530 = *(char *)(a6 + 36); // 0x409064
                    v35 = v529;
                    v36 = v10;
                    if (v530 != 0) {
                        goto lab_0x4065d0;
                    } else {
                        int64_t v531 = v523; // 0x40907f
                        v38 = v530;
                        v40 = v41;
                        v42 = v72;
                        v43 = v531;
                        v44 = v531;
                        v45 = v529;
                        v46 = v79;
                        v47 = 0;
                        v48 = a1;
                        v49 = v10;
                        goto lab_0x405c05;
                    }
                } else {
                    goto lab_0x405c05;
                }
            }
        } else {
            // 0x407a90
            v38 = v523;
            v40 = v41;
            v42 = v72;
            v43 = 1;
            v44 = 1;
            v45 = v423;
            v46 = v79;
            v47 = v523;
            v48 = a1;
            v49 = v10;
            goto lab_0x405c05;
        }
    }
  lab_0x4063a4:
    // 0x4063a4
    v491 = v494;
    if ((v493 & -1 - owner) == 0) {
        // 0x405f31
        return v162 % 256 & 0xffffffff;
    }
    goto lab_0x405e5d;
  lab_0x408748:;
    unsigned char v532 = v514 & (char)(v516 == 21); // 0x408758
    if (v532 == 0) {
        // 0x408dea
        v518 = 1;
        v517 = v516;
        v15 = 1;
        v67 = v66;
        v65 = v515;
        v62 = v61;
        if ((int32_t)v515 < 0) {
            goto lab_0x4070ba;
        } else {
            goto lab_0x4082cd;
        }
    } else {
        int64_t v533 = v532;
        v6 = str3;
        v518 = v533;
        v517 = 21;
        if ((char)str3 != 0) {
            int64_t v534 = str3; // 0x408788
            int64_t v535 = -1; // 0x408788
            int64_t v536 = 0; // 0x408788
            while (v535 != 0) {
                int64_t v537 = v534;
                v534 = v537 + (v425 ? -1 : 1);
                v6 = v534;
                v535--;
                v536 = v535;
                if (*(char *)v537 == 0) {
                    // break -> 
                    break;
                }
                v536 = 0;
            }
            v518 = v533;
            v517 = (int32_t)(*(char *)(str3 - 3 - v536) != 47) | 20;
        }
        goto lab_0x4070ba;
    }
  lab_0x406fef:;
    int32_t * v538 = __errno_location(); // 0x406fef
    if (*(char *)(a6 + 22) == 0) {
        int32_t v539 = *v538; // 0x408a4c
        v518 = 0;
        v517 = v539;
        if (v539 != 2) {
            goto lab_0x4070ba;
        } else {
            // 0x408a56
            v66 = 0;
            v61 = v63;
            v518 = 0;
            v517 = v539;
            if (*v4 == 0) {
                goto lab_0x407040;
            } else {
                goto lab_0x4070ba;
            }
        }
    } else {
        // 0x407002
        if (unlink((char *)str3) != 0) {
            // 0x40928a
            function_40dd80(4, str3);
            v6 = 0;
            char * v540 = dcgettext(NULL, "cannot remove %s", 5); // 0x4092ae
            err_num5 = *v538;
            v64 = v72;
            format11 = v540;
            goto lab_0x4070f0;
        } else {
            // 0x407016
            if (*(char *)(a6 + 46) != 0) {
                // 0x4091eb
                function_40dd80(4, str3);
                __printf_chk(1, dcgettext(NULL, "removed %s\n", 5));
            }
            char v541 = *(char *)(a6 + 33); // 0x407021
            int64_t v542 = (int64_t)v41;
            int32_t v543 = v542;
            v66 = v543;
            v61 = v542 & 0xffffffff;
            if (v541 != 0) {
                int64_t v544 = function_405210(a1, str3, v68, 1, a6); // 0x40912d
                v66 = v543;
                v61 = 1;
                if ((char)v544 != 0) {
                    goto lab_0x407040;
                } else {
                    // 0x40913d
                    v27 = v541;
                    v28 = 0;
                    v29 = v68;
                    v30 = v79;
                    v31 = v544 & 0xffffffff;
                    v32 = a1;
                    v33 = v10;
                    goto lab_0x407107;
                }
            } else {
                goto lab_0x407040;
            }
        }
    }
  lab_0x4082cd:
    // 0x4082cd
    v6 = 1;
    fd3 = v65;
    int32_t v545 = __fxstat(1, fd3, (struct stat *)&v86); // 0x4082e9
    int64_t v546; // 0x405650
    int64_t v547; // 0x405650
    int64_t v548; // 0x405650
    int64_t v549; // 0x405650
    int64_t v550; // 0x405650
    int64_t v551; // 0x405650
    int64_t v552; // 0x406f45
    int64_t v553; // 0x4082d4
    if (v545 != 0) {
        // 0x4089b5
        function_40dd80(4, str3);
        char * format14 = dcgettext(NULL, "cannot fstat %s", 5); // 0x4089d9
        error(0, *__errno_location(), format14);
        fd = fd3;
        v16 = v15;
        v18 = 0;
        v20 = (int64_t)format14;
        v22 = v79;
        v23 = 0;
        v25 = a1;
        v26 = v10;
        goto lab_0x408600;
    } else {
        // 0x4082fc
        v552 = fd2;
        v553 = v65 & 0xffffffff;
        v551 = 0;
        v549 = v62;
        v550 = &v86;
        v548 = v79;
        v546 = a1;
        v547 = v10;
        if (v57 == 0) {
            goto lab_0x40853f;
        } else {
            int32_t * v554 = (int32_t *)(a6 + 52); // 0x408309
            if (*v554 != 0) {
                // 0x408f90
                v6 = v553;
                v551 = 0;
                v549 = v62;
                v550 = v552;
                v548 = v79;
                v546 = a1;
                v547 = v10;
                if (ioctl(fd3, 0x40049409) == 0) {
                    goto lab_0x40853f;
                } else {
                    // 0x408fb0
                    if (*v554 != 2) {
                        goto lab_0x408314;
                    } else {
                        // 0x408fbb
                        function_40dca0(1, 4, a1);
                        function_40dca0(0, 4, str3);
                        char * format15 = dcgettext(NULL, "failed to clone %s from %s", 5); // 0x408ff6
                        error(0, *__errno_location(), format15);
                        fd = fd3;
                        v16 = v15;
                        v18 = 0;
                        v20 = 0x100000000 * (int64_t)format15 >> 32;
                        v22 = v79;
                        v23 = 0;
                        v25 = a1;
                        v26 = v10;
                        goto lab_0x408600;
                    }
                }
            } else {
                goto lab_0x408314;
            }
        }
    }
  lab_0x4070ba:
    // 0x4070ba
    function_40dd80(4, str3);
    v6 = 0;
    err_num5 = v517;
    v64 = v518;
    format11 = dcgettext(NULL, "cannot create regular file %s", 5);
    goto lab_0x4070f0;
  lab_0x40819d:
    // 0x40819d
    free((int64_t *)str7);
    function_40dd80(4, str3);
    char * format16 = dcgettext(NULL, "cannot create symbolic link %s", 5); // 0x4081c5
    v6 = 0;
    error(0, 0x1000000 * v426 >> 24, format16);
    v35 = (int64_t)format16;
    v36 = v10;
    goto lab_0x4065d0;
  lab_0x408600:
    // 0x408600
    v27 = v16;
    v28 = v18;
    v29 = v20;
    v30 = v22;
    v31 = v23 % 256;
    v32 = v25;
    v33 = v26;
    if (close(fd) < 0) {
        // 0x408622
        function_40dd80(4, str3);
        char * format = dcgettext(NULL, "failed to close %s", 5); // 0x408646
        error(0, *__errno_location(), format);
        v27 = v16;
        v28 = v18;
        v29 = (int64_t)format;
        v30 = v22;
        v31 = 0;
        v32 = v25;
        v33 = v26;
    }
    goto lab_0x407107;
  lab_0x40853f:;
    int64_t v556 = v550; // 0x408544
    if (*(char *)(a6 + 31) != 0) {
        // 0x408844
        v6 = v553;
        length2 = v1;
        int64_t v557 = function_40f460(v553, str3, (int64_t *)&length2, v549); // 0x408890
        v556 = &length2;
        if ((int32_t)v557 == 0) {
            goto lab_0x40854a;
        } else {
            // 0x40889d
            function_40dd80(4, str3);
            char * format18 = dcgettext(NULL, "preserving times for %s", 5); // 0x4088c1
            int64_t v558 = (int64_t)format18; // 0x4088c1
            int32_t * err_num9 = __errno_location(); // 0x4088c9
            v6 = 0;
            error(0, *err_num9, format18);
            v556 = v558;
            fd = fd3;
            v16 = v15;
            v18 = v551;
            v20 = v558;
            v22 = v548;
            v23 = 0;
            v25 = v546;
            v26 = v547;
            if (*(char *)(a6 + 36) == 0) {
                goto lab_0x40854a;
            } else {
                goto lab_0x408600;
            }
        }
    } else {
        goto lab_0x40854a;
    }
  lab_0x40854a:;
    int64_t v559 = v556; // 0x40854f
    if (*v404 == 0) {
        goto lab_0x4085af;
    } else {
        // 0x408551
        v559 = v556;
        if (true == owner == v363) {
            goto lab_0x4085af;
        } else {
            // 0x40856d
            v6 = a6;
            int64_t v560 = function_405430(a6, str3, v553, v192, (char)v15, &v86); // 0x408593
            v559 = v553;
            fd = fd3;
            v16 = v15;
            v18 = v551;
            v20 = v553;
            v22 = v548;
            v23 = 0;
            v25 = v546;
            v26 = v547;
            if ((int32_t)v560 == -1) {
                goto lab_0x408600;
            } else {
                goto lab_0x4085af;
            }
        }
    }
  lab_0x408314:;
    int32_t v561 = getpagesize(); // 0x408314
    char * v562; // 0x405650
    int64_t v563 = (int64_t)v562; // 0x40831c
    int64_t v564 = v563; // 0x408345
    char * v565; // 0x405650
    if (v562 != (char *)0x2000000000000000 && v563 >= 0x2000000000000000) {
        // 0x408347
        v565 = (char *)0x20000;
        v564 = v563 < 0x2000000000000001 ? v563 : 512;
    }
    // 0x40837a
    posix_fadvise(fd2, 0, 0, POSIX_FADV_SEQUENTIAL);
    uint32_t v566 = owner & 0xf000; // 0x408395
    v89 = v566;
    int64_t v567 = v545; // 0x4083a3
    if (v566 == 0x8000) {
        int64_t v568 = v364 - (int64_t)((v365 & 0xfffffffffffffe00) / 512); // 0x4083b6
        v567 = v568 < 0 != (v364 & (v568 ^ -0x8000000000000000)) < 0;
    }
    uint64_t v569 = (int64_t)v561; // 0x408319
    int64_t v570; // 0x405650
    int64_t v571; // 0x405650
    int64_t v572; // 0x405650
    int64_t v573; // 0x405650
    int64_t v574; // 0x405650
    int64_t v575; // 0x405650
    int64_t v576; // 0x405650
    int64_t v577; // 0x405650
    int64_t v578; // 0x405650
    int64_t v579; // 0x405650
    int64_t v580; // 0x405650
    int32_t * v581; // 0x408f20
    int64_t v582; // 0x405650
    if ((owner & 0xf000) == 0x8000) {
        // 0x408f20
        v581 = (int32_t *)(a6 + 12);
        int32_t v583 = *v581; // 0x408f20
        if (v583 == 3) {
            int64_t v584 = (int64_t)v565;
            int64_t v585 = function_4100e0(v584 + v569); // 0x409158
            uint64_t v586 = v569 - 1 + v585; // 0x409164
            int64_t v587 = 0x100000000 * v585 >> 32; // 0x409167
            int64_t v588 = v586 % v569;
            int64_t v589 = v586 - v588; // 0x409174
            v575 = v587;
            v580 = v589;
            v582 = v588;
            if ((int32_t)v567 != 0) {
                goto lab_0x408f74;
            } else {
                // 0x40918b
                v89 = *v581 == 3;
                v570 = v584;
                v578 = v564;
                v576 = v587;
                v579 = v589;
                v577 = &length2;
                v574 = v588;
                v573 = v79;
                v571 = a1;
                v572 = v10;
                goto lab_0x4084e7;
            }
        } else {
            if (v567 % 2 == 0 || v583 != 2) {
                goto lab_0x4083eb;
            } else {
                int64_t v590 = function_4100e0((int64_t)v565 + v569); // 0x408f4e
                uint64_t v591 = v569 - 1 + v590; // 0x408f5a
                v582 = v591 % v569;
                v575 = 0x100000000 * v590 >> 32;
                v580 = v591 - v582;
                goto lab_0x408f74;
            }
        }
    } else {
        goto lab_0x4083eb;
    }
  lab_0x4085af:;
    int64_t v592 = v559; // 0x4085b4
    if ((char)owner > -1 == (*(char *)(a6 + 39) != 0)) {
        // 0x408e9f
        v592 = v559;
        if (geteuid() != 0) {
            // 0x408eac
            v6 = v553;
            v592 = 384;
            if ((int32_t)function_4049d0(v553, str3, 384) == 0) {
                // 0x408ecb
                v6 = v553;
                int64_t v593 = v68 & -1 - v67; // 0x408ee0
                function_4049d0(v553, str3, v593);
                v592 = v593;
            }
        }
    }
    // 0x4085c3
    int64_t v594; // 0x405650
    if (*(int64_t *)v3 % 0xff000000000100 != 0) {
        int64_t v595 = function_409d90(v546, v552, str3); // 0x408a2b
        fd = fd3;
        v16 = v15;
        v18 = v551;
        v20 = str3;
        v22 = v548;
        v23 = 1;
        v25 = v546;
        v26 = v547;
        if ((int32_t)v595 == 0) {
            goto lab_0x408600;
        } else {
            goto lab_0x408a3e;
        }
    } else {
        // 0x4085d7
        if (*v401 != 0) {
            // 0x408e03
            v594 = (int64_t)*(int32_t *)(a6 + 16);
            goto lab_0x408e07;
        } else {
            // 0x4085e2
            if (*(char *)(a6 + 32) != 0) {
                // 0x40935b
                v594 = function_405620(v6) & 438 ^ 438;
                goto lab_0x408e07;
            } else {
                // 0x4085ed
                fd = fd3;
                v16 = v15;
                v18 = v551;
                v20 = v592;
                v22 = v548;
                v23 = 1;
                v25 = v546;
                v26 = v547;
                if (v67 != 0) {
                    int64_t v596 = v6; // 0x4092cd
                    fd = fd3;
                    int64_t v597; // 0x405650
                    v16 = v597;
                    int64_t v598; // 0x405650
                    v18 = v598;
                    int64_t v599; // 0x405650
                    v20 = v599;
                    int64_t v600; // 0x405650
                    v22 = v600;
                    v23 = 1;
                    int64_t v601; // 0x405650
                    v25 = v601;
                    int64_t v602; // 0x405650
                    v26 = v602;
                    int32_t v603; // 0x405650
                    if ((v603 & -1 - (int32_t)function_405620(v596)) == 0) {
                        goto lab_0x408600;
                    } else {
                        int64_t v604 = v68; // 0x4092e8
                        int64_t v605 = function_4049d0(v553, str3, v604); // 0x4092fb
                        fd = fd3;
                        v16 = v597;
                        v18 = v598;
                        v20 = v604;
                        v22 = v600;
                        v23 = 1;
                        v25 = v601;
                        v26 = v602;
                        if ((int32_t)v605 == 0) {
                            goto lab_0x408600;
                        } else {
                            // 0x409310
                            function_40dd80(4, str3);
                            char * format19 = dcgettext(NULL, "preserving permissions for %s", 5); // 0x409334
                            int32_t * v606 = __errno_location(); // 0x40933c
                            int32_t err_num10 = *v606; // 0x40934d
                            error(0, err_num10, format19);
                            goto lab_0x408a3e;
                        }
                    }
                } else {
                    goto lab_0x408600;
                }
            }
        }
    }
  lab_0x4083eb:;
    int64_t v607 = (int64_t)v565; // 0x4083f2
    int64_t v608 = 0x7fffffffffffffff - v569; // 0x40840d
    uint64_t v609 = function_40a640(v2 < 0x2000000000000001 ? v2 : 0x20000, v607, v608); // 0x408434
    v89 = 0;
    uint64_t v610 = v607 - 1 + v609; // 0x408460
    int64_t v611 = v610 - v610 % v609; // 0x40846b
    int64_t v612 = v611 - 1 < 0x100000000 * v608 >> 32 ? v611 : v609;
    int64_t v613 = function_4100e0(v612 + v569); // 0x40848f
    uint64_t v614 = v569 - 1 + v613; // 0x40849b
    int64_t v615 = 0x100000000 * v613 >> 32; // 0x40849e
    int64_t v616 = v614 % v569;
    int64_t v617 = v614 - v616; // 0x4084ab
    char * v618 = (char *)v612; // 0x4084bc
    int32_t v619 = 1; // 0x4084bc
    int64_t v620 = v615; // 0x4084bc
    int64_t v621 = v617; // 0x4084bc
    char v622 = 0; // 0x4084bc
    int64_t v623 = v616; // 0x4084bc
    if ((int32_t)v567 != 0) {
        goto lab_0x408a89;
    } else {
        // 0x4084c2
        v89 = *(int32_t *)(a6 + 12) == 3;
        v570 = v612;
        v578 = 0;
        v576 = v615;
        v579 = v617;
        v577 = &length2;
        v574 = v616;
        v573 = v79;
        v571 = a1;
        v572 = v10;
        goto lab_0x4084e7;
    }
  lab_0x408a89:
    // 0x408a89
    v17 = v620;
    int32_t v624 = v619;
    int64_t v625 = v365; // 0x408a90
    int64_t v626 = &length2; // 0x408aa3
    int32_t length = v365; // 0x408aaa
    char v627 = v58; // 0x408ab1
    function_4097a0(v627, (int64_t *)&length2);
    v21 = 0x100000000 * a7 >> 32;
    int64_t v628 = v624 == 3 ? v564 : 0;
    int64_t v629 = (int64_t)v618;
    v24 = 0x100000000000000 * a1 >> 56;
    int64_t v630 = 0; // 0x408ae5
    int64_t v631 = 0; // 0x408ae5
    int64_t v632 = v57;
    int64_t v633 = v623;
    int64_t v634 = 0;
    char v635; // 0x405650
    char v636 = v635;
    v6 = v626;
    int64_t v637; // 0x405650
    int64_t v638; // 0x405650
    int64_t v639; // 0x405650
    int64_t v640; // 0x405650
    char v641; // bp-688, 0x405650
    int64_t v642; // 0x405650
    int64_t v643; // 0x405650
    while ((char)function_4097d0(v626) != 0) {
        // 0x408b0a
        int64_t v644; // 0x405650
        v14 = v644;
        int64_t v645; // 0x405650
        uint64_t v646 = v645;
        int64_t v647 = v630; // 0x408b12
        int64_t v648 = v631; // 0x408b12
        char v649 = v636; // 0x408b12
        int64_t v650 = v634; // 0x408b12
        int64_t v651 = v633; // 0x408b12
        int64_t v652 = v630; // 0x408b12
        int64_t v653 = v631; // 0x408b12
        int64_t v654 = v632; // 0x408b12
        if (v646 != 0) {
            int64_t v655 = 0;
            int64_t v656 = 24 * v655 + v14; // 0x408bde
            int64_t v657 = *(int64_t *)v656; // 0x408be2
            int64_t v658 = *(int64_t *)(v656 + 8); // 0x408be5
            int64_t v659 = v657; // 0x408bf0
            int64_t v660 = v658; // 0x408bf0
            int64_t v661; // 0x408bf2
            if (v658 + v657 > v625) {
                // 0x408bf2
                v661 = v657 - v625;
                v659 = v661 < 0 == ((v661 ^ v657) & (v657 ^ v625)) < 0 == (v661 != 0) ? v625 : v657;
                v660 = v625 - v659;
            }
            int64_t v662 = v660;
            int64_t offset = v659;
            int64_t v663 = offset - v647 - v648; // 0x408c08
            int64_t v664 = 0; // 0x408c0b
            int64_t v665 = v628; // 0x408c0b
            int64_t v666; // 0x408c58
            if (v663 != 0) {
                // 0x408c11
                if (lseek(fd2, (int32_t)offset, SEEK_SET) < 0) {
                    // 0x409227
                    v6 = 4;
                    function_40dd80(4, v24);
                    v643 = (int64_t)"cannot lseek %s";
                    goto lab_0x409261;
                }
                if (v624 == 1) {
                    // 0x408c95
                    v6 = v553;
                    v664 = 0;
                    v665 = 0;
                    if ((char)function_4048e0(v553, v663) == 0) {
                        // 0x4093d4
                        v6 = 0;
                        function_40de50(0, 3, str3);
                        v643 = (int64_t)"%s: write failed";
                        goto lab_0x409261;
                    }
                } else {
                    // 0x408c43
                    v666 = function_404d20(fd3, str3, (char)(v624 == 3), v663);
                    v664 = v666 & 0xffffffff;
                    v665 = v628;
                    if ((char)v666 == 0) {
                        // 0x408c68
                        v19 = v624 == 3;
                        goto lab_0x408c84;
                    }
                }
            }
            int64_t v667 = v664;
            char v668; // bp-689, 0x405650
            *(int64_t *)(v190 - 16) = (int64_t)&v668;
            v89 = 1;
            *(int64_t *)(v190 - 24) = (int64_t)&v641;
            *(int64_t *)(v190 - 32) = v662;
            *(int64_t *)(v190 - 40) = str3;
            *(int64_t *)(v190 - 48) = v24;
            int64_t v669 = function_404de0(v627, v553, v621, v629, v665, 1, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76); // 0x408b87
            v19 = v621;
            if ((char)v669 == 0) {
                goto lab_0x408c84;
            }
            int64_t v670 = offset + (int64_t)v641; // 0x408b9f
            int64_t v671 = v625; // 0x408bb3
            char v672 = 1; // 0x408bb3
            int64_t v673 = v621; // 0x408bb3
            while (v670 != v625) {
                int64_t v674 = v655 + 1 & 0xffffffff; // 0x408bb9
                v647 = offset;
                int64_t v675 = v674; // 0x408bcd
                v648 = v662;
                v671 = v670;
                v672 = v636;
                v673 = v662;
                if (v674 >= v646) {
                    // break -> 0x408cba
                    break;
                }
                v655 = v675;
                v656 = 24 * v655 + v14;
                v657 = *(int64_t *)v656;
                v658 = *(int64_t *)(v656 + 8);
                v659 = v657;
                v660 = v658;
                if (v658 + v657 > v625) {
                    // 0x408bf2
                    v661 = v657 - v625;
                    v659 = v661 < 0 == ((v661 ^ v657) & (v657 ^ v625)) < 0 == (v661 != 0) ? v625 : v657;
                    v660 = v625 - v659;
                }
                // 0x408bff
                v662 = v660;
                offset = v659;
                v663 = offset - v647 - v648;
                v664 = 0;
                v665 = v628;
                if (v663 != 0) {
                    // 0x408c11
                    if (lseek(fd2, (int32_t)offset, SEEK_SET) < 0) {
                        // 0x409227
                        v6 = 4;
                        function_40dd80(4, v24);
                        v643 = (int64_t)"cannot lseek %s";
                        goto lab_0x409261;
                    }
                    if (v624 == 1) {
                        // 0x408c95
                        v6 = v553;
                        v664 = 0;
                        v665 = 0;
                        if ((char)function_4048e0(v553, v663) == 0) {
                            // 0x4093d4
                            v6 = 0;
                            function_40de50(0, 3, str3);
                            v643 = (int64_t)"%s: write failed";
                            goto lab_0x409261;
                        }
                    } else {
                        // 0x408c43
                        v666 = function_404d20(fd3, str3, (char)(v624 == 3), v663);
                        v664 = v666 & 0xffffffff;
                        v665 = v628;
                        if ((char)v666 == 0) {
                            // 0x408c68
                            v19 = v624 == 3;
                            goto lab_0x408c84;
                        }
                    }
                }
                // 0x408b45
                v667 = v664;
                *(int64_t *)(v190 - 16) = (int64_t)&v668;
                v89 = 1;
                *(int64_t *)(v190 - 24) = (int64_t)&v641;
                *(int64_t *)(v190 - 32) = v662;
                *(int64_t *)(v190 - 40) = str3;
                *(int64_t *)(v190 - 48) = v24;
                v669 = function_404de0(v627, v553, v621, v629, v665, 1, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76);
                v19 = v621;
                if ((char)v669 == 0) {
                    goto lab_0x408c84;
                }
                // 0x408b98
                v670 = offset + (int64_t)v641;
                v671 = v625;
                v672 = 1;
                v673 = v621;
            }
            // 0x408cba
            v649 = v672;
            v650 = v671;
            v651 = v673;
            v652 = offset;
            v653 = v662;
            v654 = v641 == 0 ? v667 : (int64_t)v668;
        }
        int64_t v676 = v654;
        int64_t v677 = v651;
        int64_t v678 = v650;
        v6 = v14;
        free((int64_t *)v14);
        v645 = 0;
        v644 = 0;
        v630 = v652;
        v631 = v653;
        if (v649 != 0) {
            // 0x408cf7
            v642 = v676;
            v639 = v678;
            v640 = v677;
            v638 = v21 & 0xffffffff;
            v637 = v10 % 256;
            goto lab_0x408d1a;
        }
        v632 = v676;
        v633 = v677;
        v634 = v678;
        v636 = 0;
        v6 = v626;
    }
    int64_t v679 = v10 % 256; // 0x409384
    int64_t v680 = v21 & 0xffffffff; // 0x409393
    v642 = v632;
    v639 = v634;
    v640 = v633;
    v638 = v680;
    v637 = v679;
    int64_t v681; // 0x405650
    int64_t v682; // 0x405650
    int64_t v683; // 0x405650
    int64_t v684; // 0x405650
    int64_t v685; // 0x405650
    if (v636 != 0) {
        goto lab_0x408d1a;
    } else {
        char v686; // 0x405650
        if (v686 == 0) {
            // 0x409419
            v6 = 0;
            function_40de50(0, 3, v24);
            v681 = (int64_t)"%s: failed to get extents info";
            v685 = v17;
            v684 = v680;
            v682 = v24;
            v683 = v679;
            goto lab_0x408dc1;
        } else {
            // 0x4093a8
            v89 = *(int32_t *)(a6 + 12) == 3;
            v570 = v629;
            v578 = v622 != 0 ? v564 : 0;
            v576 = v17;
            v579 = v621;
            v577 = v626;
            v574 = v633;
            v573 = v680;
            v571 = v24;
            v572 = v679;
            goto lab_0x4084e7;
        }
    }
  lab_0x408a3e:
    // 0x408a3e
    fd = fd3;
    v16 = v15;
    v18 = v551;
    v20 = str3;
    v22 = v548;
    v23 = (int64_t)(*(char *)(a6 + 36) ^ 1);
    v25 = v546;
    v26 = v547;
    goto lab_0x408600;
  lab_0x408f74:
    // 0x408f74
    v618 = v565;
    v619 = *v581;
    v620 = v575;
    v621 = v580;
    v622 = v57;
    v623 = v582;
    goto lab_0x408a89;
  lab_0x408d1a:;
    int64_t v687 = length; // 0x408d1a
    v551 = v17;
    v549 = v639;
    v550 = v640;
    v548 = v638;
    v546 = v24;
    v547 = v637;
    int64_t v688; // 0x405650
    int64_t v689; // 0x405650
    int64_t v690; // 0x405650
    int64_t v691; // 0x405650
    if (v639 >= v687 == v642 % 256 == 0) {
        goto lab_0x40853f;
    } else {
        int64_t v692 = v687 - v639; // 0x408d1a
        v6 = v553;
        if (v624 == 1) {
            // 0x40943e
            v551 = v17;
            v549 = v639;
            v550 = v640;
            v548 = v638;
            v546 = v24;
            v547 = v637;
            v691 = v17;
            v690 = v638;
            v688 = v24;
            v689 = v637;
            if ((char)function_4048e0(v553, v692) != 0) {
                goto lab_0x40853f;
            } else {
                goto lab_0x4091c4;
            }
        } else {
            // 0x408d41
            v691 = v17;
            v690 = v638;
            v688 = v24;
            v689 = v637;
            if (ftruncate(fd3, length) != 0) {
                goto lab_0x4091c4;
            } else {
                // 0x408d69
                v551 = v17;
                v549 = v639;
                v550 = v640;
                v548 = v638;
                v546 = v24;
                v547 = v637;
                if (v624 == 3 == v692 < 0 == ((v692 ^ v687) & (v639 ^ v687)) < 0 == (v692 != 0)) {
                    // 0x408d7f
                    v6 = v553;
                    if ((int32_t)function_404990(v553, v639, v692) >= 0) {
                        goto lab_0x40853f;
                    } else {
                        // 0x408d9f
                        v6 = 4;
                        function_40dd80(4, str3);
                        v681 = (int64_t)"error deallocating %s";
                        v685 = v17;
                        v684 = v638;
                        v682 = v24;
                        v683 = v637;
                        goto lab_0x408dc1;
                    }
                } else {
                    goto lab_0x40853f;
                }
            }
        }
    }
  lab_0x4084e7:
    // 0x4084e7
    *(int64_t *)(v190 - 8) = v574;
    *(int64_t *)(v190 - 16) = (int64_t)&v641;
    *(int64_t *)(v190 - 24) = v577;
    v6 = v552;
    *(int64_t *)(v190 - 32) = -1;
    *(int64_t *)(v190 - 40) = str3;
    *(int64_t *)(v190 - 48) = v571;
    int64_t v693 = function_404de0((char)fd2, v553, v579, v570, v578, v89, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76, (int64_t)&g76); // 0x408521
    fd = fd3;
    v16 = v15;
    v18 = v576;
    v20 = v579;
    v22 = v573;
    v23 = 0;
    v25 = v571;
    v26 = v572;
    if ((char)v693 == 0) {
        goto lab_0x408600;
    } else {
        // 0x408532
        v551 = v576;
        v549 = v570;
        v550 = v579;
        v548 = v573;
        v546 = v571;
        v547 = v572;
        if (v641 != 0) {
            // 0x4091aa
            v6 = v553;
            v551 = v576;
            v549 = v570;
            v550 = v579;
            v548 = v573;
            v546 = v571;
            v547 = v572;
            v691 = v576;
            v690 = v573;
            v688 = v571;
            v689 = v572;
            if (ftruncate(fd3, length2) >= 0) {
                goto lab_0x40853f;
            } else {
                goto lab_0x4091c4;
            }
        } else {
            goto lab_0x40853f;
        }
    }
  lab_0x408e07:
    // 0x408e07
    fd = fd3;
    v16 = v15;
    v18 = v551;
    v20 = v594;
    v22 = v548;
    v23 = (int32_t)function_409e20(str3) == 0;
    v25 = v546;
    v26 = v547;
    goto lab_0x408600;
  lab_0x408dc1:;
    char * format20 = dcgettext(NULL, (char *)v681, 5); // 0x408dc3
    error(0, *__errno_location(), format20);
    fd = fd3;
    v16 = v15;
    v18 = v685;
    v20 = (int64_t)format20;
    v22 = v684;
    v23 = 0;
    v25 = v682;
    v26 = v683;
    goto lab_0x408600;
  lab_0x4091c4:
    // 0x4091c4
    v6 = 4;
    function_40dd80(4, str3);
    v681 = (int64_t)"failed to extend %s";
    v685 = v691;
    v684 = v690;
    v682 = v688;
    v683 = v689;
    goto lab_0x408dc1;
  lab_0x409261:;
    char * format21 = dcgettext(NULL, (char *)v643, 5); // 0x409263
    error(0, *__errno_location(), format21);
    v19 = (int64_t)format21;
    goto lab_0x408c84;
}
// Address range: 0x4094d0 - 0x4095fc
int64_t function_4094d0(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t * a5, int64_t * a6) {
    if (a4 == 0) {
        // 0x4095a1
        __assert_fail("co != NULL", "src/copy.c", 2912, "valid_options");
        // 0x4095ba
        __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
        // 0x4095d3
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (uint128_t)(int128_t)(uint64_t)(int64_t)"src/copy.c";
    }
    if ((uint32_t)(int32_t)a4 >= 4) {
        // 0x4095d3
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (uint128_t)(int128_t)(uint64_t)(int64_t)"src/copy.c";
    }
    int32_t v1 = *(int32_t *)(a4 + 12); // 0x4094e6
    if (v1 >= 4) {
        // 0x4095ba
        __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
        // 0x4095d3
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (int128_t)(int64_t)"src/copy.c";
    }
    uint32_t v2 = *(int32_t *)(a4 + 52); // 0x4094f7
    if (v2 >= 3) {
        // 0x409588
        __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 2915, "valid_options");
        // 0x4095a1
        __assert_fail("co != NULL", "src/copy.c", 2912, "valid_options");
        // 0x4095ba
        __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
        // 0x4095d3
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (int128_t)(int64_t)"src/copy.c";
    }
    // 0x409505
    if (*(char *)(a4 + 23) != 0) {
        // 0x409550
        if (*(char *)(a4 + 44) == 0) {
            goto lab_0x40950b;
        } else {
            // 0x409556
            __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 2916, "valid_options");
            goto lab_0x40956f;
        }
    } else {
        goto lab_0x40950b;
    }
  lab_0x40950b:
    if (v1 != 2 != (v2 == 2)) {
        char v3 = 0; // bp-9, 0x409516
        g50 = a1;
        g49 = a2;
        int64_t result = function_405650(a1, a2, (char)a3, 0, 0, a4, 1, (int64_t)&v3, (int64_t)a5, (int64_t)a6); // 0x409540
        return result;
    }
    goto lab_0x40956f;
  lab_0x40956f:
    // 0x40956f
    __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 2919, "valid_options");
    // 0x409588
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 2915, "valid_options");
    // 0x4095a1
    __assert_fail("co != NULL", "src/copy.c", 2912, "valid_options");
    // 0x4095ba
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
    // 0x4095d3
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
    return 0x41425f44494c4156 % (int128_t)(int64_t)"src/copy.c";
}
// Address range: 0x409600 - 0x40961c
int64_t function_409600(int64_t a1, int64_t a2) {
    if (a1 == a2) {
        // 0x409610
        return *(int64_t *)(a1 + 8) & -256 | 1;
    }
    // 0x40960a
    return 0;
}
// Address range: 0x409620 - 0x409636
int64_t function_409620(int64_t a1) {
    // 0x409620
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)a1);
    return &g76;
}
// Address range: 0x409640 - 0x409685
int64_t function_409640(int64_t a1, int64_t a2) {
    int64_t v1 = function_40c0a0(g51); // 0x409661
    int64_t result = 0; // 0x409669
    if (v1 != 0) {
        // 0x40966b
        free((int64_t *)*(int64_t *)(v1 + 16));
        free((int64_t *)v1);
        result = &g76;
    }
    // 0x40967f
    return result;
}
// Address range: 0x409690 - 0x4096c7
int64_t function_409690(int64_t a1, int64_t a2) {
    int64_t v1 = a1; // bp-40, 0x409694
    int64_t v2 = function_40b650(g51, &v1); // 0x4096a7
    if (v2 == 0) {
        // 0x4096c0
        return 0;
    }
    // 0x4096b1
    return *(int64_t *)(v2 + 16);
}
// Address range: 0x4096d0 - 0x409746
int64_t function_4096d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4100e0(24); // 0x4096e8
    int64_t v2 = function_410310(a1); // 0x4096f3
    int64_t * v3 = (int64_t *)v1; // 0x409702
    *v3 = a2;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x409705
    *v4 = v2;
    *(int64_t *)(v1 + 8) = a3;
    int64_t v5 = function_40c060(g51, v1); // 0x40970d
    if (v5 == 0) {
        // 0x409741
        function_410330(g51);
        // UNREACHABLE
    }
    int64_t result = 0; // 0x40971f
    if (v1 != v5) {
        // 0x409721
        free((int64_t *)*v4);
        free(v3);
        result = *(int64_t *)(v5 + 16);
    }
    // 0x409736
    return result;
}
// Address range: 0x409750 - 0x409786
int64_t function_409750(int64_t a1, int64_t a2) {
    int64_t result = function_40b8c0(103, 0, 0x4095f0, 0x409600, 0x409620); // 0x40976b
    g51 = result;
    if (result != 0) {
        // 0x40977c
        return result;
    }
    // 0x409781
    function_410330(103);
    // UNREACHABLE
}
// Address range: 0x409790 - 0x40979c
int64_t function_409790(void) {
    // 0x409790
    return function_40bb00(g51);
}
// Address range: 0x4097a0 - 0x4097c8
int64_t function_4097a0(char a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    *(int32_t *)a2 = (int32_t)a1;
    *(int64_t *)(v1 + 40) = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)(v1 + 24) = 0;
    *(int16_t *)(v1 + 32) = 0;
    *(int32_t *)(v1 + 16) = 1;
    return 0;
}
// Address range: 0x4097d0 - 0x409ab8
int64_t function_4097d0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x4097f1
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4097f5
    int64_t v3; // bp-4120, 0x4097d0
    int64_t v4 = &v3; // 0x4097fc
    int32_t v5; // 0x4097d0
    int64_t v6 = v5;
    int64_t * v7 = (int64_t *)(a1 + 24);
    int64_t v8 = v5;
    char * v9 = (char *)(a1 + 33);
    int64_t v10; // bp-4152, 0x4097d0
    __asm_rep_stosq_memset((char *)&v10, 0, 512);
    v10 = *v2;
    int64_t v11 = 0; // 0x40983f
    int64_t v12 = *v1; // 0x40983f
    int64_t result; // 0x4097d0
    int64_t fd; // 0x4097d0
    if (ioctl((int32_t)fd, -0x3fdf99f5) < 0) {
      lab_0x4099f0_2:
        // 0x4099f0
        result = 0;
        if (*v2 == 0) {
            // 0x4099fa
            *(char *)(a1 + 32) = 1;
            result = 0;
        }
      lab_0x4099d9:
        // 0x4099d9
        return result;
    }
    int64_t v13; // 0x4097d0
    int64_t v14; // 0x4097d0
    int64_t v15; // 0x4097d0
    int64_t v16; // 0x4097d0
    int64_t v17; // 0x4097d0
    int64_t v18; // 0x4097d0
    int64_t v19; // 0x4097d0
    int64_t fd2; // 0x4097d0
    int64_t v20; // 0x4097d0
    while (true) {
      lab_0x409845:
        if (v5 == 0) {
            // break -> 0x409a63
            break;
        }
        uint64_t v21 = *v7; // 0x409854
        if (v21 > -1 - v6) {
            // 0x409a7c
            __assert_fail("scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents", "src/extent-scan.c", 126, "extent_scan_read");
            return linkat(0x2f637273, (char *)0x2e6e6163732d746e, 0x63730063, "scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents", 0x3e2d6e61);
        }
        int64_t v22 = v11;
        int64_t v23 = *v1; // 0x40986a
        fd2 = v23;
        uint64_t v24 = v21 + v6; // 0x40986f
        *v7 = v24;
        uint128_t v25 = 24 * (int128_t)v24; // 0x40987d
        if ((int64_t)v25 < 0) {
            // 0x409a77
            function_410330(fd2);
            // UNREACHABLE
        }
        if (v25 % 0x1f0000000000000001 != 0) {
            // 0x409a77
            function_410330(fd2);
            // UNREACHABLE
        }
        int64_t v26 = function_410140(fd2, 24 * v24); // 0x4098a0
        *v1 = v26;
        int64_t v27 = v26 + v12 - v23; // 0x4098af
        v18 = v27;
        v15 = v22;
        if (v3 > 0x7fffffffffffffff - v8) {
            goto lab_0x409946;
        } else {
            // 0x4098d0
            fd2 = 0;
            v13 = 0;
            v16 = v8;
            v19 = v4;
            v20 = v3;
            v17 = v27;
            v14 = v22;
            goto lab_0x4098d5;
        }
    }
    // 0x409a63
    *v9 = 1;
    // 0x4099d9
    return v6 & 0xffffff00 | (int64_t)(*v2 != 0);
  lab_0x409946:
    // 0x409946
    fd2 = (int64_t)"fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length";
    __assert_fail("fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length", "src/extent-scan.c", 141, "extent_scan_read");
    int64_t v28 = (int64_t)"fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length"; // 0x40995f
    int64_t v29 = &g76; // 0x40995f
    int64_t v30 = (int64_t)"extent_scan_read"; // 0x40995f
    int64_t v31 = 141; // 0x40995f
    int64_t v32 = v18; // 0x40995f
    int64_t v33 = v15; // 0x40995f
    goto lab_0x409960;
  lab_0x409960:;
    int64_t v34 = v33;
    int64_t v35 = v31;
    int64_t v36 = v30;
    int64_t v37 = v29;
    uint64_t v38 = *v2; // 0x409960
    int64_t v39 = v37; // 0x409968
    int64_t v40 = v36; // 0x409968
    int64_t v41 = v35; // 0x409968
    int64_t v42 = v32; // 0x409968
    int64_t v43 = v38; // 0x409968
    int64_t v44 = v34; // 0x409968
    int64_t v45; // 0x4097d0
    int64_t v46; // 0x4097d0
    int32_t v47; // 0x4097d0
    int64_t v48; // 0x4097d0
    int64_t v49; // 0x4097d0
    if (v38 > v35) {
        goto lab_0x409902;
    } else {
        // 0x40996a
        v45 = v28;
        v48 = v37;
        v49 = v35;
        v47 = *(int32_t *)(v36 + 40);
        v46 = v34;
        goto lab_0x40996e;
    }
  lab_0x4098d5:;
    int64_t v50 = v14;
    int64_t v51 = v17;
    int64_t v52 = v20;
    int64_t v53 = v19;
    int64_t v54 = v16;
    int64_t v55 = v13;
    v28 = v55;
    v29 = v54;
    v30 = v53;
    v31 = v52;
    v32 = v51;
    v33 = v50;
    int64_t v56; // 0x4097d0
    int64_t v57; // 0x4097d0
    if ((int32_t)v50 == 0) {
        goto lab_0x409960;
    } else {
        int32_t v58 = *(int32_t *)(v53 + 40); // 0x4098de
        int64_t * v59 = (int64_t *)(v51 + 8); // 0x4098e2
        int64_t v60 = *v59; // 0x4098e2
        int64_t v61 = *(int64_t *)v51 + v60; // 0x4098ec
        int32_t * v62 = (int32_t *)(v51 + 16); // 0x4098f3
        if (*v62 != (v58 & -2) || v52 != v61) {
            // 0x4098fd
            v39 = v54;
            v40 = v53;
            v41 = v52;
            v42 = v51;
            v43 = v61;
            v44 = v50;
            v45 = v55;
            v48 = v54;
            v49 = v52;
            v47 = v58;
            v46 = v50;
            if (v61 > v52) {
                goto lab_0x409902;
            } else {
                goto lab_0x40996e;
            }
        } else {
            // 0x409a11
            *v62 = v58;
            fd2 = fd2 + 1 & 0xffffffff;
            *v59 = v60 + v54;
            v57 = v51;
            v56 = v50;
            goto lab_0x40991e;
        }
    }
  lab_0x409902:
    // 0x409902
    if (v43 - v41 < v39) {
        goto lab_0x4099f0_2;
    }
    // 0x409911
    *(int64_t *)v40 = v43;
    *(int64_t *)(v40 + 16) = v41 + v39 - v43;
    v57 = v42;
    v56 = v44;
    goto lab_0x40991e;
  lab_0x40991e:;
    int64_t v63 = v56;
    int64_t v64 = v57;
    int64_t v65 = fd2; // 0x409921
    int64_t v66 = v64; // 0x409921
    int64_t v67 = v63; // 0x409921
    int64_t v68; // 0x4097d0
    int64_t v69; // 0x4097d0
    int64_t v70; // 0x4097d0
    if (v5 <= (int32_t)fd2) {
        // 0x40991e
        v68 = v64 + 16;
        v70 = v64;
        v69 = v63;
        goto lab_0x409995;
    } else {
        goto lab_0x409923;
    }
  lab_0x40996e:;
    int64_t v71 = v45 + 1; // 0x409971
    fd2 = v71 & 0xffffffff;
    int64_t v72 = v46 + 1 & 0xffffffff; // 0x409974
    int64_t v73 = *v1 + 24 * (v46 & 0xffffffff); // 0x409981
    *(int64_t *)v73 = v49;
    *(int64_t *)(v73 + 8) = v48;
    int64_t v74 = v73 + 16;
    *(int32_t *)v74 = v47;
    v68 = v74;
    v70 = v73;
    v69 = v72;
    if (v5 > (int32_t)v71) {
        // 0x40996e
        v65 = fd2;
        v66 = v73;
        v67 = v72;
        goto lab_0x409923;
    } else {
        goto lab_0x409995;
    }
  lab_0x409923:;
    int64_t v75 = 56 * (v65 & 0xffffffff) + v4; // 0x409933
    int64_t v76 = *(int64_t *)(v75 + 16); // 0x409937
    uint64_t v77 = *(int64_t *)v75; // 0x40993b
    v13 = v65;
    v16 = v76;
    v19 = v75;
    v20 = v77;
    v17 = v66;
    v14 = v67;
    v18 = v66;
    v15 = v67;
    if (v77 > 0x7fffffffffffffff - v76) {
        goto lab_0x409946;
    } else {
        goto lab_0x4098d5;
    }
  lab_0x409995:
    // 0x409995
    v11 = v69;
    if (*(char *)v68 % 2 != 0) {
        // 0x409a50
        *v9 = 1;
        // 0x409a56
        *v7 = v11 & 0xffffffff;
        result = 1;
        goto lab_0x4099d9;
    }
    char v78 = *v9; // 0x40999f
    uint32_t v79 = (int32_t)v11; // 0x4099a5
    if (v79 >= 73) {
        if (v78 != 0) {
            // 0x409a56
            *v7 = v11 & 0xffffffff;
            result = 1;
            goto lab_0x4099d9;
        } else {
            int64_t v80 = v11 + 0xffffffff & 0xffffffff; // 0x4099b3
            *v7 = v80;
            int64_t v81 = *v1 + 24 * v80;
            *v2 = *(int64_t *)(v81 - 24) + *(int64_t *)(v81 - 16);
            result = 1;
            goto lab_0x4099d9;
        }
    }
    // 0x409a24
    v12 = v70;
    *v7 = v11 & 0xffffffff;
    if (v78 != 0) {
        // 0x4099d9
        return 1;
    }
    int64_t v82 = *(int64_t *)v12 + *(int64_t *)(v12 + 8); // 0x409a34
    *v2 = v82;
    if (v79 == 72) {
        // 0x4099d9
        return 1;
    }
    // 0x409a30
    __asm_rep_stosq_memset((char *)&v10, 0, 512);
    v10 = v82;
    if (ioctl(*(int32_t *)&fd2, -0x3fdf99f5) < 0) {
        goto lab_0x4099f0_2;
    }
    goto lab_0x409845;
}
// Address range: 0x409ac0 - 0x409b24
int64_t function_409ac0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_40aa00(a1, v1) - a1; // 0x409acf
    uint64_t size = v2 + 9; // 0x409ad2
    int64_t result = v1; // 0x409ae0
    if (size >= 257) {
        int64_t * mem = malloc((int32_t)size); // 0x409ae2
        result = (int64_t)mem;
        if (mem == NULL) {
            // 0x409b14
            return 0;
        }
    }
    int64_t * v3 = mempcpy((int64_t *)result, (int64_t *)a1, (int32_t)v2); // 0x409af8
    *v3 = 0x5858585858587543;
    *(char *)((int64_t)v3 + 8) = 0;
    // 0x409b14
    return result;
}
// Address range: 0x409b30 - 0x409b41
int64_t function_409b30(int64_t path2, int64_t a2) {
    uint32_t path1 = *(int32_t *)(a2 + 8); // 0x409b36
    return symlinkat((char *)(int64_t)path1, path1, (char *)path2);
}
// Address range: 0x409b50 - 0x409c85
int64_t function_409b50(int64_t fd, int64_t path1, int64_t a3, int64_t a4, int32_t flag, int64_t a6) {
    int32_t fd2 = a3; // 0x409b74
    char * path2 = (char *)a4; // 0x409b74
    uint32_t v1 = linkat((int32_t)fd, (char *)path1, fd2, path2, flag); // 0x409b74
    int64_t result = v1; // 0x409b7e
    if ((char)a6 != 1 || v1 == 0) {
        // 0x409b94
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x409b8a
    if (*v2 != 17) {
        // 0x409b94
        return result;
    }
    // 0x409bb0
    int64_t v3; // bp-312, 0x409b50
    int64_t v4 = function_409ac0(a4, &v3); // 0x409bbd
    if (v4 == 0) {
        // 0x409b94
        return 0xffffffff;
    }
    int64_t v5 = 0x100000000 * fd >> 32; // bp-344, 0x409be3
    int64_t v6 = function_40e910(v4, 0, &v5, 0x409aa0, 6); // 0x409bf6
    int64_t v7 = 0x100000000 * (int64_t)v2 >> 32; // 0x409bfb
    int32_t v8; // 0x409b50
    if ((int32_t)v6 == 0) {
        char * path = (char *)v4; // 0x409c4f
        int32_t v9 = 0; // 0x409c5e
        if (renameat(fd2, path, fd2, path2) != 0) {
            // 0x409c60
            v9 = *(int32_t *)v7;
        }
        // 0x409c63
        unlinkat(fd2, path, 0);
        v8 = v9;
    } else {
        // 0x409c04
        v8 = *(int32_t *)v7;
    }
    // 0x409c07
    if (v4 != (int64_t)&v3) {
        // 0x409c11
        free((int64_t *)v4);
    }
    int64_t result2 = 1; // 0x409c2b
    if (v8 != 0) {
        // 0x409c31
        *(int32_t *)v7 = v8;
        result2 = 0xffffffff;
    }
    // 0x409b94
    return result2;
}
// Address range: 0x409c90 - 0x409d90
int64_t function_409c90(int64_t path1, int64_t a2, int64_t a3, char a4) {
    int32_t fd = a2; // 0x409cac
    char * path2 = (char *)a3; // 0x409cac
    uint32_t v1 = symlinkat((char *)path1, fd, path2); // 0x409cac
    int64_t result = v1; // 0x409cb1
    if (a4 != 1 || v1 == 0) {
        // 0x409cca
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x409cbd
    if (*v2 != 17) {
        // 0x409cca
        return result;
    }
    // 0x409ce0
    int64_t v3; // bp-312, 0x409c90
    int64_t v4 = function_409ac0(a3, &v3); // 0x409ceb
    if (v4 == 0) {
        // 0x409cca
        return 0xffffffff;
    }
    int64_t v5 = &v3; // 0x409ce0
    int64_t v6 = path1; // bp-328, 0x409d0f
    int32_t v7; // 0x409c90
    if ((int32_t)function_40e910(v4, 0, &v6, 0x409b30, 6) == 0) {
        char * path = (char *)v4; // 0x409d4a
        if (renameat(fd, path, fd, path2) == 0) {
            // 0x409d53
            if (v4 != v5) {
                // 0x409d58
                free((int64_t *)v4);
            }
            // 0x409cca
            return 1;
        }
        // 0x409d68
        unlinkat(fd, path, 0);
        v7 = *v2;
    } else {
        // 0x409d20
        v7 = *v2;
    }
    // 0x409d23
    if (v4 != v5) {
        // 0x409d28
        free((int64_t *)v4);
    }
    int64_t result2 = 1; // 0x409d33
    if (v7 != 0) {
        // 0x409d79
        *v2 = v7;
        result2 = 0xffffffff;
    }
    // 0x409cca
    return result2;
}
// Address range: 0x409d90 - 0x409e1a
int64_t function_409d90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409d90
    int64_t v1; // 0x409d90
    int64_t v2 = function_40c3f0(a1, a2, a3, v1, v1); // 0x409d9a
    int64_t result = v2 & 0xffffffff; // 0x409d9f
    int32_t v3 = v2; // 0x409da1
    if (v3 == -2) {
        // 0x409df0
        error(0, *__errno_location(), "%s", (char *)function_40dfd0(a1));
        return result;
    }
    if (v3 == -1) {
        // 0x409dab
        function_40dfd0(a3);
        error(0, *__errno_location(), dcgettext(NULL, "preserving permissions for %s", 5));
    }
    // 0x409de0
    return result;
}
// Address range: 0x409e20 - 0x409e7c
int64_t function_409e20(int64_t a1) {
    // 0x409e20
    int64_t v1; // 0x409e20
    int64_t v2 = function_40c430(a1, v1, (int32_t)v1); // 0x409e27
    int64_t result = v2 & 0xffffffff; // 0x409e2c
    if ((int32_t)v2 == 0) {
        // 0x409e32
        return result;
    }
    // 0x409e40
    function_40dfd0(a1);
    error(0, *__errno_location(), dcgettext(NULL, "setting permissions for %s", 5));
    return result;
}
// Address range: 0x409e80 - 0x409f6f
int64_t function_409e80(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x409eb9
    int64_t * mem = malloc((int32_t)size); // 0x409ec3
    int64_t result = 0; // 0x409ece
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x409ed9
        if (v1 < 0) {
            // 0x409f38
            if (*__errno_location() != 34) {
                // 0x409f42
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x409ed9
        int64_t v3; // 0x409e80
        if (buf_size > v2) {
            // 0x409f50
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x409eeb
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x409ef8
            int64_t * mem2 = malloc((int32_t)size2); // 0x409efe
            if (mem2 == NULL) {
                // 0x409f0b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x409f38
                if (*__errno_location() != 34) {
                    // 0x409f42
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x409ee6
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x409f50
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x409eeb
            free(buf);
        }
        // 0x409f20
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x409f60
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x409f0b_2:
    // 0x409f0b
    return result;
}
// Address range: 0x409f70 - 0x40a03e
int64_t function_409f70(int64_t path, int64_t a2) {
    int64_t v1 = function_40aa00(path, a2); // 0x409f84
    uint64_t result = function_40aa60(v1); // 0x409f8f
    if (result < 15) {
        // 0x409f9a
        return result;
    }
    int16_t * v2 = (int16_t *)v1; // 0x409fb5
    *v2 = 46;
    int32_t * v3 = __errno_location(); // 0x409fc1
    *v3 = 0;
    int32_t v4 = pathconf((char *)path, _PC_NAME_MAX); // 0x409fd7
    int64_t result2 = v4; // 0x409fd7
    int64_t v5; // 0x409f70
    if (v4 < 0) {
        // 0x40a030
        v5 = 255;
        if (*v3 != 0) {
            goto lab_0x409fe4;
        } else {
            // 0x409fe1
            v5 = result2;
            goto lab_0x409fe4;
        }
    } else {
        // 0x409fe1
        v5 = result2;
        goto lab_0x409fe4;
    }
  lab_0x409fe4:;
    uint64_t v6 = v5;
    if (result <= v6) {
        // 0x409f9a
        return result2;
    }
    int64_t v7 = a2 + path; // 0x409fee
    uint64_t result3 = v7 - v1; // 0x409ff5
    *(char *)(result3 >= v6 ? v1 - 1 + v6 : v7) = 126;
    *(char *)((result3 >= v6 ? v6 : result3 + 1) + v1) = 0;
    return result3;
}
// Address range: 0x40a040 - 0x40a094
int64_t function_40a040(int64_t a1) {
    int64_t result = a1; // 0x40a047
    int64_t result2; // 0x40a040
    if (a1 == 0) {
        char * env_val = getenv("SIMPLE_BACKUP_SUFFIX"); // 0x40a085
        result = (int64_t)env_val;
        result2 = result;
        if (env_val == NULL) {
            // 0x40a04e
            g52 = (char *)&g3;
            return result;
        }
    }
    char * v1 = (char *)result; // 0x40a049
    if (*v1 == 0) {
        // 0x40a04e
        g52 = (char *)&g3;
        return result2;
    }
    // 0x40a060
    int64_t v2; // 0x40a040
    int64_t result3 = function_40aa00(result, v2); // 0x40a063
    if (result3 != result) {
        // 0x40a04e
        g52 = (char *)&g3;
        return result3;
    }
    // 0x40a06d
    g52 = v1;
    return result3;
}
// Address range: 0x40a0a0 - 0x40a561
int64_t function_40a0a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t str = function_40aa00(a1, a2); // 0x40a0be
    int32_t len = strlen((char *)str); // 0x40a0c9
    int64_t v1 = (int64_t)g52; // 0x40a0d1
    int64_t str2 = v1; // 0x40a0e3
    if (g52 == NULL) {
        // 0x40a550
        function_40a040(v1);
        str2 = (int64_t)g52;
    }
    int64_t v2 = str - a1; // 0x40a0ce
    int64_t v3 = len + (int32_t)v2; // 0x40a0ee
    uint64_t v4 = (int64_t)strlen((char *)str2) + 1; // 0x40a0f3
    int64_t v5 = v3 + 1; // 0x40a0fb
    int32_t size = (int32_t)((v4 >= 9 ? v4 : 9) + v5); // 0x40a120
    int64_t * mem = malloc(size); // 0x40a120
    int64_t result = (int64_t)mem; // 0x40a120
    if (mem == NULL) {
        // 0x40a3fd
        return result;
    }
    int32_t v6 = v4; // 0x40a0ff
    int64_t v7 = v3 + 2;
    int64_t v8 = 0x100000000 * a2 >> 32;
    int64_t dirp2 = 0;
    int64_t v9 = v2; // 0x40a0a0
    int64_t result2 = result;
    struct __dirstream * v10; // 0x40a0a0
    int64_t v11; // 0x40a0a0
    int64_t v12; // 0x40a0a0
    int64_t v13; // 0x40a0a0
    int64_t v14; // 0x40a0a0
    int64_t v15; // 0x40a0a0
    int64_t v16; // 0x40a0a0
    int64_t v17; // 0x40a0a0
    int64_t v18; // 0x40a0a0
    int64_t v19; // 0x40a0a0
    int32_t v20; // 0x40a146
    int64_t v21; // 0x40a158
    while (true) {
      lab_0x40a134:
        // 0x40a134
        v15 = result2;
        v14 = v9;
        int64_t v22 = dirp2;
        v18 = v8;
        memcpy((int64_t *)v15, (int64_t *)a1, (int32_t)v5);
        v20 = v18;
        if (v20 == 1) {
            // 0x40a420
            memcpy((int64_t *)(v15 + v3), (int64_t *)g52, v6);
            v19 = v18;
            v13 = v22;
            v17 = v15;
            goto lab_0x40a38b;
        } else {
            int64_t v23 = v15 + v14; // 0x40a151
            v21 = function_40aa60(v23);
            if (v22 == 0) {
                int16_t * v24 = (int16_t *)v23; // 0x40a48d
                int16_t v25 = *v24; // 0x40a48d
                *v24 = 46;
                int64_t v26 = function_40a880(); // 0x40a49b
                int64_t v27 = v21 + v23; // 0x40a4a0
                if (v26 == 0) {
                    // 0x40a500
                    __errno_location();
                    *v24 = v25;
                    *(int32_t *)v27 = 0x7e317e2e;
                    *(char *)(v27 + 4) = 0;
                    v12 = 0;
                    v16 = v15;
                    goto lab_0x40a370;
                } else {
                    // 0x40a4ac
                    *v24 = v25;
                    *(int32_t *)v27 = 0x7e317e2e;
                    *(char *)(v27 + 4) = 0;
                    v10 = (struct __dirstream *)v26;
                    v11 = v26;
                    goto lab_0x40a171;
                }
            } else {
                struct __dirstream * dirp = (struct __dirstream *)v22;
                rewinddir(dirp);
                v10 = dirp;
                v11 = v22;
                goto lab_0x40a171;
            }
        }
    }
  lab_0x40a538_2:
    // 0x40a538
    if (dirp2 != 0) {
        // 0x40a541
        closedir((struct __dirstream *)dirp2);
    }
    // 0x40a3fd
    return result2;
  lab_0x40a370:;
    int64_t v28 = v16;
    v19 = v18;
    v13 = v12;
    v17 = v28;
    int64_t v29 = v28; // 0x40a0a0
    int64_t v30 = v12; // 0x40a0a0
    int64_t v31 = v28; // 0x40a0a0
    int64_t v32 = v12; // 0x40a0a0
    int64_t v33 = v18; // 0x40a0a0
    int64_t * v34; // 0x40a0a0
    int64_t v35; // 0x40a0a0
    switch ((int32_t)v35) {
        case 2: {
            goto lab_0x40a440;
        }
        case 3: {
            // 0x40a4c8
            v34 = (int64_t *)v28;
          lab_0x40a4c8:
            // 0x40a4c8
            free(v34);
            *__errno_location() = 12;
            // 0x40a3fd
            return 0;
        }
        case 1: {
            goto lab_0x40a470;
        }
        default: {
            goto lab_0x40a38b;
        }
    }
  lab_0x40a2ea:;
    // 0x40a2ea
    int64_t v36; // 0x40a0a0
    int64_t v37 = v36;
    int32_t v38; // 0x40a0a0
    int32_t v39 = v38;
    int64_t v40 = v37 + v3; // 0x40a2fe
    *(int16_t *)v40 = 0x7e2e;
    int64_t v41 = v40 + 2; // 0x40a304
    *(char *)v41 = 48;
    uint64_t v42; // 0x40a0a0
    int64_t str4; // 0x40a1dd
    int64_t v43; // 0x40a274
    int64_t v44 = v42 - 1 + (int64_t)memcpy((int64_t *)(v41 + v43), (int64_t *)str4, (int32_t)v42 + 2); // 0x40a329
    char * v45 = (char *)v44;
    char v46 = *v45; // 0x40a329
    int64_t v47 = v44; // 0x40a334
    char * v48 = v45; // 0x40a334
    char v49 = v46; // 0x40a334
    if (v46 == 57) {
        *(char *)v47 = 48;
        int64_t v50 = v47 - 1; // 0x40a343
        char * v51 = (char *)v50;
        char v52 = *v51; // 0x40a347
        v47 = v50;
        v48 = v51;
        v49 = v52;
        while (v52 == 57) {
            // 0x40a340
            *(char *)v47 = 48;
            v50 = v47 - 1;
            v51 = (char *)v50;
            v52 = *v51;
            v47 = v50;
            v48 = v51;
            v49 = v52;
        }
    }
    // 0x40a34f
    *v48 = v49 + 1;
    struct __dirstream * dirp3; // 0x40a0a0
    struct dirent * v53 = readdir(dirp3); // 0x40a35a
    int64_t v54; // 0x40a0a0
    v12 = v54;
    v16 = v37;
    if (v53 == NULL) {
        // break (via goto) -> 0x40a370
        goto lab_0x40a370;
    }
    // 0x40a1a9
    int64_t v55; // 0x40a281
    int32_t v56 = v55;
    int64_t str3 = (int64_t)v53 + 19; // 0x40a1a9
    int32_t v57 = v56; // 0x40a1ba
    int32_t v58 = v39; // 0x40a1ba
    int64_t v59 = v43; // 0x40a1ba
    int64_t v60 = v37; // 0x40a1ba
    uint64_t v61; // 0x40a189
    if (v61 > (int64_t)strlen((char *)str3)) {
        // break -> 0x40a198
        goto lab_0x40a198_2;
    }
    // 0x40a1bc
    int32_t n; // 0x40a0a0
    int32_t memcmp_rc = memcmp((int64_t *)(v37 + v14), (int64_t *)str3, n); // 0x40a1cf
    v57 = v56;
    v58 = v39;
    v59 = v43;
    v60 = v37;
    int32_t v62 = v56; // 0x40a1d6
    int32_t v63 = v39; // 0x40a1d6
    int64_t v64 = v43; // 0x40a1d6
    int64_t v65 = v37; // 0x40a1d6
    int64_t v66 = str3; // 0x40a1d6
    if (memcmp_rc != 0) {
        // break -> 0x40a198
        goto lab_0x40a198_2;
    }
    goto lab_0x40a1d8;
  lab_0x40a2bd:;
    // 0x40a2bd
    int64_t v91; // 0x40a0a0
    int32_t v92 = v91;
    int64_t v67; // 0x40a0a0
    int64_t * v93 = (int64_t *)v67;
    int64_t * mem2 = realloc(v93, v92); // 0x40a2cf
    v38 = v92;
    v36 = (int64_t)mem2;
    v34 = v93;
    if (mem2 == NULL) {
        goto lab_0x40a4c8;
    }
    goto lab_0x40a2ea;
  lab_0x40a38b:
    // 0x40a38b
    result2 = v17;
    dirp2 = v13;
    if ((char)a3 == 0) {
        // break -> 0x40a538
        goto lab_0x40a538_2;
    }
    // 0x40a396
    v8 = v19;
    int64_t v94; // 0x40a0a0
    int64_t v95; // 0x40a0a0
    if (dirp2 == 0) {
        goto lab_0x40a410;
    } else {
        int32_t v96 = dirfd((struct __dirstream *)dirp2); // 0x40a39e
        v94 = result2 + v14;
        v95 = v96;
        v9 = v14;
        if (v96 < 0) {
            goto lab_0x40a410;
        } else {
            goto lab_0x40a3ad;
        }
    }
  lab_0x40a410:
    // 0x40a410
    v94 = result2;
    v95 = 0xffffff9c;
    v9 = 0;
    goto lab_0x40a3ad;
  lab_0x40a171:
    // 0x40a171
    v54 = v11;
    dirp3 = v10;
    struct dirent * v101 = readdir(dirp3); // 0x40a19b
    v29 = v15;
    v30 = v54;
    if (v101 == NULL) {
        goto lab_0x40a440;
    } else {
        // 0x40a1a9
        v61 = v21 + 4;
        n = (int32_t)v21 + 2;
        int64_t v70 = n;
        struct dirent * v102 = v101; // 0x40a19b
        int64_t v103 = v15;
        int64_t v104 = 2;
        int32_t v105 = size;
        int32_t v106 = 1;
        while (true) {
            int32_t v107 = v106;
            int32_t v108 = v105;
            int64_t v109 = v104;
            int64_t v110 = v103;
            int64_t str5 = (int64_t)v102 + 19; // 0x40a1a9
            v57 = v107;
            v58 = v108;
            v59 = v109;
            v60 = v110;
            if (v61 <= (int64_t)strlen((char *)str5)) {
                int32_t memcmp_rc3 = memcmp((int64_t *)(v110 + v14), (int64_t *)str5, n); // 0x40a1cf
                v57 = v107;
                v58 = v108;
                v59 = v109;
                v60 = v110;
                v62 = v107;
                v63 = v108;
                v64 = v109;
                v65 = v110;
                v66 = str5;
                if (memcmp_rc3 == 0) {
                    while (true) {
                      lab_0x40a1d8:
                        // 0x40a1d8
                        v67 = v65;
                        int64_t v68 = v64;
                        int32_t v69 = v63;
                        int32_t n2 = v62;
                        str4 = v66 + v70;
                        char v71 = *(char *)str4; // 0x40a1e0
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if (v71 >= 58) {
                            // break -> 0x40a198
                            break;
                        }
                        int64_t v72 = str4 + 1; // 0x40a1eb
                        char v73 = *(char *)v72; // 0x40a1eb
                        int64_t v74 = v71 == 57; // 0x40a1f6
                        int64_t v75 = (int64_t)v73 & 0xffffffff; // 0x40a1fa
                        int64_t v76 = v75; // 0x40a202
                        int64_t v77 = v74; // 0x40a202
                        int64_t v78 = v75; // 0x40a202
                        int64_t v79 = 1; // 0x40a202
                        int64_t v80 = v74; // 0x40a202
                        if (v73 == 57 || (int32_t)v73 < 57) {
                            int64_t v81 = 2; // 0x40a20d
                            char v82 = *(char *)(v81 + str4); // 0x40a211
                            int64_t v83 = v77 & (int64_t)((char)v76 == 57);
                            int64_t v84 = (int64_t)v82 & 0xffffffff; // 0x40a218
                            int64_t v85 = v81; // 0x40a220
                            v77 = v83;
                            v78 = v84;
                            v79 = v81;
                            v80 = v83;
                            while (v82 == 57 || (int32_t)v82 < 57) {
                                // 0x40a208
                                v81 = v85 + 1;
                                v82 = *(char *)(v81 + str4);
                                v83 = v77 & (int64_t)((char)v84 == 57);
                                v84 = (int64_t)v82 & 0xffffffff;
                                v85 = v81;
                                v77 = v83;
                                v78 = v84;
                                v79 = v81;
                                v80 = v83;
                            }
                        }
                        // 0x40a222
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if ((char)v78 != 126) {
                            // break -> 0x40a198
                            break;
                        }
                        // 0x40a22a
                        v42 = v79;
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if (*(char *)(v42 + v72) != 0) {
                            // break -> 0x40a198
                            break;
                        }
                        int64_t v86 = v80;
                        uint64_t v87 = (int64_t)n2; // 0x40a235
                        int64_t v88 = v86; // 0x40a23d
                        if (v42 <= v87) {
                            // 0x40a23f
                            v57 = n2;
                            v58 = v69;
                            v59 = v68;
                            v60 = v67;
                            if (v42 != v87) {
                                // break -> 0x40a198
                                break;
                            }
                            int32_t memcmp_rc2 = memcmp((int64_t *)(v7 + v67), (int64_t *)str4, n2); // 0x40a25c
                            v57 = n2;
                            v58 = v69;
                            v59 = v68;
                            v60 = v67;
                            v88 = v86 % 256;
                            if (memcmp_rc2 >= 0 == (memcmp_rc2 != 0)) {
                                // break -> 0x40a198
                                break;
                            }
                        }
                        // 0x40a274
                        v43 = v88 % 256;
                        v55 = v43 + v42;
                        int64_t v89 = v3 + 4 + v55; // 0x40a28a
                        v38 = v69;
                        v36 = v67;
                        if (v89 > (int64_t)v69) {
                            int64_t v90 = 2 * v89; // 0x40a2a6
                            if (v90 < 0) {
                                // 0x40a4e8
                                v91 = v89;
                                goto lab_0x40a2bd;
                            } else {
                                // 0x40a2af
                                v91 = v90;
                                if (v89 < 0) {
                                    // 0x40a4e8
                                    v91 = v89;
                                    goto lab_0x40a2bd;
                                } else {
                                    goto lab_0x40a2bd;
                                }
                            }
                        } else {
                            goto lab_0x40a2ea;
                        }
                    }
                }
            }
          lab_0x40a198_2:
            // 0x40a198
            v103 = v60;
            v104 = v59;
            v105 = v58;
            v106 = v57;
            v102 = readdir(dirp3);
            v12 = v54;
            v16 = v103;
            if (v102 == NULL) {
                // break -> 0x40a370
                break;
            }
        }
        goto lab_0x40a370;
    }
  lab_0x40a3ad:
    // 0x40a3ad
    if ((int32_t)function_40dff0(0xffffff9c, a1, v95, v94, (int64_t)((int32_t)v8 != 1)) == 0) {
        // break -> 0x40a538
        goto lab_0x40a538_2;
    }
    int32_t * v97 = __errno_location(); // 0x40a3d0
    int32_t v98 = *v97; // 0x40a3d5
    if (v98 != 17) {
        if (dirp2 != 0) {
            // 0x40a3e8
            closedir((struct __dirstream *)dirp2);
        }
        // 0x40a3f0
        free((int64_t *)result2);
        *v97 = v98;
        // 0x40a3fd
        return 0;
    }
    goto lab_0x40a134;
  lab_0x40a440:;
    int64_t v99 = v30;
    int64_t v100 = v29;
    v31 = v100;
    v32 = v99;
    v33 = v18;
    if (v20 == 2) {
        // 0x40a447
        memcpy((int64_t *)(v100 + v3), (int64_t *)g52, v6);
        v31 = v100;
        v32 = v99;
        v33 = 1;
    }
    goto lab_0x40a470;
  lab_0x40a470:
    // 0x40a470
    function_409f70(v31, v3);
    v19 = v33;
    v13 = v32;
    v17 = v31;
    goto lab_0x40a38b;
}
// Address range: 0x40a570 - 0x40a57a
int64_t function_40a570(int64_t a1, int32_t a2) {
    // 0x40a570
    return function_40a0a0(a1, (int64_t)a2, 1);
}
// Address range: 0x40a580 - 0x40a5ac
int64_t function_40a580(void) {
    // 0x40a580
    int64_t v1; // 0x40a580
    int64_t v2 = function_413ac0(v1, v1, g5, (int64_t *)&g4, 4, g37); // 0x40a59b
    return (int64_t)*(int32_t *)(4 * v2 + (int64_t)&g4);
}
// Address range: 0x40a5b0 - 0x40a5ca
int64_t function_40a5b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_40a0a0(a1, a2, 0); // 0x40a5b6
    if (result != 0) {
        // 0x40a5c0
        return result;
    }
    // 0x40a5c5
    function_410330(a1);
    // UNREACHABLE
}
// Address range: 0x40a5d0 - 0x40a5e2
int64_t function_40a5d0(int64_t a1, int64_t a2) {
    // 0x40a5d0
    if (a2 == 0) {
        // 0x40a5da
        return 2;
    }
    int64_t v1; // 0x40a5d0
    if ((char)v1 != 0) {
        // 0x40a5e0
        return function_40a580();
    }
    // 0x40a5da
    return 2;
}
// Address range: 0x40a5f0 - 0x40a631
int64_t function_40a5f0(int64_t a1, int64_t a2) {
    // 0x40a5f0
    if (a2 != 0) {
        int64_t v1; // 0x40a5f0
        if ((char)v1 != 0) {
            // 0x40a62c
            return function_40a580();
        }
    }
    char * env_val = getenv("VERSION_CONTROL"); // 0x40a603
    if (env_val == NULL) {
        // 0x40a612
        return 2;
    }
    // 0x40a60d
    if (*env_val != 0) {
        // 0x40a62c
        return function_40a580();
    }
    // 0x40a612
    return 2;
}
// Address range: 0x40a640 - 0x40a6b0
int64_t function_40a640(int64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t v1; // 0x40a640
    if (a1 == 0) {
        // 0x40a654
        v1 = a2 != 0 ? a2 : 0x2000;
        // 0x40a65e
        return v1 > a3 ? a3 : v1;
    }
    // 0x40a668
    if (a2 == 0) {
        // 0x40a654
        v1 = a1;
        // 0x40a65e
        return v1 > a3 ? a3 : v1;
    }
    uint64_t v2 = a2;
    int64_t v3 = a1 % v2;
    int64_t v4 = v2; // 0x40a67b
    while (v3 != 0) {
        // 0x40a673
        v2 = v3;
        v3 = v4 % v2;
        v4 = v2;
    }
    uint64_t v5 = a1 / v2; // 0x40a682
    uint64_t result = v5 * a2; // 0x40a688
    if (result > a3) {
        // 0x40a654
        v1 = a1;
        // 0x40a65e
        return v1 > a3 ? a3 : v1;
    }
    // 0x40a694
    if (result / a2 == v5) {
        // 0x40a65e
        return result;
    }
    // 0x40a654
    v1 = a1;
    // 0x40a65e
    return v1 > a3 ? a3 : v1;
}
// Address range: 0x40a6b0 - 0x40a6b8
int64_t function_40a6b0(int64_t a1) {
    // 0x40a6b0
    g53 = a1;
    int64_t result; // 0x40a6b0
    return result;
}
// Address range: 0x40a6c0 - 0x40a7bd
int64_t function_40a6c0(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g40; // 0x40a6c4
    int64_t v2; // 0x40a6c0
    if (function_4105e0(v1) != 0) {
        int64_t v3 = function_410610(v1, 0, 1); // 0x40a77a
        int64_t v4 = (int64_t)g40; // 0x40a77f
        v2 = v4;
        if ((int32_t)v3 == 0) {
            int64_t v5 = function_4105a0(v4, 0); // 0x40a6f8
            int64_t v6 = (int64_t)g40; // 0x40a6fd
            v2 = v6;
            if ((int32_t)v5 == 0) {
                goto lab_0x40a78e;
            } else {
                // 0x40a70c
                function_413b80(v6);
                goto lab_0x40a718;
            }
        } else {
            goto lab_0x40a78e;
        }
    } else {
        // 0x40a6dc
        if ((int32_t)function_413b80(v1) == 0) {
            // 0x40a6e8
            return function_40a7e0();
        }
        goto lab_0x40a718;
    }
  lab_0x40a78e:
    // 0x40a78e
    if ((int32_t)function_413b80(v2) == 0) {
        // 0x40a79b
        return function_40a7e0();
    }
    goto lab_0x40a718;
  lab_0x40a718:;
    char * v7 = dcgettext(NULL, "error closing file", 5); // 0x40a724
    int32_t * err_num = __errno_location(); // 0x40a733
    if (g53 == 0) {
        // 0x40a7a8
        error(0, *err_num, "%s", v7);
    } else {
        // 0x40a740
        error(0, *err_num, "%s: %s", (char *)function_40de20((int64_t)g53), v7);
    }
    // 0x40a75f
    function_40a7e0();
    _exit(g28);
    // UNREACHABLE
}
// Address range: 0x40a7c0 - 0x40a7c8
int64_t function_40a7c0(int64_t a1) {
    // 0x40a7c0
    g55 = a1;
    int64_t result; // 0x40a7c0
    return result;
}
// Address range: 0x40a7d0 - 0x40a7d8
int64_t function_40a7d0(int64_t a1) {
    // 0x40a7d0
    g54 = a1;
    int64_t result; // 0x40a7d0
    return result;
}
// Address range: 0x40a7e0 - 0x40a87e
int64_t function_40a7e0(void) {
    // 0x40a7e0
    int32_t * err_num; // 0x40a7f6
    if ((int32_t)function_413b80((int64_t)g39) == 0) {
        goto lab_0x40a80c;
    } else {
        // 0x40a7f6
        err_num = __errno_location();
        if (g54 == 0) {
            goto lab_0x40a823;
        } else {
            // 0x40a807
            if (*err_num != 32) {
                goto lab_0x40a823;
            } else {
                goto lab_0x40a80c;
            }
        }
    }
  lab_0x40a80c:;
    int64_t result = function_413b80((int64_t)g42); // 0x40a813
    if ((int32_t)result == 0) {
        // 0x40a81c
        return result;
    }
    // 0x40a85e
    _exit(g28);
    // UNREACHABLE
  lab_0x40a823:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40a82f
    if (g55 == 0) {
        // 0x40a869
        error(0, *err_num, "%s", v1);
    } else {
        // 0x40a843
        error(0, *err_num, "%s: %s", (char *)function_40de20((int64_t)g55), v1);
    }
    // 0x40a85e
    _exit(g28);
    // UNREACHABLE
}
// Address range: 0x40a880 - 0x40a916
int64_t function_40a880(void) {
    // 0x40a880
    int64_t name; // 0x40a880
    struct __dirstream * dirp = opendir((char *)name); // 0x40a888
    if (dirp == NULL) {
        // 0x40a8a2
        return (int64_t)dirp;
    }
    uint32_t v1 = dirfd(dirp); // 0x40a898
    if (v1 >= 3) {
        // 0x40a8a2
        return (int64_t)dirp;
    }
    int64_t v2 = function_410460((int64_t)v1, 1030, 3, name); // 0x40a8be
    int32_t * v3 = __errno_location(); // 0x40a8c6
    int32_t fd = v2; // 0x40a8ce
    if (fd < 0) {
        // 0x40a8d9
        closedir(dirp);
        return 0;
    }
    struct __dirstream * v4 = fdopendir(fd); // 0x40a8fb
    if (v4 == NULL) {
        // 0x40a90c
        close(fd);
    }
    // 0x40a8d9
    closedir(dirp);
    return (int64_t)v4;
}
// Address range: 0x40a920 - 0x40a938
int64_t function_40a920(void) {
    // 0x40a920
    int64_t v1; // 0x40a920
    int64_t result = function_40a9a0(v1); // 0x40a924
    if (result != 0) {
        // 0x40a92e
        return result;
    }
    // 0x40a933
    function_410330(v1);
    // UNREACHABLE
}
// Address range: 0x40a940 - 0x40a99d
int64_t function_40a940(int64_t a1) {
    // 0x40a940
    int64_t v1; // 0x40a940
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x40a94e
    int64_t v3 = function_40aa00(a1, v1); // 0x40a952
    int64_t result = v3 - a1; // 0x40a95a
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x40a983
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x40a970
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x40a983
            break;
        }
        result2--;
    }
    // 0x40a983
    return result2;
}
// Address range: 0x40a9a0 - 0x40a9fa
int64_t function_40a9a0(int64_t a1) {
    // 0x40a9a0
    int64_t v1; // 0x40a9a0
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x40a9bf
    if (mem == NULL) {
        // 0x40a9e6
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x40a9d5
    int64_t v3; // 0x40a9a0
    if (v2 == 0) {
        // 0x40a9f0
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x40a9d5
    *(char *)(v3 + result) = 0;
    // 0x40a9e6
    return result;
}
// Address range: 0x40aa00 - 0x40aa5b
int64_t function_40aa00(int64_t a1, int64_t a2) {
    // 0x40aa00
    int64_t v1; // 0x40aa00
    char v2 = v1;
    int64_t v3 = a1; // 0x40aa09
    int64_t v4 = a1; // 0x40aa09
    char v5 = v2; // 0x40aa09
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x40aa14
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x40aa10
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40aa1e
    if (v5 == 0) {
      lab_0x40aa5a:
        // 0x40aa5a
        return result;
    }
    int64_t v7 = v4; // 0x40aa48
    int64_t v8 = 0; // 0x40aa48
    int64_t v9; // 0x40aa00
    int64_t v10; // 0x40aa4a
    char v11; // 0x40aa4e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x40aa45
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40aa4a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x40aa45
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40aa3a
    char v14 = *(char *)v13; // 0x40aa3e
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
            // 0x40aa45
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40aa4a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x40aa45
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x40aa30
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40aa5a
    return result2;
}
// Address range: 0x40aa60 - 0x40aa8b
int64_t function_40aa60(int64_t str) {
    int32_t len = strlen((char *)str); // 0x40aa64
    int64_t result = len; // 0x40aa64
    if (len < 2) {
        // 0x40aa7a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x40aa78
    while (*(char *)(v1 + str) == 47) {
        // 0x40aa80
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40aa7a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40aa7a
    return result2;
}
// Address range: 0x40aa90 - 0x40aac3
int64_t function_40aa90(int64_t a1) {
    // 0x40aa90
    int64_t v1; // 0x40aa90
    int64_t v2 = function_40aa00(a1, v1); // 0x40aa99
    int64_t v3 = *(char *)v2 == 0 ? a1 : v2; // 0x40aaa4
    int64_t v4 = function_40aa60(v3); // 0x40aaab
    char * v5 = (char *)(v3 + v4); // 0x40aab3
    *v5 = 0;
    return v4 & -256 | (int64_t)(*v5 != 0);
}
// Address range: 0x40aad0 - 0x40aad5
int64_t function_40aad0(char fd, int32_t offset, int32_t length, int64_t advice) {
    // 0x40aad0
    return posix_fadvise((int32_t)fd, offset, length, (int32_t)advice);
}
// Address range: 0x40aae0 - 0x40ab01
int64_t function_40aae0(int64_t stream, int64_t advice, int64_t a3) {
    // 0x40aae0
    if (stream == 0) {
        // 0x40ab00
        int64_t result; // 0x40aae0
        return result;
    }
    // 0x40aae5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x40ab10 - 0x40ab5a
int64_t function_40ab10(int64_t path, int32_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, oflag); // 0x40ab23
    return function_40eaf0((int64_t)fd);
}
// Address range: 0x40ab60 - 0x40abe6
int64_t function_40ab60(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x40abd0
        int64_t result; // 0x40ab60
        return result;
    }
    int64_t result2 = function_4100e0(24); // 0x40ab7d
    *(int64_t *)result2 = function_410310(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(a3 + 8);
    *(int64_t *)(result2 + 16) = a3;
    int64_t v1 = function_40c060(a1, result2); // 0x40aba6
    if (v1 == 0) {
        // 0x40abe1
        function_410330(a1);
        // UNREACHABLE
    }
    // 0x40abb0
    if (result2 == v1) {
        // 0x40abd0
        return result2;
    }
    // 0x40abb5
    return function_40c330(result2);
}
// Address range: 0x40abf0 - 0x40ac2b
int64_t function_40abf0(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x40ac28
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x40abfd
    int64_t v2 = function_40b650(a1, &v1); // 0x40ac11
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x40ac30 - 0x40ad14
int64_t function_40ac30(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t v2 = *(int32_t *)(v1 + 24); // 0x40ac30
    switch (((v2 & 0xf000) - 0x1000) / 0x1000) {
        case 7: {
            // 0x40ac90
            if (*(int64_t *)(v1 + 48) != 0) {
                // 0x40aca8
                return (int64_t)dcgettext(NULL, "regular file", 5);
            }
            // break -> 0x40ac97
            break;
        }
        case 3: {
            // 0x40acc8
            return (int64_t)dcgettext(NULL, "directory", 5);
        }
        case 9: {
            // 0x40ace8
            return (int64_t)dcgettext(NULL, "symbolic link", 5);
        }
        case 5: {
            // 0x40acf8
            return (int64_t)dcgettext(NULL, "block special file", 5);
        }
        case 1: {
            // 0x40acb8
            return (int64_t)dcgettext(NULL, "character special file", 5);
        }
        case 0: {
            // 0x40ad08
            return (int64_t)dcgettext(NULL, "fifo", 5);
        }
        case 11: {
            // 0x40acd8
            return (int64_t)dcgettext(NULL, "socket", 5);
        }
        default: {
            // 0x40ac7a
            return (int64_t)dcgettext(NULL, "weird file", 5);
        }
    }
    // 0x40ac97
    return (int64_t)dcgettext(NULL, "regular empty file", 5);
}
// Address range: 0x40ad20 - 0x40ae93
int64_t function_40ad20(int32_t a1, int64_t * a2) {
    int32_t v1 = a1 & 0xf000; // 0x40ad27
    char v2 = 45; // 0x40ad20
    int64_t v3; // 0x40ad20
    int64_t v4; // 0x40ad20
    uint64_t v5; // 0x40ad20
    switch ((v1 - 0x1000) / 0x1000) {
        case 3: {
            // 0x40ad89
            v2 = 100;
        }
        case 7: {
          lab_0x40ad89:
            // 0x40ad89
            v4 = (int64_t)a2;
            v5 = (int64_t)a1;
            *(char *)a2 = v2;
            *(char *)(v4 + 1) = (v5 & 256) == 0 ? 45 : 114;
            int64_t v6 = v5 & 128; // 0x40ada2
            char v7 = v6; // 0x40adaa
            *(char *)(v4 + 2) = (v7 - ((char)(v6 == 0) | v7) & -74) + 119;
            int64_t v8 = v5 & 64; // 0x40adb7
            int64_t v9 = v8 - (v8 | (int64_t)(v8 == 0)); // 0x40adbd
            if ((v5 & 2048) == 0) {
                // 0x40ae60
                v3 = (v9 & 0xffffffb5) + 120 & 0xfffffffd;
            } else {
                // 0x40adcb
                v3 = (v9 & 0xffffffe0) + 115 & 0xfffffff3;
            }
            // break -> 0x40add1
            break;
        }
        case 5: {
            // 0x40ad89
            v2 = 98;
            // branch (via goto) -> 0x40ad89
            goto lab_0x40ad89;
        }
        case 1: {
            // 0x40ad89
            v2 = 99;
            // branch (via goto) -> 0x40ad89
            goto lab_0x40ad89;
        }
        case 9: {
            // 0x40ad89
            v2 = 108;
            // branch (via goto) -> 0x40ad89
            goto lab_0x40ad89;
        }
        case 0: {
            // 0x40ad89
            v2 = 112;
            // branch (via goto) -> 0x40ad89
            goto lab_0x40ad89;
        }
        default: {
            // 0x40ad76
            v2 = v1 != 0xc000 ? 63 : 115;
            // branch (via goto) -> 0x40ad89
            goto lab_0x40ad89;
        }
    }
    // 0x40add1
    *(char *)(v4 + 3) = (char)v3;
    int64_t v10 = v5 & 32; // 0x40add6
    char v11 = v10; // 0x40addc
    *(char *)(v4 + 4) = (v11 - ((char)(v10 == 0) | v11) & -69) + 114;
    int64_t v12 = v5 & 16; // 0x40ade9
    char v13 = v12; // 0x40adef
    *(char *)(v4 + 5) = (v13 - ((char)(v12 == 0) | v13) & -74) + 119;
    int64_t v14 = v5 & 8; // 0x40adfc
    int64_t v15 = v14 - (v14 | (int64_t)(v14 == 0)); // 0x40ae02
    int64_t v16; // 0x40ad20
    if ((v5 & 1024) == 0) {
        // 0x40ae70
        v16 = (v15 & 0xffffffb5) + 120 & 0xfffffffd;
    } else {
        // 0x40ae0c
        v16 = (v15 & 0xffffffe0) + 115 & 0xfffffff3;
    }
    // 0x40ae12
    *(char *)(v4 + 6) = (char)v16;
    int64_t v17 = v5 & 4; // 0x40ae17
    char v18 = v17; // 0x40ae1d
    *(char *)(v4 + 7) = (v18 - ((char)(v17 == 0) | v18) & -69) + 114;
    int64_t v19 = v5 & 2; // 0x40ae2a
    char v20 = v19; // 0x40ae30
    *(char *)(v4 + 8) = (v20 - ((char)(v19 == 0) | v20) & -74) + 119;
    char v21 = v5 % 2 == 0; // 0x40ae43
    if ((v5 & 512) == 0) {
        // 0x40ae80
        *(char *)(v4 + 9) = (v21 & -75) + 120;
        *(int16_t *)(v4 + 10) = 32;
        return 32;
    }
    // 0x40ae4d
    *(char *)(v4 + 9) = (v21 & -32) + 116;
    *(int16_t *)(v4 + 10) = 32;
    return 32;
}
// Address range: 0x40aea0 - 0x40aea8
int64_t function_40aea0(int64_t a1) {
    // 0x40aea0
    int64_t v1; // 0x40aea0
    return function_40ad20(*(int32_t *)(a1 + 24), (int64_t *)v1);
}
// Address range: 0x40aeb0 - 0x40aec8
int64_t function_40aeb0(void) {
    // 0x40aeb0
    int64_t v1; // 0x40aeb0
    int64_t result = function_40aed0(v1, v1, v1); // 0x40aeb4
    if (result != 0) {
        // 0x40aebe
        return result;
    }
    // 0x40aec3
    function_410330(v1);
    // UNREACHABLE
}
// Address range: 0x40aed0 - 0x40afa9
int64_t function_40aed0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_40aa00(a1, a2); // 0x40aee8
    int64_t v2 = function_40aa60(v1); // 0x40aef3
    int64_t v3 = 0; // 0x40af07
    if (v2 != 0) {
        // 0x40af09
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x40af20
    int64_t v4 = a2; // 0x40af20
    int64_t v5; // 0x40aed0
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x40af98
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x40af01
    int32_t len = strlen((char *)str); // 0x40af25
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x40af35
    if (mem == NULL) {
        // 0x40af81
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x40af4b
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x40af57
    if (a3 != 0) {
        // 0x40af60
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x40af73
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x40af81
    return (int64_t)mem;
}
// Address range: 0x40afb0 - 0x40b026
int64_t function_40afb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40afb0
    if (a3 == 0) {
        // 0x40aff4
        return 0;
    }
    int64_t v1 = a3; // 0x40afcb
    int64_t v2 = a2; // 0x40afcb
    int64_t result = 0;
    int64_t v3 = function_40e290(a1 & 0xffffffff, v2, v1); // 0x40afe9
    int64_t result2 = result; // 0x40aff2
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x40b008
            *__errno_location() = 28;
            return result;
        }
        int64_t v4 = v3 + result; // 0x40afd5
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x40aff4
            break;
        }
        result = v4;
        v3 = function_40e290(a1 & 0xffffffff, v2, v1);
        result2 = result;
    }
    // 0x40aff4
    return result2;
}
// Address range: 0x40b030 - 0x40b0c3
int64_t function_40b030(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x40b047
    if (v1 == -1) {
        // 0x40b0bf
        return -1;
    }
    int64_t v2 = v1; // 0x40b04f
    int64_t v3; // 0x40b030
    while (true) {
      lab_0x40b058:
        // 0x40b058
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x40b0b0;
        } else {
            goto lab_0x40b0b5;
        }
    }
  lab_0x40b0bf_2:;
    // 0x40b0bf
    int64_t result; // 0x40b030
    return result;
  lab_0x40b0b5:;
    int64_t v4 = v3 + 2; // 0x40b0b5
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40b0bf
        goto lab_0x40b0bf_2;
    }
    goto lab_0x40b058;
  lab_0x40b0b0:
    // 0x40b0b0
    result = v3;
    goto lab_0x40b0b5;
}
// Address range: 0x40b0d0 - 0x40b0e0
int64_t function_40b0d0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40b0d0
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x40b0e0 - 0x40b0e7
int64_t function_40b0e0(int64_t a1, int64_t a2) {
    // 0x40b0e0
    int64_t v1; // 0x40b0e0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x40b0f0 - 0x40b111
int64_t function_40b0f0(int64_t a1, int64_t a2) {
    // 0x40b0f0
    int64_t v1; // 0x40b0f0
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x40b108
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x40b120 - 0x40b239
int64_t function_40b120(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_40b0f0(a1, a2); // 0x40b134
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40b13c
    int64_t result2 = *v2; // 0x40b13c
    if (result2 == 0) {
        // 0x40b1ce
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x40b164
            if (v3 == 0) {
                // 0x40b1ce
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x40b171
            int64_t v5 = v3; // 0x40b177
            int64_t v6 = v1; // 0x40b177
            int64_t result = v4; // 0x40b177
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40b1ac_2:
                // 0x40b1ac
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40b1b1
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x40b1c0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40b1ce
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x40b184
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x40b191
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40b1ac_2;
                }
                // 0x40b199
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40b1ac_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40b1ce
            return 0;
        }
    }
    // 0x40b1e3
    if ((char)a4 == 0) {
        // 0x40b1ce
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x40b1e8
    if (v12 == 0) {
        // 0x40b230
        *v2 = 0;
        // 0x40b1ce
        return result2;
    }
    // 0x40b1f1
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40b1ff
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x40b240 - 0x40b2be
int64_t function_40b240(uint64_t a1) {
    if (a1 == (int64_t)&g7) {
        // 0x40b2bd
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40b24b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g7) {
        // 0x40b2aa
        *(int64_t *)a1 = (int64_t)&g7;
        return 0;
    }
    // 0x40b259
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x40b274
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x40b281
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x40b289
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x40b2bd
    return 1;
}
// Address range: 0x40b2c0 - 0x40b40a
int64_t function_40b2c0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40b2da
    uint64_t v2 = *v1; // 0x40b2da
    if (v2 <= a2) {
        // 0x40b3c4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x40b2c0
    int64_t v8 = a2; // 0x40b2c0
    int64_t v9; // 0x40b2c0
    int64_t result; // 0x40b2c0
    int64_t v10; // 0x40b2c0
    while (true) {
      lab_0x40b2f6_2:
        // 0x40b2f6
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x40b2f6
        int64_t v12 = *v11; // 0x40b2f6
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x40b2e8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40b2ff
            int64_t v14 = *v13; // 0x40b2ff
            int64_t v15 = v14; // 0x40b307
            int64_t v16 = v12; // 0x40b307
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x40b324
                    int64_t v19 = *v18; // 0x40b324
                    int64_t v20 = function_40b0f0(v3, v19); // 0x40b32d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x40b332
                    int64_t v22 = *v21; // 0x40b332
                    int64_t * v23 = (int64_t *)v20; // 0x40b336
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x40b310
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40b35f
                            break;
                        }
                    } else {
                        // 0x40b33c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40b35f
                            break;
                        }
                    }
                    // 0x40b324
                    v15 = v22;
                }
                // 0x40b35f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x40b363
                v9 = *v1;
                goto lab_0x40b2e8;
            } else {
                int64_t v26 = function_40b0f0(v3, v25); // 0x40b37b
                int64_t * v27 = (int64_t *)v26; // 0x40b380
                if (*v27 == 0) {
                    // 0x40b3e0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x40b389
                    int64_t * v29; // 0x40b2c0
                    int64_t v30; // 0x40b2c0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x40b3ef
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x40b3c4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x40b3ef
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40b39a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x40b3a9
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x40b3b1
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40b3ba
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x40b3c4
                    break;
                }
                goto lab_0x40b2f6_2;
            }
        }
    }
    // 0x40b3c4
    return result;
  lab_0x40b2e8:;
    int64_t v36 = v10 + 16; // 0x40b2e8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x40b2f6_2;
    // 0x40b2f6
    goto lab_0x40b2f6_2;
}
// Address range: 0x40b410 - 0x40b415
int64_t function_40b410(int64_t a1) {
    // 0x40b410
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x40b420 - 0x40b425
int64_t function_40b420(int64_t a1) {
    // 0x40b420
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x40b430 - 0x40b435
int64_t function_40b430(int64_t a1) {
    // 0x40b430
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x40b440 - 0x40b48f
int64_t function_40b440(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b443
    int64_t result = 0; // 0x40b44c
    if (v1 <= a1) {
      lab_0x40b48d:
        // 0x40b48d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x40b450
    while (*(int64_t *)v3 == 0) {
        // 0x40b450
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40b45f
    int64_t v6 = v5; // 0x40b46b
    int64_t v7 = 1; // 0x40b46b
    int64_t v8; // 0x40b440
    int64_t v9; // 0x40b470
    int64_t v10; // 0x40b474
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x40b470
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x40b480
    int64_t v12 = v3 + 16; // 0x40b484
    while (v12 < v1) {
        // 0x40b459
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x40b450
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40b45f
        v5 = *(int64_t *)(v3 + 8);
        v6 = v5;
        v7 = 1;
        if (v5 != 0) {
            v9 = *(int64_t *)(v6 + 8);
            v10 = 2;
            v8 = v10;
            v6 = v9;
            v7 = v10;
            while (v9 != 0) {
                // 0x40b470
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40b47d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40b48d
    return result2;
}
// Address range: 0x40b490 - 0x40b4f7
int64_t function_40b490(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b493
    int64_t v2 = a1; // 0x40b49f
    int64_t v3 = 0; // 0x40b49f
    int64_t v4 = 0; // 0x40b49f
    int64_t v5 = 0; // 0x40b49f
    int64_t v6 = 0; // 0x40b49f
    int64_t v7; // 0x40b490
    int64_t v8; // 0x40b490
    int64_t v9; // 0x40b490
    if (v1 > a1) {
        while (true) {
          lab_0x40b4b1_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x40b4a8;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x40b4b7
                int64_t v13 = v10 + 1; // 0x40b4bb
                int64_t v14 = v11 + 1; // 0x40b4bf
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x40b4c6
                int64_t v16 = v14; // 0x40b4c6
                if (v12 == 0) {
                    goto lab_0x40b4a8;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x40b4d0
                    int64_t v18 = v16 + 1; // 0x40b4d4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x40b4d0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40b4dd
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x40b4e6
                        break;
                    }
                    goto lab_0x40b4b1_2;
                }
            }
        }
    }
  lab_0x40b4e6:
    // 0x40b4e6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40b4ef
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40b4ee
    return 0;
  lab_0x40b4a8:;
    int64_t v20 = v8 + 16; // 0x40b4a8
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x40b4e6
        goto lab_0x40b4e6;
    }
    goto lab_0x40b4b1_2;
    // 0x40b4b1
    goto lab_0x40b4b1_2;
}
// Address range: 0x40b500 - 0x40b648
int64_t function_40b500(uint64_t a1, int64_t a2) {
    // 0x40b500
    int128_t v1; // 0x40b500
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x40b513
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x40b517
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40b51e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x40b530
            while (*(int64_t *)v7 == 0) {
                // 0x40b530
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40b56d
                    goto lab_0x40b56d;
                }
            }
        }
    }
  lab_0x40b56d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40b57c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x40b500
    int128_t v10; // 0x40b500
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x40b613
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40b61c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x40b5b3;
        } else {
            goto lab_0x40b629;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x40b5a6
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x40b629;
        } else {
            goto lab_0x40b5b3;
        }
    }
  lab_0x40b5b3:
    // 0x40b5b3
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x40b5b7
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x40b5b7
    goto lab_0x40b5bc;
  lab_0x40b629:
    // 0x40b629
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40b63a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40b5bc;
  lab_0x40b5bc:
    // 0x40b5bc
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x40b650 - 0x40b6a3
int64_t function_40b650(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_40b0f0(a1, result); // 0x40b65a
    int64_t v2 = *(int64_t *)v1; // 0x40b65f
    if (v2 == 0) {
        // 0x40b68d
        return 0;
    }
    // 0x40b673
    if (v2 == result) {
        // 0x40b68d
        return result;
    }
    int64_t v3 = v1; // 0x40b684
    int64_t result2 = v2; // 0x40b682
    while ((char)v1 == 0) {
        // 0x40b684
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40b68d
            break;
        }
        // 0x40b670
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40b68d
            break;
        }
        result2 = v2;
    }
    // 0x40b68d
    return result2;
}
// Address range: 0x40b6b0 - 0x40b6f8
int64_t function_40b6b0(uint64_t a1) {
    int64_t result = 0; // 0x40b6b5
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x40b6c7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b6be
    if (v1 <= a1) {
        // 0x40b6c7
        return result;
    }
    int64_t v2 = a1; // 0x40b6c5
    int64_t v3 = *(int64_t *)v2; // 0x40b6d9
    result = v3;
    while (v3 == 0) {
        // 0x40b6d0
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x40b6c7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x40b6c7
    return result;
}
// Address range: 0x40b700 - 0x40b76a
int64_t function_40b700(int64_t a1, int64_t a2) {
    int64_t v1 = function_40b0f0(a1, a2); // 0x40b70c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x40b728
    while (*(int64_t *)v2 != a2) {
        // 0x40b720
        if (v3 == 0) {
            goto lab_0x40b736;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x40b760
        return *(int64_t *)v3;
    }
  lab_0x40b736:;
    int64_t v4 = v1 + 16; // 0x40b748
    int64_t result = 0; // 0x40b74f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x40b740
        result = v5;
        if (v5 != 0) {
            // break -> 0x40b753
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x40b753
    return result;
}
// Address range: 0x40b770 - 0x40b7d4
int64_t function_40b770(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40b776
    int64_t result = 0; // 0x40b77a
    if (*v1 <= a1) {
      lab_0x40b791:
        // 0x40b791
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40b77f
    int64_t v4 = v2; // 0x40b785
    int64_t v5; // 0x40b770
    int64_t v6; // 0x40b770
    int64_t v7; // 0x40b7b8
    int64_t v8; // 0x40b7c1
    int64_t v9; // 0x40b7a1
    int64_t v10; // 0x40b7a5
    if (v3 != 0) {
        // 0x40b798
        if (v2 >= a3) {
            // break -> 0x40b791
            break;
        }
        // 0x40b79d
        *(int64_t *)(8 * v2 + a2) = v3;
        v9 = *(int64_t *)(a1 + 8);
        v10 = v2 + 1;
        v4 = v10;
        v6 = v10;
        v5 = v9;
        if (v9 != 0) {
            result = a3;
            if (v6 == a3) {
                return result;
            }
            // 0x40b7b5
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x40b7b0
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40b7b5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
            }
        }
    }
    int64_t v11 = v4;
    int64_t v12 = a1 + 16; // 0x40b787
    result = v11;
    while (*v1 > v12) {
        // 0x40b77f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x40b798
            result = v2;
            if (v2 >= a3) {
                // break -> 0x40b791
                break;
            }
            // 0x40b79d
            *(int64_t *)(8 * v2 + a2) = v3;
            v9 = *(int64_t *)(v13 + 8);
            v10 = v2 + 1;
            v4 = v10;
            v6 = v10;
            v5 = v9;
            if (v9 != 0) {
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40b7b5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x40b7b0
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x40b7b5
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x40b787
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x40b791
    return result;
}
// Address range: 0x40b7e0 - 0x40b858
int64_t function_40b7e0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b7f1
    int64_t result = 0; // 0x40b7f5
    if (v1 <= a1) {
      lab_0x40b814:
        // 0x40b814
        return result;
    }
    int64_t v2 = a1; // 0x40b80a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x40b808
    int64_t v5 = v2; // 0x40b808
    int64_t v6 = v3; // 0x40b808
    int64_t v7; // 0x40b7e0
    int64_t v8; // 0x40b838
    int64_t v9; // 0x40b83c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x40b838
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x40b848
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40b838
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
        }
    }
    int64_t result2 = v4;
    v2 += 16;
    while (v1 > v2) {
        // 0x40b802
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40b838
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x40b848
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x40b838
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40b80a
        result2 = v4;
        v2 += 16;
    }
    // 0x40b814
    return result2;
}
// Address range: 0x40b860 - 0x40b891
int64_t function_40b860(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40b867
    if (v1 == 0) {
        // 0x40b88d
        return 0;
    }
    int64_t result = 0; // 0x40b867
    v2++;
    char v3 = *(char *)v2; // 0x40b883
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40b88d
    return result;
}
// Address range: 0x40b8a0 - 0x40b8c0
int64_t function_40b8a0(int64_t a1) {
    // 0x40b8a0
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x40b8c0 - 0x40ba4a
int64_t function_40b8c0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40b8c0
    int128_t v1; // 0x40b8c0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40b8fa
    int64_t result = (int64_t)mem; // 0x40b8fa
    if (mem == NULL) {
        // 0x40b9aa
        return result;
    }
    int64_t v3 = result + 40; // 0x40b90b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x40b8c0
    int128_t v6; // 0x40b8c0
    if (a2 == 0) {
        // 0x40b9c0
        *v4 = (int64_t)&g7;
        int64_t v7 = function_40b240(v3); // 0x40b9c8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40b9cd
        if ((char)v7 == 0) {
            // 0x40b9a0
            free(mem);
            // 0x40b9aa
            return 0;
        }
        // 0x40b9d9
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40ba23;
        } else {
            goto lab_0x40b9de;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_40b240(v3) == 0) {
            // 0x40b9a0
            free(mem);
            // 0x40b9aa
            return 0;
        }
        // 0x40b925
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_40b030(a1); // 0x40b933
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40b9a0
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40b9a0
                free(mem);
                // 0x40b9aa
                return 0;
            }
            // 0x40b951
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40b9a0
                free(mem);
                // 0x40b9aa
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x40b962
            int64_t v10 = (int64_t)mem2; // 0x40b962
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40b9a0
                free(mem);
                // 0x40b9aa
                return 0;
            }
            // 0x40b96f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x40b0d0 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x40b0e0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40b9aa
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40ba18
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40b9de;
        } else {
            goto lab_0x40ba23;
        }
    }
  lab_0x40ba23:
    // 0x40ba23
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40ba33
    int128_t v13 = v6; // 0x40ba3c
    int128_t v14 = __asm_addss(v12, v12); // 0x40ba3c
    goto lab_0x40b9e7;
  lab_0x40b9de:
    // 0x40b9de
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40b9e7;
  lab_0x40b9e7:
    // 0x40b9e7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40b9a0
    free(mem);
    // 0x40b9aa
    return 0;
}
// Address range: 0x40ba50 - 0x40baf8
int64_t function_40ba50(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40ba5a
    uint64_t v2 = *v1; // 0x40ba5a
    int64_t result; // 0x40ba50
    if (v2 <= a1) {
      lab_0x40bae3:
        // 0x40bae3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40ba68
    while (*v6 == 0) {
        // 0x40ba68
        v7 = v5 + 16;
        int64_t v8; // 0x40ba50
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40bae3
            goto lab_0x40bae3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40ba79
    int64_t v10 = *v9; // 0x40ba79
    int64_t v11 = *v3; // 0x40ba7e
    int64_t v12 = v11; // 0x40ba85
    int64_t v13 = v10; // 0x40ba85
    int64_t result2 = v11; // 0x40ba85
    int64_t * v14; // 0x40ba9e
    int64_t v15; // 0x40ba9e
    int64_t v16; // 0x40ba9a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40ba95
            v16 = *v3;
        }
        // 0x40ba9e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40ba90
            v16 = 0;
            if (v12 != 0) {
                // 0x40ba95
                v16 = *v3;
            }
            // 0x40ba9e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
        }
    }
    // 0x40babd
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40bad0
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40badd
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40ba6c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40ba68
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40bae3
                goto lab_0x40bae3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40ba79
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40ba95
                v16 = *v3;
            }
            // 0x40ba9e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40ba90
                v16 = 0;
                if (v12 != 0) {
                    // 0x40ba95
                    v16 = *v3;
                }
                // 0x40ba9e
                v14 = (int64_t *)(v13 + 8);
                v15 = *v14;
                *(int64_t *)v13 = 0;
                *v14 = *v4;
                *v4 = v13;
                v12 = v16;
                v13 = v15;
                result2 = v16;
            }
        }
        // 0x40babd
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40bae3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40bb00 - 0x40bbd6
int64_t function_40bb00(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40bb0f
    uint64_t v2 = *v1; // 0x40bb0f
    int64_t v3 = a1; // 0x40bb13
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40bb63;
    } else {
        // 0x40bb15
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40bb63;
        } else {
            // 0x40bb1c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40bb31
                int64_t v6; // 0x40bb28
                while (v5 == 0) {
                    // 0x40bb28
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40bb63
                        goto lab_0x40bb63;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40bb48
                int64_t v8 = v7; // 0x40bb4f
                int64_t v9 = v5; // 0x40bb4f
                int64_t v10; // 0x40bb00
                int64_t v11; // 0x40bb48
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40bb40
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40bb43
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40bb56
                v3 = v9;
                while (v2 > v12) {
                    // 0x40bb31
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40bb28
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40bb63
                            goto lab_0x40bb63;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40bb43
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40bb40
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40bb43
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40bb51
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40bb63;
            } else {
                goto lab_0x40bb9c;
            }
        }
    }
  lab_0x40bb63:
    // 0x40bb63
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40bb70
        int64_t v14 = v13; // 0x40bb77
        int64_t v15 = v2; // 0x40bb77
        int64_t v16; // 0x40bb80
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40bb80
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40bb91
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40bb91
        int64_t v18 = v15; // 0x40bb9a
        int64_t v19 = v17; // 0x40bb9a
        while (v15 > v17) {
            // 0x40bb70
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40bb80
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40bb91
                v15 = *v1;
            }
            // 0x40bb91
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40bb9c;
  lab_0x40bb9c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40bb9c
    if (v20 == 0) {
        // 0x40bbc1
        free(NULL);
        free((int64_t *)a1);
        return &g76;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40bbb0
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40bbbf
    while (v21 != 0) {
        // 0x40bbb0
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40bbc1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g76;
}
// Address range: 0x40bbe0 - 0x40bdda
int64_t function_40bbe0(int64_t a1, uint64_t a2) {
    // 0x40bbe0
    int128_t v1; // 0x40bbe0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40bbeb
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40bbe0
        if (a2 < 0) {
            // 0x40bd60
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40bd70
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40bc00
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40bc09
        __asm_comiss(__asm_divss_6(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40bd52
        return 0;
    }
    uint64_t nmemb = function_40b030(a2); // 0x40bc43
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40bd52
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40bc7b
    if (*v6 == nmemb) {
        // 0x40bd52
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40bc8d
    int64_t v7 = (int64_t)mem; // 0x40bc8d
    int64_t v8 = v7; // bp-104, 0x40bc92
    if (mem == NULL) {
        // 0x40bd52
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40bcea
    int64_t v10 = *v9; // 0x40bcea
    int64_t v11 = function_40b2c0(&v8, a1, 0); // 0x40bcf3
    int64_t result = v11 & 0xffffffff; // 0x40bcf8
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40bcb4
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40bd16
        function_40b2c0(v13, v12, 1);
        function_40b2c0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40bda0
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40bd52
    return result;
}
// Address range: 0x40bde0 - 0x40c054
int64_t function_40bde0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40bde0
    int128_t v1; // 0x40bde0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40bde0
    int64_t v5 = function_40b120(a1, a2, &v4, 0); // 0x40be01
    if (v5 != 0) {
        // 0x40be0e
        if (a3 != NULL) {
            // 0x40be15
            *a3 = v5;
        }
        // 0x40be19
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40be28
    uint64_t v7 = *v6; // 0x40be28
    int64_t v8; // 0x40bde0
    int64_t v9; // 0x40bde0
    int64_t v10; // 0x40bde0
    int128_t v11; // 0x40bde0
    int128_t v12; // 0x40bde0
    int64_t v13; // 0x40bde0
    if (v7 < 0) {
        // 0x40beb0
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40bec0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40bec4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40bec9
        int128_t v17 = __asm_addss(v15, v15); // 0x40becd
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40be4b;
        } else {
            goto lab_0x40beda;
        }
    } else {
        // 0x40be31
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40be35
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40be39
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40be3e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40beda;
        } else {
            goto lab_0x40be4b;
        }
    }
  lab_0x40be4b:
    // 0x40be4b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40be54
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x40be5c
    int128_t v23 = v11; // 0x40be5c
    if (v13 == 0) {
        goto lab_0x40be62;
    } else {
        goto lab_0x40bf01;
    }
  lab_0x40beda:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40bee7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40beea
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40bef3
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40be62;
    } else {
        goto lab_0x40bf01;
    }
  lab_0x40be62:;
    int64_t * v28 = (int64_t *)v4; // 0x40be67
    if (*v28 == 0) {
        // 0x40bf78
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40bf81
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40be72
    int64_t v31 = *v30; // 0x40be72
    int64_t * v32; // 0x40bde0
    int64_t v33; // 0x40bde0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40bf9d
        if (mem == NULL) {
            // 0x40be19
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40bf9d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40be87
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40be9d
    *v37 = *v37 + 1;
    return 1;
  lab_0x40bf01:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40bf01
    function_40b240(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40bf0a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40bf0e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40bf12
    int128_t v44; // 0x40bde0
    if (v42 < 0) {
        // 0x40bfd0
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40bfe0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40bf20
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40bf29
    int128_t v47; // 0x40bde0
    int64_t v48; // 0x40bde0
    if (v46 < 0) {
        // 0x40bfb0
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40bfbd
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40bfc0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40bf32
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40bf36
        v48 = v46;
        v47 = v51;
    }
    // 0x40bf3b
    __asm_comiss_2(v47, __asm_mulss_5(__asm_movaps_4(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40bf4b
        int128_t v53 = v52; // 0x40bf54
        if (*(char *)(v41 + 16) == 0) {
            // 0x40bff0
            v53 = __asm_mulss_5(v52, v43);
        }
        // 0x40bf5a
        __asm_comiss(v53, 0x5f800000);
        // 0x40be19
        return 0xffffffff;
    }
    goto lab_0x40be62;
}
// Address range: 0x40c060 - 0x40c09b
int64_t function_40c060(int64_t a1, int64_t a2) {
    // 0x40c060
    int64_t v1; // bp-16, 0x40c060
    int64_t v2; // 0x40c060
    int32_t v3 = function_40bde0(a1, a2, &v1, v2); // 0x40c072
    if (v3 == -1) {
        // 0x40c080
        return 0;
    }
    // 0x40c077
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40c0a0 - 0x40c277
int64_t function_40c0a0(int64_t a1) {
    // 0x40c0a0
    int128_t v1; // 0x40c0a0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40c0a0
    int64_t v5; // 0x40c0a0
    int64_t result = function_40b120(a1, v5, &v4, 1); // 0x40c0b5
    if (result == 0) {
        // 0x40c0d2
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40c0c7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40c0d2
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40c0e0
    uint64_t v8 = *v7 - 1; // 0x40c0e4
    *v7 = v8;
    int64_t v9; // 0x40c0a0
    int64_t v10; // 0x40c0a0
    int64_t v11; // 0x40c0a0
    int128_t v12; // 0x40c0a0
    int128_t v13; // 0x40c0a0
    int64_t v14; // 0x40c0a0
    if (v8 < 0) {
        // 0x40c1d0
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40c1e0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40c1e4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40c1e9
        int128_t v18 = __asm_addss(v16, v16); // 0x40c1ed
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40c10c;
        } else {
            goto lab_0x40c1fa;
        }
    } else {
        // 0x40c0f2
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40c0f6
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40c0fa
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40c0ff
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40c1fa;
        } else {
            goto lab_0x40c10c;
        }
    }
  lab_0x40c10c:
    // 0x40c10c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40c110
    int64_t v23 = v14; // 0x40c110
    int128_t v24 = v12; // 0x40c110
    int64_t v25 = v10; // 0x40c110
    int128_t v26 = v22; // 0x40c110
    goto lab_0x40c115;
  lab_0x40c1fa:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40c207
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40c20a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40c115;
  lab_0x40c115:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40c115
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x40c0d2
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40c11e
    function_40b240(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40c127
    int64_t v31 = *(int64_t *)v29; // 0x40c12b
    int128_t v32; // 0x40c0a0
    if (v30 < 0) {
        // 0x40c240
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40c250
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40c138
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40c141
    int128_t v35; // 0x40c0a0
    int64_t v36; // 0x40c0a0
    if (v34 < 0) {
        // 0x40c220
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40c22d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40c230
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40c14e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40c152
        v36 = v34;
        v35 = v39;
    }
    // 0x40c157
    __asm_comiss_2(__asm_mulss_5(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40c0d2
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40c168
    int128_t v41 = v40; // 0x40c171
    if (*(char *)(v31 + 16) == 0) {
        // 0x40c173
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40c178
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40c268
    if ((char)function_40bbe0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40c0d2
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40c19a
    if (*v43 != 0) {
        int64_t v44; // 0x40c0a0
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40c1a8
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40c1b9
    *v43 = 0;
    // 0x40c0d2
    return result;
}
// Address range: 0x40c280 - 0x40c2a7
int64_t function_40c280(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x40c280
    return (*(int64_t *)(a1 + 8) ^ function_413d10(a1, a2, a3)) % a2;
}
// Address range: 0x40c2b0 - 0x40c2bd
int64_t function_40c2b0(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x40c2b0
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x40c2c0 - 0x40c2e5
int64_t function_40c2c0(int64_t a1, int64_t a2) {
    // 0x40c2c0
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x40c2ca
        return 0;
    }
    // 0x40c2da
    return function_40e2f0(a1, a2);
}
// Address range: 0x40c2f0 - 0x40c323
int64_t function_40c2f0(int64_t str, int64_t str2) {
    // 0x40c2f0
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x40c2fc
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x40c314
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x40c330 - 0x40c345
int64_t function_40c330(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40c337
    free(v1);
    free(v1);
    return &g76;
}
// Address range: 0x40c350 - 0x40c3e9
int64_t function_40c350(int64_t str) {
    // 0x40c350
    if (str == 0) {
        // 0x40c3c9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g42);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40c35e
    int64_t result = (int64_t)found_char_pos; // 0x40c35e
    if (found_char_pos == NULL) {
        // 0x40c3b9
        g56 = str;
        g41 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x40c368
    if (v1 - str < 7) {
        // 0x40c3b9
        g56 = str;
        g41 = str;
        return result;
    }
    // 0x40c378
    bool v2; // 0x40c350
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x40c350
    int64_t v5 = result - 6; // 0x40c350
    int64_t v6 = 7; // 0x40c386
    unsigned char v7 = *(char *)v5; // 0x40c386
    char v8 = *(char *)v4; // 0x40c386
    char v9 = v8; // 0x40c386
    bool v10 = false; // 0x40c386
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
    int64_t v12 = (int64_t)"lt-"; // 0x40c390
    int64_t v13 = v1; // 0x40c390
    int64_t v14 = 3; // 0x40c390
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x40c3b9
        g56 = str;
        g41 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x40c3a2
    char v16 = *(char *)v12; // 0x40c3a2
    char v17 = v16; // 0x40c3a2
    bool v18 = false; // 0x40c3a2
    while (v15 == v16) {
        // 0x40c392
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
    int64_t v20 = v1; // 0x40c3ac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40c3ae
        v20 = result + 4;
        g38 = v20;
    }
    // 0x40c3b9
    g56 = v20;
    g41 = v20;
    return result;
}
// Address range: 0x40c3f0 - 0x40c42f
int64_t function_40c3f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40c3f0
    int64_t v1; // bp-28, 0x40c3f0
    int64_t v2 = function_413790(a1, a2, a5 & 0xffffffff, &v1); // 0x40c403
    int64_t result = 0xfffffffe; // 0x40c40a
    if ((int32_t)v2 == 0) {
        // 0x40c40c
        result = function_4137c0(&v1, a3, a4 & 0xffffffff);
    }
    // 0x40c41b
    return result;
}
// Address range: 0x40c430 - 0x40c44c
int64_t function_40c430(int64_t a1, int64_t a2, int32_t a3) {
    int32_t v1 = a3; // bp-12, 0x40c434
    return function_4137c0((int64_t *)&v1, a1, a2 & 0xffffffff);
}
// Address range: 0x40c450 - 0x40c542
int64_t function_40c450(int64_t * a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x40c464
    if ((int64_t *)v1 != a1) {
        // 0x40c471
        return (int64_t)v1;
    }
    int64_t v2 = function_413e10(); // 0x40c480
    char v3 = *(char *)v2 & -33;
    int64_t result; // 0x40c536
    if (v3 == 85) {
        // 0x40c490
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x40c528
            result = (int32_t)a2 != 9 ? (int64_t)&g16 : (int64_t)&g8;
            return result;
        }
        char v4 = *v1; // 0x40c4be
        int64_t result2 = v4 != 96 ? (int64_t)&g9 : (int64_t)&g12; // 0x40c4cb
        // 0x40c471
        return result2;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x40c528
        result = (int32_t)a2 != 9 ? (int64_t)&g16 : (int64_t)&g8;
        return result;
    }
    char v5 = *v1; // 0x40c50d
    int64_t result3 = v5 != 96 ? (int64_t)&g10 : (int64_t)&g11; // 0x40c51a
    // 0x40c471
    return result3;
}
// Address range: 0x40c550 - 0x40c5a7
int64_t function_40c550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x40c550
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x40c5a7 - 0x40d771
int64_t function_40c5a7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x40c5f1
    int64_t v3 = 0; // 0x40c5f1
    int64_t v4; // 0x40c5a7
    int64_t v5; // 0x40c5a7
    int64_t v6; // 0x40c5a7
    int64_t v7; // 0x40c5a7
    int64_t v8; // 0x40c5a7
    int64_t v9; // 0x40c5a7
    int64_t v10; // 0x40c5a7
    int64_t v11; // 0x40c5a7
    int64_t v12; // 0x40c5a7
    int64_t v13; // 0x40c5a7
    int64_t v14; // 0x40c5a7
    int64_t v15; // 0x40c5a7
    int64_t v16; // 0x40c5a7
    int64_t v17; // 0x40c5a7
    int64_t v18; // 0x40c5a7
    int64_t result; // 0x40c5a7
    int64_t v19; // 0x40c5a7
    int32_t wc; // bp+132, 0x40c5a7
    int64_t ps; // bp+136, 0x40c5a7
    char v20; // 0x40cb60
    int64_t v21; // 0x40cb60
    int64_t v22; // 0x40cf08
    int64_t v23; // 0x40c5a7
    int64_t v24; // 0x40cf27
    int32_t v25; // 0x40c5a7
    while (true) {
      lab_0x40c5f8_2:
        // 0x40c5f8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x40c5a7
        int64_t v27; // 0x40c62c
        while (true) {
          lab_0x40c5f8:
            // 0x40c5f8
            v5 = v26;
            bool v28 = v15 == v5; // 0x40c603
            if (v15 == -1) {
                // 0x40c605
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x40c613
            if (v28) {
                // break (via goto) -> 0x40cd78
                goto lab_0x40cd78;
            }
            // 0x40c61c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g75 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40cc0b
                    if (v25 % 2 == 0) {
                        goto lab_0x40c751;
                    }
                    // 0x40d02d
                    v26 = v5 + 1;
                    goto lab_0x40c5f8;
                }
                case 7: {
                    goto lab_0x40c751;
                }
                case 8: {
                    goto lab_0x40c751;
                }
                case 9: {
                    goto lab_0x40c96a_2;
                }
                case 10: {
                    goto lab_0x40c96a_2;
                }
                case 11: {
                    goto lab_0x40c751;
                }
                case 12: {
                    goto lab_0x40c751;
                }
                case 13: {
                    goto lab_0x40c96a_2;
                }
                case 32: {
                    goto lab_0x40c96a_2;
                }
                case 33: {
                    goto lab_0x40c96a_2;
                }
                case 34: {
                    goto lab_0x40c96a_2;
                }
                case 35: {
                    goto lab_0x40c71d;
                }
                case 36: {
                    goto lab_0x40c96a_2;
                }
                case 37: {
                    goto lab_0x40c751;
                }
                case 38: {
                    goto lab_0x40c96a_2;
                }
                case 39: {
                    goto lab_0x40c96a_2;
                }
                case 40: {
                    goto lab_0x40c96a_2;
                }
                case 41: {
                    goto lab_0x40c96a_2;
                }
                case 42: {
                    goto lab_0x40c96a_2;
                }
                case 43: {
                    goto lab_0x40c751;
                }
                case 44: {
                    goto lab_0x40c751;
                }
                case 45: {
                    goto lab_0x40c751;
                }
                case 46: {
                    goto lab_0x40c751;
                }
                case 47: {
                    goto lab_0x40c751;
                }
                case 48: {
                    goto lab_0x40c751;
                }
                case 49: {
                    goto lab_0x40c751;
                }
                case 50: {
                    goto lab_0x40c751;
                }
                case 51: {
                    goto lab_0x40c751;
                }
                case 52: {
                    goto lab_0x40c751;
                }
                case 53: {
                    goto lab_0x40c751;
                }
                case 54: {
                    goto lab_0x40c751;
                }
                case 55: {
                    goto lab_0x40c751;
                }
                case 56: {
                    goto lab_0x40c751;
                }
                case 57: {
                    goto lab_0x40c751;
                }
                case 58: {
                    goto lab_0x40c751;
                }
                case 59: {
                    goto lab_0x40c96a_2;
                }
                case 60: {
                    goto lab_0x40c96a_2;
                }
                case 61: {
                    goto lab_0x40c96a_2;
                }
                case 62: {
                    goto lab_0x40c96a_2;
                }
                case 63: {
                    goto lab_0x40c96a_2;
                }
                case 65: {
                    goto lab_0x40c751;
                }
                case 66: {
                    goto lab_0x40c751;
                }
                case 67: {
                    goto lab_0x40c751;
                }
                case 68: {
                    goto lab_0x40c751;
                }
                case 69: {
                    goto lab_0x40c751;
                }
                case 70: {
                    goto lab_0x40c751;
                }
                case 71: {
                    goto lab_0x40c751;
                }
                case 72: {
                    goto lab_0x40c751;
                }
                case 73: {
                    goto lab_0x40c751;
                }
                case 74: {
                    goto lab_0x40c751;
                }
                case 75: {
                    goto lab_0x40c751;
                }
                case 76: {
                    goto lab_0x40c751;
                }
                case 77: {
                    goto lab_0x40c751;
                }
                case 78: {
                    goto lab_0x40c751;
                }
                case 79: {
                    goto lab_0x40c751;
                }
                case 80: {
                    goto lab_0x40c751;
                }
                case 81: {
                    goto lab_0x40c751;
                }
                case 82: {
                    goto lab_0x40c751;
                }
                case 83: {
                    goto lab_0x40c751;
                }
                case 84: {
                    goto lab_0x40c751;
                }
                case 85: {
                    goto lab_0x40c751;
                }
                case 86: {
                    goto lab_0x40c751;
                }
                case 87: {
                    goto lab_0x40c751;
                }
                case 88: {
                    goto lab_0x40c751;
                }
                case 89: {
                    goto lab_0x40c751;
                }
                case 90: {
                    goto lab_0x40c751;
                }
                case 91: {
                    goto lab_0x40c96a_2;
                }
                case 92: {
                    goto lab_0x40c96a_2;
                }
                case 93: {
                    goto lab_0x40c751;
                }
                case 94: {
                    goto lab_0x40c96a_2;
                }
                case 95: {
                    goto lab_0x40c751;
                }
                case 96: {
                    goto lab_0x40c96a_2;
                }
                case 97: {
                    goto lab_0x40c751;
                }
                case 98: {
                    goto lab_0x40c751;
                }
                case 99: {
                    goto lab_0x40c751;
                }
                case 100: {
                    goto lab_0x40c751;
                }
                case 101: {
                    goto lab_0x40c751;
                }
                case 102: {
                    goto lab_0x40c751;
                }
                case 103: {
                    goto lab_0x40c751;
                }
                case 104: {
                    goto lab_0x40c751;
                }
                case 105: {
                    goto lab_0x40c751;
                }
                case 106: {
                    goto lab_0x40c751;
                }
                case 107: {
                    goto lab_0x40c751;
                }
                case 108: {
                    goto lab_0x40c751;
                }
                case 109: {
                    goto lab_0x40c751;
                }
                case 110: {
                    goto lab_0x40c751;
                }
                case 111: {
                    goto lab_0x40c751;
                }
                case 112: {
                    goto lab_0x40c751;
                }
                case 113: {
                    goto lab_0x40c751;
                }
                case 114: {
                    goto lab_0x40c751;
                }
                case 115: {
                    goto lab_0x40c751;
                }
                case 116: {
                    goto lab_0x40c751;
                }
                case 117: {
                    goto lab_0x40c751;
                }
                case 118: {
                    goto lab_0x40c751;
                }
                case 119: {
                    goto lab_0x40c751;
                }
                case 120: {
                    goto lab_0x40c751;
                }
                case 121: {
                    goto lab_0x40c751;
                }
                case 122: {
                    goto lab_0x40c751;
                }
                case 123: {
                    goto lab_0x40c6f5;
                }
                case 124: {
                    goto lab_0x40c96a_2;
                }
                case 125: {
                    goto lab_0x40c6f5;
                }
                case 126: {
                    goto lab_0x40c71d;
                }
                default: {
                    goto lab_0x40caf5;
                }
            }
        }
      lab_0x40caf5:
        if (v23 != 1) {
            // 0x40ce60
            ps = 0;
            int64_t len = v15; // 0x40ce70
            if (v15 == -1) {
                // 0x40ce72
                len = strlen((char *)str);
            }
            // 0x40ce9e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40ceff:
                // 0x40ceff
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x40cf04
                int64_t v30 = v29 + str;
                v24 = function_413710(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40d47a_2;
                    }
                    case -1: {
                        goto lab_0x40d47a_2;
                    }
                    case -2: {
                        // 0x40d55d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x40d597
                            v19 = v18;
                            int64_t v31 = v18; // 0x40d59a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x40d5a7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x40d5a0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40d47a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40d47a_2;
                    }
                    case 1: {
                        goto lab_0x40ced0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40cf7c
                        char v34 = *(char *)v33; // 0x40cf8d
                        unsigned char v35; // 0x40c5a7
                        if (v34 < 125) {
                            // 0x40cf98
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40cfaf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40c96a_2;
                            }
                        }
                        // 0x40cf80
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40cf8d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x40cf98
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40cfaf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40c96a_2;
                                }
                            }
                            // 0x40cf80
                            v33++;
                        }
                        goto lab_0x40ced0;
                    }
                }
            }
            goto lab_0x40d47a_2;
        } else {
            // 0x40cb44
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x40c751;
        }
    }
  lab_0x40cd78:
    // 0x40cd78
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40d67a
        if (v8 > result) {
            // 0x40d683
            *(char *)(v12 + result) = 0;
        }
        // 0x40c9a7
        return result;
    }
    goto lab_0x40c96a_2;
  lab_0x40c751:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x40c760
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40c96a_2;
        }
    }
    int64_t v42 = result; // 0x40c861
    char v43 = v20; // 0x40c861
    int64_t v44 = v58; // 0x40c861
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x40c861
    int64_t v46 = v56; // 0x40c861
    goto lab_0x40c7dd;
  lab_0x40c96a_2:;
    // 0x40c9a7
    char * v36; // 0x40c5a7
    return function_40c550(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x40d47a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x40c751;
    } else {
        uint64_t v40 = v37 + v5; // 0x40d04e
        int64_t v41 = v5 + 1; // 0x40d131
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x40d138
        char v48 = v20; // 0x40d138
        int64_t v49 = result; // 0x40d138
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x40d101
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x40d105
            int64_t v52 = v50 + 1; // 0x40d10a
            int64_t v53 = v47 + 1; // 0x40d131
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40d0fc
                v50 = v52;
                if (v38 > v50) {
                    // 0x40d101
                    *(char *)(v50 + v39) = v51;
                }
                // 0x40d105
                v51 = *(char *)(v47 + str);
                v52 = v50 + 1;
                v53 = v47 + 1;
                v42 = v52;
                v43 = v51;
                v44 = v22;
                v3 = v53;
                v45 = v38;
                v46 = v39;
                v47 = v53;
            }
        }
        goto lab_0x40c7dd;
    }
  lab_0x40ced0:
    // 0x40ced0
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40ceef
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40cef2
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x40d47a
        goto lab_0x40d47a_2;
    }
    goto lab_0x40ceff;
  lab_0x40c71d:
    // 0x40c71d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40c96a_2;
    }
    goto lab_0x40c751;
  lab_0x40c6f5:;
    bool v61 = v15 == 1; // 0x40c700
    if (v15 == -1) {
        // 0x40c702
        v61 = *(char *)v1 == 0;
    }
    // 0x40c70e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x40c751;
    } else {
        goto lab_0x40c71d;
    }
  lab_0x40c7dd:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x40c7e2
        *(char *)(v59 + v60) = v43;
    }
    // 0x40c7e6
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x40c5f8_2;
}
// Address range: 0x40d780 - 0x40d91e
int64_t function_40d780(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x40d782
    int32_t * v3 = __errno_location(); // 0x40d79c
    int64_t v4 = (int64_t)g30; // 0x40d7a1
    int32_t v5 = *v3; // 0x40d7ab
    int64_t v6 = v4; // 0x40d7c1
    if (v2 >= (int64_t)*(int32_t *)&g33) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x40d919
            function_410330(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x40d7d0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x40d7d7
        int64_t v9; // 0x40d780
        if (g30 == &g31) {
            int64_t v10 = function_410140(0, v8); // 0x40d8fa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g31); // 0x40d8ff
            *(int64_t *)&g30 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_410140(v4, v8); // 0x40d7eb
            *(int64_t *)&g30 = v12;
            v9 = v12;
        }
        // 0x40d7fa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g33; // 0x40d7fa
        int32_t v14 = v7; // 0x40d801
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g33 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x40d831
    int64_t v17 = v15 + 8; // 0x40d834
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x40d83b
    int64_t * v19 = (int64_t *)v16; // 0x40d83e
    uint64_t v20 = *v19; // 0x40d83e
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x40d841
    int64_t result = *v21; // 0x40d841
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x40d84c
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x40d855
    int64_t v24; // 0x40d780
    uint64_t v25 = function_40c550(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x40d864
    if (v20 > v25) {
        // 0x40d8db
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x40d877
    *v19 = v26;
    if (result != (int64_t)&g57) {
        // 0x40d887
        free((int64_t *)result);
    }
    int64_t result2 = function_4100e0(v26); // 0x40d8a1
    *v21 = result2;
    int64_t v27 = *v22; // 0x40d8bb
    int64_t v28 = *v23; // 0x40d8be
    int64_t v29; // 0x40d780
    function_40c550(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40d8db
    *v3 = v5;
    return result2;
}
// Address range: 0x40d920 - 0x40d954
int64_t function_40d920(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40d927
    int64_t result = function_4102e0(a1 == 0 ? (int64_t)&g58 : a1, 56); // 0x40d946
    return result;
}
// Address range: 0x40d960 - 0x40d96f
int64_t function_40d960(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g58 : a1); // 0x40d96c
    return result;
}
// Address range: 0x40d970 - 0x40d97f
int64_t function_40d970(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g58 : a1; // 0x40d978
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g58;
}
// Address range: 0x40d980 - 0x40d9b3
int64_t function_40d980(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g58 + 8 : a1 + 8; // 0x40d999
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40d99e
    uint32_t v3 = *v2; // 0x40d99e
    uint32_t v4 = (int32_t)a2 % 32; // 0x40d9a2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x40d9c0 - 0x40d9d3
int64_t function_40d9c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g58 + 4 : a1 + 4); // 0x40d9cc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x40d9e0 - 0x40da0b
int64_t function_40d9e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g58 : a1; // 0x40d9e8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x40da05
        abort();
        // UNREACHABLE
    }
    // 0x40d9fc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g58;
}
// Address range: 0x40da10 - 0x40da82
int64_t function_40da10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g58 : a5; // 0x40da32
    int32_t * v2 = __errno_location(); // 0x40da3b
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x40da54
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x40da58
    uint32_t v5 = *(int32_t *)v1; // 0x40da5b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x40da61
    int64_t result = function_40c550(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40da6a
    return result;
}
// Address range: 0x40da90 - 0x40db71
int64_t function_40da90(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g58 : a4; // 0x40dab2
    int32_t * v2 = __errno_location(); // 0x40dab8
    int64_t v3 = v1 + 8; // 0x40dacf
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x40dad7
    int32_t * v5 = (int32_t *)v1; // 0x40dada
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x40dae8
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40daeb
    int64_t v8 = function_40c550(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x40daf5
    int64_t v9 = v8 + 1; // 0x40dafa
    int64_t result = function_4100e0(v9); // 0x40db0f
    function_40c550(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x40db54
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x40db5d
    return result;
}
// Address range: 0x40db80 - 0x40db8a
int64_t function_40db80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40db80
    return function_40da90(a1, a2, 0, a3);
}
// Address range: 0x40db90 - 0x40dc25
int64_t function_40db90(void) {
    uint32_t v1 = *(int32_t *)&g33; // 0x40db90
    int64_t v2 = v1; // 0x40db90
    int64_t v3 = v2; // 0x40dba4
    if (v1 >= 2) {
        int64_t v4 = &g33;
        int64_t v5 = v4 + 16; // 0x40dbc3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g76;
        while (v5 != (int64_t)g30 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x40dbc0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g76;
        }
    }
    int64_t v6 = v3; // 0x40dbdd
    if (g31 != 0x61d960) {
        // 0x40dbdf
        free((int64_t *)g31);
        g31 = 256;
        *(int64_t *)&g32 = (int64_t)&g57;
        v6 = &g76;
    }
    int64_t result = v6; // 0x40dc01
    if (g30 != &g31) {
        // 0x40dc03
        free(g30);
        *(int64_t *)&g30 = (int64_t)&g31;
        result = &g76;
    }
    // 0x40dc16
    *(int32_t *)&g33 = 1;
    return result;
}
// Address range: 0x40dc30 - 0x40dc41
int64_t function_40dc30(void) {
    // 0x40dc30
    int64_t v1; // 0x40dc30
    return function_40d780(v1, v1, -1, (int64_t *)&g58);
}
// Address range: 0x40dc50 - 0x40dc5a
int64_t function_40dc50(void) {
    // 0x40dc50
    int64_t v1; // 0x40dc50
    return function_40d780(v1, v1, v1, (int64_t *)&g58);
}
// Address range: 0x40dc60 - 0x40dc76
int64_t function_40dc60(int64_t a1) {
    // 0x40dc60
    return function_40d780(0, a1, -1, (int64_t *)&g58);
}
// Address range: 0x40dc80 - 0x40dc92
int64_t function_40dc80(int64_t a1, int64_t a2) {
    // 0x40dc80
    return function_40d780(0, a1, a2, (int64_t *)&g58);
}
// Address range: 0x40dca0 - 0x40dd08
int64_t function_40dca0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40dcb0
    return function_40d780(a1, a3, -1, &v1);
}
// Address range: 0x40dd10 - 0x40dd74
int64_t function_40dd10(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40dd20
    return function_40d780((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x40dd80 - 0x40dd8c
int64_t function_40dd80(int64_t a1, int64_t a2) {
    // 0x40dd80
    return function_40dca0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x40dd90 - 0x40dd9f
int64_t function_40dd90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40dd90
    return function_40dd10(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x40dda0 - 0x40de10
int64_t function_40dda0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g58); // 0x40ddad
    int128_t v2 = __asm_movdqa(g59); // 0x40ddb5
    int128_t v3 = __asm_movdqa(g60); // 0x40ddbd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x40ddd2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x40dde8
    uint32_t v6 = *v5; // 0x40dde8
    uint32_t v7 = (int32_t)a3 % 32; // 0x40dded
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_40d780(0, a1, a2, &v4);
}
// Address range: 0x40de10 - 0x40de1d
int64_t function_40de10(int64_t a1, int64_t a2) {
    // 0x40de10
    return function_40dda0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x40de20 - 0x40de31
int64_t function_40de20(int64_t a1) {
    // 0x40de20
    return function_40dda0(a1, -1, 58);
}
// Address range: 0x40de40 - 0x40de4a
int64_t function_40de40(void) {
    // 0x40de40
    int64_t v1; // 0x40de40
    return function_40dda0(v1, v1, 58);
}
// Address range: 0x40de50 - 0x40debe
int64_t function_40de50(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40de6a
    return function_40d780((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x40dec0 - 0x40df2c
int64_t function_40dec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g58); // 0x40dec7
    int128_t v2 = __asm_movdqa(g59); // 0x40decf
    int128_t v3 = __asm_movdqa(g60); // 0x40ded7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x40def9
    if (a2 == 0 || a3 == 0) {
        // 0x40df27
        abort();
        // UNREACHABLE
    }
    // 0x40df0a
    return function_40d780(a1, a4, a5, &v4);
}
// Address range: 0x40df30 - 0x40df39
int64_t function_40df30(void) {
    // 0x40df30
    int64_t v1; // 0x40df30
    return function_40dec0(v1, v1, v1, v1, -1);
}
// Address range: 0x40df40 - 0x40df57
int64_t function_40df40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40df40
    return function_40dec0(0, a1, a2, a3, -1);
}
// Address range: 0x40df60 - 0x40df73
int64_t function_40df60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40df60
    return function_40dec0(0, a1, a2, a3, a4);
}
// Address range: 0x40df80 - 0x40df8a
int64_t function_40df80(void) {
    // 0x40df80
    int64_t v1; // 0x40df80
    return function_40d780(v1, v1, v1, &g29);
}
// Address range: 0x40df90 - 0x40dfa2
int64_t function_40df90(int64_t a1, int64_t a2) {
    // 0x40df90
    return function_40d780(0, a1, a2, &g29);
}
// Address range: 0x40dfb0 - 0x40dfc1
int64_t function_40dfb0(int64_t a1, int64_t a2) {
    // 0x40dfb0
    return function_40d780(a1, a2, -1, &g29);
}
// Address range: 0x40dfd0 - 0x40dfe6
int64_t function_40dfd0(int64_t a1) {
    // 0x40dfd0
    return function_40d780(0, a1, -1, &g29);
}
// Address range: 0x40dff0 - 0x40e232
int64_t function_40dff0(int64_t fd, int64_t a2, int64_t fd2, int64_t a4, int64_t a5) {
    int32_t result = syscall(SYS_vmsplice); // 0x40e024
    if (result >= 0) {
        // 0x40e06b
        return result;
    }
    int32_t * v1 = __errno_location(); // 0x40e033
    int32_t v2 = *v1; // 0x40e03f
    if (v2 != 95 && (v2 - 22 & -17) != 0) {
        // 0x40e06b
        return result;
    }
    int64_t v3 = (int64_t)v1; // 0x40e033
    char * str2; // 0x40dff0
    char v4; // 0x40dff0
    int64_t v5; // 0x40dff0
    int64_t v6; // bp-200, 0x40dff0
    if ((int32_t)a5 == 0) {
        // 0x40e056
        str2 = (char *)a4;
        v5 = v3;
        v4 = !((v2 == 95 | (v2 - 22 & -17) == 0));
    } else {
        if ((a5 & 0xfffffffe) != 0) {
            // 0x40e05f
            *v1 = 95;
            // 0x40e06b
            return -1;
        }
        char * v7 = (char *)a4;
        int32_t v8 = __fxstatat(1, (int32_t)fd2, v7, (struct stat *)&v6, 256); // 0x40e09e
        int64_t v9 = 0x100000000 * v3 >> 32; // 0x40e0a3
        int32_t * v10 = (int32_t *)v9;
        if (v8 == 0) {
            // 0x40e200
            *v10 = 17;
            // 0x40e06b
            return -1;
        }
        int32_t v11 = *v10; // 0x40e0b0
        if (v11 == 75) {
            // 0x40e200
            *v10 = 17;
            // 0x40e06b
            return -1;
        }
        // 0x40e0bc
        str2 = v7;
        v5 = v9;
        v4 = 1;
        if (v11 != 2) {
            // 0x40e06b
            return -1;
        }
    }
    char * str = (char *)a2; // 0x40e0d8
    int32_t len = strlen(str); // 0x40e0d8
    int32_t len2 = strlen(str2); // 0x40e0e3
    if (len == 0 || len2 == 0) {
        // 0x40e06b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x40e0ff
    if (*(char *)(a2 - 1 + (int64_t)len) != 47) {
        // 0x40e106
        if (*(char *)(a4 - 1 + (int64_t)len2) != 47) {
            // 0x40e06b
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
    }
    // 0x40e112
    int64_t v12; // bp-344, 0x40dff0
    if (__fxstatat(1, (int32_t)fd, str, (struct stat *)&v12, 256) != 0) {
        // 0x40e06b
        return -1;
    }
    int64_t v13 = 0x100000000 * v5 >> 32; // 0x40e139
    int32_t v14; // 0x40dff0
    if (v4 != 0) {
        if ((v14 & 0xf000) == 0x4000) {
            // 0x40e06b
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
        // 0x40e154
        *(int32_t *)v13 = 2;
        // 0x40e06b
        return -1;
    }
    // 0x40e1a0
    if (__fxstatat(1, (int32_t)fd2, str2, (struct stat *)&v6, 256) != 0) {
        // 0x40e1cc
        if (*(int32_t *)v13 != 2 || (v14 & 0xf000) != 0x4000) {
            // 0x40e06b
            return -1;
        }
        // 0x40e06b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    if ((v14 & 0xf000) != 0x4000) {
        // 0x40e17f
        *(int32_t *)v13 = 20;
        // 0x40e06b
        return -1;
    }
    if ((v14 & 0xf000) == 0x4000) {
        // 0x40e06b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x40e221
    *(int32_t *)v13 = 21;
    // 0x40e06b
    return -1;
}
// Address range: 0x40e240 - 0x40e28b
int64_t function_40e240(int64_t * a1) {
    // 0x40e240
    int64_t v1; // bp-152, 0x40e240
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x40e280
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x40e290 - 0x40e2ee
int64_t function_40e290(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x40e2b1
    while (result < 0) {
        // 0x40e2be
        if (*__errno_location() != 4) {
            // break -> 0x40e2ca
            break;
        }
        result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x40e2f0 - 0x40e420
int64_t function_40e2f0(int64_t a1, int64_t a2) {
    int64_t str = function_40aa00(a1, a2); // 0x40e309
    int64_t str2 = function_40aa00(a2, a2); // 0x40e314
    int64_t n = function_40aa60(str); // 0x40e31f
    if (n != function_40aa60(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x40e334
        return 0;
    }
    int64_t v1 = function_40a920(); // 0x40e365
    int64_t v2 = function_40a920(); // 0x40e370
    char * v3 = (char *)v1; // 0x40e383
    int64_t v4; // bp-344, 0x40e2f0
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x40e400
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x40e39c
    int64_t v6; // bp-200, 0x40e2f0
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x40e3e0
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x40e3b4
    // 0x40e3b6
    v7 = v4 == v6;
    // 0x40e3c5
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x40e334
    return v7 & 0xffffffff;
}
// Address range: 0x40e420 - 0x40e436
int64_t function_40e420(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 8); // 0x40e425
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x40e429
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x40e440 - 0x40e44b
int64_t function_40e440(int64_t str, int64_t str2) {
    // 0x40e440
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x40e450 - 0x40e7e4
int64_t function_40e450(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((8 * a2 & 0x7fffffff8) + (int64_t)&g13); // 0x40e460
    if (a1 == 0) {
        // 0x40e619
        return 0;
    }
    int32_t * v2 = __errno_location(); // 0x40e482
    *v2 = 0;
    struct __dirstream * dirp = (struct __dirstream *)a1; // 0x40e4b6
    struct dirent * v3 = readdir(dirp); // 0x40e4b6
    int64_t nmemb = 0; // 0x40e4c1
    int64_t v4 = 0; // 0x40e4c1
    int64_t v5 = 0; // 0x40e4c1
    int64_t v6 = 0; // 0x40e4c1
    int64_t v7 = 0; // 0x40e4c1
    struct dirent * v8; // 0x40e450
    int64_t v9; // 0x40e450
    int64_t v10; // 0x40e450
    int64_t v11; // 0x40e450
    int64_t v12; // 0x40e450
    char v13; // 0x40e450
    int64_t v14; // 0x40e450
    if (v3 != NULL) {
        struct dirent * v15 = v3; // 0x40e4b6
        int32_t v16 = 0;
        v9 = 0;
        v11 = 0;
        struct dirent * v17 = v15; // 0x40e4b6
        int64_t v18 = 0; // 0x40e6b9
        int64_t v19 = 0;
        int64_t v20 = 0;
        struct dirent * v21; // 0x40e450
        int64_t v22; // 0x40e450
        int64_t v23; // 0x40e450
        int64_t v24; // 0x40e450
        int64_t v25; // 0x40e4c7
        char * str; // 0x40e450
        char v26; // 0x40e4cb
        uint64_t v27; // 0x40e502
        int64_t v28; // 0x40e63b
        int64_t v29; // 0x40e69a
        uint64_t v30; // 0x40e66a
        while (true) {
            // 0x40e4c7
            v14 = v20;
            v10 = v19;
            v12 = v18;
            v8 = v17;
            while (true) {
                // 0x40e4c7
                v21 = v8;
                v24 = (int64_t)v21;
                v25 = v24 + 19;
                str = (char *)v25;
                v26 = *str;
                v13 = v26;
                if (v26 != 46) {
                    goto lab_0x40e4a8;
                } else {
                    // 0x40e4d3
                    switch (*(char *)(v24 + 20)) {
                        case 46: {
                            // 0x40e568
                            v13 = *(char *)(v24 + 21);
                            goto lab_0x40e4a8;
                        }
                        case 0: {
                            goto lab_0x40e4ac;
                        }
                        default: {
                            goto lab_0x40e4e5_2;
                        }
                    }
                }
            }
            // 0x40e4e5
            v27 = (int64_t)strlen(str) + 1;
            if (v1 != 0) {
                // break -> 0x40e50c
                break;
            }
            // 0x40e630
            v28 = v27 + v12;
            v23 = v14;
            v29 = v10;
            if (v14 - v12 <= v27) {
                if (v28 < v12) {
                    // 0x40e788
                    function_410330(v25);
                    // UNREACHABLE
                }
                if (v10 == 0) {
                    // 0x40e77a
                    v22 = 128;
                    if (v28 != 0) {
                        // 0x40e782
                        v22 = v28;
                        if (v28 < 0) {
                            // 0x40e788
                            function_410330(v25);
                            // UNREACHABLE
                        }
                    }
                } else {
                    if ((int32_t)v28 <= 0xffffffff) {
                        // 0x40e788
                        function_410330(v25);
                        // UNREACHABLE
                    }
                    // 0x40e678
                    v30 = 0x100000000 * v28 >> 32;
                    v22 = v30 + 1 + v30 / 2;
                }
                // 0x40e688
                v23 = v22;
                v29 = function_410140(v10, v23);
            }
            // 0x40e6ac
            v19 = v29;
            v20 = v23;
            memcpy((int64_t *)(v19 + v12), (int64_t *)v25, (int32_t)v27);
            v18 = 0x100000000 * v28 >> 32;
            *v2 = 0;
            v17 = readdir(dirp);
            nmemb = v9;
            v4 = v11;
            v5 = v20;
            v6 = v19;
            v7 = v18;
            if (v17 == NULL) {
                // break (via goto) -> 0x40e578
                goto lab_0x40e578_2;
            }
        }
        int32_t v31 = (int32_t)v9 + 1; // 0x40e51b
        int32_t v32 = v16; // 0x40e520
        int32_t v33 = v31; // 0x40e520
        int64_t v34 = v11; // 0x40e520
        int64_t v35; // 0x40e450
        int32_t v36; // 0x40e450
        int32_t v37; // 0x40e450
        int64_t v38; // 0x40e6fb
        if (v9 == (int64_t)v16) {
            if (v11 == 0) {
                // 0x40e79e
                v36 = 8;
                v37 = 1;
                v35 = 128;
                if (v9 != 0) {
                    // 0x40e7a3
                    v36 = v16;
                    v37 = v31;
                    v35 = 16 * v9;
                    if (v9 > -1 != v9 < 0x1000000000000000) {
                        // 0x40e788
                        function_410330(v25);
                        // UNREACHABLE
                    }
                }
            } else {
                if (v9 >= 0x555555555555555) {
                    // 0x40e788
                    function_410330(v25);
                    // UNREACHABLE
                }
                // 0x40e6f5
                v38 = v9 / 2 + (int64_t)v31;
                v36 = v38;
                v37 = v31;
                v35 = 16 * v38;
            }
            // 0x40e70c
            v33 = v37;
            v32 = v36;
            v34 = function_410140(v11, v35);
        }
        int64_t v39 = v34;
        int32_t v40 = v32;
        int64_t v41 = v39 + 16 * v9; // 0x40e537
        *(int64_t *)v41 = function_410310(v25);
        int64_t v42 = v27 + v12; // 0x40e550
        *(int64_t *)(v41 + 8) = *(int64_t *)v21;
        int64_t v43 = v33; // 0x40e558
        *v2 = 0;
        v15 = readdir(dirp);
        int64_t v44 = v10; // 0x40e4c1
        int64_t v45 = v14; // 0x40e4c1
        nmemb = v43;
        v4 = v39;
        v5 = v14;
        v6 = v10;
        v7 = v42;
        while (v15 != NULL) {
            // 0x40e4c7
            v16 = v40;
            v9 = v43;
            v11 = v39;
            v17 = v15;
            v18 = v42;
            v19 = v44;
            v20 = v45;
            while (true) {
                // 0x40e4c7
                v14 = v20;
                v10 = v19;
                v12 = v18;
                v8 = v17;
                while (true) {
                    // 0x40e4c7
                    v21 = v8;
                    v24 = (int64_t)v21;
                    v25 = v24 + 19;
                    str = (char *)v25;
                    v26 = *str;
                    v13 = v26;
                    if (v26 != 46) {
                        goto lab_0x40e4a8;
                    } else {
                        // 0x40e4d3
                        switch (*(char *)(v24 + 20)) {
                            case 46: {
                                // 0x40e568
                                v13 = *(char *)(v24 + 21);
                                goto lab_0x40e4a8;
                            }
                            case 0: {
                                goto lab_0x40e4ac;
                            }
                            default: {
                                goto lab_0x40e4e5_2;
                            }
                        }
                    }
                }
                // 0x40e4e5
                v27 = (int64_t)strlen(str) + 1;
                if (v1 != 0) {
                    // break -> 0x40e50c
                    break;
                }
                // 0x40e630
                v28 = v27 + v12;
                v23 = v14;
                v29 = v10;
                if (v14 - v12 <= v27) {
                    if (v28 < v12) {
                        // 0x40e788
                        function_410330(v25);
                        // UNREACHABLE
                    }
                    if (v10 == 0) {
                        // 0x40e77a
                        v22 = 128;
                        if (v28 != 0) {
                            // 0x40e782
                            v22 = v28;
                            if (v28 < 0) {
                                // 0x40e788
                                function_410330(v25);
                                // UNREACHABLE
                            }
                        }
                    } else {
                        if ((int32_t)v28 <= 0xffffffff) {
                            // 0x40e788
                            function_410330(v25);
                            // UNREACHABLE
                        }
                        // 0x40e678
                        v30 = 0x100000000 * v28 >> 32;
                        v22 = v30 + 1 + v30 / 2;
                    }
                    // 0x40e688
                    v23 = v22;
                    v29 = function_410140(v10, v23);
                }
                // 0x40e6ac
                v19 = v29;
                v20 = v23;
                memcpy((int64_t *)(v19 + v12), (int64_t *)v25, (int32_t)v27);
                v18 = 0x100000000 * v28 >> 32;
                *v2 = 0;
                v17 = readdir(dirp);
                nmemb = v9;
                v4 = v11;
                v5 = v20;
                v6 = v19;
                v7 = v18;
                if (v17 == NULL) {
                    // break (via goto) -> 0x40e578
                    goto lab_0x40e578_2;
                }
            }
            // 0x40e50c
            v31 = (int32_t)v9 + 1;
            v32 = v16;
            v33 = v31;
            v34 = v11;
            if (v9 == (int64_t)v16) {
                if (v11 == 0) {
                    // 0x40e79e
                    v36 = 8;
                    v37 = 1;
                    v35 = 128;
                    if (v9 != 0) {
                        // 0x40e7a3
                        v36 = v16;
                        v37 = v31;
                        v35 = 16 * v9;
                        if (v9 > -1 != v9 < 0x1000000000000000) {
                            // 0x40e788
                            function_410330(v25);
                            // UNREACHABLE
                        }
                    }
                } else {
                    if (v9 >= 0x555555555555555) {
                        // 0x40e788
                        function_410330(v25);
                        // UNREACHABLE
                    }
                    // 0x40e6f5
                    v38 = v9 / 2 + (int64_t)v31;
                    v36 = v38;
                    v37 = v31;
                    v35 = 16 * v38;
                }
                // 0x40e70c
                v33 = v37;
                v32 = v36;
                v34 = function_410140(v11, v35);
            }
            // 0x40e526
            v39 = v34;
            v40 = v32;
            v41 = v39 + 16 * v9;
            *(int64_t *)v41 = function_410310(v25);
            v42 = v27 + v12;
            *(int64_t *)(v41 + 8) = *(int64_t *)v21;
            v43 = v33;
            *v2 = 0;
            v15 = readdir(dirp);
            v44 = v10;
            v45 = v14;
            nmemb = v43;
            v4 = v39;
            v5 = v14;
            v6 = v10;
            v7 = v42;
        }
    }
  lab_0x40e578_2:;
    int32_t v46 = *v2; // 0x40e578
    if (v46 != 0) {
        // 0x40e757
        free((int64_t *)v4);
        free((int64_t *)v6);
        *v2 = v46;
        // 0x40e619
        return 0;
    }
    // 0x40e583
    int64_t result; // 0x40e450
    int64_t v47; // 0x40e450
    if (v1 == 0) {
        // 0x40e6c8
        if (v5 == v7) {
            int64_t v48 = function_410140(v6, v5 + 1); // 0x40e746
            v47 = v48 + v5;
            result = v48;
        } else {
            // 0x40e6cf
            v47 = v7 + v6;
            result = v6;
        }
    } else {
        int64_t v49 = v7 + 1; // 0x40e58f
        int64_t * v50; // 0x40e450
        int64_t v51; // 0x40e450
        int64_t v52; // 0x40e450
        if (nmemb != 0) {
            int64_t * base = (int64_t *)v4;
            qsort(base, (int32_t)nmemb, 16, (int32_t (*)(int64_t *, int64_t *))v1);
            int64_t v53 = function_4100e0(v49); // 0x40e5d4
            int64_t v54 = v4; // 0x40e5dc
            int64_t v55 = 0; // 0x40e5dc
            int64_t str2 = v55 + v53; // 0x40e5e0
            int64_t * str3 = (int64_t *)v54; // 0x40e5e5
            v54 += 16;
            char * v56 = stpcpy((char *)str2, (char *)*str3); // 0x40e5ef
            int64_t v57 = v55 + 1 + (int64_t)v56 - str2; // 0x40e5fb
            free((int64_t *)*str3);
            v55 = v57;
            while (v54 != v4 + 16 * nmemb) {
                // 0x40e5e0
                str2 = v55 + v53;
                str3 = (int64_t *)v54;
                v54 += 16;
                v56 = stpcpy((char *)str2, (char *)*str3);
                v57 = v55 + 1 + (int64_t)v56 - str2;
                free((int64_t *)*str3);
                v55 = v57;
            }
            // 0x40e60a
            v50 = base;
            v51 = v53;
            v52 = v57 + v53;
        } else {
            int64_t v58 = function_4100e0(v49); // 0x40e59b
            v50 = (int64_t *)v4;
            v51 = v58;
            v52 = v58;
        }
        // 0x40e60d
        free(v50);
        v47 = v52;
        result = v51;
    }
    // 0x40e615
    *(char *)v47 = 0;
    // 0x40e619
    return result;
  lab_0x40e4a8:
    // 0x40e4a8
    if (v13 != 0) {
        // break -> 0x40e4e5
        goto lab_0x40e4e5_2;
    }
    goto lab_0x40e4ac;
  lab_0x40e4ac:
    // 0x40e4ac
    *v2 = 0;
    struct dirent * v59 = readdir(dirp); // 0x40e4b6
    v8 = v59;
    nmemb = v9;
    v4 = v11;
    v5 = v14;
    v6 = v10;
    v7 = v12;
    if (v59 == NULL) {
        // break (via goto) -> 0x40e578
        goto lab_0x40e578_2;
    }
    goto lab_0x40e4c7;
}
// Address range: 0x40e7f0 - 0x40e858
int64_t function_40e7f0(int64_t a1, int64_t a2) {
    int64_t dirp = function_40a880(); // 0x40e7f6
    if (dirp == 0) {
        // 0x40e81c
        return 0;
    }
    int64_t result = function_40e450(dirp, a2 & 0xffffffff); // 0x40e808
    if (closedir((struct __dirstream *)dirp) == 0) {
        // 0x40e81c
        return result;
    }
    int32_t * v1 = __errno_location(); // 0x40e838
    free((int64_t *)result);
    return 0;
}
// Address range: 0x40e860 - 0x40e8b4
int64_t function_40e860(int64_t a1) {
    // 0x40e860
    int64_t v1; // bp-152, 0x40e860
    int32_t v2 = __lxstat(1, (char *)a1, (struct stat *)&v1); // 0x40e873
    int32_t * v3 = __errno_location(); // 0x40e87a
    if (v2 == 0) {
        // 0x40e8a0
        *v3 = 17;
        return 0xffffffff;
    }
    int32_t v4 = *v3; // 0x40e883
    if (v4 != 75) {
        // 0x40e88a
        return v4 != 2 ? 0xffffffff : 0;
    }
    // 0x40e8a0
    *v3 = 17;
    return 0xffffffff;
}
// Address range: 0x40e8c0 - 0x40e8ca
int64_t function_40e8c0(void) {
    // 0x40e8c0
    int64_t path; // 0x40e8c0
    return mkdir((char *)path, 448);
}
// Address range: 0x40e8d0 - 0x40e8e6
int64_t function_40e8d0(void) {
    // 0x40e8d0
    int64_t path; // 0x40e8d0
    return open((char *)path, (int32_t)path & -196 | 194);
}
// Address range: 0x40e8f0 - 0x40e8f1
int64_t function_40e8f0(void) {
    // 0x40e8f0
    int64_t result; // 0x40e8f0
    return result;
}
// Address range: 0x40e910 - 0x40ea6d
int64_t function_40e910(int64_t str, int32_t a2, int64_t * a3, int64_t a4, uint64_t a5) {
    int32_t * v1 = __errno_location(); // 0x40e935
    int32_t v2 = *v1; // 0x40e940
    uint64_t len = (int64_t)strlen((char *)str); // 0x40e946
    uint64_t v3 = (int64_t)a2 + a5; // 0x40e94e
    if (v3 > len) {
        // 0x40ea58
        *v1 = 22;
        // 0x40ea40
        return 0xffffffff;
    }
    int64_t str2 = len - v3 + str;
    if ((int64_t)strspn((char *)str2, "X") < a5) {
        // 0x40ea58
        *v1 = 22;
        // 0x40ea40
        return 0xffffffff;
    }
    int64_t v4 = function_414400(); // 0x40e984
    if (v4 == 0) {
        // 0x40ea40
        return 0xffffffff;
    }
    int32_t v5 = 0x3a2f8; // 0x40e9a6
    int64_t v6; // 0x40e910
    int64_t v7; // 0x40e9c8
    int64_t v8; // 0x40e9cc
    char v9; // 0x40e9d1
    if (a5 != 0) {
        v7 = str2 + 1;
        v8 = function_414440(v4, 61);
        v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        *(char *)str2 = v9;
        v6 = v7;
        while (v7 != str2 + a5) {
            // 0x40e9c0
            v7 = v6 + 1;
            v8 = function_414440(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)v6 = v9;
            v6 = v7;
        }
    }
    int32_t v10; // 0x40e910
    int64_t v11; // 0x40e910
    int64_t result; // 0x40e910
    while ((int32_t)a4 < 0) {
        int32_t v12 = *v1; // 0x40e9f8
        v10 = v12;
        v11 = 0xffffffff;
        if (v12 != 17) {
            goto lab_0x40ea25;
        }
        // 0x40ea00
        v5--;
        if (v5 == 0) {
            // 0x40ea06
            function_414560(v4);
            *v1 = 17;
            result = 0xffffffff;
            return result;
        }
        if (a5 != 0) {
            v7 = str2 + 1;
            v8 = function_414440(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)str2 = v9;
            v6 = v7;
            while (v7 != str2 + a5) {
                // 0x40e9c0
                v7 = v6 + 1;
                v8 = function_414440(v4, 61);
                v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
                *(char *)v6 = v9;
                v6 = v7;
            }
        }
    }
    // 0x40ea1c
    *v1 = v2;
    v10 = v2;
    v11 = a4 & 0xffffffff;
  lab_0x40ea25:
    // 0x40ea25
    function_414560(v4);
    *v1 = v10;
    result = v11;
  lab_0x40ea40:
    // 0x40ea40
    return result;
}
// Address range: 0x40ea70 - 0x40eaeb
int64_t function_40ea70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a3 >> 32; // bp-12, 0x40ea74
    if ((int32_t)a4 < 3) {
        int64_t v2 = *(int64_t *)((8 * a4 & 0x7fffffff8) + (int64_t)&g14); // 0x40ea84
        int64_t v3; // 0x40ea70
        return function_40e910(a1, (int32_t)a2, &v1, v2, v3);
    }
    // 0x40eacc
    function_40e8f0();
    function_40e8f0();
    return function_40e910(a1, (int32_t)a2, (int64_t *)a3, a4, 6);
}
// Address range: 0x40eaf0 - 0x40eb3e
int64_t function_40eaf0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40eafc
    if (fd >= 3) {
        // 0x40eb01
        return a1 & 0xffffffff;
    }
    // 0x40eb10
    int64_t v1; // 0x40eaf0
    int64_t v2 = function_414fd0(a1, v1); // 0x40eb10
    int32_t * v3 = __errno_location(); // 0x40eb18
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40eb40 - 0x40eb4c
int64_t function_40eb40(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40eb40
    return a1 % a2;
}
// Address range: 0x40eb50 - 0x40eb5a
int64_t function_40eb50(int64_t a1, int64_t a2) {
    // 0x40eb50
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x40eb60 - 0x40f2c9
int64_t function_40eb60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a3 + 96); // 0x40eb73
    int64_t v2 = *(int64_t *)(a2 + 88); // 0x40eb77
    int64_t v3 = *(int64_t *)(a3 + 88); // 0x40eb7b
    int64_t v4 = *(int64_t *)(a2 + 96); // 0x40eb7f
    int64_t v5 = v1 & 0xffffffff; // 0x40eb83
    uint32_t v6 = (int32_t)a4 % 2; // 0x40eb86
    int64_t v7 = v3; // 0x40eb89
    int64_t v8 = v5; // 0x40eb89
    int64_t v9; // 0x40eb60
    int64_t v10; // bp-248, 0x40eb60
    int32_t v11; // 0x40eb60
    int32_t v12; // 0x40eb96
    int32_t v13; // 0x40eb60
    int64_t result; // 0x40eb86
    int64_t v14; // 0x40ecc7
    if (v6 == 0) {
        goto lab_0x40ec50;
    } else {
        // 0x40eb8f
        v12 = v4;
        v13 = v1;
        if (v2 == v3 == v12 == v13) {
            // 0x40ec67
            return 0;
        }
        // 0x40ebac
        if (v3 - 1 > v2) {
            // 0x40ec67
            return 0xffffffff;
        }
        // 0x40ebb9
        result = v6;
        if (v2 - 1 > v3) {
            // 0x40ec67
            return result;
        }
        // 0x40ebc7
        v14 = g62;
        if (g62 == 0) {
            // 0x40ecb0
            v14 = function_40b8c0(16, 0, 0x40eb40, 0x40eb50, 0x402650);
            g62 = v14;
            if (v14 != 0) {
                goto lab_0x40ebe1;
            } else {
                // 0x40ecdf
                v11 = 0x77359400;
                v9 = &v10;
                goto lab_0x40ecfc;
            }
        } else {
            goto lab_0x40ebe1;
        }
    }
  lab_0x40ec50:
    // 0x40ec50
    if (v7 > v2) {
        // 0x40ec67
        return 0xffffffff;
    }
    // 0x40ec55
    if (v7 != v2) {
        // 0x40ec67
        return 1;
    }
    int64_t result2 = 0xffffffff; // 0x40ec5f
    if (v8 <= v4) {
        int32_t v15 = v8; // 0x40ec5c
        int32_t v16 = v15 - (int32_t)v4; // 0x40ec5c
        result2 = v16 < 0 != ((v16 ^ v15) & (int32_t)(v8 ^ v4)) < 0;
    }
    // 0x40ec67
    return result2;
  lab_0x40ebe1:;
    int64_t v17 = v14; // 0x40ebeb
    int64_t v18 = g61; // 0x40ebeb
    int32_t v19; // 0x40eb60
    if (g61 == 0) {
        int64_t * mem = malloc(16); // 0x40f14a
        int64_t v20 = (int64_t)mem; // 0x40f14a
        g61 = v20;
        if (mem == NULL) {
            // 0x40f22f
            v19 = g62;
            goto lab_0x40f190;
        } else {
            // 0x40f162
            *(int32_t *)(v20 + 8) = 0x77359400;
            *(char *)(v20 + 12) = 0;
            v17 = 0x100000000 * v14 >> 32;
            v18 = v20;
            goto lab_0x40ebf1;
        }
    } else {
        goto lab_0x40ebf1;
    }
  lab_0x40ebf1:;
    int64_t v21 = v18;
    *(int64_t *)v21 = v21;
    int64_t v22 = function_40c060(v17, v21); // 0x40ebff
    int64_t v23; // 0x40eb60
    if (v22 == 0) {
        // 0x40f180
        v19 = g62;
        if (g62 == 0) {
            // 0x40ecdf
            v11 = 0x77359400;
            v9 = &v10;
            goto lab_0x40ecfc;
        } else {
            goto lab_0x40f190;
        }
    } else {
        // 0x40ec10
        v23 = v22;
        if (g61 == v22) {
            // 0x40f1c8
            g61 = 0;
            v23 = v22;
        }
        goto lab_0x40ec1d;
    }
  lab_0x40ecfc:;
    int64_t v24 = *(int64_t *)(a2 + 80); // 0x40ed07
    int64_t v25 = *(int64_t *)(a2 + 112); // 0x40ed0b
    int32_t v26 = v24; // 0x40ed11
    int32_t v27 = ((int32_t)(0x66666667 * (0x100000000 * v24 >> 32) / 0x100000000) >> 2) - (v26 >> 31); // 0x40ed21
    int32_t v28 = v25; // 0x40ed25
    int32_t v29 = ((int32_t)(0x66666667 * (0x100000000 * v25 >> 32) / 0x100000000) >> 2) - (v28 >> 31); // 0x40ed3c
    int64_t v30 = 0x100000000 * v4 >> 32; // 0x40ed51
    int32_t v31 = ((int32_t)(0x66666667 * v30 / 0x100000000) >> 2) - (v12 >> 31); // 0x40ed5c
    int64_t v32 = result; // 0x40ed6d
    int64_t v33 = v3; // 0x40ed6d
    int64_t v34 = v9; // 0x40ed6d
    int64_t v35 = v5; // 0x40ed6d
    int64_t v36; // 0x40eb60
    int64_t v37; // 0x40eb60
    int64_t v38; // 0x40eb60
    int64_t v39; // 0x40eb60
    int64_t v40; // 0x40ed83
    if ((-10 * v27 + v26 || -10 * v31 + v12 || -10 * v29 + v28) != 0) {
        goto lab_0x40f130;
    } else {
        // 0x40ed73
        v40 = *(int64_t *)(a2 + 72);
        if (v11 < 11) {
            // 0x40f263
            *(int32_t *)(v9 + 8) = 10;
            v38 = v3;
            v39 = v3;
            v36 = 10;
            v37 = v9;
        } else {
            if ((v27 % 10 || v31 % 10 || v29 % 10) != 0) {
                // 0x40f253
                *(int32_t *)(v9 + 8) = 10;
                v38 = v3;
                v39 = v3;
                v36 = 10;
                v37 = v9;
            } else {
                int32_t v41 = v27; // 0x40ee19
                int32_t v42 = v29; // 0x40ee19
                int32_t v43 = v31; // 0x40ee19
                int32_t v44 = 8; // 0x40ee19
                int64_t v45 = 100; // 0x40ee31
                int64_t v46 = v45 & 0xfffffffc; // 0x40ee31
                while (v46 < (int64_t)v11) {
                    int32_t v47 = v43;
                    int32_t v48 = v42;
                    int32_t v49 = v41;
                    v41 = v49 / 10;
                    v42 = v48 / 10;
                    v43 = v47 / 10;
                    if ((-10 * v48 / 100 + v42 || -10 * v49 / 100 + v41 || -10 * v47 / 100 + v43) != 0) {
                        // break -> 0x40f1e0
                        break;
                    }
                    // 0x40eeb2
                    v44--;
                    if (v44 == 0) {
                        int64_t v50 = 0x100000000 * v3 >> 32; // 0x40eec6
                        int64_t v51 = 0x100000000000000 * v9 >> 56; // 0x40eed7
                        int32_t * v52 = (int32_t *)(v51 + 8);
                        if ((v40 | v2 | *(int64_t *)(a2 + 104)) % 2 == 0) {
                            // 0x40f210
                            *v52 = 0x77359400;
                            v38 = v50 & -2;
                            v39 = v50;
                            v36 = 0x77359400;
                            v37 = v51;
                            goto lab_0x40eef5;
                        } else {
                            // 0x40eee4
                            *v52 = 0x3b9aca00;
                            v38 = v50;
                            v39 = v50;
                            v36 = 0x3b9aca00;
                            v37 = v51;
                            goto lab_0x40eef5;
                        }
                    }
                    v45 = 10 * v46;
                    v46 = v45 & 0xfffffffc;
                }
                int32_t v53 = v45; // 0x40f1e0
                int64_t v54 = 0x100000000 * v3 >> 32; // 0x40f1e7
                int64_t v55 = 0x100000000000000 * v9 >> 56; // 0x40f1ec
                *(int32_t *)(v55 + 8) = v53;
                v38 = v54 & (int64_t)(v53 == 0x77359400) - 1;
                v39 = v54;
                v36 = v46;
                v37 = v55;
            }
        }
        goto lab_0x40eef5;
    }
  lab_0x40f130:
    // 0x40f130
    *(int32_t *)(v34 + 8) = (int32_t)v32;
    *(char *)(v34 + 12) = 1;
    v7 = v33;
    v8 = v35;
    goto lab_0x40ec50;
  lab_0x40f190:;
    int64_t v56 = &v10; // 0x40f19a
    v10 = v56;
    int64_t v57 = function_40b650((int64_t)v19, &v10); // 0x40f1aa
    v23 = v57;
    v11 = 0x77359400;
    v9 = 0x100000000 * v56 >> 32;
    if (v57 != 0) {
        goto lab_0x40ec1d;
    } else {
        goto lab_0x40ecfc;
    }
  lab_0x40ec1d:;
    uint32_t v58 = *(int32_t *)(v23 + 8); // 0x40ec1d
    v11 = v58;
    v9 = v23;
    if (*(char *)(v23 + 12) == 0) {
        goto lab_0x40ecfc;
    } else {
        // 0x40ec30
        v7 = v3 & (int64_t)(v58 == 0x77359400) - 1;
        v8 = v1 - (0x100000000 * (int64_t)(v13 >> 31) | v5) % (int64_t)v58 & 0xffffffff;
        goto lab_0x40ec50;
    }
  lab_0x40eef5:
    // 0x40eef5
    if (v2 > v39 || v4 >= v1 == v2 == v3) {
        // 0x40ec67
        return result;
    }
    // 0x40ef0d
    if (v2 < v38) {
        // 0x40ec67
        return 0xffffffff;
    }
    // 0x40ef16
    if (v2 == v38) {
        // 0x40ec84
        if ((v1 - (0x100000000 * (int64_t)(v13 >> 31) | v5) % v36 & 0xffffffff) > v4) {
            // 0x40ec67
            return 0xffffffff;
        }
    }
    int64_t v59 = v40; // bp-232, 0x40ef30
    int32_t * v60 = (int32_t *)(a2 + 24); // 0x40ef63
    int64_t v61; // 0x40eb60
    if ((*v60 & 0xf000) == 0xa000) {
        // 0x40f23b
        v61 = function_40f8b0(a1, &v59, 0x38e38e39 * v36 / 0x200000000);
    } else {
        // 0x40ef8a
        v61 = function_40f8a0(a1, &v59);
    }
    // 0x40ef9d
    if ((int32_t)v61 != 0) {
        // 0x40ec67
        return 0xfffffffe;
    }
    char * v62 = (char *)a1;
    int64_t v63; // bp-200, 0x40eb60
    int32_t v64; // 0x40eb60
    if ((*v60 & 0xf000) == 0xa000) {
        // 0x40f279
        v64 = __lxstat(1, v62, (struct stat *)&v63);
    } else {
        // 0x40efdb
        v64 = __xstat(1, v62, (struct stat *)&v63);
    }
    // 0x40efec
    int32_t v65; // 0x40eb60
    uint64_t v66 = (int64_t)v65; // 0x40efec
    int64_t v67 = v65; // 0x40eff4
    int64_t v68 = v30 ^ v67 | v2 ^ v66 | (int64_t)v64; // 0x40f011
    if (v68 != 0) {
        int64_t * v69 = (int64_t *)(0x100000000000000 * (int64_t)&v59 >> 56);
        if ((*v60 & 0xf000) == 0xa000) {
            // 0x40f2a3
            function_40f8b0(a1, v69, v68);
        } else {
            // 0x40f050
            function_40f8a0(a1, v69);
        }
        // 0x40f063
        if (v64 != 0) {
            // 0x40ec67
            return 0xfffffffe;
        }
    }
    int64_t v70 = 0x3b9aca00 * (v66 % 2) + v67; // 0x40f090
    int32_t v71 = v70; // 0x40f098
    int64_t v72 = -1; // 0x40f0a9
    int64_t v73 = result; // 0x40f0a9
    if (10 * (((int32_t)(0x66666667 * (0x100000000 * v70 >> 32) / 0x100000000) >> 2) - (v71 >> 31)) == v71) {
        // 0x40f0af
        v72 = -1;
        v73 = 10;
        if (v36 != 10) {
            int64_t v74 = 10; // 0x40f0d3
            int32_t v75 = 9; // 0x40f107
            int64_t v76 = v70 & 0xffffffff;
            int32_t v77 = ((int32_t)(0x66666667 * (0x100000000 * v76 >> 32) / 0x100000000) >> 2) - ((int32_t)v76 >> 31); // 0x40f0e8
            int64_t v78 = v74; // 0x40f101
            while (v77 % 10 == 0) {
                // 0x40f107
                v75--;
                v72 = -2;
                v73 = 0x77359400;
                if (v75 == 0) {
                    goto lab_0x40f118;
                }
                int64_t v79 = 10 * v74; // 0x40f0d3
                v74 = v79 & 0xfffffffc;
                v78 = v74;
                if ((int32_t)v79 == (int32_t)v36) {
                    // break -> 0x40f28f
                    break;
                }
                v76 = v77;
                v77 = ((int32_t)(0x66666667 * (0x100000000 * v76 >> 32) / 0x100000000) >> 2) - ((int32_t)v76 >> 31);
                v78 = v74;
            }
            // 0x40f28f
            v72 = (int64_t)((int32_t)v78 == 0x77359400) - 1;
            v73 = v78;
        }
    }
  lab_0x40f118:
    // 0x40f118
    v32 = v73;
    v33 = v72 & v39;
    v34 = 0x100000000000000 * v37 >> 56;
    v35 = v1 - (0x100000000 * (int64_t)(v13 >> 31) | v5) % (v73 & 0xffffffff) & 0xffffffff;
    goto lab_0x40f130;
}
// Address range: 0x40f2d0 - 0x40f39e
int64_t function_40f2d0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x40f2dc
    int64_t * v4 = (int64_t *)(v1 + 24); // 0x40f2e0
    int64_t v5 = *v4; // 0x40f2e0
    int64_t v6; // 0x40f2d0
    switch (*v3) {
        case 0x3ffffffe: {
            // 0x40f320
            if (v5 == 0x3ffffffe) {
                // 0x40f30f
                return 1;
            }
            // 0x40f32e
            *a2 = *(int64_t *)(v2 + 72);
            *v3 = *(int64_t *)(v2 + 80);
            v6 = v5;
            goto lab_0x40f33d;
        }
        case 0x3fffffff: {
            if (v5 == 0x3fffffff) {
                // 0x40f390
                *a2 = 0;
                // 0x40f30f
                return 0;
            }
            // 0x40f371
            function_413c70(v1);
            int64_t v7 = *v4; // 0x40f379
            v6 = v7;
            if (v7 == 0x3ffffffe) {
                goto lab_0x40f2fd;
            } else {
                goto lab_0x40f33d;
            }
        }
        default: {
            // 0x40f2f4
            v6 = v5;
            if (v5 != 0x3ffffffe) {
                goto lab_0x40f33d;
            } else {
                goto lab_0x40f2fd;
            }
        }
    }
  lab_0x40f33d:
    // 0x40f33d
    if (v6 == 0x3fffffff) {
        // 0x40f348
        function_413c70(v1 + 16);
        return 0;
    }
    // 0x40f30f
    return 0;
  lab_0x40f2fd:
    // 0x40f2fd
    *(int64_t *)(v1 + 16) = *(int64_t *)(v2 + 88);
    *v4 = *(int64_t *)(v2 + 96);
    // 0x40f30f
    return 0;
}
// Address range: 0x40f3a0 - 0x40f449
int64_t function_40f3a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40f3a0
    uint64_t v2 = v1 - 0x3ffffffe; // 0x40f3a4
    if (v1 >= 0x3b9aca00 && v1 != 0x3fffffff && v2 != 0) {
        // 0x40f430
        *__errno_location() = 22;
        return 0xffffffff;
    }
    uint64_t v3 = *(int64_t *)(a1 + 24); // 0x40f3ba
    uint64_t v4 = v3 - 0x3ffffffe; // 0x40f3be
    if (v3 >= 0x3b9aca00 && v3 != 0x3fffffff && v4 != 0) {
        // 0x40f430
        *__errno_location() = 22;
        return 0xffffffff;
    }
    int64_t v5 = 0; // 0x40f3dd
    int64_t v6 = 0; // 0x40f3dd
    if (v2 < 2) {
        // 0x40f3df
        *(int64_t *)a1 = 0;
        v5 = v1 == 0x3ffffffe;
        v6 = 1;
    }
    int64_t v7 = v5; // 0x40f3fc
    int64_t v8 = v6; // 0x40f3fc
    if (v4 < 2) {
        // 0x40f3fe
        *(int64_t *)(a1 + 16) = 0;
        v7 = v5 + (int64_t)(v3 == 0x3ffffffe);
        v8 = 1;
    }
    // 0x40f41a
    return v8 + (int64_t)((int32_t)v7 == 1) & 0xffffffff;
}
// Address range: 0x40f450 - 0x40f45a
int64_t function_40f450(void) {
    struct timespec v1; // 0x40f455
    struct timespec times[2]; // 0x40f455
    // 0x40f450
    v1 = (struct {int64_t e0; int32_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    int64_t fd; // 0x40f450
    v1.e0 = fd;
    times[0] = v1;
    return utimensat((int32_t)fd, (char *)fd, times, AT_SYMLINK_NOFOLLOW);
}
// Address range: 0x40f460 - 0x40f89e
int64_t function_40f460(int64_t a1, int64_t path, int64_t * a3, int64_t a4) {
    struct timeval v1; // 0x40f5d0
    struct timeval v2[2]; // 0x40f5d0
    struct timeval v3; // 0x40f642
    struct timeval v4[2]; // 0x40f642
    struct timespec v5; // 0x40f6fd
    struct timespec times[2]; // 0x40f6fd
    struct timespec v6; // 0x40f4da
    struct timespec times2[2]; // 0x40f4da
    struct timeval v7; // 0x40f7f0
    struct timeval v8[2]; // 0x40f7f0
    int64_t v9 = (int64_t)a3;
    int64_t v10; // 0x40f460
    int64_t v11; // bp-288, 0x40f460
    if (a3 == NULL) {
        // 0x40f650
        v11 = 0;
        v10 = 0;
    } else {
        int128_t v12 = *(int128_t *)&v9; // 0x40f47d
        int128_t v13 = __asm_movdqu(v12); // 0x40f47d
        int64_t v14 = v12;
        int128_t v15 = __asm_movdqu(*(int128_t *)(v14 + 16)); // 0x40f481
        int64_t v16; // bp-280, 0x40f460
        int64_t v17 = &v16; // 0x40f486
        v11 = v17;
        v16 = __asm_movaps(v13);
        __asm_movaps(v15);
        int64_t v18 = function_40f3a0(v17, path, v14, a4); // 0x40f49a
        v10 = v18 & 0xffffffff;
        if ((int32_t)v18 < 0) {
            // 0x40f618
            return -1;
        }
    }
    int32_t fd = a1; // 0x40f4aa
    if (fd < 0 == path == 0) {
        // 0x40f848
        *__errno_location() = 9;
        // 0x40f618
        return -1;
    }
    // 0x40f4b7
    int32_t result; // 0x40f460
    int64_t v19; // bp-184, 0x40f460
    bool v20; // 0x40f460
    if (g64 < 0) {
        goto lab_0x40f4f5;
    } else {
        int64_t v21; // 0x40f460
        if (v10 == 2) {
            // 0x40f668
            v9 = &v19;
            int32_t v22; // 0x40f460
            if (fd < 0) {
                // 0x40f800
                v22 = __xstat(1, (char *)path, (struct stat *)&v19);
            } else {
                // 0x40f675
                v22 = __fxstat(1, fd, (struct stat *)&v19);
            }
            // 0x40f686
            if (v22 != 0) {
                // 0x40f618
                return -1;
            }
            // 0x40f68e
            if (*(int64_t *)(v11 + 8) == 0x3ffffffe) {
                // 0x40f820
                v21 = v11;
            } else {
                // 0x40f6a1
                v21 = v11;
                if (*(int64_t *)(v11 + 24) == 0x3ffffffe) {
                    // 0x40f6b5
                    v21 = v11;
                }
            }
        } else {
            // 0x40f4cb
            v21 = v11;
        }
        // 0x40f4d0
        if (fd < 0) {
            // 0x40f6f0
            v5 = (struct {int64_t e0; int32_t e1;}){
                .e0 = 0,
                .e1 = 0
            };
            v5.e0 = v21;
            times[0] = v5;
            int32_t v23 = utimensat(-100, (char *)path, times, 0); // 0x40f6fd
            v20 = v23 == 0;
            result = v23;
            if (v23 >= 0 == (v23 != 0)) {
                goto lab_0x40f4ea;
            } else {
                goto lab_0x40f70d;
            }
        } else {
            // 0x40f4d8
            v6 = (struct {int64_t e0; int32_t e1;}){
                .e0 = 0,
                .e1 = 0
            };
            v6.e0 = v21;
            times2[0] = v6;
            int32_t v24 = futimens(fd, times2); // 0x40f4da
            v20 = v24 == 0;
            result = v24;
            if (v24 < 1) {
                goto lab_0x40f70d;
            } else {
                goto lab_0x40f4ea;
            }
        }
    }
  lab_0x40f4f5:
    // 0x40f4f5
    g64 = -1;
    g63 = -1;
    int64_t v25; // 0x40f460
    switch ((int32_t)v25) {
        case 0: {
            goto lab_0x40f560;
        }
        case 3: {
            goto lab_0x40f53a;
        }
        default: {
            // 0x40f514
            v9 = &v19;
            int32_t v26; // 0x40f460
            if (fd < 0) {
                // 0x40f6d8
                v26 = __xstat(1, (char *)path, (struct stat *)&v19);
            } else {
                // 0x40f521
                v26 = __fxstat(1, fd, (struct stat *)&v19);
            }
            // 0x40f532
            if (v26 != 0) {
                // 0x40f618
                return -1;
            }
            goto lab_0x40f53a;
        }
    }
  lab_0x40f560:;
    // 0x40f560
    int64_t v27; // 0x40f460
    int64_t v28; // 0x40f460
    if (v11 == 0) {
        goto lab_0x40f630;
    } else {
        // 0x40f56e
        int64_t v29; // bp-248, 0x40f460
        int64_t v30 = &v29; // 0x40f575
        v29 = *(int64_t *)v11;
        v9 = v30;
        v27 = v30;
        v28 = v30;
        if (fd < 0) {
            goto lab_0x40f63a;
        } else {
            goto lab_0x40f5cc;
        }
    }
  lab_0x40f53a:
    // 0x40f53a
    if (v11 == 0) {
        goto lab_0x40f630;
    } else {
        // 0x40f546
        if ((char)function_40f2d0(&v19, &v11) != 0) {
            // 0x40f618
            return 0;
        }
        goto lab_0x40f560;
    }
  lab_0x40f630:
    // 0x40f630
    v9 = 0;
    v27 = 0;
    v28 = 0;
    if (fd >= 0) {
        goto lab_0x40f5cc;
    } else {
        goto lab_0x40f63a;
    }
  lab_0x40f4ea:
    // 0x40f4ea
    *__errno_location() = 38;
    goto lab_0x40f4f5;
  lab_0x40f70d:
    // 0x40f70d
    if (v20 || *__errno_location() != 38) {
        // 0x40f713
        g64 = 1;
        // 0x40f618
        return result;
    }
    goto lab_0x40f4f5;
  lab_0x40f5cc:
    // 0x40f5cc
    v1 = (struct {int64_t e0; int64_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v1.e0 = v27;
    v2[0] = v1;
    int64_t v31; // bp-216, 0x40f460
    if (futimesat(fd, NULL, v2) != 0) {
        // 0x40f5e0
        if (path == 0) {
            // 0x40f618
            int32_t v32; // 0x40f460
            uint32_t result2 = v32;
            return result2;
        }
        struct utimbuf * times3 = NULL; // 0x40f5f5
        if (v11 != 0) {
            // 0x40f5f7
            v31 = *(int64_t *)v11;
            times3 = (struct utimbuf *)&v31;
        }
        // 0x40f618
        return utime((char *)path, times3);
    }
    // 0x40f728
    if (v27 == 0) {
        // 0x40f618
        return 0;
    }
    int64_t v33 = *(int64_t *)(v27 + 8); // 0x40f731
    int64_t v34 = v33 - 0x7a11f; // 0x40f731
    int64_t v35 = *(int64_t *)(v27 + 24); // 0x40f73d
    int64_t v36 = v35 - 0x7a11f; // 0x40f73d
    if (v34 < 0 == (0x7a11e - v33 & v33) < 0 != v34 != 0 && v36 < 0 == (0x7a11e - v35 & v35) < 0 != v36 != 0 || __fxstat(1, fd, (struct stat *)&v19) != 0) {
        // 0x40f618
        return 0;
    }
    int64_t v37 = v27 + 16; // 0x40f778
    int64_t v38 = *(int64_t *)v37; // 0x40f778
    int128_t v39 = __asm_movdqa(*(int128_t *)v27); // 0x40f784
    int64_t v40 = *(int64_t *)v27; // 0x40f78a
    int128_t v41 = __asm_movdqa(*(int128_t *)v37); // 0x40f78e
    v31 = __asm_movaps(v39);
    __asm_movaps(v41);
    int64_t v42; // 0x40f460
    if (v42 == 0 != (v34 < 0 == (0x7a11e - v33 & v33) < 0 == (v34 != 0) == v42 == v40 + 1)) {
        // 0x40f878
        if (v42 == 0 != (v36 < 0 == (0x7a11e - v35 & v35) < 0 == (v36 != 0) == v42 - v38 == 1)) {
            // 0x40f618
            return 0;
        }
    }
    // 0x40f7e7
    v7 = (struct {int64_t e0; int64_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v7.e0 = &v31;
    v8[0] = v7;
    futimesat(fd, NULL, v8);
    // 0x40f618
    return 0;
  lab_0x40f63a:
    // 0x40f63a
    v3 = (struct {int64_t e0; int64_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v3.e0 = v28;
    v4[0] = v3;
    // 0x40f618
    return futimesat(-100, (char *)path, v4);
}
// Address range: 0x40f8a0 - 0x40f8b0
int64_t function_40f8a0(int64_t a1, int64_t * a2) {
    // 0x40f8a0
    int64_t v1; // 0x40f8a0
    return function_40f460(0xffffffff, a1, a2, v1);
}
// Address range: 0x40f8b0 - 0x40faf8
int64_t function_40f8b0(int64_t path, int64_t * a2, int64_t a3) {
    struct timespec v1; // 0x40f918
    struct timespec times[2]; // 0x40f918
    int64_t v2 = (int64_t)a2;
    int64_t v3; // 0x40f8b0
    int64_t v4; // 0x40f8b0
    int64_t v5; // 0x40f8b0
    int64_t v6; // 0x40f8b0
    int64_t v7; // bp-168, 0x40f8b0
    int64_t v8; // bp-208, 0x40f8b0
    if (a2 == NULL) {
        int32_t v9 = g63; // 0x40f9a0
        v8 = 0;
        v6 = 0;
        v3 = 0;
        if (v9 >= 0) {
            goto lab_0x40f90b;
        } else {
            // 0x40f9bb
            g63 = -1;
            v5 = v9;
            goto lab_0x40f9c5;
        }
    } else {
        int128_t v10 = *(int128_t *)&v2; // 0x40f8c7
        int128_t v11 = __asm_movdqu(v10); // 0x40f8c7
        int64_t v12 = v10;
        int128_t v13 = __asm_movdqu(*(int128_t *)(v12 + 16)); // 0x40f8cb
        int64_t v14; // bp-200, 0x40f8b0
        int64_t v15 = &v14; // 0x40f8d0
        v8 = v15;
        v14 = __asm_movaps(v11);
        __asm_movaps(v13);
        int64_t v16; // 0x40f8b0
        int64_t v17 = function_40f3a0(v15, v12, a3, v16); // 0x40f8e4
        int32_t v18 = v17; // 0x40f8eb
        if (v18 < 0) {
            // 0x40f992
            return 0xffffffff;
        }
        int64_t v19 = v17 & 0xffffffff; // 0x40f8e9
        v4 = v19;
        if (g63 < 0) {
            goto lab_0x40f932;
        } else {
            if (v18 == 2) {
                // 0x40fa50
                if (__lxstat(1, (char *)path, (struct stat *)&v7) != 0) {
                    // 0x40f992
                    return 0xffffffff;
                }
                // 0x40fa6a
                if (*(int64_t *)(v8 + 8) == 0x3ffffffe) {
                    // 0x40fab0
                    v6 = v8;
                    v3 = 3;
                } else {
                    // 0x40fa79
                    v6 = v8;
                    v3 = 3;
                    if (*(int64_t *)(v8 + 24) == 0x3ffffffe) {
                        // 0x40fa8c
                        v6 = v8;
                        v3 = 3;
                    }
                }
            } else {
                // 0x40f906
                v6 = v8;
                v3 = v19;
            }
            goto lab_0x40f90b;
        }
    }
  lab_0x40f90b:
    // 0x40f90b
    v1 = (struct {int64_t e0; int32_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v1.e0 = v6;
    times[0] = v1;
    uint32_t result = utimensat(-100, (char *)path, times, AT_SYMLINK_NOFOLLOW); // 0x40f918
    int64_t v20; // 0x40f8b0
    if (result < 1) {
        if (result == 0) {
            // 0x40f9f6
            g64 = 1;
            g63 = 1;
            return result;
        }
        int32_t v21 = *__errno_location(); // 0x40fad5
        v20 = 256;
        v4 = v3;
        if (v21 != 38) {
            // 0x40f9f6
            g64 = 1;
            g63 = 1;
            return result;
        }
    } else {
        // 0x40f927
        *__errno_location() = 38;
        v20 = 256;
        v4 = v3;
    }
    goto lab_0x40f932;
  lab_0x40f932:
    // 0x40f932
    g63 = -1;
    int32_t v22 = v4; // 0x40f93c
    v5 = v20;
    int64_t v23; // 0x40f8b0
    if (v22 == 0) {
        goto lab_0x40f9c5;
    } else {
        if (v22 != 3) {
            // 0x40fa20
            if (__lxstat(1, (char *)path, (struct stat *)&v7) != 0) {
                // 0x40f992
                return 0xffffffff;
            }
            // 0x40fa36
            v23 = v20;
            if (v8 != 0) {
                goto lab_0x40f955;
            } else {
                goto lab_0x40f96a;
            }
        } else {
            // 0x40f94d
            v23 = v20;
            if (v8 == 0) {
                goto lab_0x40f96a;
            } else {
                goto lab_0x40f955;
            }
        }
    }
  lab_0x40f9c5:;
    int32_t v24 = __lxstat(1, (char *)path, (struct stat *)&v7); // 0x40f9d2
    v23 = v5;
    if (v24 != 0) {
        // 0x40f992
        return 0xffffffff;
    }
    goto lab_0x40f96a;
  lab_0x40f96a:;
    int64_t result2; // 0x40f8b0
    int32_t v25; // 0x40f8b0
    if ((v25 & 0xf000) == 0xa000) {
        // 0x40fae8
        *__errno_location() = 38;
        result2 = 0xffffffff;
    } else {
        // 0x40f97e
        result2 = function_40f460(0xffffffff, path, (int64_t *)v8, v23) & 0xffffffff;
    }
    // 0x40f992
    return result2;
  lab_0x40f955:;
    int64_t v26 = function_40f2d0(&v7, &v8); // 0x40f961
    v23 = v20;
    if ((char)v26 != 0) {
        // 0x40f992
        return 0;
    }
    goto lab_0x40f96a;
}
// Address range: 0x40fb00 - 0x40fedd
int64_t function_40fb00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x40fb98
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40fb1c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x40fb36
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40fb7b
    if (a6 < 10) {
        // 0x40fb8a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x40fc82
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x40fee0 - 0x40ff00
int64_t function_40fee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40fee0
    if (a5 == 0) {
        // 0x40fefb
        return function_40fb00(a1, a2, a3, a4, a5, 0, (int64_t)&g76);
    }
    int64_t v1 = 0; // 0x40fee7
    v1++;
    int64_t v2 = v1; // 0x40fef9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x40fef0
        v1++;
        v2 = v1;
    }
    // 0x40fefb
    return function_40fb00(a1, a2, a3, a4, a5, v2, (int64_t)&g76);
}
// Address range: 0x40ff00 - 0x40ff60
int64_t function_40ff00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x40ff00
    int64_t v3 = &v2; // 0x40ff00
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x40ff33
    int64_t v6; // 0x40ff1d
    int64_t * v7; // 0x40ff3b
    int64_t v8; // 0x40ff3b
    int64_t v9; // 0x40ff47
    if (v5 < 48) {
        // 0x40ff10
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x40ff53
            break;
        }
    } else {
        // 0x40ff3b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x40ff53
            break;
        }
    }
    int64_t v10 = 10; // 0x40ff31
    while (v4 != 9) {
        // 0x40ff29
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x40ff10
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x40ff53
                break;
            }
        } else {
            // 0x40ff3b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x40ff53
                break;
            }
        }
        // 0x40ff29
        v10 = 10;
    }
    // 0x40ff53
    return function_40fb00(a1, a2, a3, a4, v3, v10, (int64_t)&g76);
}
// Address range: 0x40ff60 - 0x41001c
int64_t function_40ff60(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x40ff60
    int64_t v1; // bp-168, 0x40ff60
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x40ff60
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x40ff60
    int64_t v8; // 0x40ff60
    int64_t v9; // bp-56, 0x40ff60
    int64_t v10; // 0x40ffc5
    int64_t v11; // 0x40ffe9
    if ((int32_t)v6 < 48) {
        // 0x40ffb0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x410000
            break;
        }
    } else {
        // 0x40ffe2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x410000
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40ffda
    int64_t v13 = 10; // 0x40ffda
    while (v5 != 9) {
        // 0x40ffdc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x40ffb0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x410000
                break;
            }
        } else {
            // 0x40ffe2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x410000
                break;
            }
        }
        // 0x40ffd2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x410000
    int64_t v14; // bp-136, 0x40ff60
    int64_t result = function_40fb00(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g76); // 0x41000f
    return result;
}
// Address range: 0x410020 - 0x410094
int64_t function_410020(int64_t a1) {
    // 0x410020
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x410083
    return fputs_unlocked(v1, g39);
}
// Address range: 0x4100a0 - 0x4100d8
int64_t function_4100a0(void) {
    // 0x4100a0
    if (g66 != 0) {
        // 0x4100a9
        return g65;
    }
    int32_t v1 = geteuid(); // 0x4100bc
    g66 = 1;
    g65 = v1 == 0;
    return (int64_t)(v1 & -256) | (int64_t)(v1 == 0);
}
// Address range: 0x4100e0 - 0x4100fa
int64_t function_4100e0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4100e4
    if (size != 0 != (mem == NULL)) {
        // 0x4100f3
        return (int64_t)mem;
    }
    // 0x4100f5
    function_410330(size);
    // UNREACHABLE
}
// Address range: 0x410100 - 0x410121
int64_t function_410100(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x410103
    int64_t v2 = v1; // 0x410103
    if (v2 < 0) {
        // 0x41011b
        function_410330(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x410119
        return function_4100e0(v2);
    }
    // 0x41011b
    function_410330(v2);
    // UNREACHABLE
}
// Address range: 0x410130 - 0x410132
int64_t function_410130(void) {
    // 0x410130
    int64_t v1; // 0x410130
    return function_4100e0(v1);
}
// Address range: 0x410140 - 0x410176
int64_t function_410140(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x410168
        free(v1);
        return (int32_t)&g76 ^ (int32_t)&g76;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x410151
    if (a2 != 0 != (mem == NULL)) {
        // 0x410160
        return (int64_t)mem;
    }
    // 0x410171
    function_410330(a1);
    // UNREACHABLE
}
// Address range: 0x410180 - 0x4101a1
int64_t function_410180(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x410183
    int64_t v2 = v1; // 0x410183
    if (v2 < 0) {
        // 0x41019b
        function_410330(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x410199
        return function_410140(a1, v2);
    }
    // 0x41019b
    function_410330(a1);
    // UNREACHABLE
}
// Address range: 0x4101b0 - 0x410236
int64_t function_4101b0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x41020b
            function_410330(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_410140(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4101f3
    if (a2 == 0) {
        // 0x410218
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4101f8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x41020b
        function_410330(a1);
        // UNREACHABLE
    }
    // 0x4101da
    *(int64_t *)a2 = v2;
    return function_410140(a1, v2 * a3);
}
// Address range: 0x410240 - 0x410290
int64_t function_410240(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x410240
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x41028a
            function_410330(a1);
            // UNREACHABLE
        }
        // 0x410262
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_410140(a1, v1);
    }
    if (a2 == 0) {
        // 0x410275
        *(int64_t *)a2 = 128;
        return function_410140(0, 128);
    }
    // 0x410288
    if (a2 < 0) {
        // 0x41028a
        function_410330(a1);
        // UNREACHABLE
    }
    // 0x410262
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_410140(a1, v1);
}
// Address range: 0x410290 - 0x4102a7
int64_t function_410290(int64_t a1, int64_t a2) {
    // 0x410290
    return (int64_t)memset((int64_t *)function_4100e0(a1), 0, (int32_t)a1);
}
// Address range: 0x4102b0 - 0x4102de
int64_t function_4102b0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4102b7
    if ((int64_t)v1 < 0) {
        // 0x4102d9
        function_410330(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4102d9
        function_410330(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4102ca
    if (mem != NULL) {
        // 0x4102d4
        return (int64_t)mem;
    }
    // 0x4102d9
    function_410330(nmemb);
    // UNREACHABLE
}
// Address range: 0x4102e0 - 0x410308
int64_t function_4102e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4100e0(a2); // 0x4102ef
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x410310 - 0x410323
int64_t function_410310(int64_t str) {
    // 0x410310
    return function_4102e0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x410330 - 0x410361
int64_t function_410330(int64_t a1) {
    // 0x410330
    error(g28, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x410370 - 0x4103e9
int64_t function_410370(int64_t a1, int32_t a2) {
    // 0x410370
    int64_t v1; // 0x410370
    int64_t result = fts_open(a1, a2 | 512, v1); // 0x41037a
    if (result != 0) {
        // 0x410384
        return result;
    }
    // 0x410390
    if (*__errno_location() != 22) {
        // 0x41039a
        function_410330(a1);
        // UNREACHABLE
    }
    // 0x4103a0
    __assert_fail("errno != EINVAL", "lib/xfts.c", 41, "xfts_open");
    // 0x410384
    return result;
}
// Address range: 0x4103f0 - 0x410459
int64_t function_4103f0(void) {
    char * v1 = NULL; // bp-24, 0x41040b
    int64_t v2 = 0; // bp-16, 0x410413
    int32_t v3 = __getdelim(&v1, (int32_t *)&v2, 10, g40); // 0x41041c
    if (v3 < 1) {
        // 0x41043e
        free((int64_t *)v1);
        return 0;
    }
    int64_t v4 = (int64_t)v1; // 0x410426
    char * v5 = (char *)((int64_t)v3 - 1 + v4); // 0x41042f
    int64_t response = v4; // 0x410432
    if (*v5 == 10) {
        // 0x410450
        *v5 = 0;
        response = (int64_t)v1;
    }
    int32_t v6 = rpmatch((char *)response); // 0x410434
    // 0x41043e
    free((int64_t *)v1);
    return v6 >= 0 == (v6 != 0);
}
// Address range: 0x410460 - 0x410595
int64_t function_410460(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x410490
    if (cmd != 1030) {
        // 0x410540
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x41049c
    int64_t v2; // 0x410460
    if (g67 < 0) {
        int64_t v3 = function_410460(fd, 0, v1, a4); // 0x4104e4
        int64_t v4 = v3 & 0xffffffff; // 0x4104e9
        if ((int32_t)v3 < 0) {
            // 0x4104d0
            return v4 & 0xffffffff;
        }
        // 0x4104ef
        v2 = v4;
        if (g67 != -1) {
            // 0x4104d0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4104b7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4104c6
            g67 = 1;
            // 0x4104d0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_410460(fd & 0xffffffff, 0, v1, a4); // 0x410577
        int64_t v7 = v6 & 0xffffffff; // 0x41057c
        if ((int32_t)v6 < 0) {
            // 0x4104d0
            return v7 & 0xffffffff;
        }
        // 0x410586
        g67 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4104ff
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x41050a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4104d0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x410522
    close(fd2);
    // 0x4104d0
    return 0xffffffff;
}
// Address range: 0x4105a0 - 0x4105e0
int64_t function_4105a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4105ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4105ba
        return fflush(stream);
    }
    // 0x4105c8
    function_410610(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4105e0 - 0x410608
int64_t function_4105e0(int64_t a1) {
    // 0x4105e0
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x410607
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 8); // 0x4105f0
    int64_t result = v1; // 0x4105fa
    if ((a1 & 256) != 0) {
        // 0x4105fc
        result = *(int64_t *)(a1 + 88) + v1 - *(int64_t *)(a1 + 72);
    }
    // 0x410607
    return result;
}
// Address range: 0x410610 - 0x410667
int64_t function_410610(int64_t stream, int32_t offset, int64_t whence) {
    // 0x410610
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x41061a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x41064b
    int64_t result = -1; // 0x410654
    if (v1 != -1) {
        // 0x410656
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x410662
    return result;
}
// Address range: 0x410670 - 0x41068a
int64_t function_410670(int64_t a1, int64_t a2) {
    // 0x410670
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(a2 + 8)) {
        // 0x410680
        return a2 & -256 | (int64_t)(a1 == a2);
    }
    // 0x41067c
    return 0;
}
// Address range: 0x410690 - 0x41069d
int64_t function_410690(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x410690
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x4106a0 - 0x4106ac
int64_t function_4106a0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x4106a0
    return a1 % a2;
}
// Address range: 0x4106b0 - 0x4106ba
int64_t function_4106b0(int64_t a1, int64_t a2) {
    // 0x4106b0
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x4106c0 - 0x4106e2
int64_t function_4106c0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x4106cb
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x4106d2
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x4106f0 - 0x41089a
int64_t function_4106f0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2 + 120; // 0x4106f6
    int64_t v2 = a1 + 72; // 0x4106fe
    uint64_t v3 = (int64_t)*(int32_t *)v2; // 0x4106fe
    int64_t * v4 = (int64_t *)(a2 + 88); // 0x410701
    int64_t * v5 = (int64_t *)(a2 + 48); // 0x410706
    int64_t v6 = *v5; // 0x410706
    int32_t v7; // 0x4106f0
    if (*v4 != 0 || v3 % 2 == 0) {
        if ((v3 & 2) != 0) {
            goto lab_0x410710;
        } else {
            if ((char)a3 != 0) {
                goto lab_0x410710;
            } else {
                int32_t v8 = *(int32_t *)(a1 + 44); // 0x41076b
                if (__fxstatat(1, v8, (char *)v6, (struct stat *)v1, 256) != 0) {
                    // 0x4107c0
                    v7 = *__errno_location();
                    goto lab_0x4107c7;
                } else {
                    goto lab_0x410787;
                }
            }
        }
    } else {
        goto lab_0x410710;
    }
  lab_0x410710:;
    struct stat * v9 = (struct stat *)v1; // 0x410718
    if (__xstat(1, (char *)v6, v9) == 0) {
        goto lab_0x410787;
    } else {
        int32_t * v10 = __errno_location(); // 0x410721
        int32_t v11 = *v10; // 0x410729
        v7 = v11;
        if (v11 == 2) {
            // 0x410734
            if (__lxstat(1, (char *)*v5, v9) == 0) {
                // 0x41074d
                *v10 = 0;
                return 13;
            }
            // 0x410870
            v7 = *v10;
        }
        goto lab_0x4107c7;
    }
  lab_0x410787:;
    int32_t v12 = *(int32_t *)(a2 + 144) & 0xf000; // 0x41078d
    int64_t v13; // 0x4106f0
    switch ((int16_t)v12) {
        case 0x4000: {
            uint64_t v14 = *(int64_t *)(a2 + 136); // 0x410800
            v13 = -1;
            if (v14 >= 2) {
                // 0x41080d
                v13 = -1;
                if (*v4 >= 1) {
                    // 0x410814
                    v13 = (*(char *)v2 & 32) == 0 ? v14 - 2 : v14;
                }
            }
            // break -> 0x410822
            break;
        }
        case -0x6000: {
            // 0x4107b3
            return 12;
        }
        default: {
            // 0x4107b3
            return 4 * (int64_t)(v12 == 0x8000) + (v12 == 0x8000 ? 4 : 3);
        }
    }
    int64_t v15 = a2 + 264; // 0x410822
    *(int64_t *)(a2 + 104) = v13;
    if (*(char *)v15 != 46) {
        // 0x4107b3
        return 1;
    }
    // 0x410838
    if (*(char *)(a2 + 265) == 0) {
        // 0x4107b3
        return *v4 == 0 ? 1 : 5;
    }
    // 0x410841
    if ((*(int32_t *)v15 & 0xffff00) != 0x2e00) {
        // 0x4107b3
        return 1;
    }
    // 0x4107b3
    return *v4 == 0 ? 1 : 5;
  lab_0x4107c7:
    // 0x4107c7
    *(int32_t *)(a2 + 64) = v7;
    int64_t v16 = a2 + 128 & -8; // 0x4107d0
    *(int64_t *)v1 = 0;
    *(int64_t *)(a2 + 256) = 0;
    __asm_rep_stosq_memset((char *)v16, 0, (a2 + 264 - v16) / 8 % 0x20000000);
    return 10;
}
// Address range: 0x4108a0 - 0x41099d
int64_t function_4108a0(int64_t a1, int64_t result, uint64_t nmemb) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x4108b3
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x4108b7
    int64_t v3 = *v2; // 0x4108b7
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x4108bb
    int64_t base = v3; // 0x4108bf
    if (*v4 < nmemb) {
        uint64_t v5 = nmemb + 40; // 0x4108cb
        *v4 = v5;
        if (v5 >= 0x2000000000000000) {
            // 0x410971
            free((int64_t *)v3);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        int64_t * mem = realloc((int64_t *)v3, 8 * (int32_t)v5); // 0x4108e0
        if (mem == NULL) {
            // 0x410971
            free((int64_t *)*v2);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        // 0x4108f1
        base = (int64_t)mem;
        *v2 = base;
    }
    int64_t v6 = base; // 0x4108fb
    int64_t v7 = result; // 0x4108fb
    if (result != 0) {
        *(int64_t *)v6 = v7;
        v7 += 16;
        v6 += 8;
        while (v7 != 0) {
            // 0x410900
            *(int64_t *)v6 = v7;
            v7 += 16;
            v6 += 8;
        }
    }
    // 0x410911
    qsort((int64_t *)base, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))v1);
    int64_t v8 = *v2; // 0x410921
    int64_t result2 = *(int64_t *)v8; // 0x410928
    if (nmemb == 1) {
        // 0x41095a
        *(int64_t *)(result2 + 16) = 0;
        return result2;
    }
    int64_t v9 = v8 + 8; // 0x410943
    int64_t * v10 = (int64_t *)v9; // 0x410943
    *(int64_t *)(result2 + 16) = *v10;
    int64_t v11 = nmemb - 2; // 0x41094f
    int64_t v12 = v11; // 0x410953
    int64_t v13 = v9; // 0x410953
    if (v11 != 0) {
        v13 += 8;
        int64_t * v14 = (int64_t *)v13; // 0x410943
        *(int64_t *)(*v10 + 16) = *v14;
        v12--;
        while (v12 != 0) {
            int64_t * v15 = v14;
            v13 += 8;
            v14 = (int64_t *)v13;
            *(int64_t *)(*v15 + 16) = *v14;
            v12--;
        }
    }
    // 0x41095a
    *(int64_t *)(*(int64_t *)(8 * nmemb - 8 + v8) + 16) = 0;
    return result2;
}
// Address range: 0x4109a0 - 0x410a2a
int64_t function_4109a0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    int64_t * mem = malloc(v1 + 272 & -8); // 0x4109be
    int64_t result = (int64_t)mem; // 0x4109be
    if (mem != NULL) {
        int64_t v2 = result + 264; // 0x4109cb
        memcpy((int64_t *)v2, (int64_t *)a2, v1);
        *(char *)(v2 + a3) = 0;
        *(int64_t *)(result + 96) = a3;
        *(int64_t *)(result + 80) = a1;
        *(int64_t *)(result + 56) = *(int64_t *)(a1 + 32);
        *(int32_t *)(result + 64) = 0;
        *(int64_t *)(result + 24) = 0;
        *(int32_t *)(result + 114) = 0x30000;
        *(int64_t *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
    }
    // 0x410a1c
    return result;
}
// Address range: 0x410a30 - 0x410a71
int64_t function_410a30(int64_t a1) {
    // 0x410a30
    if (a1 == 0) {
        // 0x410a62
        int64_t result; // 0x410a30
        return result;
    }
    int64_t dirp = *(int64_t *)(a1 + 24); // 0x410a40
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x410a44
    if (dirp != 0) {
        // 0x410a4d
        closedir((struct __dirstream *)dirp);
    }
    // 0x410a52
    free((int64_t *)a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        dirp = *(int64_t *)(v2 + 24);
        v1 = *(int64_t *)(v2 + 16);
        if (dirp != 0) {
            // 0x410a4d
            closedir((struct __dirstream *)dirp);
        }
        // 0x410a52
        free((int64_t *)v2);
    }
    // 0x410a62
    return &g76;
}
// Address range: 0x410a80 - 0x410ab9
int64_t function_410a80(int64_t a1) {
    int64_t result = function_413d70(a1); // 0x410a9f
    if ((char)result != 0) {
        // 0x410aa8
        return result;
    }
    int32_t fd = function_413dc0(a1); // 0x410a98
    if (fd >= 0) {
        // 0x410ab0
        close(fd);
    }
    int64_t result2 = function_413d70(a1); // 0x410a9f
    while ((char)result2 == 0) {
        // 0x410a90
        fd = function_413dc0(a1);
        if (fd >= 0) {
            // 0x410ab0
            close(fd);
        }
        // 0x410a9c
        result2 = function_413d70(a1);
    }
    // 0x410aa8
    return result2;
}
// Address range: 0x410ac0 - 0x410bd1
int64_t function_410ac0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x410ac8
    int64_t v2 = *v1; // 0x410ac8
    if ((*(char *)(v2 + 73) & 2) == 0) {
        // 0x410b02
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 80); // 0x410ad6
    int64_t v4 = *v3; // 0x410ad6
    int64_t v5 = v4; // 0x410ae0
    int64_t result; // bp-152, 0x410ac0
    if (v4 == 0) {
        // 0x410b70
        v5 = function_40b8c0(13, 0, 0x4106a0, 0x4106b0, 0x402650);
        *v3 = v5;
        if (v5 == 0) {
            // 0x410b9c
            fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result);
            // 0x410b02
            return 0;
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 120); // 0x410ae6
    result = *v6;
    int64_t v7 = function_40b650(v5, &result); // 0x410af4
    if (v7 != 0) {
        // 0x410b02
        return *(int64_t *)(v7 + 8);
    }
    // 0x410b10
    if (fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result) != 0) {
        // 0x410b02
        return 0;
    }
    int64_t * mem = malloc(16); // 0x410b2c
    if (mem == NULL) {
        // 0x410b02
        return result;
    }
    int64_t v8 = (int64_t)mem; // 0x410b2c
    *(int64_t *)(v8 + 8) = result;
    *mem = *v6;
    if (function_40c060(v5, v8) != 0) {
        // 0x410b58
        return result;
    }
    // 0x410bc0
    free(mem);
    // 0x410b02
    return result;
}
// Address range: 0x410be0 - 0x410c44
int64_t function_410be0(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_410ac0(a1, a2); // 0x410be4
    if (v1 == 0x9fa0) {
        // 0x410c16
        return 0;
    }
    if (v1 <= 0x9fa0) {
        // 0x410c20
        if (v1 != 0) {
            // 0x410c27
            return v1 != 0x6969;
        }
        // 0x410c16
        return 0;
    }
    // 0x410bf3
    switch (v1) {
        case 0x5346414f: {
            // 0x410c16
            return 0;
        }
        case 0x58465342: {
            // 0x410c16
            return 2;
        }
    }
    // 0x410c16
    return v1 == 0x52654973 ? 2 : 1;
}
// Address range: 0x410c50 - 0x410cb6
int64_t function_410c50(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x410c5b
    int32_t fd = *v1; // 0x410c5b
    int32_t v2 = a2; // 0x410c5e
    if (fd == v2 == (fd != -100)) {
        // 0x410cb1
        abort();
        // UNREACHABLE
    }
    if ((char)a3 == 0) {
        // 0x410c6b
        if (fd >= 0 != ((*(char *)(a1 + 72) & 4) == 0)) {
            // 0x410c75
            *v1 = v2;
            int64_t result; // 0x410c50
            return result;
        }
        int32_t result2 = close(fd); // 0x410ca2
        *v1 = v2;
        return result2;
    }
    int64_t result3 = function_413d80(a1 + 96, fd); // 0x410c84
    uint32_t fd2 = (int32_t)result3; // 0x410c89
    if (fd2 < 0) {
        // 0x410c75
        *v1 = v2;
        return result3;
    }
    int32_t result4 = close(fd2); // 0x410c8f
    *v1 = v2;
    return result4;
}
// Address range: 0x410cc0 - 0x410d1a
int64_t function_410cc0(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 72); // 0x410cc9
    uint32_t v2 = v1 & 4; // 0x410cce
    if (v2 != 0) {
        // 0x410cf2
        function_410a80(a1 + 96);
        return 0;
    }
    int64_t result; // 0x410cc0
    if ((v1 & 512) == 0) {
        // 0x410d08
        result = fchdir(*(int32_t *)(a1 + 40)) != 0;
    } else {
        // 0x410cd8
        function_410c50(a1, 0xffffff9c, 1);
        result = v2;
    }
    // 0x410cf2
    function_410a80(a1 + 96);
    return result;
}
// Address range: 0x410d20 - 0x410d8b
int64_t function_410d20(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 256 + a3; // 0x410d2a
    if (v1 < a2) {
        int64_t * v2 = (int64_t *)a1; // 0x410d58
        free(v2);
        *v2 = 0;
        *__errno_location() = 36;
        return 0;
    }
    // 0x410d37
    *(int64_t *)a2 = v1;
    int64_t * v3 = (int64_t *)a1; // 0x410d3d
    int64_t * mem = realloc(v3, (int32_t)v1); // 0x410d3d
    if (mem != NULL) {
        // 0x410d47
        *v3 = (int64_t)mem;
        return 1;
    }
    // 0x410d78
    free(v3);
    *v3 = 0;
    return (int32_t)&g76 ^ (int32_t)&g76;
}
// Address range: 0x410d90 - 0x410deb
int64_t function_410d90(int32_t a1, int64_t a2) {
    if ((a1 & 258) != 0) {
        int64_t v1 = function_40b8c0(31, 0, 0x410690, 0x410670, 0x402650); // 0x410db3
        *(int64_t *)a2 = v1;
        // 0x410dc1
        return v1 & -256 | (int64_t)(v1 != 0);
    }
    int64_t * mem = malloc(32); // 0x410dcd
    int64_t v2 = (int64_t)mem; // 0x410dcd
    *(int64_t *)a2 = v2;
    if (mem == NULL) {
        // 0x410dc1
        return 0;
    }
    // 0x410ddf
    function_413be0(v2);
    return 1;
}
// Address range: 0x410df0 - 0x410e34
int64_t function_410df0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x2000 * a2 & 0x20000 | 128 * a2 & 0x40000 | 0x90900; // 0x410e0a
    if ((a2 & 512) == 0) {
        // 0x410e28
        return function_40ab10(a3, (int32_t)v1, v1);
    }
    // 0x410e18
    return function_414380((int64_t)a1, a3, (int32_t)v1, a3);
}
// Address range: 0x410e40 - 0x411006
int64_t function_410e40(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff; // 0x410e4f
    int32_t * v3 = (int32_t *)(a1 + 72); // 0x410e5c
    uint32_t v4 = *v3; // 0x410e5c
    int64_t v5 = v4; // 0x410e5c
    int32_t v6 = v4 & 4; // 0x410e63
    int64_t v7; // 0x410e40
    int64_t v8; // 0x410e40
    int64_t v9; // 0x410e40
    int64_t v10; // 0x410e40
    int64_t v11; // 0x410e40
    if (a4 == 0) {
        goto lab_0x410ee0;
    } else {
        // 0x410e6b
        bool v12; // 0x410e40
        int64_t v13 = v12 ? -1 : 1; // 0x410e78
        int64_t v14 = (int64_t)".."; // 0x410e40
        int64_t v15 = v1; // 0x410e40
        int64_t v16 = 3; // 0x410e78
        unsigned char v17 = *(char *)v15; // 0x410e78
        char v18 = *(char *)v14; // 0x410e78
        char v19 = v18; // 0x410e78
        bool v20 = false; // 0x410e78
        while (v17 == v18) {
            // 0x410e6b
            v16--;
            v14 += v13;
            v15 += v13;
            v19 = v17;
            v20 = true;
            if (v16 == 0) {
                // break -> 
                break;
            }
            v17 = *(char *)v15;
            v18 = *(char *)v14;
            v19 = v18;
            v20 = false;
        }
        unsigned char v21 = v19;
        if ((v17 >= v21 && !v20) != v17 < v21) {
            goto lab_0x410ee0;
        } else {
            if (v6 != 0) {
                goto lab_0x410f50;
            } else {
                // 0x410e8b
                v11 = v2;
                v7 = v2;
                v9 = 1;
                if ((int32_t)a3 >= 0) {
                    goto lab_0x410ef2;
                } else {
                    // 0x410e93
                    v8 = v5;
                    v10 = 1;
                    if ((v5 & 512) == 0) {
                        goto lab_0x410f7e;
                    } else {
                        int64_t v22 = a1 + 96; // 0x410ea0
                        int64_t v23 = function_413d70(v22); // 0x410eac
                        v8 = v5;
                        v10 = v23 & 0xffffffff;
                        if ((char)v23 != 0) {
                            goto lab_0x410f7e;
                        } else {
                            int64_t v24 = function_413dc0(v22); // 0x410ec4
                            if ((int32_t)v24 < 0) {
                                // 0x410fc8
                                v8 = (int64_t)*v3;
                                v10 = 1;
                                goto lab_0x410f7e;
                            } else {
                                // 0x410ed4
                                v11 = v24 & 0xffffffff;
                                v7 = v24;
                                v9 = 1;
                                goto lab_0x410ef2;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x410ee0:
    if (v6 != 0) {
        goto lab_0x410f50;
    } else {
        // 0x410ee4
        v11 = v2;
        v7 = v2;
        v9 = 0;
        v8 = v5;
        v10 = 0;
        if ((int32_t)a3 < 0) {
            goto lab_0x410f7e;
        } else {
            goto lab_0x410ef2;
        }
    }
  lab_0x410f50:
    // 0x410f50
    if ((v5 & 512) == 0) {
        // 0x410f5f
        return 0;
    }
    int32_t fd = a3; // 0x410f59
    if (fd >= 0) {
        // 0x410fb8
        close(fd);
        // 0x410f5f
        return 0;
    }
    // 0x410f5f
    return 0;
  lab_0x410f7e:;
    int64_t v25 = function_410df0(*(int32_t *)(a1 + 44), v8, v1); // 0x410f88
    v11 = v2;
    v7 = v25;
    v9 = v10;
    if ((int32_t)v25 < 0) {
        // 0x410f5f
        return 0xffffffff;
    }
    goto lab_0x410ef2;
  lab_0x410ef2:;
    int32_t fd2 = v7; // 0x410ef7
    int64_t v26; // bp-200, 0x410e40
    uint32_t v27 = __fxstat(1, fd2, (struct stat *)&v26); // 0x410eff
    int64_t v28 = 0xffffffff; // 0x410f08
    if (v27 != 0) {
        goto lab_0x410f33;
    } else {
        // 0x410f0a
        if (*(int64_t *)(a2 + 120) != v26) {
            goto lab_0x410f23;
        } else {
            // 0x410f15
            int64_t v29; // 0x410e40
            if (*(int64_t *)(a2 + 128) == v29) {
                // 0x410fa0
                if ((*(char *)(a1 + 73) & 2) != 0) {
                    // 0x410fd8
                    function_410c50(a1, v7 & 0xffffffff, v9 % 256 ^ 1);
                    // 0x410f5f
                    return (int64_t)v27 & 0xffffffff;
                }
                // 0x410fa7
                v28 = fchdir(fd2);
                goto lab_0x410f33;
            } else {
                goto lab_0x410f23;
            }
        }
    }
  lab_0x410f33:
    // 0x410f33
    if ((int32_t)v11 < 0) {
        int32_t * v30 = __errno_location(); // 0x410f37
        close(fd2);
    }
    // 0x410f5f
    return v28 & 0xffffffff;
  lab_0x410f23:
    // 0x410f23
    *__errno_location() = 2;
    v28 = 0xffffffff;
    goto lab_0x410f33;
}
// Address range: 0x411010 - 0x4110bf
int64_t function_411010(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) == 0) {
        int64_t result = function_413bf0(a2, a3 + 120); // 0x411098
        if ((char)result == 0) {
            // 0x411081
            return 1;
        }
        // 0x4110a1
        *(int64_t *)a3 = a3;
        *(int16_t *)(a3 + 112) = 2;
        return result;
    }
    int64_t * mem = malloc(24); // 0x411027
    if (mem == NULL) {
        // 0x411081
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x411027
    *(int64_t *)(v1 + 16) = a3;
    *mem = *(int64_t *)(a3 + 120);
    *(int64_t *)(v1 + 8) = *(int64_t *)(a3 + 128);
    int64_t v2 = function_40c060(a2, v1); // 0x411056
    if (v2 == v1) {
        // 0x411081
        return 1;
    }
    // 0x411063
    free(mem);
    int64_t result2 = 0; // 0x41106e
    if (v2 != 0) {
        // 0x411070
        *(int16_t *)(a3 + 112) = 2;
        *(int64_t *)a3 = *(int64_t *)(v2 + 16);
        result2 = 1;
    }
    // 0x411081
    return result2;
}
// Address range: 0x4110c0 - 0x411156
int64_t function_4110c0(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) != 0) {
        // 0x411100
        free((int64_t *)function_40c0a0(a2));
        return &g76;
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x4110cf
    if (result == 0) {
        // 0x4110f9
        return 0;
    }
    // 0x4110d8
    if (*(int64_t *)(result + 88) < 0) {
        // 0x4110f9
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x41113c
    int64_t result2 = result; // 0x411140
    if (*v1 == *(int64_t *)(a3 + 120)) {
        // 0x411142
        result2 = *(int64_t *)(result + 128);
        *v1 = *(int64_t *)(result + 120);
        *(int64_t *)a2 = result2;
    }
    // 0x4110f9
    return result2;
}
// Address range: 0x411160 - 0x411b13
int64_t function_411160(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x411174
    int64_t * dirp2 = (int64_t *)(a1 + 24); // 0x411178
    int64_t dirp = *dirp2; // 0x411178
    int64_t v2; // 0x411160
    int32_t * v3; // 0x411160
    int64_t v4; // 0x411160
    int64_t v5; // 0x411160
    int64_t v6; // 0x411160
    int64_t v7; // 0x411160
    int64_t v8; // 0x411160
    int64_t v9; // 0x411160
    char v10; // 0x411160
    int64_t v11; // 0x411160
    int64_t v12; // 0x411160
    int64_t v13; // 0x411596
    int64_t v14; // 0x411160
    int64_t v15; // 0x4115d5
    int32_t * v16; // 0x411160
    int64_t v17; // 0x4115e2
    int32_t v18; // 0x4115e6
    if (dirp == 0) {
        // 0x411550
        v14 = a1 + 72;
        v16 = (int32_t *)v14;
        uint32_t v19 = *v16; // 0x411550
        uint64_t v20 = (int64_t)v19; // 0x411550
        v5 = 0;
        if ((v19 & 16) != 0) {
            // 0x41155b
            v5 = 0x20000;
            if (v20 % 2 != 0) {
                // 0x411730
                v5 = 0x20000 * (int64_t)(*(int64_t *)(a1 + 88) != 0);
            }
        }
        int64_t v21 = *(int64_t *)(a1 + 48); // 0x41156f
        int64_t v22 = 0xffffff9c; // 0x411588
        if ((v20 & 516) == 512) {
            // 0x41158a
            v22 = (int64_t)*(int32_t *)(a1 + 44);
        }
        int64_t v23 = 128 * v20 & 0x40000 | v5 & 0xfff60000 | 0x90900; // 0x41158e
        v13 = function_414380(v22, v21, (int32_t)v23, v5);
        int32_t fd = v13; // 0x41159d
        if (fd < 0) {
            goto lab_0x4118d2;
        } else {
            struct __dirstream * v24 = fdopendir(fd); // 0x4115a7
            if (v24 == NULL) {
                int32_t * v25 = __errno_location(); // 0x4118bc
                close(fd);
                goto lab_0x4118d2;
            } else {
                int16_t * v26 = (int16_t *)(a1 + 112); // 0x4115b5
                *dirp2 = (int64_t)v24;
                if (*v26 == 11) {
                    // 0x41196c
                    *v26 = (int16_t)function_4106f0(a1, a1, 0);
                    v8 = a1;
                } else {
                    int32_t v27 = *v16; // 0x4115c5
                    v8 = v21;
                    if ((v27 & 256) != 0) {
                        int64_t v28 = a1 + 88; // 0x411920
                        function_4110c0(v27, v28, a1);
                        function_4106f0(a1, a1, 0);
                        int64_t v29 = function_411010(*v16, v28, a1); // 0x411946
                        v8 = v28;
                        if ((char)v29 == 0) {
                            // 0x411953
                            *__errno_location() = 12;
                          lab_0x411712:
                            // 0x411712
                            return 0;
                        }
                    }
                }
                // 0x4115d5
                v15 = a1 + 64;
                v17 = *(int64_t *)v15 == 0 ? 0x186a0 : -1;
                v18 = v1;
                if (v18 == 2) {
                    goto lab_0x411910;
                } else {
                    // 0x4115f6
                    if ((*v16 & 56) == 24) {
                        // 0x411742
                    } else {
                        // 0x411606
                        goto lab_0x411615;
                    }
                }
            }
        }
    } else {
        // 0x41118a
        if (dirfd((struct __dirstream *)dirp) < 0) {
            // 0x4119ed
            closedir((struct __dirstream *)*dirp2);
            *dirp2 = 0;
            if ((int32_t)v1 != 3) {
                // 0x411712
                return 0;
            }
            goto lab_0x411a09;
        } else {
            int64_t v30 = a1 + 72;
            int32_t * v31 = (int32_t *)v30;
            v3 = v31;
            v2 = v30;
            v11 = -1;
            v7 = a2;
            if (*(int64_t *)(a1 + 64) == 0) {
                // 0x4118f8
                v4 = v30;
                v12 = 0x186a0;
                v10 = 1;
                v9 = a2;
                v6 = (int64_t)*v31;
                goto lab_0x4111b4;
            } else {
                goto lab_0x4111ab;
            }
        }
    }
  lab_0x4116c0_2:;
    // 0x4116c0
    int64_t v32; // 0x4112e4
    free((int64_t *)v32);
    int64_t v33; // 0x411160
    function_410a30(v33);
    closedir((struct __dirstream *)*dirp2);
    *dirp2 = 0;
    *(int16_t *)(a1 + 112) = 7;
    int32_t * v34; // 0x411160
    *v34 = *v34 | 0x4000;
    return 0;
  lab_0x41143c_2:;
    // 0x41143c
    int64_t v35; // 0x411160
    int64_t v36 = v35; // 0x411449
    int64_t v37; // 0x411160
    int64_t v38 = v37; // 0x411449
    int64_t v39; // 0x411160
    int64_t v40 = v39; // 0x411449
    char * v41; // 0x411160
    char * v42 = v41; // 0x411449
    int64_t v43 = v35; // 0x411449
    int64_t result2 = v37; // 0x411449
    int64_t v44 = v39; // 0x411449
    char v45; // 0x411160
    if (v45 == 0) {
        goto lab_0x411791;
    } else {
        goto lab_0x41144f;
    }
  lab_0x4112cc:;
    // 0x4112cc
    char * str; // 0x411160
    uint64_t len = (int64_t)strlen(str); // 0x4112d3
    int64_t v46; // 0x411160
    v32 = function_4109a0(a1, v46, len);
    if (v32 == 0) {
        goto lab_0x4116c0_2;
    }
    // 0x4112f5
    int64_t v47; // 0x411160
    int64_t v48 = v47; // 0x4112fa
    char v49; // 0x411160
    char v50 = v49; // 0x4112fa
    int64_t v51; // 0x411160
    int64_t v52 = v51; // 0x4112fa
    int64_t v53 = a1; // 0x4112fa
    int64_t v54; // 0x411160
    int64_t v55; // 0x411160
    int64_t v56; // 0x411202
    int64_t * v57; // 0x411202
    int64_t v58; // 0x411160
    int64_t * v59; // 0x411160
    if (v51 <= len) {
        char v60 = function_410d20(v58, v56, v55 + 2 + len);
        if (v60 == 0) {
            goto lab_0x4116c0_2;
        }
        int64_t v61 = *v59; // 0x4113c0
        char v62 = v49; // 0x4113c9
        int64_t v63 = v47; // 0x4113c9
        if (v61 != *v59) {
            // 0x4113cf
            v63 = (*v41 & 4) == 0 ? v47 : v61 + v54;
            v62 = v60;
        }
        // 0x4113e3
        v48 = v63;
        v50 = v62;
        v52 = *v57 - v54;
        v53 = v58;
    }
    uint64_t v64 = v54 + len; // 0x411303
    int32_t * v65; // 0x41129a
    if (v64 < len) {
        // 0x411ac0
        free((int64_t *)v32);
        function_410a30(v33);
        closedir((struct __dirstream *)*dirp2);
        *dirp2 = 0;
        *(int16_t *)(a1 + 112) = 7;
        *v34 = *v34 | 0x4000;
        *v65 = 36;
        goto lab_0x411712;
    }
    int64_t v66 = v52;
    v45 = v50;
    v35 = v48;
    int64_t v67 = v32 + 264; // 0x411313
    int64_t * v68; // 0x411217
    *(int64_t *)(v32 + 88) = *v68 + 1;
    *(int64_t *)(v32 + 72) = v64;
    *(int64_t *)(v32 + 8) = v53;
    struct dirent * v69; // 0x4112ab
    *(int64_t *)(v32 + 128) = *(int64_t *)v69;
    int32_t v70 = *v34; // 0x411333
    int32_t v71; // 0x411160
    if ((v70 & 4) != 0) {
        // 0x411400
        *(int64_t *)(v32 + 48) = *(int64_t *)(v32 + 56);
        int64_t v72 = *(int64_t *)(v32 + 96); // 0x41140d
        memmove((int64_t *)v35, (int64_t *)v67, (int32_t)v72 + 1);
        v71 = *v34;
    } else {
        // 0x41133e
        *(int64_t *)(v32 + 48) = v67;
        v71 = v70;
    }
    int64_t v73 = v71;
    int64_t v74; // 0x411160
    int64_t v75; // 0x411160
    int64_t v76; // 0x411160
    int64_t v77; // 0x411160
    int64_t v78; // 0x41135c
    int64_t v79; // 0x41135c
    int64_t v80; // 0x411160
    int64_t v81; // 0x4112ab
    if (*(int64_t *)v80 != 0 == (v73 & 1024) == 0) {
        // 0x411528
        *(int16_t *)(v32 + 112) = (int16_t)function_4106f0(a1, v32, 0);
        v76 = v32;
        goto lab_0x411257;
    } else {
        unsigned char v82 = *(char *)(v81 + 18); // 0x411352
        int64_t v83 = v82; // 0x41135a
        v78 = v83 + 0xffffffff;
        v79 = v78 & 0xffffffff;
        v77 = v83;
        if ((v73 & 24) == 24) {
            unsigned char v84 = v82 & -5;
            v77 = 0;
            if (v84 == 0) {
                goto lab_0x411368;
            } else {
                int64_t v85 = v84; // 0x4114f0
                *(int16_t *)(v32 + 112) = 11;
                if ((int32_t)v78 < 12) {
                    int32_t v86 = *(int32_t *)(4 * v79 + (int64_t)&g15); // 0x4116a8
                    *(int32_t *)(v32 + 144) = v86;
                    v74 = 1;
                    v75 = v85;
                } else {
                    // 0x41150f
                    *(int32_t *)(v32 + 144) = 0;
                    v74 = 1;
                    v75 = v85;
                }
                goto lab_0x411250;
            }
        } else {
            goto lab_0x411368;
        }
    }
  lab_0x411257:;
    int64_t v87 = v76;
    *(int64_t *)(v32 + 16) = 0;
    int64_t v88; // 0x411160
    v39 = v88 + 1;
    int64_t v89; // 0x411160
    int64_t v90; // 0x411160
    int64_t v91; // 0x411160
    int64_t v92; // 0x411160
    int64_t v93; // 0x411160
    int64_t v94; // 0x411160
    char v95; // 0x411160
    int64_t v96; // 0x411160
    if (v33 == 0) {
        // 0x411428
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v32;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v32;
        if (v39 >= v12) {
            goto lab_0x41143c_2;
        }
    } else {
        // 0x41126b
        *(int64_t *)(v94 + 16) = v32;
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v33;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v33;
        if (v39 >= v12) {
            goto lab_0x41143c_2;
        }
    }
    goto lab_0x411283;
  lab_0x411368:
    // 0x411368
    *(int16_t *)(v32 + 112) = 11;
    if ((int32_t)v78 < 12) {
        int32_t v166 = *(int32_t *)(4 * v79 + (int64_t)&g15); // 0x41137b
        *(int32_t *)(v32 + 144) = v166;
        v74 = 2;
        int64_t v167; // 0x411160
        v75 = v167;
    } else {
        // 0x411240
        *(int32_t *)(v32 + 144) = 0;
        v74 = 2;
        v75 = v77;
    }
    goto lab_0x411250;
  lab_0x411283:;
    int64_t v97 = *dirp2; // 0x41128d
    int64_t dirp3 = v97; // 0x411294
    int64_t v98 = v91; // 0x411294
    int64_t v99 = v90; // 0x411294
    int64_t v100 = v93; // 0x411294
    int64_t v101 = v89; // 0x411294
    int64_t v102 = v92; // 0x411294
    char v103 = v95; // 0x411294
    int64_t v104 = v96; // 0x411294
    int64_t v105 = v96; // 0x411294
    char v106 = v95; // 0x411294
    int64_t v107 = v93; // 0x411294
    int64_t v108 = v90; // 0x411294
    if (v97 == 0) {
        goto lab_0x411786;
    }
    goto lab_0x41129a;
  lab_0x411250:
    // 0x411250
    *(int64_t *)(v32 + 168) = v74;
    v76 = v75;
    goto lab_0x411257;
  lab_0x4118d2:
    // 0x4118d2
    *dirp2 = 0;
    if ((int32_t)v1 != 3) {
        // 0x411712
        return 0;
    }
    goto lab_0x411a09;
  lab_0x411a09:
    // 0x411a09
    *(int16_t *)(a1 + 112) = 4;
    *(int32_t *)(a1 + 64) = *__errno_location();
    // 0x411712
    return 0;
  lab_0x4111ab:
    // 0x4111ab
    v4 = v2;
    v12 = v11;
    v10 = 1;
    v9 = v7;
    v6 = (int64_t)*v3;
    goto lab_0x4111b4;
  lab_0x411910:
    // 0x411910
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v8;
    v6 = (int64_t)*v16;
    goto lab_0x4111b4;
  lab_0x4111b4:;
    int64_t v111 = *(int64_t *)v4; // 0x4111b4
    char v112 = *(char *)(v111 - 1 + *(int64_t *)(a1 + 56)); // 0x4111ca
    v55 = v111 + (int64_t)(v112 == 47);
    int64_t v113 = 0; // 0x4111eb
    if ((v6 & 4) != 0) {
        int64_t v114 = *(int64_t *)(a1 + 32) + v55; // 0x4111f2
        *(char *)v114 = 47;
        v113 = v114 + 1;
    }
    // 0x411202
    v54 = v111 + (int64_t)(v112 != 47);
    v56 = a1 + 48;
    v57 = (int64_t *)v56;
    v68 = (int64_t *)(a1 + 88);
    int64_t v115 = *dirp2; // 0x41128d
    if (v115 == 0) {
        // 0x411202
        v42 = (char *)v4;
        v43 = v113;
        result2 = 0;
        v44 = 0;
        goto lab_0x411791;
    } else {
        // 0x41129a
        v41 = (char *)v4;
        v58 = a1 + 32;
        v59 = (int64_t *)v58;
        v34 = (int32_t *)v4;
        v80 = a1 + 64;
        dirp3 = v115;
        v98 = v9;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v102 = *v57 - v54;
        v103 = 0;
        v104 = v113;
        while (true) {
          lab_0x41129a:
            // 0x41129a
            v47 = v104;
            v49 = v103;
            v33 = v100;
            v88 = v99;
            int64_t v109 = v98;
            v65 = __errno_location();
            *v65 = 0;
            v69 = readdir((struct __dirstream *)dirp3);
            if (v69 == NULL) {
                // break -> 0x411870
                break;
            }
            // 0x4112bc
            v51 = v102;
            v94 = v101;
            v81 = (int64_t)v69;
            v46 = v81 + 19;
            str = (char *)v46;
            if ((*v41 & 32) != 0) {
                goto lab_0x4112cc;
            } else {
                // 0x4112c2
                if (*str == 46) {
                    int64_t v110 = v81 + 20; // 0x4114d0
                    v96 = v47;
                    v95 = v49;
                    v92 = v51;
                    v93 = v33;
                    v90 = v88;
                    v91 = v109;
                    v89 = v94;
                    if (*(char *)v110 == 0) {
                        goto lab_0x411283;
                    } else {
                        // 0x4114d6
                        v96 = v47;
                        v95 = v49;
                        v92 = v51;
                        v93 = v33;
                        v90 = v88;
                        v91 = v109;
                        v89 = v94;
                        if (*(int16_t *)v110 != 46) {
                            goto lab_0x4112cc;
                        } else {
                            goto lab_0x411283;
                        }
                    }
                } else {
                    goto lab_0x4112cc;
                }
            }
        }
        int32_t v116 = *v65; // 0x411870
        if (v116 != 0) {
            // 0x411880
            *(int32_t *)v80 = v116;
            *(int16_t *)(a1 + 112) = (v88 | dirp) == 0 ? 4 : 7;
        }
        int64_t dirp4 = *dirp2; // 0x41189d
        v105 = v47;
        v106 = v49;
        v107 = v33;
        v108 = v88;
        if (dirp4 != 0) {
            // 0x4118aa
            closedir((struct __dirstream *)dirp4);
            *dirp2 = 0;
            v105 = v47;
            v106 = v49;
            v107 = v33;
            v108 = v88;
        }
      lab_0x411786:
        // 0x411786
        v36 = v105;
        v38 = v107;
        v40 = v108;
        v42 = v41;
        v43 = v105;
        result2 = v107;
        v44 = v108;
        if (v106 != 0) {
            goto lab_0x41144f;
        } else {
            goto lab_0x411791;
        }
    }
  lab_0x411615:;
    int64_t v117 = v13 & 0xffffffff; // 0x41159b
    int64_t v118 = v18 == 3;
    char v119 = 1;
    int64_t v120 = v117; // 0x41161a
    int16_t * v121; // 0x411160
    int16_t v122; // 0x411160
    int64_t v123; // 0x411160
    int64_t v124; // 0x411160
    int64_t v125; // 0x411160
    int64_t v126; // 0x411160
    int64_t v127; // 0x411160
    if ((*(char *)(a1 + 73) & 2) != 0) {
        int64_t v128 = function_410460(v117, 1030, 3, v5); // 0x411991
        int64_t v129 = v128 & 0xffffffff; // 0x411996
        v120 = v129;
        if ((int32_t)v128 >= 0) {
            goto lab_0x411620;
        } else {
            int16_t * v130 = (int16_t *)(a1 + 114);
            int64_t dirp5 = *dirp2; // 0x4119a5
            int16_t v131 = *v130 | 1;
            v121 = v130;
            v123 = v129;
            v122 = v131;
            v126 = 1030;
            v124 = dirp5;
            if (v119 != 0 == (v118 != 0)) {
                goto lab_0x41164d;
            } else {
                // 0x4119ba
                *v130 = v131;
                closedir((struct __dirstream *)dirp5);
                v127 = 1030;
                v125 = (int64_t)*v16;
                goto lab_0x41168f;
            }
        }
    } else {
        goto lab_0x411620;
    }
  lab_0x411791:
    // 0x411791
    if ((*v42 & 4) != 0) {
        int64_t v132 = *v57; // 0x41179d
        *(char *)(v43 + (int64_t)(v44 == 0 | v132 == v54)) = 0;
    }
    // 0x4117b6
    if (dirp != 0 || v10 == 0) {
        goto lab_0x411828;
    } else {
        // 0x4117c5
        if ((int32_t)v1 == 1 || v44 == 0) {
            // 0x411808
            int64_t v133; // 0x411160
            if (*v68 != 0) {
                int64_t v134 = function_410e40(a1, *(int64_t *)(a1 + 8), 0xffffffff, (int32_t)".."); // 0x4119de
                v133 = v134;
            } else {
                // 0x411813
                v133 = function_410cc0(a1);
            }
            // 0x411820
            if ((int32_t)v133 != 0) {
                // 0x411a24
                *(int16_t *)(a1 + 112) = 7;
                int32_t * v135 = (int32_t *)v4; // 0x411a33
                *v135 = *v135 | 0x4000;
                function_410a30(result2);
                // 0x411712
                return 0;
            }
            goto lab_0x411828;
        } else {
            goto lab_0x4117d1;
        }
    }
  lab_0x41144f:;
    int64_t v136 = *(int64_t *)(a1 + 8); // 0x41144f
    int64_t v137 = *v59; // 0x411453
    if (v136 != 0) {
        int64_t * v138 = (int64_t *)(v136 + 48); // 0x411460
        int64_t v139 = *v138; // 0x411460
        int64_t * v140 = (int64_t *)(v136 + 56);
        if (v139 != v136 + 264) {
            // 0x411470
            *v138 = v139 + v137 - *v140;
        }
        // 0x41147b
        *v140 = v137;
        int64_t v141 = *(int64_t *)(v136 + 16); // 0x41147f
        int64_t v142 = v141; // 0x411486
        while (v141 != 0) {
            // 0x411460
            v138 = (int64_t *)(v142 + 48);
            v139 = *v138;
            v140 = (int64_t *)(v142 + 56);
            if (v139 != v142 + 264) {
                // 0x411470
                *v138 = v139 + v137 - *v140;
            }
            // 0x41147b
            *v140 = v137;
            v141 = *(int64_t *)(v142 + 16);
            v142 = v141;
        }
    }
    // 0x411488
    v42 = v41;
    v43 = v36;
    result2 = v38;
    v44 = v40;
    if (*(int64_t *)(v38 + 88) >= 0) {
        int64_t * v143 = (int64_t *)(v38 + 48); // 0x41149e
        int64_t v144 = *v143; // 0x41149e
        int64_t * v145 = (int64_t *)(v38 + 56);
        if (v144 != v38 + 264) {
            // 0x4114ae
            *v143 = v144 + v137 - *v145;
        }
        int64_t v146 = *(int64_t *)(v38 + 16); // 0x4114b9
        *v145 = v137;
        int64_t v147 = v146; // 0x4114c4
        if (v146 == 0) {
            // 0x4114c6
            v147 = *(int64_t *)(v38 + 8);
        }
        // 0x411490
        v42 = v41;
        v43 = v36;
        result2 = v38;
        v44 = v40;
        while (*(int64_t *)(v147 + 88) >= 0) {
            int64_t v148 = v147;
            v143 = (int64_t *)(v148 + 48);
            v144 = *v143;
            v145 = (int64_t *)(v148 + 56);
            if (v144 != v148 + 264) {
                // 0x4114ae
                *v143 = v144 + v137 - *v145;
            }
            // 0x4114b9
            v146 = *(int64_t *)(v148 + 16);
            *v145 = v137;
            v147 = v146;
            if (v146 == 0) {
                // 0x4114c6
                v147 = *(int64_t *)(v148 + 8);
            }
            // 0x411490
            v42 = v41;
            v43 = v36;
            result2 = v38;
            v44 = v40;
        }
    }
    goto lab_0x411791;
  lab_0x411620:;
    int64_t v149 = function_410e40(a1, a1, v120, 0); // 0x41162a
    v3 = v16;
    v2 = v14;
    v11 = v17;
    v7 = a1;
    int16_t * v150; // 0x411160
    int16_t v151; // 0x411160
    int64_t v152; // 0x411160
    int64_t dirp6; // 0x411160
    int64_t v153; // 0x411160
    if ((int32_t)v149 == 0) {
        goto lab_0x4111ab;
    } else {
        int16_t * v154 = (int16_t *)(a1 + 114);
        int64_t v155 = *dirp2; // 0x41163c
        int16_t v156 = *v154 | 1;
        v121 = v154;
        v123 = v120;
        v122 = v156;
        v126 = a1;
        v124 = v155;
        v150 = v154;
        v152 = v120;
        v151 = v156;
        v153 = a1;
        dirp6 = v155;
        if (v119 == 0 || v118 == 0) {
            goto lab_0x411662;
        } else {
            goto lab_0x41164d;
        }
    }
  lab_0x411828:
    // 0x411828
    if (v44 == 0) {
        if ((int32_t)v1 != 3) {
            // 0x411838
            function_410a30(result2);
            // 0x411712
            return 0;
        }
        int16_t * v157 = (int16_t *)(a1 + 112); // 0x411a98
        switch (*v157) {
            case 4: {
            }
            case 7: {
                // 0x411838
                function_410a30(result2);
                // 0x411712
                return 0;
            }
        }
        // 0x411ab1
        *v157 = 6;
        // 0x411838
        function_410a30(result2);
        // 0x411712
        return 0;
    }
    goto lab_0x4117d1;
  lab_0x4117d1:;
    int64_t * v158 = (int64_t *)(a1 + 64); // 0x4117d1
    int64_t v159 = *v158; // 0x4117d1
    int64_t v160 = v159; // 0x4117dc
    if (v44 >= 0x2711) {
        if (v159 != 0) {
            // 0x4117e7
            uint64_t v161; // 0x411160
            int64_t v162; // 0x411160
            return function_4108a0(a1, v162, v161);
        }
        // 0x411a4e
        int64_t v163; // 0x411160
        switch (function_410ac0(a1, v163)) {
            case 0x1021994: {
            }
            case 0x6969: {
                // 0x411850
                v160 = *v158;
                // break -> 0x411858
                break;
            }
            default: {
                // 0x411a6e
                *v158 = 0x4106c0;
                int64_t result = function_4108a0(a1, result2, v44); // 0x411a81
                *v158 = 0;
                // 0x411712
                return result;
            }
        }
    }
    // 0x411858
    if (v44 == 1 || v160 == 0) {
        // 0x411712
        return result2;
    }
    // 0x4117e7
    return function_4108a0(a1, result2, v44);
  lab_0x41164d:
    // 0x41164d
    *(int32_t *)v15 = *__errno_location();
    v150 = v121;
    v152 = v123;
    v151 = v122;
    v153 = v126;
    dirp6 = v124;
    goto lab_0x411662;
  lab_0x411662:
    // 0x411662
    *v150 = v151;
    closedir((struct __dirstream *)dirp6);
    uint32_t v164 = *v16; // 0x41166c
    int64_t v165 = v164; // 0x41166c
    *dirp2 = 0;
    v127 = v153;
    v125 = v165;
    if ((v164 & 512) != 0) {
        uint32_t fd2 = (int32_t)v152; // 0x411680
        v127 = v153;
        v125 = v165;
        if (fd2 >= 0) {
            // 0x411684
            close(fd2);
            v127 = v153;
            v125 = (int64_t)*v16;
        }
    }
    goto lab_0x41168f;
  lab_0x41168f:
    // 0x41168f
    *dirp2 = 0;
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v127;
    v6 = v125;
    goto lab_0x4111b4;
}
// Address range: 0x411b20 - 0x411eb9
int64_t fts_open(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    if ((v1 & 18) == 0 || a2 >= 0x2000 || (v1 & 516) == 516) {
        // 0x411dc0
        *__errno_location() = 22;
        // 0x411dad
        return 0;
    }
    int64_t * mem = calloc(128, 1); // 0x411b68
    int64_t result = (int64_t)mem; // 0x411b68
    if (mem == NULL) {
        // 0x411dad
        return result;
    }
    // 0x411b79
    *(int64_t *)(result + 64) = a3;
    if ((v1 & 2) != 0) {
        // 0x411e00
        *(int32_t *)(result + 72) = a2 & -517 | 4;
    } else {
        // 0x411b87
        *(int32_t *)(result + 72) = a2;
    }
    int32_t * v2 = (int32_t *)(result + 44); // 0x411b8e
    *v2 = -100;
    int64_t v3 = a1; // 0x411ba4
    uint64_t v4 = 0;
    uint64_t len = (int64_t)strlen((char *)128); // 0x411ba8
    int64_t v5 = v4 < len ? len : v4; // 0x411bb0
    v3 += 8;
    int64_t str = *(int64_t *)v3; // 0x411bb8
    while (str != 0) {
        // 0x411ba8
        v4 = v5;
        len = (int64_t)strlen((char *)str);
        v5 = v4 < len ? len : v4;
        v3 += 8;
        str = *(int64_t *)v3;
    }
    uint64_t v6 = v5 + 1; // 0x411bc0
    int64_t v7 = result + 32; // 0x411bd9
    char v8 = function_410d20(v7, result + 48, v6 > 0x1000 ? v6 : 0x1000); // 0x411be2
    if (v8 == 0) {
        // 0x411deb
        free(mem);
        // 0x411dad
        return 0;
    }
    int64_t v9; // 0x411b20
    int64_t v10; // 0x411b20
    int64_t v11; // 0x411b20
    char v12; // 0x411b20
    char * v13; // 0x411b20
    char * v14; // 0x411c0d
    if (v7 == 0) {
        // 0x411e10
        v14 = NULL;
        v10 = 0;
        v13 = NULL;
        v9 = 0;
        if (a3 != 0) {
            goto lab_0x411c33;
        } else {
            goto lab_0x411d5c;
        }
    } else {
        int64_t v15 = function_4109a0(result, (int64_t)&g18, 0); // 0x411c05
        if (v15 == 0) {
            goto lab_0x411de2;
        } else {
            // 0x411c1b
            v14 = (char *)v15;
            *(int64_t *)(v15 + 88) = -1;
            *(int64_t *)(v15 + 104) = -1;
            v10 = result;
            v12 = v8;
            v11 = result;
            if (a3 == 0) {
                goto lab_0x411c40;
            } else {
                goto lab_0x411c33;
            }
        }
    }
  lab_0x411cd8:;
    // 0x411cd8
    int64_t v16; // 0x411b20
    int64_t v17; // 0x411c79
    *(int64_t *)(v17 + 16) = v16;
    int64_t v18; // 0x411b20
    int64_t v19 = v18; // 0x411cdc
    int64_t v20 = v17; // 0x411cdc
    goto lab_0x411cdf;
  lab_0x411cdf:;
    int64_t v21 = v20;
    int64_t v22; // 0x411b20
    int64_t v23 = v22 + 1; // 0x411cdf
    int64_t v24 = *(int64_t *)(8 * v23 + a1); // 0x411ce3
    int64_t v25 = v19; // 0x411ceb
    int64_t v26 = v23; // 0x411ceb
    int64_t v27 = v21; // 0x411ceb
    int64_t v28 = v24; // 0x411ceb
    if (v24 == 0) {
        // 0x411d40
        v13 = v14;
        v9 = v21;
        if (a3 == 0 || v23 < 2) {
            goto lab_0x411d5c;
        } else {
            // 0x411d4b
            v13 = v14;
            v9 = function_4108a0(result, v21, v23);
            goto lab_0x411d5c;
        }
    }
    goto lab_0x411ced;
  lab_0x411e70:
    // 0x411e70
    *(int64_t *)(v18 + 16) = v17;
    v19 = v17;
    v20 = v16;
    goto lab_0x411cdf;
  lab_0x411c33:
    // 0x411c33
    v12 = (char)(*(int32_t *)(result + 72) / 1024) % 2;
    v11 = v10;
    goto lab_0x411c40;
  lab_0x411d5c:;
    int64_t v35 = function_4109a0(result, (int64_t)&g18, 0); // 0x411d66
    *mem = v35;
    char * v33 = v13; // 0x411d71
    int64_t v34 = v9; // 0x411d71
    if (v35 != 0) {
        // 0x411d73
        *(int64_t *)(v35 + 16) = v9;
        int32_t * v36 = (int32_t *)(result + 72); // 0x411d7c
        *(int16_t *)(v35 + 112) = 9;
        v33 = v13;
        v34 = v9;
        if ((char)function_410d90(*v36, result + 88) != 0) {
            uint32_t v37 = *v36; // 0x411d90
            if ((v37 & 516) == 0) {
                int32_t v38 = function_410df0(*v2, (int64_t)v37, (int64_t)"."); // 0x411ea5
                *(int32_t *)(result + 40) = v38;
                if (v38 < 0) {
                    int32_t v39 = *v36; // 0x411eb0
                    *v36 = v39 | 4;
                }
            }
            // 0x411d9f
            function_413d50(result + 96, 0xffffffff);
            // 0x411dad
            return result;
        }
    }
    goto lab_0x411dd0;
  lab_0x411de2:
    // 0x411de2
    free((int64_t *)*(int64_t *)v7);
    // 0x411deb
    free(mem);
    // 0x411dad
    return 0;
  lab_0x411c40:
    // 0x411c40
    v13 = v14;
    v9 = 0;
    if (v11 == 0) {
        goto lab_0x411d5c;
    } else {
        // 0x411ced
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v11;
        while (true) {
          lab_0x411ced:;
            int64_t str2 = v28;
            v16 = v27;
            v22 = v26;
            v18 = v25;
            int32_t len2 = strlen((char *)str2); // 0x411cf0
            int64_t v29 = len2; // 0x411cf0
            int64_t v30 = v29; // 0x411cf9
            if ((v1 & 0x1000) == 0 && len2 >= 3) {
                // 0x411d0a
                v30 = v29;
                if (*(char *)(str2 - 1 + v29) == 47) {
                    int64_t v31 = v29;
                    v30 = v31;
                    while (*(char *)(str2 - 2 + v31) == 47) {
                        int64_t v32 = v31 - 1; // 0x411d2c
                        v30 = v32;
                        if (v31 == 2) {
                            // break -> 0x411c70
                            break;
                        }
                        v31 = v32;
                        v30 = v31;
                    }
                }
            }
            // 0x411c70
            v17 = function_4109a0(result, str2, v30);
            v33 = v14;
            v34 = v16;
            if (v17 == 0) {
                // break -> 0x411dd0
                break;
            }
            // 0x411c8a
            *(int64_t *)(v17 + 88) = 0;
            *(int64_t *)(v17 + 8) = (int64_t)v14;
            *(int64_t *)(v17 + 48) = v17 + 264;
            if (v12 == 0 || v16 == 0) {
                // 0x411e30
                *(int16_t *)(v17 + 112) = (int16_t)function_4106f0(result, v17, 0);
                if (a3 != 0) {
                    goto lab_0x411cd8;
                } else {
                    // 0x411e4b
                    *(int64_t *)(v17 + 16) = 0;
                    v19 = v17;
                    v20 = v17;
                    if (v16 != 0) {
                        goto lab_0x411e70;
                    } else {
                        goto lab_0x411cdf;
                    }
                }
            } else {
                // 0x411cba
                *(int64_t *)(v17 + 168) = 2;
                *(int16_t *)(v17 + 112) = 11;
                if (a3 == 0) {
                    // 0x411e68
                    *(int64_t *)(v17 + 16) = 0;
                    goto lab_0x411e70;
                } else {
                    goto lab_0x411cd8;
                }
            }
        }
        goto lab_0x411dd0;
    }
  lab_0x411dd0:
    // 0x411dd0
    function_410a30(v34);
    free((int64_t *)v33);
    goto lab_0x411de2;
}
// Address range: 0x411ec0 - 0x412039
int64_t fts_close(int64_t a1) {
    if (a1 != 0) {
        int64_t v1 = a1; // 0x411ed4
        int64_t v2 = a1; // 0x411ed4
        if (*(int64_t *)(a1 + 88) >= 0) {
            while (true) {
                int64_t v3 = v1;
                int64_t v4 = *(int64_t *)(v3 + 16); // 0x411eef
                int64_t v5; // 0x411ec0
                if (v4 != 0) {
                    // 0x411ee0
                    free((int64_t *)v3);
                    v5 = v4;
                    v2 = v4;
                    if (*(int64_t *)(v4 + 88) < 0) {
                        // break -> 0x411f0b
                        break;
                    }
                } else {
                    int64_t v6 = *(int64_t *)(v3 + 8); // 0x411ef8
                    free((int64_t *)v3);
                    v5 = v6;
                    v2 = v6;
                    if (*(int64_t *)(v6 + 88) < 0) {
                        // break -> 0x411f0b
                        break;
                    }
                }
                // 0x411eef
                v1 = v5;
            }
        }
        // 0x411f0b
        free((int64_t *)v2);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x411f13
    if (v7 != 0) {
        // 0x411f1c
        function_410a30(v7);
    }
    // 0x411f21
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)*(int64_t *)(a1 + 32));
    int32_t * v8 = (int32_t *)(a1 + 72); // 0x411f33
    int32_t v9 = *v8; // 0x411f33
    int32_t * v10; // 0x411ec0
    int32_t v11; // 0x411ec0
    if ((v9 & 512) == 0) {
        // 0x411f90
        v11 = 0;
        if ((v9 & 4) != 0) {
            goto lab_0x411f44;
        } else {
            int32_t * fd = (int32_t *)(a1 + 40); // 0x411f94
            if (fchdir(*fd) != 0) {
                int32_t * v12 = __errno_location(); // 0x411ff0
                int32_t v13 = *v12; // 0x411ffb
                v11 = v13;
                v10 = v12;
                if (close(*fd) == 0 || v13 != 0) {
                    goto lab_0x411f44;
                } else {
                    goto lab_0x412012;
                }
            } else {
                // 0x411fa0
                v11 = 0;
                if (close(*fd) == 0) {
                    goto lab_0x411f44;
                } else {
                    // 0x411fac
                    v10 = __errno_location();
                    goto lab_0x412012;
                }
            }
        }
    } else {
        int32_t fd2 = *(int32_t *)(a1 + 44); // 0x411f3b
        v11 = 0;
        if (fd2 >= 0) {
            // 0x411fc0
            v11 = 0;
            if (close(fd2) != 0) {
                // 0x411fcd
                v11 = *__errno_location();
            }
        }
        goto lab_0x411f44;
    }
  lab_0x411f44:
    // 0x411f44
    function_410a80(a1 + 96);
    int64_t v14 = *(int64_t *)(a1 + 80); // 0x411f4d
    if (v14 != 0) {
        // 0x411f56
        function_40bb00(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 88); // 0x411f5b
    if ((*v8 & 258) == 0) {
        // 0x411fe0
        free((int64_t *)v15);
    } else {
        if (v15 != 0) {
            // 0x411f6d
            function_40bb00(v15);
        }
    }
    // 0x411f72
    free((int64_t *)a1);
    int64_t result = v11; // 0x411f7c
    if (v11 != 0) {
        // 0x412028
        *__errno_location() = v11;
        result = 0xffffffff;
    }
    // 0x411f82
    return result;
  lab_0x412012:
    // 0x412012
    v11 = *v10;
    goto lab_0x411f44;
}
// Address range: 0x412040 - 0x412799
int64_t fts_read(int64_t result) {
    // 0x412040
    if (result == 0) {
        // 0x41216a
        return 0;
    }
    int32_t * v1 = (int32_t *)(result + 72); // 0x412054
    uint32_t v2 = *v1; // 0x412054
    if ((v2 & 0x4000) != 0) {
        // 0x41216a
        return 0;
    }
    int16_t * v3 = (int16_t *)(result + 116); // 0x412060
    int16_t v4 = *v3; // 0x412060
    *v3 = 3;
    if (v4 == 1) {
        // 0x412430
        *(int16_t *)(result + 112) = (int16_t)function_4106f0(result, result, 0);
        // 0x41216a
        return result;
    }
    int16_t * v5 = (int16_t *)(result + 112); // 0x41207a
    int16_t v6 = *v5; // 0x41207a
    int64_t v7; // 0x412040
    int64_t v8; // 0x412040
    int64_t v9; // 0x412040
    int64_t v10; // 0x412040
    int64_t v11; // 0x412040
    int64_t v12; // 0x412040
    int64_t v13; // 0x412040
    if (v4 == 2) {
        if ((v6 || 1) == 13) {
            int16_t v14 = function_4106f0(result, result, 1); // 0x4123da
            *v5 = v14;
            if (v14 == 1) {
                uint32_t v15 = *v1; // 0x4126c0
                if ((v15 & 4) == 0) {
                    int64_t v16 = v15; // 0x4126c0
                    int32_t v17 = *(int32_t *)(result + 44); // 0x412733
                    int32_t v18 = function_410df0(v17, v16, (int64_t)"."); // 0x412742
                    *(int32_t *)(result + 68) = v18;
                    if (v18 < 0) {
                        int32_t v19 = *__errno_location(); // 0x41276e
                        *v5 = 7;
                        *(int32_t *)(result + 64) = v19;
                        *(int64_t *)result = result;
                        // 0x41216a
                        return result;
                    }
                    int16_t * v20 = (int16_t *)(result + 114); // 0x412749
                    *v20 = *v20 | 2;
                    v7 = result;
                    v10 = (int64_t)".";
                    v12 = v16;
                    goto lab_0x412377;
                } else {
                    // 0x4126cb
                    *(int64_t *)result = result;
                    v8 = result;
                    goto lab_0x41238e;
                }
            } else {
                // 0x4123e8
                *(int64_t *)result = result;
                v11 = 1;
                v9 = result;
                v13 = result;
                if (v14 != 11) {
                    // 0x41216a
                    return result;
                }
                goto lab_0x412400;
            }
        } else {
            if (v6 != 1) {
                goto lab_0x4120c0;
            } else {
                goto lab_0x412197;
            }
        }
    } else {
        if (v6 != 1) {
            goto lab_0x4120c0;
        } else {
            if (v4 != 4) {
                goto lab_0x412197;
            } else {
                goto lab_0x412232;
            }
        }
    }
  lab_0x4120c0:;
    int64_t * v21 = (int64_t *)result;
    int64_t v22 = result;
    int64_t v23 = *(int64_t *)(v22 + 16); // 0x4120c0
    int64_t result2; // 0x412040
    int64_t v24; // 0x412040
    int64_t v25; // 0x412290
    while (v23 != 0) {
        // 0x412098
        *v21 = v23;
        free((int64_t *)v22);
        if (*(int64_t *)(v23 + 88) == 0) {
            // 0x412280
            if ((int32_t)function_410cc0(result) != 0) {
                // 0x41261f
                *v1 = *v1 | 0x4000;
                result2 = 0;
                return result2;
            } else {
                // 0x412290
                v25 = result + 88;
                int64_t v26 = *(int64_t *)v25; // 0x412290
                if ((*v1 & 258) == 0) {
                    // 0x41262d
                    free((int64_t *)v26);
                    goto lab_0x4122ae;
                } else {
                    if (v26 == 0) {
                        goto lab_0x4122ae;
                    } else {
                        // 0x4122a9
                        function_40bb00(v26);
                        goto lab_0x4122ae;
                    }
                }
            }
        }
        int16_t * v27 = (int16_t *)(v23 + 116);
        int16_t v28 = *v27; // 0x4120af
        if (v28 != 4) {
            // 0x412330
            v24 = v23;
            if (v28 == 2) {
                int16_t v29 = function_4106f0(result, v23, 1); // 0x412654
                int16_t * v30 = (int16_t *)(v23 + 112); // 0x412654
                *v30 = v29;
                if (v29 == 1) {
                    uint32_t v31 = *v1; // 0x4126d7
                    if ((v31 & 4) != 0) {
                        // 0x41265e
                        *v27 = 3;
                        v24 = v23;
                        goto lab_0x41233a;
                    } else {
                        int32_t v32 = *(int32_t *)(result + 44); // 0x4126e6
                        int32_t v33 = function_410df0(v32, (int64_t)v31, (int64_t)"."); // 0x4126f5
                        *(int32_t *)(v23 + 68) = v33;
                        if (v33 < 0) {
                            int32_t v34 = *__errno_location(); // 0x41278b
                            *v30 = 7;
                            *(int32_t *)(v23 + 64) = v34;
                            // 0x41265e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x41233a;
                        } else {
                            int16_t * v35 = (int16_t *)(v23 + 114); // 0x412700
                            *v35 = *v35 | 2;
                            // 0x41265e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x41233a;
                        }
                    }
                } else {
                    // 0x41265e
                    *v27 = 3;
                    v24 = v23;
                    goto lab_0x41233a;
                }
            } else {
                goto lab_0x41233a;
            }
        }
        v22 = v23;
        v23 = *(int64_t *)(v22 + 16);
    }
    int64_t * v36 = (int64_t *)(v22 + 8); // 0x4120c9
    int64_t v37 = *v36; // 0x4120c9
    int64_t result6 = v37; // 0x4120d2
    if (*(int64_t *)(v37 + 24) != 0) {
        // 0x4125e0
        *v21 = v37;
        *(char *)(*(int64_t *)(result + 32) + *(int64_t *)(v37 + 72)) = 0;
        int64_t v38 = function_411160(result, 3); // 0x4125f9
        if (v38 != 0) {
            // 0x41268f
            free((int64_t *)v22);
            v24 = v38;
            goto lab_0x41233a;
        } else {
            // 0x41260a
            if ((*(char *)(result + 73) & 64) != 0) {
                // 0x41216a
                return 0;
            }
            // 0x412616
            result6 = *v36;
            goto lab_0x4120d8;
        }
    } else {
        goto lab_0x4120d8;
    }
  lab_0x412197:;
    int64_t v39 = v2; // 0x412054
    if ((v39 & 64) == 0) {
        goto lab_0x4121ab;
    } else {
        // 0x41219c
        if (*(int64_t *)(result + 120) != *(int64_t *)(result + 24)) {
            goto lab_0x412232;
        } else {
            goto lab_0x4121ab;
        }
    }
  lab_0x4120d8:
    // 0x4120d8
    *v21 = result6;
    free((int64_t *)v22);
    int64_t * v40 = (int64_t *)(result6 + 88); // 0x4120e4
    if (*v40 == -1) {
        // 0x4124ff
        free((int64_t *)result6);
        *__errno_location() = 0;
        *v21 = 0;
        // 0x41216a
        return 0;
    }
    // 0x4120ef
    *(char *)(*(int64_t *)(result6 + 72) + *(int64_t *)(result + 32)) = 0;
    if (*v40 == 0) {
        // 0x41252f
        if ((int32_t)function_410cc0(result) == 0) {
            goto lab_0x412126;
        } else {
            goto lab_0x41253f;
        }
    } else {
        uint16_t v41 = *(int16_t *)(result6 + 114); // 0x412112
        if ((v41 & 2) != 0) {
            int32_t v42 = *v1; // 0x4124b5
            int32_t * v43 = (int32_t *)(result6 + 68); // 0x4124ba
            uint32_t fd = *v43; // 0x4124ba
            int32_t fd2 = fd; // 0x4124bf
            if ((v42 & 4) == 0) {
                if ((v42 & 512) == 0) {
                    // 0x41269c
                    if (fchdir(fd) != 0) {
                        // 0x4126a5
                        *(int32_t *)(result6 + 64) = *__errno_location();
                        *v1 = *v1 | 0x4000;
                    }
                    // 0x4126b8
                    fd2 = *v43;
                } else {
                    // 0x4124ca
                    function_410c50(result, (int64_t)fd, 1);
                    fd2 = *v43;
                }
            }
            // 0x4124dc
            close(fd2);
            goto lab_0x412126;
        } else {
            if (v41 % 2 == 0) {
                int64_t v44 = *(int64_t *)(result6 + 8); // 0x41266c
                if ((int32_t)function_410e40(result, v44, 0xffffffff, (int32_t)"..") == 0) {
                    goto lab_0x412126;
                } else {
                    goto lab_0x41253f;
                }
            } else {
                goto lab_0x412126;
            }
        }
    }
  lab_0x412232:
    // 0x412232
    if ((*(char *)(result + 114) & 2) != 0) {
        // 0x412637
        close(*(int32_t *)(result + 68));
    }
    int64_t * v45 = (int64_t *)(result + 8); // 0x41223c
    int64_t v46 = *v45; // 0x41223c
    if (v46 != 0) {
        // 0x412246
        function_410a30(v46);
        *v45 = 0;
    }
    // 0x412254
    *v5 = 6;
    function_4110c0(*v1, result + 88, result);
    // 0x41216a
    return result;
  lab_0x412400:;
    int64_t result5 = v9;
    int64_t result3 = result5; // 0x41240b
    if (*(int64_t *)(result5 + 168) != 2) {
        // 0x41216a
        return result3;
    }
    int64_t v47 = *(int64_t *)(result5 + 8); // 0x412567
    int64_t * v48 = (int64_t *)(v47 + 104); // 0x41256b
    int64_t v49; // 0x412040
    int64_t v50; // 0x412040
    if (*v48 != 0) {
        goto lab_0x412583;
    } else {
        // 0x412572
        if ((*v1 & 24) == 24) {
            // 0x412719
            if ((int32_t)function_410be0(v47, v13, v11) != 2) {
                goto lab_0x412583;
            } else {
                // 0x41272a
                v49 = (int64_t)*(int16_t *)(result5 + 112);
                v50 = result5;
                goto lab_0x412381;
            }
        } else {
            goto lab_0x412583;
        }
    }
  lab_0x4121ab:;
    int64_t * v51 = (int64_t *)(result + 8); // 0x4121ab
    int64_t v52 = *v51; // 0x4121ab
    int64_t v53; // 0x412040
    if (v52 == 0) {
        goto lab_0x412459;
    } else {
        if ((v39 & 0x2000) != 0) {
            // 0x412443
            *v1 = v2 & -0x2001;
            function_410a30(v52);
            *v51 = 0;
            goto lab_0x412459;
        } else {
            int64_t v54 = *(int64_t *)(result + 48); // 0x4121c2
            if ((int32_t)function_410e40(result, result, 0xffffffff, (int32_t)v54) == 0) {
                // 0x4124e6
                v53 = *v51;
            } else {
                int32_t * v55 = __errno_location(); // 0x4121de
                int64_t v56 = *v51; // 0x4121e3
                int16_t * v57 = (int16_t *)(result + 114); // 0x4121ea
                *v57 = *v57 | 1;
                *(int32_t *)(result + 64) = *v55;
                v53 = 0;
                if (v56 != 0) {
                    *(int64_t *)(v56 + 48) = *(int64_t *)(*(int64_t *)(v56 + 8) + 48);
                    int64_t v58 = *(int64_t *)(v56 + 16); // 0x41220c
                    int64_t v59 = v58; // 0x412213
                    v53 = v56;
                    while (v58 != 0) {
                        int64_t v60 = *(int64_t *)(*(int64_t *)(v59 + 8) + 48); // 0x412204
                        *(int64_t *)(v59 + 48) = v60;
                        v58 = *(int64_t *)(v59 + 16);
                        v59 = v58;
                        v53 = v56;
                    }
                }
            }
            goto lab_0x412215;
        }
    }
  lab_0x412377:;
    uint16_t v61 = *(int16_t *)(v7 + 112);
    *(int64_t *)result = v7;
    v49 = v61;
    v50 = v7;
    v11 = v10;
    v9 = v7;
    v13 = v12;
    if (v61 == 11) {
        goto lab_0x412400;
    } else {
        goto lab_0x412381;
    }
  lab_0x41238e:;
    int64_t v62 = v8; // 0x412393
    if (*(int64_t *)(v8 + 88) != 0) {
        goto lab_0x41239e;
    } else {
        goto lab_0x412395;
    }
  lab_0x412583:;
    int64_t v63 = function_4106f0(result, result5, 0); // 0x41258b
    int16_t v64 = v63; // 0x412596
    *(int16_t *)(result5 + 112) = v64;
    v49 = v63;
    v50 = result5;
    if ((*(int32_t *)(result5 + 144) & 0xf000) != 0x4000) {
        goto lab_0x412381;
    } else {
        // 0x4125ac
        if (*(int64_t *)(result5 + 88) == 0) {
            // 0x41270a
            result3 = result5;
            if (v64 != 1) {
                int64_t v65 = result3;
                result2 = v65;
                int64_t result4 = result2;
                return result4;
            }
            goto lab_0x412395;
        } else {
            uint64_t v66 = *v48 - 1; // 0x4125bb
            if (v66 < 0xfffffffffffffffe) {
                // 0x41275a
                *v48 = v66;
            }
            // 0x4125c9
            v62 = result5;
            if (v64 != 1) {
                // 0x41216a
                return result5;
            }
            goto lab_0x41239e;
        }
    }
  lab_0x412459:;
    int64_t v67 = function_411160(result, 3); // 0x412461
    *v51 = v67;
    v53 = v67;
    if (v67 == 0) {
        int32_t v68 = *v1; // 0x412477
        if ((v68 & 0x4000) != 0) {
            // 0x41216a
            return 0;
        }
        // 0x412488
        if (*(int32_t *)(result + 64) == 0) {
            // 0x4124a3
            function_4110c0(v68, result + 88, result);
            result2 = result;
          lab_0x41216a:
            // 0x41216a
            return result2;
        }
        // 0x412491
        if (*v5 != 4) {
            // 0x412498
            *v5 = 7;
        }
        // 0x4124a3
        function_4110c0(v68, result + 88, result);
        // 0x41216a
        return result;
    }
    goto lab_0x412215;
  lab_0x41233a:;
    int64_t v69 = *(int64_t *)(v24 + 8); // 0x41233a
    int64_t v70 = *(int64_t *)(v69 + 72); // 0x41233e
    char v71 = *(char *)(v70 - 1 + *(int64_t *)(v69 + 56)); // 0x41234a
    int64_t v72 = *(int64_t *)(result + 32) + v70 + (int64_t)(v71 == 47); // 0x412353
    *(char *)v72 = 47;
    int64_t v73 = *(int64_t *)(v24 + 96) + 1; // 0x412363
    int64_t v74 = v24 + 264; // 0x412367
    memmove((int64_t *)(v72 + 1), (int64_t *)v74, (int32_t)v73);
    v7 = v24;
    v10 = v73;
    v12 = v74;
    goto lab_0x412377;
  lab_0x412126:;
    int64_t v75 = (int64_t)*v1; // 0x41212b
    int64_t v76 = v75; // 0x412130
    int32_t * v77; // 0x412040
    int64_t v78; // 0x412040
    if (*(int16_t *)(result6 + 112) == 2) {
        goto lab_0x412158;
    } else {
        // 0x412126
        v77 = (int32_t *)(result6 + 64);
        v78 = v75;
        goto lab_0x412132;
    }
  lab_0x41253f:;
    int32_t v79 = *__errno_location(); // 0x412544
    int32_t * v80 = (int32_t *)(result6 + 64);
    *v80 = v79;
    uint32_t v81 = *v1 | 0x4000; // 0x412549
    *v1 = v81;
    if (*(int16_t *)(result6 + 112) == 2) {
        // 0x41216a
        return 0;
    }
    // 0x41255d
    v77 = v80;
    v78 = v81;
    goto lab_0x412132;
  lab_0x412381:
    // 0x412381
    result2 = v50;
    v8 = v50;
    if ((int16_t)v49 != 1) {
        // 0x41216a
        return result2;
    }
    goto lab_0x41238e;
  lab_0x41239e:;
    int64_t v93 = function_411010(*v1, result + 88, v62); // 0x4123ae
    result2 = v62;
    if ((char)v93 == 0) {
        // 0x4123bb
        *__errno_location() = 12;
        result2 = 0;
    }
    // 0x41216a
    return result2;
  lab_0x412395:
    // 0x412395
    *(int64_t *)(result + 24) = *(int64_t *)(v8 + 120);
    v62 = v8;
    goto lab_0x41239e;
  lab_0x412215:
    // 0x412215
    *v51 = 0;
    v24 = v53;
    goto lab_0x41233a;
  lab_0x412158:
    // 0x412158
    if ((v76 & 0x4000) != 0) {
        // 0x41216a
        return 0;
    }
    // 0x41216a
    return result6;
  lab_0x412132:
    // 0x412132
    if (*v77 != 0) {
        // 0x412521
        int64_t v82; // 0x412040
        *(int16_t *)(v82 + 112) = 7;
        int64_t v83; // 0x412040
        v76 = v83;
    } else {
        // 0x41213d
        *(int16_t *)(result6 + 112) = 6;
        function_4110c0((int32_t)v78, result + 88, result6);
        v76 = (int64_t)*v1;
    }
    goto lab_0x412158;
  lab_0x4122ae:;
    int64_t * v84 = (int64_t *)(v23 + 96); // 0x4122ae
    int64_t v85 = *v84; // 0x4122ae
    int64_t str = v23 + 264; // 0x4122b2
    int64_t * v86 = (int64_t *)(result + 32); // 0x4122b9
    *(int64_t *)(v23 + 72) = v85;
    int64_t v87 = v85 + 1; // 0x4122c5
    int64_t * v88 = (int64_t *)str; // 0x4122c9
    memmove((int64_t *)*v86, v88, (int32_t)v87);
    char * found_char_pos = strrchr((char *)str, 47); // 0x4122d6
    int64_t v89 = v87; // 0x4122de
    int64_t v90; // 0x4122d6
    if (found_char_pos == NULL) {
        goto lab_0x41230b;
    } else {
        // 0x4122e0
        v90 = (int64_t)found_char_pos;
        if (str == v90) {
            // 0x4124f0
            v89 = v87;
            if (*(char *)(v23 + 265) == 0) {
                goto lab_0x41230b;
            } else {
                goto lab_0x4122e9;
            }
        } else {
            goto lab_0x4122e9;
        }
    }
  lab_0x41230b:;
    int64_t v91 = *v86; // 0x41230b
    *(int64_t *)(v23 + 56) = v91;
    *(int64_t *)(v23 + 48) = v91;
    function_410d90(*v1, v25);
    v7 = v23;
    v10 = v89;
    v12 = v25;
    goto lab_0x412377;
  lab_0x4122e9:;
    int64_t str2 = v90 + 1; // 0x4122e9
    int64_t len = strlen((char *)str2); // 0x4122f0
    int64_t v92 = len + 1; // 0x4122fe
    memmove(v88, (int64_t *)str2, (int32_t)v92);
    *v84 = len;
    v89 = v92;
    goto lab_0x41230b;
}
// Address range: 0x4127a0 - 0x4127c9
int64_t fts_set(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 5) {
        // 0x4127a5
        *(int16_t *)(a2 + 116) = (int16_t)a3;
        return 0;
    }
    // 0x4127b0
    *__errno_location() = 22;
    return 1;
}
// Address range: 0x4127d0 - 0x41293d
int64_t fts_children(int64_t a1, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x4127dd
    if ((a2 & 0xffffdfff) != 0) {
        // 0x4128c8
        *v1 = 22;
        return 0;
    }
    // 0x4127f1
    *v1 = 0;
    char * v2 = (char *)(a1 + 73); // 0x4127fa
    if ((*v2 & 64) != 0) {
        // 0x41286f
        return 0;
    }
    int16_t v3 = *(int16_t *)(a1 + 112); // 0x412804
    if (v3 == 9) {
        // 0x4128f0
        return *(int64_t *)(a1 + 16);
    }
    // 0x412814
    if (v3 != 1) {
        // 0x41286f
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x41281c
    int64_t v5 = *v4; // 0x41281c
    if (v5 != 0) {
        // 0x412825
        function_410a30(v5);
    }
    int64_t v6 = 1; // 0x412836
    if ((int32_t)a2 == 0x2000) {
        int32_t * v7 = (int32_t *)(a1 + 72); // 0x412838
        *v7 = *v7 | 0x2000;
        v6 = 2;
    }
    // 0x412845
    int64_t result; // 0x412866
    if (*(int64_t *)(a1 + 88) != 0 || *(char *)*(int64_t *)(a1 + 48) == 47) {
        // 0x412860
        result = function_411160(a1, v6);
        *v4 = result;
        // 0x41286f
        return result;
    }
    uint32_t v8 = *(int32_t *)(a1 + 72); // 0x412857
    if ((v8 & 4) != 0) {
        // 0x412860
        result = function_411160(a1, v6);
        *v4 = result;
        // 0x41286f
        return result;
    }
    int64_t v9 = function_410df0(*(int32_t *)(a1 + 44), (int64_t)v8, (int64_t)"."); // 0x412888
    int32_t fd = v9; // 0x41288f
    if (fd < 0) {
        // 0x412918
        *v4 = 0;
        // 0x41286f
        return 0;
    }
    // 0x412897
    *v4 = function_411160(a1, v6);
    if ((*v2 & 2) != 0) {
        // 0x412900
        function_410c50(a1, v9 & 0xffffffff, 1);
        // 0x41286f
        return *v4;
    }
    // 0x4128ac
    if (fchdir(fd) == 0) {
        // 0x4128b7
        close(fd);
        // 0x41286f
        return *v4;
    }
    // 0x412927
    close(fd);
    // 0x41286f
    return 0;
}
// Address range: 0x412940 - 0x412a1f
int64_t function_412940(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x41294c
    uint32_t v2 = *v1; // 0x41294c
    int64_t v3 = a2 & 0xffffffff; // 0x412951
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x412954
    uint64_t v5 = (int64_t)*v4; // 0x412954
    int64_t v6; // 0x4129c2
    if (v3 <= v5) {
      lab_0x4129bc_2:
        // 0x4129bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x412942
    int64_t v8 = v2; // 0x412940
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4129bc
        goto lab_0x4129bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x412978
    int64_t v17; // 0x412986
    int64_t * v18; // 0x4129a0
    int64_t * v19; // 0x4129a3
    int64_t v20; // 0x4129ae
    int64_t v21; // 0x412986
    while ((v16 & 0xffffffff) > v10) {
        // 0x412983
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4129a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4129b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4129bc
            goto lab_0x4129bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4129bc
            goto lab_0x4129bc_2;
        }
        // 0x412972
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4129fb
    int64_t * v23 = (int64_t *)v22; // 0x412a00
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x412a03
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x412a00
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x412a17
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x41296d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4129bc
            goto lab_0x4129bc_2;
        }
        // 0x412972
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x412983
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4129a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4129b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4129bc
                goto lab_0x4129bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4129bc
                goto lab_0x4129bc_2;
            }
            // 0x412972
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4129e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x412a00
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x412a17
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4129bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x412a20 - 0x41303c
int64_t function_412a20(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x412a3f
    int64_t v2 = *v1; // 0x412a3f
    char * str2 = (char *)v2; // 0x412a4c
    char c = *str2; // 0x412a4c
    int64_t v3 = v2; // 0x412a78
    int64_t v4 = 0; // 0x412a20
    int32_t v5; // 0x412a20
    int64_t v6; // 0x412a20
    int64_t v7; // 0x412a20
    int64_t v8; // 0x412a20
    int64_t v9; // 0x412a20
    int64_t v10; // 0x412a20
    int64_t v11; // 0x412a20
    int64_t v12; // 0x412a20
    int64_t v13; // 0x412a20
    int64_t str3; // 0x412a20
    int64_t v14; // 0x412a20
    int64_t v15; // 0x412a20
    int64_t v16; // 0x412a20
    int64_t v17; // 0x412a20
    int32_t v18; // 0x412a20
    int32_t v19; // 0x412a20
    int32_t v20; // 0x412a20
    int32_t v21; // 0x412a20
    int32_t v22; // 0x412a20
    int32_t v23; // 0x412a20
    int32_t v24; // 0x412a20
    int32_t v25; // 0x412a20
    int32_t v26; // 0x412a20
    int32_t v27; // 0x412a20
    int32_t v28; // 0x412a20
    int32_t v29; // 0x412a20
    int64_t nmemb; // 0x412a20
    int64_t v30; // 0x412a20
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x412a7c
            while (v31 != 0 == (v31 != 61)) {
                // 0x412a78
                v3++;
                v31 = *(char *)v3;
            }
            // 0x412a88
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x412a8e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x412a58
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x412abc
                int64_t v34; // 0x412a20
                int64_t v35; // 0x412a20
                if (strncmp(str, str2, n) == 0) {
                    // 0x412ac5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x412c40;
                    }
                }
                int64_t v36 = a4 + 32; // 0x412ad6
                int64_t v37 = *(int64_t *)v36; // 0x412ada
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x412ab0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x412ac5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x412c40;
                        }
                    }
                    // 0x412ad6
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
                  lab_0x412b26:
                    // 0x412b26
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
                        goto lab_0x412b80;
                    } else {
                        if (v11 == 0) {
                            // 0x412cf0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x412b80;
                        } else {
                            if (v39 == 0) {
                                // 0x412ca0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x412b4a;
                                } else {
                                    // 0x412cac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x412b4a;
                                    } else {
                                        // 0x412cba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x412b4a;
                                        } else {
                                            goto lab_0x412b80;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x412b4a;
                            }
                        }
                    }
                }
              lab_0x412b91:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x412d66
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x412f12
                            flockfile(g42);
                            int64_t v41 = *v1; // 0x412f32
                            __fprintf_chk(g42, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x412f7f
                            int64_t v43 = (int64_t)g42;
                            int64_t v44 = v43; // 0x412f99
                            int64_t v45; // 0x412f9b
                            if (*(char *)v42 != 0) {
                                // 0x412f9b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g42;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x412f93
                            while (v17 + nmemb != v42) {
                                // 0x412f95
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x412f9b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g42;
                                }
                                // 0x412f88
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x412fc0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g42);
                            v40 = *v1;
                        } else {
                            // 0x412d74
                            __fprintf_chk(g42, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x412ecf
                        free((int64_t *)v17);
                    }
                    // 0x412dc9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x412de0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x412c8e
                    return 63;
                }
                // 0x412bb0
                v5 = v39;
                if (v13 != 0) {
                    // 0x412c34
                    v35 = v13;
                    v34 = v25;
                  lab_0x412c40:;
                    int32_t * v49 = (int32_t *)a7; // 0x412c50
                    uint32_t v50 = *v49; // 0x412c50
                    int64_t v51 = v50; // 0x412c50
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x412c5a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x412c63
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x412e8f
                                __fprintf_chk(g42, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x412e3a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x412c8e
                            return 63;
                        }
                        // 0x412cd8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x412fef
                                    __fprintf_chk(g42, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x412eed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x412f00
                                // 0x412c8e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x412dfe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x412e12
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x412c7b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x412c7e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x412c82
                    int64_t result = v59; // 0x412c88
                    if (v58 != 0) {
                        // 0x412c8a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x412c8e
                    return result;
                }
            } else {
                // 0x412a8e
                v5 = v32;
            }
            // break -> 0x412bb5
            break;
        }
    }
    // 0x412bb5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x412bcd
        if (*(char *)(v60 + 1) != 45) {
            // 0x412bd7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x412c8e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x412d19
        __fprintf_chk(g42, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x412c06
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x412c16
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x412b80:
    // 0x412b80
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x412b80
    int64_t v63 = *(int64_t *)v62; // 0x412b84
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x412b91
        goto lab_0x412b91;
    }
    goto lab_0x412b26;
  lab_0x412b4a:
    // 0x412b4a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x412a20
    int32_t v65; // 0x412a20
    int32_t v66; // 0x412a20
    if (v27 != 0) {
        goto lab_0x412b80;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x412d00
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x412b80;
            } else {
                goto lab_0x412b71;
            }
        } else {
            // 0x412b65
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x412e5c
                int64_t v67 = (int64_t)mem; // 0x412e5c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x412b80;
                } else {
                    // 0x412e6f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x412b71;
                }
            } else {
                goto lab_0x412b71;
            }
        }
    }
  lab_0x412b71:
    // 0x412b71
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x412b80;
}
// Address range: 0x413040 - 0x413606
int64_t function_413040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x413061
    if (v3 < 1) {
        // 0x41321e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x41305d
    int32_t v5 = *(int32_t *)a7; // 0x413069
    uint64_t v6 = a1 & 0xffffffff; // 0x41306b
    int64_t v7 = v2; // 0x413070
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x413073
    *v8 = 0;
    int64_t v9; // 0x413040
    int64_t v10; // 0x413040
    int64_t v11; // 0x413040
    int64_t v12; // 0x413040
    int64_t str; // 0x413040
    int64_t v13; // 0x413040
    int64_t v14; // 0x413040
    int64_t v15; // 0x413040
    int64_t v16; // 0x413040
    int64_t v17; // 0x413040
    int32_t v18; // 0x413040
    char v19; // 0x413040
    if (v5 == 0) {
        // 0x413258
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x41308a;
    } else {
        // 0x413083
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4130d0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4130d3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x413198;
            } else {
                int64_t v22 = v7 + 1; // 0x4130e6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4130f6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4131ac;
                } else {
                    goto lab_0x413108;
                }
            }
        } else {
            goto lab_0x41308a;
        }
    }
  lab_0x41308a:
    // 0x41308a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x413090
    *v24 = 0;
    int64_t v25; // 0x413040
    int64_t v26; // 0x413040
    int64_t v27; // 0x413040
    switch (*(char *)&v2) {
        case 45: {
            // 0x413180
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x41318d;
        }
        case 43: {
            // 0x413490
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x41318d;
        }
        default: {
            // 0x4130ac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x41340f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x413528
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x41318d;
                } else {
                    // 0x41341d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4130ba;
                }
            } else {
                goto lab_0x4130ba;
            }
        }
    }
  lab_0x413198:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x41319f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x413108;
    } else {
        goto lab_0x4131ac;
    }
  lab_0x4130ba:
    // 0x4130ba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x41318d;
  lab_0x41318d:
    // 0x41318d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x413198;
  lab_0x413108:;
    uint32_t v30 = *(int32_t *)a7; // 0x413108
    int64_t v31 = v30; // 0x413108
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x41310a
    if ((int64_t)*v32 > v31) {
        // 0x41310f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x413112
    if (*v33 > v30) {
        // 0x413117
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x41311a
    int64_t v35 = v31; // 0x41311e
    int64_t v36 = v15; // 0x41311e
    int64_t v37; // 0x413040
    int64_t v38; // 0x413040
    int64_t v39; // 0x413040
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x413288
        int64_t v41 = v40; // 0x413288
        v2 = v41;
        int64_t v42; // 0x413040
        if (*v33 == v40) {
            // 0x413470
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x413478
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x413294
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x413298
                function_412940(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4132a8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4132b1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4132ba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4132d1
            int64_t v47 = v45 & 0xffffffff; // 0x4132d5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4132de
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4132e4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4132e6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4132c0
            int64_t v49 = v48 & 0xffffffff; // 0x4132c0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4132d1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4132de
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4132e4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4132e6;
                    }
                }
                // 0x4132c0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x413488
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4132e6;
    } else {
        goto lab_0x413124;
    }
  lab_0x4131ac:
    // 0x4131ac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4131af
    int64_t v51 = v12; // 0x4131af
    int64_t v52 = v14; // 0x4131af
    if (*(char *)v10 == 0) {
        goto lab_0x413108;
    } else {
        goto lab_0x4131b5;
    }
  lab_0x413124:;
    int32_t v53 = v35; // 0x413124
    int64_t v54; // 0x413040
    int64_t v55; // 0x413040
    int64_t v56; // 0x413040
    int64_t v57; // 0x413040
    int64_t v58; // 0x413040
    int64_t v59; // 0x413040
    char * v60; // 0x413040
    int64_t v61; // 0x413040
    int64_t v62; // 0x413139
    int64_t v63; // 0x413040
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x413273
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x413276;
    } else {
        // 0x41312c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x413040
        int64_t v66 = v65 ? -1 : 1; // 0x413140
        int64_t v67 = (int64_t)"--"; // 0x413040
        int64_t v68 = v62; // 0x413040
        int64_t v69 = 3; // 0x413140
        unsigned char v70 = *(char *)v68; // 0x413140
        char v71 = *(char *)v67; // 0x413140
        char v72 = v71; // 0x413140
        bool v73 = false; // 0x413140
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
            // 0x413230
            if (*(char *)v62 == 45) {
                // 0x4132f0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4132f0
                if (c == 0) {
                    goto lab_0x41323a;
                } else {
                    // 0x4132fd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x413380;
                    } else {
                        if (c == 45) {
                            // 0x413563
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4133d5;
                        } else {
                            // 0x41330e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x413380;
                            } else {
                                // 0x413313
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x413334;
                                } else {
                                    // 0x41331a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x413380;
                                    } else {
                                        goto lab_0x413334;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x41323a;
            }
        } else {
            uint32_t v75 = *v33; // 0x413150
            v2 = v75;
            int32_t v76 = *v32; // 0x413153
            int64_t v77 = v35 + 1; // 0x413156
            int32_t v78 = v77; // 0x413159
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4134c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x413167
                    function_412940(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x413175
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x413276;
        }
    }
  lab_0x4131b5:;
    // 0x4131b5
    int64_t v79; // bp-104, 0x413040
    int64_t v80 = &v79; // 0x41304a
    int64_t v81 = v50 + 1; // 0x4131b5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4131bc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4131c1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4131c5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4131c9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4131d1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4131d6
    int32_t c2 = v84; // 0x4131d6
    char * found_char_pos = strchr(str2, c2); // 0x4131d6
    int64_t v87 = *v82; // 0x4131db
    v2 = v87;
    int64_t v88 = *v85; // 0x4131e5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4131f0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4134e0
            __fprintf_chk(g42, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4134ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x41321e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4131d6
    char v91 = *(char *)(v90 + 1); // 0x41320b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4131c5
        if (v91 != 58) {
            // 0x41321e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x413434
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x413538
                *v8 = 0;
            } else {
                // 0x41351c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x41345e
            *v83 = 0;
            // 0x41321e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x41343e
        if (v93 != 0) {
            // 0x4134d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x41345e
            *v83 = 0;
            // 0x41321e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x413451
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x41345e
            *v83 = 0;
            // 0x41321e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x41359a
            __fprintf_chk(g42, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x41354a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x413551
        // 0x41345e
        *v83 = 0;
        // 0x41321e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4133a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4133ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4135d0
                __fprintf_chk(g42, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x413581
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x413588
            // 0x41321e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4133b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4133ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4133d5;
  lab_0x4132e6:
    // 0x4132e6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x413124;
  lab_0x4133d5:;
    int64_t v99 = function_412a20(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4133f3
    // 0x41321e
    return v99 & 0xffffffff;
  lab_0x413276:;
    int32_t v100 = v55; // 0x413276
    if (v100 != (int32_t)v59) {
        // 0x41327a
        *(int32_t *)a7 = v100;
    }
    // 0x41321e
    return 0xffffffff;
  lab_0x41323a:
    // 0x41323a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x413241
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x41321e
    return v99 & 0xffffffff;
  lab_0x413380:
    // 0x413380
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4131b5;
  lab_0x413334:
    // 0x413334
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_412a20(v6, a2, str, a4, a5, v57, v1, v11, &g17); // 0x41335a
    if ((int32_t)v101 != -1) {
        // 0x41321e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x41336f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x413380;
}
// Address range: 0x413610 - 0x413666
int64_t function_413610(int64_t a1) {
    // 0x413610
    *(int32_t *)&g68 = g36;
    *(int32_t *)&g69 = g35;
    int64_t v1; // 0x413610
    int64_t result = function_413040(v1, v1, v1, v1, v1, v1, &g68, a1 & 0xffffffff); // 0x413636
    g36 = *(int32_t *)&g68;
    g73 = (char *)g71;
    *(int32_t *)&g34 = g70;
    return result;
}
// Address range: 0x413670 - 0x413688
int64_t function_413670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x413670
    return function_413610(1);
}
// Address range: 0x413690 - 0x4136a3
int64_t function_413690(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x413690
    return function_413610(0);
}
// Address range: 0x4136b0 - 0x4136c5
int64_t function_4136b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4136b0
    return function_413040(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4136d0 - 0x4136e6
int64_t function_4136d0(void) {
    // 0x4136d0
    return function_413610(0);
}
// Address range: 0x4136f0 - 0x413708
int64_t function_4136f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4136f0
    return function_413040(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x413710 - 0x41378a
int64_t function_413710(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x41371b
    int64_t v2 = (int64_t)&g18; // 0x41371b
    int32_t * pwc; // 0x413710
    int64_t v3; // 0x413710
    int64_t n; // 0x413710
    if (a2 == 0) {
        goto lab_0x413762;
    } else {
        // 0x41371d
        if (a3 == 0) {
            // 0x413748
            return -2;
        }
        // 0x413729
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x413762;
        } else {
            goto lab_0x413734;
        }
    }
  lab_0x413762:
    // 0x413762
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x413710
    pwc = (int32_t *)&v4;
    goto lab_0x413734;
  lab_0x413734:;
    char * wstr = (char *)v3; // 0x41373a
    int64_t ps; // 0x413710
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x41373a
    int64_t result = v5; // 0x41373a
    if (v5 < 0xfffffffe) {
        // 0x413748
        return result;
    }
    int64_t result2 = result; // 0x413779
    if ((char)function_413cb0(0, v3) == 0) {
        // 0x41377b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x413748
    return result2;
}
// Address range: 0x413790 - 0x413795
int64_t function_413790(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x413790
    *(int32_t *)a4 = (int32_t)a3;
    return 0;
}
// Address range: 0x4137a0 - 0x4137b5
int64_t function_4137a0(int64_t path, int64_t a2, int32_t mode) {
    int32_t fd = a2; // 0x4137a4
    if (fd == -1) {
        // 0x4137b0
        return chmod((char *)path, mode);
    }
    // 0x4137a9
    return fchmod(fd, mode);
}
// Address range: 0x4137c0 - 0x4137e2
int64_t function_4137c0(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x4137c0
    int64_t v1; // 0x4137c0
    int64_t result = (int32_t)function_4137a0(a2, a3 & 0xffffffff, (int32_t)v1) != 0 ? 0xffffffff : 0; // 0x4137df
    return result;
}
// Address range: 0x4137f0 - 0x4137fa
int64_t function_4137f0(void) {
    // 0x4137f0
    return function_4036b0(1);
}
// Address range: 0x413800 - 0x413916
int64_t function_413800(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x413821
    int32_t len = strlen(str); // 0x413821
    if (a2 == 0) {
        // 0x4138ed
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x413887
    int64_t v4 = a3; // 0x413800
    int64_t v5 = a2; // 0x41388e
    int64_t str4; // 0x413800
    int64_t v6; // 0x413800
    int32_t v7; // 0x413800
    int32_t v8; // 0x413800
    int32_t v9; // 0x413800
    int64_t v10; // 0x413800
    int64_t result; // 0x413800
    int32_t v11; // 0x413883
    char * str2; // 0x4138a2
    while (true) {
        // 0x413897
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x4138ab
            result = v6;
            if (len == strlen(str2)) {
                // 0x4138ed
                return result;
            }
            if (v1 == -1) {
                // break -> 0x4138bf
                break;
            }
            // 0x413850
            v7 = 1;
            if (a3 != 0) {
                // 0x41385e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x413887
        v2 = v7;
        v3 = v6 + 1;
        v5 = *(int64_t *)(8 * v3 + a2);
        v4 = str4 + n;
        v10 = v1;
        v9 = v2;
        if (v5 == 0) {
            return (char)v9 == 0 ? v10 : -2;
        }
    }
    int64_t v12 = v6 + 1; // 0x4138c3
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x4138ca
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x413897
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x413897
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x4138ab
                result = v6;
                if (len == strlen(str2)) {
                    // 0x4138ed
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x4138bf
                    break;
                }
                // 0x413850
                v7 = 1;
                if (a3 != 0) {
                    // 0x41385e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x413887
            v2 = v7;
            v3 = v6 + 1;
            v5 = *(int64_t *)(8 * v3 + a2);
            v4 = str4 + n;
            v10 = v1;
            v9 = v2;
            if (v5 == 0) {
                return (char)v9 == 0 ? v10 : -2;
            }
        }
        // 0x4138bf
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x4138d8:
    // 0x4138ed
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x413920 - 0x413991
int64_t function_413920(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x413920
    if (a3 == -1) {
        // 0x413980
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x413935
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x413944
    function_40dfb0(1, a1);
    function_40dca0(0, 8, a2);
    error(0, 0, format);
    return &g76;
}
// Address range: 0x4139a0 - 0x413ab8
int64_t function_4139a0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x4139cd
    fputs_unlocked(v1, g42);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x413a40
        int64_t v5; // 0x413a47
        int64_t v6; // 0x413a67
        while (v3 != 0) {
            // 0x413a2b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x4139f0
                break;
            }
            // 0x413a3d
            v4 = v3 + 1;
            v5 = function_40dfd0(v2);
            __fprintf_chk(g42, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x413a70
                goto lab_0x413a70;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x4139f3
        int64_t v8 = function_40dfd0(v2); // 0x4139fd
        __fprintf_chk(g42, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x413a1d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x413a2b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x4139f0
                    break;
                }
                // 0x413a3d
                v4 = v3 + 1;
                v5 = function_40dfd0(v2);
                __fprintf_chk(g42, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x413a70
                    goto lab_0x413a70;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x4139f0
            v7 = v3 + 1;
            v8 = function_40dfd0(v2);
            __fprintf_chk(g42, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x413a70:;
    int64_t v10 = (int64_t)g42; // 0x413a70
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x413a77
    uint64_t result = *v11; // 0x413a77
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x413aa0
        return __overflow(g42, 10);
    }
    // 0x413a81
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x413ac0 - 0x413b30
int64_t function_413ac0(int64_t a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_413800(a2, v2, v1, a5); // 0x413aec
    int64_t result = v3; // 0x413af4
    if (v3 < 0) {
        // 0x413b08
        function_413920(a1, a2, v3);
        function_4139a0(v2, v1, a5);
        result = -1;
    }
    // 0x413af6
    return result;
}
// Address range: 0x413b30 - 0x413b7d
int64_t function_413b30(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x413b30
    if (result == 0) {
        // 0x413b71
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x413b68
    int32_t n = a4; // 0x413b68
    int64_t v1 = result; // 0x413b6f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x413b71
        return result;
    }
    int64_t str3 = str2; // 0x413b6f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x413b50
    int64_t result2 = 0; // 0x413b5d
    while (v2 != 0) {
        // 0x413b5f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x413b71
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x413b71
    return result2;
}
// Address range: 0x413b80 - 0x413bdd
int64_t function_413b80(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x413b87
    int64_t v2; // 0x413b80
    int64_t result = function_414fe0(a1, v2); // 0x413b98
    if ((v2 & 32) != 0) {
        // 0x413bc0
        if ((int32_t)result == 0) {
            // 0x413bc4
            *__errno_location() = 0;
        }
        // 0x413bba
        return 0xffffffff;
    }
    // 0x413ba1
    if ((int32_t)result == 0) {
        // 0x413bba
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x413ba8
    if (v1 == 0) {
        // 0x413baa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x413bba
    return result2;
}
// Address range: 0x413be0 - 0x413bf0
int64_t function_413be0(int64_t a1) {
    // 0x413be0
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0x95f616;
    int64_t result; // 0x413be0
    return result;
}
// Address range: 0x413bf0 - 0x413c70
int64_t function_413bf0(int64_t a1, int64_t a2) {
    // 0x413bf0
    if (*(int32_t *)(a1 + 24) != 0x95f616) {
        // 0x413c52
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 60, "cycle_check");
        return &g76;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x413bf9
    int64_t v2 = *v1; // 0x413bf9
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x413bfd
    if (v2 == 0) {
        // 0x413c20
        *v1 = 1;
        // 0x413c28
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 8) = a2;
        return 0;
    }
    if (v3 == a1) {
        // 0x413c38
        if (*(int64_t *)(a1 + 8) == a2) {
            // 0x413c18
            return 1;
        }
    }
    int64_t v4 = v2 + 1; // 0x413c0b
    *v1 = v4;
    if ((v4 & v2) != 0) {
        // 0x413c18
        return 0;
    }
    // 0x413c47
    if (v4 == 0) {
        // 0x413c18
        return 1;
    }
    // 0x413c28
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 8) = a2;
    return 0;
}
// Address range: 0x413c70 - 0x413caa
int64_t function_413c70(int64_t tp) {
    int64_t result = 0; // 0x413c84
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x413c86
        int64_t tp2; // bp-24, 0x413c70
        gettimeofday((struct timeval *)&tp2, NULL);
        *(int64_t *)tp = tp2;
        int128_t v1; // 0x413c70
        result = 1000 * (int64_t)v1;
        *(int64_t *)(tp + 8) = result;
    }
    // 0x413ca4
    return result;
}
// Address range: 0x413cb0 - 0x413d0e
int64_t function_413cb0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x413cb6
    if (locale == NULL) {
        // 0x413ce3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x413cb6
    bool v2; // 0x413cb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g19; // 0x413cb0
    int64_t v5 = v1; // 0x413cb0
    int64_t v6 = 2; // 0x413cd5
    unsigned char v7 = *(char *)v5; // 0x413cd5
    char v8 = *(char *)v4; // 0x413cd5
    char v9 = v8; // 0x413cd5
    bool v10 = false; // 0x413cd5
    while (v7 == v8) {
        // 0x413cc8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x413ce1
    int64_t v13 = v1; // 0x413ce1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x413ce3
        return 0;
    }
    int64_t v14 = 6; // 0x413ce1
    unsigned char v15 = *(char *)v13; // 0x413cfd
    char v16 = *(char *)v12; // 0x413cfd
    char v17 = v16; // 0x413cfd
    bool v18 = false; // 0x413cfd
    while (v15 == v16) {
        // 0x413cf0
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
// Address range: 0x413d10 - 0x413d46
int64_t function_413d10(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x413d16
    if (v1 == 0) {
        // 0x413d40
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x413d28
    char v5 = *(char *)v2; // 0x413d2b
    while (v5 != 0) {
        // 0x413d20
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x413d33
    return v4 % a2;
}
// Address range: 0x413d50 - 0x413d6b
int64_t function_413d50(int64_t a1, int64_t a2) {
    // 0x413d50
    *(int64_t *)(a1 + 20) = 0;
    *(char *)(a1 + 28) = 1;
    int32_t v1 = a2; // 0x413d5c
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v1;
    *(int32_t *)(a1 + 8) = v1;
    *(int32_t *)(a1 + 12) = v1;
    *(int32_t *)(a1 + 16) = v1;
    int64_t result; // 0x413d50
    return result;
}
// Address range: 0x413d70 - 0x413d75
int64_t function_413d70(int64_t a1) {
    // 0x413d70
    return (int64_t)*(char *)(a1 + 28);
}
// Address range: 0x413d80 - 0x413db5
int64_t function_413d80(int64_t a1, int32_t a2) {
    char * v1 = (char *)(a1 + 28); // 0x413d80
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x413d84
    int32_t v3 = (int32_t)(*v1 ^ 1); // 0x413d8d
    uint32_t v4 = (*v2 + v3) % 4; // 0x413d8f
    int32_t * v5 = (int32_t *)((int64_t)(4 * v4) + a1); // 0x413d98
    *v5 = a2;
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x413d9e
    int32_t v7 = *v6; // 0x413d9e
    *v2 = v4;
    if (v7 == v4) {
        // 0x413da8
        *v6 = (v7 + v3) % 4;
    }
    // 0x413db0
    *v1 = 0;
    return (int64_t)*v5;
}
// Address range: 0x413dc0 - 0x413e01
int64_t function_413dc0(int64_t a1) {
    char * v1 = (char *)(a1 + 28); // 0x413dc4
    if (*v1 != 0) {
        abort();
        // UNREACHABLE
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x413dce
    uint32_t v3 = *v2; // 0x413dce
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + a1); // 0x413ddb
    int64_t result = (int64_t)*v4; // 0x413ddb
    *v4 = *(int32_t *)(a1 + 16);
    if (v3 == *(int32_t *)(a1 + 24)) {
        // 0x413df8
        *v1 = 1;
        return result;
    }
    // 0x413de4
    *v2 = (v3 + 3) % 4;
    return result;
}
// Address range: 0x413e10 - 0x414372
int64_t function_413e10(void) {
    char * v1 = nl_langinfo(14); // 0x413e26
    char * v2 = g72; // 0x413e2b
    char * v3; // 0x413e10
    int64_t v4; // 0x413e10
    int64_t v5; // 0x413e10
    int64_t v6; // 0x413e10
    int64_t v7; // 0x413e10
    int32_t size; // 0x413e10
    int32_t size2; // 0x413e10
    int32_t len; // 0x413ee2
    int64_t v8; // 0x413ee2
    char * env_val; // 0x413ecd
    if (v2 == NULL) {
        // 0x413ec8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x413f35;
        } else {
            // 0x413eda
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x413f35;
            } else {
                // 0x413edf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x413ecd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x414365
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x413f35;
                    } else {
                        // 0x4142d9
                        size2 = len + 14;
                        goto lab_0x413efb;
                    }
                } else {
                    goto lab_0x413efb;
                }
            }
        }
    } else {
        // 0x413e10
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x413e4a;
    }
  lab_0x41417c:;
    // 0x41417c
    struct _IO_FILE * stream; // 0x413fbb
    int32_t v10 = __uflow(stream); // 0x41417f
    int64_t v11; // 0x413e10
    int64_t v12 = v11; // 0x414189
    int64_t v13; // 0x413e10
    int64_t v14 = v13; // 0x414189
    int32_t v15 = v10; // 0x414189
    int64_t v16; // 0x413e10
    int64_t v17 = v16; // 0x414189
    int64_t v18 = v11; // 0x414189
    int64_t v19 = v13; // 0x414189
    int64_t v20 = v16; // 0x414189
    if (v10 == -1) {
        // break -> 0x41418f
        goto lab_0x41418f;
    }
    goto lab_0x414009;
  lab_0x413ffe:;
    // 0x413ffe
    int64_t v90; // 0x413e10
    int64_t * v32; // 0x413ff0
    *v32 = v90 + 1;
    int64_t v89; // 0x413e10
    v12 = v89;
    int64_t v91; // 0x413e10
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x413e10
    v17 = v92;
    goto lab_0x414009;
  lab_0x414009:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x413e10
    int32_t v25; // bp-120, 0x413e10
    int32_t v26; // bp-184, 0x413e10
    int64_t v27; // 0x413fbb
    int64_t v28; // 0x413fd8
    int64_t v29; // 0x413fdd
    int64_t * v30; // 0x413ff4
    switch (c) {
        case 32: {
            goto lab_0x413ff0;
        }
        case 10: {
            goto lab_0x413ff0;
        }
        case 9: {
            goto lab_0x413ff0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4141e1
            int32_t v33; // 0x413e10
            char v34; // 0x413e10
            int32_t v35; // 0x4141ee
            if (v31 < *v30) {
                // 0x4141c0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4141eb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4141e1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4141c0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4141eb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4141d0
                v36 = v33;
            }
            // 0x4142bf
            if (v36 == -1) {
                // break -> 0x41418f
                break;
            }
            goto lab_0x413ff0;
        }
        default: {
            // 0x41401f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x41418f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x414048
            int64_t v39 = v37 + 4; // 0x41404a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x414056
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x414058
            while (v41 == 0) {
                // 0x414048
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x414076
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x414082
            int64_t v45 = v43 + 4; // 0x414084
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x414090
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x414092
            while (v47 == 0) {
                // 0x414082
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x41407f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4140a8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4140b8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4140bc
            int64_t v52 = v51 + v48; // 0x4140c5
            int64_t * mem; // 0x413e10
            int64_t v53; // 0x413e10
            int64_t v54; // 0x413e10
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4141fb
                int64_t v56 = v55 + 3; // 0x414207
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4140e1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4140f0
            if (mem == NULL) {
                // 0x41431c
                free((int64_t *)v21);
                function_414fe0(v27, v53);
                v24 = (int64_t)&g18;
                goto lab_0x413f94;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x414108
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x414112
            uint32_t v62 = (int32_t)v59; // 0x414115
            int64_t v63; // 0x413e10
            if (v62 >= 8) {
                // 0x414224
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x41423e
                int64_t v66 = v61 - v65; // 0x414242
                uint32_t v67 = (int32_t)(v66 + v59); // 0x41424d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x41425e
                    int64_t v70 = v69 & 0xffffffff; // 0x41425e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x41425b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4142ef
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x414127
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x41412b
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
            int64_t v73 = v51 + 1; // 0x41413b
            int64_t v74 = v60 - 1; // 0x41413f
            uint32_t v75 = (int32_t)v73; // 0x414144
            int64_t v76; // 0x413e10
            if (v75 >= 8) {
                // 0x414272
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x41427c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x41428c
                int64_t v80 = v74 - v79; // 0x414290
                uint32_t v81 = (int32_t)(v80 + v73); // 0x41429b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4142ab
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4142a9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x414306
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x41430e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x414156
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x41415a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x414353
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x41416e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x413ffe;
            } else {
                goto lab_0x41417c;
            }
        }
    }
  lab_0x413ff0:;
    int64_t v93 = v23; // 0x413e10
    int64_t v94 = v22; // 0x413e10
    int64_t v95 = v21; // 0x413e10
    goto lab_0x413ff0_2;
  lab_0x413f35:;
    int64_t * mem3 = malloc(size); // 0x413f35
    int64_t v97 = (int64_t)&g18; // 0x413f40
    int64_t v98; // 0x413e10
    int64_t path; // 0x413e10
    if (mem3 == NULL) {
        goto lab_0x413f12;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x413f35
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x413f56;
    }
  lab_0x413e4a:;
    int64_t str = v1 == NULL ? (int64_t)&g18 : (int64_t)v1; // 0x413e3d
    char v100 = *v3; // 0x413e4a
    int64_t v101; // 0x413e10
    if (v100 == 0) {
        // 0x413ea4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x413e10
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x413e10
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x413e90
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x413e97;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x413e60
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x413e6d
        char v107 = *(char *)v106; // 0x413e72
        v102 = v107;
        if (v107 == 0) {
            // 0x413ea4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x413e7b
    v104 = v103 + 1;
  lab_0x413e97:
    // 0x413ea4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x413f12:;
    char * v108 = (char *)v97;
    g72 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x413e4a;
  lab_0x413f56:;
    int64_t v109 = v98 + path; // 0x413f56
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x413f82
    v24 = (int64_t)&g18;
    if (fd >= 0) {
        // 0x413fb1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4142e2
            close(fd);
            v24 = (int64_t)&g18;
        } else {
            // 0x413fd5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x413ff0_2:;
                uint64_t v96 = *v32; // 0x413ff0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x41417c;
                } else {
                    goto lab_0x413ffe;
                }
            }
          lab_0x41418f:
            // 0x41418f
            function_414fe0(v27, v19);
            v24 = (int64_t)&g18;
            if (v18 != 0) {
                // 0x4141ae
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x413f94;
  lab_0x413efb:;
    int64_t * mem4 = malloc(size2); // 0x413efb
    v97 = (int64_t)&g18;
    if (mem4 != NULL) {
        // 0x413fa1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x413f56;
    } else {
        goto lab_0x413f12;
    }
  lab_0x413f94:
    // 0x413f94
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x413f12;
}
// Address range: 0x414380 - 0x4143ca
int64_t function_414380(int64_t fd, int64_t path, int32_t oflag, int64_t a4) {
    uint32_t v1 = openat((int32_t)fd, (char *)path, oflag); // 0x414392
    return function_40eaf0((int64_t)v1);
}
// Address range: 0x4143d0 - 0x4143f3
int64_t function_4143d0(int64_t a1) {
    int64_t result = function_4100e0(24); // 0x4143d9
    *(int64_t *)result = a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}
// Address range: 0x414400 - 0x41442f
int64_t function_414400(void) {
    // 0x414400
    int64_t v1; // 0x414400
    int64_t v2 = function_414620(v1, v1, v1); // 0x414401
    int64_t result = 0; // 0x41440e
    if (v2 != 0) {
        // 0x414410
        result = function_4100e0(24);
        *(int64_t *)result = v2;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x41442d
    return result;
}
// Address range: 0x414430 - 0x414434
int64_t function_414430(int64_t result) {
    // 0x414430
    return result;
}
// Address range: 0x414440 - 0x414535
int64_t function_414440(int64_t a1, uint64_t a2) {
    uint64_t v1 = a2 + 1; // 0x414447
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x41445b
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x41445f
    int64_t v4 = *v3; // 0x414463
    int64_t result = *v2; // 0x414463
    int64_t v5; // 0x414440
    while (true) {
        int64_t v6 = result;
        int64_t v7 = v4;
        int64_t v8 = v7; // 0x4144a0
        int64_t v9; // 0x414440
        int64_t v10; // 0x414440
        if (v7 >= a2) {
            // 0x414468
            v10 = v7;
            v9 = v6;
            v5 = v6;
            if (v7 == a2) {
                // break -> 0x4144ff
                break;
            }
        } else {
            int64_t v11 = 1; // 0x4144b4
            int64_t v12 = 256 * v8 | 255; // 0x4144b8
            v8 = v12;
            int64_t v13 = v11; // 0x4144c1
            while (v12 < a2) {
                // 0x4144b0
                v11 = v13 + 1;
                v12 = 256 * v8 | 255;
                v8 = v12;
                v13 = v11;
            }
            // 0x4144c3
            int64_t v14; // bp-64, 0x414440
            function_414930(a1, &v14, v11);
            int64_t v15 = &v14; // 0x4144d5
            int64_t v16 = 256 * v7 | 255; // 0x4144e7
            int64_t v17 = 256 * v6 | (int64_t)*(char *)v15; // 0x4144ee
            v15++;
            int64_t v18 = v16; // 0x4144f4
            int64_t v19 = v17; // 0x4144f4
            while (v16 < a2) {
                // 0x4144d8
                v16 = 256 * v18 | 255;
                v17 = 256 * v19 | (int64_t)*(char *)v15;
                v15++;
                v18 = v16;
                v19 = v17;
            }
            // 0x4144f6
            v10 = v16;
            v9 = v17;
            v5 = v17;
            if (v16 == a2) {
                // break -> 0x4144ff
                break;
            }
        }
        uint64_t v20 = v9;
        uint64_t v21 = v10 - a2; // 0x414476
        uint64_t v22 = v21 % v1;
        result = v20 % v1;
        v4 = v22 - 1;
        if (v20 <= v10 - v22) {
            // 0x414528
            *v2 = v20 / v1;
            *v3 = v21 / v1;
            return result;
        }
    }
    // 0x4144ff
    *v3 = 0;
    *v2 = 0;
    result = v5;
  lab_0x41450f:
    // 0x41450f
    return result;
}
// Address range: 0x414540 - 0x41455e
int64_t function_414540(int64_t a1) {
    // 0x414540
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return &g76;
}
// Address range: 0x414560 - 0x4145b1
int64_t function_414560(int64_t a1) {
    int64_t v1 = function_414a90(a1); // 0x414570
    int32_t * v2 = __errno_location(); // 0x414578
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return v1 & 0xffffffff;
}
// Address range: 0x4145c0 - 0x41461d
int64_t function_4145c0(int64_t a1) {
    // 0x4145c0
    function_40dfd0(a1);
    int32_t * err_num = __errno_location(); // 0x4145d7
    char * format; // 0x4145c0
    if (*err_num == 0) {
        // 0x41460f
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x4145e9
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x4145f5
    error(g28, *err_num, format);
    return &g76;
}
// Address range: 0x414620 - 0x41490f
int64_t function_414620(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_4100e0(0x1038); // 0x41473d
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x4145c0;
        *(int64_t *)(result + 16) = 0;
        // 0x414692
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_415060(a1, "rb"); // 0x414647
        int64_t result2 = 0; // 0x414652
        if (stream != 0) {
            // 0x414658
            result2 = function_4100e0(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x414674
            *(int64_t *)(result2 + 8) = 0x4145c0;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x414692
        return result2;
    }
    int64_t result3 = function_4100e0(0x1038); // 0x4146ad
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x4146c3
    *(int64_t *)(result3 + 8) = 0x4145c0;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x4146e1
    int64_t v2; // 0x414620
    int128_t pid2; // bp-72, 0x414620
    if (fd < 0) {
        // 0x414768
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x414787
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x41470b
        close(fd);
        if (v3 >= 2048) {
            // 0x414728
            function_414d90(v1);
            // 0x414692
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x414896
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x4148a2
        uint64_t v7 = v6 + v4; // 0x4148a8
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x414728
            function_414d90(v1);
            // 0x414692
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x4148d1
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x4148dd
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x4148f5
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x414728
            function_414d90(v1);
            // 0x414692
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x41479d
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x4147a4
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x4147c0
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x4147be
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x4147cf
    if (v16 >= 2048) {
        // 0x414728
        function_414d90(v1);
        // 0x414692
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x4147ea
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x4147f1
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x41480f
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x41480d
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x41481e
    if (v21 >= 2048) {
        // 0x414728
        function_414d90(v1);
        // 0x414692
        return result3;
    }
    // 0x41482e
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x414846
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x41484d
    if (v23 == 0) {
        // 0x414728
        function_414d90(v1);
        // 0x414692
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x41485f
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x41485d
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x414728
    function_414d90(v1);
    // 0x414692
    return result3;
}
// Address range: 0x414910 - 0x414915
int64_t function_414910(int64_t a1, int64_t a2) {
    // 0x414910
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x414910
    return result;
}
// Address range: 0x414920 - 0x414925
int64_t function_414920(int64_t a1, int64_t a2) {
    // 0x414920
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x414920
    return result;
}
// Address range: 0x414930 - 0x414a8c
int64_t function_414930(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        int32_t * v2 = __errno_location(); // 0x41494f
        int64_t result = fread_unlocked(a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x41498a
        int64_t v3 = a3 - result; // 0x414995
        if (v3 == 0) {
            // 0x41499a
            return result;
        }
        int64_t v4 = v3; // 0x414995
        int64_t v5 = result + v1; // 0x414992
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x414964
        *v2 = (v1 & 32) == 0 ? 0 : *v2;
        int64_t result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6); // 0x41498a
        v4 -= result2;
        while (v4 != 0) {
            int64_t v7 = v5;
            v5 = result2 + v7;
            v6 = *(int64_t *)(a1 + 16);
            *v2 = (v7 & 32) == 0 ? 0 : *v2;
            result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6);
            v4 -= result2;
        }
        // 0x41499a
        return result2;
    }
    int64_t v8 = *(int64_t *)24; // 0x4149b0
    int64_t v9 = a3; // 0x4149c2
    int64_t * v10; // 0x414930
    int64_t v11; // 0x414930
    int64_t v12; // 0x414930
    int64_t v13; // 0x414930
    if (v8 < a3) {
        int64_t v14 = v8;
        int64_t v15 = v14 + v1; // 0x4149d3
        v9 -= v14;
        memcpy((int64_t *)v1, (int64_t *)(0x1038 - v14), (int32_t)v14);
        while (v15 % 8 != 0) {
            // 0x4149ea
            function_414ae0(32, 2104);
            v13 = v9;
            v12 = v15;
            v10 = (int64_t *)2104;
            v11 = 2048;
            if (v9 < 2049) {
                goto lab_0x414a45;
            }
            v14 = 2048;
            int64_t v16 = v15;
            v15 = v14 + v16;
            v9 -= v14;
            memcpy((int64_t *)v16, (int64_t *)(0x1038 - v14), (int32_t)v14);
        }
        int64_t v17 = v15;
        int64_t v18 = v9;
        while (v18 >= 2048) {
            int64_t result3 = function_414ae0(32, v17); // 0x414a1d
            int64_t v19 = v18 - 2048; // 0x414a22
            if (v19 == 0) {
                // 0x414a68
                *(int64_t *)24 = 0;
                return result3;
            }
            v17 += 2048;
            v18 = v19;
        }
        // 0x414a34
        function_414ae0(32, 2104);
        v13 = v18;
        v12 = v17;
        v10 = (int64_t *)2104;
        v11 = 2048;
    } else {
        // 0x414a80
        v13 = a3;
        v12 = v1;
        v10 = (int64_t *)(0x1038 - v8);
        v11 = v8;
    }
  lab_0x414a45:;
    int64_t * dest_mem = memcpy((int64_t *)v12, v10, (int32_t)v13); // 0x414a4e
    *(int64_t *)24 = v11 - v13;
    // 0x41499a
    return (int64_t)dest_mem;
}
// Address range: 0x414a90 - 0x414ad9
int64_t function_414a90(int64_t a1) {
    // 0x414a90
    __explicit_bzero_chk(a1, 0x1038, -1);
    free((int64_t *)a1);
    if (a1 == 0) {
        // 0x414ad0
        return 0;
    }
    // 0x414aba
    return function_414fe0(a1, 0x1038);
}
// Address range: 0x414ae0 - 0x414d85
int64_t function_414ae0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x414ae0
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x414ae7
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x414af6
    int64_t v4 = *v1 + 1; // 0x414b00
    *v1 = v4;
    int64_t v5 = a2; // 0x414b11
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x414b22
    int64_t v9 = *v8; // 0x414b22
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x414b28
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x414b43
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x414b62
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x414b68
    int64_t v14 = *v13; // 0x414b68
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x414b6c
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x414b90
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x414ba5
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x414bac
    int64_t v19 = *v18; // 0x414bac
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x414bb0
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x414bcb
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x414bdd
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x414be8
    int64_t v24 = *v23; // 0x414be8
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x414bf9
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x414c10
    int64_t v27 = v7 + 32; // 0x414c13
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x414c2d
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x414b18
        v6 = v25;
        v7 = v27;
        v8 = (int64_t *)v7;
        v9 = *v8;
        v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6);
        v11 = v10 + v28 + *(int64_t *)((v9 & 2040) + a1);
        *v8 = v11;
        v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9;
        *(int64_t *)v5 = v12;
        v13 = (int64_t *)(v7 + 8);
        v14 = *v13;
        v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10);
        v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1);
        *v13 = v16;
        v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14;
        *(int64_t *)(v5 + 8) = v17;
        v18 = (int64_t *)(v7 + 16);
        v19 = *v18;
        v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15);
        v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1);
        *v18 = v21;
        v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19;
        *(int64_t *)(v5 + 16) = v22;
        v23 = (int64_t *)(v7 + 24);
        v24 = *v23;
        v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20);
        v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1);
        v27 = v7 + 32;
        *v23 = v26;
        v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24;
        *(int64_t *)(v5 + 24) = v28;
        v5 += 32;
    }
    int64_t v29 = a2 + 1024; // 0x414c4b
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x414c5a
    int64_t v33 = *v32; // 0x414c5a
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x414c60
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x414c85
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x414c96
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x414c9d
    int64_t v38 = *v37; // 0x414c9d
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x414ca4
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x414cc8
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x414cdd
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x414ce4
    int64_t v43 = *v42; // 0x414ce4
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x414ce8
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x414d03
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x414d15
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x414d20
    int64_t v48 = *v47; // 0x414d20
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x414d31
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x414d48
    int64_t result = v31 + 32; // 0x414d4b
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x414d65
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x414c50
        v30 = v49;
        v31 = result;
        v32 = (int64_t *)v31;
        v33 = *v32;
        v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30);
        v35 = v34 + v51 + *(int64_t *)((v33 & 2040) + a1);
        *v32 = v35;
        v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33;
        *(int64_t *)v29 = v36;
        v37 = (int64_t *)(v31 + 8);
        v38 = *v37;
        v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34);
        v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1);
        *v37 = v40;
        v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38;
        *(int64_t *)(v29 + 8) = v41;
        v42 = (int64_t *)(v31 + 16);
        v43 = *v42;
        v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39);
        v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1);
        *v42 = v45;
        v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43;
        *(int64_t *)(v29 + 16) = v46;
        v47 = (int64_t *)(v31 + 24);
        v48 = *v47;
        v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44);
        v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1);
        result = v31 + 32;
        *v47 = v50;
        v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48;
        *(int64_t *)(v29 + 24) = v51;
        v29 += 32;
    }
    // 0x414d75
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x414d90 - 0x414fc4
int64_t function_414d90(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x414dd7
    int64_t v2 = a1; // 0x414df3
    int64_t * v3 = (int64_t *)v2; // 0x414df8
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x414dfb
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x414dfb
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x414dff
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x414dff
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x414e03
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x414e0a
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x414e0e
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x414e1b
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x414e1e
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x414e25
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x414e32
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x414e35
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x414e3c
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x414e49
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x414e4c
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x414e53
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x414e60
    int64_t v21 = v5 - v20; // 0x414e66
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x414e70
    uint64_t v23 = v11 - v22; // 0x414e79
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x414e84
    int64_t v25 = v14 - v24; // 0x414e8e
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x414e9d
    int64_t v27 = v23 + v25; // 0x414ea3
    int64_t v28 = v17 - v26; // 0x414ea6
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x414eb1
    int64_t v30 = v28 + v25; // 0x414eb4
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x414eca
    while (v1 != v2) {
        // 0x414df8
        v3 = (int64_t *)v2;
        v4 = (int64_t *)(v2 + 32);
        v5 = *v4 + v29;
        v6 = (int64_t *)(v2 + 56);
        v7 = *v6 + v28;
        v8 = (int64_t *)(v2 + 40);
        v9 = (int64_t *)(v2 + 48);
        v10 = *v3 - v5 + v20;
        v11 = *v8 + v27 ^ v7 / 512;
        v12 = (int64_t *)(v2 + 8);
        v13 = *v12 - v11 + v22;
        v14 = *v9 + v30 ^ 512 * v10;
        v15 = (int64_t *)(v2 + 16);
        v16 = *v15 - v14 + v24;
        v17 = v13 / 0x800000 ^ v10 + v7;
        v18 = (int64_t *)(v2 + 24);
        v19 = *v18 - v17 + v26;
        v20 = 0x8000 * v16 ^ v13 + v10;
        v21 = v5 - v20;
        *v3 = v20;
        v22 = v19 / 0x4000 ^ v16 + v13;
        v23 = v11 - v22;
        *v12 = v22;
        v24 = v19 + v16 ^ 0x100000 * v21;
        v25 = v14 - v24;
        *v15 = v24;
        v2 += 64;
        v26 = v23 / 0x20000 ^ v19 + v21;
        v27 = v23 + v25;
        v28 = v17 - v26;
        *v18 = v26;
        v29 = 0x4000 * v25 ^ v23 + v21;
        v30 = v28 + v25;
        *v8 = v27;
        *v4 = v29;
        *v9 = v30;
        *v6 = v28;
        v31 = a1;
    }
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x414ed0
    uint64_t v33 = *v32 + v28; // 0x414ed0
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x414ed4
    int64_t v35 = *v34 + v29; // 0x414ed4
    int64_t * v36 = (int64_t *)v31; // 0x414ed8
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x414ede
    int64_t v38 = *v36 + v20 - v35; // 0x414ee2
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x414ee9
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x414eed
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x414ef1
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x414ef7
    uint64_t v43 = *v39 + v22 - v41; // 0x414efe
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x414f05
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x414f09
    int64_t v46 = *v42 + v24 - v45; // 0x414f12
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x414f19
    uint64_t v48 = *v44 + v26 - v47; // 0x414f22
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x414f29
    int64_t v50 = v35 - v49; // 0x414f32
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x414f3c
    uint64_t v52 = v41 - v51; // 0x414f45
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x414f50
    int64_t result = v52 + v50; // 0x414f53
    int64_t v54 = v45 - v53; // 0x414f5a
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x414f65
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x414f69
    int64_t v57 = v54 + v52; // 0x414f6f
    int64_t v58 = v47 - v56; // 0x414f72
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x414f7d
    int64_t v60 = v58 + v54; // 0x414f80
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x414ed0
        v32 = (int64_t *)(v31 + 56);
        v33 = *v32 + v58;
        v34 = (int64_t *)(v31 + 32);
        v35 = *v34 + v59;
        v36 = (int64_t *)v31;
        v37 = (int64_t *)(v31 + 40);
        v38 = *v36 + v49 - v35;
        v39 = (int64_t *)(v31 + 8);
        v40 = (int64_t *)(v31 + 48);
        v41 = *v37 + v57 ^ v33 / 512;
        v42 = (int64_t *)(v31 + 16);
        v43 = *v39 + v51 - v41;
        v44 = (int64_t *)(v31 + 24);
        v45 = *v40 + v60 ^ 512 * v38;
        v46 = *v42 + v53 - v45;
        v47 = v43 / 0x800000 ^ v38 + v33;
        v48 = *v44 + v56 - v47;
        v49 = 0x8000 * v46 ^ v43 + v38;
        v50 = v35 - v49;
        *v36 = v49;
        v51 = v48 / 0x4000 ^ v46 + v43;
        v52 = v41 - v51;
        *v39 = v51;
        v53 = 0x100000 * v50 ^ v48 + v46;
        result = v52 + v50;
        v54 = v45 - v53;
        *v42 = v53;
        v55 = v31 + 64;
        v56 = v52 / 0x20000 ^ v50 + v48;
        v57 = v54 + v52;
        v58 = v47 - v56;
        *v44 = v56;
        v59 = 0x4000 * v54 ^ result;
        v60 = v58 + v54;
        *v37 = v57;
        *v34 = v59;
        *v40 = v60;
        *v32 = v58;
        v31 = v55;
    }
    // 0x414f9c
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x414fd0 - 0x414fde
int64_t function_414fd0(int64_t a1, int64_t a2) {
    // 0x414fd0
    int64_t v1; // 0x414fd0
    return function_410460(a1, 0, 3, v1);
}
// Address range: 0x414fe0 - 0x41505b
int64_t function_414fe0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x414fe7
    if (fileno(stream) < 0) {
        // 0x415047
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x414ffa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x41502b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x415047
            return fclose(stream);
        }
    }
    // 0x414ffc
    if ((int32_t)function_4105a0(a1, v1) == 0) {
        // 0x415047
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x415008
    int32_t v3 = *v2; // 0x415010
    int64_t result = fclose(stream); // 0x41501e
    if (v3 != 0) {
        // 0x415050
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x415020
    return result;
}
// Address range: 0x415060 - 0x4150f3
int64_t function_415060(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x415067
    int64_t result = (int64_t)file; // 0x415067
    if (file == NULL) {
        // 0x415081
        return result;
    }
    uint32_t v1 = fileno(file); // 0x415077
    if (v1 >= 3) {
        // 0x415081
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_414fd0((int64_t)v1, v2); // 0x41509a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x4150d8
        function_414fe0(result, v2);
        // 0x415081
        return 0;
    }
    // 0x41509e
    if ((int32_t)function_414fe0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, mode); // 0x4150b0
        if (v4 != NULL) {
            // 0x415081
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x4150bd
    close(fd);
    // 0x415081
    return 0;
}
// Address range: 0x415100 - 0x41515d
int64_t function_415100(int64_t a1, int64_t a2, int64_t a3) {
    // 0x415100
    return function_4025e0();
}
// Address range: 0x415160 - 0x415161
int64_t function_415160(void) {
    // 0x415160
    int64_t result; // 0x415160
    return result;
}
// Address range: 0x415170 - 0x415188
int64_t function_415170(int64_t a1, int64_t a2, int64_t a3) {
    // 0x415170
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g24);
}
// Address range: 0x415188 - 0x4151a8
int64_t function_415188(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g20; // 0x415192
    while (*(int64_t *)v1 != -1) {
        // 0x415193
        v1 -= 8;
    }
    // 0x4151a4
    return result;
}
