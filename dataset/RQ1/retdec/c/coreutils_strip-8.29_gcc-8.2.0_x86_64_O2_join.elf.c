// Address range: 0x401920 - 0x401925
int64_t function_401920(void) {
    // 0x401920
    abort();
    // UNREACHABLE
}
// Address range: 0x401925 - 0x40192a
int64_t function_401925(void) {
    // 0x401925
    abort();
    // UNREACHABLE
}
// Address range: 0x40192a - 0x40192f
int64_t function_40192a(void) {
    // 0x40192a
    abort();
    // UNREACHABLE
}
// Address range: 0x40192f - 0x401934
int64_t function_40192f(void) {
    // 0x40192f
    abort();
    // UNREACHABLE
}
// Address range: 0x401934 - 0x401939
int64_t function_401934(void) {
    // 0x401934
    abort();
    // UNREACHABLE
}
// Address range: 0x401939 - 0x40193e
int64_t function_401939(void) {
    // 0x401939
    abort();
    // UNREACHABLE
}
// Address range: 0x401940 - 0x4027e0
int64_t function_401940(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1 >> 32; // 0x401949
    int32_t v2 = 0; // bp-152, 0x40195a
    int32_t v3 = 0; // bp-128, 0x401962
    int32_t v4 = 0; // bp-148, 0x40196b
    function_403de0(a2);
    setlocale(LC_ALL, (char *)&g1);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g54 = function_403be0(3, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    int64_t v5; // 0x401940
    function_4081f0(0x403a60, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v5);
    function_4081f0(0x402af0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v5);
    g51 = 1;
    g50 = 0;
    *(int16_t *)&g48 = 0;
    g41 = 0;
    int64_t v6 = v1 & 0xffffffff; // 0x401a14
    int32_t v7 = function_4077c0(v6, a2, "-a:e:i1:2:j:o:t:v:z", &g3, 0, v5); // 0x401a1b
    int32_t v8; // 0x401940
    int64_t v9; // 0x401940
    int64_t v10; // 0x401940
    int64_t v11; // 0x401940
    int64_t v12; // 0x401940
    int64_t v13; // 0x401940
    int64_t v14; // bp-136, 0x401940
    int32_t v15; // bp-156, 0x401940
    int64_t v16; // 0x401b95
    if (v7 != -1) {
        int64_t v17 = &v15;
        int64_t v18; // bp-184, 0x401940
        int64_t v19 = (int64_t)&v18 + 56;
        bool v20; // 0x401940
        int64_t v21 = v20 ? -1 : 1;
        v8 = v7;
        while (true) {
          lab_0x401a24:
            // 0x401a24
            v12 = v11;
            int32_t v22 = v8;
            v15 = 0;
            if (v22 == 105) {
                // 0x401d30
                g39 = 1;
                v13 = 0;
                v10 = v12;
                goto lab_0x401a00;
            } else {
                if (v22 > 105) {
                    if (v22 == 118) {
                        // 0x401c38
                        g51 = 0;
                        goto lab_0x401c40;
                    } else {
                        if (v22 > 118) {
                            if (v22 == 128) {
                                // 0x401c90
                                g41 = 1;
                                v13 = 0;
                                v10 = v12;
                            } else {
                                if (v22 > 128) {
                                    if (v22 == 129) {
                                        // 0x4019f0
                                        g41 = 2;
                                        v13 = 0;
                                        v10 = v12;
                                    } else {
                                        if (v22 != 130) {
                                          lab_0x401b39:
                                            // 0x401b39
                                            function_4034f0(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401a65
                                        g38 = 1;
                                        v13 = 0;
                                        v10 = v12;
                                    }
                                } else {
                                    if (v22 != 122) {
                                        // 0x401b39
                                        function_4034f0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x401a79
                                    *(char *)&g16 = 0;
                                    v13 = 0;
                                    v10 = v12;
                                }
                            }
                            goto lab_0x401a00;
                        } else {
                            if (v22 == 111) {
                                int64_t v23 = (int64_t)g75; // 0x401ca8
                                int64_t v24 = 5; // 0x401cbc
                                int64_t v25 = v23;
                                int64_t v26 = (int64_t)"auto";
                                unsigned char v27 = *(char *)v25; // 0x401cbc
                                char v28 = *(char *)v26; // 0x401cbc
                                char v29 = v28; // 0x401cbc
                                bool v30 = false; // 0x401cbc
                                while (v27 == v28) {
                                    v24--;
                                    int64_t v31 = v26 + v21; // 0x401cbc
                                    int64_t v32 = v25 + v21; // 0x401cbc
                                    v29 = v27;
                                    v30 = true;
                                    if (v24 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v25 = v32;
                                    v26 = v31;
                                    v27 = *(char *)v25;
                                    v28 = *(char *)v26;
                                    v29 = v28;
                                    v30 = false;
                                }
                                unsigned char v33 = v29;
                                int64_t v34 = (int64_t)!((v27 < v33 | v30)) - (int64_t)(v27 < v33); // 0x401cc1
                                if ((int32_t)v34 != 0) {
                                    // 0x401d72
                                    function_402990(v23);
                                    v15 = 3;
                                    v13 = 3;
                                    v10 = v12;
                                } else {
                                    // 0x401cce
                                    g46 = 1;
                                    v13 = v34;
                                    v10 = v12;
                                }
                                goto lab_0x401a00;
                            } else {
                                if (v22 != 116) {
                                    if (v22 != 106) {
                                        // 0x401b39
                                        function_4034f0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x401b95
                                    v16 = (int64_t)g75;
                                    char v35 = *g75; // 0x401b9c
                                    if (v35 < 51) {
                                        // 0x401ba7
                                        if (*(char *)(v16 + 1) != 0) {
                                            goto lab_0x401bc6;
                                        } else {
                                            int64_t v36 = *(int64_t *)(a2 - 8 + 8 * (int64_t)*(int32_t *)0x60d29c); // 0x401bb4
                                            if (v36 + 2 == v16) {
                                                int32_t * v37 = (int32_t *)(4 * (int64_t)(v35 == 50) | v19); // 0x402374
                                                *v37 = *v37 + 1;
                                                int64_t v38 = v35 == 50 ? 2 : 1; // 0x402379
                                                v15 = v38;
                                                v13 = v38;
                                                v10 = v12;
                                                goto lab_0x401a00;
                                            } else {
                                                goto lab_0x401bc6;
                                            }
                                        }
                                    } else {
                                        goto lab_0x401bc6;
                                    }
                                } else {
                                    unsigned char v39 = *g75; // 0x401aa9
                                    int32_t v40 = 10; // 0x401ab0
                                    if (v39 != 0) {
                                        // 0x401d4a
                                        v40 = v39;
                                        if (*(char *)((int64_t)g75 + 1) != 0) {
                                            // 0x401d56
                                            v40 = 0;
                                            char * str; // 0x401aa2
                                            if (strcmp(str, "\\0") != 0) {
                                                goto lab_0x402723;
                                            }
                                        }
                                    }
                                    int32_t v41 = g17; // 0x401abb
                                    if (v41 > -1 == (v41 != v40)) {
                                        goto lab_0x402753;
                                    }
                                    // 0x401acd
                                    g17 = v40;
                                    v13 = 0;
                                    v10 = v12;
                                    goto lab_0x401a00;
                                }
                            }
                        }
                    }
                } else {
                    if (v22 == 49) {
                        int64_t v42 = function_402910((int64_t)g75, a2); // 0x401d0f
                        function_4028c0(&g20, v42);
                        v13 = v15;
                        v10 = v12;
                        goto lab_0x401a00;
                    } else {
                        if (v22 > 49) {
                            if (v22 == 97) {
                                goto lab_0x401c40;
                            } else {
                                if (v22 != 101) {
                                    if (v22 != 50) {
                                        // 0x401b39
                                        function_4034f0(1);
                                        // UNREACHABLE
                                    }
                                    int64_t v43 = function_402910((int64_t)g75, a2); // 0x401ce7
                                    function_4028c0(&g19, v43);
                                    v13 = v15;
                                    v10 = v12;
                                } else {
                                    char * str2 = g47; // 0x401af9
                                    if (str2 != NULL) {
                                        // 0x401b0c
                                        if (strcmp(str2, g75) != 0) {
                                            // 0x402701
                                            v9 = (int64_t)g75;
                                            goto lab_0x402701_2;
                                        }
                                    }
                                    // 0x401b1c
                                    g47 = g75;
                                    v13 = 0;
                                    v10 = v12;
                                }
                                goto lab_0x401a00;
                            }
                        } else {
                            if (v22 == -130) {
                                // 0x4025de
                                function_4034f0(0);
                                // UNREACHABLE
                            }
                            if (v22 != 1) {
                                if (v22 == -131) {
                                    // 0x401c03
                                    function_405e90((int64_t)g32, "join", "GNU coreutils", (int64_t)g21, "Mike Haertel", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401b39;
                            }
                            // 0x401b5c
                            function_4038b0((int64_t)g75, &v14, (int64_t *)&v3, &v4, &v2, &v15);
                            v13 = v15;
                            v10 = v17;
                            goto lab_0x401a00;
                        }
                    }
                }
            }
        }
    }
  lab_0x401d8c:;
    int64_t v44 = g30; // 0x401d8c
    v2 = 0;
    int64_t v45 = (int64_t)"-a:e:i1:2:j:o:t:v:z"; // 0x401d9d
    if (v1 > v44) {
        int64_t v46 = *(int64_t *)(8 * v44 + a2); // 0x401db3
        g30 = (int32_t)v44 + 1;
        function_4038b0(v46, &v14, (int64_t *)&v3, &v4, &v2, &v15);
        int64_t v47 = g30; // 0x401dd7
        while (v1 > v47) {
            // 0x401db0
            v46 = *(int64_t *)(8 * v47 + a2);
            g30 = (int32_t)v47 + 1;
            function_4038b0(v46, &v14, (int64_t *)&v3, &v4, &v2, &v15);
            v47 = g30;
        }
        // 0x401de2
        v45 = &v3;
    }
    int32_t v48 = v4; // 0x401de9
    int64_t v49 = a2; // 0x401de9
    int64_t v50 = v1; // 0x401de9
    int64_t v51; // 0x401940
    int64_t v52; // 0x401940
    int64_t v53; // 0x401940
    int64_t v54; // 0x401940
    int64_t v55; // bp-104, 0x401940
    int64_t v56; // bp-112, 0x401940
    int32_t v57; // bp-120, 0x401940
    int64_t v58; // bp-72, 0x401940
    int64_t v59; // bp-80, 0x401940
    int64_t v60; // bp-88, 0x401940
    if (v4 != 2) {
        goto lab_0x402643;
    } else {
        // 0x401def
        if (v3 != 0) {
            // 0x402338
            function_4028c0(&g20, 0);
            function_4028c0(&g19, 0);
        }
        int32_t v61; // 0x401940
        if (v61 != 0) {
            // 0x402315
            function_4028c0(&g20, 1);
            function_4028c0(&g19, 1);
        }
        // 0x401e05
        if (g20 == -1) {
            // 0x4022f0
            g20 = 0;
        }
        // 0x401e13
        if (g19 == -1) {
            // 0x4022e0
            g19 = 0;
        }
        int64_t v62 = g33; // 0x401e3e
        if (strcmp(g57, "-") != 0) {
            // 0x402355
            v62 = function_403b40((int64_t)g57, (int64_t *)"r");
        }
        // 0x401e44
        v51 = v62;
        if (v51 == 0) {
            int64_t v63 = function_405880(0, 3, (int64_t)g57); // 0x402679
            error(1, *__errno_location(), "%s", (char *)v63);
            v54 = v63;
            v53 = v1;
            goto lab_0x40269c;
        } else {
            int64_t v64 = g33; // 0x401e6a
            if (strcmp(g58, "-") != 0) {
                // 0x402300
                v64 = function_403b40((int64_t)g58, (int64_t *)"r");
            }
            // 0x401e70
            v52 = v64;
            if (v52 == 0) {
                int64_t v65 = function_405880(0, 3, (int64_t)g58); // 0x4026de
                error(1, *__errno_location(), "%s", (char *)v65);
                v9 = v51;
                goto lab_0x402701_2;
            } else {
                // 0x401e79
                if (v51 == v52) {
                    goto lab_0x402619;
                } else {
                    // 0x401e82
                    function_403b10(v51, 2, v45);
                    function_403b10(v52, 2, v45);
                    v57 = 0;
                    v56 = 0;
                    v55 = 0;
                    function_403400(v51, (int64_t *)&v57, 1);
                    v60 = 0;
                    v59 = 0;
                    v58 = 0;
                    function_403400(v52, &v60, 2);
                    if (g46 != 0) {
                        // 0x401f15
                        g45 = 0;
                        g44 = 0;
                    }
                    // 0x401f39
                    if (g38 != 0) {
                        // 0x402266
                        if (v57 == 0 == v60 == 0) {
                            goto lab_0x401fea;
                        } else {
                            // 0x40228d
                            function_402e10(&g40, (int64_t)&g40);
                            g60 = 0;
                            g61 = 0;
                            if (v57 != 0) {
                                // 0x4025be
                                v57 = 0;
                                function_403400(v51, (int64_t *)&v57, 1);
                            }
                            // 0x4022b4
                            if (v60 != 0) {
                                // 0x4022c0
                                v60 = 0;
                                function_403400(v52, &v60, 2);
                            }
                            goto lab_0x401f50_2;
                        }
                    } else {
                        goto lab_0x401f50_2;
                    }
                }
            }
        }
    }
  lab_0x4020f2:
    // 0x4020f2
    if ((char)function_403400(v51, (int64_t *)&v57, 1) != 0) {
        int64_t v66 = *(int64_t *)v58; // 0x4020c8
        int64_t v67 = *(int64_t *)(8 * (int64_t)v57 - 8 + v55); // 0x4020d0
        int64_t v68 = *(int64_t *)(v66 + 24); // 0x4020d9
        int64_t v69 = *(int64_t *)(v67 + 24); // 0x4020dd
        if ((int32_t)function_402b90(v69, v67 + 40, v68, v66 + 40, g20, g19) != 0) {
            // 0x402162
        } else {
            goto lab_0x4020f2;
        }
    } else {
        // 0x402108
        v57++;
    }
  lab_0x401fea:;
    // 0x401fea
    int64_t v70; // 0x401940
    int64_t v71 = v70;
    int64_t v72 = 0; // bp-144, 0x401fea
    char v73; // 0x401940
    char v74; // 0x401940
    if (g41 == 2) {
        goto lab_0x402016;
    } else {
        // 0x401ffc
        if (g48 == 0 || g49 == 0) {
            if (v71 == 0) {
                // 0x4024a0
                goto lab_0x4024a7;
            } else {
                // 0x40238e
                v73 = 1;
                v74 = g53;
                if (g53 != 0) {
                    goto lab_0x402579;
                } else {
                    goto lab_0x4023a5;
                }
            }
        } else {
            goto lab_0x402016;
        }
    }
  lab_0x4025e5_2:
    // 0x4025e5
    function_405a00((int64_t)g75);
    error(1, (int32_t)"invalid field number: %s" ^ (int32_t)"invalid field number: %s", dcgettext(NULL, "invalid field number: %s", 5));
    int64_t v75 = v1; // 0x402614
    goto lab_0x402619;
  lab_0x401a00:
    // 0x401a00
    v2 = v13;
    int32_t v89 = function_4077c0(v6, a2, "-a:e:i1:2:j:o:t:v:z", &g3, 0, v10); // 0x401a1b
    v8 = v89;
    v11 = v10;
    if (v89 == -1) {
        // break -> 0x401d8c
        goto lab_0x401d8c;
    }
    goto lab_0x401a24;
  lab_0x401c40:;
    int64_t v90 = function_4063e0((int64_t)g75, 0, 10, &v60, (int64_t *)&g1, v12); // 0x401c59
    if ((int32_t)v90 != 0) {
        goto lab_0x4025e5_2;
    }
    // 0x401c66
    if (v60 >= 3) {
        goto lab_0x4025e5_2;
    }
    if (v60 == 1) {
        // 0x401d3e
        g53 = 1;
    } else {
        // 0x401c83
        g52 = 1;
    }
    goto lab_0x401be9;
  lab_0x401be9:
    // 0x401be9
    v13 = v15;
    v10 = v12;
    goto lab_0x401a00;
  lab_0x401bc6:;
    int64_t v91 = function_402910(v16, a2); // 0x401bc6
    function_4028c0(&g20, v91);
    function_4028c0(&g19, g20);
    goto lab_0x401be9;
  lab_0x402643:
    // 0x402643
    v54 = v49;
    v53 = v50;
    if (v48 == 0) {
        // 0x402647
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401b39
        function_4034f0(1);
        // UNREACHABLE
    }
    goto lab_0x40269c;
  lab_0x40269c:
    // 0x40269c
    function_405a00(*(int64_t *)(v54 - 8 + 8 * v53));
    error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
    // 0x401b39
    function_4034f0(1);
    // UNREACHABLE
  lab_0x402701_2:
    // 0x402701
    error(1, (int32_t)"conflicting empty-field replacement strings" ^ (int32_t)"conflicting empty-field replacement strings", dcgettext(NULL, "conflicting empty-field replacement strings", 5));
  lab_0x402723:
    // 0x402723
    function_405a00(v9);
    error(1, (int32_t)"multi-character tab %s" ^ (int32_t)"multi-character tab %s", dcgettext(NULL, "multi-character tab %s", 5));
  lab_0x402753:
    // 0x402753
    error(1, (int32_t)"incompatible tabs" ^ (int32_t)"incompatible tabs", dcgettext(NULL, "incompatible tabs", 5));
    goto lab_0x402775;
  lab_0x402619:;
    char * format = dcgettext(NULL, "both files cannot be standard input", 5); // 0x402625
    error(1, *__errno_location(), format);
    v48 = &g79;
    v49 = (int64_t)format;
    v50 = v75;
    goto lab_0x402643;
  lab_0x402775:;
    int64_t v76 = function_405880(0, 3, (int64_t)g58); // 0x402783
    error(1, *__errno_location(), "%s", (char *)v76);
    goto lab_0x4027a6;
  lab_0x401f50_2:;
    int32_t v81 = v57;
    v70 = 0;
    if (v81 == 0) {
        goto lab_0x401fea;
    } else {
        // 0x401f5e
        if (v60 == 0) {
            // 0x401fea
            v70 = v81;
            goto lab_0x401fea;
        } else {
            while (true) {
              lab_generated_0:;
                int64_t v82 = *(int64_t *)v58; // 0x401f7d
                int64_t v83 = *(int64_t *)v55; // 0x401f85
                int64_t v84 = *(int64_t *)(v82 + 24); // 0x401f8c
                int64_t v85 = *(int64_t *)(v83 + 24); // 0x401f90
                int32_t v86 = function_402b90(v85, v83 + 40, v84, v82 + 40, g20, g19); // 0x401f9d
                int32_t v87; // 0x401940
                while (v86 >= 0) {
                    if (v86 == 0) {
                        goto lab_0x4020f2;
                    }
                    // 0x401fab
                    if (g52 != 0) {
                        // 0x402221
                        function_402e10(&g40, *(int64_t *)v58);
                    }
                    // 0x401fb8
                    v60 = 0;
                    function_403400(v52, &v60, 2);
                    g50 = 1;
                    v70 = 0;
                    if (v57 == 0) {
                        // break (via goto) -> 0x401fea
                        goto lab_0x401fea;
                    }
                    // 0x401f5e
                    v87 = v57;
                    if (v60 == 0) {
                        // 0x401fea
                        v70 = v87;
                        goto lab_0x401fea;
                    }
                    v82 = *(int64_t *)v58;
                    v83 = *(int64_t *)v55;
                    v84 = *(int64_t *)(v82 + 24);
                    v85 = *(int64_t *)(v83 + 24);
                    v86 = function_402b90(v85, v83 + 40, v84, v82 + 40, g20, g19);
                }
                // 0x4021ed
                if (g53 != 0) {
                    int64_t v88 = *(int64_t *)v55; // 0x402428
                    function_402e10((int64_t *)v88, (int64_t)&g40);
                }
                // 0x4021fa
                v57 = 0;
                function_403400(v51, (int64_t *)&v57, 1);
                g50 = 1;
                // 0x401f50
                v70 = 0;
                if (v57 == 0) {
                    // break -> 0x401fea
                    break;
                }
                // 0x401f5e
                v87 = v57;
                if (v60 == 0) {
                    // 0x401fea
                    v70 = v87;
                    goto lab_0x401fea;
                }
                goto lab_generated_1;
            }
            goto lab_0x401fea;
        }
    }
  lab_0x4027a6:;
    int64_t v77 = function_405880(0, 3, (int64_t)g57); // 0x4027b4
    error(1, *__errno_location(), "%s", (char *)v77);
    return &g79;
  lab_0x402016:
    // 0x402016
    v74 = 0;
    int64_t * v78; // 0x401940
    if (v71 == 0 || g53 == 0) {
        // 0x402023
        v78 = NULL;
        if (g52 != 0) {
            goto lab_0x4024a7;
        } else {
            goto lab_0x402037;
        }
    } else {
        goto lab_0x402579;
    }
  lab_0x402579:;
    int64_t v79 = *(int64_t *)v55; // 0x402583
    function_402e10((int64_t *)v79, (int64_t)&g40);
    v73 = v74;
    goto lab_0x4023a5;
  lab_0x4024a7:
    // 0x4024a7
    v78 = NULL;
    if (v60 == 0) {
        goto lab_0x402037;
    } else {
        goto lab_0x4024b8;
    }
  lab_0x402037:
    // 0x402037
    free(v78);
    function_402b40(&v56, &v55);
    int64_t v80 = &v58; // 0x402054
    function_402b40(&v59, &v58);
    if ((int32_t)function_406810(v51, v80) != 0) {
        goto lab_0x4027a6;
    } else {
        // 0x402072
        if ((int32_t)function_406810(v52, v80) == 0) {
            // 0x402082
            return g48 != 0 ? 1 : (int64_t)g49;
        }
        goto lab_0x402775;
    }
  lab_0x4023a5:
    // 0x4023a5
    if (v60 != 0) {
        // 0x4023ad
        g50 = 1;
    }
    // 0x4023b4
    if ((char)function_403040(v51, &v72, 1) != 0) {
        if (g53 != 0) {
            // 0x402590
            function_402e10((int64_t *)v72, (int64_t)&g40);
            if (g48 != 0) {
                // 0x4025ac
                if (g53 == 0) {
                    // break -> 0x4023ea
                    break;
                }
            }
        } else {
            // 0x4023e1
            if (g48 != 0) {
                // break -> 0x4023ea
                break;
            }
        }
        while ((char)function_403040(v51, &v72, 1) != 0) {
            // 0x4023d4
            if (g53 != 0) {
                // 0x402590
                function_402e10((int64_t *)v72, (int64_t)&g40);
                if (g48 != 0) {
                    // 0x4025ac
                    if (g53 == 0) {
                        // break -> 0x4023ea
                        break;
                    }
                }
            } else {
                // 0x4023e1
                if (g48 != 0) {
                    // break -> 0x4023ea
                    break;
                }
            }
        }
    }
    // 0x4023ea
    if ((g52 || v73) == 0) {
        goto lab_0x402406;
    } else {
        // 0x4023fa
        if (v60 != 0) {
            goto lab_0x4024b8;
        } else {
            goto lab_0x402406;
        }
    }
  lab_0x4024b8:
    // 0x4024b8
    if (g52 != 0) {
        // 0x402556
        function_402e10(&g40, *(int64_t *)v58);
    }
    // 0x4024c0
    if (v57 != 0) {
        // 0x40254a
        g50 = 1;
    }
    // 0x4024d0
    if ((char)function_403040(v52, &v72, 2) != 0) {
        if (g52 != 0) {
            // 0x4024ff
            function_402e10(&g40, v72);
            if (g49 != 0) {
                // 0x402517
                if (g52 == 0) {
                    // break -> 0x402406
                    break;
                }
            }
        } else {
            // 0x4024f1
            if (g49 != 0) {
                // break -> 0x402406
                break;
            }
        }
        while ((char)function_403040(v52, &v72, 2) != 0) {
            // 0x4024e8
            if (g52 != 0) {
                // 0x4024ff
                function_402e10(&g40, v72);
                if (g49 != 0) {
                    // 0x402517
                    if (g52 == 0) {
                        // break -> 0x402406
                        break;
                    }
                }
            } else {
                // 0x4024f1
                if (g49 != 0) {
                    // break -> 0x402406
                    break;
                }
            }
        }
    }
    goto lab_0x402406;
  lab_0x402406:
    // 0x402406
    v78 = NULL;
    if (v72 != 0) {
        // 0x402414
        function_402ac0(v72);
        v78 = (int64_t *)v72;
    }
    goto lab_0x402037;
}
// Address range: 0x4027e0 - 0x40280b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4027e0
    int64_t v1; // 0x4027e0
    __libc_start_main(0x401940, (int32_t)a4, (char **)&v1, (void (*)())0x408180, (void (*)())0x4081e0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40280b - 0x40282a
int64_t function_40280b(void) {
    // 0x40280b
    return &g31;
}
// Address range: 0x40282a - 0x402861
int64_t function_40282a(void) {
    // 0x40282a
    return 0;
}
// Address range: 0x402861 - 0x4028b8
int64_t function_402861(void) {
    // 0x402861
    if (g36 != 0) {
        // 0x4028b7
        int64_t result; // 0x402861
        return result;
    }
    int64_t v1 = g37; // 0x402894
    int64_t result2; // 0x4028a6
    if (g37 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x4028a6
        result2 = function_40280b();
        g36 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x402896
        v1++;
    }
    // 0x40288a
    g37 = v1;
    // 0x4028a6
    result2 = function_40280b();
    g36 = 1;
    return result2;
}
// Address range: 0x4028b8 - 0x4028bd
int64_t function_4028b8(void) {
    // 0x4028b8
    return function_40282a();
}
// Address range: 0x4028c0 - 0x402910
int64_t function_4028c0(int64_t * a1, int64_t a2) {
    // 0x4028c0
    int64_t result; // 0x4028c0
    if (a1 == (int64_t *)-1) {
        // 0x4028d4
        *a1 = a2;
        return result;
    }
    if ((int64_t)a1 != a2) {
        // 0x4028de
        error(1, (int32_t)"incompatible join fields %lu, %lu" ^ (int32_t)"incompatible join fields %lu, %lu", dcgettext(NULL, "incompatible join fields %lu, %lu", 5));
        return &g79;
    }
    // 0x4028d4
    *a1 = a2;
    return result;
}
// Address range: 0x402910 - 0x402990
int64_t function_402910(int64_t a1, int64_t a2) {
    // 0x402910
    int64_t v1; // bp-16, 0x402910
    int64_t v2; // 0x402910
    int64_t v3 = function_4063e0(a1, 0, 10, &v1, (int64_t *)&g1, v2); // 0x40292a
    int32_t v4 = v3; // 0x40292f
    if (v4 == 1) {
        // 0x402950
        return -2;
    }
    char * format; // 0x402974
    if (v4 != 0) {
        // 0x40295d
        function_405a00(a1);
        format = dcgettext(NULL, "invalid field number: %s", 5);
        error(1, (int32_t)"invalid field number: %s" ^ (int32_t)"invalid field number: %s", format);
        return &g79;
    }
    // 0x402938
    if (v1 != 0) {
        // 0x402942
        return v1 - 1;
    }
    // 0x40295d
    function_405a00(a1);
    format = dcgettext(NULL, "invalid field number: %s", 5);
    error(1, (int32_t)"invalid field number: %s" ^ (int32_t)"invalid field number: %s", format);
    return &g79;
}
// Address range: 0x402990 - 0x402ac0
int64_t function_402990(int64_t a1) {
    int64_t v1 = a1;
    char * str = (char *)v1; // 0x4029eb
    char * found_byte_pos = strpbrk(str, ", \t"); // 0x4029eb
    int64_t v2 = 0; // 0x4029f3
    if (found_byte_pos != NULL) {
        // 0x4029f5
        *found_byte_pos = 0;
        v2 = (int64_t)found_byte_pos + 1;
    }
    char v3 = *str; // 0x4029fc
    int64_t v4; // 0x402990
    int32_t v5; // 0x402990
    char * format; // 0x402aa4
    if (v3 == 48) {
        // 0x4029a0
        v5 = 0;
        v4 = 0;
        if (*(char *)(v1 + 1) != 0) {
            // break -> 0x402a5d
            break;
        }
    } else {
        if (v3 > 50) {
            // 0x402a2d
            function_405a00(v1);
            error(1, (int32_t)"invalid file number in field spec: %s" ^ (int32_t)"invalid file number in field spec: %s", dcgettext(NULL, "invalid file number in field spec: %s", 5));
            goto lab_0x402a5d;
        }
        // 0x402a0a
        if (*(char *)(v1 + 1) != 46) {
            // 0x402a8d
            function_405a00(v1);
            format = dcgettext(NULL, "invalid field specifier: %s", 5);
            error(1, (int32_t)"invalid field specifier: %s" ^ (int32_t)"invalid field specifier: %s", format);
            return &g79;
        }
        // 0x402a10
        v5 = (int32_t)v3 - 48;
        v4 = function_402910(v1 + 2, (int64_t)", \t");
    }
    int64_t result = function_405fd0(24); // 0x4029b3
    *(int32_t *)result = v5;
    *(int64_t *)(result + 8) = v4;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)&g18 = result;
    g20 = result;
    while (v2 != 0) {
        // 0x4029e0
        v1 = v2;
        str = (char *)v1;
        found_byte_pos = strpbrk(str, ", \t");
        v2 = 0;
        if (found_byte_pos != NULL) {
            // 0x4029f5
            *found_byte_pos = 0;
            v2 = (int64_t)found_byte_pos + 1;
        }
        // 0x4029fc
        v3 = *str;
        if (v3 == 48) {
            // 0x4029a0
            v5 = 0;
            v4 = 0;
            if (*(char *)(v1 + 1) != 0) {
                // break -> 0x402a5d
                break;
            }
        } else {
            if (v3 > 50) {
                // 0x402a2d
                function_405a00(v1);
                error(1, (int32_t)"invalid file number in field spec: %s" ^ (int32_t)"invalid file number in field spec: %s", dcgettext(NULL, "invalid file number in field spec: %s", 5));
                goto lab_0x402a5d;
            }
            // 0x402a0a
            if (*(char *)(v1 + 1) != 46) {
                // 0x402a8d
                function_405a00(v1);
                format = dcgettext(NULL, "invalid field specifier: %s", 5);
                error(1, (int32_t)"invalid field specifier: %s" ^ (int32_t)"invalid field specifier: %s", format);
                return &g79;
            }
            // 0x402a10
            v5 = (int32_t)v3 - 48;
            v4 = function_402910(v1 + 2, (int64_t)", \t");
        }
        // 0x4029ae
        result = function_405fd0(24);
        *(int32_t *)result = v5;
        *(int64_t *)(result + 8) = v4;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)&g18 = result;
        g20 = result;
    }
    // 0x402a28
    return result;
}
// Address range: 0x402ac0 - 0x402ae8
int64_t function_402ac0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x402ac4
    free((int64_t *)*v1);
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x402ad5
    free((int64_t *)*v2);
    *v2 = 0;
    return &g79;
}
// Address range: 0x402af0 - 0x402b32
int64_t function_402af0(void) {
    // 0x402af0
    int64_t result; // 0x402af0
    if (g55 != 0) {
        // 0x402afd
        function_402ac0(g55);
        free((int64_t *)g55);
        result = &g79;
    }
    // 0x402b0d
    if (g56 == 0) {
        // 0x402b30
        return result;
    }
    // 0x402b19
    function_402ac0(g56);
    free((int64_t *)g56);
    return &g79;
}
// Address range: 0x402b40 - 0x402b8e
int64_t function_402b40(int64_t * a1, int64_t * a2) {
    int64_t v1 = 0; // 0x402b50
    if (a1 == NULL) {
        // 0x402b81
        free(a2);
        return &g79;
    }
    int64_t * v2 = (int64_t *)(8 * v1 + (int64_t)a2); // 0x402b5c
    int64_t v3 = *v2; // 0x402b5c
    int64_t v4 = 0; // 0x402b63
    if (v3 != 0) {
        // 0x402b65
        function_402ac0(v3);
        v4 = *v2;
    }
    // 0x402b72
    free((int64_t *)v4);
    v1++;
    while (v1 < v4) {
        // 0x402b58
        v2 = (int64_t *)(8 * v1 + (int64_t)a2);
        v3 = *v2;
        v4 = 0;
        if (v3 != 0) {
            // 0x402b65
            function_402ac0(v3);
            v4 = *v2;
        }
        // 0x402b72
        free((int64_t *)v4);
        v1++;
    }
    // 0x402b81
    free(a2);
    return &g79;
}
// Address range: 0x402b90 - 0x402c88
int64_t function_402b90(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, uint64_t a6) {
    if (a5 >= a1) {
        // 0x402bc0
        if (a6 >= a3) {
            // 0x402bb6
            return 0;
        }
        // 0x402bd0
        return *(int64_t *)(a4 + 8 + 16 * a6) != 0 ? 0xffffffff : 0;
    }
    int64_t v1 = 16 * a5 + a2; // 0x402b9f
    uint64_t v2 = *(int64_t *)(v1 + 8); // 0x402ba5
    if (a6 >= a3) {
        // 0x402bb6
        return v2 != 0;
    }
    int64_t str = *(int64_t *)v1; // 0x402ba2
    int64_t v3 = 16 * a6 + a4; // 0x402bec
    int64_t str2 = *(int64_t *)v3; // 0x402bef
    uint64_t v4 = *(int64_t *)(v3 + 8); // 0x402bf2
    if (v2 == 0) {
        // 0x402bd0
        return v4 != 0 ? 0xffffffff : 0;
    }
    // 0x402bfb
    if (v4 == 0) {
        // 0x402bb6
        return 1;
    }
    // 0x402c00
    int64_t memcmp_rc; // 0x402b90
    if (g39 == 0) {
        // 0x402c40
        if (g54 != 0) {
            // 0x402c60
            return function_406320(str, v2, str2, v4);
        }
        int64_t n = v2 > v4 ? v4 : v2; // 0x402c4f
        memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n);
    } else {
        // 0x402c09
        memcmp_rc = function_403d90(str, str2, v2 > v4 ? v4 : v2, a4);
    }
    // 0x402c18
    if ((int32_t)memcmp_rc != 0) {
        // 0x402bb6
        return memcmp_rc;
    }
    // 0x402c1c
    if (v2 < v4) {
        // 0x402bb6
        return 0xffffffff;
    }
    // 0x402c21
    return v2 != v4;
}
// Address range: 0x402c90 - 0x402ce1
int64_t function_402c90(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x402c90
    if (a1 < a2) {
        int64_t v1 = 16 * a1 + a3; // 0x402c99
        int64_t n = *(int64_t *)(v1 + 8); // 0x402c9c
        if (n != 0) {
            int64_t data = *(int64_t *)v1; // 0x402cac
            return fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g32);
        }
    }
    // 0x402cc0
    if (g47 == NULL) {
        // 0x402ce0
        int64_t result; // 0x402c90
        return result;
    }
    // 0x402ccc
    return fputs_unlocked(g47, g32);
}
// Address range: 0x402cf0 - 0x402e0a
int64_t function_402cf0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a3; // 0x402d0f
    if (g46 == 0) {
        // 0x402d11
        v1 = *(int64_t *)(a1 + 24);
    }
    uint64_t v2 = v1;
    int32_t v3 = g17; // 0x402d15
    uint32_t v4 = v3 < 0 ? 32 : v3; // 0x402d24
    int64_t v5 = v2 > a2 ? a2 : v2; // 0x402d39
    uint32_t v6 = v4 % 256;
    int64_t v7 = a1 + 40; // 0x402d40
    int64_t result = v6; // 0x402d4d
    if (v5 != 0) {
        int64_t v8 = 0;
        int64_t v9 = (int64_t)g32; // 0x402d50
        int64_t * v10 = (int64_t *)(v9 + 40); // 0x402d57
        uint64_t v11 = *v10; // 0x402d57
        if (v11 >= *(int64_t *)(v9 + 48)) {
            // 0x402df0
            __overflow(g32, v6);
        } else {
            // 0x402d65
            *v10 = v11 + 1;
            *(char *)v11 = (char)v4;
        }
        int64_t v12 = v8 + 1; // 0x402d7a
        result = function_402c90(v8, *(int64_t *)(a1 + 24), v7);
        while (v12 != v5) {
            // 0x402d50
            v8 = v12;
            v9 = (int64_t)g32;
            v10 = (int64_t *)(v9 + 40);
            v11 = *v10;
            if (v11 >= *(int64_t *)(v9 + 48)) {
                // 0x402df0
                __overflow(g32, v6);
            } else {
                // 0x402d65
                *v10 = v11 + 1;
                *(char *)v11 = (char)v4;
            }
            // 0x402d70
            v12 = v8 + 1;
            result = function_402c90(v8, *(int64_t *)(a1 + 24), v7);
        }
    }
    int64_t v13 = a2 + 1; // 0x402d98
    if (v2 <= v13) {
        // 0x402ddc
        return result;
    }
    int64_t v14 = (int64_t)g32; // 0x402da8
    int64_t * v15 = (int64_t *)(v14 + 40); // 0x402daf
    uint64_t v16 = *v15; // 0x402daf
    if (v16 >= *(int64_t *)(v14 + 48)) {
        // 0x402e00
        __overflow(g32, v6);
    } else {
        // 0x402db9
        *v15 = v16 + 1;
        *(char *)v16 = (char)v4;
    }
    int64_t v17 = v13 + 1; // 0x402dce
    int64_t result2 = function_402c90(v13, *(int64_t *)(a1 + 24), v7); // 0x402dda
    while (v2 != v17) {
        int64_t v18 = v17;
        v14 = (int64_t)g32;
        v15 = (int64_t *)(v14 + 40);
        v16 = *v15;
        if (v16 >= *(int64_t *)(v14 + 48)) {
            // 0x402e00
            __overflow(g32, v6);
        } else {
            // 0x402db9
            *v15 = v16 + 1;
            *(char *)v16 = (char)v4;
        }
        // 0x402dc4
        v17 = v18 + 1;
        result2 = function_402c90(v18, *(int64_t *)(a1 + 24), v7);
    }
    // 0x402ddc
    return result2;
}
// Address range: 0x402e10 - 0x402f77
int64_t function_402e10(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    if (g43 != NULL) {
        int32_t v2 = g17; // 0x402e25
        uint32_t v3 = v2 < 0 ? 32 : v2; // 0x402e36
        int64_t v4 = (int64_t)g43;
        int32_t v5 = *(int32_t *)v4; // 0x402e99
        int64_t v6 = a1 == &g40 ? a2 : v1; // 0x402e9d
        int64_t * v7 = a1 == &g40 ? &g19 : &g20; // 0x402e9d
        if (v5 != 0) {
            // 0x402e9f
            v6 = v5 == 1 ? v1 : a2;
            v7 = (int64_t *)(v4 + 8);
        }
        int64_t v8 = v6;
        function_402c90(*v7, *(int64_t *)(v8 + 24), v8 + 40);
        int64_t v9 = *(int64_t *)(v4 + 16); // 0x402e6c
        while (v9 != 0) {
            int64_t v10 = (int64_t)g32; // 0x402e79
            int64_t * v11 = (int64_t *)(v10 + 40); // 0x402e80
            uint64_t v12 = *v11; // 0x402e80
            if (v12 >= *(int64_t *)(v10 + 48)) {
                // 0x402f40
                __overflow(g32, v3 % 256);
            } else {
                // 0x402e8e
                *v11 = v12 + 1;
                *(char *)v12 = (char)v3;
            }
            v4 = v9;
            v5 = *(int32_t *)v4;
            v6 = a1 == &g40 ? a2 : v1;
            v7 = a1 == &g40 ? &g19 : &g20;
            if (v5 != 0) {
                // 0x402e9f
                v6 = v5 == 1 ? v1 : a2;
                v7 = (int64_t *)(v4 + 8);
            }
            // 0x402e5f
            v8 = v6;
            function_402c90(*v7, *(int64_t *)(v8 + 24), v8 + 40);
            v9 = *(int64_t *)(v4 + 16);
        }
    } else {
        int64_t v13 = a1 == &g40 ? a2 : v1;
        int64_t v14 = a1 == &g40 ? g19 : g20;
        function_402c90(v14, *(int64_t *)(v13 + 24), v13 + 40);
        function_402cf0(v1, g20, g45);
        function_402cf0(a2, g19, g44);
    }
    int64_t v15 = (int64_t)g32; // 0x402f00
    unsigned char v16 = *(char *)&g16; // 0x402f07
    int64_t * v17 = (int64_t *)(v15 + 40); // 0x402f0e
    uint64_t result = *v17; // 0x402f0e
    if (result >= *(int64_t *)(v15 + 48)) {
        // 0x402f50
        return __overflow(g32, (int32_t)v16);
    }
    // 0x402f18
    *v17 = result + 1;
    *(char *)result = v16;
    return result;
}
// Address range: 0x402f80 - 0x403034
int64_t function_402f80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x402f8d
    uint64_t v2 = *v1; // 0x402f8d
    int64_t * v3 = (int64_t *)(a1 + 32); // 0x402f91
    uint64_t v4 = *v3; // 0x402f91
    int64_t * v5 = (int64_t *)(a1 + 40); // 0x402f95
    int64_t v6 = *v5; // 0x402f95
    int64_t v7 = v6; // 0x402f9c
    int64_t v8 = v2; // 0x402f9c
    if (v2 >= v4) {
        int64_t v9; // 0x402f80
        int64_t v10; // 0x402f80
        if (v6 == 0) {
            // 0x403000
            v10 = 128;
            v9 = 8;
            if (v4 != 0) {
                int64_t v11 = 16 * v4; // 0x403012
                v10 = v11;
                v9 = v4;
                if (v11 > -1 != v4 < 0x1000000000000000) {
                    // 0x403020
                    function_406220(v4);
                    // UNREACHABLE
                }
            }
        } else {
            if (v4 >= 0x555555555555555) {
                // 0x403020
                function_406220(v4);
                // UNREACHABLE
            }
            int64_t v12 = v4 + 1 + v4 / 2; // 0x402fda
            v10 = 16 * v12;
            v9 = v12;
        }
        // 0x402fe6
        *v3 = v9;
        v7 = function_406030(v6, v10);
        v8 = *v1;
        *v5 = v7;
    }
    int64_t result = 16 * v8 + v7; // 0x402fa9
    *(int64_t *)result = a2;
    *(int64_t *)(result + 8) = a3;
    *v1 = v8 + 1;
    return result;
}
// Address range: 0x403040 - 0x403400
int64_t function_403040(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = 0x100000000 * a3 - 0x100000000;
    int64_t v3 = v2 >> 29; // 0x403061
    int64_t * v4 = (int64_t *)(v3 + (int64_t)&g60); // 0x403061
    int64_t v5; // 0x403040
    if (*v4 == v1) {
        int64_t * v6 = (int64_t *)(v3 + (int64_t)&g55); // 0x403260
        int64_t v7 = *v6; // 0x403260
        *v6 = v1;
        *a2 = v7;
        v5 = v7;
        if (v7 != 0) {
            goto lab_0x403078;
        } else {
            goto lab_0x40327f;
        }
    } else {
        // 0x40306f
        v5 = v1;
        if (a2 == NULL) {
            goto lab_0x40327f;
        } else {
            goto lab_0x403078;
        }
    }
  lab_0x403121:;
    int64_t v8 = *v4; // 0x403121
    int64_t v9; // 0x403040
    if (v8 == 0 || g41 == 2 || g41 != 1 == g50 == 0) {
        // 0x403220
        *v4 = v9;
        // 0x40322d
        return 1;
    }
    char * v10 = (char *)((v2 >> 32) + 0x60d378); // 0x403153
    if (*v10 != 0) {
        // 0x403220
        *v4 = v9;
        // 0x40322d
        return 1;
    }
    int64_t v11 = *(int64_t *)(v9 + 24); // 0x403166
    int64_t v12 = *(int64_t *)(v8 + 24); // 0x40316a
    int64_t v13 = (int32_t)a3 != 1 ? g19 : g20; // 0x403179
    if ((int32_t)function_402b90(v12, v8 + 40, v11, v9 + 40, v13, v13) >= 1) {
        // 0x4031c3
        error((int32_t)(g41 == 1), (int32_t)"%s:%lu: is not sorted: %.*s" ^ (int32_t)"%s:%lu: is not sorted: %.*s", dcgettext(NULL, "%s:%lu: is not sorted: %.*s", 5));
        *v10 = 1;
    }
    // 0x403220
    *v4 = v9;
    // 0x40322d
    return 1;
  lab_0x403116:;
    // 0x403116
    int64_t v14; // 0x403040
    int64_t v15; // 0x403040
    function_402f80(v9, v14, v15);
    goto lab_0x403121;
  lab_0x403078:
    // 0x403078
    *(int64_t *)(v5 + 24) = 0;
    int64_t v16 = v5; // 0x403078
    goto lab_0x403080;
  lab_0x40327f:;
    int64_t v55 = function_4061a0(1, 48); // 0x403289
    *a2 = v55;
    v16 = v55;
    goto lab_0x403080;
  lab_0x403080:
    // 0x403080
    v9 = v16;
    if (function_403c50(v9, a1, *(char *)&g16) == 0) {
        if ((v9 & 32) != 0) {
            // 0x4033d0
            error(1, *__errno_location(), dcgettext(NULL, "read error", 5));
            return &g79;
        }
        // 0x40324b
        if (v9 != 0) {
            // 0x403252
            function_402ac0(v9);
        }
        // 0x40322d
        return 0;
    }
    int64_t v17 = *(int64_t *)(v9 + 8); // 0x40309b
    int64_t v18 = *(int64_t *)(v9 + 16); // 0x40309f
    int64_t * v19 = (int64_t *)(v3 + (int64_t)&g59); // 0x4030a3
    *v19 = *v19 + 1;
    if (v17 == 1) {
        goto lab_0x403121;
    } else {
        int64_t v20 = v17 - 1; // 0x4030ac
        int64_t v21 = v18 + v20; // 0x4030b0
        int32_t v22 = g17; // 0x4030b9
        if (v22 > -1 == (v22 != 10)) {
            int64_t v23 = function_4078c0(v18, v22, v20); // 0x403109
            v15 = v20;
            v14 = v18;
            if (v23 != 0) {
                int64_t v24; // 0x403040
                int64_t v25 = v24;
                int64_t v26; // 0x403040
                int64_t v27 = v26;
                function_402f80(v9, v25, v27 - v25);
                int32_t v28 = g17; // 0x4030f3
                int64_t v29 = v27 + 1; // 0x4030f9
                int64_t v30 = v21 - v29; // 0x403103
                int64_t v31 = function_4078c0(v29, v28, v30); // 0x403109
                v26 = v31;
                v24 = v29;
                v15 = v30;
                v14 = v29;
                while (v31 != 0) {
                    // 0x4030d8
                    v25 = v24;
                    v27 = v26;
                    function_402f80(v9, v25, v27 - v25);
                    v28 = g17;
                    v29 = v27 + 1;
                    v30 = v21 - v29;
                    v31 = function_4078c0(v29, v28, v30);
                    v26 = v31;
                    v24 = v29;
                    v15 = v30;
                    v14 = v29;
                }
            }
        } else {
            // 0x4032a0
            v15 = v20;
            v14 = v18;
            if (v22 < 0) {
                int16_t ** v32 = __ctype_b_loc(); // 0x4032a8
                int64_t v33 = (int64_t)*v32; // 0x4032b2
                int64_t v34 = v18;
                unsigned char v35 = *(char *)v34; // 0x4032b8
                int64_t v36 = v34 + 1; // 0x4032bb
                while (v35 == 10 | *(char *)(2 * (int64_t)v35 + v33) % 2 != 0) {
                    // 0x403370
                    if (v21 == v36) {
                        goto lab_0x403121;
                    }
                    v34 = v36;
                    v35 = *(char *)v34;
                    v36 = v34 + 1;
                }
                // 0x4032d3
                v15 = 1;
                v14 = v34;
                if (v21 != v36) {
                    int64_t v37 = v33;
                    int64_t v38 = v34;
                    unsigned char v39 = *(char *)(v38 + 1); // 0x4032df
                    int64_t v40 = v36; // 0x4032e7
                    int64_t v41 = v36; // 0x4032e7
                    int64_t v42 = 1; // 0x4032e7
                    int64_t v43; // 0x4032f7
                    unsigned char v44; // 0x403304
                    if (v39 != 10 && *(char *)(2 * (int64_t)v39 + v37) % 2 == 0) {
                        v43 = v40 + 1;
                        if (v21 == v43) {
                            // 0x4033b0
                            v15 = v21 - v38;
                            v14 = v38;
                            goto lab_0x403116;
                        }
                        // 0x403304
                        v44 = *(char *)v43;
                        v40 = v43;
                        while (v44 != 10 == *(char *)(2 * (int64_t)v44 + v37) % 2 == 0) {
                            // 0x4032f7
                            v43 = v40 + 1;
                            if (v21 == v43) {
                                // 0x4033b0
                                v15 = v21 - v38;
                                v14 = v38;
                                goto lab_0x403116;
                            }
                            // 0x403304
                            v44 = *(char *)v43;
                            v40 = v43;
                        }
                        // 0x403314
                        v41 = v43;
                        v42 = v43 - v38;
                    }
                    int64_t v45 = v41 + 1; // 0x403320
                    function_402f80(v9, v38, v42);
                    v15 = 0;
                    v14 = v21;
                    while (v21 != v45) {
                        unsigned char v46 = *(char *)v45; // 0x403333
                        int64_t v47 = (int64_t)*v32;
                        int64_t v48 = v45; // 0x403342
                        int64_t v49 = v45; // 0x403342
                        if (v46 != 10 != (*(char *)(2 * (int64_t)v46 + v47) % 2 == 0)) {
                            int64_t v50 = v48 + 1; // 0x403348
                            v15 = 0;
                            v14 = v21;
                            if (v21 == v50) {
                                // break (via goto) -> 0x403116
                                goto lab_0x403116;
                            }
                            unsigned char v51 = *(char *)v50; // 0x403351
                            v48 = v50;
                            v49 = v50;
                            while (v51 == 10 | *(char *)(2 * (int64_t)v51 + v47) % 2 != 0) {
                                // 0x403348
                                v50 = v48 + 1;
                                v15 = 0;
                                v14 = v21;
                                if (v21 == v50) {
                                    // break (via goto) -> 0x403116
                                    goto lab_0x403116;
                                }
                                // 0x403351
                                v51 = *(char *)v50;
                                v48 = v50;
                                v49 = v50;
                            }
                        }
                        int64_t v52 = v49;
                        int64_t v53 = v52 + 1; // 0x403361
                        v15 = 1;
                        v14 = v52;
                        int64_t v54 = v47; // 0x4032d9
                        if (v21 == v53) {
                            // break -> 0x403116
                            break;
                        }
                        v37 = v54;
                        v38 = v52;
                        v39 = *(char *)(v38 + 1);
                        v40 = v53;
                        v41 = v53;
                        v42 = 1;
                        if (v39 != 10 && *(char *)(2 * (int64_t)v39 + v37) % 2 == 0) {
                            v43 = v40 + 1;
                            if (v21 == v43) {
                                // 0x4033b0
                                v15 = v21 - v38;
                                v14 = v38;
                                goto lab_0x403116;
                            }
                            // 0x403304
                            v44 = *(char *)v43;
                            v40 = v43;
                            while (v44 != 10 == *(char *)(2 * (int64_t)v44 + v37) % 2 == 0) {
                                // 0x4032f7
                                v43 = v40 + 1;
                                if (v21 == v43) {
                                    // 0x4033b0
                                    v15 = v21 - v38;
                                    v14 = v38;
                                    goto lab_0x403116;
                                }
                                // 0x403304
                                v44 = *(char *)v43;
                                v40 = v43;
                            }
                            // 0x403314
                            v41 = v43;
                            v42 = v43 - v38;
                        }
                        // 0x40331a
                        v45 = v41 + 1;
                        function_402f80(v9, v38, v42);
                        v15 = 0;
                        v14 = v21;
                    }
                }
            }
        }
        goto lab_0x403116;
    }
}
// Address range: 0x403400 - 0x4034ef
int64_t function_403400(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40340f
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x403413
    int64_t v4 = *v3; // 0x403413
    int64_t v5 = v4; // 0x40341a
    int64_t v6 = a3; // 0x40341a
    int64_t v7 = v1; // 0x40341a
    if (*v2 == v1) {
        int64_t v8; // 0x403400
        int64_t v9; // 0x403400
        if (v4 == 0) {
            // 0x4034b0
            v8 = 16;
            v9 = 128;
            if (a2 != NULL) {
                int64_t v10 = 8 * v1; // 0x4034c3
                v8 = v1;
                v9 = v10;
                if (v10 > -1 != a2 < (int64_t *)0x2000000000000000) {
                    // 0x4034d2
                    function_406220((int64_t)(a2 >= (int64_t *)0x2000000000000000));
                    // UNREACHABLE
                }
            }
        } else {
            // 0x403445
            if (a2 >= (int64_t *)0xaaaaaaaaaaaaaaa) {
                // 0x4034d2
                function_406220(a1);
                // UNREACHABLE
            }
            int64_t v11 = v1 + 1 + v1 / 2; // 0x40345a
            v8 = v11;
            v9 = 8 * v11;
        }
        // 0x403467
        *v2 = v8;
        int64_t v12 = function_406030(v4, v9); // 0x403472
        uint64_t v13 = *v2; // 0x40347a
        *v3 = v12;
        int64_t v14 = a3 & 0xffffffff; // 0x403482
        v5 = v12;
        v6 = v14;
        v7 = v9;
        if (v9 < v13) {
            int64_t v15 = v12 + 8 * v9; // 0x403493
            *(int64_t *)v15 = 0;
            v15 += 8;
            v5 = v12;
            v6 = v14;
            v7 = v9;
            while (8 * v13 + v12 != v15) {
                // 0x403498
                *(int64_t *)v15 = 0;
                v15 += 8;
                v5 = v12;
                v6 = v14;
                v7 = v9;
            }
        }
    }
    int64_t v16 = 8 * v7 + v5; // 0x40341c
    int64_t result = function_403040(a1, (int64_t *)v16, v6); // 0x403423
    if ((char)result != 0) {
        // 0x40342c
        *a2 = v16 + 1;
    }
    // 0x403430
    return result;
}
// Address range: 0x4034f0 - 0x4038ad
int64_t function_4034f0(int64_t a1) {
    int32_t status = a1; // 0x403506
    if (status != 0) {
        // 0x40350a
        __fprintf_chk(g35, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40352f
        exit(status);
        // UNREACHABLE
    }
    // 0x403536
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE1 FILE2\n", 5));
    fputs_unlocked(dcgettext(NULL, "For each pair of input lines with identical join fields, write a line to\nstandard output.  The default join field is the first, delimited by blanks.\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "\n  -a FILENUM        also print unpairable lines from file FILENUM, where\n                      FILENUM is 1 or 2, corresponding to FILE1 or FILE2\n  -e EMPTY          replace missing input fields with EMPTY\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "  -i, --ignore-case  ignore differences in case when comparing fields\n  -j FIELD          equivalent to '-1 FIELD -2 FIELD'\n  -o FORMAT         obey FORMAT while constructing output line\n  -t CHAR           use CHAR as input and output field separator\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "  -v FILENUM        like -a FILENUM, but suppress joined output lines\n  -1 FIELD          join on this FIELD of file 1\n  -2 FIELD          join on this FIELD of file 2\n  --check-order     check that the input is correctly sorted, even\n                      if all input lines are pairable\n  --nocheck-order   do not check that the input is correctly sorted\n  --header          treat the first line in each file as field headers,\n                      print them without trying to pair them\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g32);
    fputs_unlocked(dcgettext(NULL, "\nUnless -t CHAR is given, leading blanks separate fields and are ignored,\nelse fields are separated by CHAR.  Any FIELD is a field number counted\nfrom 1.  FORMAT is one or more comma or blank separated specifications,\neach being 'FILENUM.FIELD' or '0'.  Default FORMAT outputs the join field,\nthe remaining fields from FILE1, the remaining fields from FILE2, all\nseparated by CHAR.  If FORMAT is the keyword 'auto', then the first\nline of each file determines the number of fields output for each line.\n\nImportant: FILE1 and FILE2 must be sorted on the join fields.\nE.g., use \"sort -k 1b,1\" if 'join' has no options,\nor use \"join -t ''\" if 'sort' has no options.\nNote, comparisons honor the rules specified by 'LC_COLLATE'.\nIf the input is not sorted and some lines cannot be joined, a\nwarning message will be given.\n", 5), g32);
    int64_t v1 = &g2; // bp-136, 0x40368f
    bool v2; // 0x4034f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x403710
    int64_t v6 = *(int64_t *)v5; // 0x403714
    int64_t v7 = 5; // 0x40371a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"join";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x403726
        char v11 = *(char *)v9; // 0x403726
        char v12 = v11; // 0x403726
        bool v13 = false; // 0x403726
        while (v10 == v11) {
            // 0x40371c
            v7--;
            int64_t v14 = v9 + v3; // 0x403726
            int64_t v15 = v8 + v3; // 0x403726
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
            // break -> 0x403732
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x403732
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403844;
        } else {
            // 0x40382e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403883
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403794;
            } else {
                goto lab_0x403844;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403794;
        } else {
            // 0x40377a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403883
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403794;
            } else {
                goto lab_0x403794;
            }
        }
    }
  lab_0x403844:
    // 0x403844
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4037d4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40352f
    exit(status);
    // UNREACHABLE
  lab_0x403794:
    // 0x403794
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4037d4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40352f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4038b0 - 0x403a3c
int64_t function_4038b0(int64_t a1, int64_t * a2, int64_t * a3, int32_t * a4, int32_t * a5, int32_t * a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = (int64_t)a2;
    int64_t v3; // 0x4038b0
    int32_t v4 = v3;
    int64_t v5; // 0x4038b0
    int64_t result; // 0x4038b0
    int32_t v6; // 0x4038b0
    if (v4 == 2) {
        int64_t v7 = (int64_t)a3;
        int64_t v8 = (int32_t)v2 == 0; // 0x403918
        int64_t v9 = *(int64_t *)(8 * v8 + (int64_t)&g57); // 0x40391b
        int32_t v10 = *(int32_t *)(4 * v8 + v2); // 0x403923
        if (v10 == 1) {
            // 0x403a10
            *(int32_t *)a3 = (int32_t)v7 - 1;
            int64_t v11 = function_402910(v9, v2); // 0x403a1c
            function_4028c0(&g20, v11);
        } else {
            if (v10 > 1) {
                if (v10 == 2) {
                    int32_t * v12 = (int32_t *)(v7 + 4); // 0x4039e0
                    *v12 = *v12 - 1;
                    int64_t v13 = function_402910(v9, v2); // 0x4039ed
                    function_4028c0(&g19, v13);
                } else {
                    if (v10 == 3) {
                        // 0x40393f
                        function_402990(v9);
                    }
                }
            } else {
                if (v10 == 0) {
                    // 0x403994
                    function_4057b0(4, a1);
                    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
                    function_4034f0(1);
                    // UNREACHABLE
                }
            }
        }
        // 0x403960
        v5 = 4;
        result = 8;
        v6 = 2;
        if ((int32_t)v2 != 0) {
            // 0x403965
            *(int32_t *)a2 = *(int32_t *)(v2 + 4);
            *(int64_t *)&g57 = (int64_t)g58;
            v5 = 4;
            result = 8;
            v6 = 2;
        }
    } else {
        int64_t v14 = 0x100000000 * v3; // 0x4038c5
        v5 = v14 >> 30;
        result = v14 >> 29;
        v6 = v4 + 1;
    }
    // 0x4038de
    *(int32_t *)(v5 + v2) = *(int32_t *)&v1;
    *(int64_t *)(result + (int64_t)&g57) = a1;
    *a4 = v6;
    if (*(int32_t *)&v1 == 3) {
        // 0x4038f6
        *a6 = 3;
    }
    // 0x4038fd
    return result;
}
// Address range: 0x403a40 - 0x403a48
int64_t function_403a40(int64_t a1) {
    // 0x403a40
    g63 = a1;
    int64_t result; // 0x403a40
    return result;
}
// Address range: 0x403a50 - 0x403a58
int64_t function_403a50(int64_t a1) {
    // 0x403a50
    g62 = a1;
    int64_t result; // 0x403a50
    return result;
}
// Address range: 0x403a60 - 0x403afe
int64_t function_403a60(void) {
    // 0x403a60
    int32_t * err_num; // 0x403a76
    if ((int32_t)function_4079d0((int64_t)g32) == 0) {
        goto lab_0x403a8c;
    } else {
        // 0x403a76
        err_num = __errno_location();
        if (g62 == 0) {
            goto lab_0x403aa3;
        } else {
            // 0x403a87
            if (*err_num != 32) {
                goto lab_0x403aa3;
            } else {
                goto lab_0x403a8c;
            }
        }
    }
  lab_0x403a8c:;
    int64_t result = function_4079d0((int64_t)g35); // 0x403a93
    if ((int32_t)result == 0) {
        // 0x403a9c
        return result;
    }
    // 0x403ade
    _exit(g22);
    // UNREACHABLE
  lab_0x403aa3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x403aaf
    if (g63 == 0) {
        // 0x403ae9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403ac3
        error(0, *err_num, "%s: %s", (char *)function_405850((int64_t)g63), v1);
    }
    // 0x403ade
    _exit(g22);
    // UNREACHABLE
}
// Address range: 0x403b00 - 0x403b05
int64_t function_403b00(void) {
    // 0x403b00
    int64_t fd; // 0x403b00
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x403b10 - 0x403b31
int64_t function_403b10(int64_t stream, int64_t advice, int64_t a3) {
    // 0x403b10
    if (stream == 0) {
        // 0x403b30
        int64_t result; // 0x403b10
        return result;
    }
    // 0x403b15
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x403b40 - 0x403bd3
int64_t function_403b40(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x403b47
    int64_t result = (int64_t)file; // 0x403b47
    if (file == NULL) {
        // 0x403b61
        return result;
    }
    uint32_t v1 = fileno(file); // 0x403b57
    if (v1 >= 3) {
        // 0x403b61
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_405a20((int64_t)v1, v2); // 0x403b7a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x403bb8
        function_406810(result, v2);
        // 0x403b61
        return 0;
    }
    // 0x403b7e
    if ((int32_t)function_406810(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x403b90
        if (v4 != NULL) {
            // 0x403b61
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x403b9d
    close(fd);
    // 0x403b61
    return 0;
}
// Address range: 0x403be0 - 0x403c3e
int64_t function_403be0(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x403be6
    if (locale == NULL) {
        // 0x403c13
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x403be6
    bool v2; // 0x403be0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g4; // 0x403be0
    int64_t v5 = v1; // 0x403be0
    int64_t v6 = 2; // 0x403c05
    unsigned char v7 = *(char *)v5; // 0x403c05
    char v8 = *(char *)v4; // 0x403c05
    char v9 = v8; // 0x403c05
    bool v10 = false; // 0x403c05
    while (v7 == v8) {
        // 0x403bf8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x403c11
    int64_t v13 = v1; // 0x403c11
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x403c13
        return 0;
    }
    int64_t v14 = 6; // 0x403c11
    unsigned char v15 = *(char *)v13; // 0x403c2d
    char v16 = *(char *)v12; // 0x403c2d
    char v17 = v16; // 0x403c2d
    bool v18 = false; // 0x403c2d
    while (v15 == v16) {
        // 0x403c20
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
// Address range: 0x403c40 - 0x403c50
int64_t function_403c40(int64_t a1) {
    // 0x403c40
    int128_t v1; // 0x403c40
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x403c40
    *(int64_t *)(a1 + 16) = 0;
    int64_t v4; // 0x403c40
    __asm_movups(*(int128_t *)&v4, v3);
    int64_t result; // 0x403c40
    return result;
}
// Address range: 0x403c50 - 0x403d6b
int64_t function_403c50(int64_t result, int64_t a2, char a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x403c68
    int64_t v2 = *v1; // 0x403c68
    int64_t v3 = v2 + result; // 0x403c78
    if ((v3 & 16) != 0) {
        // 0x403d28
        return 0;
    }
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x403cb4
    int64_t v5 = v3; // 0x403c50
    int64_t v6 = v2;
    int64_t v7 = v2; // 0x403ca5
    int64_t v8; // 0x403c50
    int64_t v9; // 0x403c50
    int64_t v10; // 0x403c50
    int64_t v11; // 0x403c50
    int64_t v12; // 0x403c50
    int64_t v13; // 0x403c50
    int64_t v14; // 0x403c50
    while (true) {
      lab_0x403cb4:
        // 0x403cb4
        v9 = v7;
        v8 = v6;
        int64_t v15 = v5;
        uint64_t v16 = *v4; // 0x403cb4
        if (v16 < *(int64_t *)(a2 + 16)) {
            // 0x403c90
            *v4 = v16 + 1;
            v14 = v15;
            v11 = (int64_t)*(char *)v16;
            goto lab_0x403c9b;
        } else {
            uint32_t v17 = __uflow((struct _IO_FILE *)a2); // 0x403cc5
            int64_t v18 = 0x100000000000000 * v15 >> 56; // 0x403cca
            v14 = v18;
            v11 = v17;
            if (v17 != -1) {
                goto lab_0x403c9b;
            } else {
                if (v8 == v9) {
                    // break -> 0x403d28
                    break;
                }
                if ((v15 & 32) != 0) {
                    // break -> 0x403d28
                    break;
                }
                // 0x403cdf
                v10 = v9;
                if (*(char *)(v9 - 1) == a3) {
                  lab_0x403d4c:
                    // 0x403d4c
                    *(int64_t *)(result + 8) = v10 - v8;
                    return result;
                }
                // 0x403cea
                v13 = a3;
                v12 = (int64_t)a3 & 0xffffffff;
                if (v9 != v18) {
                    // 0x403d40
                    *(char *)v9 = a3;
                    v10 = v9 + 1;
                    goto lab_0x403d4c;
                }
                goto lab_0x403cf7;
            }
        }
    }
    // 0x403d28
    return 0;
  lab_0x403c9b:
    // 0x403c9b
    v5 = v14;
    int64_t v19 = v9; // 0x403ca0
    int64_t v20 = v11; // 0x403ca0
    int64_t v21 = v11; // 0x403ca0
    int64_t v22 = v8; // 0x403ca0
    v13 = v11;
    v12 = v11;
    if (v9 == v14) {
        goto lab_0x403cf7;
    } else {
        goto lab_0x403ca5;
    }
  lab_0x403cf7:;
    int64_t v23 = function_406130(v8, result); // 0x403d04
    int64_t v24 = v23 + v8; // 0x403d14
    *v1 = v23;
    v5 = v24;
    v19 = v24;
    v20 = v13 % 256;
    v21 = v12;
    v22 = v23;
    goto lab_0x403ca5;
  lab_0x403ca5:
    // 0x403ca5
    v6 = v22;
    v7 = v19 + 1;
    *(char *)v19 = (char)v20;
    v10 = v7;
    int64_t v25 = v6; // 0x403cae
    if ((int32_t)v21 == (int32_t)a3) {
        // 0x403d4c
        *(int64_t *)(result + 8) = v10 - v25;
        return result;
    }
    goto lab_0x403cb4;
}
// Address range: 0x403d70 - 0x403d7a
int64_t function_403d70(void) {
    // 0x403d70
    int64_t v1; // 0x403d70
    return function_403c50(v1, v1, 10);
}
// Address range: 0x403d80 - 0x403d89
int64_t function_403d80(int64_t a1) {
    // 0x403d80
    free((int64_t *)*(int64_t *)(a1 + 16));
    return &g79;
}
// Address range: 0x403d90 - 0x403dd5
int64_t function_403d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403d90
    if (a3 == 0) {
        // 0x403dcd
        return 0;
    }
    int64_t v1 = (int64_t)*__ctype_toupper_loc(); // 0x403da9
    int64_t v2 = 0; // 0x403dac
    int32_t v3 = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a2) + v1); // 0x403dc7
    uint32_t result = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a1) + v1) - v3; // 0x403dc7
    while (result == 0) {
        // 0x403db0
        v2++;
        if (v2 == a3) {
            // 0x403dcd
            return 0;
        }
        v3 = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a2) + v1);
        result = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a1) + v1) - v3;
    }
    // 0x403dcd
    return result;
}
// Address range: 0x403de0 - 0x403e79
int64_t function_403de0(int64_t str) {
    // 0x403de0
    if (str == 0) {
        // 0x403e59
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g35);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403dee
    int64_t result = (int64_t)found_char_pos; // 0x403dee
    if (found_char_pos == NULL) {
        // 0x403e49
        g64 = str;
        g34 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403df8
    if (v1 - str < 7) {
        // 0x403e49
        g64 = str;
        g34 = str;
        return result;
    }
    // 0x403e08
    bool v2; // 0x403de0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403de0
    int64_t v5 = result - 6; // 0x403de0
    int64_t v6 = 7; // 0x403e16
    unsigned char v7 = *(char *)v5; // 0x403e16
    char v8 = *(char *)v4; // 0x403e16
    char v9 = v8; // 0x403e16
    bool v10 = false; // 0x403e16
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
    int64_t v12 = (int64_t)"lt-"; // 0x403e20
    int64_t v13 = v1; // 0x403e20
    int64_t v14 = 3; // 0x403e20
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403e49
        g64 = str;
        g34 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403e32
    char v16 = *(char *)v12; // 0x403e32
    char v17 = v16; // 0x403e32
    bool v18 = false; // 0x403e32
    while (v15 == v16) {
        // 0x403e22
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
    int64_t v20 = v1; // 0x403e3c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403e3e
        v20 = result + 4;
        g31 = v20;
    }
    // 0x403e49
    g64 = v20;
    g34 = v20;
    return result;
}
// Address range: 0x403e80 - 0x403f72
int64_t function_403e80(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403e94
    int64_t result = (int64_t)v1; // 0x403e94
    if (result != a1) {
        // 0x403ea1
        return result;
    }
    int64_t v2 = function_407a30(); // 0x403eb0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403f66
    if (v3 == 85) {
        // 0x403ec0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403f58
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x403eee
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x403efb
        // 0x403ea1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403f58
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x403f3d
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x403f4a
    // 0x403ea1
    return result4;
}
// Address range: 0x403f80 - 0x403fd7
int64_t function_403f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403f80
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403fc8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403fd7 - 0x4051a1
int64_t function_403fd7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x404021
    int64_t v3 = 0; // 0x404021
    int64_t v4; // 0x403fd7
    int64_t v5; // 0x403fd7
    int64_t v6; // 0x403fd7
    int64_t v7; // 0x403fd7
    int64_t v8; // 0x403fd7
    int64_t v9; // 0x403fd7
    int64_t v10; // 0x403fd7
    int64_t v11; // 0x403fd7
    int64_t v12; // 0x403fd7
    int64_t v13; // 0x403fd7
    int64_t v14; // 0x403fd7
    int64_t v15; // 0x403fd7
    int64_t v16; // 0x403fd7
    int64_t v17; // 0x403fd7
    int64_t v18; // 0x403fd7
    int64_t result; // 0x403fd7
    int64_t v19; // 0x403fd7
    int32_t wc; // bp+132, 0x403fd7
    int64_t ps; // bp+136, 0x403fd7
    char v20; // 0x404590
    int64_t v21; // 0x404590
    int64_t v22; // 0x404938
    int64_t v23; // 0x403fd7
    int64_t v24; // 0x404957
    int32_t v25; // 0x403fd7
    while (true) {
      lab_0x404028_2:
        // 0x404028
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403fd7
        int64_t v27; // 0x40405c
        while (true) {
          lab_0x404028:
            // 0x404028
            v5 = v26;
            bool v28 = v15 == v5; // 0x404033
            if (v15 == -1) {
                // 0x404035
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x404043
            if (v28) {
                // break (via goto) -> 0x4047a8
                goto lab_0x4047a8;
            }
            // 0x40404c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g78 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40463b
                    if (v25 % 2 == 0) {
                        goto lab_0x404181;
                    }
                    // 0x404a5d
                    v26 = v5 + 1;
                    goto lab_0x404028;
                }
                case 7: {
                    goto lab_0x404181;
                }
                case 8: {
                    goto lab_0x404181;
                }
                case 9: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x404181;
                }
                case 12: {
                    goto lab_0x404181;
                }
                case 13: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40414d;
                }
                case 36: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x404181;
                }
                case 38: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x404181;
                }
                case 44: {
                    goto lab_0x404181;
                }
                case 45: {
                    goto lab_0x404181;
                }
                case 46: {
                    goto lab_0x404181;
                }
                case 47: {
                    goto lab_0x404181;
                }
                case 48: {
                    goto lab_0x404181;
                }
                case 49: {
                    goto lab_0x404181;
                }
                case 50: {
                    goto lab_0x404181;
                }
                case 51: {
                    goto lab_0x404181;
                }
                case 52: {
                    goto lab_0x404181;
                }
                case 53: {
                    goto lab_0x404181;
                }
                case 54: {
                    goto lab_0x404181;
                }
                case 55: {
                    goto lab_0x404181;
                }
                case 56: {
                    goto lab_0x404181;
                }
                case 57: {
                    goto lab_0x404181;
                }
                case 58: {
                    goto lab_0x404181;
                }
                case 59: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x404181;
                }
                case 66: {
                    goto lab_0x404181;
                }
                case 67: {
                    goto lab_0x404181;
                }
                case 68: {
                    goto lab_0x404181;
                }
                case 69: {
                    goto lab_0x404181;
                }
                case 70: {
                    goto lab_0x404181;
                }
                case 71: {
                    goto lab_0x404181;
                }
                case 72: {
                    goto lab_0x404181;
                }
                case 73: {
                    goto lab_0x404181;
                }
                case 74: {
                    goto lab_0x404181;
                }
                case 75: {
                    goto lab_0x404181;
                }
                case 76: {
                    goto lab_0x404181;
                }
                case 77: {
                    goto lab_0x404181;
                }
                case 78: {
                    goto lab_0x404181;
                }
                case 79: {
                    goto lab_0x404181;
                }
                case 80: {
                    goto lab_0x404181;
                }
                case 81: {
                    goto lab_0x404181;
                }
                case 82: {
                    goto lab_0x404181;
                }
                case 83: {
                    goto lab_0x404181;
                }
                case 84: {
                    goto lab_0x404181;
                }
                case 85: {
                    goto lab_0x404181;
                }
                case 86: {
                    goto lab_0x404181;
                }
                case 87: {
                    goto lab_0x404181;
                }
                case 88: {
                    goto lab_0x404181;
                }
                case 89: {
                    goto lab_0x404181;
                }
                case 90: {
                    goto lab_0x404181;
                }
                case 91: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x404181;
                }
                case 94: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x404181;
                }
                case 96: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x404181;
                }
                case 98: {
                    goto lab_0x404181;
                }
                case 99: {
                    goto lab_0x404181;
                }
                case 100: {
                    goto lab_0x404181;
                }
                case 101: {
                    goto lab_0x404181;
                }
                case 102: {
                    goto lab_0x404181;
                }
                case 103: {
                    goto lab_0x404181;
                }
                case 104: {
                    goto lab_0x404181;
                }
                case 105: {
                    goto lab_0x404181;
                }
                case 106: {
                    goto lab_0x404181;
                }
                case 107: {
                    goto lab_0x404181;
                }
                case 108: {
                    goto lab_0x404181;
                }
                case 109: {
                    goto lab_0x404181;
                }
                case 110: {
                    goto lab_0x404181;
                }
                case 111: {
                    goto lab_0x404181;
                }
                case 112: {
                    goto lab_0x404181;
                }
                case 113: {
                    goto lab_0x404181;
                }
                case 114: {
                    goto lab_0x404181;
                }
                case 115: {
                    goto lab_0x404181;
                }
                case 116: {
                    goto lab_0x404181;
                }
                case 117: {
                    goto lab_0x404181;
                }
                case 118: {
                    goto lab_0x404181;
                }
                case 119: {
                    goto lab_0x404181;
                }
                case 120: {
                    goto lab_0x404181;
                }
                case 121: {
                    goto lab_0x404181;
                }
                case 122: {
                    goto lab_0x404181;
                }
                case 123: {
                    goto lab_0x404125;
                }
                case 124: {
                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x404125;
                }
                case 126: {
                    goto lab_0x40414d;
                }
                default: {
                    goto lab_0x404525;
                }
            }
        }
      lab_0x404525:
        if (v23 != 1) {
            // 0x404890
            ps = 0;
            int64_t len = v15; // 0x4048a0
            if (v15 == -1) {
                // 0x4048a2
                len = strlen((char *)str);
            }
            // 0x4048ce
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40492f:
                // 0x40492f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404934
                int64_t v30 = v29 + str;
                v24 = function_407840(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x404eaa_2;
                    }
                    case -1: {
                        goto lab_0x404eaa_2;
                    }
                    case -2: {
                        // 0x404f8d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404fc7
                            v19 = v18;
                            int64_t v31 = v18; // 0x404fca
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404fd7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404fd0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x404eaa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x404eaa_2;
                    }
                    case 1: {
                        goto lab_0x404900;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4049ac
                        char v34 = *(char *)v33; // 0x4049bd
                        unsigned char v35; // 0x403fd7
                        if (v34 < 125) {
                            // 0x4049c8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4049df
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4049b0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4049bd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4049c8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4049df
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4049b0
                            v33++;
                        }
                        goto lab_0x404900;
                    }
                }
            }
            goto lab_0x404eaa_2;
        } else {
            // 0x404574
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404181;
        }
    }
  lab_0x4047a8:
    // 0x4047a8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4050aa
        if (v8 > result) {
            // 0x4050b3
            *(char *)(v12 + result) = 0;
        }
        // 0x4043d7
        return result;
    }
    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404181:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x404190
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40439a_2;
        }
    }
    int64_t v39 = result; // 0x404291
    char v40 = v20; // 0x404291
    int64_t v41 = v38; // 0x404291
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404291
    int64_t v43 = v36; // 0x404291
    goto lab_0x40420d;
  lab_0x40439a_2:
    // 0x4043d7
    return function_403f80(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404eaa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x404181;
    } else {
        uint64_t v49 = v46 + v5; // 0x404a7e
        int64_t v50 = v5 + 1; // 0x404b61
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404b68
        char v52 = v20; // 0x404b68
        int64_t v53 = result; // 0x404b68
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404b31
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404b35
            int64_t v56 = v54 + 1; // 0x404b3a
            int64_t v57 = v51 + 1; // 0x404b61
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x404b2c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404b31
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404b35
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
        goto lab_0x40420d;
    }
  lab_0x404900:
    // 0x404900
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40491f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404922
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x404eaa
        goto lab_0x404eaa_2;
    }
    goto lab_0x40492f;
  lab_0x40414d:
    // 0x40414d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40439a_2;
    }
    goto lab_0x404181;
  lab_0x404125:;
    bool v60 = v15 == 1; // 0x404130
    if (v15 == -1) {
        // 0x404132
        v60 = *(char *)v1 == 0;
    }
    // 0x40413e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x404181;
    } else {
        goto lab_0x40414d;
    }
  lab_0x40420d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x404212
        *(char *)(v44 + v45) = v40;
    }
    // 0x404216
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x404028_2;
}
// Address range: 0x4051b0 - 0x40534e
int64_t function_4051b0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4051b2
    int32_t * v3 = __errno_location(); // 0x4051cc
    int64_t v4 = (int64_t)g24; // 0x4051d1
    int32_t v5 = *v3; // 0x4051db
    int64_t v6 = v4; // 0x4051f1
    if (v2 >= (int64_t)*(int32_t *)&g27) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x405349
            function_406220(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405200
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405207
        int64_t v9; // 0x4051b0
        if (g24 == &g25) {
            int64_t v10 = function_406030(0, v8); // 0x40532a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g25); // 0x40532f
            *(int64_t *)&g24 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406030(v4, v8); // 0x40521b
            *(int64_t *)&g24 = v12;
            v9 = v12;
        }
        // 0x40522a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g27; // 0x40522a
        int32_t v14 = v7; // 0x405231
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g27 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x405261
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40526b
    int64_t * v17 = (int64_t *)v15; // 0x40526e
    uint64_t v18 = *v17; // 0x40526e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x405271
    int64_t result = *v19; // 0x405271
    int64_t v20; // 0x4051b0
    uint64_t v21 = function_403f80(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x405294
    if (v18 > v21) {
        // 0x40530b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4052a7
    *v17 = v22;
    if (result != (int64_t)&g65) {
        // 0x4052b7
        free((int64_t *)result);
    }
    int64_t result2 = function_405fd0(v22); // 0x4052d1
    *v19 = result2;
    int64_t v23; // 0x4051b0
    function_403f80(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40530b
    *v3 = v5;
    return result2;
}
// Address range: 0x405350 - 0x405384
int64_t function_405350(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405357
    int64_t result = function_4061d0(a1 == 0 ? (int64_t)&g66 : a1, 56); // 0x405376
    return result;
}
// Address range: 0x405390 - 0x40539f
int64_t function_405390(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g66 : a1); // 0x40539c
    return result;
}
// Address range: 0x4053a0 - 0x4053af
int64_t function_4053a0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g66 : a1; // 0x4053a8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g66;
}
// Address range: 0x4053b0 - 0x4053e3
int64_t function_4053b0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g66 + 8 : a1 + 8; // 0x4053c9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4053ce
    uint32_t v3 = *v2; // 0x4053ce
    uint32_t v4 = (int32_t)a2 % 32; // 0x4053d2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4053f0 - 0x405403
int64_t function_4053f0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g66 + 4 : a1 + 4); // 0x4053fc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405410 - 0x40543b
int64_t function_405410(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g66 : a1; // 0x405418
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x405435
        abort();
        // UNREACHABLE
    }
    // 0x40542c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g66;
}
// Address range: 0x405440 - 0x4054b2
int64_t function_405440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g66 : a5; // 0x405462
    int32_t * v2 = __errno_location(); // 0x40546b
    uint32_t v3 = *(int32_t *)v1; // 0x40548b
    int64_t result = function_403f80(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40549a
    return result;
}
// Address range: 0x4054c0 - 0x4055a1
int64_t function_4054c0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g66 : a4; // 0x4054e2
    int32_t * v2 = __errno_location(); // 0x4054e8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405507
    int32_t * v4 = (int32_t *)v1; // 0x40550a
    int64_t v5 = function_403f80(0, 0, a1, a2, (int64_t)*v4, v3); // 0x405525
    int64_t v6 = v5 + 1; // 0x40552a
    int64_t result = function_405fd0(v6); // 0x40553f
    function_403f80(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405584
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40558d
    return result;
}
// Address range: 0x4055b0 - 0x4055ba
int64_t function_4055b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4055b0
    return function_4054c0(a1, a2, 0, a3);
}
// Address range: 0x4055c0 - 0x405655
int64_t function_4055c0(void) {
    uint32_t v1 = *(int32_t *)&g27; // 0x4055c0
    int64_t v2 = v1; // 0x4055c0
    int64_t v3 = v2; // 0x4055d4
    if (v1 >= 2) {
        int64_t v4 = &g27;
        int64_t v5 = v4 + 16; // 0x4055f3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g79;
        while (v5 != (int64_t)g24 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4055f0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g79;
        }
    }
    int64_t v6 = v3; // 0x40560d
    if (g25 != 0x60d3e0) {
        // 0x40560f
        free((int64_t *)g25);
        g25 = 256;
        *(int64_t *)&g26 = (int64_t)&g65;
        v6 = &g79;
    }
    int64_t result = v6; // 0x405631
    if (g24 != &g25) {
        // 0x405633
        free(g24);
        *(int64_t *)&g24 = (int64_t)&g25;
        result = &g79;
    }
    // 0x405646
    *(int32_t *)&g27 = 1;
    return result;
}
// Address range: 0x405660 - 0x405671
int64_t function_405660(void) {
    // 0x405660
    int64_t v1; // 0x405660
    return function_4051b0(v1, v1, -1, (int64_t *)&g66);
}
// Address range: 0x405680 - 0x40568a
int64_t function_405680(void) {
    // 0x405680
    int64_t v1; // 0x405680
    return function_4051b0(v1, v1, v1, (int64_t *)&g66);
}
// Address range: 0x405690 - 0x4056a6
int64_t function_405690(int64_t a1) {
    // 0x405690
    return function_4051b0(0, a1, -1, (int64_t *)&g66);
}
// Address range: 0x4056b0 - 0x4056c2
int64_t function_4056b0(int64_t a1, int64_t a2) {
    // 0x4056b0
    return function_4051b0(0, a1, a2, (int64_t *)&g66);
}
// Address range: 0x4056d0 - 0x405738
int64_t function_4056d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4056e0
    return function_4051b0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405740 - 0x4057a4
