// Address range: 0x4021d0 - 0x4021d5
int64_t function_4021d0(void) {
    // 0x4021d0
    abort();
    // UNREACHABLE
}
// Address range: 0x4021d5 - 0x4021da
int64_t function_4021d5(void) {
    // 0x4021d5
    abort();
    // UNREACHABLE
}
// Address range: 0x4021da - 0x4021df
int64_t function_4021da(void) {
    // 0x4021da
    abort();
    // UNREACHABLE
}
// Address range: 0x4021df - 0x4021e4
int64_t function_4021df(void) {
    // 0x4021df
    abort();
    // UNREACHABLE
}
// Address range: 0x4021e4 - 0x4021e9
int64_t function_4021e4(void) {
    // 0x4021e4
    abort();
    // UNREACHABLE
}
// Address range: 0x4021e9 - 0x4021ee
int64_t function_4021e9(void) {
    // 0x4021e9
    abort();
    // UNREACHABLE
}
// Address range: 0x4021ee - 0x4021f3
int64_t function_4021ee(void) {
    // 0x4021ee
    abort();
    // UNREACHABLE
}
// Address range: 0x4021f3 - 0x4021f8
int64_t function_4021f3(void) {
    // 0x4021f3
    abort();
    // UNREACHABLE
}
// Address range: 0x4021f8 - 0x4021fd
int64_t function_4021f8(void) {
    // 0x4021f8
    abort();
    // UNREACHABLE
}
// Address range: 0x4021fd - 0x402202
int64_t function_4021fd(void) {
    // 0x4021fd
    abort();
    // UNREACHABLE
}
// Address range: 0x402202 - 0x402207
int64_t function_402202(void) {
    // 0x402202
    abort();
    // UNREACHABLE
}
// Address range: 0x402210 - 0x402950
int64_t function_402210(int64_t a1, int64_t a2) {
    // 0x402210
    function_406260(a2);
    setlocale(LC_ALL, (char *)&g16);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x402210
    function_40bb40(0x404960, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    g43 = 0;
    g44 = 0;
    *(char *)&g46 = 0;
    *(char *)&g45 = 0;
    g49 = 0;
    int64_t v2 = 0; // 0x402298
    int64_t v3 = a1 & 0xffffffff; // 0x402298
    int64_t v4 = 0; // 0x402298
    int64_t v5 = 0; // 0x402298
    int64_t v6 = 0; // 0x402298
    int64_t v7 = 0; // 0x402298
    int64_t v8; // 0x402210
    int64_t v9; // 0x402210
    int64_t v10; // 0x402210
    int64_t v11; // 0x402210
    int64_t v12; // 0x402210
    int64_t v13; // 0x402210
    int64_t v14; // 0x402210
    int64_t v15; // 0x402210
    int64_t v16; // 0x402210
    int64_t v17; // 0x402210
    int64_t v18; // bp-200, 0x402210
    char * format; // 0x402932
    int32_t v19; // 0x402210
    while (true) {
      lab_0x4022a0_2:
        // 0x4022a0
        v13 = v7;
        v12 = v6;
        v9 = v5;
        v8 = v4;
        v15 = v3;
        int64_t v20 = function_40a1b0(v15 & 0xffffffff, a2, "bdfinrst:vFLPS:T", &g2, 0, v1); // 0x4022b2
        int32_t v21 = v20; // 0x4022b7
        switch (v21) {
            case -1: {
                goto lab_0x4024fc;
            }
            case 98: {
                char * v22 = g66; // 0x4024a8
                v3 = v15;
                v4 = v8;
                v5 = v9;
                v6 = 1;
                v7 = v22 != NULL ? (int64_t)v22 : v13;
                goto lab_0x4022a0_2;
            }
            default: {
                // 0x4022c9
                v14 = v20;
                v16 = v15;
                v10 = v9;
                if (v21 > 98) {
                    if (v21 == 110) {
                        // 0x402498
                        g23 = 0;
                        v3 = v15;
                        v4 = v8;
                        v5 = v9;
                        v6 = v12;
                        v7 = v13;
                        goto lab_0x4022a0_2;
                    } else {
                        if (v21 > 110) {
                            if (v21 == 115) {
                                // 0x402488
                                g49 = 1;
                                v3 = v15;
                                v4 = v8;
                                v5 = v9;
                                v6 = v12;
                                v7 = v13;
                                goto lab_0x4022a0_2;
                            } else {
                                if (v21 > 115) {
                                    if (v21 != 116) {
                                        if (v21 != 118) {
                                            // 0x4023b9
                                            function_4032b0(1);
                                            // UNREACHABLE
                                        }
                                        // 0x40239d
                                        g44 = 1;
                                        v3 = v15;
                                        v4 = v8;
                                        v5 = v9;
                                        v6 = v12;
                                        v7 = v13;
                                        goto lab_0x4022a0_2;
                                    } else {
                                        if (v9 != 0) {
                                            // 0x402926
                                            format = dcgettext(NULL, "multiple target directories specified", 5);
                                            error(1, (int32_t)"multiple target directories specified" ^ (int32_t)"multiple target directories specified", format);
                                            return &g68;
                                        }
                                        // 0x4022ff
                                        if (__xstat(1, g66, (struct stat *)&v18) != 0) {
                                            goto lab_0x4028e5;
                                        }
                                        int64_t v23 = (int64_t)g66; // 0x402321
                                        v3 = v15;
                                        v4 = v8;
                                        v5 = v23;
                                        v6 = v12;
                                        v7 = v13;
                                        if ((v19 & 0xf000) == 0x4000) {
                                            goto lab_0x4022a0_2;
                                        } else {
                                            int64_t v24 = function_407c30(4, v23); // 0x402340
                                            error(1, (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory", dcgettext(NULL, "target %s is not a directory", 5));
                                            v14 = &g68;
                                            v16 = v24;
                                            v10 = v23;
                                            goto lab_0x402370;
                                        }
                                    }
                                } else {
                                    if (v21 != 114) {
                                        // 0x4023b9
                                        function_4032b0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x402425
                                    g48 = 1;
                                    v3 = v15;
                                    v4 = v8;
                                    v5 = v9;
                                    v6 = v12;
                                    v7 = v13;
                                    goto lab_0x4022a0_2;
                                }
                            }
                        } else {
                            if (v21 == 102) {
                                // 0x402470
                                *(char *)&g45 = 1;
                                *(char *)&g46 = 0;
                                v3 = v15;
                                v4 = v8;
                                v5 = v9;
                                v6 = v12;
                                v7 = v13;
                                goto lab_0x4022a0_2;
                            } else {
                                if (v21 != 105) {
                                    // 0x402458
                                    v17 = v15;
                                    v11 = v9;
                                    if (v21 != 100) {
                                        // 0x4023b9
                                        function_4032b0(1);
                                        // UNREACHABLE
                                    }
                                    goto lab_0x402461;
                                } else {
                                    // 0x402442
                                    *(char *)&g45 = 0;
                                    *(char *)&g46 = 1;
                                    v3 = v15;
                                    v4 = v8;
                                    v5 = v9;
                                    v6 = v12;
                                    v7 = v13;
                                    goto lab_0x4022a0_2;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x402370;
                }
            }
        }
    }
  lab_0x4024fc:;
    int32_t v25 = (int32_t)v15 - g33; // 0x402503
    char * format2; // 0x40282f
    if (v25 < 1) {
        // 0x402823
        format2 = dcgettext(NULL, "missing file operand", 5);
        error(0, (int32_t)"missing file operand" ^ (int32_t)"missing file operand", format2);
        // 0x4023b9
        function_4032b0(1);
        // UNREACHABLE
    }
    int64_t v26 = 8 * (int64_t)g33 + a2; // 0x402505
    int32_t err_num; // 0x402210
    int64_t v27; // 0x402210
    int64_t v28; // 0x402210
    int64_t v29; // 0x402210
    int64_t v30; // 0x402210
    int64_t v31; // 0x402210
    int64_t v32; // 0x402210
    int64_t v33; // 0x402210
    int32_t v34; // 0x402210
    int64_t * v35; // 0x402688
    int64_t v36; // 0x402688
    uint32_t err_num2; // 0x402701
    if (v8 != 0) {
        if (v9 != 0) {
            // 0x402884
            error(1, (int32_t)"cannot combine --target-directory and --no-target-directory" ^ (int32_t)"cannot combine --target-directory and --no-target-directory", dcgettext(NULL, "cannot combine --target-directory and --no-target-directory", 5));
            goto lab_0x4028a6;
        } else {
            // 0x4025b4
            v28 = 2;
            v31 = a2;
            v27 = 0;
            if (v25 != 2) {
                if (v25 != 1) {
                    // 0x40284c
                    function_407c30(4, *(int64_t *)(v26 + 16));
                    // 0x402867
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"extra operand %s", 5));
                    // 0x4023b9
                    function_4032b0(1);
                    // UNREACHABLE
                }
                goto lab_0x4028a6;
            } else {
                goto lab_0x402524;
            }
        }
    } else {
        int64_t v37 = v25; // 0x402503
        v28 = v37;
        v31 = a2;
        v27 = v9;
        if (v9 == 0) {
            // 0x402671
            v28 = 1;
            v31 = a2;
            v27 = (int64_t)".";
            if (v25 == 1) {
                goto lab_0x402524;
            } else {
                // 0x402680
                v35 = (int64_t *)(v26 - 8 + (0x100000000 * v37 >> 29));
                v36 = *v35;
                int64_t v38 = function_404ca0(v36, a2); // 0x402693
                int64_t v39 = -1; // 0x4026a5
                int64_t v40 = v38; // 0x4026a5
                int64_t v41 = 0; // 0x4026a5
                while (v39 != 0) {
                    int64_t v42 = v40;
                    v39--;
                    bool v43; // 0x402210
                    v40 = v42 + (v43 ? -1 : 1);
                    v41 = v39;
                    if (*(char *)v42 == (char)v8) {
                        // break -> 
                        break;
                    }
                    v41 = 0;
                }
                int64_t v44 = -2 - v41; // 0x4026b5
                v34 = 1;
                if (v44 != 0) {
                    // 0x4026bb
                    v34 = *(char *)(v38 - 1 + v44) == 47;
                }
                char * v45 = (char *)v36;
                int32_t v46; // 0x402210
                if (g23 == 0) {
                    // 0x4027a3
                    v46 = __lxstat(1, v45, (struct stat *)&v18);
                } else {
                    // 0x4026f3
                    v46 = __xstat(1, v45, (struct stat *)&v18);
                }
                // 0x4026f8
                v30 = v37;
                v33 = v36;
                if (v46 == 0) {
                    goto lab_0x402775;
                } else {
                    // 0x4026fc
                    err_num2 = *__errno_location();
                    v30 = v37;
                    v33 = v36;
                    if (err_num2 == 0) {
                        goto lab_0x402775;
                    } else {
                        if (err_num2 < 41) {
                            if ((1 << (int64_t)(err_num2 % 64) & 0x11000100004) == 0) {
                                goto lab_0x4027b4;
                            } else {
                                // 0x402727
                                v29 = v37;
                                v32 = v36;
                                err_num = err_num2;
                                if (v34 != 0) {
                                    goto lab_0x4027ed;
                                } else {
                                    goto lab_0x402732;
                                }
                            }
                        } else {
                            goto lab_0x4027b4;
                        }
                    }
                }
            }
        } else {
            goto lab_0x402524;
        }
    }
  lab_0x402370:;
    int64_t v47 = v10;
    int64_t v48 = v16;
    int32_t v49 = v14;
    if (v49 == 76) {
        // 0x4024e0
        g47 = 1;
        v3 = v48;
        v4 = v8;
        v5 = v47;
        v6 = v12;
        v7 = v13;
        goto lab_0x4022a0_2;
    } else {
        if (v49 > 76) {
            if (v49 == 83) {
                // 0x4024c8
                v3 = v48;
                v4 = v8;
                v5 = v47;
                v6 = 1;
                v7 = v13;
            } else {
                // 0x402384
                v3 = v48;
                v4 = 1;
                v5 = v47;
                v6 = v12;
                v7 = v13;
                if (v49 != 84) {
                    if (v49 != 80) {
                        // 0x4023b9
                        function_4032b0(1);
                        // UNREACHABLE
                    }
                    // 0x4024f0
                    g47 = 0;
                    v3 = v48;
                    v4 = v8;
                    v5 = v47;
                    v6 = v12;
                    v7 = v13;
                }
            }
            goto lab_0x4022a0_2;
        } else {
            // 0x4023c8
            v17 = v48;
            v11 = v47;
            switch (v49) {
                case -130: {
                    // 0x4027ad
                    function_4032b0(0);
                    // UNREACHABLE
                }
                case 70: {
                    goto lab_0x402461;
                }
                default: {
                    if (v49 != -131) {
                        // 0x4023b9
                        function_4032b0(1);
                        // UNREACHABLE
                    }
                    // 0x4023e3
                    function_408910((int64_t)g36, "ln", "GNU coreutils", (int64_t)g24, "Mike Parker", "David MacKenzie");
                    exit(0);
                    // UNREACHABLE
                }
            }
        }
    }
  lab_0x4022a0:
    // 0x4022a0
    goto lab_0x4022a0_2;
  lab_0x402461:
    // 0x402461
    g43 = 1;
    v3 = v17;
    v4 = v8;
    v5 = v11;
    v6 = v12;
    v7 = v13;
    goto lab_0x4022a0;
  lab_0x402524:;
    int32_t v50 = 0; // 0x402529
    int64_t v51 = v31; // 0x402529
    if (v12 != 0) {
        char * v52 = dcgettext(NULL, "backup type", 5); // 0x40264a
        v50 = function_404280((int64_t)v52, v13);
        v51 = v13;
    }
    // 0x40252f
    g50 = v50;
    function_403ce0(v2);
    if (g48 != 0 == g49 == 0) {
        // 0x4028c3
        error(1, (int32_t)"cannot do --relative without --symbolic" ^ (int32_t)"cannot do --relative without --symbolic", dcgettext(NULL, "cannot do --relative without --symbolic", 5));
      lab_0x4028e5:
        // 0x4028e5
        function_407c30(4, (int64_t)g66);
        error(1, *__errno_location(), dcgettext(NULL, "failed to access %s", 5));
        // 0x402926
        format = dcgettext(NULL, "multiple target directories specified", 5);
        error(1, (int32_t)"multiple target directories specified" ^ (int32_t)"multiple target directories specified", format);
        return &g68;
    }
    if (v27 == 0) {
        int64_t v53 = *(int64_t *)v26; // 0x402663
        // 0x402624
        return (function_402a30(v53, *(int64_t *)(v26 + 8)) & 0xffffffff) % 256 ^ 1;
    }
    int64_t v54 = v51; // 0x402561
    if (!((v28 == 1 | *(char *)&g45 == 0))) {
        // 0x40256c
        v54 = v51;
        if (g49 == 0 && g50 != 3) {
            int64_t v55 = function_4057d0(61, 0, 0x406190, 0x4061d0, 0x406240); // 0x402595
            g42 = v55;
            v54 = 0;
            if (v55 == 0) {
                // 0x4025a6
                function_408ca0(61);
                // UNREACHABLE
            }
        }
    }
    int64_t * v56 = (int64_t *)v26; // 0x4025e0
    int64_t v57 = v26 + 8; // 0x4025e4
    function_404ca0(*v56, v54);
    int64_t v58 = function_404e40(); // 0x4025f6
    function_404d30(v18);
    int64_t v59 = function_402a30(*v56, v58) & 1;
    free((int64_t *)v58);
    int64_t v60 = v57; // 0x402622
    int64_t v61 = v58; // 0x402622
    int64_t v62 = v59; // 0x402622
    while (v57 != v26 + 8 + (8 * v28 + 0x7fffffff8 & 0x7fffffff8)) {
        // 0x4025e0
        v56 = (int64_t *)v60;
        v57 = v60 + 8;
        function_404ca0(*v56, v61);
        v58 = function_404e40();
        function_404d30(v18);
        v59 = function_402a30(*v56, v58) & v62;
        free((int64_t *)v58);
        v60 = v57;
        v61 = v58;
        v62 = v59;
    }
    // 0x402624
    return v59 % 256 ^ 1;
  lab_0x4028a6:
    // 0x4028a6
    function_407c30(4, *(int64_t *)v26);
    // 0x402867
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing destination file operand after %s", 5));
    // 0x4023b9
    function_4032b0(1);
    // UNREACHABLE
  lab_0x402775:
    // 0x402775
    err_num = 0;
    if ((char)v34 > (char)((v19 & 0xf000) == 0x4000)) {
        goto lab_0x4027ed;
    } else {
        int64_t v63 = v33;
        int64_t v64 = v30;
        v29 = v64;
        v32 = v63;
        if ((v19 & 0xf000) != 0x4000) {
            goto lab_0x402732;
        } else {
            int64_t v65 = v64 + 0xffffffff; // 0x402793
            v28 = v65 & 0xffffffff;
            v31 = v63;
            v27 = *(int64_t *)((0x100000000 * v65 >> 29) + v26);
            goto lab_0x402524;
        }
    }
  lab_0x4027ed:
    // 0x4027ed
    function_407c30(4, v36);
    error(1, err_num, dcgettext(NULL, "target %s is not a directory", 5));
    // 0x402823
    format2 = dcgettext(NULL, "missing file operand", 5);
    error(0, (int32_t)"missing file operand" ^ (int32_t)"missing file operand", format2);
    // 0x4023b9
    function_4032b0(1);
    // UNREACHABLE
  lab_0x402732:
    // 0x402732
    v28 = 2;
    v31 = v32;
    v27 = 0;
    if ((int32_t)v29 == 2) {
        goto lab_0x402524;
    } else {
        int64_t v66 = function_407c30(4, *v35); // 0x402748
        error(1, (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory", dcgettext(NULL, "target %s is not a directory", 5));
        v30 = v66;
        v33 = (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory";
        goto lab_0x402775;
    }
  lab_0x4027b4:
    // 0x4027b4
    function_407c30(4, v36);
    error(1, err_num2, dcgettext(NULL, "failed to access %s", 5));
    err_num = 0;
    goto lab_0x4027ed;
}
// Address range: 0x402950 - 0x40297b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402950
    int64_t v1; // 0x402950
    __libc_start_main(0x402210, (int32_t)a4, (char **)&v1, (void (*)())0x40bad0, (void (*)())0x40bb30, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40297b - 0x40299a
int64_t function_40297b(void) {
    // 0x40297b
    return 0x611388;
}
// Address range: 0x40299a - 0x4029d1
int64_t function_40299a(void) {
    // 0x40299a
    return 0;
}
// Address range: 0x4029d1 - 0x402a28
int64_t function_4029d1(void) {
    // 0x4029d1
    if (g40 != 0) {
        // 0x402a27
        int64_t result; // 0x4029d1
        return result;
    }
    int64_t v1 = g41; // 0x402a04
    int64_t result2; // 0x402a16
    if (g41 >= ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x402a16
        result2 = function_40297b();
        g40 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x402a06
        v1++;
    }
    // 0x4029fa
    g41 = v1;
    // 0x402a16
    result2 = function_40297b();
    g40 = 1;
    return result2;
}
// Address range: 0x402a28 - 0x402a2d
int64_t function_402a28(void) {
    // 0x402a28
    return function_40299a();
}
// Address range: 0x402a30 - 0x4032ac
int64_t function_402a30(int64_t a1, int64_t file_path4) {
    char v1 = 0; // 0x402a50
    int64_t v2; // bp-344, 0x402a30
    if (g49 != 0) {
        goto lab_0x402a95;
    } else {
        char * v3 = (char *)a1;
        if (g47 == 0) {
            // 0x402ce8
            if (__lxstat(1, v3, (struct stat *)&v2) == 0) {
                goto lab_0x402a7e;
            } else {
                goto lab_0x402cfa;
            }
        } else {
            // 0x402a6c
            if (__xstat(1, v3, (struct stat *)&v2) != 0) {
                goto lab_0x402cfa;
            } else {
                goto lab_0x402a7e;
            }
        }
    }
  lab_0x402a95:;
    char v4 = *(char *)&g45; // 0x402a95
    char v5 = 0; // 0x402aa0
    int64_t file_path3 = 0; // 0x402aa0
    int64_t v6; // 0x402a30
    int64_t v7; // 0x402a30
    int64_t v8; // bp-200, 0x402a30
    char * file_path; // 0x402abf
    if ((*(char *)&g46 || v4) == 0 == g50 == 0) {
        goto lab_0x402aeb;
    } else {
        // 0x402aaf
        file_path = (char *)file_path4;
        if (__lxstat(1, file_path, (struct stat *)&v8) == 0) {
            char v9 = v4; // 0x402c0a
            if (g42 != 0) {
                // 0x402c0c
                if ((char)function_404e00((int64_t)g42, file_path4, &v8) != 0) {
                    // 0x403200
                    function_407b50(1, 4, a1);
                    function_407b50(0, 4, file_path4);
                    // 0x402ff0
                    error(0, 0, dcgettext(NULL, "will not overwrite just-created %s with %s", 5));
                    // 0x402be5
                    return 0;
                }
                // 0x402c24
                v9 = *(char *)&g45;
            }
            // 0x402c2c
            if (v9 == 0) {
                int64_t v10 = &v8; // 0x402aaf
                v6 = v10;
                v7 = v10;
                if (g49 != 0 || g50 == 0) {
                    goto lab_0x402c70;
                } else {
                    goto lab_0x402f6b;
                }
            } else {
                int64_t v11 = g50; // 0x402c35
                if (g50 != 0) {
                    // 0x403180
                    v6 = v11;
                    v7 = v11;
                    if (g49 != 0) {
                        goto lab_0x402c70;
                    } else {
                        goto lab_0x402f6b;
                    }
                } else {
                    // 0x402c43
                    v7 = v11;
                    if (g49 == 0) {
                        goto lab_0x402f6b;
                    } else {
                        int64_t v12 = &v2; // 0x402c50
                        int32_t v13 = __xstat(1, (char *)a1, (struct stat *)&v2); // 0x402c5d
                        v6 = v12;
                        v7 = v12;
                        if (v13 == 0) {
                            goto lab_0x402f6b;
                        } else {
                            goto lab_0x402c70;
                        }
                    }
                }
            }
        } else {
            int32_t * err_num = __errno_location(); // 0x402acf
            v5 = 0;
            file_path3 = 0;
            if (*err_num != 2) {
                // 0x4030d8
                function_407c30(4, file_path4);
                error(0, *err_num, dcgettext(NULL, "failed to access %s", 5));
                // 0x402be5
                return 0;
            }
            goto lab_0x402aeb;
        }
    }
  lab_0x402aeb:;
    int64_t v14 = a1; // 0x402af5
    int64_t v15 = 0; // 0x402af5
    int64_t v16; // 0x402e43
    int64_t v17; // 0x402e55
    int64_t v18; // 0x402e6a
    if (g48 != 0) {
        // 0x402e40
        v16 = function_404bc0();
        v17 = function_4042d0(v16, 2);
        v18 = function_4042d0(a1, 2);
        if (v17 == 0 || v18 == 0) {
            goto lab_0x403060;
        } else {
            int64_t v19 = function_408a50(0x1000); // 0x402e8b
            if ((char)function_403a10(v18, v17, v19, 0x1000) == 0) {
                // 0x403058
                free((int64_t *)v19);
                goto lab_0x403060;
            } else {
                // 0x402eb2
                free((int64_t *)v16);
                free((int64_t *)v17);
                free((int64_t *)v18);
                v14 = v19;
                v15 = v19;
                if (v19 == 0) {
                    goto lab_0x40307e;
                } else {
                    goto lab_0x402afb;
                }
            }
        }
    } else {
        goto lab_0x402afb;
    }
  lab_0x402afb:;
    int64_t v20 = (int64_t)(*(char *)&g45 | v5); // 0x402b08
    int64_t v21; // 0x402a30
    if (g49 != 0) {
        // 0x402e20
        v21 = function_403890(v14, 0xffffff9c, file_path4, v20);
    } else {
        // 0x402b12
        v21 = function_403750(0xffffff9c, v14, 0xffffff9c, file_path4, 1024 * (int32_t)(g47 != 0), v20);
    }
    // 0x402b3d
    if (v21 > -1) {
        // 0x402b45
        if (g49 == 0) {
            // 0x4030b8
            function_404d70((int64_t)g42, file_path4, &v2);
        }
        // 0x402b52
        if (g44 == 0) {
            // 0x402bd5
            free((int64_t *)file_path3);
            free((int64_t *)v15);
            // 0x402be5
            return v21 > -1;
        }
        if (file_path3 != 0) {
            // 0x402b60
            __printf_chk(1, "%s ~ ", (char *)function_407c30(4, file_path3));
        }
        int64_t v22 = function_407b50(1, 4, v14); // 0x402b94
        char v23 = g49 != 0 ? 45 : 61; // 0x402bd0
        __printf_chk(1, "%s %c> %s\n", (char *)function_407b50(0, 4, file_path4), v23, (char *)v22);
        // 0x402bd5
        free((int64_t *)file_path3);
        free((int64_t *)v15);
        // 0x402be5
        return v21 > 0xffffffffffffffff;
    }
    // 0x402d40
    function_407b50(1, 4, v14);
    function_407b50(0, 4, file_path4);
    int32_t * err_num3 = __errno_location(); // 0x402d6b
    int32_t v24 = *err_num3;
    char * format; // 0x402a30
    if (g49 == 0) {
        switch (v24) {
            case 31: {
                if (v1 != 0) {
                    // 0x403038
                    format = dcgettext(NULL, "failed to create hard link %s => %s", 5);
                    goto lab_0x402da6;
                } else {
                    // 0x4031e1
                    format = dcgettext(NULL, "failed to create hard link to %.0s%s", 5);
                    goto lab_0x402da6;
                }
            }
            case 122: {
                // 0x403098
                format = dcgettext(NULL, "failed to create hard link %s", 5);
                goto lab_0x402da6;
            }
            case 17: {
                // 0x403098
                format = dcgettext(NULL, "failed to create hard link %s", 5);
                goto lab_0x402da6;
            }
            default: {
                if ((v24 - 28 & -3) == 0) {
                    // 0x403098
                    format = dcgettext(NULL, "failed to create hard link %s", 5);
                    goto lab_0x402da6;
                } else {
                    // 0x403038
                    format = dcgettext(NULL, "failed to create hard link %s => %s", 5);
                    goto lab_0x402da6;
                }
            }
        }
    } else {
        if (v24 == 36) {
            // 0x402d97
            format = dcgettext(NULL, "failed to create symbolic link %s -> %s", 5);
            goto lab_0x402da6;
        } else {
            // 0x402d8c
            if (*(char *)v14 != 0) {
                // 0x403298
                format = dcgettext(NULL, "failed to create symbolic link %s", 5);
                goto lab_0x402da6;
            } else {
                // 0x402d97
                format = dcgettext(NULL, "failed to create symbolic link %s -> %s", 5);
                goto lab_0x402da6;
            }
        }
    }
  lab_0x402a7e:
    // 0x402a7e
    v1 = 0;
    int64_t v25; // 0x402a30
    int32_t v26; // 0x402a30
    if ((v26 & 0xf000) == 0x4000) {
        // 0x402f00
        v1 = g43;
        if (g43 != 0) {
            goto lab_0x402a95;
        } else {
            // 0x402f11
            function_407d00(0, 3, a1);
            v25 = (int64_t)"%s: hard link not allowed for directory";
            goto lab_0x402f2d;
        }
    } else {
        goto lab_0x402a95;
    }
  lab_0x402cfa:
    // 0x402cfa
    function_407c30(4, a1);
    error(0, *__errno_location(), dcgettext(NULL, "failed to access %s", 5));
    // 0x402be5
    return g49;
  lab_0x403060:
    // 0x403060
    free((int64_t *)v16);
    free((int64_t *)v17);
    free((int64_t *)v18);
    goto lab_0x40307e;
  lab_0x40307e:;
    int64_t v27 = function_408c80(a1); // 0x403081
    v14 = v27;
    v15 = v27;
    goto lab_0x402afb;
  lab_0x402c70:
    if ((v26 & 0xf000) == 0x4000) {
        // 0x4031b0
        function_407d00(0, 3, file_path4);
        v25 = (int64_t)"%s: cannot overwrite directory";
        goto lab_0x402f2d;
    } else {
        unsigned char result = *(char *)&g46; // 0x402c87
        int64_t v28 = v6; // 0x402c90
        if (result != 0) {
            // 0x403120
            function_407c30(4, file_path4);
            char * v29 = dcgettext(NULL, "%s: replace %s? ", 5); // 0x403143
            __fprintf_chk(g39, 1, v29);
            if ((char)function_408d10() == 0) {
                // 0x402be5
                return result;
            }
            // 0x403171
            *(char *)&g45 = 1;
            v28 = (int64_t)v29;
        }
        // 0x402c96
        v5 = 0;
        file_path3 = 0;
        if (g50 != 0) {
            int64_t file_path2 = function_404240(file_path4, g50, v28); // 0x402ca7
            if (rename(file_path, (char *)file_path2) != 0) {
                int32_t err_num2 = *__errno_location(); // 0x403248
                free((int64_t *)file_path2);
                v5 = 0;
                file_path3 = 0;
                if (err_num2 != 2) {
                    // 0x403258
                    function_407c30(4, file_path4);
                    error(0, err_num2, dcgettext(NULL, "cannot backup %s", 5));
                    // 0x402be5
                    return 0;
                }
            } else {
                // 0x402cc2
                v5 = file_path2 != 0;
                file_path3 = file_path2;
            }
        }
        goto lab_0x402aeb;
    }
  lab_0x402f6b:
    // 0x402f6b
    v6 = v7;
    // 0x402f7e
    v6 = v7;
    if (v2 != v8) {
        goto lab_0x402c70;
    } else {
        int64_t v30; // 0x402a30
        if (v30 == 1) {
            goto lab_0x402fac;
        } else {
            // 0x402f99
            v6 = v7;
            if ((char)function_4080f0(a1, file_path4) == 0) {
                goto lab_0x402c70;
            } else {
                goto lab_0x402fac;
            }
        }
    }
  lab_0x402da6:
    // 0x402da6
    error(0, *err_num3, format);
    if (file_path3 == 0) {
        // 0x402bd5
        free((int64_t *)file_path3);
        free((int64_t *)v15);
        // 0x402be5
        return v21 > 0xffffffffffffffff;
    }
    // 0x402dc9
    if (rename((char *)file_path3, (char *)file_path4) != 0) {
        // 0x402ddc
        function_407c30(4, file_path4);
        error(0, *err_num3, dcgettext(NULL, "cannot un-backup %s", 5));
    }
    // 0x402bd5
    free((int64_t *)file_path3);
    free((int64_t *)v15);
    // 0x402be5
    return v21 > 0xffffffffffffffff;
  lab_0x402f2d:
    // 0x402f2d
    error(0, 0, dcgettext(NULL, (char *)v25, 5));
    // 0x402be5
    return 0;
  lab_0x402fac:
    // 0x402fac
    function_407b50(1, 4, file_path4);
    function_407b50(0, 4, a1);
    // 0x402ff0
    error(0, 0, dcgettext(NULL, "%s and %s are the same file", 5));
    // 0x402be5
    return 0;
}
// Address range: 0x4032b0 - 0x40369d
int64_t function_4032b0(int64_t a1) {
    int32_t status = a1; // 0x4032c6
    if (status != 0) {
        // 0x4032ca
        __fprintf_chk(g39, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4032ef
        exit(status);
        // UNREACHABLE
    }
    // 0x4032f6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [-T] TARGET LINK_NAME   (1st form)\n  or:  %s [OPTION]... TARGET                  (2nd form)\n  or:  %s [OPTION]... TARGET... DIRECTORY     (3rd form)\n  or:  %s [OPTION]... -t DIRECTORY TARGET...  (4th form)\n", 5));
    fputs_unlocked(dcgettext(NULL, "In the 1st form, create a link to TARGET with the name LINK_NAME.\nIn the 2nd form, create a link to TARGET in the current directory.\nIn the 3rd and 4th forms, create links to each TARGET in DIRECTORY.\nCreate hard links by default, symbolic links with --symbolic.\nBy default, each destination (name of new link) should not already exist.\nWhen creating hard links, each TARGET must exist.  Symbolic links\ncan hold arbitrary text; if later resolved, a relative link is\ninterpreted in relation to its parent directory.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --backup[=CONTROL]      make a backup of each existing destination file\n  -b                          like --backup but does not accept an argument\n  -d, -F, --directory         allow the superuser to attempt to hard link\n                                directories (note: will probably fail due to\n                                system restrictions, even for the superuser)\n  -f, --force                 remove existing destination files\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "  -i, --interactive           prompt whether to remove destinations\n  -L, --logical               dereference TARGETs that are symbolic links\n  -n, --no-dereference        treat LINK_NAME as a normal file if\n                                it is a symbolic link to a directory\n  -P, --physical              make hard links directly to symbolic links\n  -r, --relative              create symbolic links relative to link location\n  -s, --symbolic              make symbolic links instead of hard links\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "  -S, --suffix=SUFFIX         override the usual backup suffix\n  -t, --target-directory=DIRECTORY  specify the DIRECTORY in which to create\n                                the links\n  -T, --no-target-directory   treat LINK_NAME as a normal file always\n  -v, --verbose               print name of each linked file\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "\nUsing -s ignores -L and -P.  Otherwise, the last option specified controls\nbehavior when a TARGET is a symbolic link, defaulting to %s.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x40347d
    bool v2; // 0x4032b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x403500
    int64_t v6 = *(int64_t *)v5; // 0x403504
    int64_t v7 = 3; // 0x40350a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"ln";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x403516
        char v11 = *(char *)v9; // 0x403516
        char v12 = v11; // 0x403516
        bool v13 = false; // 0x403516
        while (v10 == v11) {
            // 0x40350c
            v7--;
            int64_t v14 = v9 + v3; // 0x403516
            int64_t v15 = v8 + v3; // 0x403516
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
            // break -> 0x403522
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x403522
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403634;
        } else {
            // 0x40361e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403673
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403584;
            } else {
                goto lab_0x403634;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403584;
        } else {
            // 0x40356a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403673
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403584;
            } else {
                goto lab_0x403584;
            }
        }
    }
  lab_0x403634:
    // 0x403634
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4035c4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4032ef
    exit(status);
    // UNREACHABLE
  lab_0x403584:
    // 0x403584
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4035c4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4032ef
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4036a0 - 0x4036b8
int64_t function_4036a0(int64_t path2, int64_t a2) {
    int32_t fd2 = *(int32_t *)(a2 + 16); // 0x4036a6
    int64_t path1 = *(int64_t *)(a2 + 8); // 0x4036a9
    int32_t flag = *(int32_t *)(a2 + 20); // 0x4036ad
    int64_t fd; // 0x4036a0
    return linkat((int32_t)fd, (char *)path1, fd2, (char *)path2, flag);
}
// Address range: 0x4036c0 - 0x403724
int64_t function_4036c0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_404ca0(a1, v1) - a1; // 0x4036cf
    uint64_t size = v2 + 9; // 0x4036d2
    int64_t result = v1; // 0x4036e0
    if (size >= 257) {
        int64_t * mem = malloc((int32_t)size); // 0x4036e2
        result = (int64_t)mem;
        if (mem == NULL) {
            // 0x403714
            return 0;
        }
    }
    int64_t * v3 = mempcpy((int64_t *)result, (int64_t *)a1, (int32_t)v2); // 0x4036f8
    *v3 = 0x5858585858587543;
    *(char *)((int64_t)v3 + 8) = 0;
    // 0x403714
    return result;
}
// Address range: 0x403730 - 0x403741
int64_t function_403730(int64_t path2, int64_t a2) {
    uint32_t path1 = *(int32_t *)(a2 + 8); // 0x403736
    return symlinkat((char *)(int64_t)path1, path1, (char *)path2);
}
// Address range: 0x403750 - 0x403885
int64_t function_403750(int64_t fd, int64_t path1, int64_t a3, int64_t a4, int32_t flag, int64_t a6) {
    int32_t fd2 = a3; // 0x403774
    char * path2 = (char *)a4; // 0x403774
    uint32_t v1 = linkat((int32_t)fd, (char *)path1, fd2, path2, flag); // 0x403774
    int64_t result = v1; // 0x40377e
    if ((char)a6 != 1 || v1 == 0) {
        // 0x403794
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x40378a
    if (*v2 != 17) {
        // 0x403794
        return result;
    }
    // 0x4037b0
    int64_t v3; // bp-312, 0x403750
    int64_t v4 = function_4036c0(a4, &v3); // 0x4037bd
    if (v4 == 0) {
        // 0x403794
        return 0xffffffff;
    }
    int64_t v5 = 0x100000000 * fd >> 32; // bp-344, 0x4037e3
    int64_t v6 = function_4082d0(v4, 0, &v5, 0x4036a0, 6); // 0x4037f6
    int64_t v7 = 0x100000000 * (int64_t)v2 >> 32; // 0x4037fb
    int32_t v8; // 0x403750
    if ((int32_t)v6 == 0) {
        char * path = (char *)v4; // 0x40384f
        int32_t v9 = 0; // 0x40385e
        if (renameat(fd2, path, fd2, path2) != 0) {
            // 0x403860
            v9 = *(int32_t *)v7;
        }
        // 0x403863
        unlinkat(fd2, path, 0);
        v8 = v9;
    } else {
        // 0x403804
        v8 = *(int32_t *)v7;
    }
    // 0x403807
    if (v4 != (int64_t)&v3) {
        // 0x403811
        free((int64_t *)v4);
    }
    int64_t result2 = 1; // 0x40382b
    if (v8 != 0) {
        // 0x403831
        *(int32_t *)v7 = v8;
        result2 = 0xffffffff;
    }
    // 0x403794
    return result2;
}
// Address range: 0x403890 - 0x403990
int64_t function_403890(int64_t path1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t fd = a2; // 0x4038ac
    char * path2 = (char *)a3; // 0x4038ac
    uint32_t v1 = symlinkat((char *)path1, fd, path2); // 0x4038ac
    int64_t result = v1; // 0x4038b1
    if ((char)a4 != 1 || v1 == 0) {
        // 0x4038ca
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x4038bd
    if (*v2 != 17) {
        // 0x4038ca
        return result;
    }
    // 0x4038e0
    int64_t v3; // bp-312, 0x403890
    int64_t v4 = function_4036c0(a3, &v3); // 0x4038eb
    if (v4 == 0) {
        // 0x4038ca
        return 0xffffffff;
    }
    int64_t v5 = &v3; // 0x4038e0
    int64_t v6 = path1; // bp-328, 0x40390f
    int32_t v7; // 0x403890
    if ((int32_t)function_4082d0(v4, 0, &v6, 0x403730, 6) == 0) {
        char * path = (char *)v4; // 0x40394a
        if (renameat(fd, path, fd, path2) == 0) {
            // 0x403953
            if (v4 != v5) {
                // 0x403958
                free((int64_t *)v4);
            }
            // 0x4038ca
            return 1;
        }
        // 0x403968
        unlinkat(fd, path, 0);
        v7 = *v2;
    } else {
        // 0x403920
        v7 = *v2;
    }
    // 0x403923
    if (v4 != v5) {
        // 0x403928
        free((int64_t *)v4);
    }
    int64_t result2 = 1; // 0x403933
    if (v7 != 0) {
        // 0x403979
        *v2 = v7;
        result2 = 0xffffffff;
    }
    // 0x4038ca
    return result2;
}
// Address range: 0x403990 - 0x403a07
int64_t function_403990(int64_t str, int64_t * a2, int64_t * a3) {
    if (a2 == NULL) {
        // 0x4039f0
        fputs_unlocked((char *)str, g36);
        return 0;
    }
    int32_t len = strlen((char *)str); // 0x4039a9
    uint64_t v1 = (int64_t)len; // 0x4039a9
    if ((int64_t)a3 <= v1) {
        // 0x4039bc
        return 1;
    }
    // 0x4039c8
    memcpy(a2, (int64_t *)str, len + 1);
    *a2 = v1 + str;
    *a3 = 1;
    return 0;
}
// Address range: 0x403a10 - 0x403c07
int64_t function_403a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a2 + 1); // 0x403a18
    char v2 = *(char *)(a1 + 1); // 0x403a1d
    int64_t v3 = a4; // bp-40, 0x403a22
    int64_t v4 = a3; // bp-32, 0x403a2a
    char v5 = a2;
    if (v5 == 0 || v1 == 47 != (v2 == 47)) {
        // 0x403b1d
        return 0;
    }
    char v6 = a1;
    bool result = v6 == 0 | v5 != v6;
    if (result) {
        // 0x403b1d
        return 0;
    }
    int64_t v7 = v5 == 47 ? 0x100000001 : 0;
    int64_t v8 = v7 % 2; // 0x403a9e
    char v9 = v2; // 0x403aac
    int64_t v10 = 1; // 0x403aac
    int64_t v11 = v7; // 0x403aac
    int64_t v12 = v8; // 0x403aac
    bool v13 = v2 == 0; // 0x403aac
    int64_t v14; // 0x403a10
    int64_t v15; // 0x403a10
    bool v16; // 0x403a10
    int64_t v17; // 0x403a10
    char v18; // 0x403a10
    if (v1 != 0) {
        int64_t v19 = 2; // 0x403a73
        v16 = v2 == 0;
        v15 = v8;
        v17 = v7;
        v14 = 1;
        v18 = v1;
        if (v2 != 0 == v1 == v2) {
            char v20 = *(char *)(v19 + a2); // 0x403a82
            char v21 = *(char *)(v19 + a1); // 0x403a87
            int64_t v22 = v19 + 0x100000000; // 0x403a9a
            int64_t v23 = v22 & 0xffffffff; // 0x403a9a
            int64_t v24 = v1 == 47 ? v22 : v8;
            int64_t v25 = v24 & 0xffffffff; // 0x403a9e
            v9 = v21;
            v10 = v23;
            v11 = v24;
            v12 = v25;
            v13 = v21 == 0;
            while (v20 != 0) {
                // 0x403a70
                v19++;
                char v26 = v20; // 0x403a73
                v16 = v21 == 0;
                v15 = v25;
                v17 = v24;
                v14 = v23;
                v18 = v20;
                if (v21 != 0 != (v20 == v21)) {
                    goto lab_0x403b30;
                }
                v20 = *(char *)(v19 + a2);
                v21 = *(char *)(v19 + a1);
                v22 = v19 + 0x100000000;
                v23 = v22 & 0xffffffff;
                v24 = v26 == 47 ? v22 : v25;
                v25 = v24 & 0xffffffff;
                v9 = v21;
                v10 = v23;
                v11 = v24;
                v12 = v25;
                v13 = v21 == 0;
            }
            goto lab_0x403aae;
        } else {
            goto lab_0x403b30;
        }
    } else {
        goto lab_0x403aae;
    }
  lab_0x403b30:;
    int64_t v27 = v17; // 0x403b34
    int64_t v28 = v15; // 0x403b34
    int64_t v29 = v14; // 0x403b34
    if (v16 == v18 == 47) {
        goto lab_0x403ac5;
    } else {
        goto lab_0x403ac1;
    }
  lab_0x403aae:
    // 0x403aae
    v27 = v11;
    v28 = v12;
    v29 = v10;
    if (v9 == 47 || v13) {
        goto lab_0x403ac5;
    } else {
        goto lab_0x403ac1;
    }
  lab_0x403ac5:;
    int64_t v30 = 0x100000000 * v29 >> 32; // 0x403ac5
    int64_t v31 = v30 + a2; // 0x403ac8
    char v32 = *(char *)v31; // 0x403ad0
    char v33 = v32; // 0x403ad6
    int64_t v34 = v31; // 0x403ad6
    if (v32 == 47) {
        int64_t v35 = v31 + 1; // 0x403ad8
        v33 = *(char *)v35;
        v34 = v35;
    }
    int64_t v36 = v30 + a1; // 0x403acc
    int64_t v37 = v36 + (int64_t)(*(char *)v36 == 47); // 0x403ae8
    int64_t v38; // 0x403a10
    if (v33 != 0) {
        int64_t v39 = function_403990((int64_t)"..", &v4, &v3) & 0xffffffff; // 0x403b52
        char v40 = *(char *)v34; // 0x403b55
        int64_t v41 = v39; // 0x403b5b
        if (v40 != 0) {
            int64_t v42 = v39; // 0x403bbb
            int64_t v43; // 0x403ba5
            if (v40 == 47) {
                // 0x403bbd
                v43 = function_403990((int64_t)"/..", &v4, &v3);
                v42 = (v43 | v39) & 0xffffffff;
            }
            int64_t v44 = v34 + 1; // 0x403bad
            char v45 = *(char *)v44; // 0x403bb1
            v41 = v42;
            int64_t v46 = v44; // 0x403bb7
            while (v45 != 0) {
                int64_t v47 = v42;
                v42 = v47;
                if (v45 == 47) {
                    // 0x403bbd
                    v43 = function_403990((int64_t)"/..", &v4, &v3);
                    v42 = (v43 | v47) & 0xffffffff;
                }
                // 0x403bad
                v44 = v46 + 1;
                v45 = *(char *)v44;
                v41 = v42;
                v46 = v44;
            }
        }
        // 0x403b60
        v38 = v41;
        if (*(char *)v37 != 0) {
            int64_t v48 = function_403990((int64_t)"/", &v4, &v3); // 0x403b72
            int64_t v49 = function_403990(v37, &v4, &v3); // 0x403b84
            v38 = (v48 | v41 | v49) & 0xffffffff;
        }
    } else {
        int64_t v50 = *(char *)v37 == 0 ? (int64_t)"." : v37; // 0x403aff
        v38 = function_403990(v50, &v4, &v3) & 0xffffffff;
    }
    // 0x403b0e
    if ((char)v38 != 0) {
        // 0x403bc0
        error(0, ENAMETOOLONG, "%s", dcgettext(NULL, "generating relative path", 5));
    }
    // 0x403b1d
    return v38 & 0xffffffff ^ 1;
  lab_0x403ac1:
    // 0x403ac1
    v29 = v28;
    if ((int32_t)v27 == 0) {
        // 0x403b1d
        return result;
    }
    goto lab_0x403ac5;
}
// Address range: 0x403c10 - 0x403cde
int64_t function_403c10(int64_t path, int64_t a2) {
    int64_t v1 = function_404ca0(path, a2); // 0x403c24
    uint64_t result = function_404d00(v1); // 0x403c2f
    if (result < 15) {
        // 0x403c3a
        return result;
    }
    int16_t * v2 = (int16_t *)v1; // 0x403c55
    *v2 = 46;
    int32_t * v3 = __errno_location(); // 0x403c61
    *v3 = 0;
    int32_t v4 = pathconf((char *)path, _PC_NAME_MAX); // 0x403c77
    int64_t result2 = v4; // 0x403c77
    int64_t v5; // 0x403c10
    if (v4 < 0) {
        // 0x403cd0
        v5 = 255;
        if (*v3 != 0) {
            goto lab_0x403c84;
        } else {
            // 0x403c81
            v5 = result2;
            goto lab_0x403c84;
        }
    } else {
        // 0x403c81
        v5 = result2;
        goto lab_0x403c84;
    }
  lab_0x403c84:;
    uint64_t v6 = v5;
    if (result <= v6) {
        // 0x403c3a
        return result2;
    }
    int64_t v7 = a2 + path; // 0x403c8e
    uint64_t result3 = v7 - v1; // 0x403c95
    *(char *)(result3 >= v6 ? v1 - 1 + v6 : v7) = 126;
    *(char *)((result3 >= v6 ? v6 : result3 + 1) + v1) = 0;
    return result3;
}
// Address range: 0x403ce0 - 0x403d34
int64_t function_403ce0(int64_t a1) {
    int64_t result = a1; // 0x403ce7
    int64_t result2; // 0x403ce0
    if (a1 == 0) {
        char * env_val = getenv("SIMPLE_BACKUP_SUFFIX"); // 0x403d25
        result = (int64_t)env_val;
        result2 = result;
        if (env_val == NULL) {
            // 0x403cee
            g51 = (char *)&g3;
            return result;
        }
    }
    char * v1 = (char *)result; // 0x403ce9
    if (*v1 == 0) {
        // 0x403cee
        g51 = (char *)&g3;
        return result2;
    }
    // 0x403d00
    int64_t v2; // 0x403ce0
    int64_t result3 = function_404ca0(result, v2); // 0x403d03
    if (result3 != result) {
        // 0x403cee
        g51 = (char *)&g3;
        return result3;
    }
    // 0x403d0d
    g51 = v1;
    return result3;
}
// Address range: 0x403d40 - 0x404201
int64_t function_403d40(int64_t a1, int64_t a2, int32_t a3) {
    int64_t str = function_404ca0(a1, a2); // 0x403d5e
    int32_t len = strlen((char *)str); // 0x403d69
    int64_t v1 = (int64_t)g51; // 0x403d71
    int64_t str2 = v1; // 0x403d83
    if (g51 == NULL) {
        // 0x4041f0
        function_403ce0(v1);
        str2 = (int64_t)g51;
    }
    int64_t v2 = str - a1; // 0x403d6e
    int64_t v3 = len + (int32_t)v2; // 0x403d8e
    uint64_t v4 = (int64_t)strlen((char *)str2) + 1; // 0x403d93
    int64_t v5 = v3 + 1; // 0x403d9b
    int32_t size = (int32_t)((v4 >= 9 ? v4 : 9) + v5); // 0x403dc0
    int64_t * mem = malloc(size); // 0x403dc0
    int64_t result = (int64_t)mem; // 0x403dc0
    if (mem == NULL) {
        // 0x40409d
        return result;
    }
    int32_t v6 = v4; // 0x403d9f
    int64_t v7 = v3 + 2;
    int64_t v8 = 0x100000000 * a2 >> 32;
    int64_t dirp2 = 0;
    int64_t v9 = v2; // 0x403d40
    int64_t result2 = result;
    struct __dirstream * v10; // 0x403d40
    int64_t v11; // 0x403d40
    int64_t v12; // 0x403d40
    int64_t v13; // 0x403d40
    int64_t v14; // 0x403d40
    int64_t v15; // 0x403d40
    int64_t v16; // 0x403d40
    int64_t v17; // 0x403d40
    int64_t v18; // 0x403d40
    int64_t v19; // 0x403d40
    int32_t v20; // 0x403de6
    int64_t v21; // 0x403df8
    while (true) {
      lab_0x403dd4:
        // 0x403dd4
        v15 = result2;
        v14 = v9;
        int64_t v22 = dirp2;
        v18 = v8;
        memcpy((int64_t *)v15, (int64_t *)a1, (int32_t)v5);
        v20 = v18;
        if (v20 == 1) {
            // 0x4040c0
            memcpy((int64_t *)(v15 + v3), (int64_t *)g51, v6);
            v19 = v18;
            v13 = v22;
            v17 = v15;
            goto lab_0x40402b;
        } else {
            int64_t v23 = v15 + v14; // 0x403df1
            v21 = function_404d00(v23);
            if (v22 == 0) {
                int16_t * v24 = (int16_t *)v23; // 0x40412d
                int16_t v25 = *v24; // 0x40412d
                *v24 = 46;
                int64_t v26 = function_404b20(); // 0x40413b
                int64_t v27 = v21 + v23; // 0x404140
                if (v26 == 0) {
                    // 0x4041a0
                    __errno_location();
                    *v24 = v25;
                    *(int32_t *)v27 = 0x7e317e2e;
                    *(char *)(v27 + 4) = 0;
                    v12 = 0;
                    v16 = v15;
                    goto lab_0x404010;
                } else {
                    // 0x40414c
                    *v24 = v25;
                    *(int32_t *)v27 = 0x7e317e2e;
                    *(char *)(v27 + 4) = 0;
                    v10 = (struct __dirstream *)v26;
                    v11 = v26;
                    goto lab_0x403e11;
                }
            } else {
                struct __dirstream * dirp = (struct __dirstream *)v22;
                rewinddir(dirp);
                v10 = dirp;
                v11 = v22;
                goto lab_0x403e11;
            }
        }
    }
  lab_0x4041d8_2:
    // 0x4041d8
    if (dirp2 != 0) {
        // 0x4041e1
        closedir((struct __dirstream *)dirp2);
    }
    // 0x40409d
    return result2;
  lab_0x404010:;
    int64_t v28 = v16;
    v19 = v18;
    v13 = v12;
    v17 = v28;
    int64_t v29 = v28; // 0x403d40
    int64_t v30 = v12; // 0x403d40
    int64_t v31 = v28; // 0x403d40
    int64_t v32 = v12; // 0x403d40
    int64_t v33 = v18; // 0x403d40
    int64_t * v34; // 0x403d40
    int64_t v35; // 0x403d40
    switch ((int32_t)v35) {
        case 2: {
            goto lab_0x4040e0;
        }
        case 3: {
            // 0x404168
            v34 = (int64_t *)v28;
          lab_0x404168:
            // 0x404168
            free(v34);
            *__errno_location() = 12;
            // 0x40409d
            return 0;
        }
        case 1: {
            goto lab_0x404110;
        }
        default: {
            goto lab_0x40402b;
        }
    }
  lab_0x403f8a:;
    // 0x403f8a
    int64_t v36; // 0x403d40
    int64_t v37 = v36;
    int32_t v38; // 0x403d40
    int32_t v39 = v38;
    int64_t v40 = v37 + v3; // 0x403f9e
    *(int16_t *)v40 = 0x7e2e;
    int64_t v41 = v40 + 2; // 0x403fa4
    *(char *)v41 = 48;
    uint64_t v42; // 0x403d40
    int64_t str4; // 0x403e7d
    int64_t v43; // 0x403f14
    int64_t v44 = v42 - 1 + (int64_t)memcpy((int64_t *)(v41 + v43), (int64_t *)str4, (int32_t)v42 + 2); // 0x403fc9
    char * v45 = (char *)v44;
    char v46 = *v45; // 0x403fc9
    int64_t v47 = v44; // 0x403fd4
    char * v48 = v45; // 0x403fd4
    char v49 = v46; // 0x403fd4
    if (v46 == 57) {
        *(char *)v47 = 48;
        int64_t v50 = v47 - 1; // 0x403fe3
        char * v51 = (char *)v50;
        char v52 = *v51; // 0x403fe7
        v47 = v50;
        v48 = v51;
        v49 = v52;
        while (v52 == 57) {
            // 0x403fe0
            *(char *)v47 = 48;
            v50 = v47 - 1;
            v51 = (char *)v50;
            v52 = *v51;
            v47 = v50;
            v48 = v51;
            v49 = v52;
        }
    }
    // 0x403fef
    *v48 = v49 + 1;
    struct __dirstream * dirp3; // 0x403d40
    struct dirent * v53 = readdir(dirp3); // 0x403ffa
    int64_t v54; // 0x403d40
    v12 = v54;
    v16 = v37;
    if (v53 == NULL) {
        // break (via goto) -> 0x404010
        goto lab_0x404010;
    }
    // 0x403e49
    int64_t v55; // 0x403f21
    int32_t v56 = v55;
    int64_t str3 = (int64_t)v53 + 19; // 0x403e49
    int32_t v57 = v56; // 0x403e5a
    int32_t v58 = v39; // 0x403e5a
    int64_t v59 = v43; // 0x403e5a
    int64_t v60 = v37; // 0x403e5a
    uint64_t v61; // 0x403e29
    if (v61 > (int64_t)strlen((char *)str3)) {
        // break -> 0x403e38
        goto lab_0x403e38_2;
    }
    // 0x403e5c
    int32_t n; // 0x403d40
    int32_t memcmp_rc = memcmp((int64_t *)(v37 + v14), (int64_t *)str3, n); // 0x403e6f
    v57 = v56;
    v58 = v39;
    v59 = v43;
    v60 = v37;
    int32_t v62 = v56; // 0x403e76
    int32_t v63 = v39; // 0x403e76
    int64_t v64 = v43; // 0x403e76
    int64_t v65 = v37; // 0x403e76
    int64_t v66 = str3; // 0x403e76
    if (memcmp_rc != 0) {
        // break -> 0x403e38
        goto lab_0x403e38_2;
    }
    goto lab_0x403e78;
  lab_0x403f5d:;
    // 0x403f5d
    int64_t v91; // 0x403d40
    int32_t v92 = v91;
    int64_t v67; // 0x403d40
    int64_t * v93 = (int64_t *)v67;
    int64_t * mem2 = realloc(v93, v92); // 0x403f6f
    v38 = v92;
    v36 = (int64_t)mem2;
    v34 = v93;
    if (mem2 == NULL) {
        goto lab_0x404168;
    }
    goto lab_0x403f8a;
  lab_0x40402b:
    // 0x40402b
    result2 = v17;
    dirp2 = v13;
    if ((char)a3 == 0) {
        // break -> 0x4041d8
        goto lab_0x4041d8_2;
    }
    // 0x404036
    v8 = v19;
    int64_t v94; // 0x403d40
    int64_t v95; // 0x403d40
    if (dirp2 == 0) {
        goto lab_0x4040b0;
    } else {
        int32_t v96 = dirfd((struct __dirstream *)dirp2); // 0x40403e
        v94 = result2 + v14;
        v95 = v96;
        v9 = v14;
        if (v96 < 0) {
            goto lab_0x4040b0;
        } else {
            goto lab_0x40404d;
        }
    }
  lab_0x4040b0:
    // 0x4040b0
    v94 = result2;
    v95 = 0xffffff9c;
    v9 = 0;
    goto lab_0x40404d;
  lab_0x403e11:
    // 0x403e11
    v54 = v11;
    dirp3 = v10;
    struct dirent * v101 = readdir(dirp3); // 0x403e3b
    v29 = v15;
    v30 = v54;
    if (v101 == NULL) {
        goto lab_0x4040e0;
    } else {
        // 0x403e49
        v61 = v21 + 4;
        n = (int32_t)v21 + 2;
        int64_t v70 = n;
        struct dirent * v102 = v101; // 0x403e3b
        int64_t v103 = v15;
        int64_t v104 = 2;
        int32_t v105 = size;
        int32_t v106 = 1;
        while (true) {
            int32_t v107 = v106;
            int32_t v108 = v105;
            int64_t v109 = v104;
            int64_t v110 = v103;
            int64_t str5 = (int64_t)v102 + 19; // 0x403e49
            v57 = v107;
            v58 = v108;
            v59 = v109;
            v60 = v110;
            if (v61 <= (int64_t)strlen((char *)str5)) {
                int32_t memcmp_rc3 = memcmp((int64_t *)(v110 + v14), (int64_t *)str5, n); // 0x403e6f
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
                      lab_0x403e78:
                        // 0x403e78
                        v67 = v65;
                        int64_t v68 = v64;
                        int32_t v69 = v63;
                        int32_t n2 = v62;
                        str4 = v66 + v70;
                        char v71 = *(char *)str4; // 0x403e80
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if (v71 >= 58) {
                            // break -> 0x403e38
                            break;
                        }
                        int64_t v72 = str4 + 1; // 0x403e8b
                        char v73 = *(char *)v72; // 0x403e8b
                        int64_t v74 = v71 == 57; // 0x403e96
                        int64_t v75 = (int64_t)v73 & 0xffffffff; // 0x403e9a
                        int64_t v76 = v75; // 0x403ea2
                        int64_t v77 = v74; // 0x403ea2
                        int64_t v78 = v75; // 0x403ea2
                        int64_t v79 = 1; // 0x403ea2
                        int64_t v80 = v74; // 0x403ea2
                        if (v73 == 57 || (int32_t)v73 < 57) {
                            int64_t v81 = 2; // 0x403ead
                            char v82 = *(char *)(v81 + str4); // 0x403eb1
                            int64_t v83 = v77 & (int64_t)((char)v76 == 57);
                            int64_t v84 = (int64_t)v82 & 0xffffffff; // 0x403eb8
                            int64_t v85 = v81; // 0x403ec0
                            v77 = v83;
                            v78 = v84;
                            v79 = v81;
                            v80 = v83;
                            while (v82 == 57 || (int32_t)v82 < 57) {
                                // 0x403ea8
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
                        // 0x403ec2
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if ((char)v78 != 126) {
                            // break -> 0x403e38
                            break;
                        }
                        // 0x403eca
                        v42 = v79;
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if (*(char *)(v42 + v72) != 0) {
                            // break -> 0x403e38
                            break;
                        }
                        int64_t v86 = v80;
                        uint64_t v87 = (int64_t)n2; // 0x403ed5
                        int64_t v88 = v86; // 0x403edd
                        if (v42 <= v87) {
                            // 0x403edf
                            v57 = n2;
                            v58 = v69;
                            v59 = v68;
                            v60 = v67;
                            if (v42 != v87) {
                                // break -> 0x403e38
                                break;
                            }
                            int32_t memcmp_rc2 = memcmp((int64_t *)(v7 + v67), (int64_t *)str4, n2); // 0x403efc
                            v57 = n2;
                            v58 = v69;
                            v59 = v68;
                            v60 = v67;
                            v88 = v86 % 256;
                            if (memcmp_rc2 >= 0 == (memcmp_rc2 != 0)) {
                                // break -> 0x403e38
                                break;
                            }
                        }
                        // 0x403f14
                        v43 = v88 % 256;
                        v55 = v43 + v42;
                        int64_t v89 = v3 + 4 + v55; // 0x403f2a
                        v38 = v69;
                        v36 = v67;
                        if (v89 > (int64_t)v69) {
                            int64_t v90 = 2 * v89; // 0x403f46
                            if (v90 < 0) {
                                // 0x404188
                                v91 = v89;
                                goto lab_0x403f5d;
                            } else {
                                // 0x403f4f
                                v91 = v90;
                                if (v89 < 0) {
                                    // 0x404188
                                    v91 = v89;
                                    goto lab_0x403f5d;
                                } else {
                                    goto lab_0x403f5d;
                                }
                            }
                        } else {
                            goto lab_0x403f8a;
                        }
                    }
                }
            }
          lab_0x403e38_2:
            // 0x403e38
            v103 = v60;
            v104 = v59;
            v105 = v58;
            v106 = v57;
            v102 = readdir(dirp3);
            v12 = v54;
            v16 = v103;
            if (v102 == NULL) {
                // break -> 0x404010
                break;
            }
        }
        goto lab_0x404010;
    }
  lab_0x40404d:
    // 0x40404d
    if ((int32_t)function_407ea0(0xffffff9c, a1, v95, v94, (int64_t)((int32_t)v8 != 1)) == 0) {
        // break -> 0x4041d8
        goto lab_0x4041d8_2;
    }
    int32_t * v97 = __errno_location(); // 0x404070
    int32_t v98 = *v97; // 0x404075
    if (v98 != 17) {
        if (dirp2 != 0) {
            // 0x404088
            closedir((struct __dirstream *)dirp2);
        }
        // 0x404090
        free((int64_t *)result2);
        *v97 = v98;
        // 0x40409d
        return 0;
    }
    goto lab_0x403dd4;
  lab_0x4040e0:;
    int64_t v99 = v30;
    int64_t v100 = v29;
    v31 = v100;
    v32 = v99;
    v33 = v18;
    if (v20 == 2) {
        // 0x4040e7
        memcpy((int64_t *)(v100 + v3), (int64_t *)g51, v6);
        v31 = v100;
        v32 = v99;
        v33 = 1;
    }
    goto lab_0x404110;
  lab_0x404110:
    // 0x404110
    function_403c10(v31, v3);
    v19 = v33;
    v13 = v32;
    v17 = v31;
    goto lab_0x40402b;
}
// Address range: 0x404210 - 0x40423c
int64_t function_404210(void) {
    // 0x404210
    int64_t v1; // 0x404210
    int64_t v2 = function_40a670(v1, v1, g6, (int64_t *)&g5, 4, g34); // 0x40422b
    return (int64_t)*(int32_t *)(4 * v2 + (int64_t)&g5);
}
// Address range: 0x404240 - 0x40425a
int64_t function_404240(int64_t a1, int32_t a2, int64_t a3) {
    int64_t result = function_403d40(a1, (int64_t)a2, 0); // 0x404246
    if (result != 0) {
        // 0x404250
        return result;
    }
    // 0x404255
    function_408ca0(a1);
    // UNREACHABLE
}
// Address range: 0x404260 - 0x404272
int64_t function_404260(int64_t a1, int64_t a2) {
    // 0x404260
    if (a2 == 0) {
        // 0x40426a
        return 2;
    }
    int64_t v1; // 0x404260
    if ((char)v1 != 0) {
        // 0x404270
        return function_404210();
    }
    // 0x40426a
    return 2;
}
// Address range: 0x404280 - 0x4042c1
int64_t function_404280(int64_t a1, int64_t a2) {
    // 0x404280
    if (a2 != 0) {
        int64_t v1; // 0x404280
        if ((char)v1 != 0) {
            // 0x4042bc
            return function_404210();
        }
    }
    char * env_val = getenv("VERSION_CONTROL"); // 0x404293
    if (env_val == NULL) {
        // 0x4042a2
        return 2;
    }
    // 0x40429d
    if (*env_val != 0) {
        // 0x4042bc
        return function_404210();
    }
    // 0x4042a2
    return 2;
}
// Address range: 0x4042d0 - 0x404943
int64_t function_4042d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    uint32_t v2 = (int32_t)a2;
    uint32_t v3 = v2 % 4; // 0x4042e9
    if (a1 == 0 || (v2 + 3 & v3) != 0) {
        // 0x404780
        *__errno_location() = 22;
        // 0x4045ce
        return 0;
    }
    int64_t v4; // 0x4042d0
    int64_t v5; // 0x4042d0
    int64_t v6; // 0x4042d0
    switch ((char)a1) {
        case 0: {
            // 0x404841
            *__errno_location() = 2;
            // 0x4045ce
            return 0;
        }
        case 47: {
            int64_t v7 = function_408a50(0x1000); // 0x404495
            *(char *)v7 = 47;
            v6 = v7 + 1;
            v5 = v7 + 0x1000;
            v4 = v7;
            // break -> 0x404345
            break;
        }
        default: {
            int64_t str = function_408ce0(a1, a2); // 0x404317
            if (str == 0) {
                // 0x4045ce
                return 0;
            }
            int32_t len = strlen((char *)str); // 0x40432b
            int64_t v8 = len; // 0x40432b
            if (len < 0x1000) {
                int64_t v9 = function_408ab0(str, 0x1000); // 0x40485c
                v6 = v9 + v8;
                v5 = v9 + 0x1000;
                v4 = v9;
            } else {
                int64_t v10 = str + v8; // 0x40433f
                v6 = v10;
                v5 = v10;
                v4 = str;
            }
            // break -> 0x404345
            break;
        }
    }
    int64_t v11 = a1; // 0x404372
    int64_t v12 = 0; // 0x404372
    int64_t v13 = 0; // 0x404372
    int64_t v14 = 0; // 0x404372
    char * v15 = (char *)&v1; // 0x404372
    int64_t v16 = v6; // 0x404372
    int64_t v17 = v5; // 0x404372
    int64_t v18 = v4; // 0x404372
    int64_t v19 = a1; // 0x404372
    int64_t v20; // 0x4042d0
    int64_t v21; // 0x4042d0
    int64_t v22; // 0x4042d0
    int64_t v23; // 0x4042d0
    char * v24; // 0x4042d0
    int64_t v25; // 0x4042d0
    int64_t v26; // 0x4042d0
    int64_t v27; // 0x4042d0
    int64_t v28; // 0x4042d0
    int64_t v29; // 0x4042d0
    int64_t v30; // 0x4042d0
    int64_t v31; // 0x4042d0
    int64_t v32; // 0x4042d0
    int64_t v33; // 0x4042d0
    int32_t * v34; // 0x4042d0
    int32_t * v35; // 0x4042d0
    int32_t v36; // 0x4042d0
    int32_t v37; // 0x4042d0
    int32_t v38; // 0x4042d0
    int64_t v39; // 0x4042d0
    int64_t v40; // 0x4042d0
    int64_t v41; // 0x4042d0
    int64_t v42; // 0x4042d0
    int64_t v43; // 0x4042d0
    int64_t v44; // 0x4042d0
    int64_t v45; // 0x4042d0
    uint64_t v46; // 0x4042d0
    int64_t v47; // 0x4043b3
    char * str3; // 0x4042d0
    int64_t v48; // 0x4043b3
    char * v49; // 0x4042d0
    int64_t v50; // 0x404644
    char * str2; // 0x404658
    int32_t len2; // 0x404658
    int64_t v51; // 0x404658
    int32_t len3; // 0x404663
    while (true) {
      lab_0x404378_4:
        // 0x404378
        v37 = v36;
        v40 = v14;
        int64_t v52 = v13;
        int64_t v53 = v11;
        int16_t v54 = (int16_t)v37 & -0x1000;
        v42 = v12;
        v24 = v15;
        v27 = v16;
        v22 = v19;
        int32_t v55; // 0x4042d0
        while (true) {
          lab_0x404378_3:
            // 0x404378
            v21 = v18;
            v26 = v17;
            v43 = v42;
            v46 = v21 + 1;
            v25 = (int64_t)*v24;
            v29 = v27;
            v23 = v22;
            int64_t v56; // 0x4042d0
            int64_t v57; // 0x4043d0
            while (true) {
              lab_0x404378_2:
                // 0x404378
                v30 = v29;
                if (v25 == 0) {
                    // break (via goto) -> 0x404580
                    goto lab_0x404580_3;
                }
                int64_t v58 = v23; // 0x404384
                int64_t v59 = v25; // 0x404384
                int64_t v60 = v23; // 0x404384
                int64_t v61; // 0x404390
                unsigned char v62; // 0x404394
                if (v25 == 47) {
                    v61 = v58 + 1;
                    v62 = *(char *)v61;
                    v58 = v61;
                    while (v62 == 47) {
                        // 0x404390
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                    }
                    // 0x40439d
                    v59 = v62;
                    v60 = v61;
                    if (v62 == 0) {
                        // break (via goto) -> 0x404580
                        goto lab_0x404580_3;
                    }
                }
                // 0x4043a5
                v56 = v60;
                int64_t v63 = v59;
                v47 = v56 + 1;
                str3 = (char *)v47;
                unsigned char v64 = *str3; // 0x4043b3
                int64_t v65 = v47; // 0x4043be
                while (v64 != 0 == (v64 != 47)) {
                    // 0x4043b3
                    v47 = v65 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                }
                if (v47 == v56) {
                    // break (via goto) -> 0x404580
                    goto lab_0x404580_3;
                }
                // 0x4043cd
                v48 = v64;
                v57 = v47 - v56;
                while (v57 != 1) {
                    if (v57 == 2 != ((char)v63 == 46)) {
                        // break (via goto) -> 0x4043ec
                        goto lab_0x4043ec_2;
                    }
                    // 0x404740
                    if (*(char *)(v56 + 1) != 46) {
                        // break (via goto) -> 0x4043ec
                        goto lab_0x4043ec_2;
                    }
                    int64_t v66 = v48; // 0x404756
                    int64_t v67 = v47; // 0x404756
                    if (v30 > v46) {
                        int64_t v68 = v30 - 1; // 0x40475c
                        v28 = v68;
                        if (v21 >= v68) {
                            goto lab_0x404378;
                        } else {
                            int64_t v69 = v30 - 2; // 0x404765
                            v28 = v68;
                            if (*(char *)v69 != 47) {
                                // 0x4048a3
                                v28 = v21;
                                v31 = v69;
                                if (v21 == v69) {
                                    goto lab_0x404378;
                                } else {
                                    goto lab_0x4048b0;
                                }
                            } else {
                                goto lab_0x404378;
                            }
                        }
                    }
                    if (v66 == 0) {
                        // break (via goto) -> 0x404580
                        goto lab_0x404580_3;
                    }
                    // 0x404380
                    v58 = v67;
                    v59 = v66;
                    v60 = v67;
                    if (v66 == 47) {
                        v61 = v58 + 1;
                        v62 = *(char *)v61;
                        v58 = v61;
                        while (v62 == 47) {
                            // 0x404390
                            v61 = v58 + 1;
                            v62 = *(char *)v61;
                            v58 = v61;
                        }
                        // 0x40439d
                        v59 = v62;
                        v60 = v61;
                        if (v62 == 0) {
                            // break (via goto) -> 0x404580
                            goto lab_0x404580_3;
                        }
                    }
                    // 0x4043a5
                    v56 = v60;
                    v63 = v59;
                    v47 = v56 + 1;
                    str3 = (char *)v47;
                    v64 = *str3;
                    v65 = v47;
                    while (v64 != 0 == (v64 != 47)) {
                        // 0x4043b3
                        v47 = v65 + 1;
                        str3 = (char *)v47;
                        v64 = *str3;
                        v65 = v47;
                    }
                    if (v47 == v56) {
                        // break (via goto) -> 0x404580
                        goto lab_0x404580_3;
                    }
                    // 0x4043cd
                    v48 = v64;
                    v57 = v47 - v56;
                }
                // 0x404568
                v28 = v30;
                if ((char)v63 != 46) {
                    // break -> 0x4043ec
                    break;
                }
                goto lab_0x404378;
            }
          lab_0x4043ec_2:;
            int64_t v70 = v30; // 0x4043f0
            if (*(char *)(v30 - 1) != 47) {
                // 0x4043f2
                *(char *)v30 = 47;
                v70 = v30 + 1;
            }
            int64_t v71 = v70;
            int64_t v72 = v71 + v57;
            int64_t v73 = v72; // 0x404400
            int64_t v74 = v71; // 0x404400
            v17 = v26;
            int64_t v75 = v21; // 0x404400
            if (v26 <= v72) {
                int64_t v76 = v57 < 0x1000 == (4095 - v57 & v57) < 0 ? v57 + 1 : 0x1000;
                int64_t v77 = v76 + v26 - v21; // 0x404423
                v75 = function_408ab0(v21, v77);
                v74 = v75 + v71 - v21;
                v73 = v74 + v57;
                v17 = v75 + v77;
            }
            // 0x40443d
            v18 = v75;
            v20 = v73;
            memcpy((int64_t *)v74, (int64_t *)v56, (int32_t)v57);
            *(char *)v20 = 0;
            v55 = 0;
            if ((a2 & 4) != 0 && v3 == 2) {
                // break -> 0x404473
                break;
            }
            // 0x4044b0
            v1 = 1;
            v49 = (char *)v18;
            int64_t v78; // bp-200, 0x4042d0
            int32_t v79; // 0x4042d0
            if ((a2 & 4) == 0) {
                // 0x4045e8
                v79 = __lxstat(1, v49, (struct stat *)&v78);
            } else {
                // 0x4044c9
                v79 = __xstat(1, v49, (struct stat *)&v78);
            }
            // 0x4044d3
            if (v79 == 0) {
                // 0x404540
                v55 = v37;
                v15 = str3;
                v11 = v53;
                v12 = v43;
                v13 = v52;
                v14 = v40;
                v38 = v37;
                v16 = v20;
                v19 = v47;
                switch (v54) {
                    case -0x6000: {
                        int64_t v80 = v43; // 0x404606
                        if (v43 == 0) {
                            // 0x404793
                            v1 = 7;
                            v80 = function_4057d0(7, 0, 0x406190, 0x406200, 0x406240);
                            if (v80 == 0) {
                                // 0x4047bd
                                function_408ca0(7);
                                // UNREACHABLE
                            }
                        }
                        // 0x40460c
                        v45 = v80;
                        int64_t v81 = function_404e00(v45, v53, &v78); // 0x40461b
                        if ((char)v81 != 0) {
                            // 0x4046d9
                            v44 = v45;
                            if (v3 != 2) {
                                // 0x4046e4
                                v32 = 40;
                                v34 = __errno_location();
                                goto lab_0x4046f1_2;
                            }
                        } else {
                            // 0x404628
                            function_404d70(v45, v53, &v78);
                            int64_t v82; // 0x4042d0
                            v50 = function_40a2b0(v18, v82);
                            if (v50 != 0) {
                                // 0x404655
                                str2 = (char *)v50;
                                len2 = strlen(str2);
                                v51 = len2;
                                len3 = strlen(str3);
                                uint64_t v83 = v51 + 1 + (int64_t)len3; // 0x404671
                                if (v52 == 0) {
                                    int64_t v84 = v83 >= 0x1000 ? v83 : 0x1000; // 0x404821
                                    int64_t v85 = function_408a50(v84); // 0x40482d
                                    v39 = v84;
                                    v41 = v85;
                                    goto lab_0x404687;
                                } else {
                                    // 0x40467c
                                    v39 = v52;
                                    v41 = v40;
                                    if (v83 > v52) {
                                        int64_t v86 = function_408ab0(v40, v83); // 0x4048e2
                                        v39 = v83;
                                        v41 = v86;
                                        goto lab_0x404687;
                                    } else {
                                        goto lab_0x404687;
                                    }
                                }
                            }
                            int32_t * v87 = __errno_location(); // 0x404873
                            uint32_t v88 = *v87; // 0x404880
                            v44 = v45;
                            if (v3 == 2 != v88 != 12) {
                                // 0x4046f1
                                v32 = v88;
                                v34 = v87;
                                goto lab_0x4046f1_2;
                            }
                        }
                        goto lab_0x404529;
                    }
                    case 0x4000: {
                        goto lab_0x404484;
                    }
                    default: {
                        goto lab_0x404473;
                    }
                }
            } else {
                int32_t * v89 = __errno_location(); // 0x4044d7
                uint32_t v90 = *v89; // 0x4044df
                if (v3 == 0) {
                    // 0x4047d5
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x4047d5_3;
                }
                // 0x4044ed
                v55 = 0;
                if (v3 != 1) {
                    // break -> 0x404473
                    break;
                }
                char v91 = *(char *)(v47 + (int64_t)strspn(str3, "/")); // 0x404515
                v44 = v43;
                if (v90 == 2 != (v91 == 0)) {
                    // 0x4047d5
                    v33 = v90;
                    v35 = v89;
                    goto lab_0x4047d5_3;
                }
                goto lab_0x404529;
            }
        }
      lab_0x404473:
        // 0x404473
        v15 = str3;
        v11 = v53;
        v12 = v43;
        v13 = v52;
        v14 = v40;
        v38 = v55;
        v16 = v20;
        v19 = v47;
        if (v3 != 2 == (*str3 != 0)) {
            // 0x4047c8
            v33 = 20;
            v35 = __errno_location();
            goto lab_0x4047d5_3;
        }
        goto lab_0x404484;
    }
  lab_0x404580_3:;
    char * v92; // 0x4042d0
    int64_t v93; // 0x4042d0
    int64_t v94; // 0x4042d0
    if (v30 > v46) {
        int64_t v95 = v30 - 1; // 0x40458a
        char * v96 = (char *)v95;
        v92 = v96;
        v93 = v30;
        v94 = v95;
        if (*v96 == 47) {
            goto lab_0x404598;
        } else {
            goto lab_0x404594;
        }
    } else {
        goto lab_0x404594;
    }
  lab_0x404378:
    // 0x404378
    v25 = v48;
    v29 = v28;
    v23 = v47;
    goto lab_0x404378_2;
  lab_0x404484:
    // 0x404484
    v36 = v38;
    goto lab_0x404378_4;
  lab_0x404529:
    // 0x404529
    v42 = v44;
    v24 = str3;
    v27 = v20;
    v22 = v47;
    goto lab_0x404378_3;
  lab_0x404594:
    // 0x404594
    v92 = (char *)v30;
    v93 = v30 + 1;
    v94 = v30;
    goto lab_0x404598;
  lab_0x404598:
    // 0x404598
    *v92 = 0;
    int64_t v97 = v21; // 0x40459e
    if (v26 != v93) {
        // 0x4045a0
        v97 = function_408ab0(v21, 1 - v21 + v94);
    }
    // 0x4045b2
    free((int64_t *)v40);
    int64_t result = v97; // 0x4045c4
    if (v43 != 0) {
        // 0x4045c6
        function_405a10(v43);
        result = v97;
    }
  lab_0x4045ce:
    // 0x4045ce
    return result;
  lab_0x4048b0:;
    int64_t v98 = v31 - 1; // 0x4048b0
    v28 = v31;
    if (*(char *)v98 == 47) {
        goto lab_0x404378;
    } else {
        // 0x4048ba
        v28 = v98;
        v31 = v98;
        if (v21 != v98) {
            goto lab_0x4048b0;
        } else {
            goto lab_0x404378;
        }
    }
  lab_0x4047d5_3:
    // 0x4047d5
    free((int64_t *)v40);
    free((int64_t *)v18);
    int64_t v99 = v43; // 0x4047ff
    int64_t v100 = v33; // 0x4047ff
    int32_t * v101 = v35; // 0x4047ff
    if (v43 == 0) {
        goto lab_0x404731;
    } else {
        goto lab_0x404715;
    }
  lab_0x404731:
    // 0x404731
    *v101 = (int32_t)(v100 & 0xffffffff);
    result = 0;
    goto lab_0x4045ce;
  lab_0x404715:
    // 0x404715
    function_405a10(v99);
    goto lab_0x404731;
  lab_0x4046f1_2:
    // 0x4046f1
    free((int64_t *)v40);
    free((int64_t *)v18);
    v99 = v45;
    v100 = v32;
    v101 = v34;
    goto lab_0x404715;
  lab_0x404687:
    // 0x404687
    memmove((int64_t *)(v41 + v51), (int64_t *)v47, len3 + 1);
    int64_t * v102 = (int64_t *)v50; // 0x4046a7
    int64_t * dest_mem = memcpy((int64_t *)v41, v102, len2); // 0x4046a7
    int64_t v103 = v18 + 1; // 0x4046b0
    int64_t v104; // 0x4042d0
    int64_t v105; // 0x4042d0
    if (*str2 == 47) {
        // 0x404896
        *v49 = 47;
        v104 = v103;
        goto lab_0x4046cc;
    } else {
        // 0x4046c3
        v104 = v20;
        if (v20 > v103) {
            int64_t v106 = v20 - 1; // 0x40490c
            v104 = v106;
            if (v18 >= v106) {
                goto lab_0x4046cc;
            } else {
                // 0x404915
                v104 = v106;
                v105 = v106;
                if (*(char *)(v20 - 2) == 47) {
                    goto lab_0x4046cc;
                } else {
                    goto lab_0x404922;
                }
            }
        } else {
            goto lab_0x4046cc;
        }
    }
  lab_0x4046cc:;
    int64_t v107 = (int64_t)dest_mem; // 0x4046a7
    free(v102);
    v15 = (char *)dest_mem;
    v11 = v107;
    v12 = v45;
    v13 = v39;
    v14 = v41;
    v38 = v37;
    v16 = v104;
    v19 = v107;
    goto lab_0x404484;
  lab_0x404922:;
    int64_t v108 = v105;
    int64_t v109 = v108 - 1; // 0x404922
    v104 = v18;
    if (v18 == v109) {
        goto lab_0x4046cc;
    } else {
        // 0x40492f
        v104 = v109;
        v105 = v109;
        if (*(char *)(v108 - 2) == 47) {
            goto lab_0x4046cc;
        } else {
            goto lab_0x404922;
        }
    }
}
// Address range: 0x404950 - 0x404958
int64_t function_404950(int64_t a1) {
    // 0x404950
    g52 = a1;
    int64_t result; // 0x404950
    return result;
}
// Address range: 0x404960 - 0x404a5d
int64_t function_404960(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g37; // 0x404964
    int64_t v2; // 0x404960
    if (function_408f00(v1) != 0) {
        int64_t v3 = function_408f30(v1, 0, 1); // 0x404a1a
        int64_t v4 = (int64_t)g37; // 0x404a1f
        v2 = v4;
        if ((int32_t)v3 == 0) {
            int64_t v5 = function_408ec0(v4, 0); // 0x404998
            int64_t v6 = (int64_t)g37; // 0x40499d
            v2 = v6;
            if ((int32_t)v5 == 0) {
                goto lab_0x404a2e;
            } else {
                // 0x4049ac
                function_40a730(v6);
                goto lab_0x4049b8;
            }
        } else {
            goto lab_0x404a2e;
        }
    } else {
        // 0x40497c
        if ((int32_t)function_40a730(v1) == 0) {
            // 0x404988
            return function_404a80();
        }
        goto lab_0x4049b8;
    }
  lab_0x404a2e:
    // 0x404a2e
    if ((int32_t)function_40a730(v2) == 0) {
        // 0x404a3b
        return function_404a80();
    }
    goto lab_0x4049b8;
  lab_0x4049b8:;
    char * v7 = dcgettext(NULL, "error closing file", 5); // 0x4049c4
    int32_t * err_num = __errno_location(); // 0x4049d3
    if (g52 == 0) {
        // 0x404a48
        error(0, *err_num, "%s", v7);
    } else {
        // 0x4049e0
        error(0, *err_num, "%s: %s", (char *)function_407cd0((int64_t)g52), v7);
    }
    // 0x4049ff
    function_404a80();
    _exit(g25);
    // UNREACHABLE
}
// Address range: 0x404a60 - 0x404a68
int64_t function_404a60(int64_t a1) {
    // 0x404a60
    g54 = a1;
    int64_t result; // 0x404a60
    return result;
}
// Address range: 0x404a70 - 0x404a78
int64_t function_404a70(int64_t a1) {
    // 0x404a70
    g53 = a1;
    int64_t result; // 0x404a70
    return result;
}
// Address range: 0x404a80 - 0x404b1e
int64_t function_404a80(void) {
    // 0x404a80
    int32_t * err_num; // 0x404a96
    if ((int32_t)function_40a730((int64_t)g36) == 0) {
        goto lab_0x404aac;
    } else {
        // 0x404a96
        err_num = __errno_location();
        if (g53 == 0) {
            goto lab_0x404ac3;
        } else {
            // 0x404aa7
            if (*err_num != 32) {
                goto lab_0x404ac3;
            } else {
                goto lab_0x404aac;
            }
        }
    }
  lab_0x404aac:;
    int64_t result = function_40a730((int64_t)g39); // 0x404ab3
    if ((int32_t)result == 0) {
        // 0x404abc
        return result;
    }
    // 0x404afe
    _exit(g25);
    // UNREACHABLE
  lab_0x404ac3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x404acf
    if (g54 == 0) {
        // 0x404b09
        error(0, *err_num, "%s", v1);
    } else {
        // 0x404ae3
        error(0, *err_num, "%s: %s", (char *)function_407cd0((int64_t)g54), v1);
    }
    // 0x404afe
    _exit(g25);
    // UNREACHABLE
}
// Address range: 0x404b20 - 0x404bb6
int64_t function_404b20(void) {
    // 0x404b20
    int64_t name; // 0x404b20
    struct __dirstream * dirp = opendir((char *)name); // 0x404b28
    if (dirp == NULL) {
        // 0x404b42
        return (int64_t)dirp;
    }
    uint32_t v1 = dirfd(dirp); // 0x404b38
    if (v1 >= 3) {
        // 0x404b42
        return (int64_t)dirp;
    }
    int64_t v2 = function_408d80((int64_t)v1, 1030, 3, name); // 0x404b5e
    int32_t * v3 = __errno_location(); // 0x404b66
    int32_t fd = v2; // 0x404b6e
    if (fd < 0) {
        // 0x404b79
        closedir(dirp);
        return 0;
    }
    struct __dirstream * v4 = fdopendir(fd); // 0x404b9b
    if (v4 == NULL) {
        // 0x404bac
        close(fd);
    }
    // 0x404b79
    closedir(dirp);
    return (int64_t)v4;
}
// Address range: 0x404bc0 - 0x404bd8
int64_t function_404bc0(void) {
    // 0x404bc0
    int64_t v1; // 0x404bc0
    int64_t result = function_404c40(v1); // 0x404bc4
    if (result != 0) {
        // 0x404bce
        return result;
    }
    // 0x404bd3
    function_408ca0(v1);
    // UNREACHABLE
}
// Address range: 0x404be0 - 0x404c3d
int64_t function_404be0(int64_t a1) {
    // 0x404be0
    int64_t v1; // 0x404be0
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x404bee
    int64_t v3 = function_404ca0(a1, v1); // 0x404bf2
    int64_t result = v3 - a1; // 0x404bfa
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x404c23
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x404c10
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x404c23
            break;
        }
        result2--;
    }
    // 0x404c23
    return result2;
}
// Address range: 0x404c40 - 0x404c9a
int64_t function_404c40(int64_t a1) {
    // 0x404c40
    int64_t v1; // 0x404c40
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x404c5f
    if (mem == NULL) {
        // 0x404c86
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x404c75
    int64_t v3; // 0x404c40
    if (v2 == 0) {
        // 0x404c90
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x404c75
    *(char *)(v3 + result) = 0;
    // 0x404c86
    return result;
}
// Address range: 0x404ca0 - 0x404cfb
int64_t function_404ca0(int64_t a1, int64_t a2) {
    // 0x404ca0
    int64_t v1; // 0x404ca0
    char v2 = v1;
    int64_t v3 = a1; // 0x404ca9
    int64_t v4 = a1; // 0x404ca9
    char v5 = v2; // 0x404ca9
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x404cb4
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x404cb0
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x404cbe
    if (v5 == 0) {
      lab_0x404cfa:
        // 0x404cfa
        return result;
    }
    int64_t v7 = v4; // 0x404ce8
    int64_t v8 = 0; // 0x404ce8
    int64_t v9; // 0x404ca0
    int64_t v10; // 0x404cea
    char v11; // 0x404cee
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x404ce5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x404cea
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x404ce5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x404cda
    char v14 = *(char *)v13; // 0x404cde
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
            // 0x404ce5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x404cea
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x404ce5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x404cd0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x404cfa
    return result2;
}
// Address range: 0x404d00 - 0x404d2b
int64_t function_404d00(int64_t str) {
    int32_t len = strlen((char *)str); // 0x404d04
    int64_t result = len; // 0x404d04
    if (len < 2) {
        // 0x404d1a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x404d18
    while (*(char *)(v1 + str) == 47) {
        // 0x404d20
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x404d1a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x404d1a
    return result2;
}
// Address range: 0x404d30 - 0x404d63
int64_t function_404d30(int64_t a1) {
    // 0x404d30
    int64_t v1; // 0x404d30
    int64_t v2 = function_404ca0(a1, v1); // 0x404d39
    int64_t v3 = *(char *)v2 == 0 ? a1 : v2; // 0x404d44
    int64_t v4 = function_404d00(v3); // 0x404d4b
    char * v5 = (char *)(v3 + v4); // 0x404d53
    *v5 = 0;
    return v4 & -256 | (int64_t)(*v5 != 0);
}
// Address range: 0x404d70 - 0x404df6
int64_t function_404d70(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x404de0
        int64_t result; // 0x404d70
        return result;
    }
    int64_t v1 = (int64_t)a3;
    int64_t result2 = function_408a50(24); // 0x404d8d
    *(int64_t *)result2 = function_408c80(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(v1 + 8);
    *(int64_t *)(result2 + 16) = v1;
    int64_t v2 = function_405f70(a1, result2); // 0x404db6
    if (v2 == 0) {
        // 0x404df1
        function_408ca0(a1);
        // UNREACHABLE
    }
    // 0x404dc0
    if (result2 == v2) {
        // 0x404de0
        return result2;
    }
    // 0x404dc5
    return function_406240(result2);
}
// Address range: 0x404e00 - 0x404e3b
int64_t function_404e00(int64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0) {
        // 0x404e38
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x404e0d
    int64_t v2 = function_405560(a1, &v1); // 0x404e21
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x404e40 - 0x404e58
int64_t function_404e40(void) {
    // 0x404e40
    int64_t v1; // 0x404e40
    int64_t result = function_404e60(v1, v1, v1); // 0x404e44
    if (result != 0) {
        // 0x404e4e
        return result;
    }
    // 0x404e53
    function_408ca0(v1);
    // UNREACHABLE
}
// Address range: 0x404e60 - 0x404f39
int64_t function_404e60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_404ca0(a1, a2); // 0x404e78
    int64_t v2 = function_404d00(v1); // 0x404e83
    int64_t v3 = 0; // 0x404e97
    if (v2 != 0) {
        // 0x404e99
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x404eb0
    int64_t v4 = a2; // 0x404eb0
    int64_t v5; // 0x404e60
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x404f28
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x404e91
    int32_t len = strlen((char *)str); // 0x404eb5
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x404ec5
    if (mem == NULL) {
        // 0x404f11
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x404edb
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x404ee7
    if (a3 != 0) {
        // 0x404ef0
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x404f03
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x404f11
    return (int64_t)mem;
}
// Address range: 0x404f40 - 0x404fd3
int64_t function_404f40(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x404f57
    if (v1 == -1) {
        // 0x404fcf
        return -1;
    }
    int64_t v2 = v1; // 0x404f5f
    int64_t v3; // 0x404f40
    while (true) {
      lab_0x404f68:
        // 0x404f68
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x404fc0;
        } else {
            goto lab_0x404fc5;
        }
    }
  lab_0x404fcf_2:;
    // 0x404fcf
    int64_t result; // 0x404f40
    return result;
  lab_0x404fc5:;
    int64_t v4 = v3 + 2; // 0x404fc5
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x404fcf
        goto lab_0x404fcf_2;
    }
    goto lab_0x404f68;
  lab_0x404fc0:
    // 0x404fc0
    result = v3;
    goto lab_0x404fc5;
}
// Address range: 0x404fe0 - 0x404ff0
int64_t function_404fe0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x404fe0
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x404ff0 - 0x404ff7
int64_t function_404ff0(int64_t a1, int64_t a2) {
    // 0x404ff0
    int64_t v1; // 0x404ff0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x405000 - 0x405021
int64_t function_405000(int64_t a1, int64_t a2) {
    // 0x405000
    int64_t v1; // 0x405000
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x405018
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x405030 - 0x405149
int64_t function_405030(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_405000(a1, a2); // 0x405044
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40504c
    int64_t result2 = *v2; // 0x40504c
    if (result2 == 0) {
        // 0x4050de
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x405074
            if (v3 == 0) {
                // 0x4050de
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x405081
            int64_t v5 = v3; // 0x405087
            int64_t v6 = v1; // 0x405087
            int64_t result = v4; // 0x405087
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x4050bc_2:
                // 0x4050bc
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x4050c1
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x4050d0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x4050de
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x405094
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x4050a1
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x4050bc_2;
                }
                // 0x4050a9
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x4050bc_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x4050de
            return 0;
        }
    }
    // 0x4050f3
    if ((char)a4 == 0) {
        // 0x4050de
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x4050f8
    if (v12 == 0) {
        // 0x405140
        *v2 = 0;
        // 0x4050de
        return result2;
    }
    // 0x405101
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40510f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x405150 - 0x4051ce
int64_t function_405150(uint64_t a1) {
    if (a1 == (int64_t)&g7) {
        // 0x4051cd
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40515b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g7) {
        // 0x4051ba
        *(int64_t *)a1 = (int64_t)&g7;
        return 0;
    }
    // 0x405169
    __asm_comiss_1(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x405184
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_2(v2, 0x3dcccccd); // 0x405191
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x405199
    __asm_comiss_1(v4, v3);
    __asm_comiss_1(__asm_movss(0x3f800000), v4);
    __asm_comiss_1(v1, v3);
    // 0x4051cd
    return 1;
}
// Address range: 0x4051d0 - 0x40531a
int64_t function_4051d0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x4051ea
    uint64_t v2 = *v1; // 0x4051ea
    if (v2 <= a2) {
        // 0x4052d4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x4051d0
    int64_t v8 = a2; // 0x4051d0
    int64_t v9; // 0x4051d0
    int64_t result; // 0x4051d0
    int64_t v10; // 0x4051d0
    while (true) {
      lab_0x405206_2:
        // 0x405206
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x405206
        int64_t v12 = *v11; // 0x405206
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x4051f8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40520f
            int64_t v14 = *v13; // 0x40520f
            int64_t v15 = v14; // 0x405217
            int64_t v16 = v12; // 0x405217
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x405234
                    int64_t v19 = *v18; // 0x405234
                    int64_t v20 = function_405000(v3, v19); // 0x40523d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x405242
                    int64_t v22 = *v21; // 0x405242
                    int64_t * v23 = (int64_t *)v20; // 0x405246
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x405220
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40526f
                            break;
                        }
                    } else {
                        // 0x40524c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40526f
                            break;
                        }
                    }
                    // 0x405234
                    v15 = v22;
                }
                // 0x40526f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x405273
                v9 = *v1;
                goto lab_0x4051f8;
            } else {
                int64_t v26 = function_405000(v3, v25); // 0x40528b
                int64_t * v27 = (int64_t *)v26; // 0x405290
                if (*v27 == 0) {
                    // 0x4052f0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x405299
                    int64_t * v29; // 0x4051d0
                    int64_t v30; // 0x4051d0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x4052ff
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x4052d4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x4052ff
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x4052aa
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x4052b9
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x4052c1
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x4052ca
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x4052d4
                    break;
                }
                goto lab_0x405206_2;
            }
        }
    }
    // 0x4052d4
    return result;
  lab_0x4051f8:;
    int64_t v36 = v10 + 16; // 0x4051f8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x405206_2;
    // 0x405206
    goto lab_0x405206_2;
}
// Address range: 0x405320 - 0x405325
int64_t function_405320(int64_t a1) {
    // 0x405320
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x405330 - 0x405335
int64_t function_405330(int64_t a1) {
    // 0x405330
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x405340 - 0x405345
int64_t function_405340(int64_t a1) {
    // 0x405340
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x405350 - 0x40539f
int64_t function_405350(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x405353
    int64_t result = 0; // 0x40535c
    if (v1 <= a1) {
      lab_0x40539d:
        // 0x40539d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x405360
    while (*(int64_t *)v3 == 0) {
        // 0x405360
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40536f
    int64_t v6 = v5; // 0x40537b
    int64_t v7 = 1; // 0x40537b
    int64_t v8; // 0x405350
    int64_t v9; // 0x405380
    int64_t v10; // 0x405384
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x405380
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x405390
    int64_t v12 = v3 + 16; // 0x405394
    while (v12 < v1) {
        // 0x405369
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x405360
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40536f
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
                // 0x405380
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40538d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40539d
    return result2;
}
// Address range: 0x4053a0 - 0x405407
int64_t function_4053a0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4053a3
    int64_t v2 = a1; // 0x4053af
    int64_t v3 = 0; // 0x4053af
    int64_t v4 = 0; // 0x4053af
    int64_t v5 = 0; // 0x4053af
    int64_t v6 = 0; // 0x4053af
    int64_t v7; // 0x4053a0
    int64_t v8; // 0x4053a0
    int64_t v9; // 0x4053a0
    if (v1 > a1) {
        while (true) {
          lab_0x4053c1_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x4053b8;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x4053c7
                int64_t v13 = v10 + 1; // 0x4053cb
                int64_t v14 = v11 + 1; // 0x4053cf
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x4053d6
                int64_t v16 = v14; // 0x4053d6
                if (v12 == 0) {
                    goto lab_0x4053b8;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x4053e0
                    int64_t v18 = v16 + 1; // 0x4053e4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x4053e0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x4053ed
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x4053f6
                        break;
                    }
                    goto lab_0x4053c1_2;
                }
            }
        }
    }
  lab_0x4053f6:
    // 0x4053f6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x4053ff
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x4053fe
    return 0;
  lab_0x4053b8:;
    int64_t v20 = v8 + 16; // 0x4053b8
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x4053f6
        goto lab_0x4053f6;
    }
    goto lab_0x4053c1_2;
    // 0x4053c1
    goto lab_0x4053c1_2;
}
// Address range: 0x405410 - 0x405558
int64_t function_405410(uint64_t a1, int64_t a2) {
    // 0x405410
    int128_t v1; // 0x405410
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x405423
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x405427
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40542e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x405440
            while (*(int64_t *)v7 == 0) {
                // 0x405440
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40547d
                    goto lab_0x40547d;
                }
            }
        }
    }
  lab_0x40547d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40548c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x405410
    int128_t v10; // 0x405410
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x405523
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40552c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x4054c3;
        } else {
            goto lab_0x405539;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x4054b6
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x405539;
        } else {
            goto lab_0x4054c3;
        }
    }
  lab_0x4054c3:
    // 0x4054c3
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x4054c7
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x4054c7
    goto lab_0x4054cc;
  lab_0x405539:
    // 0x405539
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40554a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x4054cc;
  lab_0x4054cc:
    // 0x4054cc
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x405560 - 0x4055b3
int64_t function_405560(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_405000(a1, result); // 0x40556a
    int64_t v2 = *(int64_t *)v1; // 0x40556f
    if (v2 == 0) {
        // 0x40559d
        return 0;
    }
    // 0x405583
    if (v2 == result) {
        // 0x40559d
        return result;
    }
    int64_t v3 = v1; // 0x405594
    int64_t result2 = v2; // 0x405592
    while ((char)v1 == 0) {
        // 0x405594
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40559d
            break;
        }
        // 0x405580
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40559d
            break;
        }
        result2 = v2;
    }
    // 0x40559d
    return result2;
}
// Address range: 0x4055c0 - 0x405608
int64_t function_4055c0(uint64_t a1) {
    int64_t result = 0; // 0x4055c5
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x4055d7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4055ce
    if (v1 <= a1) {
        // 0x4055d7
        return result;
    }
    int64_t v2 = a1; // 0x4055d5
    int64_t v3 = *(int64_t *)v2; // 0x4055e9
    result = v3;
    while (v3 == 0) {
        // 0x4055e0
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x4055d7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x4055d7
    return result;
}
// Address range: 0x405610 - 0x40567a
int64_t function_405610(int64_t a1, int64_t a2) {
    int64_t v1 = function_405000(a1, a2); // 0x40561c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x405638
    while (*(int64_t *)v2 != a2) {
        // 0x405630
        if (v3 == 0) {
            goto lab_0x405646;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x405670
        return *(int64_t *)v3;
    }
  lab_0x405646:;
    int64_t v4 = v1 + 16; // 0x405658
    int64_t result = 0; // 0x40565f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x405650
        result = v5;
        if (v5 != 0) {
            // break -> 0x405663
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x405663
    return result;
}
// Address range: 0x405680 - 0x4056e4
int64_t function_405680(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x405686
    int64_t result = 0; // 0x40568a
    if (*v1 <= a1) {
      lab_0x4056a1:
        // 0x4056a1
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40568f
    int64_t v4 = v2; // 0x405695
    int64_t v5; // 0x405680
    int64_t v6; // 0x405680
    int64_t v7; // 0x4056c8
    int64_t v8; // 0x4056d1
    int64_t v9; // 0x4056b1
    int64_t v10; // 0x4056b5
    if (v3 != 0) {
        // 0x4056a8
        if (v2 >= a3) {
            // break -> 0x4056a1
            break;
        }
        // 0x4056ad
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
            // 0x4056c5
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x4056c0
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x4056c5
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
    int64_t v12 = a1 + 16; // 0x405697
    result = v11;
    while (*v1 > v12) {
        // 0x40568f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x4056a8
            result = v2;
            if (v2 >= a3) {
                // break -> 0x4056a1
                break;
            }
            // 0x4056ad
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
                // 0x4056c5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x4056c0
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x4056c5
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x405697
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x4056a1
    return result;
}
// Address range: 0x4056f0 - 0x405768
int64_t function_4056f0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x405701
    int64_t result = 0; // 0x405705
    if (v1 <= a1) {
      lab_0x405724:
        // 0x405724
        return result;
    }
    int64_t v2 = a1; // 0x40571a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x405718
    int64_t v5 = v2; // 0x405718
    int64_t v6 = v3; // 0x405718
    int64_t v7; // 0x4056f0
    int64_t v8; // 0x405748
    int64_t v9; // 0x40574c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x405748
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x405758
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x405748
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
        // 0x405712
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x405748
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x405758
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x405748
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40571a
        result2 = v4;
        v2 += 16;
    }
    // 0x405724
    return result2;
}
// Address range: 0x405770 - 0x4057a1
int64_t function_405770(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x405777
    if (v1 == 0) {
        // 0x40579d
        return 0;
    }
    int64_t result = 0; // 0x405777
    v2++;
    char v3 = *(char *)v2; // 0x405793
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40579d
    return result;
}
// Address range: 0x4057b0 - 0x4057d0
int64_t function_4057b0(int64_t a1) {
    // 0x4057b0
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x4057d0 - 0x40595a
int64_t function_4057d0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4057d0
    int128_t v1; // 0x4057d0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40580a
    int64_t result = (int64_t)mem; // 0x40580a
    if (mem == NULL) {
        // 0x4058ba
        return result;
    }
    int64_t v3 = result + 40; // 0x40581b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x4057d0
    int128_t v6; // 0x4057d0
    if (a2 == 0) {
        // 0x4058d0
        *v4 = (int64_t)&g7;
        int64_t v7 = function_405150(v3); // 0x4058d8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x4058dd
        if ((char)v7 == 0) {
            // 0x4058b0
            free(mem);
            // 0x4058ba
            return 0;
        }
        // 0x4058e9
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x405933;
        } else {
            goto lab_0x4058ee;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_405150(v3) == 0) {
            // 0x4058b0
            free(mem);
            // 0x4058ba
            return 0;
        }
        // 0x405835
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_404f40(a1); // 0x405843
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x4058b0
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x4058b0
                free(mem);
                // 0x4058ba
                return 0;
            }
            // 0x405861
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x4058b0
                free(mem);
                // 0x4058ba
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x405872
            int64_t v10 = (int64_t)mem2; // 0x405872
            *mem = v10;
            if (mem2 == NULL) {
                // 0x4058b0
                free(mem);
                // 0x4058ba
                return 0;
            }
            // 0x40587f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x404fe0 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x404ff0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x4058ba
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x405928
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x4058ee;
        } else {
            goto lab_0x405933;
        }
    }
  lab_0x405933:
    // 0x405933
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x405943
    int128_t v13 = v6; // 0x40594c
    int128_t v14 = __asm_addss(v12, v12); // 0x40594c
    goto lab_0x4058f7;
  lab_0x4058ee:
    // 0x4058ee
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x4058f7;
  lab_0x4058f7:
    // 0x4058f7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x4058b0
    free(mem);
    // 0x4058ba
    return 0;
}
// Address range: 0x405960 - 0x405a08
int64_t function_405960(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40596a
    uint64_t v2 = *v1; // 0x40596a
    int64_t result; // 0x405960
    if (v2 <= a1) {
      lab_0x4059f3:
        // 0x4059f3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x405978
    while (*v6 == 0) {
        // 0x405978
        v7 = v5 + 16;
        int64_t v8; // 0x405960
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x4059f3
            goto lab_0x4059f3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x405989
    int64_t v10 = *v9; // 0x405989
    int64_t v11 = *v3; // 0x40598e
    int64_t v12 = v11; // 0x405995
    int64_t v13 = v10; // 0x405995
    int64_t result2 = v11; // 0x405995
    int64_t * v14; // 0x4059ae
    int64_t v15; // 0x4059ae
    int64_t v16; // 0x4059aa
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x4059a5
            v16 = *v3;
        }
        // 0x4059ae
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x4059a0
            v16 = 0;
            if (v12 != 0) {
                // 0x4059a5
                v16 = *v3;
            }
            // 0x4059ae
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
    // 0x4059cd
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x4059e0
    *v9 = 0;
    uint64_t v18 = *v1; // 0x4059ed
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40597c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x405978
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x4059f3
                goto lab_0x4059f3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x405989
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x4059a5
                v16 = *v3;
            }
            // 0x4059ae
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x4059a0
                v16 = 0;
                if (v12 != 0) {
                    // 0x4059a5
                    v16 = *v3;
                }
                // 0x4059ae
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
        // 0x4059cd
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x4059f3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x405a10 - 0x405ae6
int64_t function_405a10(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x405a1f
    uint64_t v2 = *v1; // 0x405a1f
    int64_t v3 = a1; // 0x405a23
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x405a73;
    } else {
        // 0x405a25
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x405a73;
        } else {
            // 0x405a2c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x405a41
                int64_t v6; // 0x405a38
                while (v5 == 0) {
                    // 0x405a38
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x405a73
                        goto lab_0x405a73;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x405a58
                int64_t v8 = v7; // 0x405a5f
                int64_t v9 = v5; // 0x405a5f
                int64_t v10; // 0x405a10
                int64_t v11; // 0x405a58
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x405a50
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x405a53
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x405a66
                v3 = v9;
                while (v2 > v12) {
                    // 0x405a41
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x405a38
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x405a73
                            goto lab_0x405a73;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x405a53
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x405a50
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x405a53
                        v9 = *(int64_t *)v10;
                    }
                    // 0x405a61
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x405a73;
            } else {
                goto lab_0x405aac;
            }
        }
    }
  lab_0x405a73:
    // 0x405a73
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x405a80
        int64_t v14 = v13; // 0x405a87
        int64_t v15 = v2; // 0x405a87
        int64_t v16; // 0x405a90
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x405a90
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x405aa1
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x405aa1
        int64_t v18 = v15; // 0x405aaa
        int64_t v19 = v17; // 0x405aaa
        while (v15 > v17) {
            // 0x405a80
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x405a90
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x405aa1
                v15 = *v1;
            }
            // 0x405aa1
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x405aac;
  lab_0x405aac:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x405aac
    if (v20 == 0) {
        // 0x405ad1
        free(NULL);
        free((int64_t *)a1);
        return &g68;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x405ac0
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x405acf
    while (v21 != 0) {
        // 0x405ac0
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x405ad1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g68;
}
// Address range: 0x405af0 - 0x405cea
int64_t function_405af0(int64_t a1, uint64_t a2) {
    // 0x405af0
    int128_t v1; // 0x405af0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x405afb
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x405af0
        if (a2 < 0) {
            // 0x405c70
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x405c80
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x405b10
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x405b19
        __asm_comiss(__asm_divss_4(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x405c62
        return 0;
    }
    uint64_t nmemb = function_404f40(a2); // 0x405b53
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x405c62
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x405b8b
    if (*v6 == nmemb) {
        // 0x405c62
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x405b9d
    int64_t v7 = (int64_t)mem; // 0x405b9d
    int64_t v8 = v7; // bp-104, 0x405ba2
    if (mem == NULL) {
        // 0x405c62
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x405bfa
    int64_t v10 = *v9; // 0x405bfa
    int64_t v11 = function_4051d0(&v8, a1, 0); // 0x405c03
    int64_t result = v11 & 0xffffffff; // 0x405c08
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x405bc4
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x405c26
        function_4051d0(v13, v12, 1);
        function_4051d0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x405cb0
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x405c62
    return result;
}
// Address range: 0x405cf0 - 0x405f64
int64_t function_405cf0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x405cf0
    int128_t v1; // 0x405cf0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x405cf0
    int64_t v5 = function_405030(a1, a2, &v4, 0); // 0x405d11
    if (v5 != 0) {
        // 0x405d1e
        if (a3 != NULL) {
            // 0x405d25
            *a3 = v5;
        }
        // 0x405d29
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x405d38
    uint64_t v7 = *v6; // 0x405d38
    int64_t v8; // 0x405cf0
    int64_t v9; // 0x405cf0
    int64_t v10; // 0x405cf0
    int128_t v11; // 0x405cf0
    int128_t v12; // 0x405cf0
    int64_t v13; // 0x405cf0
    if (v7 < 0) {
        // 0x405dc0
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x405dd0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x405dd4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x405dd9
        int128_t v17 = __asm_addss(v15, v15); // 0x405ddd
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x405d5b;
        } else {
            goto lab_0x405dea;
        }
    } else {
        // 0x405d41
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x405d45
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x405d49
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x405d4e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x405dea;
        } else {
            goto lab_0x405d5b;
        }
    }
  lab_0x405d5b:
    // 0x405d5b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x405d64
    __asm_comiss_1(v11, v21);
    int128_t v22 = v21; // 0x405d6c
    int128_t v23 = v11; // 0x405d6c
    if (v13 == 0) {
        goto lab_0x405d72;
    } else {
        goto lab_0x405e11;
    }
  lab_0x405dea:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x405df7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x405dfa
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x405e03
    __asm_comiss_1(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x405d72;
    } else {
        goto lab_0x405e11;
    }
  lab_0x405d72:;
    int64_t * v28 = (int64_t *)v4; // 0x405d77
    if (*v28 == 0) {
        // 0x405e88
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x405e91
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x405d82
    int64_t v31 = *v30; // 0x405d82
    int64_t * v32; // 0x405cf0
    int64_t v33; // 0x405cf0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x405ead
        if (mem == NULL) {
            // 0x405d29
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x405ead
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x405d97
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x405dad
    *v37 = *v37 + 1;
    return 1;
  lab_0x405e11:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x405e11
    function_405150(v40);
    int64_t v41 = *(int64_t *)v40; // 0x405e1a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x405e1e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x405e22
    int128_t v44; // 0x405cf0
    if (v42 < 0) {
        // 0x405ee0
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x405ef0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x405e30
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x405e39
    int128_t v47; // 0x405cf0
    int64_t v48; // 0x405cf0
    if (v46 < 0) {
        // 0x405ec0
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x405ecd
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x405ed0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x405e42
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x405e46
        v48 = v46;
        v47 = v51;
    }
    // 0x405e4b
    __asm_comiss_1(v47, __asm_mulss_3(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x405e5b
        int128_t v53 = v52; // 0x405e64
        if (*(char *)(v41 + 16) == 0) {
            // 0x405f00
            v53 = __asm_mulss_3(v52, v43);
        }
        // 0x405e6a
        __asm_comiss(v53, 0x5f800000);
        // 0x405d29
        return 0xffffffff;
    }
    goto lab_0x405d72;
}
// Address range: 0x405f70 - 0x405fab
int64_t function_405f70(int64_t a1, int64_t a2) {
    // 0x405f70
    int64_t v1; // bp-16, 0x405f70
    int64_t v2; // 0x405f70
    int32_t v3 = function_405cf0(a1, a2, &v1, v2); // 0x405f82
    if (v3 == -1) {
        // 0x405f90
        return 0;
    }
    // 0x405f87
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x405fb0 - 0x406187
int64_t function_405fb0(int64_t a1) {
    // 0x405fb0
    int128_t v1; // 0x405fb0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x405fb0
    int64_t v5; // 0x405fb0
    int64_t result = function_405030(a1, v5, &v4, 1); // 0x405fc5
    if (result == 0) {
        // 0x405fe2
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x405fd7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x405fe2
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x405ff0
    uint64_t v8 = *v7 - 1; // 0x405ff4
    *v7 = v8;
    int64_t v9; // 0x405fb0
    int64_t v10; // 0x405fb0
    int64_t v11; // 0x405fb0
    int128_t v12; // 0x405fb0
    int128_t v13; // 0x405fb0
    int64_t v14; // 0x405fb0
    if (v8 < 0) {
        // 0x4060e0
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x4060f0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x4060f4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x4060f9
        int128_t v18 = __asm_addss(v16, v16); // 0x4060fd
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40601c;
        } else {
            goto lab_0x40610a;
        }
    } else {
        // 0x406002
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x406006
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40600a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40600f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40610a;
        } else {
            goto lab_0x40601c;
        }
    }
  lab_0x40601c:
    // 0x40601c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x406020
    int64_t v23 = v14; // 0x406020
    int128_t v24 = v12; // 0x406020
    int64_t v25 = v10; // 0x406020
    int128_t v26 = v22; // 0x406020
    goto lab_0x406025;
  lab_0x40610a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x406117
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40611a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x406025;
  lab_0x406025:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x406025
    __asm_comiss_1(v28, v27);
    if (v23 == 0) {
        // 0x405fe2
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40602e
    function_405150(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x406037
    int64_t v31 = *(int64_t *)v29; // 0x40603b
    int128_t v32; // 0x405fb0
    if (v30 < 0) {
        // 0x406150
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x406160
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x406048
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x406051
    int128_t v35; // 0x405fb0
    int64_t v36; // 0x405fb0
    if (v34 < 0) {
        // 0x406130
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40613d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x406140
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40605e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x406062
        v36 = v34;
        v35 = v39;
    }
    // 0x406067
    __asm_comiss_1(__asm_mulss_3(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x405fe2
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x406078
    int128_t v41 = v40; // 0x406081
    if (*(char *)(v31 + 16) == 0) {
        // 0x406083
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x406088
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x406178
    if ((char)function_405af0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x405fe2
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x4060aa
    if (*v43 != 0) {
        int64_t v44; // 0x405fb0
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x4060b8
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x4060c9
    *v43 = 0;
    // 0x405fe2
    return result;
}
// Address range: 0x406190 - 0x4061b7
int64_t function_406190(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x406190
    return (*(int64_t *)(a1 + 8) ^ function_40a7f0(a1, a2, a3)) % a2;
}
// Address range: 0x4061c0 - 0x4061cd
int64_t function_4061c0(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x4061c0
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x4061d0 - 0x4061f5
int64_t function_4061d0(int64_t a1, int64_t a2) {
    // 0x4061d0
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x4061da
        return 0;
    }
    // 0x4061ea
    return function_4080f0(a1, a2);
}
// Address range: 0x406200 - 0x406233
int64_t function_406200(int64_t str, int64_t str2) {
    // 0x406200
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x40620c
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x406224
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x406240 - 0x406255
int64_t function_406240(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x406247
    free(v1);
    free(v1);
    return &g68;
}
// Address range: 0x406260 - 0x4062f9
int64_t function_406260(int64_t str) {
    // 0x406260
    if (str == 0) {
        // 0x4062d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g39);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40626e
    int64_t result = (int64_t)found_char_pos; // 0x40626e
    if (found_char_pos == NULL) {
        // 0x4062c9
        g55 = str;
        g38 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x406278
    if (v1 - str < 7) {
        // 0x4062c9
        g55 = str;
        g38 = str;
        return result;
    }
    // 0x406288
    bool v2; // 0x406260
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x406260
    int64_t v5 = result - 6; // 0x406260
    int64_t v6 = 7; // 0x406296
    unsigned char v7 = *(char *)v5; // 0x406296
    char v8 = *(char *)v4; // 0x406296
    char v9 = v8; // 0x406296
    bool v10 = false; // 0x406296
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
    int64_t v12 = (int64_t)"lt-"; // 0x4062a0
    int64_t v13 = v1; // 0x4062a0
    int64_t v14 = 3; // 0x4062a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4062c9
        g55 = str;
        g38 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4062b2
    char v16 = *(char *)v12; // 0x4062b2
    char v17 = v16; // 0x4062b2
    bool v18 = false; // 0x4062b2
    while (v15 == v16) {
        // 0x4062a2
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
    int64_t v20 = v1; // 0x4062bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4062be
        v20 = result + 4;
        g35 = v20;
    }
    // 0x4062c9
    g55 = v20;
    g38 = v20;
    return result;
}
// Address range: 0x406300 - 0x4063f2
int64_t function_406300(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x406314
    int64_t result = (int64_t)v1; // 0x406314
    if (result != a1) {
        // 0x406321
        return result;
    }
    int64_t v2 = function_40a830(); // 0x406330
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4063e6
    if (v3 == 85) {
        // 0x406340
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4063d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g14 : (int64_t)&g8;
            return result2;
        }
        char v4 = *v1; // 0x40636e
        int64_t result3 = v4 != 96 ? (int64_t)&g9 : (int64_t)&g12; // 0x40637b
        // 0x406321
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4063d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g14 : (int64_t)&g8;
        return result2;
    }
    char v5 = *v1; // 0x4063bd
    int64_t result4 = v5 != 96 ? (int64_t)&g10 : (int64_t)&g11; // 0x4063ca
    // 0x406321
    return result4;
}
// Address range: 0x406400 - 0x406457
int64_t function_406400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x406400
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x406457 - 0x407621
int64_t function_406457(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4064a1
    int64_t v3 = 0; // 0x4064a1
    int64_t v4; // 0x406457
    int64_t v5; // 0x406457
    int64_t v6; // 0x406457
    int64_t v7; // 0x406457
    int64_t v8; // 0x406457
    int64_t v9; // 0x406457
    int64_t v10; // 0x406457
    int64_t v11; // 0x406457
    int64_t v12; // 0x406457
    int64_t v13; // 0x406457
    int64_t v14; // 0x406457
    int64_t v15; // 0x406457
    int64_t v16; // 0x406457
    int64_t v17; // 0x406457
    int64_t v18; // 0x406457
    int64_t result; // 0x406457
    int64_t v19; // 0x406457
    int32_t wc; // bp+132, 0x406457
    int64_t ps; // bp+136, 0x406457
    char v20; // 0x406a10
    int64_t v21; // 0x406a10
    int64_t v22; // 0x406db8
    int64_t v23; // 0x406457
    int64_t v24; // 0x406dd7
    int32_t v25; // 0x406457
    while (true) {
      lab_0x4064a8_2:
        // 0x4064a8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x406457
        int64_t v27; // 0x4064dc
        while (true) {
          lab_0x4064a8:
            // 0x4064a8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4064b3
            if (v15 == -1) {
                // 0x4064b5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4064c3
            if (v28) {
                // break (via goto) -> 0x406c28
                goto lab_0x406c28;
            }
            // 0x4064cc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g67 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x406abb
                    if (v25 % 2 == 0) {
                        goto lab_0x406601;
                    }
                    // 0x406edd
                    v26 = v5 + 1;
                    goto lab_0x4064a8;
                }
                case 7: {
                    goto lab_0x406601;
                }
                case 8: {
                    goto lab_0x406601;
                }
                case 9: {
                    goto lab_0x40681a_2;
                }
                case 10: {
                    goto lab_0x40681a_2;
                }
                case 11: {
                    goto lab_0x406601;
                }
                case 12: {
                    goto lab_0x406601;
                }
                case 13: {
                    goto lab_0x40681a_2;
                }
                case 32: {
                    goto lab_0x40681a_2;
                }
                case 33: {
                    goto lab_0x40681a_2;
                }
                case 34: {
                    goto lab_0x40681a_2;
                }
                case 35: {
                    goto lab_0x4065cd;
                }
                case 36: {
                    goto lab_0x40681a_2;
                }
                case 37: {
                    goto lab_0x406601;
                }
                case 38: {
                    goto lab_0x40681a_2;
                }
                case 39: {
                    goto lab_0x40681a_2;
                }
                case 40: {
                    goto lab_0x40681a_2;
                }
                case 41: {
                    goto lab_0x40681a_2;
                }
                case 42: {
                    goto lab_0x40681a_2;
                }
                case 43: {
                    goto lab_0x406601;
                }
                case 44: {
                    goto lab_0x406601;
                }
                case 45: {
                    goto lab_0x406601;
                }
                case 46: {
                    goto lab_0x406601;
                }
                case 47: {
                    goto lab_0x406601;
                }
                case 48: {
                    goto lab_0x406601;
                }
                case 49: {
                    goto lab_0x406601;
                }
                case 50: {
                    goto lab_0x406601;
                }
                case 51: {
                    goto lab_0x406601;
                }
                case 52: {
                    goto lab_0x406601;
                }
                case 53: {
                    goto lab_0x406601;
                }
                case 54: {
                    goto lab_0x406601;
                }
                case 55: {
                    goto lab_0x406601;
                }
                case 56: {
                    goto lab_0x406601;
                }
                case 57: {
                    goto lab_0x406601;
                }
                case 58: {
                    goto lab_0x406601;
                }
                case 59: {
                    goto lab_0x40681a_2;
                }
                case 60: {
                    goto lab_0x40681a_2;
                }
                case 61: {
                    goto lab_0x40681a_2;
                }
                case 62: {
                    goto lab_0x40681a_2;
                }
                case 63: {
                    goto lab_0x40681a_2;
                }
                case 65: {
                    goto lab_0x406601;
                }
                case 66: {
                    goto lab_0x406601;
                }
                case 67: {
                    goto lab_0x406601;
                }
                case 68: {
                    goto lab_0x406601;
                }
                case 69: {
                    goto lab_0x406601;
                }
                case 70: {
                    goto lab_0x406601;
                }
                case 71: {
                    goto lab_0x406601;
                }
                case 72: {
                    goto lab_0x406601;
                }
                case 73: {
                    goto lab_0x406601;
                }
                case 74: {
                    goto lab_0x406601;
                }
                case 75: {
                    goto lab_0x406601;
                }
                case 76: {
                    goto lab_0x406601;
                }
                case 77: {
                    goto lab_0x406601;
                }
                case 78: {
                    goto lab_0x406601;
                }
                case 79: {
                    goto lab_0x406601;
                }
                case 80: {
                    goto lab_0x406601;
                }
                case 81: {
                    goto lab_0x406601;
                }
                case 82: {
                    goto lab_0x406601;
                }
                case 83: {
                    goto lab_0x406601;
                }
                case 84: {
                    goto lab_0x406601;
                }
                case 85: {
                    goto lab_0x406601;
                }
                case 86: {
                    goto lab_0x406601;
                }
                case 87: {
                    goto lab_0x406601;
                }
                case 88: {
                    goto lab_0x406601;
                }
                case 89: {
                    goto lab_0x406601;
                }
                case 90: {
                    goto lab_0x406601;
                }
                case 91: {
                    goto lab_0x40681a_2;
                }
                case 92: {
                    goto lab_0x40681a_2;
                }
                case 93: {
                    goto lab_0x406601;
                }
                case 94: {
                    goto lab_0x40681a_2;
                }
                case 95: {
                    goto lab_0x406601;
                }
                case 96: {
                    goto lab_0x40681a_2;
                }
                case 97: {
                    goto lab_0x406601;
                }
                case 98: {
                    goto lab_0x406601;
                }
                case 99: {
                    goto lab_0x406601;
                }
                case 100: {
                    goto lab_0x406601;
                }
                case 101: {
                    goto lab_0x406601;
                }
                case 102: {
                    goto lab_0x406601;
                }
                case 103: {
                    goto lab_0x406601;
                }
                case 104: {
                    goto lab_0x406601;
                }
                case 105: {
                    goto lab_0x406601;
                }
                case 106: {
                    goto lab_0x406601;
                }
                case 107: {
                    goto lab_0x406601;
                }
                case 108: {
                    goto lab_0x406601;
                }
                case 109: {
                    goto lab_0x406601;
                }
                case 110: {
                    goto lab_0x406601;
                }
                case 111: {
                    goto lab_0x406601;
                }
                case 112: {
                    goto lab_0x406601;
                }
                case 113: {
                    goto lab_0x406601;
                }
                case 114: {
                    goto lab_0x406601;
                }
                case 115: {
                    goto lab_0x406601;
                }
                case 116: {
                    goto lab_0x406601;
                }
                case 117: {
                    goto lab_0x406601;
                }
                case 118: {
                    goto lab_0x406601;
                }
                case 119: {
                    goto lab_0x406601;
                }
                case 120: {
                    goto lab_0x406601;
                }
                case 121: {
                    goto lab_0x406601;
                }
                case 122: {
                    goto lab_0x406601;
                }
                case 123: {
                    goto lab_0x4065a5;
                }
                case 124: {
                    goto lab_0x40681a_2;
                }
                case 125: {
                    goto lab_0x4065a5;
                }
                case 126: {
                    goto lab_0x4065cd;
                }
                default: {
                    goto lab_0x4069a5;
                }
            }
        }
      lab_0x4069a5:
        if (v23 != 1) {
            // 0x406d10
            ps = 0;
            int64_t len = v15; // 0x406d20
            if (v15 == -1) {
                // 0x406d22
                len = strlen((char *)str);
            }
            // 0x406d4e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x406daf:
                // 0x406daf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x406db4
                int64_t v30 = v29 + str;
                v24 = function_40a230(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40732a_2;
                    }
                    case -1: {
                        goto lab_0x40732a_2;
                    }
                    case -2: {
                        // 0x40740d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x407447
                            v19 = v18;
                            int64_t v31 = v18; // 0x40744a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x407457
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x407450
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40732a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40732a_2;
                    }
                    case 1: {
                        goto lab_0x406d80;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x406e2c
                        char v34 = *(char *)v33; // 0x406e3d
                        unsigned char v35; // 0x406457
                        if (v34 < 125) {
                            // 0x406e48
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x406e5f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40681a_2;
                            }
                        }
                        // 0x406e30
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x406e3d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x406e48
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x406e5f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40681a_2;
                                }
                            }
                            // 0x406e30
                            v33++;
                        }
                        goto lab_0x406d80;
                    }
                }
            }
            goto lab_0x40732a_2;
        } else {
            // 0x4069f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x406601;
        }
    }
  lab_0x406c28:
    // 0x406c28
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40752a
        if (v8 > result) {
            // 0x407533
            *(char *)(v12 + result) = 0;
        }
        // 0x406857
        return result;
    }
    goto lab_0x40681a_2;
  lab_0x406601:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x406610
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40681a_2;
        }
    }
    int64_t v42 = result; // 0x406711
    char v43 = v20; // 0x406711
    int64_t v44 = v58; // 0x406711
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x406711
    int64_t v46 = v56; // 0x406711
    goto lab_0x40668d;
  lab_0x40681a_2:;
    // 0x406857
    char * v36; // 0x406457
    return function_406400(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x40732a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x406601;
    } else {
        uint64_t v40 = v37 + v5; // 0x406efe
        int64_t v41 = v5 + 1; // 0x406fe1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x406fe8
        char v48 = v20; // 0x406fe8
        int64_t v49 = result; // 0x406fe8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x406fb1
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x406fb5
            int64_t v52 = v50 + 1; // 0x406fba
            int64_t v53 = v47 + 1; // 0x406fe1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x406fac
                v50 = v52;
                if (v38 > v50) {
                    // 0x406fb1
                    *(char *)(v50 + v39) = v51;
                }
                // 0x406fb5
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
        goto lab_0x40668d;
    }
  lab_0x406d80:
    // 0x406d80
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x406d9f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406da2
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x40732a
        goto lab_0x40732a_2;
    }
    goto lab_0x406daf;
  lab_0x4065cd:
    // 0x4065cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40681a_2;
    }
    goto lab_0x406601;
  lab_0x4065a5:;
    bool v61 = v15 == 1; // 0x4065b0
    if (v15 == -1) {
        // 0x4065b2
        v61 = *(char *)v1 == 0;
    }
    // 0x4065be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x406601;
    } else {
        goto lab_0x4065cd;
    }
  lab_0x40668d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x406692
        *(char *)(v59 + v60) = v43;
    }
    // 0x406696
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x4064a8_2;
}
// Address range: 0x407630 - 0x4077ce
int64_t function_407630(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x407632
    int32_t * v3 = __errno_location(); // 0x40764c
    int64_t v4 = (int64_t)g27; // 0x407651
    int32_t v5 = *v3; // 0x40765b
    int64_t v6 = v4; // 0x407671
    if (v2 >= (int64_t)*(int32_t *)&g30) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4077c9
            function_408ca0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x407680
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x407687
        int64_t v9; // 0x407630
        if (g27 == &g28) {
            int64_t v10 = function_408ab0(0, v8); // 0x4077aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g28); // 0x4077af
            *(int64_t *)&g27 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_408ab0(v4, v8); // 0x40769b
            *(int64_t *)&g27 = v12;
            v9 = v12;
        }
        // 0x4076aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g30; // 0x4076aa
        int32_t v14 = v7; // 0x4076b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g30 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x4076e1
    int64_t v17 = v15 + 8; // 0x4076e4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x4076eb
    int64_t * v19 = (int64_t *)v16; // 0x4076ee
    uint64_t v20 = *v19; // 0x4076ee
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x4076f1
    int64_t result = *v21; // 0x4076f1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x4076fc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x407705
    int64_t v24; // 0x407630
    uint64_t v25 = function_406400(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x407714
    if (v20 > v25) {
        // 0x40778b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x407727
    *v19 = v26;
    if (result != (int64_t)&g56) {
        // 0x407737
        free((int64_t *)result);
    }
    int64_t result2 = function_408a50(v26); // 0x407751
    *v21 = result2;
    int64_t v27 = *v22; // 0x40776b
    int64_t v28 = *v23; // 0x40776e
    int64_t v29; // 0x407630
    function_406400(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40778b
    *v3 = v5;
    return result2;
}
// Address range: 0x4077d0 - 0x407804
int64_t function_4077d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4077d7
    int64_t result = function_408c50(a1 == 0 ? (int64_t)&g57 : a1, 56); // 0x4077f6
    return result;
}
// Address range: 0x407810 - 0x40781f
int64_t function_407810(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g57 : a1); // 0x40781c
    return result;
}
// Address range: 0x407820 - 0x40782f
int64_t function_407820(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g57 : a1; // 0x407828
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g57;
}
// Address range: 0x407830 - 0x407863
int64_t function_407830(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g57 + 8 : a1 + 8; // 0x407849
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40784e
    uint32_t v3 = *v2; // 0x40784e
    uint32_t v4 = (int32_t)a2 % 32; // 0x407852
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x407870 - 0x407883
int64_t function_407870(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g57 + 4 : a1 + 4); // 0x40787c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x407890 - 0x4078bb
int64_t function_407890(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g57 : a1; // 0x407898
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4078b5
        abort();
        // UNREACHABLE
    }
    // 0x4078ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g57;
}
// Address range: 0x4078c0 - 0x407932
int64_t function_4078c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g57 : a5; // 0x4078e2
    int32_t * v2 = __errno_location(); // 0x4078eb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x407904
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x407908
    uint32_t v5 = *(int32_t *)v1; // 0x40790b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x407911
    int64_t result = function_406400(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40791a
    return result;
}
// Address range: 0x407940 - 0x407a21
int64_t function_407940(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g57 : a4; // 0x407962
    int32_t * v2 = __errno_location(); // 0x407968
    int64_t v3 = v1 + 8; // 0x40797f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x407987
    int32_t * v5 = (int32_t *)v1; // 0x40798a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x407998
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40799b
    int64_t v8 = function_406400(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x4079a5
    int64_t v9 = v8 + 1; // 0x4079aa
    int64_t result = function_408a50(v9); // 0x4079bf
    function_406400(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x407a04
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x407a0d
    return result;
}
// Address range: 0x407a30 - 0x407a3a
int64_t function_407a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407a30
    return function_407940(a1, a2, 0, a3);
}
// Address range: 0x407a40 - 0x407ad5
int64_t function_407a40(void) {
    uint32_t v1 = *(int32_t *)&g30; // 0x407a40
    int64_t v2 = v1; // 0x407a40
    int64_t v3 = v2; // 0x407a54
    if (v1 >= 2) {
        int64_t v4 = &g30;
        int64_t v5 = v4 + 16; // 0x407a73
        free((int64_t *)*(int64_t *)v4);
        v3 = &g68;
        while (v5 != (int64_t)g27 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x407a70
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g68;
        }
    }
    int64_t v6 = v3; // 0x407a8d
    if (g28 != 0x611420) {
        // 0x407a8f
        free((int64_t *)g28);
        g28 = 256;
        *(int64_t *)&g29 = (int64_t)&g56;
        v6 = &g68;
    }
    int64_t result = v6; // 0x407ab1
    if (g27 != &g28) {
        // 0x407ab3
        free(g27);
        *(int64_t *)&g27 = (int64_t)&g28;
        result = &g68;
    }
    // 0x407ac6
    *(int32_t *)&g30 = 1;
    return result;
}
// Address range: 0x407ae0 - 0x407af1
int64_t function_407ae0(void) {
    // 0x407ae0
    int64_t v1; // 0x407ae0
    return function_407630(v1, v1, -1, (int64_t *)&g57);
}
// Address range: 0x407b00 - 0x407b0a
int64_t function_407b00(void) {
    // 0x407b00
    int64_t v1; // 0x407b00
    return function_407630(v1, v1, v1, (int64_t *)&g57);
}
// Address range: 0x407b10 - 0x407b26
int64_t function_407b10(int64_t a1) {
    // 0x407b10
    return function_407630(0, a1, -1, (int64_t *)&g57);
}
// Address range: 0x407b30 - 0x407b42
int64_t function_407b30(int64_t a1, int64_t a2) {
    // 0x407b30
    return function_407630(0, a1, a2, (int64_t *)&g57);
}
// Address range: 0x407b50 - 0x407bb8
int64_t function_407b50(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407b60
    return function_407630(a1, a3, -1, &v1);
}
// Address range: 0x407bc0 - 0x407c24
int64_t function_407bc0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407bd0
    return function_407630((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x407c30 - 0x407c3c
int64_t function_407c30(int64_t a1, int64_t a2) {
    // 0x407c30
    return function_407b50(0, a1 & 0xffffffff, a2);
}
// Address range: 0x407c40 - 0x407c4f
int64_t function_407c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407c40
    return function_407bc0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x407c50 - 0x407cc0
int64_t function_407c50(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g57); // 0x407c5d
    int128_t v2 = __asm_movdqa(g58); // 0x407c65
    int128_t v3 = __asm_movdqa(g59); // 0x407c6d
    int64_t v4 = __asm_movaps_5(v1); // bp-72, 0x407c82
    __asm_movaps_5(v2);
    __asm_movaps_5(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x407c98
    uint32_t v6 = *v5; // 0x407c98
    uint32_t v7 = (int32_t)a3 % 32; // 0x407c9d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_407630(0, a1, a2, &v4);
}
// Address range: 0x407cc0 - 0x407ccd
int64_t function_407cc0(int64_t a1, int64_t a2) {
    // 0x407cc0
    return function_407c50(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x407cd0 - 0x407ce1
int64_t function_407cd0(int64_t a1) {
    // 0x407cd0
    return function_407c50(a1, -1, 58);
}
// Address range: 0x407cf0 - 0x407cfa
int64_t function_407cf0(void) {
    // 0x407cf0
    int64_t v1; // 0x407cf0
    return function_407c50(v1, v1, 58);
}
// Address range: 0x407d00 - 0x407d6e
int64_t function_407d00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407d1a
    return function_407630((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x407d70 - 0x407ddc
int64_t function_407d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g57); // 0x407d77
    int128_t v2 = __asm_movdqa(g58); // 0x407d7f
    int128_t v3 = __asm_movdqa(g59); // 0x407d87
    __asm_movaps_5(v1);
    __asm_movaps_5(v2);
    __asm_movaps_5(v3);
    int64_t v4 = 10; // bp-72, 0x407da9
    if (a2 == 0 || a3 == 0) {
        // 0x407dd7
        abort();
        // UNREACHABLE
    }
    // 0x407dba
    return function_407630(a1, a4, a5, &v4);
}
// Address range: 0x407de0 - 0x407de9
int64_t function_407de0(void) {
    // 0x407de0
    int64_t v1; // 0x407de0
    return function_407d70(v1, v1, v1, v1, -1);
}
// Address range: 0x407df0 - 0x407e07
int64_t function_407df0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407df0
    return function_407d70(0, a1, a2, a3, -1);
}
// Address range: 0x407e10 - 0x407e23
int64_t function_407e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407e10
    return function_407d70(0, a1, a2, a3, a4);
}
// Address range: 0x407e30 - 0x407e3a
int64_t function_407e30(void) {
    // 0x407e30
    int64_t v1; // 0x407e30
    return function_407630(v1, v1, v1, &g26);
}
// Address range: 0x407e40 - 0x407e52
int64_t function_407e40(int64_t a1, int64_t a2) {
    // 0x407e40
    return function_407630(0, a1, a2, &g26);
}
// Address range: 0x407e60 - 0x407e71
int64_t function_407e60(int64_t a1, int64_t a2) {
    // 0x407e60
    return function_407630(a1, a2, -1, &g26);
}
// Address range: 0x407e80 - 0x407e96
int64_t function_407e80(int64_t a1) {
    // 0x407e80
    return function_407630(0, a1, -1, &g26);
}
// Address range: 0x407ea0 - 0x4080e2
int64_t function_407ea0(int64_t fd, int64_t a2, int64_t fd2, int64_t a4, int64_t a5) {
    int32_t result = syscall(SYS_vmsplice); // 0x407ed4
    if (result >= 0) {
        // 0x407f1b
        return result;
    }
    int32_t * v1 = __errno_location(); // 0x407ee3
    int32_t v2 = *v1; // 0x407eef
    if (v2 != 95 && (v2 - 22 & -17) != 0) {
        // 0x407f1b
        return result;
    }
    int64_t v3 = (int64_t)v1; // 0x407ee3
    char * str2; // 0x407ea0
    char v4; // 0x407ea0
    int64_t v5; // 0x407ea0
    int64_t v6; // bp-200, 0x407ea0
    if ((int32_t)a5 == 0) {
        // 0x407f06
        str2 = (char *)a4;
        v5 = v3;
        v4 = !((v2 == 95 | (v2 - 22 & -17) == 0));
    } else {
        if ((a5 & 0xfffffffe) != 0) {
            // 0x407f0f
            *v1 = 95;
            // 0x407f1b
            return -1;
        }
        char * v7 = (char *)a4;
        int32_t v8 = __fxstatat(1, (int32_t)fd2, v7, (struct stat *)&v6, 256); // 0x407f4e
        int64_t v9 = 0x100000000 * v3 >> 32; // 0x407f53
        int32_t * v10 = (int32_t *)v9;
        if (v8 == 0) {
            // 0x4080b0
            *v10 = 17;
            // 0x407f1b
            return -1;
        }
        int32_t v11 = *v10; // 0x407f60
        if (v11 == 75) {
            // 0x4080b0
            *v10 = 17;
            // 0x407f1b
            return -1;
        }
        // 0x407f6c
        str2 = v7;
        v5 = v9;
        v4 = 1;
        if (v11 != 2) {
            // 0x407f1b
            return -1;
        }
    }
    char * str = (char *)a2; // 0x407f88
    int32_t len = strlen(str); // 0x407f88
    int32_t len2 = strlen(str2); // 0x407f93
    if (len == 0 || len2 == 0) {
        // 0x407f1b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x407faf
    if (*(char *)(a2 - 1 + (int64_t)len) != 47) {
        // 0x407fb6
        if (*(char *)(a4 - 1 + (int64_t)len2) != 47) {
            // 0x407f1b
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
    }
    // 0x407fc2
    int64_t v12; // bp-344, 0x407ea0
    if (__fxstatat(1, (int32_t)fd, str, (struct stat *)&v12, 256) != 0) {
        // 0x407f1b
        return -1;
    }
    int64_t v13 = 0x100000000 * v5 >> 32; // 0x407fe9
    int32_t v14; // 0x407ea0
    if (v4 != 0) {
        if ((v14 & 0xf000) == 0x4000) {
            // 0x407f1b
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
        // 0x408004
        *(int32_t *)v13 = 2;
        // 0x407f1b
        return -1;
    }
    // 0x408050
    if (__fxstatat(1, (int32_t)fd2, str2, (struct stat *)&v6, 256) != 0) {
        // 0x40807c
        if (*(int32_t *)v13 != 2 || (v14 & 0xf000) != 0x4000) {
            // 0x407f1b
            return -1;
        }
        // 0x407f1b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    if ((v14 & 0xf000) != 0x4000) {
        // 0x40802f
        *(int32_t *)v13 = 20;
        // 0x407f1b
        return -1;
    }
    if ((v14 & 0xf000) == 0x4000) {
        // 0x407f1b
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x4080d1
    *(int32_t *)v13 = 21;
    // 0x407f1b
    return -1;
}
// Address range: 0x4080f0 - 0x408220
int64_t function_4080f0(int64_t a1, int64_t a2) {
    int64_t str = function_404ca0(a1, a2); // 0x408109
    int64_t str2 = function_404ca0(a2, a2); // 0x408114
    int64_t n = function_404d00(str); // 0x40811f
    if (n != function_404d00(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x408134
        return 0;
    }
    int64_t v1 = function_404bc0(); // 0x408165
    int64_t v2 = function_404bc0(); // 0x408170
    char * v3 = (char *)v1; // 0x408183
    int64_t v4; // bp-344, 0x4080f0
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x408200
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x40819c
    int64_t v6; // bp-200, 0x4080f0
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x4081e0
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x4081b4
    // 0x4081b6
    v7 = v4 == v6;
    // 0x4081c5
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x408134
    return v7 & 0xffffffff;
}
// Address range: 0x408220 - 0x408274
int64_t function_408220(int64_t a1) {
    // 0x408220
    int64_t v1; // bp-152, 0x408220
    int32_t v2 = __lxstat(1, (char *)a1, (struct stat *)&v1); // 0x408233
    int32_t * v3 = __errno_location(); // 0x40823a
    if (v2 == 0) {
        // 0x408260
        *v3 = 17;
        return 0xffffffff;
    }
    int32_t v4 = *v3; // 0x408243
    if (v4 != 75) {
        // 0x40824a
        return v4 != 2 ? 0xffffffff : 0;
    }
    // 0x408260
    *v3 = 17;
    return 0xffffffff;
}
// Address range: 0x408280 - 0x40828a
int64_t function_408280(void) {
    // 0x408280
    int64_t path; // 0x408280
    return mkdir((char *)path, 448);
}
// Address range: 0x408290 - 0x4082a6
int64_t function_408290(void) {
    // 0x408290
    int64_t path; // 0x408290
    return open((char *)path, (int32_t)path & -196 | 194);
}
// Address range: 0x4082b0 - 0x4082b1
int64_t function_4082b0(void) {
    // 0x4082b0
    int64_t result; // 0x4082b0
    return result;
}
// Address range: 0x4082d0 - 0x40842d
int64_t function_4082d0(int64_t str, int32_t a2, int64_t * a3, int64_t a4, uint64_t a5) {
    int32_t * v1 = __errno_location(); // 0x4082f5
    int32_t v2 = *v1; // 0x408300
    uint64_t len = (int64_t)strlen((char *)str); // 0x408306
    uint64_t v3 = (int64_t)a2 + a5; // 0x40830e
    if (v3 > len) {
        // 0x408418
        *v1 = 22;
        // 0x408400
        return 0xffffffff;
    }
    int64_t str2 = len - v3 + str;
    if ((int64_t)strspn((char *)str2, "X") < a5) {
        // 0x408418
        *v1 = 22;
        // 0x408400
        return 0xffffffff;
    }
    int64_t v4 = function_40add0(); // 0x408344
    if (v4 == 0) {
        // 0x408400
        return 0xffffffff;
    }
    int32_t v5 = 0x3a2f8; // 0x408366
    int64_t v6; // 0x4082d0
    int64_t v7; // 0x408388
    int64_t v8; // 0x40838c
    char v9; // 0x408391
    if (a5 != 0) {
        v7 = str2 + 1;
        v8 = function_40ae10(v4, 61);
        v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        *(char *)str2 = v9;
        v6 = v7;
        while (v7 != str2 + a5) {
            // 0x408380
            v7 = v6 + 1;
            v8 = function_40ae10(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)v6 = v9;
            v6 = v7;
        }
    }
    int32_t v10; // 0x4082d0
    int64_t v11; // 0x4082d0
    int64_t result; // 0x4082d0
    while ((int32_t)a4 < 0) {
        int32_t v12 = *v1; // 0x4083b8
        v10 = v12;
        v11 = 0xffffffff;
        if (v12 != 17) {
            goto lab_0x4083e5;
        }
        // 0x4083c0
        v5--;
        if (v5 == 0) {
            // 0x4083c6
            function_40af30(v4);
            *v1 = 17;
            result = 0xffffffff;
            return result;
        }
        if (a5 != 0) {
            v7 = str2 + 1;
            v8 = function_40ae10(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)str2 = v9;
            v6 = v7;
            while (v7 != str2 + a5) {
                // 0x408380
                v7 = v6 + 1;
                v8 = function_40ae10(v4, 61);
                v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
                *(char *)v6 = v9;
                v6 = v7;
            }
        }
    }
    // 0x4083dc
    *v1 = v2;
    v10 = v2;
    v11 = a4 & 0xffffffff;
  lab_0x4083e5:
    // 0x4083e5
    function_40af30(v4);
    *v1 = v10;
    result = v11;
  lab_0x408400:
    // 0x408400
    return result;
}
// Address range: 0x408430 - 0x4084ab
int64_t function_408430(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a3 >> 32; // bp-12, 0x408434
    if ((int32_t)a4 < 3) {
        int64_t v2 = *(int64_t *)((8 * a4 & 0x7fffffff8) + (int64_t)&g13); // 0x408444
        int64_t v3; // 0x408430
        return function_4082d0(a1, (int32_t)a2, &v1, v2, v3);
    }
    // 0x40848c
    function_4082b0();
    function_4082b0();
    return function_4082d0(a1, (int32_t)a2, (int64_t *)a3, a4, 6);
}
// Address range: 0x4084b0 - 0x40888d
int64_t function_4084b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x408548
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4084cc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4084e6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40852b
    if (a6 < 10) {
        // 0x40853a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x408632
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x408890 - 0x4088b0
int64_t function_408890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408890
    if (a5 == 0) {
        // 0x4088ab
        return function_4084b0(a1, a2, a3, a4, a5, 0, (int64_t)&g68);
    }
    int64_t v1 = 0; // 0x408897
    v1++;
    int64_t v2 = v1; // 0x4088a9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4088a0
        v1++;
        v2 = v1;
    }
    // 0x4088ab
    return function_4084b0(a1, a2, a3, a4, a5, v2, (int64_t)&g68);
}
// Address range: 0x4088b0 - 0x408910
int64_t function_4088b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4088b0
    int64_t v3 = &v2; // 0x4088b0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4088e3
    int64_t v6; // 0x4088cd
    int64_t * v7; // 0x4088eb
    int64_t v8; // 0x4088eb
    int64_t v9; // 0x4088f7
    if (v5 < 48) {
        // 0x4088c0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x408903
            break;
        }
    } else {
        // 0x4088eb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x408903
            break;
        }
    }
    int64_t v10 = 10; // 0x4088e1
    while (v4 != 9) {
        // 0x4088d9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4088c0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x408903
                break;
            }
        } else {
            // 0x4088eb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x408903
                break;
            }
        }
        // 0x4088d9
        v10 = 10;
    }
    // 0x408903
    return function_4084b0(a1, a2, a3, a4, v3, v10, (int64_t)&g68);
}
// Address range: 0x408910 - 0x4089cc
int64_t function_408910(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x408910
    int64_t v1; // bp-168, 0x408910
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x408910
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x408910
    int64_t v8; // 0x408910
    int64_t v9; // bp-56, 0x408910
    int64_t v10; // 0x408975
    int64_t v11; // 0x408999
    if ((int32_t)v6 < 48) {
        // 0x408960
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4089b0
            break;
        }
    } else {
        // 0x408992
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4089b0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40898a
    int64_t v13 = 10; // 0x40898a
    while (v5 != 9) {
        // 0x40898c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x408960
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4089b0
                break;
            }
        } else {
            // 0x408992
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4089b0
                break;
            }
        }
        // 0x408982
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4089b0
    int64_t v14; // bp-136, 0x408910
    int64_t result = function_4084b0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g68); // 0x4089bf
    return result;
}
// Address range: 0x4089d0 - 0x408a44
int64_t function_4089d0(int64_t a1) {
    // 0x4089d0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x408a33
    return fputs_unlocked(v1, g36);
}
// Address range: 0x408a50 - 0x408a6a
int64_t function_408a50(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x408a54
    if (size != 0 != (mem == NULL)) {
        // 0x408a63
        return (int64_t)mem;
    }
    // 0x408a65
    function_408ca0(size);
    // UNREACHABLE
}
// Address range: 0x408a70 - 0x408a91
int64_t function_408a70(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x408a73
    int64_t v2 = v1; // 0x408a73
    if (v2 < 0) {
        // 0x408a8b
        function_408ca0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408a89
        return function_408a50(v2);
    }
    // 0x408a8b
    function_408ca0(v2);
    // UNREACHABLE
}
// Address range: 0x408aa0 - 0x408aa2
int64_t function_408aa0(void) {
    // 0x408aa0
    int64_t v1; // 0x408aa0
    return function_408a50(v1);
}
// Address range: 0x408ab0 - 0x408ae6
int64_t function_408ab0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x408ad8
        free(v1);
        return (int32_t)&g68 ^ (int32_t)&g68;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x408ac1
    if (a2 != 0 != (mem == NULL)) {
        // 0x408ad0
        return (int64_t)mem;
    }
    // 0x408ae1
    function_408ca0(a1);
    // UNREACHABLE
}
// Address range: 0x408af0 - 0x408b11
int64_t function_408af0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x408af3
    int64_t v2 = v1; // 0x408af3
    if (v2 < 0) {
        // 0x408b0b
        function_408ca0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408b09
        return function_408ab0(a1, v2);
    }
    // 0x408b0b
    function_408ca0(a1);
    // UNREACHABLE
}
// Address range: 0x408b20 - 0x408ba6
int64_t function_408b20(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x408b7b
            function_408ca0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_408ab0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x408b63
    if (a2 == 0) {
        // 0x408b88
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x408b68
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x408b7b
        function_408ca0(a1);
        // UNREACHABLE
    }
    // 0x408b4a
    *(int64_t *)a2 = v2;
    return function_408ab0(a1, v2 * a3);
}
// Address range: 0x408bb0 - 0x408c00
int64_t function_408bb0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x408bb0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x408bfa
            function_408ca0(a1);
            // UNREACHABLE
        }
        // 0x408bd2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_408ab0(a1, v1);
    }
    if (a2 == 0) {
        // 0x408be5
        *(int64_t *)a2 = 128;
        return function_408ab0(0, 128);
    }
    // 0x408bf8
    if (a2 < 0) {
        // 0x408bfa
        function_408ca0(a1);
        // UNREACHABLE
    }
    // 0x408bd2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_408ab0(a1, v1);
}
// Address range: 0x408c00 - 0x408c17
int64_t function_408c00(int64_t a1, int64_t a2) {
    // 0x408c00
    return (int64_t)memset((int64_t *)function_408a50(a1), 0, (int32_t)a1);
}
// Address range: 0x408c20 - 0x408c4e
int64_t function_408c20(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x408c27
    if ((int64_t)v1 < 0) {
        // 0x408c49
        function_408ca0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x408c49
        function_408ca0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x408c3a
    if (mem != NULL) {
        // 0x408c44
        return (int64_t)mem;
    }
    // 0x408c49
    function_408ca0(nmemb);
    // UNREACHABLE
}
// Address range: 0x408c50 - 0x408c78
int64_t function_408c50(int64_t a1, int64_t a2) {
    int64_t v1 = function_408a50(a2); // 0x408c5f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x408c80 - 0x408c93
int64_t function_408c80(int64_t str) {
    // 0x408c80
    return function_408c50(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x408ca0 - 0x408cd1
int64_t function_408ca0(int64_t a1) {
    // 0x408ca0
    error(g25, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x408ce0 - 0x408d0f
int64_t function_408ce0(int64_t a1, int64_t a2) {
    int64_t result = function_408f90(0, 0); // 0x408ce5
    if (result != 0 || *__errno_location() != 12) {
        // 0x408cf2
        return result;
    }
    // 0x408d0a
    function_408ca0(0);
    // UNREACHABLE
}
// Address range: 0x408d10 - 0x408d79
int64_t function_408d10(void) {
    char * v1 = NULL; // bp-24, 0x408d2b
    int64_t v2 = 0; // bp-16, 0x408d33
    int32_t v3 = __getdelim(&v1, (int32_t *)&v2, 10, g37); // 0x408d3c
    if (v3 < 1) {
        // 0x408d5e
        free((int64_t *)v1);
        return 0;
    }
    int64_t v4 = (int64_t)v1; // 0x408d46
    char * v5 = (char *)((int64_t)v3 - 1 + v4); // 0x408d4f
    int64_t response = v4; // 0x408d52
    if (*v5 == 10) {
        // 0x408d70
        *v5 = 0;
        response = (int64_t)v1;
    }
    int32_t v6 = rpmatch((char *)response); // 0x408d54
    // 0x408d5e
    free((int64_t *)v1);
    return v6 >= 0 == (v6 != 0);
}
// Address range: 0x408d80 - 0x408eb5
int64_t function_408d80(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x408db0
    if (cmd != 1030) {
        // 0x408e60
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x408dbc
    int64_t v2; // 0x408d80
    if (g60 < 0) {
        int64_t v3 = function_408d80(fd, 0, v1, a4); // 0x408e04
        int64_t v4 = v3 & 0xffffffff; // 0x408e09
        if ((int32_t)v3 < 0) {
            // 0x408df0
            return v4 & 0xffffffff;
        }
        // 0x408e0f
        v2 = v4;
        if (g60 != -1) {
            // 0x408df0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x408dd7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x408de6
            g60 = 1;
            // 0x408df0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_408d80(fd & 0xffffffff, 0, v1, a4); // 0x408e97
        int64_t v7 = v6 & 0xffffffff; // 0x408e9c
        if ((int32_t)v6 < 0) {
            // 0x408df0
            return v7 & 0xffffffff;
        }
        // 0x408ea6
        g60 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x408e1f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x408e2a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x408df0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x408e42
    close(fd2);
    // 0x408df0
    return 0xffffffff;
}
// Address range: 0x408ec0 - 0x408f00
int64_t function_408ec0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x408eda
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x408eda
        return fflush(stream);
    }
    // 0x408ee8
    function_408f30(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x408f00 - 0x408f28
int64_t function_408f00(int64_t a1) {
    // 0x408f00
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x408f27
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 8); // 0x408f10
    int64_t result = v1; // 0x408f1a
    if ((a1 & 256) != 0) {
        // 0x408f1c
        result = *(int64_t *)(a1 + 88) + v1 - *(int64_t *)(a1 + 72);
    }
    // 0x408f27
    return result;
}
// Address range: 0x408f30 - 0x408f87
int64_t function_408f30(int64_t stream, int32_t offset, int64_t whence) {
    // 0x408f30
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x408f3a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x408f6b
    int64_t result = -1; // 0x408f74
    if (v1 != -1) {
        // 0x408f76
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x408f82
    return result;
}
// Address range: 0x408f90 - 0x409452
int64_t function_408f90(int32_t a1, int32_t a2) {
    // 0x408f90
    int32_t size; // 0x408f90
    int32_t v1; // 0x408f90
    int32_t v2; // 0x408f90
    if (a2 != 0) {
        // 0x408ff0
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x408fc2;
        } else {
            goto lab_0x40900c;
        }
    } else {
        // 0x408fb0
        size = 0x1000;
        if (a1 != 0) {
            // 0x4093b0
            *__errno_location() = 22;
            // 0x408fd6
            return 0;
        }
        goto lab_0x408fc2;
    }
  lab_0x409350:;
    // 0x409350
    int32_t v3; // 0x40934a
    int64_t v4 = v3; // 0x409352
    int64_t v5; // 0x408f90
    int64_t dirp2 = v5; // 0x409352
    int32_t * v6; // 0x409096
    if (v3 != 0) {
        goto lab_0x409361;
    } else {
        // 0x409354
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x409361;
    }
  lab_0x409162:;
    // 0x409162
    int64_t v7; // 0x408f90
    int64_t v8 = v7;
    int64_t v9; // 0x408f90
    int64_t v10 = v9 + 19; // 0x409162
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x408f90
    int64_t v12; // 0x408f90
    int32_t v13; // 0x408f90
    int32_t fd; // 0x4090b2
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x409195
        if (v11 == v12) {
            // break -> 0x4091b0
            goto lab_0x4091b0;
        }
    }
    int64_t v14 = v8; // 0x408f90
    goto lab_0x409120_2;
  lab_0x40942e_2:
    // 0x40942e
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x409361;
  lab_0x408fc2:;
    int64_t * mem = malloc(size); // 0x408fc7
    int32_t v41 = (int64_t)mem; // 0x408fcc
    int32_t result = v41; // 0x408fd4
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x408fd6
        return result;
    }
    goto lab_0x40900c;
  lab_0x40900c:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x409011
    int64_t v46 = v45 - 1; // 0x409020
    *(char *)v46 = 0;
    int64_t v47; // 0x408f90
    int64_t v48; // 0x408f90
    int32_t * v49; // 0x408f90
    int64_t v50; // 0x408f90
    int64_t v33; // 0x408f90
    int64_t v40; // 0x408f90
    int64_t v51; // 0x408f90
    int32_t v38; // 0x408f90
    int32_t v52; // 0x408f90
    int32_t v53; // 0x408f90
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x409388;
    } else {
        // 0x409036
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x409388;
        } else {
            // 0x409061
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x4092a8;
            } else {
                // 0x409096
                v6 = __errno_location();
                int32_t v54 = v1; // 0x4090a3
                int32_t v55 = v42; // 0x4090a3
                int64_t v56 = v11; // 0x4090a3
                int64_t v57 = v46; // 0x4090a3
                int64_t v58 = 0; // 0x4090a3
                int32_t fd2 = -100; // 0x4090a3
                int64_t dirp3; // 0x408f90
                while (true) {
                    // 0x4090a6
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x4093d7
                        break;
                    }
                    // 0x4090c2
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x4093e8
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x4093cd;
                        } else {
                            // 0x4093f1
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x4093cd;
                        }
                    }
                    // 0x4090db
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x4090e0
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x4093c9
                            v40 = (int64_t)*v6;
                            goto lab_0x4093cd;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x409107
                    if (dirp == NULL) {
                        // 0x4093c9
                        v40 = (int64_t)*v6;
                        goto lab_0x4093cd;
                    }
                    // 0x409118
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x409120_2:;
                        int64_t v15 = v14; // 0x408f90
                        int64_t v16; // 0x408f90
                        int64_t v17; // 0x408f90
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x40912b
                            int64_t v20; // 0x408f90
                            int64_t v21; // 0x408f90
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x409300
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x409350;
                                }
                                // 0x40930d
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x409318
                                if (v23 == NULL) {
                                    // 0x40934a
                                    v3 = *v6;
                                    goto lab_0x409350;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x409162;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x409143
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x409330
                            if (*(char *)v28 != 0) {
                                // 0x40933a
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x409143
                                    break;
                                }
                            }
                            // 0x409120
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x409162;
                        } else {
                            // 0x409148
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x40915d
                            int64_t v32; // 0x408f90
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x409120
                                v14 = v31;
                                goto lab_0x409120_2;
                            } else {
                                goto lab_0x409162;
                            }
                        }
                    }
                  lab_0x4091b0:;
                    int64_t v61 = v38; // 0x4091b8
                    uint64_t v62 = v57 - v61; // 0x4091b8
                    int32_t len = strlen(str); // 0x4091bd
                    uint64_t v63 = (int64_t)len; // 0x4091bd
                    int32_t v64 = v60; // 0x4091c8
                    int32_t v65 = v38; // 0x4091c8
                    int64_t dest_mem = v57; // 0x4091c8
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x409440
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x409361;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x4091d6
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x4091e1
                        uint64_t v68 = v67 + v66; // 0x4091e5
                        if (v68 < v66) {
                            goto lab_0x40942e_2;
                        }
                        // 0x4091f8
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x409200
                        if (mem2 == NULL) {
                            goto lab_0x40942e_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x409200
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x40925d
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x40928e
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x409390;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x4092a8;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x4093d7
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x409369;
                } else {
                    goto lab_0x409361;
                }
            }
        }
    }
  lab_0x409388:
    // 0x409388
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x409390;
  lab_0x409390:;
    int64_t v77 = (int64_t)*v49; // 0x409396
    int64_t v34 = v77; // 0x40939a
    int32_t * v35 = v49; // 0x40939a
    int32_t * v36 = v49; // 0x40939a
    int32_t v37 = v53; // 0x40939a
    int64_t v39 = v77; // 0x40939a
    if (a1 != 0) {
        goto lab_0x409371;
    } else {
        goto lab_0x40939c;
    }
  lab_0x409371:
    // 0x409371
    *v35 = (int32_t)v34;
    // 0x408fd6
    return 0;
  lab_0x40939c:
    // 0x40939c
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x409371;
  lab_0x4092a8:
    // 0x4092a8
    if (v51 == v47 - 1 + v48) {
        // 0x409417
        int64_t v78; // 0x408f90
        int64_t v79 = v78 - 1; // 0x40941c
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x4092d2
    int32_t v81 = v50 - v51; // 0x4092d2
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x4092dd
    if (a2 == 0) {
        // 0x409400
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x408fd6
    return result2;
  lab_0x409369:
    // 0x409369
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x40939c;
    } else {
        goto lab_0x409371;
    }
  lab_0x409361:
    // 0x409361
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x409369;
  lab_0x4093cd:
    // 0x4093cd
    close(fd);
    v33 = v40;
    goto lab_0x409369;
}
// Address range: 0x409460 - 0x40953f
int64_t function_409460(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40946c
    uint32_t v2 = *v1; // 0x40946c
    int64_t v3 = a2 & 0xffffffff; // 0x409471
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x409474
    uint64_t v5 = (int64_t)*v4; // 0x409474
    int64_t v6; // 0x4094e2
    if (v3 <= v5) {
      lab_0x4094dc_2:
        // 0x4094dc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x409462
    int64_t v8 = v2; // 0x409460
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4094dc
        goto lab_0x4094dc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x409498
    int64_t v17; // 0x4094a6
    int64_t * v18; // 0x4094c0
    int64_t * v19; // 0x4094c3
    int64_t v20; // 0x4094ce
    int64_t v21; // 0x4094a6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4094a3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4094c0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4094d7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4094dc
            goto lab_0x4094dc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4094dc
            goto lab_0x4094dc_2;
        }
        // 0x409492
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40951b
    int64_t * v23 = (int64_t *)v22; // 0x409520
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x409523
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x409520
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x409537
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40948d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4094dc
            goto lab_0x4094dc_2;
        }
        // 0x409492
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4094a3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4094c0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4094d7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4094dc
                goto lab_0x4094dc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4094dc
                goto lab_0x4094dc_2;
            }
            // 0x409492
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x409500
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x409520
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x409537
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4094dc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x409540 - 0x409b5c
int64_t function_409540(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40955f
    int64_t v2 = *v1; // 0x40955f
    char * str2 = (char *)v2; // 0x40956c
    char c = *str2; // 0x40956c
    int64_t v3 = v2; // 0x409598
    int64_t v4 = 0; // 0x409540
    int32_t v5; // 0x409540
    int64_t v6; // 0x409540
    int64_t v7; // 0x409540
    int64_t v8; // 0x409540
    int64_t v9; // 0x409540
    int64_t v10; // 0x409540
    int64_t v11; // 0x409540
    int64_t v12; // 0x409540
    int64_t v13; // 0x409540
    int64_t str3; // 0x409540
    int64_t v14; // 0x409540
    int64_t v15; // 0x409540
    int64_t v16; // 0x409540
    int64_t v17; // 0x409540
    int32_t v18; // 0x409540
    int32_t v19; // 0x409540
    int32_t v20; // 0x409540
    int32_t v21; // 0x409540
    int32_t v22; // 0x409540
    int32_t v23; // 0x409540
    int32_t v24; // 0x409540
    int32_t v25; // 0x409540
    int32_t v26; // 0x409540
    int32_t v27; // 0x409540
    int32_t v28; // 0x409540
    int32_t v29; // 0x409540
    int64_t nmemb; // 0x409540
    int64_t v30; // 0x409540
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40959c
            while (v31 != 0 == (v31 != 61)) {
                // 0x409598
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4095a8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4095ae
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x409578
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4095dc
                int64_t v34; // 0x409540
                int64_t v35; // 0x409540
                if (strncmp(str, str2, n) == 0) {
                    // 0x4095e5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x409760;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4095f6
                int64_t v37 = *(int64_t *)v36; // 0x4095fa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4095d0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4095e5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x409760;
                        }
                    }
                    // 0x4095f6
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
                  lab_0x409646:
                    // 0x409646
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
                        goto lab_0x4096a0;
                    } else {
                        if (v11 == 0) {
                            // 0x409810
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4096a0;
                        } else {
                            if (v39 == 0) {
                                // 0x4097c0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40966a;
                                } else {
                                    // 0x4097cc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40966a;
                                    } else {
                                        // 0x4097da
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40966a;
                                        } else {
                                            goto lab_0x4096a0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40966a;
                            }
                        }
                    }
                }
              lab_0x4096b1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x409886
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x409a32
                            flockfile(g39);
                            int64_t v41 = *v1; // 0x409a52
                            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x409a9f
                            int64_t v43 = (int64_t)g39;
                            int64_t v44 = v43; // 0x409ab9
                            int64_t v45; // 0x409abb
                            if (*(char *)v42 != 0) {
                                // 0x409abb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g39;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x409ab3
                            while (v17 + nmemb != v42) {
                                // 0x409ab5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x409abb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g39;
                                }
                                // 0x409aa8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x409ae0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g39);
                            v40 = *v1;
                        } else {
                            // 0x409894
                            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4099ef
                        free((int64_t *)v17);
                    }
                    // 0x4098e9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x409900
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4097ae
                    return 63;
                }
                // 0x4096d0
                v5 = v39;
                if (v13 != 0) {
                    // 0x409754
                    v35 = v13;
                    v34 = v25;
                  lab_0x409760:;
                    int32_t * v49 = (int32_t *)a7; // 0x409770
                    uint32_t v50 = *v49; // 0x409770
                    int64_t v51 = v50; // 0x409770
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40977a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x409783
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4099af
                                __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40995a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4097ae
                            return 63;
                        }
                        // 0x4097f8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x409b0f
                                    __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x409a0d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x409a20
                                // 0x4097ae
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40991e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x409932
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40979b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40979e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4097a2
                    int64_t result = v59; // 0x4097a8
                    if (v58 != 0) {
                        // 0x4097aa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4097ae
                    return result;
                }
            } else {
                // 0x4095ae
                v5 = v32;
            }
            // break -> 0x4096d5
            break;
        }
    }
    // 0x4096d5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4096ed
        if (*(char *)(v60 + 1) != 45) {
            // 0x4096f7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4097ae
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x409839
        __fprintf_chk(g39, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x409726
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x409736
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4096a0:
    // 0x4096a0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4096a0
    int64_t v63 = *(int64_t *)v62; // 0x4096a4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4096b1
        goto lab_0x4096b1;
    }
    goto lab_0x409646;
  lab_0x40966a:
    // 0x40966a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x409540
    int32_t v65; // 0x409540
    int32_t v66; // 0x409540
    if (v27 != 0) {
        goto lab_0x4096a0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x409820
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4096a0;
            } else {
                goto lab_0x409691;
            }
        } else {
            // 0x409685
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40997c
                int64_t v67 = (int64_t)mem; // 0x40997c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4096a0;
                } else {
                    // 0x40998f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x409691;
                }
            } else {
                goto lab_0x409691;
            }
        }
    }
  lab_0x409691:
    // 0x409691
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4096a0;
}
// Address range: 0x409b60 - 0x40a126
int64_t function_409b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x409b81
    if (v3 < 1) {
        // 0x409d3e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x409b7d
    int32_t v5 = *(int32_t *)a7; // 0x409b89
    uint64_t v6 = a1 & 0xffffffff; // 0x409b8b
    int64_t v7 = v2; // 0x409b90
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x409b93
    *v8 = 0;
    int64_t v9; // 0x409b60
    int64_t v10; // 0x409b60
    int64_t v11; // 0x409b60
    int64_t v12; // 0x409b60
    int64_t str; // 0x409b60
    int64_t v13; // 0x409b60
    int64_t v14; // 0x409b60
    int64_t v15; // 0x409b60
    int64_t v16; // 0x409b60
    int64_t v17; // 0x409b60
    int32_t v18; // 0x409b60
    char v19; // 0x409b60
    if (v5 == 0) {
        // 0x409d78
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x409baa;
    } else {
        // 0x409ba3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x409bf0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x409bf3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x409cb8;
            } else {
                int64_t v22 = v7 + 1; // 0x409c06
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x409c16
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x409ccc;
                } else {
                    goto lab_0x409c28;
                }
            }
        } else {
            goto lab_0x409baa;
        }
    }
  lab_0x409baa:
    // 0x409baa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x409bb0
    *v24 = 0;
    int64_t v25; // 0x409b60
    int64_t v26; // 0x409b60
    int64_t v27; // 0x409b60
    switch (*(char *)&v2) {
        case 45: {
            // 0x409ca0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x409cad;
        }
        case 43: {
            // 0x409fb0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x409cad;
        }
        default: {
            // 0x409bcc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x409f2f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40a048
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x409cad;
                } else {
                    // 0x409f3d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x409bda;
                }
            } else {
                goto lab_0x409bda;
            }
        }
    }
  lab_0x409cb8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x409cbf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409c28;
    } else {
        goto lab_0x409ccc;
    }
  lab_0x409bda:
    // 0x409bda
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x409cad;
  lab_0x409cad:
    // 0x409cad
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x409cb8;
  lab_0x409c28:;
    uint32_t v30 = *(int32_t *)a7; // 0x409c28
    int64_t v31 = v30; // 0x409c28
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x409c2a
    if ((int64_t)*v32 > v31) {
        // 0x409c2f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409c32
    if (*v33 > v30) {
        // 0x409c37
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x409c3a
    int64_t v35 = v31; // 0x409c3e
    int64_t v36 = v15; // 0x409c3e
    int64_t v37; // 0x409b60
    int64_t v38; // 0x409b60
    int64_t v39; // 0x409b60
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x409da8
        int64_t v41 = v40; // 0x409da8
        v2 = v41;
        int64_t v42; // 0x409b60
        if (*v33 == v40) {
            // 0x409f90
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409f98
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x409db4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409db8
                function_409460(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x409dc8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x409dd1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x409dda
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x409df1
            int64_t v47 = v45 & 0xffffffff; // 0x409df5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x409dfe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x409e04
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x409e06;
                }
            }
            int64_t v48 = v47 + 1; // 0x409de0
            int64_t v49 = v48 & 0xffffffff; // 0x409de0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x409df1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x409dfe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x409e04
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x409e06;
                    }
                }
                // 0x409de0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x409fa8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x409e06;
    } else {
        goto lab_0x409c44;
    }
  lab_0x409ccc:
    // 0x409ccc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x409ccf
    int64_t v51 = v12; // 0x409ccf
    int64_t v52 = v14; // 0x409ccf
    if (*(char *)v10 == 0) {
        goto lab_0x409c28;
    } else {
        goto lab_0x409cd5;
    }
  lab_0x409c44:;
    int32_t v53 = v35; // 0x409c44
    int64_t v54; // 0x409b60
    int64_t v55; // 0x409b60
    int64_t v56; // 0x409b60
    int64_t v57; // 0x409b60
    int64_t v58; // 0x409b60
    int64_t v59; // 0x409b60
    char * v60; // 0x409b60
    int64_t v61; // 0x409b60
    int64_t v62; // 0x409c59
    int64_t v63; // 0x409b60
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x409d93
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x409d96;
    } else {
        // 0x409c4c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409b60
        int64_t v66 = v65 ? -1 : 1; // 0x409c60
        int64_t v67 = (int64_t)"--"; // 0x409b60
        int64_t v68 = v62; // 0x409b60
        int64_t v69 = 3; // 0x409c60
        unsigned char v70 = *(char *)v68; // 0x409c60
        char v71 = *(char *)v67; // 0x409c60
        char v72 = v71; // 0x409c60
        bool v73 = false; // 0x409c60
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
            // 0x409d50
            if (*(char *)v62 == 45) {
                // 0x409e10
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x409e10
                if (c == 0) {
                    goto lab_0x409d5a;
                } else {
                    // 0x409e1d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x409ea0;
                    } else {
                        if (c == 45) {
                            // 0x40a083
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x409ef5;
                        } else {
                            // 0x409e2e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x409ea0;
                            } else {
                                // 0x409e33
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409e54;
                                } else {
                                    // 0x409e3a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x409ea0;
                                    } else {
                                        goto lab_0x409e54;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x409d5a;
            }
        } else {
            uint32_t v75 = *v33; // 0x409c70
            v2 = v75;
            int32_t v76 = *v32; // 0x409c73
            int64_t v77 = v35 + 1; // 0x409c76
            int32_t v78 = v77; // 0x409c79
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x409fe0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409c87
                    function_409460(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x409c95
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x409d96;
        }
    }
  lab_0x409cd5:;
    // 0x409cd5
    int64_t v79; // bp-104, 0x409b60
    int64_t v80 = &v79; // 0x409b6a
    int64_t v81 = v50 + 1; // 0x409cd5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x409cdc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x409ce1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x409ce5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x409ce9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x409cf1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x409cf6
    int32_t c2 = v84; // 0x409cf6
    char * found_char_pos = strchr(str2, c2); // 0x409cf6
    int64_t v87 = *v82; // 0x409cfb
    v2 = v87;
    int64_t v88 = *v85; // 0x409d05
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x409d10
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40a000
            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x409fcd
        *(int32_t *)(v1 + 8) = c2;
        // 0x409d3e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x409cf6
    char v91 = *(char *)(v90 + 1); // 0x409d2b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x409ce5
        if (v91 != 58) {
            // 0x409d3e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409f54
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40a058
                *v8 = 0;
            } else {
                // 0x40a03c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x409f7e
            *v83 = 0;
            // 0x409d3e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x409f5e
        if (v93 != 0) {
            // 0x409ff0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x409f7e
            *v83 = 0;
            // 0x409d3e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x409f71
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x409f7e
            *v83 = 0;
            // 0x409d3e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40a0ba
            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40a06a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40a071
        // 0x409f7e
        *v83 = 0;
        // 0x409d3e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x409ec9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x409ecb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40a0f0
                __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40a0a1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40a0a8
            // 0x409d3e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x409ed6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x409eda
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x409ef5;
  lab_0x409e06:
    // 0x409e06
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409c44;
  lab_0x409ef5:;
    int64_t v99 = function_409540(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x409f13
    // 0x409d3e
    return v99 & 0xffffffff;
  lab_0x409d96:;
    int32_t v100 = v55; // 0x409d96
    if (v100 != (int32_t)v59) {
        // 0x409d9a
        *(int32_t *)a7 = v100;
    }
    // 0x409d3e
    return 0xffffffff;
  lab_0x409d5a:
    // 0x409d5a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409d61
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x409d3e
    return v99 & 0xffffffff;
  lab_0x409ea0:
    // 0x409ea0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x409cd5;
  lab_0x409e54:
    // 0x409e54
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_409540(v6, a2, str, a4, a5, v57, v1, v11, &g15); // 0x409e7a
    if ((int32_t)v101 != -1) {
        // 0x409d3e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x409e8f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x409ea0;
}
// Address range: 0x40a130 - 0x40a186
int64_t function_40a130(int64_t a1) {
    // 0x40a130
    *(int32_t *)&g61 = g33;
    *(int32_t *)&g62 = g32;
    int64_t v1; // 0x40a130
    int64_t result = function_409b60(v1, v1, v1, v1, v1, v1, &g61, a1 & 0xffffffff); // 0x40a156
    g33 = *(int32_t *)&g61;
    g66 = (char *)g64;
    *(int32_t *)&g31 = g63;
    return result;
}
// Address range: 0x40a190 - 0x40a1a8
int64_t function_40a190(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a190
    return function_40a130(1);
}
// Address range: 0x40a1b0 - 0x40a1c3
int64_t function_40a1b0(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x40a1b0
    return function_40a130(0);
}
// Address range: 0x40a1d0 - 0x40a1e5
int64_t function_40a1d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a1d0
    return function_409b60(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40a1f0 - 0x40a206
int64_t function_40a1f0(void) {
    // 0x40a1f0
    return function_40a130(0);
}
// Address range: 0x40a210 - 0x40a228
int64_t function_40a210(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a210
    return function_409b60(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40a230 - 0x40a2aa
int64_t function_40a230(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40a23b
    int64_t v2 = (int64_t)&g16; // 0x40a23b
    int32_t * pwc; // 0x40a230
    int64_t v3; // 0x40a230
    int64_t n; // 0x40a230
    if (a2 == 0) {
        goto lab_0x40a282;
    } else {
        // 0x40a23d
        if (a3 == 0) {
            // 0x40a268
            return -2;
        }
        // 0x40a249
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40a282;
        } else {
            goto lab_0x40a254;
        }
    }
  lab_0x40a282:
    // 0x40a282
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40a230
    pwc = (int32_t *)&v4;
    goto lab_0x40a254;
  lab_0x40a254:;
    char * wstr = (char *)v3; // 0x40a25a
    int64_t ps; // 0x40a230
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40a25a
    int64_t result = v5; // 0x40a25a
    if (v5 < 0xfffffffe) {
        // 0x40a268
        return result;
    }
    int64_t result2 = result; // 0x40a299
    if ((char)function_40a790(0, v3) == 0) {
        // 0x40a29b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40a268
    return result2;
}
// Address range: 0x40a2b0 - 0x40a39f
int64_t function_40a2b0(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x40a2e9
    int64_t * mem = malloc((int32_t)size); // 0x40a2f3
    int64_t result = 0; // 0x40a2fe
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x40a309
        if (v1 < 0) {
            // 0x40a368
            if (*__errno_location() != 34) {
                // 0x40a372
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x40a309
        int64_t v3; // 0x40a2b0
        if (buf_size > v2) {
            // 0x40a380
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x40a31b
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x40a328
            int64_t * mem2 = malloc((int32_t)size2); // 0x40a32e
            if (mem2 == NULL) {
                // 0x40a33b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x40a368
                if (*__errno_location() != 34) {
                    // 0x40a372
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x40a316
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x40a380
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x40a31b
            free(buf);
        }
        // 0x40a350
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x40a390
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x40a33b_2:
    // 0x40a33b
    return result;
}
// Address range: 0x40a3a0 - 0x40a3aa
int64_t function_40a3a0(void) {
    // 0x40a3a0
    return function_4032b0(1);
}
// Address range: 0x40a3b0 - 0x40a4c6
int64_t function_40a3b0(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x40a3d1
    int32_t len = strlen(str); // 0x40a3d1
    if (a2 == 0) {
        // 0x40a49d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x40a437
    int64_t v4 = a3; // 0x40a3b0
    int64_t v5 = a2; // 0x40a43e
    int64_t str4; // 0x40a3b0
    int64_t v6; // 0x40a3b0
    int32_t v7; // 0x40a3b0
    int32_t v8; // 0x40a3b0
    int32_t v9; // 0x40a3b0
    int64_t v10; // 0x40a3b0
    int64_t result; // 0x40a3b0
    int32_t v11; // 0x40a433
    char * str2; // 0x40a452
    while (true) {
        // 0x40a447
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x40a45b
            result = v6;
            if (len == strlen(str2)) {
                // 0x40a49d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x40a46f
                break;
            }
            // 0x40a400
            v7 = 1;
            if (a3 != 0) {
                // 0x40a40e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x40a437
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
    int64_t v12 = v6 + 1; // 0x40a473
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x40a47a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x40a447
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x40a447
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x40a45b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40a49d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x40a46f
                    break;
                }
                // 0x40a400
                v7 = 1;
                if (a3 != 0) {
                    // 0x40a40e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x40a437
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
        // 0x40a46f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x40a488:
    // 0x40a49d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x40a4d0 - 0x40a541
int64_t function_40a4d0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x40a4d0
    if (a3 == -1) {
        // 0x40a530
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x40a4e5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x40a4f4
    function_407e60(1, a1);
    function_407b50(0, 8, a2);
    error(0, 0, format);
    return &g68;
}
// Address range: 0x40a550 - 0x40a668
int64_t function_40a550(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40a57d
    fputs_unlocked(v1, g39);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x40a5f0
        int64_t v5; // 0x40a5f7
        int64_t v6; // 0x40a617
        while (v3 != 0) {
            // 0x40a5db
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x40a5a0
                break;
            }
            // 0x40a5ed
            v4 = v3 + 1;
            v5 = function_407e80(v2);
            __fprintf_chk(g39, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x40a620
                goto lab_0x40a620;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x40a5a3
        int64_t v8 = function_407e80(v2); // 0x40a5ad
        __fprintf_chk(g39, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40a5cd
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40a5db
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x40a5a0
                    break;
                }
                // 0x40a5ed
                v4 = v3 + 1;
                v5 = function_407e80(v2);
                __fprintf_chk(g39, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x40a620
                    goto lab_0x40a620;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x40a5a0
            v7 = v3 + 1;
            v8 = function_407e80(v2);
            __fprintf_chk(g39, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x40a620:;
    int64_t v10 = (int64_t)g39; // 0x40a620
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x40a627
    uint64_t result = *v11; // 0x40a627
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x40a650
        return __overflow(g39, 10);
    }
    // 0x40a631
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x40a670 - 0x40a6e0
int64_t function_40a670(int64_t a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_40a3b0(a2, v2, v1, a5); // 0x40a69c
    int64_t result = v3; // 0x40a6a4
    if (v3 < 0) {
        // 0x40a6b8
        function_40a4d0(a1, a2, v3);
        function_40a550(v2, v1, a5);
        result = -1;
    }
    // 0x40a6a6
    return result;
}
// Address range: 0x40a6e0 - 0x40a72d
int64_t function_40a6e0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x40a6e0
    if (result == 0) {
        // 0x40a721
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x40a718
    int32_t n = a4; // 0x40a718
    int64_t v1 = result; // 0x40a71f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x40a721
        return result;
    }
    int64_t str3 = str2; // 0x40a71f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x40a700
    int64_t result2 = 0; // 0x40a70d
    while (v2 != 0) {
        // 0x40a70f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x40a721
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x40a721
    return result2;
}
// Address range: 0x40a730 - 0x40a78d
int64_t function_40a730(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40a737
    int64_t v2; // 0x40a730
    int64_t result = function_40b9a0(a1, v2); // 0x40a748
    if ((v2 & 32) != 0) {
        // 0x40a770
        if ((int32_t)result == 0) {
            // 0x40a774
            *__errno_location() = 0;
        }
        // 0x40a76a
        return 0xffffffff;
    }
    // 0x40a751
    if ((int32_t)result == 0) {
        // 0x40a76a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40a758
    if (v1 == 0) {
        // 0x40a75a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40a76a
    return result2;
}
// Address range: 0x40a790 - 0x40a7ee
int64_t function_40a790(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40a796
    if (locale == NULL) {
        // 0x40a7c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40a796
    bool v2; // 0x40a790
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g17; // 0x40a790
    int64_t v5 = v1; // 0x40a790
    int64_t v6 = 2; // 0x40a7b5
    unsigned char v7 = *(char *)v5; // 0x40a7b5
    char v8 = *(char *)v4; // 0x40a7b5
    char v9 = v8; // 0x40a7b5
    bool v10 = false; // 0x40a7b5
    while (v7 == v8) {
        // 0x40a7a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40a7c1
    int64_t v13 = v1; // 0x40a7c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40a7c3
        return 0;
    }
    int64_t v14 = 6; // 0x40a7c1
    unsigned char v15 = *(char *)v13; // 0x40a7dd
    char v16 = *(char *)v12; // 0x40a7dd
    char v17 = v16; // 0x40a7dd
    bool v18 = false; // 0x40a7dd
    while (v15 == v16) {
        // 0x40a7d0
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
// Address range: 0x40a7f0 - 0x40a826
int64_t function_40a7f0(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40a7f6
    if (v1 == 0) {
        // 0x40a820
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x40a808
    char v5 = *(char *)v2; // 0x40a80b
    while (v5 != 0) {
        // 0x40a800
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x40a813
    return v4 % a2;
}
// Address range: 0x40a830 - 0x40ad92
int64_t function_40a830(void) {
    char * v1 = nl_langinfo(14); // 0x40a846
    char * v2 = g65; // 0x40a84b
    char * v3; // 0x40a830
    int64_t v4; // 0x40a830
    int64_t v5; // 0x40a830
    int64_t v6; // 0x40a830
    int64_t v7; // 0x40a830
    int32_t size; // 0x40a830
    int32_t size2; // 0x40a830
    int32_t len; // 0x40a902
    int64_t v8; // 0x40a902
    char * env_val; // 0x40a8ed
    if (v2 == NULL) {
        // 0x40a8e8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40a955;
        } else {
            // 0x40a8fa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40a955;
            } else {
                // 0x40a8ff
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40a8ed
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40ad85
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40a955;
                    } else {
                        // 0x40acf9
                        size2 = len + 14;
                        goto lab_0x40a91b;
                    }
                } else {
                    goto lab_0x40a91b;
                }
            }
        }
    } else {
        // 0x40a830
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40a86a;
    }
  lab_0x40ab9c:;
    // 0x40ab9c
    struct _IO_FILE * stream; // 0x40a9db
    int32_t v10 = __uflow(stream); // 0x40ab9f
    int64_t v11; // 0x40a830
    int64_t v12 = v11; // 0x40aba9
    int64_t v13; // 0x40a830
    int64_t v14 = v13; // 0x40aba9
    int32_t v15 = v10; // 0x40aba9
    int64_t v16; // 0x40a830
    int64_t v17 = v16; // 0x40aba9
    int64_t v18 = v11; // 0x40aba9
    int64_t v19 = v13; // 0x40aba9
    int64_t v20 = v16; // 0x40aba9
    if (v10 == -1) {
        // break -> 0x40abaf
        goto lab_0x40abaf;
    }
    goto lab_0x40aa29;
  lab_0x40aa1e:;
    // 0x40aa1e
    int64_t v90; // 0x40a830
    int64_t * v32; // 0x40aa10
    *v32 = v90 + 1;
    int64_t v89; // 0x40a830
    v12 = v89;
    int64_t v91; // 0x40a830
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40a830
    v17 = v92;
    goto lab_0x40aa29;
  lab_0x40aa29:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40a830
    int32_t v25; // bp-120, 0x40a830
    int32_t v26; // bp-184, 0x40a830
    int64_t v27; // 0x40a9db
    int64_t v28; // 0x40a9f8
    int64_t v29; // 0x40a9fd
    int64_t * v30; // 0x40aa14
    switch (c) {
        case 32: {
            goto lab_0x40aa10;
        }
        case 10: {
            goto lab_0x40aa10;
        }
        case 9: {
            goto lab_0x40aa10;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40ac01
            int32_t v33; // 0x40a830
            char v34; // 0x40a830
            int32_t v35; // 0x40ac0e
            if (v31 < *v30) {
                // 0x40abe0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40ac0b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40ac01
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40abe0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40ac0b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40abf0
                v36 = v33;
            }
            // 0x40acdf
            if (v36 == -1) {
                // break -> 0x40abaf
                break;
            }
            goto lab_0x40aa10;
        }
        default: {
            // 0x40aa3f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40abaf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40aa68
            int64_t v39 = v37 + 4; // 0x40aa6a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40aa76
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40aa78
            while (v41 == 0) {
                // 0x40aa68
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40aa96
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40aaa2
            int64_t v45 = v43 + 4; // 0x40aaa4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40aab0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40aab2
            while (v47 == 0) {
                // 0x40aaa2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40aa9f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40aac8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40aad8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40aadc
            int64_t v52 = v51 + v48; // 0x40aae5
            int64_t * mem; // 0x40a830
            int64_t v53; // 0x40a830
            int64_t v54; // 0x40a830
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40ac1b
                int64_t v56 = v55 + 3; // 0x40ac27
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40ab01
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40ab10
            if (mem == NULL) {
                // 0x40ad3c
                free((int64_t *)v21);
                function_40b9a0(v27, v53);
                v24 = (int64_t)&g16;
                goto lab_0x40a9b4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40ab28
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40ab32
            uint32_t v62 = (int32_t)v59; // 0x40ab35
            int64_t v63; // 0x40a830
            if (v62 >= 8) {
                // 0x40ac44
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40ac5e
                int64_t v66 = v61 - v65; // 0x40ac62
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40ac6d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40ac7e
                    int64_t v70 = v69 & 0xffffffff; // 0x40ac7e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40ac7b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40ad0f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40ab47
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40ab4b
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
            int64_t v73 = v51 + 1; // 0x40ab5b
            int64_t v74 = v60 - 1; // 0x40ab5f
            uint32_t v75 = (int32_t)v73; // 0x40ab64
            int64_t v76; // 0x40a830
            if (v75 >= 8) {
                // 0x40ac92
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40ac9c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40acac
                int64_t v80 = v74 - v79; // 0x40acb0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40acbb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40accb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40acc9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40ad26
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40ad2e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40ab76
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40ab7a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40ad73
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40ab8e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40aa1e;
            } else {
                goto lab_0x40ab9c;
            }
        }
    }
  lab_0x40aa10:;
    int64_t v93 = v23; // 0x40a830
    int64_t v94 = v22; // 0x40a830
    int64_t v95 = v21; // 0x40a830
    goto lab_0x40aa10_2;
  lab_0x40a955:;
    int64_t * mem3 = malloc(size); // 0x40a955
    int64_t v97 = (int64_t)&g16; // 0x40a960
    int64_t v98; // 0x40a830
    int64_t path; // 0x40a830
    if (mem3 == NULL) {
        goto lab_0x40a932;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40a955
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40a976;
    }
  lab_0x40a86a:;
    int64_t str = v1 == NULL ? (int64_t)&g16 : (int64_t)v1; // 0x40a85d
    char v100 = *v3; // 0x40a86a
    int64_t v101; // 0x40a830
    if (v100 == 0) {
        // 0x40a8c4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40a830
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40a830
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40a8b0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40a8b7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40a880
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40a88d
        char v107 = *(char *)v106; // 0x40a892
        v102 = v107;
        if (v107 == 0) {
            // 0x40a8c4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40a89b
    v104 = v103 + 1;
  lab_0x40a8b7:
    // 0x40a8c4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40a932:;
    char * v108 = (char *)v97;
    g65 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40a86a;
  lab_0x40a976:;
    int64_t v109 = v98 + path; // 0x40a976
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40a9a2
    v24 = (int64_t)&g16;
    if (fd >= 0) {
        // 0x40a9d1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40ad02
            close(fd);
            v24 = (int64_t)&g16;
        } else {
            // 0x40a9f5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40aa10_2:;
                uint64_t v96 = *v32; // 0x40aa10
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40ab9c;
                } else {
                    goto lab_0x40aa1e;
                }
            }
          lab_0x40abaf:
            // 0x40abaf
            function_40b9a0(v27, v19);
            v24 = (int64_t)&g16;
            if (v18 != 0) {
                // 0x40abce
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40a9b4;
  lab_0x40a91b:;
    int64_t * mem4 = malloc(size2); // 0x40a91b
    v97 = (int64_t)&g16;
    if (mem4 != NULL) {
        // 0x40a9c1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40a976;
    } else {
        goto lab_0x40a932;
    }
  lab_0x40a9b4:
    // 0x40a9b4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40a932;
}
// Address range: 0x40ada0 - 0x40adc3
int64_t function_40ada0(int64_t a1) {
    int64_t result = function_408a50(24); // 0x40ada9
    *(int64_t *)result = a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}
// Address range: 0x40add0 - 0x40adff
int64_t function_40add0(void) {
    // 0x40add0
    int64_t v1; // 0x40add0
    int64_t v2 = function_40aff0(v1, v1, v1); // 0x40add1
    int64_t result = 0; // 0x40adde
    if (v2 != 0) {
        // 0x40ade0
        result = function_408a50(24);
        *(int64_t *)result = v2;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x40adfd
    return result;
}
// Address range: 0x40ae00 - 0x40ae04
int64_t function_40ae00(int64_t result) {
    // 0x40ae00
    return result;
}
// Address range: 0x40ae10 - 0x40af05
int64_t function_40ae10(int64_t a1, uint64_t a2) {
    uint64_t v1 = a2 + 1; // 0x40ae17
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x40ae2b
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x40ae2f
    int64_t v4 = *v3; // 0x40ae33
    int64_t result = *v2; // 0x40ae33
    int64_t v5; // 0x40ae10
    while (true) {
        int64_t v6 = result;
        int64_t v7 = v4;
        int64_t v8 = v7; // 0x40ae70
        int64_t v9; // 0x40ae10
        int64_t v10; // 0x40ae10
        if (v7 >= a2) {
            // 0x40ae38
            v10 = v7;
            v9 = v6;
            v5 = v6;
            if (v7 == a2) {
                // break -> 0x40aecf
                break;
            }
        } else {
            int64_t v11 = 1; // 0x40ae84
            int64_t v12 = 256 * v8 | 255; // 0x40ae88
            v8 = v12;
            int64_t v13 = v11; // 0x40ae91
            while (v12 < a2) {
                // 0x40ae80
                v11 = v13 + 1;
                v12 = 256 * v8 | 255;
                v8 = v12;
                v13 = v11;
            }
            // 0x40ae93
            int64_t v14; // bp-64, 0x40ae10
            function_40b300(a1, &v14, v11);
            int64_t v15 = &v14; // 0x40aea5
            int64_t v16 = 256 * v7 | 255; // 0x40aeb7
            int64_t v17 = 256 * v6 | (int64_t)*(char *)v15; // 0x40aebe
            v15++;
            int64_t v18 = v16; // 0x40aec4
            int64_t v19 = v17; // 0x40aec4
            while (v16 < a2) {
                // 0x40aea8
                v16 = 256 * v18 | 255;
                v17 = 256 * v19 | (int64_t)*(char *)v15;
                v15++;
                v18 = v16;
                v19 = v17;
            }
            // 0x40aec6
            v10 = v16;
            v9 = v17;
            v5 = v17;
            if (v16 == a2) {
                // break -> 0x40aecf
                break;
            }
        }
        uint64_t v20 = v9;
        uint64_t v21 = v10 - a2; // 0x40ae46
        uint64_t v22 = v21 % v1;
        result = v20 % v1;
        v4 = v22 - 1;
        if (v20 <= v10 - v22) {
            // 0x40aef8
            *v2 = v20 / v1;
            *v3 = v21 / v1;
            return result;
        }
    }
    // 0x40aecf
    *v3 = 0;
    *v2 = 0;
    result = v5;
  lab_0x40aedf:
    // 0x40aedf
    return result;
}
// Address range: 0x40af10 - 0x40af2e
int64_t function_40af10(int64_t a1) {
    // 0x40af10
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return &g68;
}
// Address range: 0x40af30 - 0x40af81
int64_t function_40af30(int64_t a1) {
    int64_t v1 = function_40b460(a1); // 0x40af40
    int32_t * v2 = __errno_location(); // 0x40af48
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return v1 & 0xffffffff;
}
// Address range: 0x40af90 - 0x40afed
int64_t function_40af90(int64_t a1) {
    // 0x40af90
    function_407e80(a1);
    int32_t * err_num = __errno_location(); // 0x40afa7
    char * format; // 0x40af90
    if (*err_num == 0) {
        // 0x40afdf
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x40afb9
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x40afc5
    error(g25, *err_num, format);
    return &g68;
}
// Address range: 0x40aff0 - 0x40b2df
int64_t function_40aff0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_408a50(0x1038); // 0x40b10d
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x40af90;
        *(int64_t *)(result + 16) = 0;
        // 0x40b062
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_40ba20(a1, "rb"); // 0x40b017
        int64_t result2 = 0; // 0x40b022
        if (stream != 0) {
            // 0x40b028
            result2 = function_408a50(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x40b044
            *(int64_t *)(result2 + 8) = 0x40af90;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x40b062
        return result2;
    }
    int64_t result3 = function_408a50(0x1038); // 0x40b07d
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x40b093
    *(int64_t *)(result3 + 8) = 0x40af90;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x40b0b1
    int64_t v2; // 0x40aff0
    int128_t pid2; // bp-72, 0x40aff0
    if (fd < 0) {
        // 0x40b138
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x40b157
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x40b0db
        close(fd);
        if (v3 >= 2048) {
            // 0x40b0f8
            function_40b760(v1);
            // 0x40b062
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x40b266
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x40b272
        uint64_t v7 = v6 + v4; // 0x40b278
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x40b0f8
            function_40b760(v1);
            // 0x40b062
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x40b2a1
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x40b2ad
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x40b2c5
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x40b0f8
            function_40b760(v1);
            // 0x40b062
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x40b16d
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x40b174
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x40b190
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x40b18e
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x40b19f
    if (v16 >= 2048) {
        // 0x40b0f8
        function_40b760(v1);
        // 0x40b062
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x40b1ba
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x40b1c1
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x40b1df
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x40b1dd
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x40b1ee
    if (v21 >= 2048) {
        // 0x40b0f8
        function_40b760(v1);
        // 0x40b062
        return result3;
    }
    // 0x40b1fe
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x40b216
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x40b21d
    if (v23 == 0) {
        // 0x40b0f8
        function_40b760(v1);
        // 0x40b062
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x40b22f
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x40b22d
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x40b0f8
    function_40b760(v1);
    // 0x40b062
    return result3;
}
// Address range: 0x40b2e0 - 0x40b2e5
int64_t function_40b2e0(int64_t a1, int64_t a2) {
    // 0x40b2e0
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x40b2e0
    return result;
}
// Address range: 0x40b2f0 - 0x40b2f5
int64_t function_40b2f0(int64_t a1, int64_t a2) {
    // 0x40b2f0
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x40b2f0
    return result;
}
// Address range: 0x40b300 - 0x40b45c
int64_t function_40b300(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        int32_t * v2 = __errno_location(); // 0x40b31f
        int64_t result = fread_unlocked(a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x40b35a
        int64_t v3 = a3 - result; // 0x40b365
        if (v3 == 0) {
            // 0x40b36a
            return result;
        }
        int64_t v4 = v3; // 0x40b365
        int64_t v5 = result + v1; // 0x40b362
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x40b334
        *v2 = (v1 & 32) == 0 ? 0 : *v2;
        int64_t result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6); // 0x40b35a
        v4 -= result2;
        while (v4 != 0) {
            int64_t v7 = v5;
            v5 = result2 + v7;
            v6 = *(int64_t *)(a1 + 16);
            *v2 = (v7 & 32) == 0 ? 0 : *v2;
            result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6);
            v4 -= result2;
        }
        // 0x40b36a
        return result2;
    }
    int64_t v8 = *(int64_t *)24; // 0x40b380
    int64_t v9 = a3; // 0x40b392
    int64_t * v10; // 0x40b300
    int64_t v11; // 0x40b300
    int64_t v12; // 0x40b300
    int64_t v13; // 0x40b300
    if (v8 < a3) {
        int64_t v14 = v8;
        int64_t v15 = v14 + v1; // 0x40b3a3
        v9 -= v14;
        memcpy((int64_t *)v1, (int64_t *)(0x1038 - v14), (int32_t)v14);
        while (v15 % 8 != 0) {
            // 0x40b3ba
            function_40b4b0(32, 2104);
            v13 = v9;
            v12 = v15;
            v10 = (int64_t *)2104;
            v11 = 2048;
            if (v9 < 2049) {
                goto lab_0x40b415;
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
            int64_t result3 = function_40b4b0(32, v17); // 0x40b3ed
            int64_t v19 = v18 - 2048; // 0x40b3f2
            if (v19 == 0) {
                // 0x40b438
                *(int64_t *)24 = 0;
                return result3;
            }
            v17 += 2048;
            v18 = v19;
        }
        // 0x40b404
        function_40b4b0(32, 2104);
        v13 = v18;
        v12 = v17;
        v10 = (int64_t *)2104;
        v11 = 2048;
    } else {
        // 0x40b450
        v13 = a3;
        v12 = v1;
        v10 = (int64_t *)(0x1038 - v8);
        v11 = v8;
    }
  lab_0x40b415:;
    int64_t * dest_mem = memcpy((int64_t *)v12, v10, (int32_t)v13); // 0x40b41e
    *(int64_t *)24 = v11 - v13;
    // 0x40b36a
    return (int64_t)dest_mem;
}
// Address range: 0x40b460 - 0x40b4a9
int64_t function_40b460(int64_t a1) {
    // 0x40b460
    __explicit_bzero_chk(a1, 0x1038, -1);
    free((int64_t *)a1);
    if (a1 == 0) {
        // 0x40b4a0
        return 0;
    }
    // 0x40b48a
    return function_40b9a0(a1, 0x1038);
}
// Address range: 0x40b4b0 - 0x40b755
int64_t function_40b4b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x40b4b0
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x40b4b7
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x40b4c6
    int64_t v4 = *v1 + 1; // 0x40b4d0
    *v1 = v4;
    int64_t v5 = a2; // 0x40b4e1
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x40b4f2
    int64_t v9 = *v8; // 0x40b4f2
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x40b4f8
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x40b513
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x40b532
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x40b538
    int64_t v14 = *v13; // 0x40b538
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x40b53c
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x40b560
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x40b575
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x40b57c
    int64_t v19 = *v18; // 0x40b57c
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x40b580
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x40b59b
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x40b5ad
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x40b5b8
    int64_t v24 = *v23; // 0x40b5b8
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x40b5c9
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x40b5e0
    int64_t v27 = v7 + 32; // 0x40b5e3
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x40b5fd
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x40b4e8
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
    int64_t v29 = a2 + 1024; // 0x40b61b
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x40b62a
    int64_t v33 = *v32; // 0x40b62a
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x40b630
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x40b655
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x40b666
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x40b66d
    int64_t v38 = *v37; // 0x40b66d
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x40b674
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x40b698
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x40b6ad
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x40b6b4
    int64_t v43 = *v42; // 0x40b6b4
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x40b6b8
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x40b6d3
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x40b6e5
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x40b6f0
    int64_t v48 = *v47; // 0x40b6f0
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x40b701
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x40b718
    int64_t result = v31 + 32; // 0x40b71b
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x40b735
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x40b620
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
    // 0x40b745
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x40b760 - 0x40b994
int64_t function_40b760(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x40b7a7
    int64_t v2 = a1; // 0x40b7c3
    int64_t * v3 = (int64_t *)v2; // 0x40b7c8
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x40b7cb
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x40b7cb
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x40b7cf
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x40b7cf
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x40b7d3
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x40b7da
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x40b7de
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x40b7eb
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x40b7ee
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x40b7f5
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x40b802
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x40b805
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x40b80c
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x40b819
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x40b81c
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x40b823
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x40b830
    int64_t v21 = v5 - v20; // 0x40b836
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x40b840
    uint64_t v23 = v11 - v22; // 0x40b849
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x40b854
    int64_t v25 = v14 - v24; // 0x40b85e
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x40b86d
    int64_t v27 = v23 + v25; // 0x40b873
    int64_t v28 = v17 - v26; // 0x40b876
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x40b881
    int64_t v30 = v28 + v25; // 0x40b884
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x40b89a
    while (v1 != v2) {
        // 0x40b7c8
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
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x40b8a0
    uint64_t v33 = *v32 + v28; // 0x40b8a0
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x40b8a4
    int64_t v35 = *v34 + v29; // 0x40b8a4
    int64_t * v36 = (int64_t *)v31; // 0x40b8a8
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x40b8ae
    int64_t v38 = *v36 + v20 - v35; // 0x40b8b2
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x40b8b9
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x40b8bd
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x40b8c1
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x40b8c7
    uint64_t v43 = *v39 + v22 - v41; // 0x40b8ce
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x40b8d5
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x40b8d9
    int64_t v46 = *v42 + v24 - v45; // 0x40b8e2
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x40b8e9
    uint64_t v48 = *v44 + v26 - v47; // 0x40b8f2
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x40b8f9
    int64_t v50 = v35 - v49; // 0x40b902
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x40b90c
    uint64_t v52 = v41 - v51; // 0x40b915
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x40b920
    int64_t result = v52 + v50; // 0x40b923
    int64_t v54 = v45 - v53; // 0x40b92a
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x40b935
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x40b939
    int64_t v57 = v54 + v52; // 0x40b93f
    int64_t v58 = v47 - v56; // 0x40b942
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x40b94d
    int64_t v60 = v58 + v54; // 0x40b950
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x40b8a0
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
    // 0x40b96c
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x40b9a0 - 0x40ba1b
int64_t function_40b9a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40b9a7
    if (fileno(stream) < 0) {
        // 0x40ba07
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40b9ba
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40b9eb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40ba07
            return fclose(stream);
        }
    }
    // 0x40b9bc
    if ((int32_t)function_408ec0(a1, v1) == 0) {
        // 0x40ba07
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40b9c8
    int32_t v3 = *v2; // 0x40b9d0
    int64_t result = fclose(stream); // 0x40b9de
    if (v3 != 0) {
        // 0x40ba10
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40b9e0
    return result;
}
// Address range: 0x40ba20 - 0x40bab3
int64_t function_40ba20(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x40ba27
    int64_t result = (int64_t)file; // 0x40ba27
    if (file == NULL) {
        // 0x40ba41
        return result;
    }
    uint32_t v1 = fileno(file); // 0x40ba37
    if (v1 >= 3) {
        // 0x40ba41
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_40bac0((int64_t)v1, v2); // 0x40ba5a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x40ba98
        function_40b9a0(result, v2);
        // 0x40ba41
        return 0;
    }
    // 0x40ba5e
    if ((int32_t)function_40b9a0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, mode); // 0x40ba70
        if (v4 != NULL) {
            // 0x40ba41
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x40ba7d
    close(fd);
    // 0x40ba41
    return 0;
}
// Address range: 0x40bac0 - 0x40bace
int64_t function_40bac0(int64_t a1, int64_t a2) {
    // 0x40bac0
    int64_t v1; // 0x40bac0
    return function_408d80(a1, 0, 3, v1);
}
// Address range: 0x40bad0 - 0x40bb2d
int64_t function_40bad0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bad0
    return function_401c28();
}
// Address range: 0x40bb30 - 0x40bb31
int64_t function_40bb30(void) {
    // 0x40bb30
    int64_t result; // 0x40bb30
    return result;
}
// Address range: 0x40bb40 - 0x40bb58
int64_t function_40bb40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bb40
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g22);
}
// Address range: 0x40bb58 - 0x40bb78
int64_t function_40bb58(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g18; // 0x40bb62
    while (*(int64_t *)v1 != -1) {
        // 0x40bb63
        v1 -= 8;
    }
    // 0x40bb74
    return result;
}