int64_t function_405740(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405750
    return function_4051b0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4057b0 - 0x4057bc
int64_t function_4057b0(int64_t a1, int64_t a2) {
    // 0x4057b0
    return function_4056d0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4057c0 - 0x4057cf
int64_t function_4057c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4057c0
    return function_405740(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4057d0 - 0x405840
int64_t function_4057d0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g66); // 0x4057dd
    int128_t v2 = __asm_movdqa(g67); // 0x4057e5
    int128_t v3 = __asm_movdqa(g68); // 0x4057ed
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x405802
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405818
    uint32_t v6 = *v5; // 0x405818
    uint32_t v7 = (int32_t)a3 % 32; // 0x40581d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4051b0(0, a1, a2, &v4);
}
// Address range: 0x405840 - 0x40584d
int64_t function_405840(int64_t a1, int64_t a2) {
    // 0x405840
    return function_4057d0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405850 - 0x405861
int64_t function_405850(int64_t a1) {
    // 0x405850
    return function_4057d0(a1, -1, 58);
}
// Address range: 0x405870 - 0x40587a
int64_t function_405870(void) {
    // 0x405870
    int64_t v1; // 0x405870
    return function_4057d0(v1, v1, 58);
}
// Address range: 0x405880 - 0x4058ee
int64_t function_405880(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40589a
    return function_4051b0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4058f0 - 0x40595c
int64_t function_4058f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g66); // 0x4058f7
    int128_t v2 = __asm_movdqa(g67); // 0x4058ff
    int128_t v3 = __asm_movdqa(g68); // 0x405907
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405929
    if (a2 == 0 || a3 == 0) {
        // 0x405957
        abort();
        // UNREACHABLE
    }
    // 0x40593a
    return function_4051b0(a1, a4, a5, &v4);
}
// Address range: 0x405960 - 0x405969
int64_t function_405960(void) {
    // 0x405960
    int64_t v1; // 0x405960
    return function_4058f0(v1, v1, v1, v1, -1);
}
// Address range: 0x405970 - 0x405987
int64_t function_405970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405970
    return function_4058f0(0, a1, a2, a3, -1);
}
// Address range: 0x405990 - 0x4059a3
int64_t function_405990(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405990
    return function_4058f0(0, a1, a2, a3, a4);
}
// Address range: 0x4059b0 - 0x4059ba
int64_t function_4059b0(void) {
    // 0x4059b0
    int64_t v1; // 0x4059b0
    return function_4051b0(v1, v1, v1, &g23);
}
// Address range: 0x4059c0 - 0x4059d2
int64_t function_4059c0(int64_t a1, int64_t a2) {
    // 0x4059c0
    return function_4051b0(0, a1, a2, &g23);
}
// Address range: 0x4059e0 - 0x4059f1
int64_t function_4059e0(void) {
    // 0x4059e0
    int64_t v1; // 0x4059e0
    return function_4051b0(v1, v1, -1, &g23);
}
// Address range: 0x405a00 - 0x405a16
int64_t function_405a00(int64_t a1) {
    // 0x405a00
    return function_4051b0(0, a1, -1, &g23);
}
// Address range: 0x405a20 - 0x405a2e
int64_t function_405a20(int64_t a1, int64_t a2) {
    // 0x405a20
    int64_t v1; // 0x405a20
    return function_406890(a1, 0, 3, v1);
}
// Address range: 0x405a30 - 0x405e0d
int64_t function_405a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405ac8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405a4c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405a66
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405aab
    if (a6 < 10) {
        // 0x405aba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405bb2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405e10 - 0x405e30
int64_t function_405e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405e10
    if (a5 == 0) {
        // 0x405e2b
        return function_405a30(a1, a2, a3, a4, a5, 0, (int64_t)&g79);
    }
    int64_t v1 = 0; // 0x405e17
    v1++;
    int64_t v2 = v1; // 0x405e29
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405e20
        v1++;
        v2 = v1;
    }
    // 0x405e2b
    return function_405a30(a1, a2, a3, a4, a5, v2, (int64_t)&g79);
}
// Address range: 0x405e30 - 0x405e90
int64_t function_405e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405e30
    int64_t v3 = &v2; // 0x405e30
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405e63
    int64_t v6; // 0x405e4d
    int64_t * v7; // 0x405e6b
    int64_t v8; // 0x405e6b
    int64_t v9; // 0x405e77
    if (v5 < 48) {
        // 0x405e40
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405e83
            break;
        }
    } else {
        // 0x405e6b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405e83
            break;
        }
    }
    int64_t v10 = 10; // 0x405e61
    while (v4 != 9) {
        // 0x405e59
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405e40
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405e83
                break;
            }
        } else {
            // 0x405e6b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405e83
                break;
            }
        }
        // 0x405e59
        v10 = 10;
    }
    // 0x405e83
    return function_405a30(a1, a2, a3, a4, v3, v10, (int64_t)&g79);
}
// Address range: 0x405e90 - 0x405f4c
int64_t function_405e90(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x405e90
    int64_t v1; // bp-168, 0x405e90
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405e90
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405e90
    int64_t v8; // 0x405e90
    int64_t v9; // bp-56, 0x405e90
    int64_t v10; // 0x405ef5
    int64_t v11; // 0x405f19
    if ((int32_t)v6 < 48) {
        // 0x405ee0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405f30
            break;
        }
    } else {
        // 0x405f12
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405f30
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x405f0a
    int64_t v13 = 10; // 0x405f0a
    while (v5 != 9) {
        // 0x405f0c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405ee0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405f30
                break;
            }
        } else {
            // 0x405f12
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405f30
                break;
            }
        }
        // 0x405f02
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405f30
    int64_t v14; // bp-136, 0x405e90
    int64_t result = function_405a30(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g79); // 0x405f3f
    return result;
}
// Address range: 0x405f50 - 0x405fc4
int64_t function_405f50(int64_t a1) {
    // 0x405f50
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405fb3
    return fputs_unlocked(v1, g32);
}
// Address range: 0x405fd0 - 0x405fea
int64_t function_405fd0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405fd4
    if (size != 0 != (mem == NULL)) {
        // 0x405fe3
        return (int64_t)mem;
    }
    // 0x405fe5
    function_406220(size);
    // UNREACHABLE
}
// Address range: 0x405ff0 - 0x406011
int64_t function_405ff0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405ff3
    int64_t v2 = v1; // 0x405ff3
    if (v2 < 0) {
        // 0x40600b
        function_406220(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406009
        return function_405fd0(v2);
    }
    // 0x40600b
    function_406220(v2);
    // UNREACHABLE
}
// Address range: 0x406020 - 0x406022
int64_t function_406020(void) {
    // 0x406020
    int64_t v1; // 0x406020
    return function_405fd0(v1);
}
// Address range: 0x406030 - 0x406066
int64_t function_406030(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406058
        free(v1);
        return (int32_t)&g79 ^ (int32_t)&g79;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406041
    if (a2 != 0 != (mem == NULL)) {
        // 0x406050
        return (int64_t)mem;
    }
    // 0x406061
    function_406220(a1);
    // UNREACHABLE
}
// Address range: 0x406070 - 0x406091
int64_t function_406070(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406073
    int64_t v2 = v1; // 0x406073
    if (v2 < 0) {
        // 0x40608b
        function_406220(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406089
        return function_406030(a1, v2);
    }
    // 0x40608b
    function_406220(a1);
    // UNREACHABLE
}
// Address range: 0x4060a0 - 0x406126
int64_t function_4060a0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4060fb
            function_406220(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406030(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4060e3
    if (a2 == 0) {
        // 0x406108
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4060e8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4060fb
        function_406220(a1);
        // UNREACHABLE
    }
    // 0x4060ca
    *(int64_t *)a2 = v2;
    return function_406030(a1, v2 * a3);
}
// Address range: 0x406130 - 0x406180
int64_t function_406130(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406130
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40617a
            function_406220(a1);
            // UNREACHABLE
        }
        // 0x406152
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406030(a1, v1);
    }
    if (a2 == 0) {
        // 0x406165
        *(int64_t *)a2 = 128;
        return function_406030(0, 128);
    }
    // 0x406178
    if (a2 < 0) {
        // 0x40617a
        function_406220(a1);
        // UNREACHABLE
    }
    // 0x406152
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406030(a1, v1);
}
// Address range: 0x406180 - 0x406197
int64_t function_406180(int64_t a1, int64_t a2) {
    // 0x406180
    return (int64_t)memset((int64_t *)function_405fd0(a1), 0, (int32_t)a1);
}
// Address range: 0x4061a0 - 0x4061ce
int64_t function_4061a0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4061a7
    if ((int64_t)v1 < 0) {
        // 0x4061c9
        function_406220(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4061c9
        function_406220(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4061ba
    if (mem != NULL) {
        // 0x4061c4
        return (int64_t)mem;
    }
    // 0x4061c9
    function_406220(nmemb);
    // UNREACHABLE
}
// Address range: 0x4061d0 - 0x4061f8
int64_t function_4061d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_405fd0(a2); // 0x4061df
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406200 - 0x406213
int64_t function_406200(int64_t str) {
    // 0x406200
    return function_4061d0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406220 - 0x406251
int64_t function_406220(int64_t a1) {
    // 0x406220
    error(g22, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406260 - 0x406314
int64_t function_406260(int32_t err_num, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x406260
    error(0, err_num, dcgettext(NULL, "string comparison failed", 5));
    error(0, (int32_t)"Set LC_ALL='C' to work around the problem." ^ (int32_t)"Set LC_ALL='C' to work around the problem.", dcgettext(NULL, "Set LC_ALL='C' to work around the problem.", 5));
    function_405740(1, 8, a4, a5);
    function_405740(0, 8, a2, a3);
    error(g22, (int32_t)"The strings compared were %s and %s." ^ (int32_t)"The strings compared were %s and %s.", dcgettext(NULL, "The strings compared were %s and %s.", 5));
    return &g79;
}
// Address range: 0x406320 - 0x406375
int64_t function_406320(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_408060(a1, a2, a3, a4) & 0xffffffff; // 0x406339
    int32_t v1 = *__errno_location(); // 0x406341
    if (v1 == 0) {
        // 0x406347
        return result;
    }
    // 0x406358
    function_406260(v1, a1, a2, a3, a4);
    return result;
}
// Address range: 0x406380 - 0x4063d7
int64_t function_406380(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = function_408110(a1, a2, a3, a4) & 0xffffffff; // 0x406399
    int32_t v1 = *__errno_location(); // 0x4063a1
    if (v1 == 0) {
        // 0x4063a7
        return result;
    }
    // 0x4063b8
    function_406260(v1, a1, a2 - 1, a3, a4 - 1);
    return result;
}
// Address range: 0x4063e0 - 0x406810
int64_t function_4063e0(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x4063ee
    if (base >= 37) {
        // 0x4067eb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g79;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x406412
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x406442
    int64_t v3 = str; // 0x406447
    char v4 = c; // 0x406447
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x40643c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x406438
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x406449
    if (v4 == 45) {
        // 0x406483
        return 4;
    }
    // 0x40644e
    int64_t v6; // bp-64, 0x4063e0
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x40640e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x406454
    int64_t * v7 = (int64_t *)endptr; // 0x406459
    int64_t v8 = *v7; // 0x406459
    char v9; // 0x4063e0
    int64_t v10; // 0x4063e0
    int64_t v11; // 0x4063e0
    int64_t v12; // 0x4063e0
    int64_t v13; // 0x4063e0
    int64_t v14; // 0x4063e0
    int64_t v15; // 0x4063e0
    if (v8 == str) {
        // 0x4064b0
        if (c == 0 || str2 == NULL) {
            // 0x406483
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x4064d1
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x406483
            return 4;
        }
        goto lab_0x4064df;
    } else {
        int32_t v16 = *v1; // 0x406464
        int64_t v17 = 0; // 0x40646a
        if (v16 != 0) {
            // 0x406498
            v17 = 1;
            if (v16 != 34) {
                // 0x406483
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x406454
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x406480;
        } else {
            char c2 = *(char *)v8; // 0x406473
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x4065d3
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4064df;
                } else {
                    goto lab_0x4065e5;
                }
            } else {
                goto lab_0x406480;
            }
        }
    }
  lab_0x4064df:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x4064e7
    int64_t v21 = 1; // 0x4064e7
    int64_t v22; // 0x4063e0
    int64_t v23; // 0x4063e0
    int64_t v24; // 0x4063e0
    int64_t v25; // 0x4063e0
    int64_t v26; // 0x4063e0
    int64_t v27; // 0x4063e0
    int64_t v28; // 0x4063e0
    int64_t v29; // 0x4063e0
    int64_t v30; // 0x4063e0
    int64_t v31; // 0x4063e0
    int64_t v32; // 0x4063e0
    int64_t v33; // 0x4063e0
    int64_t v34; // 0x4063e0
    int64_t v35; // 0x4063e0
    int64_t v36; // 0x4063e0
    int64_t v37; // 0x4063e0
    int64_t v38; // 0x4063e0
    int64_t v39; // 0x4063e0
    int64_t v40; // 0x4063e0
    int64_t v41; // 0x4063e0
    if (v19 < 48) {
        // 0x4064e9
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40654a;
        } else {
            // 0x4064fc
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x40654a;
            } else {
                // 0x406518
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x40654a;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x406779
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x40654a;
                    }
                    default: {
                        // 0x40652d
                        g76 = v19;
                        v20 = 1000;
                        v21 = 2;
                        v24 = 1024;
                        v36 = 1;
                        v23 = v14;
                        v22 = v11;
                        v37 = 1;
                        v25 = 1024;
                        v38 = 1;
                        v15 = v14;
                        v12 = v11;
                        v39 = 1;
                        v26 = 1024;
                        v40 = 1;
                        v27 = 1024;
                        v41 = 1;
                        v28 = 1024;
                        v32 = 1;
                        v29 = 1024;
                        v33 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        switch (v9) {
                            case 69: {
                                goto lab_0x4066eb;
                            }
                            case 70: {
                                goto lab_0x4065e5;
                            }
                            case 71: {
                                goto lab_0x406723;
                            }
                            case 72: {
                                goto lab_0x4065e5;
                            }
                            case 73: {
                                goto lab_0x4065e5;
                            }
                            case 74: {
                                goto lab_0x4065e5;
                            }
                            case 75: {
                                goto lab_0x4065ac;
                            }
                            case 76: {
                                goto lab_0x4065e5;
                            }
                            case 77: {
                                goto lab_0x40656e;
                            }
                            case 78: {
                                goto lab_0x4065e5;
                            }
                            case 79: {
                                goto lab_0x4065e5;
                            }
                            case 80: {
                                goto lab_0x4066b8;
                            }
                            case 81: {
                                goto lab_0x4065e5;
                            }
                            case 82: {
                                goto lab_0x4065e5;
                            }
                            case 83: {
                                goto lab_0x4065e5;
                            }
                            case 84: {
                                goto lab_0x406688;
                            }
                            case 85: {
                                goto lab_0x4065e5;
                            }
                            case 86: {
                                goto lab_0x4065e5;
                            }
                            case 87: {
                                goto lab_0x4065e5;
                            }
                            case 88: {
                                goto lab_0x4065e5;
                            }
                            case 89: {
                                goto lab_0x406656;
                            }
                            case 90: {
                                goto lab_0x40661b;
                            }
                            case 91: {
                                goto lab_0x4065e5;
                            }
                            case 92: {
                                goto lab_0x4065e5;
                            }
                            case 93: {
                                goto lab_0x4065e5;
                            }
                            case 94: {
                                goto lab_0x4065e5;
                            }
                            case 95: {
                                goto lab_0x4065e5;
                            }
                            case 96: {
                                goto lab_0x4065e5;
                            }
                            case 97: {
                                goto lab_0x4065e5;
                            }
                            case 98: {
                                goto lab_0x4065ff;
                            }
                            case 99: {
                                goto lab_0x406588;
                            }
                            case 100: {
                                goto lab_0x4065e5;
                            }
                            case 101: {
                                goto lab_0x4065e5;
                            }
                            case 102: {
                                goto lab_0x4065e5;
                            }
                            case 103: {
                                goto lab_0x406723;
                            }
                            case 104: {
                                goto lab_0x4065e5;
                            }
                            case 105: {
                                goto lab_0x4065e5;
                            }
                            case 106: {
                                goto lab_0x4065e5;
                            }
                            case 107: {
                                goto lab_0x4065ac;
                            }
                            case 108: {
                                goto lab_0x4065e5;
                            }
                            case 109: {
                                goto lab_0x40656e;
                            }
                            case 110: {
                                goto lab_0x4065e5;
                            }
                            case 111: {
                                goto lab_0x4065e5;
                            }
                            case 112: {
                                goto lab_0x4065e5;
                            }
                            case 113: {
                                goto lab_0x4065e5;
                            }
                            case 114: {
                                goto lab_0x4065e5;
                            }
                            case 115: {
                                goto lab_0x4065e5;
                            }
                            case 116: {
                                goto lab_0x406688;
                            }
                            default: {
                                goto lab_0x40654a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40654a;
    }
  lab_0x406480:
    // 0x406480
    *a4 = v13;
    // 0x406483
    return v10 & 0xffffffff;
  lab_0x40654a:
    // 0x40654a
    g77 = v9 - 66;
    v24 = v20;
    v36 = v21;
    v23 = v14;
    v22 = v11;
    v37 = v21;
    v25 = v20;
    v38 = v21;
    v15 = v14;
    v12 = v11;
    v39 = v21;
    v26 = v20;
    v40 = v21;
    v27 = v20;
    v41 = v21;
    v28 = v20;
    v32 = v21;
    v29 = v20;
    v33 = v21;
    v30 = v20;
    v34 = v21;
    v31 = v20;
    v35 = v21;
    int64_t v43; // 0x4063e0
    switch (v9) {
        case 66: {
            // 0x406744
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x4065b7;
            } else {
                // 0x406751
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406588;
            }
        }
        case 69: {
            goto lab_0x4066eb;
        }
        case 71: {
            goto lab_0x406723;
        }
        case 75: {
            goto lab_0x4065ac;
        }
        case 77: {
            goto lab_0x40656e;
        }
        case 80: {
            goto lab_0x4066b8;
        }
        case 84: {
            goto lab_0x406688;
        }
        case 89: {
            goto lab_0x406656;
        }
        case 90: {
            goto lab_0x40661b;
        }
        case 98: {
            goto lab_0x4065ff;
        }
        case 99: {
            goto lab_0x406588;
        }
        case 103: {
            goto lab_0x406723;
        }
        case 107: {
            goto lab_0x4065ac;
        }
        case 109: {
            goto lab_0x40656e;
        }
        case 116: {
            goto lab_0x406688;
        }
        case 119: {
            // 0x4065f0
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x4065b7;
            } else {
                // 0x4065f5
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406588;
            }
        }
        default: {
            goto lab_0x4065e5;
        }
    }
  lab_0x4066eb:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x406703
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x40670f
    int64_t v48 = v45; // 0x406712
    int64_t v49 = v34; // 0x406712
    int64_t v50 = v46; // 0x406712
    int32_t v51 = v47; // 0x406712
    int64_t v52 = v46; // 0x406712
    while (v47 != 0) {
        // 0x406700
        v44 = (int128_t)v45 * (int128_t)v30;
        v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
        v46 = v44 > 0xffffffffffffffff ? 1 : v52;
        v47 = v51 - 1;
        v48 = v45;
        v49 = v34;
        v50 = v46;
        v51 = v47;
        v52 = v46;
    }
    goto lab_0x406644;
  lab_0x406723:
    // 0x406723
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x40672e
        int128_t v53; // 0x406729
        uint128_t v54; // 0x406729
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x40672e
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x4063e0
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x406733
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x406738
                v23 = v57;
                int64_t v58; // 0x4063e0
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x406588;
  lab_0x4065ac:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x4065af
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x406588;
    } else {
        goto lab_0x4065b7;
    }
  lab_0x40656e:;
    int128_t v62 = v24; // 0x406574
    uint128_t v63 = v62 * (int128_t)v14; // 0x406574
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x4065b7;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x406579
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x4065b7;
        } else {
            // 0x40657e
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x406588;
        }
    }
  lab_0x4066b8:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x4066cb
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x4066d7
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x4066da
    int64_t v70 = v67; // 0x4066da
    while (v68 != 0) {
        // 0x4066c8
        v65 = (int128_t)v66 * (int128_t)v29;
        v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
        v67 = v65 > 0xffffffffffffffff ? 1 : v70;
        v68 = v69 - 1;
        v48 = v66;
        v49 = v33;
        v50 = v67;
        v69 = v68;
        v70 = v67;
    }
    goto lab_0x406644;
  lab_0x406688:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x40669b
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x4066a7
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x4066aa
    int64_t v76 = v73; // 0x4066aa
    while (v74 != 0) {
        // 0x406698
        v71 = (int128_t)v72 * (int128_t)v28;
        v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
        v73 = v71 > 0xffffffffffffffff ? 1 : v76;
        v74 = v75 - 1;
        v48 = v72;
        v49 = v32;
        v50 = v73;
        v75 = v74;
        v76 = v73;
    }
    goto lab_0x406644;
  lab_0x406656:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x40666b
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x406677
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x40667a
    int64_t v82 = v79; // 0x40667a
    while (v80 != 0) {
        // 0x406668
        v77 = (int128_t)v78 * (int128_t)v27;
        v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
        v79 = v77 > 0xffffffffffffffff ? 1 : v82;
        v80 = v81 - 1;
        v48 = v78;
        v49 = v41;
        v50 = v79;
        v81 = v80;
        v82 = v79;
    }
    goto lab_0x406644;
  lab_0x40661b:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x406633
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x40663f
    int32_t v87 = v86; // 0x406642
    int64_t v88 = v85; // 0x406642
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x406630
        v83 = (int128_t)v84 * (int128_t)v26;
        v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
        v85 = v83 > 0xffffffffffffffff ? 1 : v88;
        v86 = v87 - 1;
        v87 = v86;
        v88 = v85;
        v48 = v84;
        v49 = v40;
        v50 = v85;
    }
    goto lab_0x406644;
  lab_0x4065ff:
    // 0x4065ff
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x4065b7;
    } else {
        // 0x406608
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x406588;
    }
  lab_0x406588:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x40658d
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x406480;
  lab_0x4065e5:
    // 0x4065e5
    *a4 = v15;
    // 0x406483
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4065b7:
    // 0x4065b7
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x406588;
  lab_0x406644:
    // 0x406644
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x406588;
}
// Address range: 0x406810 - 0x40688b
int64_t function_406810(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406817
    if (fileno(stream) < 0) {
        // 0x406877
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40682a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40685b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406877
            return fclose(stream);
        }
    }
    // 0x40682c
    if ((int32_t)function_4069d0(a1, v1) == 0) {
        // 0x406877
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406838
    int32_t v3 = *v2; // 0x406840
    int64_t result = fclose(stream); // 0x40684e
    if (v3 != 0) {
        // 0x406880
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406850
    return result;
}
// Address range: 0x406890 - 0x4069c5
int64_t function_406890(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x406970
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x4068cc
    int64_t v2; // 0x406890
    if (g69 < 0) {
        int64_t v3 = function_406890(fd, 0, v1, a4); // 0x406914
        int64_t v4 = v3 & 0xffffffff; // 0x406919
        if ((int32_t)v3 < 0) {
            // 0x406900
            return v4 & 0xffffffff;
        }
        // 0x40691f
        v2 = v4;
        if (g69 != -1) {
            // 0x406900
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4068e7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4068f6
            g69 = 1;
            // 0x406900
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_406890(fd & 0xffffffff, 0, v1, a4); // 0x4069a7
        int64_t v7 = v6 & 0xffffffff; // 0x4069ac
        if ((int32_t)v6 < 0) {
            // 0x406900
            return v7 & 0xffffffff;
        }
        // 0x4069b6
        g69 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40692f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40693a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x406900
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x406952
    close(fd2);
    // 0x406900
    return 0xffffffff;
}
// Address range: 0x4069d0 - 0x406a10
int64_t function_4069d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4069ea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4069ea
        return fflush(stream);
    }
    // 0x4069f8
    function_406a10(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406a10 - 0x406a67
int64_t function_406a10(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406a10
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x406a1a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x406a4b
    int64_t result = -1; // 0x406a54
    if (v1 != -1) {
        // 0x406a56
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406a62
    return result;
}
// Address range: 0x406a70 - 0x406b4f
int64_t function_406a70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x406a7c
    uint32_t v2 = *v1; // 0x406a7c
    int64_t v3 = a2 & 0xffffffff; // 0x406a81
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x406a84
    uint64_t v5 = (int64_t)*v4; // 0x406a84
    int64_t v6; // 0x406af2
    if (v3 <= v5) {
      lab_0x406aec_2:
        // 0x406aec
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x406a72
    int64_t v8 = v2; // 0x406a70
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x406aec
        goto lab_0x406aec_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x406aa8
    int64_t v17; // 0x406ab6
    int64_t * v18; // 0x406ad0
    int64_t * v19; // 0x406ad3
    int64_t v20; // 0x406ade
    int64_t v21; // 0x406ab6
    while ((v16 & 0xffffffff) > v10) {
        // 0x406ab3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x406ad0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x406ae7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x406aec
            goto lab_0x406aec_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x406aec
            goto lab_0x406aec_2;
        }
        // 0x406aa2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x406b2b
    int64_t * v23 = (int64_t *)v22; // 0x406b30
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x406b33
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x406b30
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x406b47
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x406a9d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x406aec
            goto lab_0x406aec_2;
        }
        // 0x406aa2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x406ab3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x406ad0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x406ae7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x406aec
                goto lab_0x406aec_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x406aec
                goto lab_0x406aec_2;
            }
            // 0x406aa2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x406b10
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x406b30
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x406b47
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x406aec
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x406b50 - 0x40716c
int64_t function_406b50(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x406b6f
    int64_t v2 = *v1; // 0x406b6f
    char * str2 = (char *)v2; // 0x406b7c
    char c = *str2; // 0x406b7c
    int64_t v3 = v2; // 0x406ba8
    int64_t v4 = 0; // 0x406b50
    int32_t v5; // 0x406b50
    int64_t v6; // 0x406b50
    int64_t v7; // 0x406b50
    int64_t v8; // 0x406b50
    int64_t v9; // 0x406b50
    int64_t v10; // 0x406b50
    int64_t v11; // 0x406b50
    int64_t v12; // 0x406b50
    int64_t v13; // 0x406b50
    int64_t str3; // 0x406b50
    int64_t v14; // 0x406b50
    int64_t v15; // 0x406b50
    int64_t v16; // 0x406b50
    int64_t v17; // 0x406b50
    int32_t v18; // 0x406b50
    int32_t v19; // 0x406b50
    int32_t v20; // 0x406b50
    int32_t v21; // 0x406b50
    int32_t v22; // 0x406b50
    int32_t v23; // 0x406b50
    int32_t v24; // 0x406b50
    int32_t v25; // 0x406b50
    int32_t v26; // 0x406b50
    int32_t v27; // 0x406b50
    int32_t v28; // 0x406b50
    int32_t v29; // 0x406b50
    int64_t nmemb; // 0x406b50
    int64_t v30; // 0x406b50
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x406bac
            while (v31 != 0 == (v31 != 61)) {
                // 0x406ba8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406bb8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x406bbe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x406b88
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x406bec
                int64_t v34; // 0x406b50
                int64_t v35; // 0x406b50
                if (strncmp(str, str2, n) == 0) {
                    // 0x406bf5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406d70;
                    }
                }
                int64_t v36 = a4 + 32; // 0x406c06
                int64_t v37 = *(int64_t *)v36; // 0x406c0a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x406be0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x406bf5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406d70;
                        }
                    }
                    // 0x406c06
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
                  lab_0x406c56:
                    // 0x406c56
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
                        goto lab_0x406cb0;
                    } else {
                        if (v11 == 0) {
                            // 0x406e20
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406cb0;
                        } else {
                            if (v39 == 0) {
                                // 0x406dd0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x406c7a;
                                } else {
                                    // 0x406ddc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x406c7a;
                                    } else {
                                        // 0x406dea
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x406c7a;
                                        } else {
                                            goto lab_0x406cb0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x406c7a;
                            }
                        }
                    }
                }
              lab_0x406cc1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406e96
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x407042
                            flockfile(g35);
                            int64_t v41 = *v1; // 0x407062
                            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4070af
                            int64_t v43 = (int64_t)g35;
                            int64_t v44 = v43; // 0x4070c9
                            int64_t v45; // 0x4070cb
                            if (*(char *)v42 != 0) {
                                // 0x4070cb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g35;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4070c3
                            while (v17 + nmemb != v42) {
                                // 0x4070c5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4070cb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g35;
                                }
                                // 0x4070b8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4070f0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g35);
                            v40 = *v1;
                        } else {
                            // 0x406ea4
                            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x406fff
                        free((int64_t *)v17);
                    }
                    // 0x406ef9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406f10
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x406dbe
                    return 63;
                }
                // 0x406ce0
                v5 = v39;
                if (v13 != 0) {
                    // 0x406d64
                    v35 = v13;
                    v34 = v25;
                  lab_0x406d70:;
                    int32_t * v49 = (int32_t *)a7; // 0x406d80
                    uint32_t v50 = *v49; // 0x406d80
                    int64_t v51 = v50; // 0x406d80
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x406d8a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406d93
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x406fbf
                                __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x406f6a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x406dbe
                            return 63;
                        }
                        // 0x406e08
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40711f
                                    __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40701d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x407030
                                // 0x406dbe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x406f2e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406f42
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x406dab
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x406dae
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406db2
                    int64_t result = v59; // 0x406db8
                    if (v58 != 0) {
                        // 0x406dba
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x406dbe
                    return result;
                }
            } else {
                // 0x406bbe
                v5 = v32;
            }
            // break -> 0x406ce5
            break;
        }
    }
    // 0x406ce5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x406cfd
        if (*(char *)(v60 + 1) != 45) {
            // 0x406d07
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x406dbe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x406e49
        __fprintf_chk(g35, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406d36
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406d46
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406cb0:
    // 0x406cb0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406cb0
    int64_t v63 = *(int64_t *)v62; // 0x406cb4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406cc1
        goto lab_0x406cc1;
    }
    goto lab_0x406c56;
  lab_0x406c7a:
    // 0x406c7a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x406b50
    int32_t v65; // 0x406b50
    int32_t v66; // 0x406b50
    if (v27 != 0) {
        goto lab_0x406cb0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x406e30
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406cb0;
            } else {
                goto lab_0x406ca1;
            }
        } else {
            // 0x406c95
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x406f8c
                int64_t v67 = (int64_t)mem; // 0x406f8c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406cb0;
                } else {
                    // 0x406f9f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406ca1;
                }
            } else {
                goto lab_0x406ca1;
            }
        }
    }
  lab_0x406ca1:
    // 0x406ca1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406cb0;
}
// Address range: 0x407170 - 0x407736
int64_t function_407170(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x407191
    if (v3 < 1) {
        // 0x40734e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40718d
    int32_t v5 = *(int32_t *)a7; // 0x407199
    uint64_t v6 = a1 & 0xffffffff; // 0x40719b
    int64_t v7 = v2; // 0x4071a0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4071a3
    *v8 = 0;
    int64_t v9; // 0x407170
    int64_t v10; // 0x407170
    int64_t v11; // 0x407170
    int64_t v12; // 0x407170
    int64_t str; // 0x407170
    int64_t v13; // 0x407170
    int64_t v14; // 0x407170
    int64_t v15; // 0x407170
    int64_t v16; // 0x407170
    int64_t v17; // 0x407170
    int32_t v18; // 0x407170
    char v19; // 0x407170
    if (v5 == 0) {
        // 0x407388
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4071ba;
    } else {
        // 0x4071b3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x407200
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x407203
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4072c8;
            } else {
                int64_t v22 = v7 + 1; // 0x407216
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x407226
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4072dc;
                } else {
                    goto lab_0x407238;
                }
            }
        } else {
            goto lab_0x4071ba;
        }
    }
  lab_0x4071ba:
    // 0x4071ba
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4071c0
    *v24 = 0;
    int64_t v25; // 0x407170
    int64_t v26; // 0x407170
    int64_t v27; // 0x407170
    switch (*(char *)&v2) {
        case 45: {
            // 0x4072b0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4072bd;
        }
        case 43: {
            // 0x4075c0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4072bd;
        }
        default: {
            // 0x4071dc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40753f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407658
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4072bd;
                } else {
                    // 0x40754d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4071ea;
                }
            } else {
                goto lab_0x4071ea;
            }
        }
    }
  lab_0x4072c8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4072cf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x407238;
    } else {
        goto lab_0x4072dc;
    }
  lab_0x4071ea:
    // 0x4071ea
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4072bd;
  lab_0x4072bd:
    // 0x4072bd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4072c8;
  lab_0x407238:;
    uint32_t v30 = *(int32_t *)a7; // 0x407238
    int64_t v31 = v30; // 0x407238
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40723a
    if ((int64_t)*v32 > v31) {
        // 0x40723f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x407242
    if (*v33 > v30) {
        // 0x407247
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40724a
    int64_t v35 = v31; // 0x40724e
    int64_t v36 = v15; // 0x40724e
    int64_t v37; // 0x407170
    int64_t v38; // 0x407170
    int64_t v39; // 0x407170
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4073b8
        int64_t v41 = v40; // 0x4073b8
        v2 = v41;
        int64_t v42; // 0x407170
        if (*v33 == v40) {
            // 0x4075a0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4075a8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4073c4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4073c8
                function_406a70(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4073d8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4073e1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4073ea
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407401
            int64_t v47 = v45 & 0xffffffff; // 0x407405
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40740e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x407414
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x407416;
                }
            }
            int64_t v48 = v47 + 1; // 0x4073f0
            int64_t v49 = v48 & 0xffffffff; // 0x4073f0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407401
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40740e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x407414
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x407416;
                    }
                }
                // 0x4073f0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4075b8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x407416;
    } else {
        goto lab_0x407254;
    }
  lab_0x4072dc:
    // 0x4072dc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4072df
    int64_t v51 = v12; // 0x4072df
    int64_t v52 = v14; // 0x4072df
    if (*(char *)v10 == 0) {
        goto lab_0x407238;
    } else {
        goto lab_0x4072e5;
    }
  lab_0x407254:;
    int32_t v53 = v35; // 0x407254
    int64_t v54; // 0x407170
    int64_t v55; // 0x407170
    int64_t v56; // 0x407170
    int64_t v57; // 0x407170
    int64_t v58; // 0x407170
    int64_t v59; // 0x407170
    char * v60; // 0x407170
    int64_t v61; // 0x407170
    int64_t v62; // 0x407269
    int64_t v63; // 0x407170
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4073a3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4073a6;
    } else {
        // 0x40725c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x407170
        int64_t v66 = v65 ? -1 : 1; // 0x407270
        int64_t v67 = (int64_t)"--"; // 0x407170
        int64_t v68 = v62; // 0x407170
        int64_t v69 = 3; // 0x407270
        unsigned char v70 = *(char *)v68; // 0x407270
        char v71 = *(char *)v67; // 0x407270
        char v72 = v71; // 0x407270
        bool v73 = false; // 0x407270
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
            // 0x407360
            if (*(char *)v62 == 45) {
                // 0x407420
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x407420
                if (c == 0) {
                    goto lab_0x40736a;
                } else {
                    // 0x40742d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4074b0;
                    } else {
                        if (c == 45) {
                            // 0x407693
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x407505;
                        } else {
                            // 0x40743e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4074b0;
                            } else {
                                // 0x407443
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x407464;
                                } else {
                                    // 0x40744a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4074b0;
                                    } else {
                                        goto lab_0x407464;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40736a;
            }
        } else {
            uint32_t v75 = *v33; // 0x407280
            v2 = v75;
            int32_t v76 = *v32; // 0x407283
            int64_t v77 = v35 + 1; // 0x407286
            int32_t v78 = v77; // 0x407289
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4075f0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407297
                    function_406a70(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4072a5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4073a6;
        }
    }
  lab_0x4072e5:;
    // 0x4072e5
    int64_t v79; // bp-104, 0x407170
    int64_t v80 = &v79; // 0x40717a
    int64_t v81 = v50 + 1; // 0x4072e5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4072ec
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4072f1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4072f5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4072f9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407301
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407306
    int32_t c2 = v84; // 0x407306
    char * found_char_pos = strchr(str2, c2); // 0x407306
    int64_t v87 = *v82; // 0x40730b
    v2 = v87;
    int64_t v88 = *v85; // 0x407315
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x407320
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x407610
            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4075dd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40734e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407306
    char v91 = *(char *)(v90 + 1); // 0x40733b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4072f5
        if (v91 != 58) {
            // 0x40734e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x407564
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x407668
                *v8 = 0;
            } else {
                // 0x40764c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40758e
            *v83 = 0;
            // 0x40734e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40756e
        if (v93 != 0) {
            // 0x407600
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40758e
            *v83 = 0;
            // 0x40734e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407581
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40758e
            *v83 = 0;
            // 0x40734e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4076ca
            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40767a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407681
        // 0x40758e
        *v83 = 0;
        // 0x40734e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4074d9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4074db
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x407700
                __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4076b1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4076b8
            // 0x40734e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4074e6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4074ea
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x407505;
  lab_0x407416:
    // 0x407416
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x407254;
  lab_0x407505:;
    int64_t v99 = function_406b50(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x407523
    // 0x40734e
    return v99 & 0xffffffff;
  lab_0x4073a6:;
    int32_t v100 = v55; // 0x4073a6
    if (v100 != (int32_t)v59) {
        // 0x4073aa
        *(int32_t *)a7 = v100;
    }
    // 0x40734e
    return 0xffffffff;
  lab_0x40736a:
    // 0x40736a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407371
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40734e
    return v99 & 0xffffffff;
  lab_0x4074b0:
    // 0x4074b0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4072e5;
  lab_0x407464:
    // 0x407464
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_406b50(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40748a
    if ((int32_t)v101 != -1) {
        // 0x40734e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40749f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4074b0;
}
// Address range: 0x407740 - 0x407796
int64_t function_407740(int64_t a1) {
    // 0x407740
    *(int32_t *)&g70 = g30;
    *(int32_t *)&g71 = g29;
    int64_t v1; // 0x407740
    int64_t result = function_407170(v1, v1, v1, v1, v1, v1, &g70, a1 & 0xffffffff); // 0x407766
    g30 = *(int32_t *)&g70;
    g75 = (char *)g73;
    *(int32_t *)&g28 = g72;
    return result;
}
// Address range: 0x4077a0 - 0x4077b8
int64_t function_4077a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4077a0
    return function_407740(1);
}
// Address range: 0x4077c0 - 0x4077d3
int64_t function_4077c0(int64_t a1, int64_t a2, char * a3, char (**a4)[12], int32_t a5, int64_t a6) {
    // 0x4077c0
    return function_407740(0);
}
// Address range: 0x4077e0 - 0x4077f5
int64_t function_4077e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4077e0
    return function_407170(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x407800 - 0x407816
int64_t function_407800(void) {
    // 0x407800
    return function_407740(0);
}
// Address range: 0x407820 - 0x407838
int64_t function_407820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407820
    return function_407170(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407840 - 0x4078ba
int64_t function_407840(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40784b
    int64_t v2 = (int64_t)&g1; // 0x40784b
    int32_t * pwc; // 0x407840
    int64_t v3; // 0x407840
    int64_t n; // 0x407840
    if (a2 == 0) {
        goto lab_0x407892;
    } else {
        // 0x40784d
        if (a3 == 0) {
            // 0x407878
            return -2;
        }
        // 0x407859
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407892;
        } else {
            goto lab_0x407864;
        }
    }
  lab_0x407892:
    // 0x407892
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407840
    pwc = (int32_t *)&v4;
    goto lab_0x407864;
  lab_0x407864:;
    char * wstr = (char *)v3; // 0x40786a
    int64_t ps; // 0x407840
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40786a
    int64_t result = v5; // 0x40786a
    if (v5 < 0xfffffffe) {
        // 0x407878
        return result;
    }
    int64_t result2 = result; // 0x4078a9
    if ((char)function_403be0(0, v3) == 0) {
        // 0x4078ab
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407878
    return result2;
}
// Address range: 0x4078c0 - 0x4079c4
int64_t function_4078c0(int64_t result, int32_t a2, int64_t a3) {
    // 0x4078c0
    if (a3 == 0) {
        // 0x4078f9
        return 0;
    }
    int64_t v1 = result; // 0x4078cc
    int64_t v2 = a3; // 0x4078cc
    int64_t result2; // 0x4078c0
    if (result % 8 != 0) {
        char v3 = a2; // 0x4078ce
        int64_t v4 = result; // 0x4078d1
        if ((char)result == v3) {
            // 0x4078f9
            return result;
        }
        int64_t v5 = a3; // 0x4078d1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x4078e0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x407900;
            }
            // 0x4078e6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x4078f9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x4078f9
        return result2;
    }
  lab_0x407900:;
    int64_t result3 = v1; // 0x40792d
    int64_t v6 = v2; // 0x40792d
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x40790f
        int64_t v9 = 0x10000 * v8 | v8; // 0x40791c
        int64_t v10 = 0x100000000 * v9 | v9; // 0x407926
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x407946
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x407975
            int64_t v13 = v1 + 8; // 0x407979
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x407963
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x40798c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x407983
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x4078f9
                return 0;
            }
        }
    }
  lab_0x40798c:;
    char v15 = a2; // 0x40798c
    if (*(char *)result3 == v15) {
        // 0x4078f9
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x4079a0
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x4078f9
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x4078f9
    return result2;
}
// Address range: 0x4079d0 - 0x407a2d
int64_t function_4079d0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4079d7
    int64_t v2; // 0x4079d0
    int64_t result = function_406810(a1, v2); // 0x4079e8
    if ((v2 & 32) != 0) {
        // 0x407a10
        if ((int32_t)result == 0) {
            // 0x407a14
            *__errno_location() = 0;
        }
        // 0x407a0a
        return 0xffffffff;
    }
    // 0x4079f1
    if ((int32_t)result == 0) {
        // 0x407a0a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4079f8
    if (v1 == 0) {
        // 0x4079fa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x407a0a
    return result2;
}
// Address range: 0x407a30 - 0x407f92
int64_t function_407a30(void) {
    char * v1 = nl_langinfo(14); // 0x407a46
    char * v2 = g74; // 0x407a4b
    char * v3; // 0x407a30
    int64_t v4; // 0x407a30
    int64_t v5; // 0x407a30
    int64_t v6; // 0x407a30
    int64_t v7; // 0x407a30
    int32_t size; // 0x407a30
    int32_t size2; // 0x407a30
    int32_t len; // 0x407b02
    int64_t v8; // 0x407b02
    char * env_val; // 0x407aed
    if (v2 == NULL) {
        // 0x407ae8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x407b55;
        } else {
            // 0x407afa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x407b55;
            } else {
                // 0x407aff
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x407aed
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407f85
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x407b55;
                    } else {
                        // 0x407ef9
                        size2 = len + 14;
                        goto lab_0x407b1b;
                    }
                } else {
                    goto lab_0x407b1b;
                }
            }
        }
    } else {
        // 0x407a30
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x407a6a;
    }
  lab_0x407d9c:;
    // 0x407d9c
    struct _IO_FILE * stream; // 0x407bdb
    int32_t v10 = __uflow(stream); // 0x407d9f
    int64_t v11; // 0x407a30
    int64_t v12 = v11; // 0x407da9
    int64_t v13; // 0x407a30
    int64_t v14 = v13; // 0x407da9
    int32_t v15 = v10; // 0x407da9
    int64_t v16; // 0x407a30
    int64_t v17 = v16; // 0x407da9
    int64_t v18 = v11; // 0x407da9
    int64_t v19 = v13; // 0x407da9
    int64_t v20 = v16; // 0x407da9
    if (v10 == -1) {
        // break -> 0x407daf
        goto lab_0x407daf;
    }
    goto lab_0x407c29;
  lab_0x407c1e:;
    // 0x407c1e
    int64_t v90; // 0x407a30
    int64_t * v32; // 0x407c10
    *v32 = v90 + 1;
    int64_t v89; // 0x407a30
    v12 = v89;
    int64_t v91; // 0x407a30
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x407a30
    v17 = v92;
    goto lab_0x407c29;
  lab_0x407c29:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x407a30
    int32_t v25; // bp-120, 0x407a30
    int32_t v26; // bp-184, 0x407a30
    int64_t v27; // 0x407bdb
    int64_t v28; // 0x407bf8
    int64_t v29; // 0x407bfd
    int64_t * v30; // 0x407c14
    switch (c) {
        case 32: {
            goto lab_0x407c10;
        }
        case 10: {
            goto lab_0x407c10;
        }
        case 9: {
            goto lab_0x407c10;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407e01
            int32_t v33; // 0x407a30
            char v34; // 0x407a30
            int32_t v35; // 0x407e0e
            if (v31 < *v30) {
                // 0x407de0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x407e0b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407e01
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407de0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x407e0b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407df0
                v36 = v33;
            }
            // 0x407edf
            if (v36 == -1) {
                // break -> 0x407daf
                break;
            }
            goto lab_0x407c10;
        }
        default: {
            // 0x407c3f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x407daf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407c68
            int64_t v39 = v37 + 4; // 0x407c6a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407c76
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407c78
            while (v41 == 0) {
                // 0x407c68
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407c96
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407ca2
            int64_t v45 = v43 + 4; // 0x407ca4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407cb0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407cb2
            while (v47 == 0) {
                // 0x407ca2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x407c9f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407cc8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407cd8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x407cdc
            int64_t v52 = v51 + v48; // 0x407ce5
            int64_t * mem; // 0x407a30
            int64_t v53; // 0x407a30
            int64_t v54; // 0x407a30
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x407e1b
                int64_t v56 = v55 + 3; // 0x407e27
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407d01
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407d10
            if (mem == NULL) {
                // 0x407f3c
                free((int64_t *)v21);
                function_406810(v27, v53);
                v24 = (int64_t)&g1;
                goto lab_0x407bb4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407d28
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407d32
            uint32_t v62 = (int32_t)v59; // 0x407d35
            int64_t v63; // 0x407a30
            if (v62 >= 8) {
                // 0x407e44
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x407e5e
                int64_t v66 = v61 - v65; // 0x407e62
                uint32_t v67 = (int32_t)(v66 + v59); // 0x407e6d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x407e7e
                    int64_t v70 = v69 & 0xffffffff; // 0x407e7e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x407e7b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x407f0f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407d47
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x407d4b
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
            int64_t v73 = v51 + 1; // 0x407d5b
            int64_t v74 = v60 - 1; // 0x407d5f
            uint32_t v75 = (int32_t)v73; // 0x407d64
            int64_t v76; // 0x407a30
            if (v75 >= 8) {
                // 0x407e92
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x407e9c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x407eac
                int64_t v80 = v74 - v79; // 0x407eb0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x407ebb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x407ecb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407ec9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407f26
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x407f2e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407d76
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x407d7a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407f73
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x407d8e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x407c1e;
            } else {
                goto lab_0x407d9c;
            }
        }
    }
  lab_0x407c10:;
    int64_t v93 = v23; // 0x407a30
    int64_t v94 = v22; // 0x407a30
    int64_t v95 = v21; // 0x407a30
    goto lab_0x407c10_2;
  lab_0x407b55:;
    int64_t * mem3 = malloc(size); // 0x407b55
    int64_t v97 = (int64_t)&g1; // 0x407b60
    int64_t v98; // 0x407a30
    int64_t path; // 0x407a30
    if (mem3 == NULL) {
        goto lab_0x407b32;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x407b55
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407b76;
    }
  lab_0x407a6a:;
    int64_t str = v1 == NULL ? (int64_t)&g1 : (int64_t)v1; // 0x407a5d
    char v100 = *v3; // 0x407a6a
    int64_t v101; // 0x407a30
    if (v100 == 0) {
        // 0x407ac4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x407a30
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x407a30
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x407ab0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x407ab7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x407a80
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x407a8d
        char v107 = *(char *)v106; // 0x407a92
        v102 = v107;
        if (v107 == 0) {
            // 0x407ac4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x407a9b
    v104 = v103 + 1;
  lab_0x407ab7:
    // 0x407ac4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x407b32:;
    char * v108 = (char *)v97;
    g74 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x407a6a;
  lab_0x407b76:;
    int64_t v109 = v98 + path; // 0x407b76
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407ba2
    v24 = (int64_t)&g1;
    if (fd >= 0) {
        // 0x407bd1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x407f02
            close(fd);
            v24 = (int64_t)&g1;
        } else {
            // 0x407bf5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407c10_2:;
                uint64_t v96 = *v32; // 0x407c10
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x407d9c;
                } else {
                    goto lab_0x407c1e;
                }
            }
          lab_0x407daf:
            // 0x407daf
            function_406810(v27, v19);
            v24 = (int64_t)&g1;
            if (v18 != 0) {
                // 0x407dce
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407bb4;
  lab_0x407b1b:;
    int64_t * mem4 = malloc(size2); // 0x407b1b
    v97 = (int64_t)&g1;
    if (mem4 != NULL) {
        // 0x407bc1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407b76;
    } else {
        goto lab_0x407b32;
    }
  lab_0x407bb4:
    // 0x407bb4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x407b32;
}
// Address range: 0x407fa0 - 0x408054
int64_t function_407fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x407fba
    int64_t v2 = a3; // 0x407fc2
    int64_t v3 = a1; // 0x407fc2
    int64_t v4 = a4; // 0x407fc2
    int64_t v5 = a2; // 0x407fc2
    *v1 = 0;
    char * str = (char *)v3; // 0x408000
    char * str2 = (char *)v2; // 0x408000
    int32_t strcoll_rc = strcoll(str, str2); // 0x408000
    while (strcoll_rc == 0) {
        int64_t v6 = (int64_t)strlen(str) + 1; // 0x407fd3
        int64_t v7 = (int64_t)strlen(str2) + 1; // 0x407fdf
        v4 -= v7;
        v5 -= v6;
        if (v5 == 0) {
            // 0x408020
            return v4 != 0 ? 0xffffffff : 0;
        }
        // 0x407fee
        v2 += v7;
        v3 += v6;
        if (v4 == 0) {
            // 0x408040
            return 1;
        }
        *v1 = 0;
        str = (char *)v3;
        str2 = (char *)v2;
        strcoll_rc = strcoll(str, str2);
    }
    // 0x408009
    return strcoll_rc;
}
// Address range: 0x408060 - 0x408101
int64_t function_408060(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n == a4) {
        // 0x40807f
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x4080f0
            *__errno_location() = 0;
            // 0x4080dc
            return 0;
        }
    }
    char * v1 = (char *)(n + str); // 0x4080a1
    char * v2 = (char *)(a4 + str2); // 0x4080a5
    *v1 = 0;
    *v2 = 0;
    int64_t v3 = function_407fa0(str, n + 1, str2, a4 + 1); // 0x4080c3
    // 0x4080dc
    return v3 & 0xffffffff;
}
// Address range: 0x408110 - 0x408173
int64_t function_408110(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n != a4 || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x408158
        return function_407fa0(str, n, str2, a4);
    }
    // 0x40813a
    *__errno_location() = 0;
    return 0;
}
// Address range: 0x408180 - 0x4081dd
int64_t function_408180(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408180
    return function_401530();
}
// Address range: 0x4081e0 - 0x4081e1
int64_t function_4081e0(void) {
    // 0x4081e0
    int64_t result; // 0x4081e0
    return result;
}
// Address range: 0x4081f0 - 0x408208
int64_t function_4081f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4081f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x408208 - 0x408228
int64_t function_408208(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x408212
    while (*(int64_t *)v1 != -1) {
        // 0x408213
        v1 -= 8;
    }
    // 0x408224
    return result;
}
