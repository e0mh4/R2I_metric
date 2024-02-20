// Address range: 0x401e80 - 0x401e85
int64_t function_401e80(void) {
    // 0x401e80
    abort();
    // UNREACHABLE
}
// Address range: 0x401e85 - 0x401e8a
int64_t function_401e85(void) {
    // 0x401e85
    abort();
    // UNREACHABLE
}
// Address range: 0x401e8a - 0x401e8f
int64_t function_401e8a(void) {
    // 0x401e8a
    abort();
    // UNREACHABLE
}
// Address range: 0x401e8f - 0x401e94
int64_t function_401e8f(void) {
    // 0x401e8f
    abort();
    // UNREACHABLE
}
// Address range: 0x401e94 - 0x401e99
int64_t function_401e94(void) {
    // 0x401e94
    abort();
    // UNREACHABLE
}
// Address range: 0x401e99 - 0x401e9e
int64_t function_401e99(void) {
    // 0x401e99
    abort();
    // UNREACHABLE
}
// Address range: 0x401ea0 - 0x403bd4
int64_t function_401ea0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401eb5
    int32_t v2 = getpagesize(); // 0x401ec2
    int128_t v3 = v2; // 0x401ecc
    function_4053a0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v4; // 0x401ea0
    function_409900(0x4050e0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v4);
    g53 = "-";
    g59 = (char *)&g3;
    bool v5; // 0x401ea0
    int64_t v6 = v5 ? -1 : 1;
    int64_t v7 = -1 - v2;
    int128_t v8 = 0; // 0x401f39
    int64_t v9 = 0; // 0x401f39
    int32_t v10 = 0; // 0x401f39
    int64_t v11 = 0; // 0x401f39
    int64_t v12 = 0; // 0x401f39
    int64_t v13; // 0x401ea0
    int64_t v14; // 0x401ea0
    int64_t v15; // 0x401ea0
    int64_t v16; // 0x401ea0
    int64_t v17; // 0x401ea0
    int64_t v18; // 0x401ea0
    int64_t v19; // 0x401ea0
    int64_t v20; // 0x401ea0
    int64_t v21; // 0x401ea0
    int64_t v22; // 0x401ea0
    int64_t v23; // 0x401ea0
    int64_t v24; // 0x401ea0
    int32_t v25; // 0x401ea0
    int32_t v26; // 0x401ea0
    int32_t v27; // 0x401ea0
    int32_t v28; // 0x401ea0
    int32_t v29; // 0x401ea0
    int32_t v30; // 0x401ea0
    int64_t * v31; // 0x401ea0
    int64_t * v32; // 0x401ea0
    int64_t * v33; // 0x401ea0
    int64_t * v34; // 0x401ea0
    int128_t v35; // 0x401ea0
    int64_t v36; // 0x401ea0
    int64_t v37; // 0x401ea0
    int64_t v38; // 0x401ea0
    int64_t v39; // 0x401f60
    int64_t v40; // 0x401f65
    int32_t v41; // 0x401ea0
    int64_t v42; // 0x401f59
    int64_t v43; // 0x401ea0
    while (true) {
      lab_0x401f40_2:
        // 0x401f40
        v17 = v12;
        v13 = v11;
        v21 = v20;
        v29 = v28;
        v33 = v32;
        v25 = v10;
        v24 = v9;
        v35 = v8;
        int32_t v44 = g31; // 0x401f4f
        v39 = function_408cd0(v1, a2, "0123456789C:a:b:del:n:t:ux", &g4, 0, v21);
        v40 = v39 & 0xffffffff;
        v41 = v39;
        switch (v41) {
            case -1: {
                goto lab_0x4024ca;
            }
            case 101: {
                // 0x402488
                g46 = 1;
                v8 = v35;
                v9 = v24;
                v10 = v25;
                v31 = v33;
                v27 = v29;
                v19 = v21;
                v11 = v13;
                v12 = v17;
                goto lab_0x401f40;
            }
            default: {
                if (v41 > 101) {
                    // 0x401f80
                    v38 = (int64_t)"0123456789abcdef";
                    if (v41 == 120) {
                        goto lab_0x40219e;
                    } else {
                        if (v41 > 120) {
                            if (v41 == 129) {
                                // 0x402320
                                *(int64_t *)&g66 = (int64_t)g80;
                                v8 = v35;
                                v9 = v24;
                                v10 = v25;
                                v31 = v33;
                                v27 = v29;
                                v19 = v21;
                                v11 = v13;
                                v12 = v17;
                            } else {
                                if (v41 > 129) {
                                    if (v41 != 130) {
                                        if (v41 != 131) {
                                            // 0x403795
                                            function_404cf0(1);
                                            // UNREACHABLE
                                        }
                                        int64_t v45 = (int64_t)g80;
                                        int64_t v46 = function_405180(v45, a2); // 0x40214d
                                        v15 = v45;
                                        if (v46 != v45) {
                                            goto lab_0x403956;
                                        }
                                        // 0x40215b
                                        g54 = g80;
                                        v8 = v35;
                                        v9 = v24;
                                        v10 = v25;
                                        v31 = v33;
                                        v27 = v29;
                                        v19 = v21;
                                        v11 = v13;
                                        v12 = v17;
                                    } else {
                                        char * v47 = dcgettext(NULL, "invalid IO block size", 5); // 0x402088
                                        v8 = v35;
                                        v9 = v24;
                                        v10 = function_4079f0((int64_t)g80, 1, v7, (int64_t *)"bEGKkMmPTYZ0", (int64_t)v47, 0);
                                        v31 = v33;
                                        v27 = v29;
                                        v19 = 0;
                                        v11 = v13;
                                        v12 = v17;
                                    }
                                } else {
                                    if (v41 != 128) {
                                        // 0x403795
                                        function_404cf0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x40217b
                                    g47 = 1;
                                    v8 = v35;
                                    v9 = v24;
                                    v10 = v25;
                                    v31 = v33;
                                    v27 = v29;
                                    v19 = v21;
                                    v11 = v13;
                                    v12 = v17;
                                }
                            }
                        } else {
                            if (v41 == 110) {
                                // 0x402380
                                if ((int32_t)v13 != 0) {
                                    // 0x403780
                                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot split in more than one way", 5));
                                    // 0x403795
                                    function_404cf0(1);
                                    // UNREACHABLE
                                }
                                int16_t * v48 = *__ctype_b_loc(); // 0x40238e
                                int64_t v49 = (int64_t)g80; // 0x402391
                                int64_t v50 = (int64_t)v48 + 1; // 0x4023b2
                                int64_t v51 = v49; // 0x4023b7
                                int64_t v52 = v49; // 0x4023b7
                                char * v53 = g80; // 0x4023b7
                                if ((*(char *)(2 * (int64_t)*g80 + v50) & 32) != 0) {
                                    int64_t v54 = v51 + 1;
                                    char * v55 = (char *)v54;
                                    g80 = v55;
                                    v51 = v54;
                                    v52 = v54;
                                    v53 = v55;
                                    while ((*(char *)(2 * (int64_t)*v55 + v50) & 32) != 0) {
                                        // 0x4023a0
                                        v54 = v51 + 1;
                                        v55 = (char *)v54;
                                        g80 = v55;
                                        v51 = v54;
                                        v52 = v54;
                                        v53 = v55;
                                    }
                                }
                                char * str = v53;
                                int64_t v56 = v52;
                                int64_t v57 = 2; // 0x4023c6
                                int64_t v58 = v56;
                                int64_t v59 = (int64_t)"r/";
                                unsigned char v60 = *(char *)v58; // 0x4023c6
                                char v61 = *(char *)v59; // 0x4023c6
                                char v62 = v61; // 0x4023c6
                                bool v63 = false; // 0x4023c6
                                while (v60 == v61) {
                                    // 0x4023b9
                                    v57--;
                                    int64_t v64 = v59 + v6; // 0x4023c6
                                    int64_t v65 = v58 + v6; // 0x4023c6
                                    v62 = v60;
                                    v63 = true;
                                    if (v57 == 0) {
                                        // break -> 
                                        break;
                                    }
                                    v58 = v65;
                                    v59 = v64;
                                    v60 = *(char *)v58;
                                    v61 = *(char *)v59;
                                    v62 = v61;
                                    v63 = false;
                                }
                                unsigned char v66 = v62;
                                char * str2; // 0x401ea0
                                int64_t v67; // 0x401ea0
                                if ((v60 >= v66 && !v63) != v60 < v66) {
                                    // 0x402494
                                    if (strncmp(str, "l/", 2) != 0) {
                                        // 0x402494
                                        str2 = g80;
                                        v67 = 5;
                                    } else {
                                        char * v68 = (char *)(v56 + 2); // 0x4024be
                                        g80 = v68;
                                        str2 = v68;
                                        v67 = 6;
                                    }
                                } else {
                                    char * v69 = (char *)(v56 + 2); // 0x4023df
                                    g80 = v69;
                                    str2 = v69;
                                    v67 = 7;
                                }
                                int64_t v70 = v67;
                                char * found_char_pos = strchr(str2, 47); // 0x4023f2
                                int64_t v71 = (int64_t)dcgettext(NULL, "invalid number of chunks", 5);
                                if (found_char_pos == NULL) {
                                    int64_t v72 = function_4079f0((int64_t)g80, 1, -1, (int64_t *)&g11, v71, 0); // 0x402710
                                    v8 = v72;
                                    v9 = v24;
                                    v10 = v25;
                                    v31 = v33;
                                    v27 = v29;
                                    v19 = 0;
                                    v11 = v70;
                                    v12 = v17;
                                } else {
                                    int64_t v73 = function_4079f0((int64_t)found_char_pos + 1, 1, -1, (int64_t *)&g11, v71, 0); // 0x40242c
                                    int128_t v74 = v73; // 0x402438
                                    v8 = v74;
                                    v9 = v24;
                                    v10 = v25;
                                    v31 = v33;
                                    v27 = v29;
                                    v19 = 0;
                                    v11 = v70;
                                    v12 = v17;
                                    if (found_char_pos != g80) {
                                        // 0x402443
                                        *found_char_pos = 0;
                                        char * v75 = dcgettext(NULL, "invalid chunk number", 5); // 0x402453
                                        int64_t v76 = function_4079f0((int64_t)g80, 1, v73, (int64_t *)&g11, (int64_t)v75, 0); // 0x402474
                                        v8 = v74;
                                        v9 = v76;
                                        v10 = v25;
                                        v31 = v33;
                                        v27 = v29;
                                        v19 = 0;
                                        v11 = v70;
                                        v12 = v17;
                                    }
                                }
                            } else {
                                if (v41 > 110) {
                                    if (v41 != 116) {
                                        if (v41 != 117) {
                                          lab_0x403795:
                                            // 0x403795
                                            function_404cf0(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401ff9
                                        g45 = 1;
                                        v8 = v35;
                                        v9 = v24;
                                        v10 = v25;
                                        v31 = v33;
                                        v27 = v29;
                                        v19 = v21;
                                        v11 = v13;
                                        v12 = v17;
                                    } else {
                                        char * str3 = g80; // 0x401f9f
                                        char v77 = *str3; // 0x401fa6
                                        v43 = (int64_t)str3;
                                        if (v77 == 0) {
                                            // 0x403b12
                                            error(1, (int32_t)"empty record separator" ^ (int32_t)"empty record separator", dcgettext(NULL, "empty record separator", 5));
                                            v37 = v35;
                                            v26 = v25;
                                            v34 = v33;
                                            v30 = v29;
                                            v22 = v1;
                                            v14 = v13;
                                            v16 = v43;
                                            v18 = v17;
                                            goto lab_0x403b34;
                                        }
                                        int32_t v78 = v77; // 0x401fb7
                                        if (*(char *)(v43 + 1) != 0) {
                                            // 0x401fb9
                                            v78 = 0;
                                            if (strcmp(str3, "\\0") != 0) {
                                                goto lab_0x403926;
                                            }
                                        }
                                        int32_t v79 = v78;
                                        int32_t v80 = g18; // 0x401fd0
                                        if (v80 > -1 == (v80 != v79)) {
                                            // 0x403904
                                            error(1, (int32_t)"multiple separator characters specified" ^ (int32_t)"multiple separator characters specified", dcgettext(NULL, "multiple separator characters specified", 5));
                                            goto lab_0x403926;
                                        }
                                        // 0x401fe2
                                        g18 = v79;
                                        v8 = v35;
                                        v9 = v24;
                                        v10 = v25;
                                        v31 = v33;
                                        v27 = v29;
                                        v19 = v21;
                                        v11 = v13;
                                        v12 = v17;
                                    }
                                } else {
                                    if (v41 != 108) {
                                        // 0x403795
                                        function_404cf0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x402011
                                    if ((int32_t)v13 != 0) {
                                        // 0x403780
                                        error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot split in more than one way", 5));
                                        // 0x403795
                                        function_404cf0(1);
                                        // UNREACHABLE
                                    }
                                    char * v81 = dcgettext(NULL, "invalid number of lines", 5); // 0x40202c
                                    int64_t v82 = function_4079f0((int64_t)g80, 1, -1, (int64_t *)&g11, (int64_t)v81, 0); // 0x40204f
                                    v8 = v82;
                                    v9 = v24;
                                    v10 = v25;
                                    v31 = v33;
                                    v27 = v29;
                                    v19 = 0;
                                    v11 = 3;
                                    v12 = v17;
                                }
                            }
                        }
                        goto lab_0x401f40;
                    }
                } else {
                    if (v41 < 58) {
                        if (v41 <= 47) {
                            if (v41 == -131) {
                                // 0x402294
                                function_407550((int64_t)g36, "split", "GNU coreutils", (int64_t)g22, "Torbjorn Granlund", "Richard M. Stallman");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v41 == -130) {
                                // 0x4022d7
                                function_404cf0(0);
                                // UNREACHABLE
                            }
                            goto lab_0x403795;
                        }
                        uint32_t v83 = v44 == 0 ? 1 : v44; // 0x401f59
                        v42 = v83;
                        int32_t v84 = v13; // 0x4022e0
                        if (v84 == 0) {
                            goto lab_0x402301;
                        } else {
                            // 0x4022e5
                            if (v84 != 4) {
                                int64_t v85 = v23;
                                error(0, 0, dcgettext(NULL, (char *)v85, 5));
                                // 0x403795
                                function_404cf0(1);
                                // UNREACHABLE
                            }
                            int32_t v86 = v17; // 0x4022ef
                            if (v86 == 0 || v83 == v86) {
                                int64_t v87 = v35;
                                v36 = v87;
                                if (v87 >= 0x199999999999999a) {
                                    goto lab_0x40380e_2;
                                }
                                int64_t v88 = (0x100000000 * v39 - 0x3000000000 >> 32) + 10 * v87; // 0x402756
                                v36 = v87;
                                if (v88 < v87) {
                                    goto lab_0x40380e_2;
                                }
                                // 0x402762
                                v8 = v88;
                                v9 = v24;
                                v10 = v25;
                                v31 = v33;
                                v27 = v29;
                                v19 = v21;
                                v11 = v13;
                                v12 = v42;
                                goto lab_0x401f40;
                            } else {
                                goto lab_0x402301;
                            }
                        }
                    } else {
                        if (v41 == 97) {
                            char * v89 = dcgettext(NULL, "invalid suffix length", 5); // 0x402344
                            int64_t v90 = function_4079f0((int64_t)g80, (int64_t)((int32_t)"invalid suffix length" ^ (int32_t)"invalid suffix length"), 0x1fffffffffffffff, (int64_t *)&g11, (int64_t)v89, 0); // 0x402367
                            g56 = v90;
                            v8 = v35;
                            v9 = v24;
                            v10 = v25;
                            v31 = v33;
                            v27 = v29;
                            v19 = 0;
                            v11 = v13;
                            v12 = v17;
                            goto lab_0x401f40;
                        } else {
                            if (v41 > 97) {
                                if (v41 != 98) {
                                    // 0x402190
                                    v38 = (int64_t)"0123456789";
                                    if (v41 != 100) {
                                        // 0x403795
                                        function_404cf0(1);
                                        // UNREACHABLE
                                    }
                                    goto lab_0x40219e;
                                } else {
                                    // 0x4020e1
                                    if ((int32_t)v13 != 0) {
                                        // 0x403780
                                        error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot split in more than one way", 5));
                                        // 0x403795
                                        function_404cf0(1);
                                        // UNREACHABLE
                                    }
                                    char * v91 = dcgettext(NULL, "invalid number of bytes", 5); // 0x4020fc
                                    v8 = function_4079f0((int64_t)g80, 1, 0x7fffffffffffffff, (int64_t *)"bEGKkMmPTYZ0", (int64_t)v91, 0);
                                    v9 = v24;
                                    v10 = v25;
                                    v31 = v33;
                                    v27 = v29;
                                    v19 = 0;
                                    v11 = 1;
                                    v12 = v17;
                                    goto lab_0x401f40;
                                }
                            } else {
                                if (v41 != 67) {
                                    // 0x403795
                                    function_404cf0(1);
                                    // UNREACHABLE
                                }
                                // 0x402231
                                if ((int32_t)v13 != 0) {
                                    // 0x403780
                                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot split in more than one way", 5));
                                    // 0x403795
                                    function_404cf0(1);
                                    // UNREACHABLE
                                }
                                char * v92 = dcgettext(NULL, "invalid number of bytes", 5); // 0x40224c
                                v8 = function_4079f0((int64_t)g80, 1, 0x7fffffffffffffff, (int64_t *)"bEGKkMmPTYZ0", (int64_t)v92, 0);
                                v9 = v24;
                                v10 = v25;
                                v31 = v33;
                                v27 = v29;
                                v19 = 0;
                                v11 = 2;
                                v12 = v17;
                                goto lab_0x401f40;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4024ca:
    if (v24 != 0) {
        // 0x4024d2
        v23 = (int64_t)"--filter does not process a chunk extracted to stdout";
        if (g66 != NULL) {
          lab_0x403780:
            // 0x403780
            error(0, 0, dcgettext(NULL, (char *)v23, 5));
            // 0x403795
            function_404cf0(1);
            // UNREACHABLE
        }
    }
    int128_t v93 = 1000; // 0x4024e3
    int64_t v94 = 3; // 0x4024e3
    if ((int32_t)v13 != 0) {
        // 0x4024e9
        v93 = v35;
        v94 = v13;
        if ((int64_t)v35 == 0) {
            int64_t v95 = function_406fc0((int64_t)&g2); // 0x403ad9
            char * v96 = dcgettext((char *)((int32_t)&g2 ^ (int32_t)&g2), "invalid number of lines", 5); // 0x403aed
            error((int32_t)&g2 ^ (int32_t)&g2 ^ (int32_t)&g2 ^ (int32_t)&g2, (int32_t)"invalid number of lines" ^ (int32_t)"invalid number of lines", "%s: %s", v96, (char *)v95);
            function_404cf0(1);
            // UNREACHABLE
        }
    }
    uint128_t v97 = v93;
    if (g18 < 0) {
        // 0x4024fe
        g18 = 10;
    }
    int64_t v98 = v94 + 0xfffffffb; // 0x40250f
    int64_t v99 = v98 & 0xffffffff; // 0x40250f
    int64_t v100; // 0x401ea0
    int64_t v101; // 0x401ea0
    int64_t v102; // 0x401ea0
    int64_t v103; // 0x401ea0
    int64_t v104; // 0x401ea0
    int64_t v105; // 0x401ea0
    int64_t v106; // 0x401ea0
    int64_t v107; // 0x401ea0
    int64_t v108; // 0x401ea0
    int64_t v109; // 0x401ea0
    int64_t v110; // 0x401ea0
    int64_t v111; // 0x401ea0
    int64_t v112; // 0x401ea0
    int64_t v113; // 0x401ea0
    int64_t oact; // bp-216, 0x401ea0
    int32_t v114; // 0x401ea0
    int32_t v115; // 0x401ea0
    int32_t v116; // 0x401ea0
    int32_t v117; // 0x401ea0
    int64_t * v118; // 0x401ea0
    int64_t * v119; // 0x401ea0
    int128_t v120; // 0x401ea0
    int128_t v121; // 0x401ea0
    if (g55 == NULL) {
        int64_t v122 = v97; // 0x40276f
        v107 = v122;
        v121 = v3;
        v115 = v25;
        v119 = v33;
        v117 = v29;
        v112 = a2;
        v110 = v1;
        v108 = v122;
        v101 = v99;
        v103 = v94;
        v105 = v17;
        if ((int32_t)v98 < 3) {
            goto lab_0x40277e;
        } else {
            goto lab_0x40252d;
        }
    } else {
        // 0x40251c
        g21 = 0;
        v107 = v21;
        if ((int32_t)v98 < 3) {
            int64_t v123 = function_407a20((int64_t)g55, 0, 10, &oact, (int64_t *)&g11, v21); // 0x402812
            int64_t v124 = v97; // 0x402817
            v121 = v3;
            v115 = v25;
            v119 = v33;
            v117 = v29;
            v112 = a2;
            v110 = v1;
            v108 = v124;
            v101 = v99;
            v103 = v94;
            v105 = v17;
            if ((int32_t)v123 != 0) {
                goto lab_0x40277e;
            } else {
                uint64_t v125 = oact; // 0x40282a
                v121 = v3;
                v115 = v25;
                v119 = v33;
                v117 = v29;
                v112 = a2;
                v110 = v1;
                v108 = v124;
                v101 = v99;
                v103 = v94;
                v105 = v17;
                v120 = v3;
                v114 = v25;
                v118 = v33;
                v116 = v29;
                v111 = a2;
                v109 = v1;
                v113 = v124;
                v106 = v125;
                v100 = v99;
                v102 = v94;
                v104 = v17;
                if (v125 <= -1 - v124 == v125 < v124) {
                    goto lab_0x40376e;
                } else {
                    goto lab_0x40277e;
                }
            }
        } else {
            goto lab_0x40252d;
        }
    }
  lab_0x40380e_2:
    // 0x40380e
    function_405350(v36, &oact);
    error(1, (int32_t)"line count option -%s%c... is too large" ^ (int32_t)"line count option -%s%c... is too large", dcgettext(NULL, "line count option -%s%c... is too large", 5));
    v23 = (int64_t)"cannot split in more than one way";
    goto lab_0x403780;
  lab_0x4035fe:;
    int64_t v126 = function_406e40(0, 3, (int64_t)g53); // 0x40360c
    error(1, *__errno_location(), dcgettext(NULL, "%s: cannot determine file size", 5));
    int128_t v127; // 0x401ea0
    int128_t v128 = v127; // 0x40363c
    int32_t v129; // 0x401ea0
    int32_t v130 = v129; // 0x40363c
    int64_t v131; // 0x401ea0
    int64_t v132 = v131; // 0x40363c
    int64_t v133; // 0x401ea0
    int64_t v134 = v133; // 0x40363c
    int64_t v135 = v126; // 0x40363c
    int64_t v136; // 0x401ea0
    int64_t v137 = v136; // 0x40363c
    int64_t v138; // 0x401ea0
    int64_t v139 = v138; // 0x40363c
    goto lab_0x403641;
  lab_0x403b34:;
    int64_t v1027 = function_406e40(0, 3, (int64_t)g53); // 0x403b42
    error(1, *__errno_location(), "%s", (char *)v1027);
    int64_t v775 = v37; // 0x403b60
    int32_t v776 = v26; // 0x403b60
    int64_t * v777 = v34; // 0x403b60
    int32_t v778 = v30; // 0x403b60
    int64_t v650; // 0x401ea0
    int64_t v779 = v650; // 0x403b60
    int64_t v780 = v22; // 0x403b60
    int64_t v781 = v14; // 0x403b60
    int64_t v782 = v16; // 0x403b60
    int64_t v783 = v18; // 0x403b60
    goto lab_0x403b65;
  lab_0x4030a0_2:;
    // 0x4030a0
    int64_t v1029; // 0x401ea0
    int64_t v1030 = function_406e40(0, 3, *(int64_t *)v1029); // 0x4030aa
    int32_t * err_num4; // 0x401ea0
    error(1, *err_num4, "%s", (char *)v1030);
    int64_t v755; // 0x401ea0
    int64_t v259 = v755; // 0x4030ca
    int64_t v798; // 0x402e40
    char v260 = v798; // 0x4030ca
    int64_t v747; // 0x401ea0
    int64_t v261 = v747; // 0x4030ca
    int32_t v620; // 0x401ea0
    int32_t v262 = v620; // 0x4030ca
    int64_t * v811; // 0x401ea0
    int64_t * v263 = v811; // 0x4030ca
    int64_t v617; // 0x401ea0
    int64_t v264 = v617; // 0x4030ca
    int32_t * v265 = err_num4; // 0x4030ca
    int64_t v1031; // 0x401ea0
    int64_t v267 = v1031; // 0x4030ca
    int64_t size; // 0x401ea0
    int64_t v268 = size; // 0x4030ca
    int64_t v269 = 1; // 0x4030ca
    int64_t v730; // 0x401ea0
    int64_t v270 = v730; // 0x4030ca
    int64_t v807; // 0x401ea0
    int64_t v271 = v807; // 0x4030ca
    int64_t v272 = v1029; // 0x4030ca
    int64_t data; // 0x401ea0
    int64_t v273 = data; // 0x4030ca
    goto lab_0x4030d0;
  lab_0x402e61:;
    // 0x402e61
    int64_t v815; // 0x401ea0
    int64_t v850 = v815; // 0x402e64
    int64_t v849 = v807; // 0x402e64
    char v808; // 0x401ea0
    char v848 = v808; // 0x402e64
    char v809; // 0x401ea0
    char v847 = v809; // 0x402e64
    int32_t * v816; // 0x401ea0
    int32_t * v846 = v816; // 0x402e64
    int32_t v810; // 0x401ea0
    int32_t v845 = v810; // 0x402e64
    int64_t * v844 = v811; // 0x402e64
    int64_t v813; // 0x402e98
    if (v813 == 0) {
        // break -> 0x402e17
        goto lab_0x402e17_3;
    }
    int64_t * v1032 = v811; // 0x402e76
    int32_t v1033 = v810; // 0x402e76
    int32_t * v1034 = v816; // 0x402e76
    char v1035 = v809; // 0x402e76
    char v1036 = v808; // 0x402e76
    int64_t v814; // 0x401ea0
    int64_t v1037 = v814; // 0x402e76
    int64_t v1038 = v807 != v747 ? v807 + 1 : 1; // 0x402e76
    int64_t v1039 = v815; // 0x402e76
    goto lab_0x402e7a;
  lab_0x402e7a:
    // 0x402e7a
    v850 = v1039;
    v849 = v1038;
    v848 = v1036;
    v847 = v1035;
    v846 = v1034;
    v845 = v1033;
    v844 = v1032;
    int64_t * v799 = v1032; // 0x402e82
    int32_t v800 = v1033; // 0x402e82
    int32_t * v801 = v1034; // 0x402e82
    char v802 = v1035; // 0x402e82
    char v803 = v1036; // 0x402e82
    int64_t v804 = v1038; // 0x402e82
    int64_t v805 = v1039; // 0x402e82
    int64_t v806 = v1037; // 0x402e82
    if (v1037 == v798) {
        // break -> 0x402e17
        goto lab_0x402e17_3;
    }
    goto lab_0x402e84;
  lab_0x403250:;
    // 0x403250
    int32_t * v818; // 0x401ea0
    int32_t * v839 = v818; // 0x403263
    char v819; // 0x401ea0
    char v840 = v819; // 0x403263
    int64_t v821; // 0x401ea0
    int64_t v841 = v821; // 0x403263
    int64_t v822; // 0x401ea0
    int64_t v842 = v822; // 0x403263
    int64_t v820; // 0x401ea0
    bool v843 = *(int32_t *)v820 == 32 == (g66 != NULL); // 0x403263
    goto lab_0x402f31;
  lab_0x403088:;
    // 0x403088
    int64_t v827; // 0x401ea0
    v1029 = v827;
    int64_t v826; // 0x401ea0
    v1031 = v826;
    int32_t * v824; // 0x401ea0
    err_num4 = v824;
    if (*err_num4 != 32) {
        goto lab_0x4030a0_2;
    }
    int32_t v834 = v810; // 0x40309a
    int32_t * v835 = err_num4; // 0x40309a
    char v825; // 0x401ea0
    char v836 = v825; // 0x40309a
    int64_t v837 = v1031; // 0x40309a
    int64_t v838 = v1029; // 0x40309a
    if (g66 == NULL) {
        goto lab_0x4030a0_2;
    }
    goto lab_0x402f44;
  lab_0x402f31:;
    int32_t v1040 = !v843 ? 1 : 0x1000000 * v810 >> 24; // 0x402f40
    v834 = v1040;
    v835 = v839;
    v836 = v840;
    v837 = v841;
    v838 = v842;
    goto lab_0x402f44;
  lab_0x4031a8:;
    // 0x4031a8
    int64_t v831; // 0x402edb
    int64_t v1057 = function_406e40(0, 3, *(int64_t *)v831); // 0x4031b2
    int32_t * v833; // 0x402ee4
    uint32_t err_num6 = *v833; // 0x4031c9
    error(1, err_num6, "%s", (char *)v1057);
    goto lab_0x4031d8;
  lab_0x402f44:;
    int32_t v1041 = v834; // 0x402f49
    int32_t * v1042 = v835; // 0x402f49
    char v1043 = v836; // 0x402f49
    int64_t v1044 = v837; // 0x402f49
    int64_t v1045 = v838; // 0x402f49
    if (v836 != 0) {
        goto lab_0x4031d8;
    } else {
        goto lab_0x402f4f;
    }
  lab_0x4031d8:;
    int64_t v1046 = v831;
    int32_t * err_num5 = v833;
    int64_t * v1047 = (int64_t *)(v1046 + 16); // 0x4031d8
    if ((int32_t)function_407e60(*v1047, (int64_t)err_num6) != 0) {
        int64_t v1048 = function_406e40(0, 3, *(int64_t *)v1046); // 0x4037ee
        error(1, *err_num5, "%s", (char *)v1048);
        v36 = v747;
        goto lab_0x40380e_2;
    }
    // 0x4031e9
    *v1047 = 0;
    *(int32_t *)(v1046 + 8) = -2;
    v1041 = v810;
    v1042 = err_num5;
    char v832; // 0x402ee0
    v1043 = v832;
    int64_t v828; // 0x401ea0
    v1044 = v828;
    v1045 = v1046;
    goto lab_0x402f4f;
  lab_0x402f4f:;
    int64_t v1049 = v1045;
    int64_t v1050 = v1044;
    char v1051 = v1043;
    int32_t * v1052 = v1042;
    int32_t v1053 = v1041;
    v1032 = v811;
    v1033 = v1053;
    v1034 = v1052;
    v1035 = v1051;
    v1036 = v808;
    v1037 = v1050;
    v1038 = v807;
    v1039 = v1049;
    int64_t v787; // 0x401ea0
    int64_t v788; // 0x401ea0
    int32_t v786; // 0x401ea0
    int64_t * v785; // 0x401ea0
    int64_t v789; // 0x401ea0
    if (v813 != 0) {
        int32_t v1054 = (int32_t)(int64_t)v811 + 1; // 0x402f58
        int64_t * v1055 = (int64_t *)(int64_t)v1054;
        v1032 = v1055;
        v1033 = v1053;
        v1034 = v1052;
        v1035 = v1051;
        v1036 = v808;
        v1037 = v1050;
        v1038 = v807;
        v1039 = v1049;
        if (v747 == (int64_t)v1054) {
            char v1056 = v1053; // 0x402f6e
            v1032 = NULL;
            v1033 = 0;
            v1034 = v1052;
            v1035 = v1051;
            v1036 = v1056;
            v1037 = v1050;
            v1038 = v807;
            v1039 = v1049;
            v785 = v1055;
            v786 = v1053;
            v787 = v1049;
            v788 = data;
            v789 = v747;
            if (v1056 == 0) {
                goto lab_0x40335c;
            }
        }
    }
    goto lab_0x402e7a;
  lab_0x403b65:;
    int64_t v1028 = function_406e40(0, 3, (int64_t)g53); // 0x403b73
    error(1, *__errno_location(), "%s", (char *)v1028);
    int64_t v585 = v775; // 0x403b91
    int32_t v587 = v776; // 0x403b91
    int64_t * v589 = v777; // 0x403b91
    int32_t v591 = v778; // 0x403b91
    int64_t v593 = v779; // 0x403b91
    int64_t v596 = v780; // 0x403b91
    int64_t v598 = v781; // 0x403b91
    int64_t v600 = v782; // 0x403b91
    int64_t v602 = v783; // 0x403b91
    goto lab_0x403b96;
  lab_0x40379f:;
    // 0x40379f
    int128_t v186; // 0x401ea0
    int128_t v150 = v186; // 0x4037a6
    int32_t v345; // 0x401ea0
    int32_t v151 = v345; // 0x4037a6
    int64_t * v344; // 0x401ea0
    int64_t * v152 = v344; // 0x4037a6
    int32_t v343; // 0x401ea0
    int32_t v153 = 0x1000000 * (v343 % 256) / 0x1000000; // 0x4037a6
    int64_t v342; // 0x401ea0
    int64_t v154 = v342; // 0x4037a6
    char v155 = 0; // 0x4037a6
    int64_t v187; // 0x401ea0
    int64_t v156 = v187; // 0x4037a6
    int64_t v157 = -1; // 0x4037a6
    int64_t v158 = v342; // 0x4037a6
    int64_t v347; // 0x402c30
    int64_t v159 = v347 + v342; // 0x4037a6
    int64_t v337; // 0x401ea0
    int64_t v160 = v337; // 0x4037a6
    int64_t v188; // 0x401ea0
    int64_t v161 = v188; // 0x4037a6
    int64_t v340; // 0x401ea0
    int64_t v162 = v340; // 0x4037a6
    int64_t v339; // 0x401ea0
    int64_t v163 = v339; // 0x4037a6
    int64_t v338; // 0x401ea0
    int64_t v164 = v338; // 0x4037a6
    goto lab_0x402bee;
  lab_0x402fc5_3:
    // 0x402fc5
    if (close(0) == 0) {
        // 0x402fd4
        function_4046f0(0, g19, g65, (int64_t)g58);
        return 0;
    }
    int64_t v525 = function_406e40(0, 3, (int64_t)g53); // 0x403a09
    error(1, *__errno_location(), "%s", (char *)v525);
    int64_t v420; // 0x401ea0
    int64_t v526 = v420; // 0x403a27
    int32_t v422; // 0x401ea0
    int32_t v527 = v422; // 0x403a27
    int64_t * v423; // 0x401ea0
    int64_t * v528 = v423; // 0x403a27
    int32_t v425; // 0x401ea0
    int32_t v529 = v425; // 0x403a27
    int64_t v427; // 0x401ea0
    int64_t v530 = v427; // 0x403a27
    int64_t v531 = v525; // 0x403a27
    int64_t v429; // 0x401ea0
    int64_t v532 = v429; // 0x403a27
    int64_t v431; // 0x401ea0
    int64_t v533 = v431; // 0x403a27
    int64_t v432; // 0x401ea0
    int64_t v534 = v432; // 0x403a27
    int64_t v433; // 0x401ea0
    int64_t v535 = v433; // 0x403a27
    int64_t v434; // 0x401ea0
    int64_t v536 = v434; // 0x403a27
    goto lab_0x403a2c;
  lab_0x403528:;
    // 0x403528
    int64_t v457; // 0x401ea0
    int64_t v463; // 0x4034d7
    int64_t v628 = v463 + v457; // 0x403528
    int64_t v421; // 0x401ea0
    v420 = v421;
    int32_t v417; // 0x401ea0
    v422 = v417;
    int64_t * v424; // 0x401ea0
    v423 = v424;
    int32_t v426; // 0x401ea0
    v425 = v426;
    int64_t v428; // 0x401ea0
    v427 = v428;
    v429 = v463;
    v431 = -1;
    int64_t v464; // 0x401ea0
    v432 = v464;
    int64_t v418; // 0x40349d
    v433 = v418;
    v434 = v428;
    int64_t v435 = v464; // 0x4034b1
    int64_t v436 = v463; // 0x4034b1
    int64_t v437 = v628; // 0x4034b1
    int64_t v438 = -1; // 0x4034b1
    if (v628 >= v418) {
        goto lab_0x402fc5_3;
    }
    goto lab_0x4034b7;
  lab_0x4034fc:;
    // 0x4034fc
    int32_t * err_num3; // 0x4034e8
    error(1, *err_num3, "%s", (char *)function_406e40(0, 3, (int64_t)"-"));
    v464 = (int64_t)err_num3;
    goto lab_0x403528;
  lab_0x403956:
    // 0x403956
    function_406fc0(v15);
    int64_t v629 = (int64_t)"invalid suffix %s, contains directory separator"; // 0x40396b
    goto lab_0x403883;
  lab_0x403926:
    // 0x403926
    function_406fc0(v43);
    error(1, (int32_t)"multi-character separator %s" ^ (int32_t)"multi-character separator %s", dcgettext(NULL, "multi-character separator %s", 5));
    v15 = v43;
    goto lab_0x403956;
  lab_0x401f40:
    // 0x401f40
    v32 = v31;
    v28 = v27;
    v20 = v19;
    goto lab_0x401f40_2;
  lab_0x40219e:;
    int64_t accept = v38;
    char * str4 = g80; // 0x40219e
    int64_t v852 = (int64_t)str4;
    int64_t * v853 = (int64_t *)v40; // 0x4021a5
    *(int64_t *)&g20 = accept;
    v8 = v35;
    v9 = v24;
    v10 = v25;
    v31 = v853;
    v27 = v29;
    v19 = v21;
    v11 = v13;
    v12 = v17;
    int64_t v854 = v852; // 0x4021b4
    int32_t v204; // 0x401ea0
    if (str4 != NULL) {
        int64_t v855 = -1; // 0x4021c3
        int64_t v856 = 0; // 0x4021c3
        while (v855 != 0) {
            int64_t v857 = v854;
            v855--;
            v854 = v857 + v6;
            v856 = v855;
            if (*(char *)v857 == 0) {
                // break -> 
                break;
            }
            v856 = 0;
        }
        int64_t v858 = -2 - v856; // 0x4021cb
        if (v858 != (int64_t)strspn(str4, (char *)accept)) {
            // 0x40385e
            function_406fc0(v852);
            v629 = (int64_t)"%s: invalid start value for hexadecimal suffix";
            v204 = 5;
            if (v41 == 100) {
                goto lab_0x4038ec;
            } else {
                goto lab_0x403883;
            }
        }
        int64_t v859 = v852; // 0x4021ed
        if (*str4 == 48) {
            int64_t v860 = v852 + 1; // 0x4021ef
            int64_t v861 = v860; // 0x4021f8
            v859 = v852;
            if (*(char *)v860 != 0) {
                int64_t v862 = v861;
                char * v863 = (char *)v862; // 0x402209
                g80 = v863;
                v859 = v862;
                while (*v863 == 48) {
                    int64_t v864 = v862 + 1; // 0x402200
                    v861 = v864;
                    v859 = v862;
                    if (*(char *)v864 == 0) {
                        // break -> 0x402218
                        break;
                    }
                    v862 = v861;
                    v863 = (char *)v862;
                    g80 = v863;
                    v859 = v862;
                }
            }
        }
        // 0x402218
        g55 = (char *)v859;
        v8 = v35;
        v9 = v24;
        v10 = v25;
        v31 = v853;
        v27 = v858;
        v19 = v21;
        v11 = v13;
        v12 = v17;
    }
    goto lab_0x401f40;
  lab_0x402301:
    // 0x402301
    v8 = 0x100000000 * v39 - 0x3000000000 >> 32;
    v9 = v24;
    v10 = v25;
    v31 = v33;
    v27 = v29;
    v19 = v21;
    v11 = 4;
    v12 = v42;
    goto lab_0x401f40;
  lab_0x40277e:;
    int64_t v865 = v105;
    int64_t v866 = v103;
    int64_t v867 = v101;
    int64_t v868; // 0x401ea0
    int64_t v869 = v868;
    int64_t v870; // 0x401ea0
    int64_t v871 = v870;
    int64_t v872 = v108;
    int64_t v873 = v110;
    int64_t v874 = v112;
    int64_t v875; // 0x401ea0
    int64_t v876 = v875;
    char v877; // 0x401ea0
    char v878 = v877;
    int32_t * v879; // 0x401ea0
    int32_t * v880 = v879;
    int64_t v881; // 0x401ea0
    int64_t v882 = v881;
    int32_t v883 = v117;
    int64_t * v884 = v119;
    int32_t v885 = v115;
    int128_t v886 = v121;
    int64_t v887 = g20; // 0x40278d
    int64_t v888 = -1;
    int64_t v889 = 0; // 0x40278d
    while (v888 != 0) {
        int64_t v890 = v887;
        int64_t v891 = v888 - 1; // 0x40278d
        int64_t v892 = v891; // 0x40278d
        v887 = v890 + v6;
        v889 = v891;
        if (*(char *)v890 == 0) {
            // break -> 
            break;
        }
        v888 = v892;
        v889 = 0;
    }
    uint64_t v893 = -2 - v889; // 0x402795
    int64_t v894 = v872; // 0x4027ae
    int64_t v895 = 0; // 0x4027ae
    if (v893 <= v872) {
        uint64_t v896 = v894 / v893;
        int64_t v897 = 1; // 0x4027c0
        v894 = v896;
        int64_t v898 = v897; // 0x4027ca
        v895 = v897;
        while (v893 <= v896) {
            // 0x4027bb
            v896 = v894 / v893;
            v897 = v898 + 1;
            v894 = v896;
            v898 = v897;
            v895 = v897;
        }
    }
    int64_t v899 = v872 % v893 != 0; // 0x4027a5
    int32_t v900 = g56; // 0x4027cc
    g21 = 0;
    int64_t v901 = v895 + v899; // 0x4027de
    int128_t v902 = v886; // 0x4027e5
    int32_t v903 = v885; // 0x4027e5
    int64_t * v904 = v884; // 0x4027e5
    int32_t v905 = v883; // 0x4027e5
    int64_t v906 = v882; // 0x4027e5
    int32_t * v907 = v880; // 0x4027e5
    char v908 = v878; // 0x4027e5
    int64_t v909 = v876; // 0x4027e5
    int64_t v910 = v873; // 0x4027e5
    int64_t v911 = v899; // 0x4027e5
    int64_t v912 = v872; // 0x4027e5
    int64_t v913 = v871; // 0x4027e5
    int64_t v914 = v869; // 0x4027e5
    int64_t v915 = v867; // 0x4027e5
    int64_t v916 = v866; // 0x4027e5
    int64_t v917 = v901; // 0x4027e5
    int64_t v918 = v865; // 0x4027e5
    int32_t v919; // 0x401ea0
    int64_t v920; // 0x401ea0
    int64_t v921; // 0x401ea0
    int64_t v922; // 0x401ea0
    int64_t v923; // 0x401ea0
    int64_t v924; // 0x401ea0
    int64_t v925; // 0x401ea0
    int64_t v926; // 0x401ea0
    int64_t v927; // 0x401ea0
    int64_t v928; // 0x401ea0
    int64_t v929; // 0x401ea0
    char v930; // 0x401ea0
    int64_t v931; // 0x401ea0
    int64_t v932; // 0x401ea0
    int32_t * v933; // 0x401ea0
    int32_t v934; // 0x401ea0
    int32_t v935; // 0x401ea0
    int64_t * v936; // 0x401ea0
    int128_t v937; // 0x401ea0
    if (v900 == 0) {
        goto lab_0x40253e;
    } else {
        // 0x4027eb
        v919 = v900;
        v937 = v886;
        v934 = v885;
        v936 = v884;
        v935 = v883;
        v931 = v882;
        v933 = v880;
        v930 = v878;
        v932 = v876;
        v928 = v873;
        v926 = v899;
        v927 = v872;
        v920 = v871;
        v921 = v869;
        v922 = v867;
        v923 = v866;
        v924 = v901;
        v925 = v865;
        if (v901 > (int64_t)v900) {
            // 0x403a93
            error(1, (int32_t)"the suffix length needs to be at least %lu" ^ (int32_t)"the suffix length needs to be at least %lu", dcgettext(NULL, "the suffix length needs to be at least %lu", 5));
            v929 = (int32_t)"the suffix length needs to be at least %lu" ^ (int32_t)"the suffix length needs to be at least %lu";
            goto lab_0x403ab8;
        } else {
            goto lab_0x4027f4;
        }
    }
  lab_0x40252d:
    // 0x40252d
    v902 = v3;
    v903 = v25;
    v904 = v33;
    v905 = v29;
    v910 = v1;
    v911 = v40;
    v912 = v107;
    v915 = v99;
    v916 = v94;
    v917 = 0;
    v918 = v17;
    v919 = g56;
    v937 = v3;
    v934 = v25;
    v936 = v33;
    v935 = v29;
    v928 = v1;
    v926 = v40;
    v927 = v107;
    v922 = v99;
    v923 = v94;
    v924 = 0;
    v925 = v17;
    if (g56 != 0) {
        goto lab_0x4027f4;
    } else {
        goto lab_0x40253e;
    }
  lab_0x40253e:;
    int64_t v938 = v917;
    int32_t v939 = v938 >= 2 ? (int32_t)v938 : 2; // 0x40254b
    g56 = v939;
    int32_t v940 = v939; // 0x40254b
    int128_t v941 = v902; // 0x40254b
    int32_t v942 = v903; // 0x40254b
    int64_t * v943 = v904; // 0x40254b
    int32_t v944 = v905; // 0x40254b
    int64_t v945 = v906; // 0x40254b
    int32_t * v946 = v907; // 0x40254b
    char v947 = v908; // 0x40254b
    int64_t v948 = v909; // 0x40254b
    int64_t v949 = v910; // 0x40254b
    int64_t v950 = v911; // 0x40254b
    int64_t v951 = v912; // 0x40254b
    int64_t v952 = v913; // 0x40254b
    int64_t v953 = v914; // 0x40254b
    int64_t v954 = v915; // 0x40254b
    int64_t v955 = v916; // 0x40254b
    int64_t v956 = v938; // 0x40254b
    int64_t v957 = v918; // 0x40254b
    goto lab_0x402552;
  lab_0x4027f4:
    // 0x4027f4
    g21 = 0;
    v940 = v919;
    v941 = v937;
    v942 = v934;
    v943 = v936;
    v944 = v935;
    v945 = v931;
    v946 = v933;
    v947 = v930;
    v948 = v932;
    v949 = v928;
    v950 = v926;
    v951 = v927;
    v952 = v920;
    v953 = v921;
    v954 = v922;
    v955 = v923;
    v956 = v924;
    v957 = v925;
    goto lab_0x402552;
  lab_0x402552:;
    int64_t v958 = v957;
    int64_t v959 = v956;
    int64_t v960 = v955;
    int64_t v961 = v954;
    int64_t v962 = v953;
    int64_t v642 = v952;
    int64_t v641 = v951;
    int64_t v963 = v950;
    int64_t v640 = v948;
    char v964 = v947;
    int32_t * v965 = v946;
    int64_t v635 = v945;
    int32_t v966 = v944;
    int64_t * v967 = v943;
    int32_t v633 = v942;
    int128_t v631 = v941;
    int32_t v968 = v940; // 0x4025c4
    if (v949 > (int64_t)g31) {
        // 0x40255c
        int64_t v969; // 0x401ea0
        int64_t v970 = v969;
        int64_t v971; // 0x402552
        int64_t v972 = 0x100000000 * v971 >> 29; // 0x402562
        int64_t v973 = v972 + v970;
        int64_t v974 = *(int64_t *)v973; // 0x40256a
        g31 = &g32;
        g53 = (char *)v974;
        int64_t v975; // 0x401ea0
        if (v975 > (int64_t)&g32) {
            int64_t v976 = *(int64_t *)(v973 + 8); // 0x40257f
            g31 = &g33;
            g59 = (char *)v976;
            v929 = v972;
            if (v975 > (int64_t)&g33) {
                goto lab_0x403ab8;
            } else {
                goto lab_0x40259c;
            }
        } else {
            goto lab_0x40259c;
        }
    } else {
        goto lab_0x40259c;
    }
  lab_0x40376e:
    // 0x40376e
    v121 = v120;
    v115 = v114;
    v119 = v118;
    v117 = v116;
    int64_t v331; // 0x401ea0
    v881 = v331;
    int32_t * v332; // 0x401ea0
    v879 = v332;
    char v333; // 0x401ea0
    v877 = v333;
    int64_t v334; // 0x401ea0
    v875 = v334;
    v112 = v111;
    v110 = v109;
    v108 = v106 + v113;
    int64_t v335; // 0x401ea0
    v870 = v335;
    int64_t v336; // 0x401ea0
    v868 = v336;
    v101 = v100;
    v103 = v102;
    v105 = v104;
    goto lab_0x40277e;
  lab_0x40259c:
    // 0x40259c
    if (g55 != NULL) {
        int64_t v977 = (int64_t)g55; // 0x4025b8
        int64_t v978 = -1; // 0x4025b8
        int64_t v979 = 0; // 0x4025b8
        while (v978 != 0) {
            int64_t v980 = v977;
            v978--;
            v977 = v980 + v6;
            v979 = v978;
            if (*(char *)v980 == 0) {
                // break -> 
                break;
            }
            v979 = 0;
        }
        if (-2 - v979 > (int64_t)v968) {
            // 0x403780
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"numerical suffix start value is too large for the suffix length", 5));
            // 0x403795
            function_404cf0(1);
            // UNREACHABLE
        }
    }
    // 0x4025d1
    if (strcmp(g53, "-") == 0) {
        goto lab_0x4025ff;
    } else {
        // 0x4025e9
        if ((int32_t)function_405260(0, (int64_t)g53, 0, 0) < 0) {
            goto lab_0x4039a1;
        } else {
            goto lab_0x4025ff;
        }
    }
  lab_0x403ab8:
    // 0x403ab8
    function_406fc0(*(int64_t *)(v874 + 16 + v929));
    v629 = (int64_t)"extra operand %s";
    goto lab_0x403883;
  lab_0x4025ff:;
    // 0x4025ff
    int64_t v484; // 0x401ea0
    int64_t v691; // 0x401ea0
    int64_t v507; // 0x401ea0
    int64_t v486; // 0x401ea0
    int64_t v692; // 0x401ea0
    int64_t v508; // 0x401ea0
    int64_t v693; // 0x401ea0
    int64_t v509; // 0x401ea0
    int64_t v488; // 0x401ea0
    int64_t v694; // 0x401ea0
    int64_t v510; // 0x401ea0
    int64_t v695; // 0x401ea0
    int64_t v511; // 0x401ea0
    int64_t v489; // 0x401ea0
    int64_t v696; // 0x401ea0
    int64_t v512; // 0x401ea0
    int64_t v480; // 0x401ea0
    int64_t v689; // 0x401ea0
    int64_t v505; // 0x401ea0
    int64_t v482; // 0x401ea0
    int64_t v690; // 0x401ea0
    int64_t v506; // 0x401ea0
    int64_t v477; // 0x401ea0
    int64_t v687; // 0x401ea0
    int64_t v478; // 0x401ea0
    int64_t v686; // 0x401ea0
    int64_t v503; // 0x401ea0
    int64_t v479; // 0x401ea0
    int64_t v688; // 0x401ea0
    int64_t v504; // 0x401ea0
    char v473; // 0x401ea0
    char v684; // 0x401ea0
    char v501; // 0x401ea0
    int64_t v470; // 0x401ea0
    int64_t v634; // 0x401ea0
    int64_t v682; // 0x401ea0
    int64_t v499; // 0x401ea0
    int64_t v475; // 0x401ea0
    int64_t v685; // 0x401ea0
    int64_t v502; // 0x401ea0
    int32_t * v471; // 0x401ea0
    int32_t * v683; // 0x401ea0
    int32_t * v500; // 0x401ea0
    int32_t v467; // 0x401ea0
    int32_t v632; // 0x401ea0
    int32_t v679; // 0x401ea0
    int32_t v496; // 0x401ea0
    int32_t v469; // 0x401ea0
    int32_t v681; // 0x401ea0
    int32_t v498; // 0x401ea0
    int64_t * v468; // 0x401ea0
    int64_t * v680; // 0x401ea0
    int64_t * v497; // 0x401ea0
    int128_t v466; // 0x401ea0
    int128_t v678; // 0x401ea0
    int128_t v630; // 0x401ea0
    int128_t v495; // 0x401ea0
    if (__fxstat(1, 0, (struct stat *)&g48) != 0) {
        int64_t v981 = function_406e40(0, 3, (int64_t)g53); // 0x40397e
        error(1, *__errno_location(), "%s", (char *)v981);
        goto lab_0x4039a1;
    } else {
        // 0x402618
        if (v633 == 0) {
            // branch -> 0x402649
        }
        int32_t v982 = v633;
        int64_t v983 = v631;
        uint64_t v984 = (int64_t)v982; // 0x40264e
        int64_t v985 = v984 + v983; // 0x402657
        uint64_t v986 = v983 - 1 + function_407690(v985); // 0x402661
        int64_t v987 = v986 - v986 % v983; // 0x40267b
        v678 = 0x7fffffffffffffff;
        v679 = v982;
        v680 = v967;
        v681 = v966;
        v682 = v987;
        v683 = v965;
        v684 = v964;
        v685 = v640;
        v686 = v983;
        v687 = -1;
        v688 = v985;
        v689 = v963;
        v690 = v641;
        v691 = v642;
        v692 = v962;
        v693 = v961;
        v694 = v960;
        v695 = v959;
        v696 = v958;
        if ((int32_t)v961 < 2) {
            int32_t v988 = lseek(0, 0, SEEK_CUR); // 0x402856
            int64_t v989 = v988; // 0x402856
            v630 = 0x7fffffffffffffff;
            v632 = v982;
            v634 = v987;
            if (v988 < 0) {
                goto lab_0x4039e2;
            } else {
                int64_t v990 = 0;
                int64_t v991 = function_406fe0(0, v990 + v987, v984 - v990); // 0x402898
                v495 = 0x7fffffffffffffff;
                v496 = v982;
                v497 = v967;
                v498 = v966;
                v499 = v987;
                v500 = v965;
                v501 = v964;
                v502 = v640;
                v503 = v989;
                v504 = 0;
                v505 = v963;
                v506 = v641;
                v507 = v642;
                v508 = v962;
                v509 = v990;
                v510 = v960;
                v511 = v987;
                v512 = v958;
                while (v991 != 0) {
                    // 0x402873
                    v127 = 0x7fffffffffffffff;
                    v129 = v982;
                    v131 = v987;
                    v133 = v640;
                    v136 = v641;
                    v138 = v642;
                    if (v991 == -1) {
                        goto lab_0x4035fe;
                    }
                    int64_t v992 = v991 + v990; // 0x40287d
                    int64_t v993 = v992; // 0x402886
                    v466 = 0x7fffffffffffffff;
                    v467 = v982;
                    v468 = v967;
                    v469 = v966;
                    v470 = v987;
                    v471 = v965;
                    v473 = v964;
                    v475 = v640;
                    v477 = v992;
                    v478 = v989;
                    v479 = 0;
                    v480 = v963;
                    v482 = v641;
                    v484 = v642;
                    v486 = v962;
                    v488 = v960;
                    v489 = v958;
                    if (v992 >= v984) {
                        goto lab_0x40357b;
                    }
                    v990 = v993;
                    v991 = function_406fe0(0, v990 + v987, v984 - v990);
                    v495 = 0x7fffffffffffffff;
                    v496 = v982;
                    v497 = v967;
                    v498 = v966;
                    v499 = v987;
                    v500 = v965;
                    v501 = v964;
                    v502 = v640;
                    v503 = v989;
                    v504 = 0;
                    v505 = v963;
                    v506 = v641;
                    v507 = v642;
                    v508 = v962;
                    v509 = v990;
                    v510 = v960;
                    v511 = v987;
                    v512 = v958;
                }
                goto lab_0x4028a2;
            }
        } else {
            goto lab_0x40268d;
        }
    }
  lab_0x403883:
    // 0x40388a
    error(0, 0, dcgettext(NULL, (char *)v629, 5));
    function_404cf0(1);
    // UNREACHABLE
  lab_0x4039a1:
    // 0x4039a1
    function_406d70(4, (int64_t)g53);
    error(1, *__errno_location(), dcgettext(NULL, "cannot open %s for reading", 5));
    v630 = v631;
    v632 = v633;
    v634 = v635;
    goto lab_0x4039e2;
  lab_0x40268d:;
    int64_t v608 = v696;
    int64_t v610 = v695;
    int64_t v614 = v693;
    int64_t v727 = v692;
    int64_t v728 = v691;
    int64_t v729 = v690;
    v730 = v689;
    int64_t v616 = v687;
    int64_t v624 = v686;
    int64_t v731 = v685;
    char v732 = v684;
    int32_t * v733 = v683;
    v617 = v682;
    int32_t v618 = v681;
    int64_t * v619 = v680;
    v620 = v679;
    int128_t v622 = v678;
    int64_t v734 = v688; // 0x402695
    if (g66 != NULL) {
        // 0x402697
        sigemptyset((struct _TYPEDEF_sigset_t *)&g60);
        sigaction(SIGPIPE, NULL, (struct sigaction *)&oact);
        if (oact != 1) {
            // 0x4026ba
            sigaddset((struct _TYPEDEF_sigset_t *)&g60, SIGPIPE);
        }
        // 0x4026c9
        sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&g60, (struct _TYPEDEF_sigset_t *)&g61);
        v734 = 0;
    }
    int64_t v735 = v694 + 0xfffffffe; // 0x4026da
    int64_t v612 = v735 & 0xffffffff; // 0x4026da
    g81 = v612;
    int64_t v399; // 0x401ea0
    int64_t v147; // 0x401ea0
    int64_t v401; // 0x401ea0
    int64_t v148; // 0x401ea0
    int64_t v723; // 0x401ea0
    int64_t v544; // 0x401ea0
    int64_t v303; // 0x401ea0
    int64_t v304; // 0x401ea0
    int64_t v149; // 0x401ea0
    int64_t v724; // 0x401ea0
    int64_t v545; // 0x401ea0
    int64_t v725; // 0x401ea0
    int64_t v546; // 0x401ea0
    int64_t v305; // 0x401ea0
    int64_t v726; // 0x401ea0
    int64_t v547; // 0x401ea0
    int64_t v306; // 0x401ea0
    int64_t v397; // 0x401ea0
    int64_t v398; // 0x401ea0
    int64_t v146; // 0x401ea0
    int64_t v145; // 0x401ea0
    int64_t v722; // 0x401ea0
    int64_t v543; // 0x401ea0
    int64_t v542; // 0x401ea0
    int64_t v736; // 0x401ea0
    char v394; // 0x401ea0
    int64_t v143; // 0x401ea0
    int64_t v721; // 0x401ea0
    int64_t v541; // 0x401ea0
    int64_t v302; // 0x401ea0
    int64_t v395; // 0x401ea0
    int64_t v144; // 0x401ea0
    int32_t * v393; // 0x401ea0
    int32_t v141; // 0x401ea0
    int32_t v718; // 0x401ea0
    int32_t v538; // 0x401ea0
    int32_t v299; // 0x401ea0
    int32_t v720; // 0x401ea0
    int32_t v540; // 0x401ea0
    int32_t v301; // 0x401ea0
    int64_t * v142; // 0x401ea0
    int64_t * v719; // 0x401ea0
    int64_t * v539; // 0x401ea0
    int64_t * v300; // 0x401ea0
    int128_t v140; // 0x401ea0
    char v297; // 0x401ea0
    int64_t v717; // 0x401ea0
    int64_t v537; // 0x401ea0
    int64_t v298; // 0x401ea0
    switch ((int32_t)v735) {
        case 0: {
            // 0x40298a
            v297 = 0;
            v298 = v97;
            v299 = v620;
            v300 = NULL;
            v301 = 0;
            v302 = v617;
            v303 = 0;
            v304 = 0;
            v305 = v610;
            v306 = v608;
            goto lab_0x4029b0;
        }
        case 1: {
            goto lab_0x4028dc;
        }
        case 2: {
            goto lab_0x4028dc;
        }
        case 3: {
            if (v24 != 0) {
                // 0x402f95
                v393 = v733;
                v394 = v732;
                v395 = v731;
                v397 = v730;
                v398 = v729;
                v399 = v728;
                v401 = v727;
                goto lab_0x403434;
            } else {
                int64_t v737 = v97;
                function_404ab0((int64_t)v622 / v737, v617, (int64_t)v620, v616);
                v420 = v737;
                v422 = v620;
                v423 = v619;
                v425 = v618;
                v427 = v617;
                v429 = v616;
                v431 = v614;
                v432 = v612;
                v433 = v610;
                v434 = v608;
                goto lab_0x402fc5_3;
            }
        }
        case 4: {
            uint64_t v738 = (int64_t)v97;
            uint64_t v739 = (int64_t)v622;
            v537 = v738;
            v538 = v620;
            v539 = v619;
            v540 = v618;
            v541 = v617;
            v542 = v624;
            v543 = v616;
            v544 = v614;
            v545 = v612;
            v546 = v610;
            v547 = v608;
            if (v24 > v738 || v738 > v739) {
                goto lab_0x403a45;
            } else {
                int64_t v740 = v739 / v738;
                v128 = v622;
                v130 = v620;
                v132 = v617;
                v134 = v731;
                v135 = v616;
                v137 = v729;
                v139 = v740;
                if (v24 < 2) {
                    goto lab_0x403641;
                } else {
                    int64_t v741 = v24 - 1; // 0x402b89
                    int64_t v742 = v740 * v741 - 1; // 0x402b99
                    if (v616 > v742) {
                        int64_t v743 = v616 - v742; // 0x402bae
                        memmove((int64_t *)v617, (int64_t *)(v742 + v617), (int32_t)v743);
                        v140 = v622;
                        v141 = v620;
                        v142 = (int64_t *)(v742 & 0xffffffff);
                        v143 = v617;
                        v144 = v731;
                        v145 = v743;
                        v146 = v729;
                        v147 = 0x100000000 * v740 >> 32;
                        v148 = v741;
                        v149 = v742;
                        goto lab_0x402bc7;
                    } else {
                        int32_t v744 = lseek(0, (int32_t)(v742 - v616), SEEK_CUR); // 0x40366a
                        int64_t * v745 = (int64_t *)(v742 & 0xffffffff); // 0x40366f
                        v140 = v622;
                        v141 = v620;
                        v142 = v745;
                        v143 = v617;
                        v144 = v731;
                        v145 = -1;
                        v146 = v729;
                        v147 = 0x100000000 * v740 >> 32;
                        v148 = v741;
                        v149 = v742;
                        if (v744 >= 0) {
                            goto lab_0x402bc7;
                        } else {
                            int64_t v746 = function_406e40(0, 3, (int64_t)g53); // 0x403690
                            error(1, *__errno_location(), "%s", (char *)v746);
                            v717 = v738;
                            v718 = v620;
                            v719 = v745;
                            v720 = v740;
                            v721 = v617;
                            v722 = -1;
                            v723 = v741;
                            v724 = v742;
                            v725 = v610;
                            v726 = v608;
                            goto lab_0x4036b3;
                        }
                    }
                }
            }
        }
        case 5: {
            // 0x402d7b
            v747 = v97;
            int64_t v748 = v731; // 0x402d81
            int64_t v749 = v616; // 0x402d81
            if (v24 == 0) {
                // 0x402d83
                v736 = v734;
                if (v97 % 0x400000000000001 != 0) {
                    // 0x4037ab
                    function_4078e0(v736);
                    // UNREACHABLE
                }
                // 0x402da2
                v736 = v734;
                if (v97 % 0xf800000000000001 != 0) {
                    // 0x4037ab
                    function_4078e0(v736);
                    // UNREACHABLE
                }
                int64_t v750 = function_407690(32 * v747); // 0x402db4
                int64_t v751 = v750; // 0x402dbe
                int64_t v752 = 0; // 0x402dbe
                function_403cc0();
                v752++;
                int64_t v753 = function_4078c0((int64_t)g58); // 0x402dd5
                *(int32_t *)(v751 + 8) = -1;
                *(int64_t *)v751 = v753;
                *(int64_t *)(v751 + 16) = 0;
                *(int32_t *)(v751 + 24) = 0;
                v751 += 32;
                v748 = v750;
                v749 = v752;
                while (v752 != v747) {
                    // 0x402dc1
                    function_403cc0();
                    v752++;
                    v753 = function_4078c0((int64_t)g58);
                    *(int32_t *)(v751 + 8) = -1;
                    *(int64_t *)v751 = v753;
                    *(int64_t *)(v751 + 16) = 0;
                    *(int32_t *)(v751 + 24) = 0;
                    v751 += 32;
                    v748 = v750;
                    v749 = v752;
                }
            }
            int64_t v754 = v748;
            v755 = v620;
            int64_t * v756 = NULL; // 0x402e12
            int32_t v757 = 0; // 0x402e12
            int32_t * v758 = v733; // 0x402e12
            char v759 = 0; // 0x402e12
            char v760 = 0; // 0x402e12
            int64_t v761 = v749; // 0x402e12
            int64_t v762 = 1; // 0x402e12
            int64_t v763 = v612; // 0x402e12
            int64_t v764 = v610; // 0x402e12
            int64_t v765 = v608; // 0x402e12
            while (true) {
              lab_0x402e17:;
                int64_t v766 = v765;
                int64_t v767 = v764;
                int64_t v768 = v763;
                int64_t v769 = v762;
                int64_t v770 = v761;
                char v771 = v760;
                int32_t v772 = v757;
                int64_t * v773 = v756;
                int64_t v774 = function_406fe0(0, v617, v755); // 0x402e23
                v775 = v747;
                v776 = v620;
                v777 = v773;
                v778 = v772;
                v779 = v617;
                v780 = v770;
                v781 = v768;
                v782 = v767;
                v783 = v766;
                switch (v774) {
                    case -1: {
                        goto lab_0x403b65;
                    }
                    case 0: {
                        // 0x403344
                        v420 = v747;
                        v422 = v620;
                        v423 = v773;
                        v425 = v772;
                        v427 = v617;
                        v429 = v770;
                        v431 = v769;
                        v432 = v768;
                        v433 = v767;
                        v434 = v766;
                        if (v24 == 0) {
                            int64_t v784 = v771 != 0 ? v747 : (int64_t)v773;
                            v785 = v773;
                            v786 = v772;
                            v787 = v767;
                            v788 = v766;
                            v789 = v784;
                          lab_0x40335c:;
                            int64_t v790 = 0; // 0x403369
                            int64_t v791 = v754;
                            uint64_t v792; // 0x401ea0
                            if (0x100000000 * v789 >> 32 <= v790) {
                                // 0x40339f
                                if (g46 == 0) {
                                    // 0x4033a8
                                    function_404500(v754, v792, v747);
                                }
                            }
                            int32_t * v793 = (int32_t *)(v791 + 8); // 0x40336b
                            uint32_t v794 = *v793; // 0x40336b
                            int64_t v795; // 0x403375
                            int64_t v796; // 0x403379
                            if (v794 >= 0) {
                                // 0x403372
                                v795 = *(int64_t *)(v791 + 16);
                                v796 = *(int64_t *)v791;
                                function_4046f0((int32_t)v795, v794, *(int32_t *)(v791 + 24), v796);
                            }
                            // 0x403382
                            v790++;
                            *v793 = -2;
                            int64_t v797 = v791 + 32; // 0x40338d
                            v420 = v747;
                            v422 = v620;
                            v423 = v785;
                            v425 = v786;
                            v427 = v617;
                            v429 = v797;
                            v431 = v747;
                            v432 = v747;
                            v433 = v787;
                            v434 = v788;
                            while (v790 != v747) {
                                // 0x40339a
                                v791 = v797;
                                if (0x100000000 * v789 >> 32 <= v790) {
                                    // 0x40339f
                                    if (g46 == 0) {
                                        // 0x4033a8
                                        function_404500(v754, v792, v747);
                                    }
                                }
                                // 0x40336b
                                v793 = (int32_t *)(v791 + 8);
                                v794 = *v793;
                                if (v794 >= 0) {
                                    // 0x403372
                                    v795 = *(int64_t *)(v791 + 16);
                                    v796 = *(int64_t *)v791;
                                    function_4046f0((int32_t)v795, v794, *(int32_t *)(v791 + 24), v796);
                                }
                                // 0x403382
                                v790++;
                                *v793 = -2;
                                v797 = v791 + 32;
                                v420 = v747;
                                v422 = v620;
                                v423 = v785;
                                v425 = v786;
                                v427 = v617;
                                v429 = v797;
                                v431 = v747;
                                v432 = v747;
                                v433 = v787;
                                v434 = v788;
                            }
                        }
                        goto lab_0x402fc5_3;
                    }
                    default: {
                        // 0x402e3b
                        v798 = v774 + v617;
                        v799 = v773;
                        v800 = v772;
                        v801 = v758;
                        v802 = v759;
                        v803 = v771;
                        v804 = v769;
                        v805 = v767;
                        v806 = v617;
                        while (true) {
                          lab_0x402e84:
                            // 0x402e84
                            data = v806;
                            v807 = v804;
                            v808 = v803;
                            v809 = v802;
                            v810 = v800;
                            v811 = v799;
                            int64_t v812 = v798 - data; // 0x402e92
                            v813 = function_408dd0(data, (int64_t)g18, v812);
                            v814 = v813 + 1;
                            size = v813 == 0 ? v812 : v814 - data;
                            if (v24 != 0) {
                                // 0x402e58
                                v815 = v805;
                                v816 = v801;
                                if (v24 == v807) {
                                    // 0x403018
                                    if (g45 != 0) {
                                        // 0x403200
                                        if (size == function_4052d0(1, data, size)) {
                                            goto lab_0x402e61;
                                        } else {
                                            char * v817 = dcgettext(NULL, "write error", 5); // 0x403225
                                            error(1, *__errno_location(), "%s", v817);
                                            v818 = v816;
                                            v819 = v809;
                                            v820 = &g85;
                                            v821 = (int64_t)v817;
                                            v822 = v815;
                                            goto lab_0x403250;
                                        }
                                    } else {
                                        // 0x403025
                                        if (fwrite_unlocked((int64_t *)data, (int32_t)size, 1, g36) == 1) {
                                            goto lab_0x402e61;
                                        } else {
                                            // 0x403046
                                            clearerr_unlocked(g36);
                                            char * v823 = dcgettext(NULL, "write error", 5); // 0x40305e
                                            error(1, *__errno_location(), "%s", v823);
                                            v824 = v816;
                                            v825 = v809;
                                            v826 = (int64_t)v823;
                                            v827 = v815;
                                            goto lab_0x403088;
                                        }
                                    }
                                } else {
                                    goto lab_0x402e61;
                                }
                            } else {
                                // 0x402ec0
                                v828 = v813 == 0 ? v798 : v814;
                                int64_t v829 = 0x100000000 * (int64_t)v811;
                                int64_t v830 = function_404500(v754, v829 >> 32, v747); // 0x402ed6
                                v831 = (v829 >> 27) + v754;
                                v832 = v809 | (char)v830;
                                v833 = __errno_location();
                                if (g45 != 0) {
                                    // 0x403178
                                    v818 = v833;
                                    v819 = v832;
                                    v820 = (int64_t)v833;
                                    v821 = v828;
                                    v822 = v831;
                                    if (size == function_4052d0(*(int32_t *)(v831 + 8), data, size)) {
                                        goto lab_0x403250;
                                    } else {
                                        // 0x403195
                                        if (*v833 != 32) {
                                            goto lab_0x4031a8;
                                        } else {
                                            // 0x40319a
                                            v834 = v810;
                                            v835 = v833;
                                            v836 = v832;
                                            v837 = v828;
                                            v838 = v831;
                                            if (g66 != NULL) {
                                                goto lab_0x402f44;
                                            } else {
                                                goto lab_0x4031a8;
                                            }
                                        }
                                    }
                                } else {
                                    int64_t stream = *(int64_t *)(v831 + 16); // 0x402efb
                                    v824 = v833;
                                    v825 = v832;
                                    v826 = v828;
                                    v827 = v831;
                                    if (fwrite_unlocked((int64_t *)data, (int32_t)size, 1, (struct _IO_FILE *)stream) != 1) {
                                        goto lab_0x403088;
                                    } else {
                                        // 0x402f19
                                        v839 = v833;
                                        v840 = v832;
                                        v841 = v828;
                                        v842 = v831;
                                        v843 = g66 != NULL == *v833 == 32;
                                        goto lab_0x402f31;
                                    }
                                }
                            }
                        }
                      lab_0x402e17_3:
                        // 0x402e17
                        v756 = v844;
                        v757 = v845;
                        v758 = v846;
                        v759 = v847;
                        v760 = v848;
                        v761 = size;
                        v762 = v849;
                        v763 = v813 != 0;
                        v764 = v850;
                        v765 = v798;
                        goto lab_0x402e17;
                    }
                }
            }
            goto lab_0x403b65;
        }
        default: {
            int64_t v851 = v97; // 0x4032d3
            function_404ab0(v851, v617, (int64_t)v620, -1);
            v420 = v851;
            v422 = v620;
            v423 = v619;
            v425 = v618;
            v427 = v617;
            v429 = v616;
            v431 = v614;
            v432 = v612;
            v433 = v610;
            v434 = v608;
            goto lab_0x402fc5_3;
        }
    }
  lab_0x4039e2:;
    int64_t v636 = v634;
    int32_t v637 = v632;
    int128_t v638 = v630;
    int32_t * v639 = __errno_location(); // 0x4039e2
    v127 = v638;
    v129 = v637;
    v131 = v636;
    v133 = v640;
    v136 = v641;
    v138 = v642;
    if (*v639 == 29) {
        // 0x4039f0
        *v639 = 0;
        v127 = v638;
        v129 = v637;
        v131 = v636;
        v133 = v640;
        v136 = v641;
        v138 = v642;
    }
    goto lab_0x4035fe;
  lab_0x4028dc:;
    int64_t v643 = v97; // 0x4028dc
    int64_t v644 = v620; // 0x4028f0
    int64_t v645 = function_406fe0(0, v617, v644); // 0x4028fc
    int64_t v646 = v645; // 0x40290a
    int64_t v647 = 0; // 0x40290a
    int64_t v648 = 1; // 0x40290a
    int64_t v649 = v643; // 0x40290a
    v37 = v643;
    v26 = v620;
    v34 = v619;
    v30 = v618;
    v650 = v617;
    v22 = v616;
    v14 = v612;
    v16 = 0;
    v18 = v643;
    if (v645 == -1) {
        goto lab_0x403b34;
    } else {
        int64_t v651; // 0x401ea0
        int64_t v652; // 0x401ea0
        int64_t v653; // 0x401ea0
        int64_t v654; // 0x401ea0
        int64_t v655; // 0x401ea0
        while (true) {
            int64_t v656 = v646 + v617; // 0x402920
            *(char *)v656 = (char)g18;
            int64_t v657 = v649; // 0x40292c
            int64_t v658 = v617; // 0x40292c
            int64_t v659 = v648; // 0x40292c
            int64_t v660 = v647; // 0x40292c
            uint64_t v661; // 0x401ea0
            while (true) {
                // 0x402930
                v661 = v659;
                v654 = v658;
                v655 = v657;
                v653 = g18;
                v652 = v660;
                int64_t v662 = v654;
                int64_t v663 = function_408dd0(v662, v653, v656 + 1 - v662); // 0x40293f
                if (v656 == v663) {
                    // break (via goto) -> 0x403270
                    goto lab_0x403270;
                }
                int64_t v664 = v652 + 1; // 0x40294d
                int64_t v665 = v663 + 1; // 0x402951
                while (v664 < v643) {
                    // 0x402930
                    v652 = v664;
                    v662 = v665;
                    v663 = function_408dd0(v662, v653, v656 + 1 - v662);
                    if (v656 == v663) {
                        // break (via goto) -> 0x403270
                        goto lab_0x403270;
                    }
                    // 0x40294d
                    v664 = v652 + 1;
                    v665 = v663 + 1;
                }
                // 0x40295a
                function_4049a0(v661 % 256, v654, v665 - v654);
                v657 = v665;
                v658 = v665;
                v659 = 1;
                v660 = 0;
            }
          lab_0x403270:;
            int64_t v666 = v661; // 0x403273
            if (v656 != v654) {
                // 0x403275
                function_4049a0(v661 % 256, v654, v656 - v654);
                v666 = 0;
            }
            // 0x40328a
            v651 = v666;
            if (v646 == 0) {
                // break -> 0x402fc5
                break;
            }
            int64_t v667 = function_406fe0(0, v617, v644); // 0x4028fc
            v646 = v667;
            v647 = v652;
            v648 = v651;
            v649 = v655;
            v37 = v655;
            v26 = v620;
            v34 = v619;
            v30 = v618;
            v650 = v617;
            v22 = v653;
            v14 = v654;
            v16 = v652;
            v18 = v643;
            if (v667 == -1) {
                goto lab_0x403b34;
            }
        }
        // 0x402fc5
        v420 = v655;
        v422 = v620;
        v423 = v619;
        v425 = v618;
        v427 = v617;
        v429 = v653;
        v431 = v651;
        v432 = v654;
        v433 = v652;
        v434 = v643;
        goto lab_0x402fc5_3;
    }
  lab_0x4028a2:;
    uint64_t v668 = v509;
    int64_t v669 = v507;
    int64_t v670 = v506;
    int64_t v671 = v502;
    int64_t v672 = v499;
    int32_t v673 = v496;
    v127 = v495;
    v129 = v673;
    v131 = v672;
    v133 = v671;
    v136 = v670;
    v138 = v669;
    if (v668 < 0) {
        goto lab_0x4035fe;
    } else {
        int64_t v674 = v97; // 0x4028ba
        if (v674 < 0) {
            int64_t v675 = function_405350(v674, &oact); // 0x4038af
            error(1, EOVERFLOW, "%s: %s", dcgettext(NULL, "invalid number of chunks", 5), (char *)function_406fc0(v675));
            v204 = (int32_t)"%s: %s";
            goto lab_0x4038ec;
        } else {
            uint64_t v676 = (int64_t)v673; // 0x4028ab
            int64_t v677 = v668 < v674 ? v674 : v668; // 0x4028ce
            v678 = v677;
            v679 = v673;
            v680 = v497;
            v681 = v498;
            v682 = v672;
            v683 = v500;
            v684 = v501;
            v685 = v671;
            v686 = v503;
            v687 = v668 > v676 ? v676 : v668;
            v688 = v504;
            v689 = v505;
            v690 = v670;
            v691 = v669;
            v692 = v508;
            v693 = v677;
            v694 = v510;
            v695 = v511;
            v696 = v512;
            goto lab_0x40268d;
        }
    }
  lab_0x4029b0:;
    int64_t v697 = v306;
    int64_t v698 = v305;
    int64_t v699 = v304;
    int64_t v700 = v303;
    int64_t v701 = v302;
    int32_t v702 = v301;
    int64_t * v703 = v300;
    int32_t v704 = v299;
    int64_t v705 = v298;
    int64_t v706 = function_406fe0(0, v701, (int64_t)v704); // 0x4029bc
    char v307 = v297; // 0x401ea0
    int64_t v308 = v705; // 0x401ea0
    int32_t v309 = v704; // 0x401ea0
    int64_t * v310 = v703; // 0x401ea0
    int32_t v311 = v702; // 0x401ea0
    int64_t v312 = v701; // 0x401ea0
    int64_t v313 = v701; // 0x401ea0
    int64_t v314 = v706; // 0x401ea0
    int64_t v315 = v700; // 0x401ea0
    int64_t v316 = v699; // 0x401ea0
    v585 = v705;
    v587 = v704;
    v589 = v703;
    v591 = v702;
    v593 = v701;
    v596 = -1;
    v598 = v699;
    v600 = v698;
    v602 = v697;
    int64_t v707; // 0x401ea0
    int64_t v708; // 0x401ea0
    int64_t v709; // 0x401ea0
    int64_t v710; // 0x401ea0
    int64_t v711; // 0x401ea0
    int64_t v712; // 0x401ea0
    int32_t v713; // 0x401ea0
    int32_t v714; // 0x401ea0
    int64_t * v715; // 0x401ea0
    int64_t v716; // 0x401ea0
    switch (v706) {
        case -1: {
            goto lab_0x403b96;
        }
        case 0: {
            // 0x4032ef
            v716 = v705;
            v713 = v704;
            v715 = v703;
            v714 = v702;
            v712 = v701;
            v711 = 0;
            v707 = v700;
            v708 = v699;
            v709 = v698;
            v710 = v697;
            v717 = v705;
            v718 = v704;
            v719 = v703;
            v720 = v702;
            v721 = v701;
            v722 = 0;
            v723 = v700;
            v724 = v699;
            v725 = v698;
            v726 = v697;
            if (v700 != 0) {
                goto lab_0x4036b3;
            } else {
                goto lab_0x4032f8;
            }
        }
        default: {
            goto lab_0x402a4f;
        }
    }
  lab_0x403a45:
    // 0x403a45
    __assert_fail("n && k <= n && n <= file_size", "src/split.c", 865, "lines_chunk_split");
    int64_t v548 = v537; // 0x403a59
    int32_t v549 = v538; // 0x403a59
    int64_t * v550 = v539; // 0x403a59
    int32_t v551 = v540; // 0x403a59
    int64_t v552 = v541; // 0x403a59
    int64_t v553 = v542; // 0x403a59
    int64_t v554 = v543; // 0x403a59
    int64_t v555 = (int64_t)"n && k <= n && n <= file_size"; // 0x403a59
    int64_t v556 = v544; // 0x403a59
    int64_t v557 = v545; // 0x403a59
    int64_t v558 = v546; // 0x403a59
    int64_t v559 = v547; // 0x403a59
    goto lab_0x403a5e;
  lab_0x403641:
    // 0x403641
    v140 = v128;
    v141 = v130;
    v142 = NULL;
    v143 = v132;
    v144 = v134;
    v145 = v135;
    v146 = v137;
    v147 = v139;
    v148 = 1;
    v149 = v139 - 1;
    goto lab_0x402bc7;
  lab_0x403a2c:
    // 0x403a2c
    __assert_fail("k && n && k <= n && n <= file_size", "src/split.c", 991, "bytes_chunk_extract");
    v537 = v526;
    v538 = v527;
    v539 = v528;
    v540 = v529;
    v541 = v530;
    v542 = v531;
    v543 = v532;
    v544 = v533;
    v545 = v534;
    v546 = v535;
    v547 = v536;
    goto lab_0x403a45;
  lab_0x403b96:;
    int64_t v583 = function_406e40(0, 3, (int64_t)g53); // 0x403ba4
    error(1, *__errno_location(), "%s", (char *)v583);
    int64_t v584 = v585; // 0x403bc2
    int32_t v586 = v587; // 0x403bc2
    int64_t * v588 = v589; // 0x403bc2
    int32_t v590 = v591; // 0x403bc2
    int64_t v592 = v593; // 0x403bc2
    int64_t v594 = v583; // 0x403bc2
    int64_t v595 = v596; // 0x403bc2
    int64_t v597 = v598; // 0x403bc2
    int64_t v599 = v600; // 0x403bc2
    int64_t v601 = v602; // 0x403bc2
    goto lab_0x403bc7;
  lab_0x402a4f:;
    int64_t v250 = v316;
    int64_t v258 = v315;
    int64_t v257 = v314;
    int64_t v249 = v313;
    int64_t v256 = v312;
    int32_t v255 = v311;
    int64_t * v254 = v310;
    int32_t v253 = v309;
    int64_t v252 = v308;
    char v251 = v307;
    int64_t v266 = v250 + v258; // 0x402a54
    int64_t v603 = v252 - v266; // 0x402a63
    int64_t v225; // 0x401ea0
    int64_t v227; // 0x401ea0
    int64_t v245; // 0x401ea0
    int64_t v229; // 0x401ea0
    int64_t v243; // 0x401ea0
    int64_t v247; // 0x401ea0
    int64_t v238; // 0x401ea0
    int64_t v220; // 0x401ea0
    int64_t v218; // 0x401ea0
    int64_t v222; // 0x401ea0
    int64_t v216; // 0x401ea0
    int32_t v210; // 0x401ea0
    int32_t v214; // 0x401ea0
    int64_t * v212; // 0x401ea0
    char v206; // 0x401ea0
    int64_t v208; // 0x401ea0
    if (v257 >= v603) {
        int64_t v604 = v249 - 1 + v603; // 0x4029e6
        int64_t v605 = (int64_t)memrchr((int64_t *)v249, g18, (int32_t)v603); // 0x4029eb
        v247 = v605;
        v245 = v604;
        v243 = v603;
        v206 = v251;
        v208 = v252;
        v210 = v253;
        v212 = v254;
        v214 = v255;
        v216 = v256;
        v218 = v249;
        v220 = v257;
        v222 = v249;
        v238 = v605;
        v225 = v250;
        v227 = v604;
        v229 = v603;
        if (v258 == 0) {
            goto lab_0x402a8c;
        } else {
            goto lab_0x4029fc;
        }
    } else {
        int64_t v606 = (int64_t)memrchr((int64_t *)v249, g18, (int32_t)v257); // 0x402a7b
        v247 = v606;
        v245 = 0;
        v243 = 0;
        v206 = v251;
        v208 = v252;
        v210 = v253;
        v212 = v254;
        v214 = v255;
        v216 = v256;
        v218 = v249;
        v220 = v257;
        v222 = v249;
        v238 = v606;
        v225 = v250;
        v227 = 0;
        v229 = 0;
        if (v258 != 0) {
            goto lab_0x4029fc;
        } else {
            goto lab_0x402a8c;
        }
    }
  lab_0x403434:;
    int64_t v607 = v608;
    int64_t v609 = v610;
    int64_t v611 = v612;
    int64_t v613 = v614;
    int64_t v615 = v616;
    v428 = v617;
    v426 = v618;
    v424 = v619;
    v417 = v620;
    int128_t v621 = v622;
    v421 = v97;
    uint64_t v623 = (int64_t)v621;
    v526 = v421;
    v527 = v417;
    v528 = v424;
    v529 = v426;
    v530 = v428;
    v531 = v624;
    v532 = v615;
    v533 = v613;
    v534 = v611;
    v535 = v609;
    v536 = v607;
    int64_t v485; // 0x401ea0
    int64_t v198; // 0x401ea0
    int64_t v487; // 0x401ea0
    int64_t v199; // 0x401ea0
    int64_t v200; // 0x401ea0
    int64_t v201; // 0x401ea0
    int64_t v202; // 0x401ea0
    int64_t v203; // 0x401ea0
    int64_t v481; // 0x401ea0
    int64_t v483; // 0x401ea0
    int64_t v197; // 0x401ea0
    int64_t v430; // 0x401ea0
    int64_t v196; // 0x401ea0
    char v194; // 0x401ea0
    char v474; // 0x401ea0
    int64_t v193; // 0x401ea0
    int64_t v476; // 0x401ea0
    int64_t v195; // 0x401ea0
    int32_t * v472; // 0x401ea0
    int32_t v190; // 0x401ea0
    int32_t v192; // 0x401ea0
    int64_t * v191; // 0x401ea0
    int128_t v419; // 0x401ea0
    int128_t v189; // 0x401ea0
    int64_t offset2; // 0x403467
    if (v24 > v421 || v421 > v623) {
        goto lab_0x403a2c;
    } else {
        // 0x40344f
        v487 = v401;
        v485 = v399;
        v483 = v398;
        v481 = v397;
        v476 = v395;
        v474 = v394;
        v472 = v393;
        uint64_t v625 = v623 / v421;
        offset2 = v625 * (v24 - 1);
        v419 = v24 == v421 ? v621 : (int128_t)(v625 * v24);
        if (v615 > offset2) {
            int64_t v626 = v615 - offset2; // 0x40348a
            memmove((int64_t *)v428, (int64_t *)(offset2 + v428), (int32_t)v626);
            v430 = v626;
            goto lab_0x403498;
        } else {
            // 0x4036ce
            v430 = -1;
            if (lseek(0, (int32_t)offset2, SEEK_CUR) >= 0) {
                goto lab_0x403498;
            } else {
                int64_t v627 = function_406e40(0, 3, (int64_t)g53); // 0x4036f5
                error(1, *__errno_location(), "%s", (char *)v627);
                v189 = v419;
                v190 = v417;
                v191 = v424;
                v192 = v426;
                v193 = v428;
                v194 = v474;
                v195 = v476;
                v196 = -1;
                v197 = v483;
                v198 = v485;
                v199 = v487;
                v200 = v613;
                v201 = v611;
                v202 = v609;
                v203 = v607;
                goto lab_0x403718;
            }
        }
    }
  lab_0x403a5e:;
    int64_t v560 = v558;
    int64_t v561 = v557;
    int64_t v562 = v556;
    int64_t v563 = v555;
    int64_t v564 = v554;
    int64_t v565 = v553;
    int64_t v566 = v552;
    int32_t v567 = v551;
    int64_t * v568 = v550;
    int32_t v569 = v549;
    int64_t v570 = v548;
    int64_t v571 = v570; // 0x403a61
    int32_t v572 = v569; // 0x403a61
    int64_t * v573 = v568; // 0x403a61
    int32_t v574 = v567; // 0x403a61
    int64_t v575 = v566; // 0x403a61
    int64_t v576 = v565; // 0x403a61
    int64_t v577 = v564; // 0x403a61
    int64_t v578 = v563; // 0x403a61
    int64_t v579 = v562; // 0x403a61
    int64_t v580 = v561; // 0x403a61
    int64_t v581 = v560; // 0x403a61
    int64_t v582 = v559; // 0x403a61
    if (v560 != 0 == (v559 != 0)) {
        goto lab_0x402ad3;
    } else {
        // 0x403a6c
        v571 = v570;
        v572 = v569;
        v573 = v568;
        v574 = v567;
        v575 = v566;
        v576 = v565;
        v577 = v564;
        v578 = v563;
        v579 = v562;
        v580 = v561;
        v581 = v560;
        v582 = v564;
        if (v564 == 0 || v560 != 0) {
            goto lab_0x402b2e;
        } else {
            goto lab_0x402ad3;
        }
    }
  lab_0x402bc7:
    // 0x402bc7
    v150 = v140;
    v151 = v141;
    v152 = v142;
    v153 = 1;
    v154 = v143;
    v155 = 0;
    v156 = v144;
    v157 = v145;
    v158 = v145;
    v159 = v146;
    v160 = v147;
    v161 = (int64_t)v140 - 1;
    v162 = v148;
    v163 = v149;
    v164 = v24;
    goto lab_0x402bee;
  lab_0x4036b3:
    // 0x4036b3
    function_4049a0((int64_t)(v724 == 0), 0x100000000 * (int64_t)v719 >> 32, v723);
    v716 = v717;
    v713 = v718;
    v715 = v719;
    v714 = v720;
    v712 = v721;
    v711 = v722;
    v707 = v723;
    v708 = v724;
    v709 = v725;
    v710 = v726;
    goto lab_0x4032f8;
  lab_0x4032f8:
    // 0x4032f8
    free(v715);
    v420 = v716;
    v422 = v713;
    v423 = v715;
    v425 = v714;
    v427 = v712;
    v429 = v711;
    v431 = v707;
    v432 = v708;
    v433 = v709;
    v434 = v710;
    goto lab_0x402fc5_3;
  lab_0x402ad3:;
    int64_t * v1020 = v573;
    int32_t v1021 = v572;
    uint64_t v1022 = (int64_t)v574; // 0x402ad3
    int64_t * v1023 = v1020; // 0x402ae1
    int32_t v1024 = v574; // 0x402ae1
    if (v1022 - v579 < v582) {
        int64_t v1025 = v1021; // 0x402ae3
        v736 = v578;
        if (v1022 > -1 - v1025) {
            // 0x4037ab
            function_4078e0(v736);
            // UNREACHABLE
        }
        int64_t v1026 = v1022 + v1025; // 0x402af7
        v1023 = (int64_t *)(function_4076f0((int32_t)(int64_t)v1020, v1026) & 0xffffffff);
        v1024 = v1026;
    }
    // 0x402b11
    memcpy((int64_t *)((0x100000000 * (int64_t)v1023 >> 32) + v579), (int64_t *)v576, (int32_t)v582);
    int64_t v276 = v571; // 0x402b29
    int32_t v278 = v1021; // 0x402b29
    int64_t * v280 = v1023; // 0x402b29
    int32_t v282 = v1024; // 0x402b29
    int64_t v284 = v575; // 0x402b29
    int64_t v286 = v582 + v576; // 0x402b29
    int64_t v288 = v577 - v582; // 0x402b29
    int64_t v290 = v582 + v579; // 0x402b29
    int64_t v293 = v580; // 0x402b29
    int64_t v292 = v581; // 0x402b29
    int64_t v296 = v582; // 0x402b29
    goto lab_0x402b2e;
  lab_0x403bc7:
    // 0x403bc7
    v276 = v584;
    v278 = v586;
    v280 = v588;
    v282 = v590;
    v284 = v592;
    v286 = v594;
    v288 = v595;
    v290 = 0;
    v293 = v597;
    v292 = v599;
    v296 = v601;
    goto lab_0x402b2e;
  lab_0x402bee:;
    int32_t v165 = v151; // 0x402bf8
    int64_t * v166 = v152; // 0x402bf8
    int32_t v167 = v153; // 0x402bf8
    int64_t v168 = v154; // 0x402bf8
    char v169 = v155; // 0x402bf8
    int64_t v170 = v158; // 0x402bf8
    int64_t v171 = v162; // 0x402bf8
    int64_t v172 = v163; // 0x402bf8
    int64_t v173 = v164; // 0x402bf8
    int64_t v174 = v160; // 0x402bf8
    int64_t v175; // 0x401ea0
    int64_t v176; // 0x401ea0
    int64_t v177; // 0x401ea0
    int64_t v178; // 0x401ea0
    int64_t v179; // 0x401ea0
    int64_t v180; // 0x401ea0
    char v181; // 0x401ea0
    int64_t v182; // 0x401ea0
    int32_t v183; // 0x401ea0
    int32_t v184; // 0x401ea0
    int64_t * v185; // 0x401ea0
    if (0x100000000 * (int64_t)v152 >> 32 < (int64_t)v150) {
        // 0x402bfe
        v186 = v150;
        v183 = v151;
        v185 = v152;
        v184 = v153;
        v182 = v154;
        v181 = v155;
        v187 = v156;
        v179 = v157;
        v180 = v158;
        v188 = v161;
        v175 = v162;
        v176 = v163;
        v177 = v164;
        v178 = v160;
        v189 = v150;
        v190 = v151;
        v191 = v152;
        v192 = v153;
        v193 = v154;
        v194 = v155;
        v195 = v156;
        v196 = v158;
        v197 = v159;
        v198 = v160;
        v199 = v161;
        v200 = v162;
        v201 = v163;
        v202 = v164;
        v203 = v160;
        if (v157 == -1) {
            goto lab_0x403718;
        } else {
            goto lab_0x402c08;
        }
    } else {
        goto lab_0x4037b0;
    }
  lab_0x4038ec:
    // 0x40388a
    error(0, 0, dcgettext(NULL, "%s: invalid start value for numerical suffix", v204));
    function_404cf0(1);
    // UNREACHABLE
  lab_0x402a8c:;
    char v205 = v206; // 0x402a8f
    int64_t v207 = v208; // 0x402a8f
    int32_t v209 = v210; // 0x402a8f
    int64_t * v211 = v212; // 0x402a8f
    int32_t v213 = v214; // 0x402a8f
    int64_t v215 = v216; // 0x402a8f
    int64_t v217 = v218; // 0x402a8f
    int64_t v219 = v220; // 0x402a8f
    int64_t v221 = v222; // 0x402a8f
    int64_t v223 = 0; // 0x402a8f
    int64_t v224 = v225; // 0x402a8f
    int64_t v226 = v227; // 0x402a8f
    int64_t v228 = v229; // 0x402a8f
    int64_t v230 = v208; // 0x402a8f
    int32_t v231 = v210; // 0x402a8f
    int64_t * v232 = v212; // 0x402a8f
    int32_t v233 = v214; // 0x402a8f
    int64_t v234 = v216; // 0x402a8f
    int64_t v235 = v218; // 0x402a8f
    int64_t v236 = v220; // 0x402a8f
    int64_t v237 = v238; // 0x402a8f
    int64_t v239 = v225; // 0x402a8f
    int64_t v240 = v227; // 0x402a8f
    int64_t v241 = v229; // 0x402a8f
    if (v238 == 0) {
        goto lab_0x402a15;
    } else {
        goto lab_0x402a95;
    }
  lab_0x4029fc:;
    int64_t v242 = v243;
    int64_t v244 = v245;
    int64_t v246 = v247;
    int64_t v248 = v249 & -256 | (int64_t)(v250 == 0); // 0x4029ff
    v205 = v251;
    v207 = v252;
    v209 = v253;
    v211 = v254;
    v213 = v255;
    v215 = v256;
    v217 = v249;
    v219 = v257;
    v221 = v248;
    v223 = v258;
    v224 = v250;
    v226 = v244;
    v228 = v242;
    if (v250 != 0 == v246 == 0) {
        goto lab_0x402a15;
    } else {
        // 0x4029fc
        v259 = v253;
        v260 = v251;
        v261 = v252;
        v262 = v253;
        v263 = v254;
        v264 = v256;
        v265 = (int32_t *)v266;
        v267 = v249;
        v268 = v257;
        v269 = v248;
        v270 = v246;
        v271 = v258;
        v272 = v244;
        v273 = v242;
        goto lab_0x4030d0;
    }
  lab_0x402b2e:;
    char v274 = 0; // 0x402b4b
    int64_t v275 = v276; // 0x402b4b
    int32_t v277 = v278; // 0x402b4b
    int64_t * v279 = v280; // 0x402b4b
    int32_t v281 = v282; // 0x402b4b
    int64_t v283 = v284; // 0x402b4b
    int64_t v285 = v286; // 0x402b4b
    int64_t v287 = v288; // 0x402b4b
    int64_t v289 = v290; // 0x402b4b
    int64_t v291 = v292 != 0 ? 0 : v293; // 0x402b4b
    int64_t v294 = v292; // 0x402b4b
    int64_t v295 = v296; // 0x402b4b
    goto lab_0x402a46;
  lab_0x4037b0:;
    int64_t v513 = v174;
    int64_t v514 = v173;
    int64_t v515 = v172;
    int64_t v516 = v170;
    int64_t v517 = v168;
    int32_t v518 = v167;
    int64_t * v519 = v166;
    int32_t v520 = v165;
    int64_t v521 = v171 + (int64_t)(v169 != 0); // 0x4037b5
    int64_t v522 = v97;
    v420 = v522;
    v422 = v520;
    v423 = v519;
    v425 = v518;
    v427 = v517;
    v429 = v516;
    v431 = v521;
    v432 = v515;
    v433 = v514;
    v434 = v513;
    int64_t v523 = v521; // 0x4037bf
    if (v521 <= v522 && v24 == 0) {
        int64_t v524 = v523 + 1; // 0x4037cf
        function_4049a0(1, 0, 0);
        v420 = v522;
        v422 = v520;
        v423 = v519;
        v425 = v518;
        v427 = v517;
        v429 = v516;
        v431 = v524;
        v432 = v515;
        v433 = v514;
        v434 = v513;
        v523 = v524;
        while (v524 <= v522) {
            // 0x4037c6
            v524 = v523 + 1;
            function_4049a0(1, 0, 0);
            v420 = v522;
            v422 = v520;
            v423 = v519;
            v425 = v518;
            v427 = v517;
            v429 = v516;
            v431 = v524;
            v432 = v515;
            v433 = v514;
            v434 = v513;
            v523 = v524;
        }
    }
    goto lab_0x402fc5_3;
  lab_0x402a15:;
    int64_t v994 = v228;
    int64_t v995 = v226;
    int64_t v996 = v224;
    int64_t v997 = v223;
    int64_t v998 = v219;
    int64_t v999 = v217;
    int64_t v1000 = v215;
    int32_t v1001 = v213;
    int64_t * v1002 = v211;
    int32_t v1003 = v209;
    int64_t v1004 = v207;
    char v1005 = v205;
    v548 = v1004;
    v549 = v1003;
    v550 = v1002;
    v551 = v1001;
    v552 = v1000;
    v553 = v999;
    v554 = v998;
    v555 = v221;
    v556 = v997;
    v557 = v996;
    v558 = v995;
    v559 = v994;
    if (v1005 != 0) {
        goto lab_0x403a5e;
    } else {
        int64_t v1006 = v996 == 0; // 0x402a25
        if (v995 == 0) {
            // 0x403160
            function_4049a0(v1006, v999, v998);
            v297 = v1005;
            v298 = v1004;
            v299 = v1003;
            v300 = v1002;
            v301 = v1001;
            v302 = v1000;
            v303 = v997;
            v304 = v996 + v998;
            v305 = 0;
            v306 = v994;
            goto lab_0x4029b0;
        } else {
            // 0x402a32
            function_4049a0(v1006, v999, v994);
            v274 = v1005;
            v275 = v1004;
            v277 = v1003;
            v279 = v1002;
            v281 = v1001;
            v283 = v1000;
            v285 = v994 + v999;
            v287 = v998 - v994;
            v289 = v997;
            v291 = 0;
            v294 = v995;
            v295 = v994;
            goto lab_0x402a46;
        }
    }
  lab_0x402a95:;
    int64_t v1007 = v241;
    int64_t v1008 = v240;
    int64_t v1009 = v234;
    int32_t v1010 = v233;
    int64_t * v1011 = v232;
    int32_t v1012 = v231;
    int64_t v1013 = v230;
    int64_t v1014 = v237 - v235 + 1; // 0x402aa0
    int64_t v1015 = v239 == 0; // 0x402aa4
    int64_t v1016 = v1014 + v239; // 0x402aab
    int64_t v1017 = v236 - v1014; // 0x402aae
    int64_t v1018 = v237 + 1; // 0x402ab1
    function_4049a0(v1015, v235, v1014);
    if (v1008 == 0) {
        // 0x403140
        v274 = 1;
        v275 = v1013;
        v277 = v1012;
        v279 = v1011;
        v281 = v1010;
        v283 = v1009;
        v285 = v1018;
        v287 = 0;
        v289 = 0;
        v291 = v1016;
        v294 = 0;
        v295 = v1007;
        v571 = v1013;
        v572 = v1012;
        v573 = v1011;
        v574 = v1010;
        v575 = v1009;
        v576 = v1018;
        v577 = v1017;
        v578 = v1015;
        v579 = 0;
        v580 = v1016;
        v581 = 0;
        v582 = v1017;
        if (v1017 == 0) {
            goto lab_0x402a46;
        } else {
            goto lab_0x402ad3;
        }
    } else {
        int64_t v1019 = v1007 - v1014; // 0x402ac2
        v571 = v1013;
        v572 = v1012;
        v573 = v1011;
        v574 = v1010;
        v575 = v1009;
        v576 = v1018;
        v577 = v1017;
        v578 = v1015;
        v579 = 0;
        v580 = v1016;
        v581 = v1008;
        v582 = v1019;
        v584 = v1013;
        v586 = v1012;
        v588 = v1011;
        v590 = v1010;
        v592 = v1009;
        v594 = v1018;
        v595 = v1017;
        v597 = v1016;
        v599 = v1008;
        v601 = 0;
        if (v1019 == 0) {
            goto lab_0x403bc7;
        } else {
            goto lab_0x402ad3;
        }
    }
  lab_0x402a46:
    // 0x402a46
    v297 = v274;
    v298 = v275;
    v299 = v277;
    v300 = v279;
    v301 = v281;
    v302 = v283;
    v303 = v289;
    v304 = v291;
    v305 = v294;
    v306 = v295;
    v307 = v274;
    v308 = v275;
    v309 = v277;
    v310 = v279;
    v311 = v281;
    v312 = v283;
    v313 = v285;
    v314 = v287;
    v315 = v289;
    v316 = v291;
    if (v287 == 0) {
        goto lab_0x4029b0;
    } else {
        goto lab_0x402a4f;
    }
  lab_0x403718:;
    int64_t v317 = v203;
    int64_t v318 = v201;
    int64_t v319 = v200;
    int64_t v320 = v199;
    int64_t v321 = v196;
    int64_t v322 = v195;
    char v323 = v194;
    int64_t v324 = v193;
    int32_t v325 = v192;
    int64_t * v326 = v191;
    int32_t v327 = v190;
    int128_t v328 = v189;
    int64_t v329 = function_406fe0(0, v324, (int64_t)v327); // 0x403729
    v186 = v328;
    v183 = v327;
    v185 = v326;
    v184 = v325;
    v182 = v324;
    v181 = v323;
    v187 = v322;
    v179 = v329;
    v180 = v321;
    v188 = v320;
    v175 = v319;
    v176 = v318;
    v177 = v202;
    v178 = v317;
    if (v329 != -1) {
        goto lab_0x402c08;
    } else {
        int64_t v330 = function_406e40(0, 3, (int64_t)g53); // 0x40374b
        uint32_t err_num = *__errno_location(); // 0x403765
        error(1, err_num, "%s", (char *)v330);
        v120 = v328;
        v114 = v327;
        v118 = v326;
        v116 = v325;
        v331 = v324;
        v332 = (int32_t *)v320;
        v333 = v323;
        v334 = v322;
        v111 = v330;
        v109 = v321;
        v113 = err_num;
        v106 = v197;
        v335 = v198;
        v336 = v320;
        v100 = v319;
        v102 = v318;
        v104 = v317;
        goto lab_0x40376e;
    }
  lab_0x402c08:
    // 0x402c08
    v337 = v178;
    v338 = v177;
    v339 = v176;
    v340 = v175;
    uint64_t v341 = v179;
    v342 = v182;
    v343 = v184;
    v344 = v185;
    v345 = v183;
    v165 = v345;
    v166 = v344;
    v167 = v343;
    v168 = v342;
    v169 = v181;
    v170 = v180;
    v171 = v340;
    v172 = v339;
    v173 = v338;
    v174 = v337;
    if (v341 == 0) {
        goto lab_0x4037b0;
    } else {
        uint64_t v346 = (int64_t)v186 - (0x100000000 * (int64_t)v344 >> 32); // 0x402c16
        v347 = v346 > v341 ? v341 : v346;
        if (v347 == 0) {
            goto lab_0x40379f;
        } else {
            // 0x402c54
            int64_t v348; // 0x401ea0
            char v349; // 0x401ea0
            int64_t v350; // 0x402c41
            while (true) {
                // 0x402c54
                int64_t * v351; // 0x401ea0
                int64_t * v352 = v351;
                char v353; // 0x401ea0
                v349 = v353;
                int64_t v354; // 0x401ea0
                uint64_t v355 = v354;
                int64_t v356; // 0x401ea0
                int64_t v357 = v356;
                int64_t v358; // 0x401ea0
                int64_t v359 = v358;
                int64_t v360; // 0x401ea0
                int64_t v361 = v360;
                int64_t v362 = 0x100000000 * (int64_t)v352 >> 32; // 0x402c5c
                int64_t v363 = v361 - v362; // 0x402c5c
                uint64_t v364 = v363 > 0 ? v363 : 0; // 0x402c66
                uint32_t v365 = g18; // 0x402c6a
                int64_t v366 = v364 > v355 ? v355 : v364; // 0x402c82
                int64_t v367 = function_408dd0(v366 + v357, (int64_t)v365, v355 - v366); // 0x402c91
                v348 = v367 == 0 ? v350 : v367 + 1;
                int64_t v368 = v348 - v357; // 0x402cba
                int32_t v369; // 0x401ea0
                int64_t v370; // 0x401ea0
                int64_t v371; // 0x401ea0
                if (v359 == v338) {
                    // 0x4033c1
                    v370 = v337;
                    if (v368 != function_4052d0(1, v357, v368)) {
                        // break -> 0x403405
                        break;
                    }
                } else {
                    int64_t v372 = v371;
                    v370 = v372;
                    if (v338 == 0) {
                        uint32_t v373 = v369;
                        function_4049a0((int64_t)v373, v357, 0x100000000 * v368 >> 32);
                        v370 = v337;
                    }
                }
                int32_t v374 = v367 != 0;
                int64_t v375 = v370;
                int64_t v376 = 0x100000000 * v368 >> 32; // 0x402cd9
                int64_t v377 = v376 + v362; // 0x402cd9
                int64_t * v378 = (int64_t *)(v377 & 0xffffffff);
                char v379 = v350 == v348;
                int64_t v380 = v375; // 0x402ce8
                int64_t v381 = v367 != 0; // 0x402ce8
                int64_t v382; // 0x401ea0
                char v383; // 0x402cf5
                char v384; // 0x401ea0
                while (true) {
                  lab_0x402cf0_2:;
                    int64_t v385 = v381;
                    v382 = v380;
                    int64_t v386 = v385; // 0x401ea0
                    int64_t v387; // 0x401ea0
                    while (true) {
                        // 0x402cf0
                        v387 = v386;
                        v383 = v387;
                        v384 = (v383 ^ 1) & v379;
                    }
                  lab_0x402d40:
                    // 0x402d40
                    function_4049a0(1, 0, 0);
                    v380 = v337;
                    v381 = v387;
                    goto lab_0x402cf0_2;
                }
              lab_0x4032a7:;
                // 0x4032a7
                int64_t v388; // 0x401ea0
                char v389 = v383 == 0 == v377 <= v388 ? v349 : v384;
                v360 = v388;
                int64_t v390; // 0x401ea0
                v358 = v390;
                v356 = v348;
                v369 = v374;
                v371 = v382;
                v354 = v355 - v376;
                v353 = v389;
                v351 = v378;
                if (v350 == v348) {
                    goto lab_0x40379f;
                }
            }
            char * v391 = dcgettext(NULL, "write error", 5); // 0x403411
            int32_t * v392 = __errno_location(); // 0x403419
            int32_t err_num2 = *v392; // 0x40342b
            error(1, err_num2, "%s", v391);
            v393 = (int32_t *)v348;
            v394 = v349;
            v395 = v337;
            int64_t v396; // 0x401ea0
            v397 = v396;
            v398 = v350;
            v399 = v337;
            int64_t v400; // 0x401ea0
            v401 = v400;
            goto lab_0x403434;
        }
    }
  lab_0x4030d0:;
    int64_t v402 = v273;
    int64_t v403 = v272;
    int64_t v404 = v270;
    int64_t v405 = v268;
    int64_t v406 = v267;
    int64_t v407 = v264;
    int32_t v408 = v262;
    int64_t v409 = v261;
    char v410 = v260;
    uint64_t v411 = v259;
    int64_t v412 = 0x100000000 * (int64_t)v263 >> 32; // 0x4030d0
    int64_t v413 = v269 % 256; // 0x4030d5
    function_4049a0(v413, v412, v271);
    int64_t v414 = (int64_t)v265; // 0x4030eb
    v206 = v410;
    v208 = v409;
    v210 = v408;
    v212 = v263;
    v214 = v408;
    v216 = v407;
    v218 = v406;
    v220 = v405;
    v222 = v413;
    v238 = v404;
    v225 = v414;
    v227 = v403;
    v229 = v402;
    if (v271 > v411) {
        int64_t * v415 = (int64_t *)(function_4076f0((int32_t)v412, v411) & 0xffffffff); // 0x403122
        v205 = v410;
        v207 = v409;
        v209 = v408;
        v211 = v415;
        v213 = v408;
        v215 = v407;
        v217 = v406;
        v219 = v405;
        v221 = v412;
        v223 = 0;
        v224 = v414;
        v226 = v403;
        v228 = v402;
        v230 = v409;
        v231 = v408;
        v232 = v415;
        v233 = v408;
        v234 = v407;
        v235 = v406;
        v236 = v405;
        v237 = v404;
        v239 = v414;
        v240 = v403;
        v241 = v402;
        if (v404 != 0) {
            goto lab_0x402a95;
        } else {
            goto lab_0x402a15;
        }
    } else {
        goto lab_0x402a8c;
    }
  lab_0x403498:;
    int64_t v416 = v417; // 0x403498
    v418 = v419;
    v420 = v421;
    v422 = v417;
    v423 = v424;
    v425 = v426;
    v427 = v428;
    v429 = v430;
    v431 = -1;
    v432 = v416;
    v433 = v418;
    v434 = v428;
    v435 = v416;
    v436 = v430;
    v437 = offset2;
    v438 = v430;
    int64_t v439; // 0x401ea0
    int64_t v440; // 0x401ea0
    int64_t v441; // 0x401ea0
    int64_t v442; // 0x401ea0
    int64_t v443; // 0x401ea0
    int64_t v444; // 0x401ea0
    int64_t v445; // 0x401ea0
    int64_t v446; // 0x401ea0
    int64_t v447; // 0x401ea0
    char v448; // 0x401ea0
    int64_t v449; // 0x401ea0
    int64_t v450; // 0x401ea0
    int32_t * v451; // 0x401ea0
    int32_t v452; // 0x401ea0
    int32_t v453; // 0x401ea0
    int64_t * v454; // 0x401ea0
    int128_t v455; // 0x401ea0
    int64_t offset; // 0x40358a
    if (offset2 < v418) {
        int64_t v456; // 0x401ea0
        while (true) {
          lab_0x4034b7:
            // 0x4034b7
            v457 = v437;
            int64_t v458 = v436;
            v456 = v435;
            int64_t v459 = v438; // 0x4034bb
            if (v438 == -1) {
                int64_t v460 = function_406fe0(0, v428, v456); // 0x40353b
                v459 = v460;
                if (v460 == -1) {
                    // break -> 0x40354a
                    break;
                }
            }
            uint64_t v461 = v459;
            v420 = v421;
            v422 = v417;
            v423 = v424;
            v425 = v426;
            v427 = v428;
            v429 = v458;
            v431 = -1;
            v432 = v456;
            v433 = v418;
            v434 = v428;
            if (v461 == 0) {
                goto lab_0x402fc5_3;
            }
            uint64_t v462 = v418 - v457; // 0x4034d1
            v463 = v462 > v461 ? v461 : v462;
            v464 = v456;
            if (v463 == function_4052d0(1, v428, v463)) {
                goto lab_0x403528;
            } else {
                // 0x4034e8
                err_num3 = __errno_location();
                if (g66 == NULL) {
                    goto lab_0x4034fc;
                } else {
                    // 0x4034f7
                    if (*err_num3 == 32) {
                        goto lab_0x403528;
                    } else {
                        goto lab_0x4034fc;
                    }
                }
            }
        }
        int64_t v465 = function_406e40(0, 3, (int64_t)g53); // 0x403558
        error(1, *__errno_location(), "%s", (char *)v465);
        v466 = v419;
        v467 = v417;
        v468 = v424;
        v469 = v426;
        v470 = v428;
        v471 = v472;
        v473 = v474;
        v475 = v476;
        v477 = &g85;
        v478 = v465;
        v479 = 1;
        v480 = v481;
        v482 = v483;
        v484 = v485;
        v486 = v487;
        v488 = v456;
        v489 = v428;
      lab_0x40357b:
        // 0x40357b
        v439 = v484;
        v445 = v482;
        v450 = v475;
        v449 = v470;
        v452 = v467;
        v455 = v466;
        if (g51 == 0) {
            goto lab_0x4035f3;
        } else {
            // 0x40358a
            v443 = v489;
            v441 = v488;
            v440 = v486;
            v444 = v480;
            v446 = v477;
            v448 = v473;
            v451 = v471;
            v453 = v469;
            v454 = v468;
            offset = v478 + v446;
            v447 = v479;
            v442 = g51;
            if (g51 < offset || (g50 & 0xd000) != 0x8000) {
                int32_t v490 = lseek(0, 0, SEEK_END); // 0x4035ad
                v127 = v455;
                v129 = v452;
                v131 = v449;
                v133 = v450;
                v136 = v445;
                v138 = v439;
                if (v490 < 0) {
                    goto lab_0x4035fe;
                } else {
                    int64_t v491 = v490; // 0x4035ad
                    v447 = 0;
                    v442 = offset;
                    if (offset == v491) {
                        goto lab_0x4035d7;
                    } else {
                        // 0x4035bf
                        v127 = v455;
                        v129 = v452;
                        v131 = v449;
                        v133 = v450;
                        v136 = v445;
                        v138 = v439;
                        if (lseek(0, (int32_t)offset, SEEK_SET) < 0) {
                            goto lab_0x4035fe;
                        } else {
                            int64_t v492 = v491 - offset; // 0x4035d0
                            v447 = 0;
                            v442 = v492 < 0 == ((v492 ^ v491) & (offset ^ v491)) < 0 ? v491 : offset;
                            goto lab_0x4035d7;
                        }
                    }
                }
            } else {
                goto lab_0x4035d7;
            }
        }
    } else {
        goto lab_0x402fc5_3;
    }
  lab_0x4035f3:
    // 0x4035f3
    *__errno_location() = 75;
    v127 = v455;
    v129 = v452;
    v131 = v449;
    v133 = v450;
    v136 = v445;
    v138 = v439;
    goto lab_0x4035fe;
  lab_0x4035d7:;
    int64_t v493 = v442 - offset; // 0x4035e1
    int64_t v494 = v493 + v446; // 0x4035e7
    v495 = v455;
    v496 = v452;
    v497 = v454;
    v498 = v453;
    v499 = v449;
    v500 = v451;
    v501 = v448;
    v502 = v450;
    v503 = offset;
    v504 = v447;
    v505 = v444;
    v506 = v445;
    v507 = v439;
    v508 = v440;
    v509 = v494;
    v510 = v441;
    v511 = v493;
    v512 = v443;
    if (v494 != 0x7fffffffffffffff) {
        goto lab_0x4028a2;
    } else {
        goto lab_0x4035f3;
    }
}
// Address range: 0x403be0 - 0x403c0b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403be0
    int64_t v1; // 0x403be0
    __libc_start_main(0x401ea0, (int32_t)a4, (char **)&v1, (void (*)())0x409890, (void (*)())0x4098f0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x403c0b - 0x403c2a
int64_t function_403c0b(void) {
    // 0x403c0b
    return 0x60e4c8;
}
// Address range: 0x403c2a - 0x403c61
int64_t function_403c2a(void) {
    // 0x403c2a
    return 0;
}
// Address range: 0x403c61 - 0x403cb8
int64_t function_403c61(void) {
    // 0x403c61
    if (g39 != 0) {
        // 0x403cb7
        int64_t result; // 0x403c61
        return result;
    }
    int64_t v1 = g40; // 0x403c94
    int64_t result2; // 0x403ca6
    if (g40 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x403ca6
        result2 = function_403c0b();
        g39 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x403c96
        v1++;
    }
    // 0x403c8a
    g40 = v1;
    // 0x403ca6
    result2 = function_403c0b();
    g39 = 1;
    return result2;
}
// Address range: 0x403cb8 - 0x403cbd
int64_t function_403cb8(void) {
    // 0x403cb8
    return function_403c2a();
}
// Address range: 0x403cc0 - 0x404500
int64_t function_403cc0(void) {
    int32_t fds[2]; // 0x40401f
    int32_t v1 = g58; // 0x403cca
    int32_t v2 = g56; // 0x403cd1
    int64_t v3 = v2; // 0x403cd1
    int64_t dest_mem; // 0x403cc0
    if (v1 == 0) {
        goto lab_0x403d80;
    } else {
        char * format; // 0x403f8a
        if (v2 == 0) {
            // 0x403f7e
            format = dcgettext(NULL, "output file suffixes exhausted", 5);
            error(1, (int32_t)"output file suffixes exhausted" ^ (int32_t)"output file suffixes exhausted", format);
            goto lab_0x403fa0;
        } else {
            int64_t v4 = v3; // 0x403d10
            int64_t v5 = 8 * v3 - 8 + g41; // 0x403d10
            v4--;
            int64_t * v6 = (int64_t *)v5;
            int64_t v7 = *v6 + 1; // 0x403d45
            *v6 = v7;
            while (g21 == 0 || v4 != 0) {
                char v8 = *(char *)(v7 + (int64_t)g20); // 0x403d18
                char * v9 = (char *)(v4 + (int64_t)g57); // 0x403d1c
                *v9 = v8;
                if (v8 != 0) {
                    // 0x403d6e
                    return dest_mem;
                }
                // 0x403d23
                *v6 = 0;
                *v9 = *(char *)&g20;
                v5 -= 8;
                if (v4 == 0) {
                    // 0x403f7e
                    format = dcgettext(NULL, "output file suffixes exhausted", 5);
                    error(1, (int32_t)"output file suffixes exhausted" ^ (int32_t)"output file suffixes exhausted", format);
                    goto lab_0x403fa0;
                }
                v4--;
                v6 = (int64_t *)v5;
                v7 = *v6 + 1;
                *v6 = v7;
            }
        }
    }
  lab_0x4040d4:;
    // 0x4040d4
    int32_t fd; // 0x403cc0
    uint32_t v10 = close(fd); // 0x4040d8
    int64_t v11 = v10; // 0x4040dd
    int32_t * err_num = __errno_location(); // 0x4040e0
    int32_t * err_num3 = err_num; // 0x4040eb
    int64_t v12 = v11; // 0x4040eb
    int64_t v13; // 0x403cc0
    int32_t * err_num2; // 0x403cc0
    int64_t v14; // 0x403cc0
    int32_t fd2; // bp-208, 0x403cc0
    if (v10 != 0) {
        goto lab_0x40441f;
    } else {
        // 0x4040f1
        if (fd2 == 0) {
            goto lab_0x404117;
        } else {
            // 0x4040f8
            err_num2 = err_num;
            if (dup2(fd2, 0) != 0) {
                goto lab_0x4044a8;
            } else {
                // 0x404107
                if (close(fd2) != 0) {
                    // 0x404280
                    error(1, *err_num, dcgettext(NULL, "closing input pipe", 5));
                    v14 = 1;
                    v13 = v11;
                    goto lab_0x4042a8;
                } else {
                    goto lab_0x404117;
                }
            }
        }
    }
  lab_0x403d80:;
    int64_t v15 = g44; // 0x403d80
    int64_t v16; // 0x403cc0
    int64_t v17; // 0x403cc0
    int64_t v18; // 0x403cc0
    if (v15 != 0) {
        uint64_t v19 = v15 + 3; // 0x403e21
        g44 = v15 + 2;
        g56 = v2 + 1;
        if (v19 < (int64_t)g43) {
            // 0x403f6d
            int64_t v20; // 0x403cc0
            function_4078e0(v20);
            // UNREACHABLE
        }
        int64_t v21 = function_4076f0(v1, v19); // 0x403e44
        int64_t v22 = g43; // 0x403e50
        g58 = v21;
        int64_t v23 = v22 + 1; // 0x403e6c
        g43 = v23;
        char v24 = *(char *)(*(int64_t *)g41 + (int64_t)g20); // 0x403e77
        *(char *)(v21 + v22) = v24;
        v18 = v23;
        v17 = v21;
        v16 = g41;
    } else {
        int32_t len = strlen(g59); // 0x403d97
        g43 = len;
        int64_t len2 = 0; // 0x403db2
        if (g54 != NULL) {
            // 0x403db4
            len2 = strlen(g54);
        }
        uint64_t v25 = (int64_t)len; // 0x403d97
        g42 = len2;
        int64_t v26 = v25 + v3 + len2; // 0x403dc3
        uint64_t v27 = v26 + 1; // 0x403dc6
        g44 = v26;
        if (v27 < v25) {
            // 0x403f6d
            function_4078e0((int64_t)g54);
            // UNREACHABLE
        }
        int64_t v28 = function_4076f0(v1, v27); // 0x403ddd
        g58 = v28;
        memcpy((int64_t *)v28, (int64_t *)g59, g43);
        v18 = g43;
        v17 = v28;
        v16 = g41;
    }
    int64_t v29 = v17 + v18; // 0x403e7f
    int64_t v30 = g56; // 0x403e84
    g57 = (char *)v29;
    int64_t * set_mem = memset((int64_t *)v29, (int32_t)*(char *)&g20, g56); // 0x403e9b
    if (g54 != NULL) {
        // 0x403eac
        memcpy((int64_t *)((int64_t)set_mem + v30), (int64_t *)g54, g42);
    }
    // 0x403ebc
    *(char *)(g44 + v17) = 0;
    free((int64_t *)v16);
    int64_t result = function_407860(v30, 8); // 0x403ed8
    g41 = result;
    if (g55 == NULL) {
        // 0x403d6e
        return result;
    }
    if (v15 == 0) {
        int32_t len3 = strlen(g55); // 0x403f03
        int64_t v31 = len3; // 0x403f03
        int64_t v32 = (int64_t)g56 - v31; // 0x403f1f
        dest_mem = (int64_t)memcpy((int64_t *)(v32 + (int64_t)g57), (int64_t *)g55, len3);
        if (len3 == 0) {
            // 0x403d6e
            return dest_mem;
        }
        int64_t result2 = 8 * v32 + result; // 0x403f42
        int64_t v33 = v31; // 0x403f45
        v33--;
        *(int64_t *)(8 * v33 + result2) = (int64_t)*(char *)(v33 + (int64_t)g55) - 48;
        while (v33 != 0) {
            // 0x403f48
            v33--;
            *(int64_t *)(8 * v33 + result2) = (int64_t)*(char *)(v33 + (int64_t)g55) - 48;
        }
        // 0x403d6e
        return result2;
    }
    goto lab_0x403fa0;
  lab_0x403fa0:
    // 0x403fa0
    __assert_fail("! widen", "src/split.c", 408, "next_file_name");
    int64_t v34 = (int64_t)"! widen"; // 0x403fd6
    int64_t v35 = (int64_t)"! widen"; // 0x403fd6
    int64_t v36; // 0x403cc0
    int64_t v37; // 0x403cc0
    int64_t v38; // 0x403cc0
    int64_t v39; // 0x403cc0
    if (g66 == NULL) {
        goto lab_0x404180;
    } else {
        char * env_val = getenv("SHELL"); // 0x403fe1
        if (setenv("FILE", "! widen", 1) != 0) {
            // 0x4044ca
            error(1, *__errno_location(), dcgettext(NULL, "failed to set FILE environment variable", 5));
            return &g85;
        }
        int64_t v40 = env_val == NULL ? (int64_t)"/bin/sh" : (int64_t)env_val; // 0x403ffe
        v38 = v40;
        v36 = (int64_t)"! widen";
        v39 = v40;
        v37 = (int64_t)"! widen";
        if (g47 != 0) {
            goto lab_0x404238;
        } else {
            goto lab_0x40401c;
        }
    }
  lab_0x404180:;
    int64_t v41 = v35; // 0x404187
    v14 = v34;
    v13 = v35;
    if (g47 != 0) {
        goto lab_0x4042a8;
    } else {
        goto lab_0x40418d;
    }
  lab_0x4042a8:
    // 0x4042a8
    function_406d70(4, v14);
    __fprintf_chk(g36, 1, dcgettext(NULL, "creating file %s\n", 5));
    v41 = v13;
    goto lab_0x40418d;
  lab_0x40418d:;
    int64_t v42 = v41;
    int64_t v43 = function_405210(v42, 65, 438); // 0x40419c
    int64_t v44 = v43 & 0xffffffff; // 0x4041a1
    int32_t fd3 = v43; // 0x4041a3
    dest_mem = v44;
    if (fd3 < 0) {
        // 0x403d6e
        return dest_mem;
    }
    int32_t v45 = __fxstat(1, fd3, (struct stat *)&fd2); // 0x4041b5
    int64_t v46 = v42; // 0x4041bc
    int64_t v47; // 0x403cc0
    if (v45 != 0) {
        goto lab_0x40446b;
    } else {
        // 0x4041c2
        int64_t v48; // 0x403cc0
        if (g49 != v48) {
            goto lab_0x4041e1;
        } else {
            // 0x4041d0
            v47 = v42;
            if ((int64_t)g48 == (int64_t)fd2) {
                goto lab_0x4043c0;
            } else {
                goto lab_0x4041e1;
            }
        }
    }
  lab_0x404238:
    // 0x404238
    function_406e40(0, 3, v37);
    __fprintf_chk(g36, 1, dcgettext(NULL, "executing with FILE=%s\n", 5));
    v38 = v39;
    v36 = v37;
    goto lab_0x40401c;
  lab_0x40401c:;
    int64_t v49 = v36;
    fds[0] = &fd2;
    int64_t v50 = v49; // 0x404026
    int64_t v51; // 0x403cc0
    int64_t path; // 0x403cc0
    if (pipe(fds) != 0) {
        goto lab_0x404441;
    } else {
        int32_t v52 = fork(); // 0x40402c
        v51 = v49;
        switch (v52) {
            case 0: {
                // 0x4040a0
                path = v38;
                if (g62 == 0) {
                    goto lab_0x4040d4;
                } else {
                    int64_t v53; // 0x403cc0
                    while (close(*(int32_t *)(4 * v53 + (int64_t)g64)) == 0) {
                        // 0x4040c7
                        int64_t v54; // 0x403cc0
                        int64_t v55 = v54 + 1; // 0x4040c7
                        int32_t v56 = g62; // 0x4040cb
                        v53 = v55;
                        if (v55 >= (int64_t)v56) {
                            goto lab_0x4040d4;
                        }
                        v54 = v53;
                        int32_t * v57 = g64; // 0x4040b0
                        int32_t v58 = *(int32_t *)(4 * v54 + (int64_t)v57); // 0x4040b7
                    }
                    // 0x40436c
                    error(1, *__errno_location(), dcgettext(NULL, "closing prior pipe", 5));
                    goto lab_0x404396;
                }
            }
            case -1: {
                goto lab_0x4043f5;
            }
            default: {
                // 0x404040
                if (close(fd2) == 0) {
                    int32_t v59 = g62; // 0x404050
                    int64_t v60 = v59; // 0x404050
                    int64_t v61 = g63; // 0x404057
                    g65 = v52;
                    int32_t * v62 = g64; // 0x404064
                    int64_t v63 = (int64_t)v62; // 0x404064
                    int64_t v64 = v60; // 0x40406e
                    if (v61 == v60) {
                        int64_t v65; // 0x403cc0
                        int64_t v66; // 0x403cc0
                        uint32_t v67; // 0x404040
                        if (v62 == NULL) {
                            // 0x404339
                            v65 = 32;
                            v66 = 128;
                            if (v59 != 0) {
                                // 0x40433e
                                v65 = v60;
                                v66 = 4 * v60;
                                if (v59 > -1 != v59 > -1) {
                                    // 0x404358
                                    function_4078e0((int64_t)v67);
                                    // UNREACHABLE
                                }
                            }
                        } else {
                            if (v59 <= 0xffffffff) {
                                // 0x404358
                                function_4078e0((int64_t)v67);
                                // UNREACHABLE
                            }
                            int64_t v68 = v60 + 1 + v60 / 2; // 0x40430a
                            v65 = v68;
                            v66 = 4 * v68;
                        }
                        int64_t v69 = v66;
                        int64_t v70 = v65;
                        g63 = v70;
                        int64_t v71 = function_4076f0((int32_t)v63, v69); // 0x404321
                        int32_t v72 = g62; // 0x404326
                        g64 = (int32_t *)v71;
                        v64 = v72;
                    }
                    int64_t v73 = v64;
                    g62 = (int32_t)v73 + 1;
                    uint32_t v74; // 0x403cc0
                    dest_mem = v74;
                    int64_t result3 = dest_mem;
                    return result3;
                }
                goto lab_0x404396;
            }
        }
    }
  lab_0x40446b:
    // 0x40446b
    function_406d70(4, v46);
    char * format2 = dcgettext(NULL, "failed to stat %s", 5); // 0x404487
    error(1, *__errno_location(), format2);
    err_num2 = (int32_t *)format2;
    goto lab_0x4044a8;
  lab_0x404441:
    // 0x404441
    error(1, *__errno_location(), dcgettext(NULL, "failed to create pipe", 5));
    v46 = v50;
    goto lab_0x40446b;
  lab_0x4044a8:
    // 0x4044a8
    error(1, *err_num2, dcgettext(NULL, "moving input pipe", 5));
    // 0x4044ca
    error(1, *__errno_location(), dcgettext(NULL, "failed to set FILE environment variable", 5));
    return &g85;
  lab_0x4041e1:
    // 0x4041e1
    dest_mem = v44;
    if (ftruncate(fd3, 0) == 0) {
        // 0x403d6e
        return dest_mem;
    }
    int64_t v75 = function_406e40(0, 3, v42); // 0x4041fc
    error(1, *__errno_location(), dcgettext(NULL, "%s: error truncating", 5));
    v39 = v75;
    v37 = v42;
    goto lab_0x404238;
  lab_0x4043f5:;
    char * format3 = dcgettext(NULL, "fork system call failed", 5); // 0x404401
    error(1, *__errno_location(), format3);
    err_num3 = (int32_t *)format3;
    v12 = v51;
    goto lab_0x40441f;
  lab_0x4043c0:
    // 0x4043c0
    function_406d70(4, v47);
    error(1, (int32_t)"%s would overwrite input; aborting" ^ (int32_t)"%s would overwrite input; aborting", dcgettext(NULL, "%s would overwrite input; aborting", 5));
    v51 = v47;
    goto lab_0x4043f5;
  lab_0x404396:
    // 0x404396
    error(1, *__errno_location(), dcgettext(NULL, "failed to close input pipe", 5));
    v47 = v49;
    goto lab_0x4043c0;
  lab_0x40441f:
    // 0x40441f
    error(1, *err_num3, dcgettext(NULL, "closing output pipe", 5));
    v50 = v12;
    goto lab_0x404441;
  lab_0x404117:
    // 0x404117
    sigprocmask(SIG_SETMASK, (struct _TYPEDEF_sigset_t *)&g61, NULL);
    int64_t exec_arg = function_405180(path, (int64_t)&g61); // 0x404132
    execl((char *)path, (char *)exec_arg);
    error(1, *err_num, dcgettext(NULL, "failed to run command: \"%s -c %s\"", 5));
    v34 = 1;
    v35 = (int64_t)g66;
    goto lab_0x404180;
}
// Address range: 0x404500 - 0x4046f0
int64_t function_404500(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 32 * a2 + a1; // 0x404510
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x40451a
    uint32_t v3 = *v2; // 0x40451a
    if (v3 >= 0) {
        // 0x404522
        return 0;
    }
    int64_t v4 = a3 - 1; // 0x404537
    int64_t v5 = a2 == 0 ? v4 : a2 - 1; // 0x404544
    int32_t v6 = -1; // 0x40454f
    int64_t v7 = v5; // 0x40454f
    int64_t v8 = 0; // 0x40454f
    int64_t v9 = a2; // 0x40454f
    if (v3 == -1) {
        goto lab_0x4045eb;
    } else {
        goto lab_0x404558;
    }
  lab_0x4045eb:;
    int64_t v10 = v7; // 0x4045f2
    int64_t v11 = v8; // 0x4045f2
    int64_t v12 = v9; // 0x4045f2
    int32_t fd = v6; // 0x4045f2
    int64_t v13 = v8; // 0x4045f2
    if (v6 < 0) {
        goto lab_0x40456c;
    } else {
        goto lab_0x4045f8;
    }
  lab_0x404558:;
    int64_t v14 = 0;
    int32_t v15 = function_405210(*(int64_t *)v1, 3073, a3);
    v10 = v5;
    v11 = v14;
    v12 = 3073;
    fd = v15;
    v13 = v14;
    if (v15 >= 0) {
        goto lab_0x4045f8;
    } else {
        goto lab_0x40456c;
    }
  lab_0x40456c:
    // 0x40456c
    v9 = v12;
    int32_t * err_num = __errno_location(); // 0x40456c
    int64_t * v16; // 0x404500
    int64_t v17; // 0x404500
    int64_t v18; // 0x404500
    if (*err_num < 25) {
        v7 = v10;
        int64_t v19 = 32 * v7 + a1; // 0x4045a6
        int32_t * v20 = (int32_t *)(v19 + 8);
        while (*v20 < 0) {
            int64_t v21 = v7 == 0 ? v4 : v7 - 1; // 0x40458f
            if (v21 == a2) {
                int64_t * v22 = (int64_t *)v1;
                error(1, *err_num, "%s", (char *)function_406e40(0, 3, *v22));
                v16 = v22;
                v17 = v19;
                goto lab_0x40465f;
            }
            v7 = v21;
            v19 = 32 * v7 + a1;
            v20 = (int32_t *)(v19 + 8);
        }
        int64_t * v23 = (int64_t *)(v19 + 16); // 0x4045b0
        v18 = v19;
        if ((int32_t)function_407e60(*v23, v9) != 0) {
            goto lab_0x404690;
        } else {
            // 0x4045c6
            *v20 = -2;
            v6 = *v2;
            *v23 = 0;
            v8 = 1;
            if (v6 != -1) {
                goto lab_0x404558;
            } else {
                goto lab_0x4045eb;
            }
        }
    } else {
        // 0x40456c
        v16 = (int64_t *)v1;
        v17 = v11;
        goto lab_0x40465f;
    }
  lab_0x4045f8:
    // 0x4045f8
    *v2 = fd;
    struct _IO_FILE * v24 = fdopen(fd, "a"); // 0x404603
    *(int64_t *)(v1 + 16) = (int64_t)v24;
    if (v24 != NULL) {
        int32_t v25 = g65; // 0x404615
        g65 = 0;
        *(int32_t *)(v1 + 24) = v25;
        // 0x404522
        return v13 & 0xffffffff;
    }
    goto lab_0x4046bc;
  lab_0x4046bc:
    // 0x4046bc
    error(1, *__errno_location(), "%s", (char *)function_406e40(0, 3, *(int64_t *)v1));
    return &g85;
  lab_0x404690:
    // 0x404690
    error(1, *err_num, "%s", (char *)function_406e40(0, 3, *(int64_t *)v18));
    goto lab_0x4046bc;
  lab_0x40465f:
    // 0x40465f
    error(1, *err_num, "%s", (char *)function_406e40(0, 3, *v16));
    v18 = v17;
    goto lab_0x404690;
}
// Address range: 0x4046f0 - 0x4049a0
int64_t function_4046f0(int32_t a1, int32_t fd, int32_t pid, int64_t a4) {
    int64_t v1; // 0x4046f0
    int64_t v2; // 0x4046f0
    int64_t v3; // 0x4046f0
    int32_t * err_num2; // 0x404714
    if (a1 == 0) {
        if (fd < 0) {
            goto lab_0x4047a0;
        } else {
            int32_t v4 = close(fd); // 0x4047b6
            v2 = v4;
            if (v4 >= 0) {
                goto lab_0x40475c;
            } else {
                int64_t v5 = function_406e40(0, 3, a4); // 0x4047c9
                error(1, *__errno_location(), "%s", (char *)v5);
                v3 = v5;
                goto lab_0x4047f0;
            }
        }
    } else {
        int64_t v6 = function_407e60((int64_t)a1, (int64_t)fd); // 0x40470b
        v1 = v6;
        if ((int32_t)v6 == 0) {
            goto lab_0x404758;
        } else {
            // 0x404714
            err_num2 = __errno_location();
            if (g66 == NULL) {
                goto lab_0x40472b;
            } else {
                // 0x404726
                if (*err_num2 == 32) {
                    goto lab_0x404758;
                } else {
                    goto lab_0x40472b;
                }
            }
        }
    }
  lab_0x4047a0:
    // 0x4047a0
    v3 = a4;
    int64_t result; // 0x4046f0
    if (pid >= 0 != pid != 0) {
        // 0x4047a5
        return result;
    }
    goto lab_0x4047f0;
  lab_0x404758:
    // 0x404758
    v2 = v1;
    result = v1;
    if (fd < 0) {
        goto lab_0x4047a0;
    } else {
        goto lab_0x40475c;
    }
  lab_0x4047f0:;
    int64_t v7 = v3;
    int32_t stat_loc = 0; // bp-76, 0x4047fa
    int64_t v8; // 0x4046f0
    if (waitpid(pid, &stat_loc, 0) == -1) {
        int32_t * err_num = __errno_location(); // 0x404918
        if (*err_num == 10) {
            goto lab_0x404810;
        } else {
            // 0x404929
            error(1, *err_num, dcgettext(NULL, "waiting for child process", 5));
            v8 = (int64_t)err_num;
            goto lab_0x404950;
        }
    } else {
        goto lab_0x404810;
    }
  lab_0x40475c:
    // 0x40475c
    result = v2;
    if (g62 != 0) {
        int64_t v9 = (int64_t)g64; // 0x404768
        int64_t v10 = (int64_t)g62 - 1;
        int64_t v11 = 0; // 0x404771
        int64_t v12 = v9; // 0x404771
        int32_t * v13 = g64; // 0x404771
        if (*g64 == fd) {
          lab_0x4048a0:;
            uint32_t v14 = *(int32_t *)(4 * v10 + v9); // 0x4048a0
            g62 = v10;
            *v13 = v14;
            result = v14;
        } else {
            result = v11;
            while (v10 != v11) {
                int64_t v15 = v12 + 4;
                int32_t * v16 = (int32_t *)v15;
                v11++;
                v12 = v15;
                v13 = v16;
                if (*v16 == fd) {
                    goto lab_0x4048a0;
                }
                result = v11;
            }
        }
    }
    goto lab_0x4047a0;
  lab_0x40472b:
    // 0x40472b
    error(1, *err_num2, "%s", (char *)function_406e40(0, 3, a4));
    v1 = &g85;
    goto lab_0x404758;
  lab_0x404810:;
    uint32_t v17 = stat_loc % 128; // 0x404816
    uint32_t v18 = v17 + 1; // 0x404819
    int64_t result2 = v18; // 0x404819
    if ((char)v18 < 2) {
        if (v17 != 0) {
            // 0x404973
            error(1, (int32_t)"unknown status from command (0x%X)" ^ (int32_t)"unknown status from command (0x%X)", dcgettext(NULL, "unknown status from command (0x%X)", 5));
            return &g85;
        }
        uint32_t status = stat_loc / 256 % 256;
        if (status == 0) {
            // 0x4047a5
            return result2;
        }
        // 0x4048cb
        function_406e40(0, 3, v7);
        error(status, (int32_t)"with FILE=%s, exit %d from command: %s" ^ (int32_t)"with FILE=%s, exit %d from command: %s", dcgettext(NULL, "with FILE=%s, exit %d from command: %s", 5));
        // 0x4047a5
        return &g85;
    }
    // 0x404824
    if (v17 == 13) {
        // 0x4047a5
        return result2;
    }
    int64_t v19 = v17; // 0x404816
    int64_t v20; // bp-72, 0x4046f0
    int64_t v21 = function_409040(v19, &v20, 0); // 0x404834
    v8 = v19;
    char * format; // 0x404866
    if ((int32_t)v21 == 0) {
        // 0x404841
        function_406e40(0, 3, v7);
        format = dcgettext(NULL, "with FILE=%s, signal %s from command: %s", 5);
        error((int32_t)v19 + 128, (int32_t)"with FILE=%s, signal %s from command: %s" ^ (int32_t)"with FILE=%s, signal %s from command: %s", format);
        return &g85;
    }
    goto lab_0x404950;
  lab_0x404950:
    // 0x404950
    __sprintf_chk((char *)&v20, 1, 19, "%d", v8 & 0xffffffff);
    // 0x404841
    function_406e40(0, 3, v7);
    format = dcgettext(NULL, "with FILE=%s, signal %s from command: %s", 5);
    error((int32_t)v8 + 128, (int32_t)"with FILE=%s, signal %s from command: %s" ^ (int32_t)"with FILE=%s, signal %s from command: %s", format);
    return &g85;
}
// Address range: 0x4049a0 - 0x404ab0
int64_t function_4049a0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1; // 0x4049a0
    if ((char)a1 == 0) {
        // 0x404a68
        v1 = (uint32_t)g19;
    } else {
        if ((a3 || a2) == 0) {
            // 0x4049bd
            if (g46 != 0) {
                // 0x404a5d
                return 1;
            }
        }
        // 0x4049ca
        function_4046f0(0, g19, g65, (int64_t)g58);
        int64_t v2 = function_403cc0(); // 0x4049e4
        int32_t v3 = v2; // 0x4049f7
        g19 = v3;
        v1 = v2 & 0xffffffff;
        if (v3 < 0) {
            int64_t v4 = function_406e40(0, 3, (int64_t)g58); // 0x404a7e
            error(1, *__errno_location(), "%s", (char *)v4);
            return &g85;
        }
    }
    // 0x404a01
    if (function_4052d0((int32_t)v1, a2, a3) == a3) {
        // 0x404a5d
        return 1;
    }
    int32_t * err_num = __errno_location(); // 0x404a11
    if (g66 != NULL) {
        // 0x404a23
        if (*err_num == 32) {
            // 0x404a5d
            return 0;
        }
    }
    // 0x404a2a
    error(1, *err_num, "%s", (char *)function_406e40(0, 3, (int64_t)g58));
    // 0x404a5d
    return 1;
}
// Address range: 0x404ab0 - 0x404cf0
int64_t function_404ab0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x404ab0
    int64_t v1; // 0x404ab0
    uint64_t v2 = v1;
    int64_t v3 = 1; // 0x404adf
    int64_t v4 = 1; // 0x404adf
    int64_t v5 = a1; // 0x404adf
    int64_t v6 = 0; // 0x404adf
    int64_t v7; // 0x404ab0
    int64_t v8; // 0x404ab0
    int64_t v9; // 0x404ab0
    int64_t v10; // 0x404ab0
    int64_t v11; // 0x404ab0
    int64_t v12; // 0x404ab0
    int64_t v13; // 0x404ab0
    int64_t v14; // 0x404ab0
    int64_t v15; // 0x404ab0
    int64_t v16; // 0x404ab0
    char v17; // 0x404ab0
    char v18; // 0x404ab0
    if (a4 == -1) {
        goto lab_0x404b84;
    } else {
        char v19 = a4 < a3; // 0x404aeb
        v17 = v19;
        v15 = 1;
        v13 = 1;
        v7 = a1;
        v9 = a4;
        v11 = 0;
        v18 = v19;
        v16 = 1;
        v14 = 1;
        v8 = a1;
        v10 = a4;
        v12 = 0;
        if (a4 < a1) {
            goto lab_0x404bc6;
        } else {
            goto lab_0x404af9;
        }
    }
  lab_0x404b84:;
    int64_t offset = v5;
    int64_t v20 = v3;
    int64_t v21 = v20; // 0x404b87
    int64_t v22 = offset; // 0x404b87
    if ((char)v4 == 0) {
        int32_t v23 = lseek(0, (int32_t)offset, SEEK_CUR); // 0x404c4f
        v21 = v23 != -1 ? 1 : v20 & 0xffffffff;
        v22 = v23 != -1 ? a1 : offset;
    }
    int64_t v24 = function_406fe0(0, a2, a3); // 0x404b9e
    if (v24 == -1) {
        int64_t v25 = function_406e40(0, 3, (int64_t)g53); // 0x404cc1
        error(1, *__errno_location(), "%s", (char *)v25);
        return &g85;
    }
    char v26 = v24 == 0; // 0x404bb8
    v17 = v26;
    int64_t v27 = v24; // 0x404bc0
    v15 = v21;
    v13 = v4;
    v7 = v22;
    v9 = v24;
    v11 = v6;
    v18 = v26;
    int64_t v28 = v24; // 0x404bc0
    v16 = v21;
    v14 = v4;
    v8 = v22;
    v10 = v24;
    v12 = v6;
    if (v24 >= v22) {
        goto lab_0x404af9;
    } else {
        goto lab_0x404bc6;
    }
  lab_0x404af9:;
    int64_t v29 = v9; // 0x404b05
    int64_t v30 = v7;
    int64_t v31 = v2 == 0;
    int64_t v32 = a2;
    uint64_t v33 = v15 % 256;
    int64_t v34 = v27; // 0x404b3b
    int64_t v35 = v33 | v13; // 0x404b3b
    int64_t v36 = v31; // 0x404b3b
    if ((char)(v13 || v15) != 0) {
        // 0x404b3d
        v34 = function_4049a0(v33, v32, v30);
        v35 = v34 & 0xffffffff;
        v36 = v31 % 256;
    }
    int64_t v37 = v35;
    int64_t result = v34;
    int64_t v38 = v11 + v33; // 0x404b13
    unsigned char v39 = (char)v36 | (char)(v38 < v2); // 0x404b1c
    int64_t v40; // 0x404ab0
    int64_t v41; // 0x404ab0
    int64_t v42; // 0x404ab0
    int64_t v43; // 0x404ab0
    int64_t v44; // 0x404ab0
    int64_t result3; // 0x404ab0
    int64_t v45; // 0x404ab0
    char v46; // 0x404ab0
    char v47; // 0x404ab0
    while ((v39 || (char)v37) != 0) {
        int64_t v48 = v39; // 0x404b1c
        int64_t v49 = v29 - v30; // 0x404b2a
        int64_t v50 = v30 + v32; // 0x404b2d
        int64_t v51 = result; // 0x404b36
        int64_t v52 = v48; // 0x404b36
        int64_t v53 = v37; // 0x404b36
        int64_t v54 = v50; // 0x404b36
        int64_t v55 = v36; // 0x404b36
        v29 = v49;
        int64_t v56 = v38; // 0x404b36
        if (v49 < a1) {
            // 0x404b70
            v46 = v17;
            result3 = result;
            v3 = v48;
            v4 = v37;
            v5 = a1;
            v42 = v38;
            v47 = v17;
            v45 = v48;
            v44 = v50;
            v40 = a1;
            v41 = v49;
            v43 = v38;
            if (v49 != 0) {
                goto lab_0x404c00;
            } else {
                goto lab_0x404b79;
            }
        }
        v30 = a1;
        v31 = v55;
        v32 = v54;
        v33 = v52 % 256;
        v34 = v51;
        v35 = v33 | v53;
        v36 = v31;
        if ((char)(v53 || v52) != 0) {
            // 0x404b3d
            v34 = function_4049a0(v33, v32, v30);
            v35 = v34 & 0xffffffff;
            v36 = v31 % 256;
        }
        // 0x404b10
        v37 = v35;
        result = v34;
        v38 = v56 + v33;
        v39 = (char)v36 | (char)(v38 < v2);
    }
    // 0x404be8
    return result;
  lab_0x404bc6:;
    int64_t v57 = v12;
    int64_t v58 = v10;
    int64_t v59 = v8;
    int64_t v60 = v14;
    int64_t v61 = v16;
    char v62 = v18;
    v46 = v62;
    result3 = v28;
    v3 = v61;
    v4 = v60;
    v5 = v59;
    v42 = v57;
    int64_t v63; // 0x404ab0
    int64_t v64; // 0x404ab0
    int64_t v65; // 0x404ab0
    int64_t result2; // 0x404ab0
    int64_t v66; // 0x404ab0
    int64_t v67; // 0x404ab0
    int64_t v68; // 0x404ab0
    char v69; // 0x404ab0
    if (v58 == 0) {
        goto lab_0x404b79;
    } else {
        uint64_t v70 = v60 | v61;
        v47 = v62;
        v45 = v61;
        v44 = a2;
        v40 = v59;
        v41 = v58;
        v43 = v57;
        if ((char)v70 != 0) {
            goto lab_0x404c00;
        } else {
            int64_t v71 = v70 % 256; // 0x404bcd
            int64_t v72 = v57 + v71; // 0x404bdb
            result2 = v71;
            v69 = v62;
            v66 = v71;
            v68 = 0;
            v67 = 0;
            v63 = v59;
            v64 = v58;
            v65 = v72;
            if (v2 == v72) {
                // 0x404be8
                return result2;
            }
            goto lab_0x404c31;
        }
    }
  lab_0x404b79:
    // 0x404b79
    v6 = v42;
    if (v46 != 0) {
        // 0x404c6e
        if (v6 >= v2) {
            // 0x404be8
            return result3;
        }
        int64_t v73 = v6 + 1;
        function_4049a0(1, 0, 0);
        int64_t result4 = v73 + 1; // 0x404c9b
        while (v2 != v73) {
            // 0x404c83
            v73 = result4;
            function_4049a0(1, 0, 0);
            result4 = v73 + 1;
        }
        // 0x404be8
        return result4;
    }
    goto lab_0x404b84;
  lab_0x404c00:;
    int64_t v74 = v45 % 256; // 0x404c00
    int64_t v75 = function_4049a0(v74, v44, v41); // 0x404c0e
    int64_t v76 = v43 + v74; // 0x404c24
    unsigned char v77 = ((char)v75 ^ 1) & (char)(v2 == v76); // 0x404c2d
    result2 = v74;
    v69 = v47;
    v66 = v74;
    v68 = v77;
    v67 = v75 & 0xffffffff;
    v63 = v40;
    v64 = v41;
    v65 = v76;
    if (v77 != 0) {
        // 0x404be8
        return result2;
    }
    goto lab_0x404c31;
  lab_0x404c31:
    // 0x404c31
    v46 = v69;
    result3 = v66;
    v3 = v68;
    v4 = v67;
    v5 = v63 - v64;
    v42 = v65;
    goto lab_0x404b79;
}
// Address range: 0x404cf0 - 0x4050bd
int64_t function_404cf0(int32_t status) {
    // 0x404cf0
    if (status != 0) {
        // 0x404d0a
        __fprintf_chk(g38, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x404d2f
        exit(status);
        // UNREACHABLE
    }
    // 0x404d36
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE [PREFIX]]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Output pieces of FILE to PREFIXaa, PREFIXab, ...;\ndefault size is 1000 lines, and default PREFIX is 'x'.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g36);
    __fprintf_chk(g36, 1, dcgettext(NULL, "  -a, --suffix-length=N   generate suffixes of length N (default %d)\n      --additional-suffix=SUFFIX  append an additional SUFFIX to file names\n  -b, --bytes=SIZE        put SIZE bytes per output file\n  -C, --line-bytes=SIZE   put at most SIZE bytes of records per output file\n  -d                      use numeric suffixes starting at 0, not alphabetic\n      --numeric-suffixes[=FROM]  same as -d, but allow setting the start value\n  -x                      use hex suffixes starting at 0, not alphabetic\n      --hex-suffixes[=FROM]  same as -x, but allow setting the start value\n  -e, --elide-empty-files  do not generate empty output files with '-n'\n      --filter=COMMAND    write to shell COMMAND; file name is $FILE\n  -l, --lines=NUMBER      put NUMBER lines/records per output file\n  -n, --number=CHUNKS     generate CHUNKS output files; see explanation below\n  -t, --separator=SEP     use SEP instead of newline as the record separator;\n                            '\\0' (zero) specifies the NUL character\n  -u, --unbuffered        immediately copy input to output with '-n r/...'\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --verbose           print a diagnostic just before each\n                            output file is opened\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y (powers of 1024) or KB,MB,... (powers of 1000).\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nCHUNKS may be:\n  N       split into N files based on size of input\n  K/N     output Kth of N to stdout\n  l/N     split into N files without splitting lines/records\n  l/K/N   output Kth of N to stdout without splitting lines/records\n  r/N     like 'l' but use round robin distribution\n  r/K/N   likewise but only output Kth of N to stdout\n", 5), g36);
    int64_t v1 = &g1; // bp-136, 0x404e98
    bool v2; // 0x404cf0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x404f20
    int64_t v6 = *(int64_t *)v5; // 0x404f24
    int64_t v7 = 6; // 0x404f2a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"split";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x404f36
        char v11 = *(char *)v9; // 0x404f36
        char v12 = v11; // 0x404f36
        bool v13 = false; // 0x404f36
        while (v10 == v11) {
            // 0x404f2c
            v7--;
            int64_t v14 = v9 + v3; // 0x404f36
            int64_t v15 = v8 + v3; // 0x404f36
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
            // break -> 0x404f42
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x404f42
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x405054;
        } else {
            // 0x40503e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x405093
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404fa4;
            } else {
                goto lab_0x405054;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x404fa4;
        } else {
            // 0x404f8a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x405093
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404fa4;
            } else {
                goto lab_0x404fa4;
            }
        }
    }
  lab_0x405054:
    // 0x405054
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404fe4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x404d2f
    exit(status);
    // UNREACHABLE
  lab_0x404fa4:
    // 0x404fa4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404fe4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x404d2f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4050c0 - 0x4050c8
int64_t function_4050c0(int64_t a1) {
    // 0x4050c0
    g68 = a1;
    int64_t result; // 0x4050c0
    return result;
}
// Address range: 0x4050d0 - 0x4050d8
int64_t function_4050d0(int64_t a1) {
    // 0x4050d0
    g67 = a1;
    int64_t result; // 0x4050d0
    return result;
}
// Address range: 0x4050e0 - 0x40517e
int64_t function_4050e0(void) {
    // 0x4050e0
    int32_t * err_num; // 0x4050f6
    if ((int32_t)function_409110((int64_t)g36) == 0) {
        goto lab_0x40510c;
    } else {
        // 0x4050f6
        err_num = __errno_location();
        if (g67 == 0) {
            goto lab_0x405123;
        } else {
            // 0x405107
            if (*err_num != 32) {
                goto lab_0x405123;
            } else {
                goto lab_0x40510c;
            }
        }
    }
  lab_0x40510c:;
    int64_t result = function_409110((int64_t)g38); // 0x405113
    if ((int32_t)result == 0) {
        // 0x40511c
        return result;
    }
    // 0x40515e
    _exit(g23);
    // UNREACHABLE
  lab_0x405123:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40512f
    if (g68 == 0) {
        // 0x405169
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405143
        error(0, *err_num, "%s: %s", (char *)function_406e10((int64_t)g68), v1);
    }
    // 0x40515e
    _exit(g23);
    // UNREACHABLE
}
// Address range: 0x405180 - 0x4051db
int64_t function_405180(int64_t a1, int64_t a2) {
    // 0x405180
    int64_t v1; // 0x405180
    char v2 = v1;
    int64_t v3 = a1; // 0x405189
    int64_t v4 = a1; // 0x405189
    char v5 = v2; // 0x405189
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x405194
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x405190
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40519e
    if (v5 == 0) {
      lab_0x4051da:
        // 0x4051da
        return result;
    }
    int64_t v7 = v4; // 0x4051c8
    int64_t v8 = 0; // 0x4051c8
    int64_t v9; // 0x405180
    int64_t v10; // 0x4051ca
    char v11; // 0x4051ce
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x4051c5
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x4051ca
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x4051c5
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x4051ba
    char v14 = *(char *)v13; // 0x4051be
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
            // 0x4051c5
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x4051ca
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x4051c5
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x4051b0
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x4051da
    return result2;
}
// Address range: 0x4051e0 - 0x40520b
int64_t function_4051e0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4051e4
    int64_t result = len; // 0x4051e4
    if (len < 2) {
        // 0x4051fa
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x4051f8
    while (*(char *)(v1 + str) == 47) {
        // 0x405200
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x4051fa
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x4051fa
    return result2;
}
// Address range: 0x405210 - 0x40525a
int64_t function_405210(int64_t path, int64_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x405223
    return function_4070a0((int64_t)fd);
}
// Address range: 0x405260 - 0x4052ca
int64_t function_405260(int32_t fd2, int64_t path, int32_t oflag, int32_t a4) {
    int32_t fd = open((char *)path, oflag); // 0x405275
    if (fd != fd2 != fd >= 0) {
        // 0x405284
        return fd;
    }
    uint32_t result = dup2(fd, fd2); // 0x40529c
    int32_t * v1 = __errno_location(); // 0x4052a4
    close(fd);
    return result;
}
// Address range: 0x4052d0 - 0x405346
int64_t function_4052d0(uint32_t a1, int64_t a2, int64_t a3) {
    // 0x4052d0
    if (a3 == 0) {
        // 0x405314
        return 0;
    }
    int64_t v1 = a3; // 0x4052eb
    int64_t v2 = a2; // 0x4052eb
    int64_t result = 0;
    int64_t v3 = function_407040((int64_t)a1, v2, v1); // 0x405309
    int64_t result2 = result; // 0x405312
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x405328
            *__errno_location() = 28;
            return result;
        }
        int64_t v4 = v3 + result; // 0x4052f5
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x405314
            break;
        }
        result = v4;
        v3 = function_407040((int64_t)a1, v2, v1);
        result2 = result;
    }
    // 0x405314
    return result2;
}
// Address range: 0x405350 - 0x405398
int64_t function_405350(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x405350
    *(char *)v1 = 0;
    int64_t result = v1; // 0x405362
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40536b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x405394
    return result;
}
// Address range: 0x4053a0 - 0x405439
int64_t function_4053a0(int64_t str) {
    // 0x4053a0
    if (str == 0) {
        // 0x405419
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g38);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4053ae
    int64_t result = (int64_t)found_char_pos; // 0x4053ae
    if (found_char_pos == NULL) {
        // 0x405409
        g69 = str;
        g37 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4053b8
    if (v1 - str < 7) {
        // 0x405409
        g69 = str;
        g37 = str;
        return result;
    }
    // 0x4053c8
    bool v2; // 0x4053a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4053a0
    int64_t v5 = result - 6; // 0x4053a0
    int64_t v6 = 7; // 0x4053d6
    unsigned char v7 = *(char *)v5; // 0x4053d6
    char v8 = *(char *)v4; // 0x4053d6
    char v9 = v8; // 0x4053d6
    bool v10 = false; // 0x4053d6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4053e0
    int64_t v13 = v1; // 0x4053e0
    int64_t v14 = 3; // 0x4053e0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x405409
        g69 = str;
        g37 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4053f2
    char v16 = *(char *)v12; // 0x4053f2
    char v17 = v16; // 0x4053f2
    bool v18 = false; // 0x4053f2
    while (v15 == v16) {
        // 0x4053e2
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
    int64_t v20 = v1; // 0x4053fc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4053fe
        v20 = result + 4;
        g35 = v20;
    }
    // 0x405409
    g69 = v20;
    g37 = v20;
    return result;
}
// Address range: 0x405440 - 0x405532
int64_t function_405440(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x405454
    int64_t result = (int64_t)v1; // 0x405454
    if (result != a1) {
        // 0x405461
        return result;
    }
    int64_t v2 = function_4091d0(); // 0x405470
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x405526
    if (v3 == 85) {
        // 0x405480
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x405518
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
            return result2;
        }
        char v4 = *v1; // 0x4054ae
        int64_t result3 = v4 != 96 ? (int64_t)&g6 : (int64_t)&g9; // 0x4054bb
        // 0x405461
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x405518
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g5;
        return result2;
    }
    char v5 = *v1; // 0x4054fd
    int64_t result4 = v5 != 96 ? (int64_t)&g7 : (int64_t)&g8; // 0x40550a
    // 0x405461
    return result4;
}
// Address range: 0x405540 - 0x405597
int64_t function_405540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x405540
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x405588
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x405597 - 0x406761
int64_t function_405597(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4055e1
    int64_t v3 = 0; // 0x4055e1
    int64_t v4; // 0x405597
    int64_t v5; // 0x405597
    int64_t v6; // 0x405597
    int64_t v7; // 0x405597
    int64_t v8; // 0x405597
    int64_t v9; // 0x405597
    int64_t v10; // 0x405597
    int64_t v11; // 0x405597
    int64_t v12; // 0x405597
    int64_t v13; // 0x405597
    int64_t v14; // 0x405597
    int64_t v15; // 0x405597
    int64_t v16; // 0x405597
    int64_t v17; // 0x405597
    int64_t v18; // 0x405597
    int64_t result; // 0x405597
    int64_t v19; // 0x405597
    int32_t wc; // bp+132, 0x405597
    int64_t ps; // bp+136, 0x405597
    char v20; // 0x405b50
    int64_t v21; // 0x405b50
    int64_t v22; // 0x405ef8
    int64_t v23; // 0x405597
    int64_t v24; // 0x405f17
    int32_t v25; // 0x405597
    while (true) {
      lab_0x4055e8_2:
        // 0x4055e8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x405597
        int64_t v27; // 0x40561c
        while (true) {
          lab_0x4055e8:
            // 0x4055e8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4055f3
            if (v15 == -1) {
                // 0x4055f5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x405603
            if (v28) {
                // break (via goto) -> 0x405d68
                goto lab_0x405d68;
            }
            // 0x40560c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g84 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x405bfb
                    if (v25 % 2 == 0) {
                        goto lab_0x405741;
                    }
                    // 0x40601d
                    v26 = v5 + 1;
                    goto lab_0x4055e8;
                }
                case 7: {
                    goto lab_0x405741;
                }
                case 8: {
                    goto lab_0x405741;
                }
                case 9: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x405741;
                }
                case 12: {
                    goto lab_0x405741;
                }
                case 13: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40570d;
                }
                case 36: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x405741;
                }
                case 38: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x405741;
                }
                case 44: {
                    goto lab_0x405741;
                }
                case 45: {
                    goto lab_0x405741;
                }
                case 46: {
                    goto lab_0x405741;
                }
                case 47: {
                    goto lab_0x405741;
                }
                case 48: {
                    goto lab_0x405741;
                }
                case 49: {
                    goto lab_0x405741;
                }
                case 50: {
                    goto lab_0x405741;
                }
                case 51: {
                    goto lab_0x405741;
                }
                case 52: {
                    goto lab_0x405741;
                }
                case 53: {
                    goto lab_0x405741;
                }
                case 54: {
                    goto lab_0x405741;
                }
                case 55: {
                    goto lab_0x405741;
                }
                case 56: {
                    goto lab_0x405741;
                }
                case 57: {
                    goto lab_0x405741;
                }
                case 58: {
                    goto lab_0x405741;
                }
                case 59: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x405741;
                }
                case 66: {
                    goto lab_0x405741;
                }
                case 67: {
                    goto lab_0x405741;
                }
                case 68: {
                    goto lab_0x405741;
                }
                case 69: {
                    goto lab_0x405741;
                }
                case 70: {
                    goto lab_0x405741;
                }
                case 71: {
                    goto lab_0x405741;
                }
                case 72: {
                    goto lab_0x405741;
                }
                case 73: {
                    goto lab_0x405741;
                }
                case 74: {
                    goto lab_0x405741;
                }
                case 75: {
                    goto lab_0x405741;
                }
                case 76: {
                    goto lab_0x405741;
                }
                case 77: {
                    goto lab_0x405741;
                }
                case 78: {
                    goto lab_0x405741;
                }
                case 79: {
                    goto lab_0x405741;
                }
                case 80: {
                    goto lab_0x405741;
                }
                case 81: {
                    goto lab_0x405741;
                }
                case 82: {
                    goto lab_0x405741;
                }
                case 83: {
                    goto lab_0x405741;
                }
                case 84: {
                    goto lab_0x405741;
                }
                case 85: {
                    goto lab_0x405741;
                }
                case 86: {
                    goto lab_0x405741;
                }
                case 87: {
                    goto lab_0x405741;
                }
                case 88: {
                    goto lab_0x405741;
                }
                case 89: {
                    goto lab_0x405741;
                }
                case 90: {
                    goto lab_0x405741;
                }
                case 91: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x405741;
                }
                case 94: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x405741;
                }
                case 96: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x405741;
                }
                case 98: {
                    goto lab_0x405741;
                }
                case 99: {
                    goto lab_0x405741;
                }
                case 100: {
                    goto lab_0x405741;
                }
                case 101: {
                    goto lab_0x405741;
                }
                case 102: {
                    goto lab_0x405741;
                }
                case 103: {
                    goto lab_0x405741;
                }
                case 104: {
                    goto lab_0x405741;
                }
                case 105: {
                    goto lab_0x405741;
                }
                case 106: {
                    goto lab_0x405741;
                }
                case 107: {
                    goto lab_0x405741;
                }
                case 108: {
                    goto lab_0x405741;
                }
                case 109: {
                    goto lab_0x405741;
                }
                case 110: {
                    goto lab_0x405741;
                }
                case 111: {
                    goto lab_0x405741;
                }
                case 112: {
                    goto lab_0x405741;
                }
                case 113: {
                    goto lab_0x405741;
                }
                case 114: {
                    goto lab_0x405741;
                }
                case 115: {
                    goto lab_0x405741;
                }
                case 116: {
                    goto lab_0x405741;
                }
                case 117: {
                    goto lab_0x405741;
                }
                case 118: {
                    goto lab_0x405741;
                }
                case 119: {
                    goto lab_0x405741;
                }
                case 120: {
                    goto lab_0x405741;
                }
                case 121: {
                    goto lab_0x405741;
                }
                case 122: {
                    goto lab_0x405741;
                }
                case 123: {
                    goto lab_0x4056e5;
                }
                case 124: {
                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4056e5;
                }
                case 126: {
                    goto lab_0x40570d;
                }
                default: {
                    goto lab_0x405ae5;
                }
            }
        }
      lab_0x405ae5:
        if (v23 != 1) {
            // 0x405e50
            ps = 0;
            int64_t len = v15; // 0x405e60
            if (v15 == -1) {
                // 0x405e62
                len = strlen((char *)str);
            }
            // 0x405e8e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x405eef:
                // 0x405eef
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x405ef4
                int64_t v30 = v29 + str;
                v24 = function_408d50(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40646a_2;
                    }
                    case -1: {
                        goto lab_0x40646a_2;
                    }
                    case -2: {
                        // 0x40654d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x406587
                            v19 = v18;
                            int64_t v31 = v18; // 0x40658a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x406597
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x406590
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40646a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40646a_2;
                    }
                    case 1: {
                        goto lab_0x405ec0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x405f6c
                        char v34 = *(char *)v33; // 0x405f7d
                        unsigned char v35; // 0x405597
                        if (v34 < 125) {
                            // 0x405f88
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x405f9f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_405540(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x405f70
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x405f7d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x405f88
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x405f9f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_405540(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x405f70
                            v33++;
                        }
                        goto lab_0x405ec0;
                    }
                }
            }
            goto lab_0x40646a_2;
        } else {
            // 0x405b34
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x405741;
        }
    }
  lab_0x405d68:
    // 0x405d68
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40666a
        if (v8 > result) {
            // 0x406673
            *(char *)(v12 + result) = 0;
        }
        // 0x405997
        return result;
    }
    return function_405540(v10, v6, str, v4, 2, v25 & -3);
  lab_0x405741:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x405750
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40595a_2;
        }
    }
    int64_t v39 = result; // 0x405851
    char v40 = v20; // 0x405851
    int64_t v41 = v38; // 0x405851
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x405851
    int64_t v43 = v36; // 0x405851
    goto lab_0x4057cd;
  lab_0x40595a_2:
    // 0x405997
    return function_405540(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40646a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x405741;
    } else {
        uint64_t v49 = v46 + v5; // 0x40603e
        int64_t v50 = v5 + 1; // 0x406121
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x406128
        char v52 = v20; // 0x406128
        int64_t v53 = result; // 0x406128
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4060f1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4060f5
            int64_t v56 = v54 + 1; // 0x4060fa
            int64_t v57 = v51 + 1; // 0x406121
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4060ec
                v54 = v56;
                if (v47 > v54) {
                    // 0x4060f1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4060f5
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
        goto lab_0x4057cd;
    }
  lab_0x405ec0:
    // 0x405ec0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x405edf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405ee2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40646a
        goto lab_0x40646a_2;
    }
    goto lab_0x405eef;
  lab_0x40570d:
    // 0x40570d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40595a_2;
    }
    goto lab_0x405741;
  lab_0x4056e5:;
    bool v60 = v15 == 1; // 0x4056f0
    if (v15 == -1) {
        // 0x4056f2
        v60 = *(char *)v1 == 0;
    }
    // 0x4056fe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x405741;
    } else {
        goto lab_0x40570d;
    }
  lab_0x4057cd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4057d2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4057d6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4055e8_2;
}
// Address range: 0x406770 - 0x40690e
int64_t function_406770(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x406772
    int32_t * v3 = __errno_location(); // 0x40678c
    int64_t v4 = (int64_t)g25; // 0x406791
    int32_t v5 = *v3; // 0x40679b
    int64_t v6 = v4; // 0x4067b1
    if (v2 >= (int64_t)*(int32_t *)&g28) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x406909
            function_4078e0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4067c0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4067c7
        int64_t v9; // 0x406770
        if (g25 == &g26) {
            int64_t v10 = function_4076f0(0, v8); // 0x4068ea
            int128_t v11 = __asm_movdqa(*(int128_t *)&g26); // 0x4068ef
            *(int64_t *)&g25 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4076f0((int32_t)v4, v8); // 0x4067db
            *(int64_t *)&g25 = v12;
            v9 = v12;
        }
        // 0x4067ea
        v6 = v9;
        int32_t v13 = *(int32_t *)&g28; // 0x4067ea
        int32_t v14 = v7; // 0x4067f1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g28 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x406821
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40682b
    int64_t * v17 = (int64_t *)v15; // 0x40682e
    uint64_t v18 = *v17; // 0x40682e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x406831
    int64_t result = *v19; // 0x406831
    int64_t v20; // 0x406770
    uint64_t v21 = function_405540(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x406854
    if (v18 > v21) {
        // 0x4068cb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x406867
    *v17 = v22;
    if (result != (int64_t)&g70) {
        // 0x406877
        free((int64_t *)result);
    }
    int64_t result2 = function_407690(v22); // 0x406891
    *v19 = result2;
    int64_t v23; // 0x406770
    function_405540(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4068cb
    *v3 = v5;
    return result2;
}
// Address range: 0x406910 - 0x406944
int64_t function_406910(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x406917
    int64_t result = function_407890(a1 == 0 ? (int64_t)&g71 : a1, 56); // 0x406936
    return result;
}
// Address range: 0x406950 - 0x40695f
int64_t function_406950(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g71 : a1); // 0x40695c
    return result;
}
// Address range: 0x406960 - 0x40696f
int64_t function_406960(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g71 : a1; // 0x406968
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g71;
}
// Address range: 0x406970 - 0x4069a3
int64_t function_406970(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g71 + 8 : a1 + 8; // 0x406989
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40698e
    uint32_t v3 = *v2; // 0x40698e
    uint32_t v4 = (int32_t)a2 % 32; // 0x406992
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4069b0 - 0x4069c3
int64_t function_4069b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g71 + 4 : a1 + 4); // 0x4069bc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4069d0 - 0x4069fb
int64_t function_4069d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g71 : a1; // 0x4069d8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4069f5
        abort();
        // UNREACHABLE
    }
    // 0x4069ec
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g71;
}
// Address range: 0x406a00 - 0x406a72
int64_t function_406a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g71 : a5; // 0x406a22
    int32_t * v2 = __errno_location(); // 0x406a2b
    uint32_t v3 = *(int32_t *)v1; // 0x406a4b
    int64_t result = function_405540(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x406a5a
    return result;
}
// Address range: 0x406a80 - 0x406b61
int64_t function_406a80(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g71 : a4; // 0x406aa2
    int32_t * v2 = __errno_location(); // 0x406aa8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x406ac7
    int32_t * v4 = (int32_t *)v1; // 0x406aca
    int64_t v5 = function_405540(0, 0, a1, a2, (int64_t)*v4, v3); // 0x406ae5
    int64_t v6 = v5 + 1; // 0x406aea
    int64_t result = function_407690(v6); // 0x406aff
    function_405540(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x406b44
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x406b4d
    return result;
}
// Address range: 0x406b70 - 0x406b7a
int64_t function_406b70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406b70
    return function_406a80(a1, a2, 0, a3);
}
// Address range: 0x406b80 - 0x406c15
int64_t function_406b80(void) {
    uint32_t v1 = *(int32_t *)&g28; // 0x406b80
    int64_t v2 = v1; // 0x406b80
    int64_t v3 = v2; // 0x406b94
    if (v1 >= 2) {
        int64_t v4 = &g28;
        int64_t v5 = v4 + 16; // 0x406bb3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g85;
        while (v5 != (int64_t)g25 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x406bb0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g85;
        }
    }
    int64_t v6 = v3; // 0x406bcd
    if (g26 != 0x60e780) {
        // 0x406bcf
        free((int64_t *)g26);
        g26 = 256;
        *(int64_t *)&g27 = (int64_t)&g70;
        v6 = &g85;
    }
    int64_t result = v6; // 0x406bf1
    if (g25 != &g26) {
        // 0x406bf3
        free(g25);
        *(int64_t *)&g25 = (int64_t)&g26;
        result = &g85;
    }
    // 0x406c06
    *(int32_t *)&g28 = 1;
    return result;
}
// Address range: 0x406c20 - 0x406c31
int64_t function_406c20(void) {
    // 0x406c20
    int64_t v1; // 0x406c20
    return function_406770(v1, v1, -1, (int64_t *)&g71);
}
// Address range: 0x406c40 - 0x406c4a
int64_t function_406c40(void) {
    // 0x406c40
    int64_t v1; // 0x406c40
    return function_406770(v1, v1, v1, (int64_t *)&g71);
}
// Address range: 0x406c50 - 0x406c66
int64_t function_406c50(int64_t a1) {
    // 0x406c50
    return function_406770(0, a1, -1, (int64_t *)&g71);
}
// Address range: 0x406c70 - 0x406c82
int64_t function_406c70(int64_t a1, int64_t a2) {
    // 0x406c70
    return function_406770(0, a1, a2, (int64_t *)&g71);
}
// Address range: 0x406c90 - 0x406cf8
int64_t function_406c90(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406ca0
    return function_406770((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406d00 - 0x406d64
int64_t function_406d00(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406d10
    return function_406770((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x406d70 - 0x406d7c
int64_t function_406d70(int64_t a1, int64_t a2) {
    // 0x406d70
    return function_406c90(0, a1 & 0xffffffff, a2);
}
// Address range: 0x406d80 - 0x406d8f
int64_t function_406d80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406d80
    return function_406d00(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x406d90 - 0x406e00
int64_t function_406d90(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g71); // 0x406d9d
    int128_t v2 = __asm_movdqa(g72); // 0x406da5
    int128_t v3 = __asm_movdqa(g73); // 0x406dad
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x406dc2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x406dd8
    uint32_t v6 = *v5; // 0x406dd8
    uint32_t v7 = (int32_t)a3 % 32; // 0x406ddd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_406770(0, a1, a2, &v4);
}
// Address range: 0x406e00 - 0x406e0d
int64_t function_406e00(int64_t a1, int64_t a2) {
    // 0x406e00
    return function_406d90(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x406e10 - 0x406e21
int64_t function_406e10(int64_t a1) {
    // 0x406e10
    return function_406d90(a1, -1, 58);
}
// Address range: 0x406e30 - 0x406e3a
int64_t function_406e30(void) {
    // 0x406e30
    int64_t v1; // 0x406e30
    return function_406d90(v1, v1, 58);
}
// Address range: 0x406e40 - 0x406eae
int64_t function_406e40(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406e5a
    return function_406770((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406eb0 - 0x406f1c
int64_t function_406eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g71); // 0x406eb7
    int128_t v2 = __asm_movdqa(g72); // 0x406ebf
    int128_t v3 = __asm_movdqa(g73); // 0x406ec7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x406ee9
    if (a2 == 0 || a3 == 0) {
        // 0x406f17
        abort();
        // UNREACHABLE
    }
    // 0x406efa
    return function_406770(a1, a4, a5, &v4);
}
// Address range: 0x406f20 - 0x406f29
int64_t function_406f20(void) {
    // 0x406f20
    int64_t v1; // 0x406f20
    return function_406eb0(v1, v1, v1, v1, -1);
}
// Address range: 0x406f30 - 0x406f47
int64_t function_406f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406f30
    return function_406eb0(0, a1, a2, a3, -1);
}
// Address range: 0x406f50 - 0x406f63
int64_t function_406f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x406f50
    return function_406eb0(0, a1, a2, a3, a4);
}
// Address range: 0x406f70 - 0x406f7a
int64_t function_406f70(void) {
    // 0x406f70
    int64_t v1; // 0x406f70
    return function_406770(v1, v1, v1, &g24);
}
// Address range: 0x406f80 - 0x406f92
int64_t function_406f80(int64_t a1, int64_t a2) {
    // 0x406f80
    return function_406770(0, a1, a2, &g24);
}
// Address range: 0x406fa0 - 0x406fb1
int64_t function_406fa0(void) {
    // 0x406fa0
    int64_t v1; // 0x406fa0
    return function_406770(v1, v1, -1, &g24);
}
// Address range: 0x406fc0 - 0x406fd6
int64_t function_406fc0(int64_t a1) {
    // 0x406fc0
    return function_406770(0, a1, -1, &g24);
}
// Address range: 0x406fe0 - 0x40703e
int64_t function_406fe0(int32_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read(fd, (int64_t *)buf, (int32_t)nbyte); // 0x407001
    while (result < 0) {
        // 0x40700e
        if (*__errno_location() != 4) {
            // break -> 0x40701a
            break;
        }
        result = read(fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x407040 - 0x40709e
int64_t function_407040(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x407061
    while (result < 0) {
        // 0x40706e
        if (*__errno_location() != 4) {
            // break -> 0x40707a
            break;
        }
        result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x4070a0 - 0x4070ee
int64_t function_4070a0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x4070ac
    if (fd >= 3) {
        // 0x4070b1
        return a1 & 0xffffffff;
    }
    // 0x4070c0
    int64_t v1; // 0x4070a0
    int64_t v2 = function_409740(a1, v1); // 0x4070c0
    int32_t * v3 = __errno_location(); // 0x4070c8
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x4070f0 - 0x4074cd
int64_t function_4070f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x407188
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40710c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x407126
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40716b
    if (a6 < 10) {
        // 0x40717a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x407272
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4074d0 - 0x4074f0
int64_t function_4074d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4074d0
    if (a5 == 0) {
        // 0x4074eb
        return function_4070f0(a1, a2, a3, a4, a5, 0, (int64_t)&g85);
    }
    int64_t v1 = 0; // 0x4074d7
    v1++;
    int64_t v2 = v1; // 0x4074e9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4074e0
        v1++;
        v2 = v1;
    }
    // 0x4074eb
    return function_4070f0(a1, a2, a3, a4, a5, v2, (int64_t)&g85);
}
// Address range: 0x4074f0 - 0x407550
int64_t function_4074f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4074f0
    int64_t v3 = &v2; // 0x4074f0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x407523
    int64_t v6; // 0x40750d
    int64_t * v7; // 0x40752b
    int64_t v8; // 0x40752b
    int64_t v9; // 0x407537
    if (v5 < 48) {
        // 0x407500
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x407543
            break;
        }
    } else {
        // 0x40752b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x407543
            break;
        }
    }
    int64_t v10 = 10; // 0x407521
    while (v4 != 9) {
        // 0x407519
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x407500
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x407543
                break;
            }
        } else {
            // 0x40752b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x407543
                break;
            }
        }
        // 0x407519
        v10 = 10;
    }
    // 0x407543
    return function_4070f0(a1, a2, a3, a4, v3, v10, (int64_t)&g85);
}
// Address range: 0x407550 - 0x40760c
int64_t function_407550(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x407550
    int64_t v1; // bp-168, 0x407550
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x407550
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x407550
    int64_t v8; // 0x407550
    int64_t v9; // bp-56, 0x407550
    int64_t v10; // 0x4075b5
    int64_t v11; // 0x4075d9
    if ((int32_t)v6 < 48) {
        // 0x4075a0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4075f0
            break;
        }
    } else {
        // 0x4075d2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4075f0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4075ca
    int64_t v13 = 10; // 0x4075ca
    while (v5 != 9) {
        // 0x4075cc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4075a0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4075f0
                break;
            }
        } else {
            // 0x4075d2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4075f0
                break;
            }
        }
        // 0x4075c2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4075f0
    int64_t v14; // bp-136, 0x407550
    int64_t result = function_4070f0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g85); // 0x4075ff
    return result;
}
// Address range: 0x407610 - 0x407684
int64_t function_407610(int64_t a1) {
    // 0x407610
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x407673
    return fputs_unlocked(v1, g36);
}
// Address range: 0x407690 - 0x4076aa
int64_t function_407690(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x407694
    if (size != 0 != (mem == NULL)) {
        // 0x4076a3
        return (int64_t)mem;
    }
    // 0x4076a5
    function_4078e0(size);
    // UNREACHABLE
}
// Address range: 0x4076b0 - 0x4076d1
int64_t function_4076b0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4076b3
    int64_t v2 = v1; // 0x4076b3
    if (v2 < 0) {
        // 0x4076cb
        function_4078e0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4076c9
        return function_407690(v2);
    }
    // 0x4076cb
    function_4078e0(v2);
    // UNREACHABLE
}
// Address range: 0x4076e0 - 0x4076e2
int64_t function_4076e0(void) {
    // 0x4076e0
    int64_t v1; // 0x4076e0
    return function_407690(v1);
}
// Address range: 0x4076f0 - 0x407726
int64_t function_4076f0(int32_t a1, int64_t a2) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)v1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x407718
        free(v2);
        return (int32_t)&g85 ^ (int32_t)&g85;
    }
    int64_t * mem = realloc(v2, (int32_t)a2); // 0x407701
    if (a2 != 0 != (mem == NULL)) {
        // 0x407710
        return (int64_t)mem;
    }
    // 0x407721
    function_4078e0(v1);
    // UNREACHABLE
}
// Address range: 0x407730 - 0x407751
int64_t function_407730(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x407733
    int64_t v2 = v1; // 0x407733
    if (v2 < 0) {
        // 0x40774b
        function_4078e0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407749
        return function_4076f0((int32_t)a1, v2);
    }
    // 0x40774b
    function_4078e0(a1);
    // UNREACHABLE
}
// Address range: 0x407760 - 0x4077e6
int64_t function_407760(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4077bb
            function_4078e0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4076f0((int32_t)a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4077a3
    if (a2 == 0) {
        // 0x4077c8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4077a8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4077bb
        function_4078e0(a1);
        // UNREACHABLE
    }
    // 0x40778a
    *(int64_t *)a2 = v2;
    return function_4076f0((int32_t)a1, v2 * a3);
}
// Address range: 0x4077f0 - 0x407840
int64_t function_4077f0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4077f0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40783a
            function_4078e0(a1);
            // UNREACHABLE
        }
        // 0x407812
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4076f0((int32_t)a1, v1);
    }
    if (a2 == 0) {
        // 0x407825
        *(int64_t *)a2 = 128;
        return function_4076f0(0, 128);
    }
    // 0x407838
    if (a2 < 0) {
        // 0x40783a
        function_4078e0(a1);
        // UNREACHABLE
    }
    // 0x407812
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4076f0((int32_t)a1, v1);
}
// Address range: 0x407840 - 0x407857
int64_t function_407840(int64_t a1, int64_t a2) {
    // 0x407840
    return (int64_t)memset((int64_t *)function_407690(a1), 0, (int32_t)a1);
}
// Address range: 0x407860 - 0x40788e
int64_t function_407860(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x407867
    if ((int64_t)v1 < 0) {
        // 0x407889
        function_4078e0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x407889
        function_4078e0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40787a
    if (mem != NULL) {
        // 0x407884
        return (int64_t)mem;
    }
    // 0x407889
    function_4078e0(nmemb);
    // UNREACHABLE
}
// Address range: 0x407890 - 0x4078b8
int64_t function_407890(int64_t a1, int64_t a2) {
    int64_t v1 = function_407690(a2); // 0x40789f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4078c0 - 0x4078d3
int64_t function_4078c0(int64_t str) {
    // 0x4078c0
    return function_407890(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4078e0 - 0x407911
int64_t function_4078e0(int64_t a1) {
    // 0x4078e0
    error(g23, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x407920 - 0x4079f0
int64_t function_407920(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x407920
    int64_t result2; // bp-64, 0x407920
    int64_t v1 = function_407a20(a1, 0, a2 & 0xffffffff, &result2, (int64_t *)a5, a6); // 0x407947
    int32_t v2 = v1; // 0x40794c
    int32_t * v3; // 0x407920
    if (v2 != 0) {
        int32_t * v4 = __errno_location(); // 0x4079ca
        if (v2 == 1) {
            // 0x4079e8
            *v4 = 75;
            v3 = v4;
        } else {
            // 0x4079d7
            v3 = v4;
            if (v2 == 3) {
                // 0x4079dc
                *v4 = 0;
                v3 = v4;
            }
        }
    } else {
        uint64_t result = result2; // 0x407950
        if (result >= a3 && result <= a4) {
            // 0x4079b2
            return result;
        }
        int32_t * v5 = __errno_location(); // 0x40795f
        *v5 = result < 0x40000000 ? 34 : 75;
        v3 = v5;
    }
    int64_t v6 = function_406fc0(a1); // 0x40797c
    int32_t v7 = *v3; // 0x407981
    int32_t err_num = v7 == 22 ? 0 : v7; // 0x407997
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v6);
    // 0x4079b2
    return result2;
}
// Address range: 0x4079f0 - 0x407a11
int64_t function_4079f0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x4079f0
    int64_t result; // 0x4079f0
    return result;
}
// Address range: 0x407a20 - 0x407e60
int64_t function_407a20(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x407a2e
    if (v1 >= 37) {
        // 0x407e3b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g85;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x407a52
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x407a82
    int64_t v4 = a1; // 0x407a87
    char v5 = c; // 0x407a87
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x407a7c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x407a78
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x407a89
    if (v5 == 45) {
        // 0x407ac5
        return 4;
    }
    // 0x407a8e
    int64_t v7; // bp-64, 0x407a20
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x407a4e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x407a96
    int64_t * v10 = (int64_t *)v8; // 0x407a9b
    int64_t v11 = *v10; // 0x407a9b
    char v12; // 0x407a20
    int64_t v13; // 0x407a20
    int64_t v14; // 0x407a20
    int64_t v15; // 0x407a20
    int64_t v16; // 0x407a20
    int64_t v17; // 0x407a20
    int64_t v18; // 0x407a20
    if (v11 == a1) {
        // 0x407af8
        if (c == 0 || str == NULL) {
            // 0x407ac5
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x407b19
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x407ac5
            return 4;
        }
        goto lab_0x407b27;
    } else {
        int32_t v19 = *v2; // 0x407aa6
        int64_t v20 = 0; // 0x407aac
        if (v19 != 0) {
            // 0x407ae0
            v20 = 1;
            if (v19 != 34) {
                // 0x407ac5
                return 4;
            }
        }
        int64_t v21 = v9; // 0x407a96
        v16 = v21;
        v13 = v20;
        if (str == NULL) {
            goto lab_0x407ac2;
        } else {
            char c2 = *(char *)v11; // 0x407ab5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x407c23
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407b27;
                } else {
                    goto lab_0x407c35;
                }
            } else {
                goto lab_0x407ac2;
            }
        }
    }
  lab_0x407b27:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x407b2f
    int64_t v24 = 1; // 0x407b2f
    int64_t v25; // 0x407a20
    int64_t v26; // 0x407a20
    int64_t v27; // 0x407a20
    int64_t v28; // 0x407a20
    int64_t v29; // 0x407a20
    int64_t v30; // 0x407a20
    int64_t v31; // 0x407a20
    int64_t v32; // 0x407a20
    int64_t v33; // 0x407a20
    int64_t v34; // 0x407a20
    int64_t v35; // 0x407a20
    int64_t v36; // 0x407a20
    int64_t v37; // 0x407a20
    int64_t v38; // 0x407a20
    int64_t v39; // 0x407a20
    int64_t v40; // 0x407a20
    int64_t v41; // 0x407a20
    int64_t v42; // 0x407a20
    int64_t v43; // 0x407a20
    int64_t v44; // 0x407a20
    if (v22 < 48) {
        // 0x407b31
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x407b9a;
        } else {
            // 0x407b44
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x407b9a;
            } else {
                // 0x407b60
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x407b9a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x407dc9
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x407b9a;
                    }
                    default: {
                        // 0x407b75
                        g82 = v22;
                        v23 = 1000;
                        v24 = 2;
                        v27 = 1024;
                        v39 = 1;
                        v26 = v17;
                        v25 = v14;
                        v40 = 1;
                        v28 = 1024;
                        v41 = 1;
                        v18 = v17;
                        v15 = v14;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v44 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        v34 = 1024;
                        v38 = 1;
                        switch (v12) {
                            case 69: {
                                goto lab_0x407d3b;
                            }
                            case 70: {
                                goto lab_0x407c35;
                            }
                            case 71: {
                                goto lab_0x407d73;
                            }
                            case 72: {
                                goto lab_0x407c35;
                            }
                            case 73: {
                                goto lab_0x407c35;
                            }
                            case 74: {
                                goto lab_0x407c35;
                            }
                            case 75: {
                                goto lab_0x407bfc;
                            }
                            case 76: {
                                goto lab_0x407c35;
                            }
                            case 77: {
                                goto lab_0x407bbe;
                            }
                            case 78: {
                                goto lab_0x407c35;
                            }
                            case 79: {
                                goto lab_0x407c35;
                            }
                            case 80: {
                                goto lab_0x407d08;
                            }
                            case 81: {
                                goto lab_0x407c35;
                            }
                            case 82: {
                                goto lab_0x407c35;
                            }
                            case 83: {
                                goto lab_0x407c35;
                            }
                            case 84: {
                                goto lab_0x407cd8;
                            }
                            case 85: {
                                goto lab_0x407c35;
                            }
                            case 86: {
                                goto lab_0x407c35;
                            }
                            case 87: {
                                goto lab_0x407c35;
                            }
                            case 88: {
                                goto lab_0x407c35;
                            }
                            case 89: {
                                goto lab_0x407ca6;
                            }
                            case 90: {
                                goto lab_0x407c6b;
                            }
                            case 91: {
                                goto lab_0x407c35;
                            }
                            case 92: {
                                goto lab_0x407c35;
                            }
                            case 93: {
                                goto lab_0x407c35;
                            }
                            case 94: {
                                goto lab_0x407c35;
                            }
                            case 95: {
                                goto lab_0x407c35;
                            }
                            case 96: {
                                goto lab_0x407c35;
                            }
                            case 97: {
                                goto lab_0x407c35;
                            }
                            case 98: {
                                goto lab_0x407c4f;
                            }
                            case 99: {
                                goto lab_0x407bd8;
                            }
                            case 100: {
                                goto lab_0x407c35;
                            }
                            case 101: {
                                goto lab_0x407c35;
                            }
                            case 102: {
                                goto lab_0x407c35;
                            }
                            case 103: {
                                goto lab_0x407d73;
                            }
                            case 104: {
                                goto lab_0x407c35;
                            }
                            case 105: {
                                goto lab_0x407c35;
                            }
                            case 106: {
                                goto lab_0x407c35;
                            }
                            case 107: {
                                goto lab_0x407bfc;
                            }
                            case 108: {
                                goto lab_0x407c35;
                            }
                            case 109: {
                                goto lab_0x407bbe;
                            }
                            case 110: {
                                goto lab_0x407c35;
                            }
                            case 111: {
                                goto lab_0x407c35;
                            }
                            case 112: {
                                goto lab_0x407c35;
                            }
                            case 113: {
                                goto lab_0x407c35;
                            }
                            case 114: {
                                goto lab_0x407c35;
                            }
                            case 115: {
                                goto lab_0x407c35;
                            }
                            case 116: {
                                goto lab_0x407cd8;
                            }
                            default: {
                                goto lab_0x407b9a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x407b9a;
    }
  lab_0x407ac2:
    // 0x407ac2
    *a4 = v16;
    // 0x407ac5
    return v13 & 0xffffffff;
  lab_0x407b9a:
    // 0x407b9a
    g83 = v12 - 66;
    v27 = v23;
    v39 = v24;
    v26 = v17;
    v25 = v14;
    v40 = v24;
    v28 = v23;
    v41 = v24;
    v18 = v17;
    v15 = v14;
    v42 = v24;
    v29 = v23;
    v43 = v24;
    v30 = v23;
    v44 = v24;
    v31 = v23;
    v35 = v24;
    v32 = v23;
    v36 = v24;
    v33 = v23;
    v37 = v24;
    v34 = v23;
    v38 = v24;
    int64_t v46; // 0x407a20
    switch (v12) {
        case 66: {
            // 0x407d94
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x407c07;
            } else {
                // 0x407da1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407bd8;
            }
        }
        case 69: {
            goto lab_0x407d3b;
        }
        case 71: {
            goto lab_0x407d73;
        }
        case 75: {
            goto lab_0x407bfc;
        }
        case 77: {
            goto lab_0x407bbe;
        }
        case 80: {
            goto lab_0x407d08;
        }
        case 84: {
            goto lab_0x407cd8;
        }
        case 89: {
            goto lab_0x407ca6;
        }
        case 90: {
            goto lab_0x407c6b;
        }
        case 98: {
            goto lab_0x407c4f;
        }
        case 99: {
            goto lab_0x407bd8;
        }
        case 103: {
            goto lab_0x407d73;
        }
        case 107: {
            goto lab_0x407bfc;
        }
        case 109: {
            goto lab_0x407bbe;
        }
        case 116: {
            goto lab_0x407cd8;
        }
        case 119: {
            // 0x407c40
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x407c07;
            } else {
                // 0x407c45
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407bd8;
            }
        }
        default: {
            goto lab_0x407c35;
        }
    }
  lab_0x407d3b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x407d53
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x407d5f
    int64_t v51 = v48; // 0x407d62
    int64_t v52 = v37; // 0x407d62
    int64_t v53 = v49; // 0x407d62
    int32_t v54 = v50; // 0x407d62
    int64_t v55 = v49; // 0x407d62
    while (v50 != 0) {
        // 0x407d50
        v47 = (int128_t)v48 * (int128_t)v33;
        v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
        v49 = v47 > 0xffffffffffffffff ? 1 : v55;
        v50 = v54 - 1;
        v51 = v48;
        v52 = v37;
        v53 = v49;
        v54 = v50;
        v55 = v49;
    }
    goto lab_0x407c94;
  lab_0x407d73:
    // 0x407d73
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x407d7e
        int128_t v56; // 0x407d79
        uint128_t v57; // 0x407d79
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x407d7e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x407a20
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x407d83
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x407d88
                v26 = v60;
                int64_t v61; // 0x407a20
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x407bd8;
  lab_0x407bfc:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x407bff
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x407bd8;
    } else {
        goto lab_0x407c07;
    }
  lab_0x407bbe:;
    int128_t v65 = v27; // 0x407bc4
    uint128_t v66 = v65 * (int128_t)v17; // 0x407bc4
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x407c07;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x407bc9
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x407c07;
        } else {
            // 0x407bce
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x407bd8;
        }
    }
  lab_0x407d08:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x407d1b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x407d27
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x407d2a
    int64_t v73 = v70; // 0x407d2a
    while (v71 != 0) {
        // 0x407d18
        v68 = (int128_t)v69 * (int128_t)v32;
        v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
        v70 = v68 > 0xffffffffffffffff ? 1 : v73;
        v71 = v72 - 1;
        v51 = v69;
        v52 = v36;
        v53 = v70;
        v72 = v71;
        v73 = v70;
    }
    goto lab_0x407c94;
  lab_0x407cd8:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x407ceb
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x407cf7
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x407cfa
    int64_t v79 = v76; // 0x407cfa
    while (v77 != 0) {
        // 0x407ce8
        v74 = (int128_t)v75 * (int128_t)v31;
        v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
        v76 = v74 > 0xffffffffffffffff ? 1 : v79;
        v77 = v78 - 1;
        v51 = v75;
        v52 = v35;
        v53 = v76;
        v78 = v77;
        v79 = v76;
    }
    goto lab_0x407c94;
  lab_0x407ca6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x407cbb
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x407cc7
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x407cca
    int64_t v85 = v82; // 0x407cca
    while (v83 != 0) {
        // 0x407cb8
        v80 = (int128_t)v81 * (int128_t)v30;
        v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
        v82 = v80 > 0xffffffffffffffff ? 1 : v85;
        v83 = v84 - 1;
        v51 = v81;
        v52 = v44;
        v53 = v82;
        v84 = v83;
        v85 = v82;
    }
    goto lab_0x407c94;
  lab_0x407c6b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x407c83
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x407c8f
    int32_t v90 = v89; // 0x407c92
    int64_t v91 = v88; // 0x407c92
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x407c80
        v86 = (int128_t)v87 * (int128_t)v29;
        v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
        v88 = v86 > 0xffffffffffffffff ? 1 : v91;
        v89 = v90 - 1;
        v90 = v89;
        v91 = v88;
        v51 = v87;
        v52 = v43;
        v53 = v88;
    }
    goto lab_0x407c94;
  lab_0x407c4f:
    // 0x407c4f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x407c07;
    } else {
        // 0x407c58
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x407bd8;
    }
  lab_0x407bd8:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x407bdd
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x407ac2;
  lab_0x407c35:
    // 0x407c35
    *a4 = v18;
    // 0x407ac5
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x407c07:
    // 0x407c07
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x407bd8;
  lab_0x407c94:
    // 0x407c94
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x407bd8;
}
// Address range: 0x407e60 - 0x407edb
int64_t function_407e60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x407e67
    if (fileno(stream) < 0) {
        // 0x407ec7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x407e7a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x407eab
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x407ec7
            return fclose(stream);
        }
    }
    // 0x407e7c
    if ((int32_t)function_407ee0(a1, v1) == 0) {
        // 0x407ec7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x407e88
    int32_t v3 = *v2; // 0x407e90
    int64_t result = fclose(stream); // 0x407e9e
    if (v3 != 0) {
        // 0x407ed0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x407ea0
    return result;
}
// Address range: 0x407ee0 - 0x407f20
int64_t function_407ee0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x407efa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x407efa
        return fflush(stream);
    }
    // 0x407f08
    function_407f20(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407f20 - 0x407f77
int64_t function_407f20(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407f20
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x407f2a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x407f5b
    int64_t result = -1; // 0x407f64
    if (v1 != -1) {
        // 0x407f66
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407f72
    return result;
}
// Address range: 0x407f80 - 0x40805f
int64_t function_407f80(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x407f8c
    uint32_t v2 = *v1; // 0x407f8c
    int64_t v3 = a2 & 0xffffffff; // 0x407f91
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x407f94
    uint64_t v5 = (int64_t)*v4; // 0x407f94
    int64_t v6; // 0x408002
    if (v3 <= v5) {
      lab_0x407ffc_2:
        // 0x407ffc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x407f82
    int64_t v8 = v2; // 0x407f80
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x407ffc
        goto lab_0x407ffc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x407fb8
    int64_t v17; // 0x407fc6
    int64_t * v18; // 0x407fe0
    int64_t * v19; // 0x407fe3
    int64_t v20; // 0x407fee
    int64_t v21; // 0x407fc6
    while ((v16 & 0xffffffff) > v10) {
        // 0x407fc3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407fe0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407ff7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x407ffc
            goto lab_0x407ffc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x407ffc
            goto lab_0x407ffc_2;
        }
        // 0x407fb2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40803b
    int64_t * v23 = (int64_t *)v22; // 0x408040
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408043
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408040
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408057
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x407fad
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x407ffc
            goto lab_0x407ffc_2;
        }
        // 0x407fb2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407fc3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407fe0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407ff7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x407ffc
                goto lab_0x407ffc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x407ffc
                goto lab_0x407ffc_2;
            }
            // 0x407fb2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x408020
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408040
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408057
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x407ffc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408060 - 0x40867c
int64_t function_408060(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40807f
    int64_t v2 = *v1; // 0x40807f
    char * str2 = (char *)v2; // 0x40808c
    char c = *str2; // 0x40808c
    int64_t v3 = v2; // 0x4080b8
    int64_t v4 = 0; // 0x408060
    int32_t v5; // 0x408060
    int64_t v6; // 0x408060
    int64_t v7; // 0x408060
    int64_t v8; // 0x408060
    int64_t v9; // 0x408060
    int64_t v10; // 0x408060
    int64_t v11; // 0x408060
    int64_t v12; // 0x408060
    int64_t v13; // 0x408060
    int64_t str3; // 0x408060
    int64_t v14; // 0x408060
    int64_t v15; // 0x408060
    int64_t v16; // 0x408060
    int64_t v17; // 0x408060
    int32_t v18; // 0x408060
    int32_t v19; // 0x408060
    int32_t v20; // 0x408060
    int32_t v21; // 0x408060
    int32_t v22; // 0x408060
    int32_t v23; // 0x408060
    int32_t v24; // 0x408060
    int32_t v25; // 0x408060
    int32_t v26; // 0x408060
    int32_t v27; // 0x408060
    int32_t v28; // 0x408060
    int32_t v29; // 0x408060
    int64_t nmemb; // 0x408060
    int64_t v30; // 0x408060
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4080bc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4080b8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4080c8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4080ce
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408098
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4080fc
                int64_t v34; // 0x408060
                int64_t v35; // 0x408060
                if (strncmp(str, str2, n) == 0) {
                    // 0x408105
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408280;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408116
                int64_t v37 = *(int64_t *)v36; // 0x40811a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4080f0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408105
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408280;
                        }
                    }
                    // 0x408116
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
                  lab_0x408166:
                    // 0x408166
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
                        goto lab_0x4081c0;
                    } else {
                        if (v11 == 0) {
                            // 0x408330
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4081c0;
                        } else {
                            if (v39 == 0) {
                                // 0x4082e0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40818a;
                                } else {
                                    // 0x4082ec
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40818a;
                                    } else {
                                        // 0x4082fa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40818a;
                                        } else {
                                            goto lab_0x4081c0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40818a;
                            }
                        }
                    }
                }
              lab_0x4081d1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4083a6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408552
                            flockfile(g38);
                            int64_t v41 = *v1; // 0x408572
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4085bf
                            int64_t v43 = (int64_t)g38;
                            int64_t v44 = v43; // 0x4085d9
                            int64_t v45; // 0x4085db
                            if (*(char *)v42 != 0) {
                                // 0x4085db
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g38;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4085d3
                            while (v17 + nmemb != v42) {
                                // 0x4085d5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4085db
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g38;
                                }
                                // 0x4085c8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x408600
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g38);
                            v40 = *v1;
                        } else {
                            // 0x4083b4
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40850f
                        free((int64_t *)v17);
                    }
                    // 0x408409
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408420
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4082ce
                    return 63;
                }
                // 0x4081f0
                v5 = v39;
                if (v13 != 0) {
                    // 0x408274
                    v35 = v13;
                    v34 = v25;
                  lab_0x408280:;
                    int32_t * v49 = (int32_t *)a7; // 0x408290
                    uint32_t v50 = *v49; // 0x408290
                    int64_t v51 = v50; // 0x408290
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40829a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4082a3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4084cf
                                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40847a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4082ce
                            return 63;
                        }
                        // 0x408318
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40862f
                                    __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40852d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408540
                                // 0x4082ce
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40843e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408452
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4082bb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4082be
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4082c2
                    int64_t result = v59; // 0x4082c8
                    if (v58 != 0) {
                        // 0x4082ca
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4082ce
                    return result;
                }
            } else {
                // 0x4080ce
                v5 = v32;
            }
            // break -> 0x4081f5
            break;
        }
    }
    // 0x4081f5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40820d
        if (*(char *)(v60 + 1) != 45) {
            // 0x408217
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4082ce
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408359
        __fprintf_chk(g38, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408246
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408256
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4081c0:
    // 0x4081c0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4081c0
    int64_t v63 = *(int64_t *)v62; // 0x4081c4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4081d1
        goto lab_0x4081d1;
    }
    goto lab_0x408166;
  lab_0x40818a:
    // 0x40818a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408060
    int32_t v65; // 0x408060
    int32_t v66; // 0x408060
    if (v27 != 0) {
        goto lab_0x4081c0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408340
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4081c0;
            } else {
                goto lab_0x4081b1;
            }
        } else {
            // 0x4081a5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40849c
                int64_t v67 = (int64_t)mem; // 0x40849c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4081c0;
                } else {
                    // 0x4084af
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4081b1;
                }
            } else {
                goto lab_0x4081b1;
            }
        }
    }
  lab_0x4081b1:
    // 0x4081b1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4081c0;
}
// Address range: 0x408680 - 0x408c46
int64_t function_408680(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4086a1
    if (v3 < 1) {
        // 0x40885e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40869d
    int32_t v5 = *(int32_t *)a7; // 0x4086a9
    uint64_t v6 = a1 & 0xffffffff; // 0x4086ab
    int64_t v7 = v2; // 0x4086b0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4086b3
    *v8 = 0;
    int64_t v9; // 0x408680
    int64_t v10; // 0x408680
    int64_t v11; // 0x408680
    int64_t v12; // 0x408680
    int64_t str; // 0x408680
    int64_t v13; // 0x408680
    int64_t v14; // 0x408680
    int64_t v15; // 0x408680
    int64_t v16; // 0x408680
    int64_t v17; // 0x408680
    int32_t v18; // 0x408680
    char v19; // 0x408680
    if (v5 == 0) {
        // 0x408898
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4086ca;
    } else {
        // 0x4086c3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x408710
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x408713
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4087d8;
            } else {
                int64_t v22 = v7 + 1; // 0x408726
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x408736
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4087ec;
                } else {
                    goto lab_0x408748;
                }
            }
        } else {
            goto lab_0x4086ca;
        }
    }
  lab_0x4086ca:
    // 0x4086ca
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4086d0
    *v24 = 0;
    int64_t v25; // 0x408680
    int64_t v26; // 0x408680
    int64_t v27; // 0x408680
    switch (*(char *)&v2) {
        case 45: {
            // 0x4087c0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4087cd;
        }
        case 43: {
            // 0x408ad0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4087cd;
        }
        default: {
            // 0x4086ec
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x408a4f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408b68
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4087cd;
                } else {
                    // 0x408a5d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4086fa;
                }
            } else {
                goto lab_0x4086fa;
            }
        }
    }
  lab_0x4087d8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4087df
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x408748;
    } else {
        goto lab_0x4087ec;
    }
  lab_0x4086fa:
    // 0x4086fa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4087cd;
  lab_0x4087cd:
    // 0x4087cd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4087d8;
  lab_0x408748:;
    uint32_t v30 = *(int32_t *)a7; // 0x408748
    int64_t v31 = v30; // 0x408748
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40874a
    if ((int64_t)*v32 > v31) {
        // 0x40874f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x408752
    if (*v33 > v30) {
        // 0x408757
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40875a
    int64_t v35 = v31; // 0x40875e
    int64_t v36 = v15; // 0x40875e
    int64_t v37; // 0x408680
    int64_t v38; // 0x408680
    int64_t v39; // 0x408680
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4088c8
        int64_t v41 = v40; // 0x4088c8
        v2 = v41;
        int64_t v42; // 0x408680
        if (*v33 == v40) {
            // 0x408ab0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408ab8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4088d4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4088d8
                function_407f80(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4088e8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4088f1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4088fa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x408911
            int64_t v47 = v45 & 0xffffffff; // 0x408915
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40891e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x408924
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x408926;
                }
            }
            int64_t v48 = v47 + 1; // 0x408900
            int64_t v49 = v48 & 0xffffffff; // 0x408900
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x408911
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40891e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x408924
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x408926;
                    }
                }
                // 0x408900
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408ac8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x408926;
    } else {
        goto lab_0x408764;
    }
  lab_0x4087ec:
    // 0x4087ec
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4087ef
    int64_t v51 = v12; // 0x4087ef
    int64_t v52 = v14; // 0x4087ef
    if (*(char *)v10 == 0) {
        goto lab_0x408748;
    } else {
        goto lab_0x4087f5;
    }
  lab_0x408764:;
    int32_t v53 = v35; // 0x408764
    int64_t v54; // 0x408680
    int64_t v55; // 0x408680
    int64_t v56; // 0x408680
    int64_t v57; // 0x408680
    int64_t v58; // 0x408680
    int64_t v59; // 0x408680
    char * v60; // 0x408680
    int64_t v61; // 0x408680
    int64_t v62; // 0x408779
    int64_t v63; // 0x408680
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4088b3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4088b6;
    } else {
        // 0x40876c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408680
        int64_t v66 = v65 ? -1 : 1; // 0x408780
        int64_t v67 = (int64_t)"--"; // 0x408680
        int64_t v68 = v62; // 0x408680
        int64_t v69 = 3; // 0x408780
        unsigned char v70 = *(char *)v68; // 0x408780
        char v71 = *(char *)v67; // 0x408780
        char v72 = v71; // 0x408780
        bool v73 = false; // 0x408780
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
            // 0x408870
            if (*(char *)v62 == 45) {
                // 0x408930
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x408930
                if (c == 0) {
                    goto lab_0x40887a;
                } else {
                    // 0x40893d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4089c0;
                    } else {
                        if (c == 45) {
                            // 0x408ba3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x408a15;
                        } else {
                            // 0x40894e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4089c0;
                            } else {
                                // 0x408953
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408974;
                                } else {
                                    // 0x40895a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4089c0;
                                    } else {
                                        goto lab_0x408974;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40887a;
            }
        } else {
            uint32_t v75 = *v33; // 0x408790
            v2 = v75;
            int32_t v76 = *v32; // 0x408793
            int64_t v77 = v35 + 1; // 0x408796
            int32_t v78 = v77; // 0x408799
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x408b00
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4087a7
                    function_407f80(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4087b5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4088b6;
        }
    }
  lab_0x4087f5:;
    // 0x4087f5
    int64_t v79; // bp-104, 0x408680
    int64_t v80 = &v79; // 0x40868a
    int64_t v81 = v50 + 1; // 0x4087f5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4087fc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x408801
    *v83 = v81;
    char v84 = *(char *)v2; // 0x408805
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x408809
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x408811
    *v86 = v84;
    char * str2 = (char *)v52; // 0x408816
    int32_t c2 = v84; // 0x408816
    char * found_char_pos = strchr(str2, c2); // 0x408816
    int64_t v87 = *v82; // 0x40881b
    v2 = v87;
    int64_t v88 = *v85; // 0x408825
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x408830
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x408b20
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x408aed
        *(int32_t *)(v1 + 8) = c2;
        // 0x40885e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x408816
    char v91 = *(char *)(v90 + 1); // 0x40884b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x408805
        if (v91 != 58) {
            // 0x40885e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408a74
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408b78
                *v8 = 0;
            } else {
                // 0x408b5c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x408a9e
            *v83 = 0;
            // 0x40885e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x408a7e
        if (v93 != 0) {
            // 0x408b10
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x408a9e
            *v83 = 0;
            // 0x40885e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408a91
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x408a9e
            *v83 = 0;
            // 0x40885e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x408bda
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x408b8a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408b91
        // 0x408a9e
        *v83 = 0;
        // 0x40885e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4089e9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4089eb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x408c10
                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408bc1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408bc8
            // 0x40885e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4089f6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4089fa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x408a15;
  lab_0x408926:
    // 0x408926
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x408764;
  lab_0x408a15:;
    int64_t v99 = function_408060(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408a33
    // 0x40885e
    return v99 & 0xffffffff;
  lab_0x4088b6:;
    int32_t v100 = v55; // 0x4088b6
    if (v100 != (int32_t)v59) {
        // 0x4088ba
        *(int32_t *)a7 = v100;
    }
    // 0x40885e
    return 0xffffffff;
  lab_0x40887a:
    // 0x40887a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408881
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40885e
    return v99 & 0xffffffff;
  lab_0x4089c0:
    // 0x4089c0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4087f5;
  lab_0x408974:
    // 0x408974
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408060(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40899a
    if ((int32_t)v101 != -1) {
        // 0x40885e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4089af
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4089c0;
}
// Address range: 0x408c50 - 0x408ca6
int64_t function_408c50(int64_t a1) {
    // 0x408c50
    *(int32_t *)&g74 = g31;
    *(int32_t *)&g75 = g30;
    int64_t v1; // 0x408c50
    int64_t result = function_408680(v1, v1, v1, v1, v1, v1, &g74, a1 & 0xffffffff); // 0x408c76
    g31 = *(int32_t *)&g74;
    g80 = (char *)g77;
    *(int32_t *)&g29 = g76;
    return result;
}
// Address range: 0x408cb0 - 0x408cc8
int64_t function_408cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408cb0
    return function_408c50(1);
}
// Address range: 0x408cd0 - 0x408ce3
int64_t function_408cd0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x408cd0
    return function_408c50(0);
}
// Address range: 0x408cf0 - 0x408d05
int64_t function_408cf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408cf0
    return function_408680(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x408d10 - 0x408d26
int64_t function_408d10(void) {
    // 0x408d10
    return function_408c50(0);
}
// Address range: 0x408d30 - 0x408d48
int64_t function_408d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408d30
    return function_408680(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408d50 - 0x408dca
int64_t function_408d50(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x408d5b
    int64_t v2 = (int64_t)&g11; // 0x408d5b
    int32_t * pwc; // 0x408d50
    int64_t v3; // 0x408d50
    int64_t n; // 0x408d50
    if (a2 == 0) {
        goto lab_0x408da2;
    } else {
        // 0x408d5d
        if (a3 == 0) {
            // 0x408d88
            return -2;
        }
        // 0x408d69
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x408da2;
        } else {
            goto lab_0x408d74;
        }
    }
  lab_0x408da2:
    // 0x408da2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408d50
    pwc = (int32_t *)&v4;
    goto lab_0x408d74;
  lab_0x408d74:;
    char * wstr = (char *)v3; // 0x408d7a
    int64_t ps; // 0x408d50
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x408d7a
    int64_t result = v5; // 0x408d7a
    if (v5 < 0xfffffffe) {
        // 0x408d88
        return result;
    }
    int64_t result2 = result; // 0x408db9
    if ((char)function_409170(0, v3) == 0) {
        // 0x408dbb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408d88
    return result2;
}
// Address range: 0x408dd0 - 0x408ed4
int64_t function_408dd0(int64_t result, uint64_t a2, int64_t a3) {
    // 0x408dd0
    if (a3 == 0) {
        // 0x408e09
        return 0;
    }
    int64_t v1 = result; // 0x408ddc
    int64_t v2 = a3; // 0x408ddc
    int64_t result2; // 0x408dd0
    if (result % 8 != 0) {
        char v3 = a2; // 0x408dde
        int64_t v4 = result; // 0x408de1
        if ((char)result == v3) {
            // 0x408e09
            return result;
        }
        int64_t v5 = a3; // 0x408de1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x408df0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x408e10;
            }
            // 0x408df6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x408e09
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x408e09
        return result2;
    }
  lab_0x408e10:;
    int64_t result3 = v1; // 0x408e3d
    int64_t v6 = v2; // 0x408e3d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x408e1f
        int64_t v8 = 0x10000 * v7 | v7; // 0x408e2c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x408e36
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x408e56
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x408e85
            int64_t v12 = v1 + 8; // 0x408e89
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x408e73
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x408e9c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x408e93
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x408e09
                return 0;
            }
        }
    }
  lab_0x408e9c:;
    char v14 = a2; // 0x408e9c
    if (*(char *)result3 == v14) {
        // 0x408e09
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x408eb0
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x408e09
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x408e09
    return result2;
}
// Address range: 0x408ee0 - 0x40903a
int64_t function_408ee0(int64_t a1, int64_t a2) {
    char v1 = a1;
    char * str2 = (char *)a1;
    int64_t str = (int64_t)"HUP"; // 0x408f01
    int64_t v2; // 0x408ee0
    int64_t v3; // 0x408ee0
    int64_t v4; // 0x408ee0
    int32_t v5; // 0x408f70
    int64_t v6; // 0x408f75
    int32_t v7; // 0x408f78
    int64_t v8; // 0x408f7d
    int64_t v9; // 0x408f91
    bool v10; // 0x408ee0
    if (v1 != 57 && (int32_t)v1 >= 57) {
        int64_t v11 = 0;
        while (strcmp((char *)str, str2) != 0) {
            int64_t v12 = v11 + 1; // 0x408f08
            str += 12;
            if ((int32_t)v12 == 35) {
                // 0x408f70
                v5 = __libc_current_sigrtmin();
                v6 = v5;
                v7 = __libc_current_sigrtmax();
                v8 = v7;
                if (v5 < 1) {
                    goto lab_0x408f9c;
                } else {
                    // 0x408f84
                    v9 = v10 ? -1 : 1;
                    v2 = (int64_t)"RTMIN";
                    v4 = a1;
                    v3 = 5;
                    goto lab_dec_label_pc_unknown;
                }
            }
            v11 = v12 & 0xffffffff;
        }
        int32_t v13 = *(int32_t *)(12 * v11 + (int64_t)&g34);
        *(int32_t *)a2 = v13;
        // 0x408f34
        return v13 >> 31;
    }
    // 0x408f40
    char * endptr; // bp-48, 0x408ee0
    int32_t str_as_l = strtol(str2, &endptr, 10); // 0x408f4a
    int32_t v14 = str_as_l; // 0x408f57
    if (str_as_l < 65 == *endptr == 0) {
      lab_0x408f2e:
        // 0x408f2e
        *(int32_t *)a2 = v14;
        // 0x408f34
        return v14 >> 31;
    }
  lab_0x408f60:
    // 0x408f60
    *(int32_t *)a2 = -1;
    // 0x408f34
    return 0xffffffff;
  lab_0x408f9c:;
    int64_t v15; // 0x408ee0
    int64_t v16; // 0x408ee0
    int64_t v17; // 0x408ee0
    int64_t v18; // 0x408fad
    if (v7 < 1) {
        goto lab_0x408f60;
    } else {
        // 0x408fa0
        v18 = v10 ? -1 : 1;
        v15 = (int64_t)"RTMAX";
        v17 = a1;
        v16 = 5;
        goto lab_dec_label_pc_unknown_2;
    }
  lab_dec_label_pc_unknown:;
    unsigned char v19 = *(char *)v4; // 0x408f91
    char v20 = *(char *)v2; // 0x408f91
    char v21 = v20; // 0x408f91
    bool v22 = false; // 0x408f91
    if (v19 == v20) {
        int64_t v23 = v3 - 1; // 0x408f91
        v2 += v9;
        v4 += v9;
        v3 = v23;
        v21 = v19;
        v22 = true;
        if (v23 == 0) {
            goto lab_dec_label_pc_unknown_4;
        } else {
            goto lab_dec_label_pc_unknown;
        }
    } else {
        goto lab_dec_label_pc_unknown_4;
    }
  lab_dec_label_pc_unknown_2:;
    unsigned char v24 = *(char *)v17; // 0x408fad
    char v25 = *(char *)v15; // 0x408fad
    char v26 = v25; // 0x408fad
    bool v27 = false; // 0x408fad
    if (v24 == v25) {
        int64_t v28 = v16 - 1; // 0x408fad
        v15 += v18;
        v17 += v18;
        v16 = v28;
        v26 = v24;
        v27 = true;
        if (v28 == 0) {
            goto lab_dec_label_pc_unknown_6;
        } else {
            goto lab_dec_label_pc_unknown_2;
        }
    } else {
        goto lab_dec_label_pc_unknown_6;
    }
  lab_dec_label_pc_unknown_4:;
    unsigned char v29 = v21;
    if ((v19 >= v29 && !v22) == v19 < v29) {
        int32_t str_as_l2 = strtol((char *)(a1 + 5), &endptr, 10); // 0x409007
        if (str_as_l2 < 0 | *endptr != 0) {
            goto lab_0x408f60;
        } else {
            if (0x100000000 * (v8 - v6) >> 32 < (int64_t)str_as_l2) {
                goto lab_0x408f60;
            } else {
                // 0x409032
                v14 = str_as_l2 + v5;
                goto lab_0x408f2e;
            }
        }
    } else {
        goto lab_0x408f9c;
    }
  lab_dec_label_pc_unknown_6:;
    unsigned char v30 = v26;
    if ((v24 >= v30 && !v27) != v24 < v30) {
        goto lab_0x408f60;
    } else {
        int32_t str_as_l3 = strtol((char *)(a1 + 5), &endptr, 10); // 0x408fc7
        if (*endptr != 0) {
            goto lab_0x408f60;
        } else {
            if (0x100000000 * (v6 - v8) >> 32 > (int64_t)str_as_l3) {
                goto lab_0x408f60;
            } else {
                if (str_as_l3 >= 0 == (str_as_l3 != 0)) {
                    goto lab_0x408f60;
                } else {
                    // 0x408fee
                    v14 = str_as_l3 + v7;
                    goto lab_0x408f2e;
                }
            }
        }
    }
}
// Address range: 0x409040 - 0x40910c
int64_t function_409040(int64_t a1, int64_t * str, int64_t a3) {
    int64_t v1 = (int64_t)str;
    uint64_t v2 = a1 & 0xffffffff; // 0x40904e
    int32_t v3 = a1;
    int64_t v4 = (int64_t)&g34; // 0x409050
    int64_t v5 = 0;
    int32_t v6; // 0x409040
    int64_t result; // 0x409040
    while (*(int32_t *)v4 != v3) {
        int64_t v7 = v5 + 1; // 0x409058
        v4 += 12;
        if ((int32_t)v7 == 35) {
            int32_t v8 = __libc_current_sigrtmin(); // 0x409088
            int32_t v9 = __libc_current_sigrtmax(); // 0x409090
            result = 0xffffffff;
            if (v2 < (int64_t)v8 || v2 > (int64_t)v9) {
                return result;
            } else {
                if (v2 > (int64_t)((v9 - v8 >> 1) + v8)) {
                    // 0x4090ac
                    *(int32_t *)str = 0x414d5452;
                    *(int16_t *)(v1 + 4) = 88;
                    v6 = v9;
                    goto lab_0x4090bf;
                } else {
                    // 0x4090f0
                    *(int32_t *)str = 0x494d5452;
                    *(int16_t *)(v1 + 4) = 78;
                    v6 = v8;
                    goto lab_0x4090bf;
                }
            }
        }
        v5 = v7 & 0xffffffff;
    }
    // 0x409068
    strcpy((char *)str, (char *)(12 * v5 + (int64_t)"HUP"));
    result = 0;
  lab_0x40907e:
    // 0x40907e
    return result;
  lab_0x4090bf:;
    uint32_t v10 = v3 - v6; // 0x4090c1
    result = 0;
    if (v10 != 0) {
        // 0x4090c6
        __sprintf_chk((char *)(v1 + 5), 1, -1, "%+d", (int64_t)v10);
        return 0;
    }
    return result;
}
// Address range: 0x409110 - 0x40916d
int64_t function_409110(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409117
    int64_t v2; // 0x409110
    int64_t result = function_407e60(a1, v2); // 0x409128
    if ((v2 & 32) != 0) {
        // 0x409150
        if ((int32_t)result == 0) {
            // 0x409154
            *__errno_location() = 0;
        }
        // 0x40914a
        return 0xffffffff;
    }
    // 0x409131
    if ((int32_t)result == 0) {
        // 0x40914a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x409138
    if (v1 == 0) {
        // 0x40913a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40914a
    return result2;
}
// Address range: 0x409170 - 0x4091ce
int64_t function_409170(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x409176
    if (locale == NULL) {
        // 0x4091a3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x409176
    bool v2; // 0x409170
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x409170
    int64_t v5 = v1; // 0x409170
    int64_t v6 = 2; // 0x409195
    unsigned char v7 = *(char *)v5; // 0x409195
    char v8 = *(char *)v4; // 0x409195
    char v9 = v8; // 0x409195
    bool v10 = false; // 0x409195
    while (v7 == v8) {
        // 0x409188
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4091a1
    int64_t v13 = v1; // 0x4091a1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4091a3
        return 0;
    }
    int64_t v14 = 6; // 0x4091a1
    unsigned char v15 = *(char *)v13; // 0x4091bd
    char v16 = *(char *)v12; // 0x4091bd
    char v17 = v16; // 0x4091bd
    bool v18 = false; // 0x4091bd
    while (v15 == v16) {
        // 0x4091b0
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
// Address range: 0x4091d0 - 0x409732
int64_t function_4091d0(void) {
    char * v1 = nl_langinfo(14); // 0x4091e6
    char * v2 = g78; // 0x4091eb
    char * v3; // 0x4091d0
    int64_t v4; // 0x4091d0
    int64_t v5; // 0x4091d0
    int64_t v6; // 0x4091d0
    int64_t v7; // 0x4091d0
    int32_t size; // 0x4091d0
    int32_t size2; // 0x4091d0
    int32_t len; // 0x4092a2
    int64_t v8; // 0x4092a2
    char * env_val; // 0x40928d
    if (v2 == NULL) {
        // 0x409288
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4092f5;
        } else {
            // 0x40929a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4092f5;
            } else {
                // 0x40929f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40928d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409725
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4092f5;
                    } else {
                        // 0x409699
                        size2 = len + 14;
                        goto lab_0x4092bb;
                    }
                } else {
                    goto lab_0x4092bb;
                }
            }
        }
    } else {
        // 0x4091d0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40920a;
    }
  lab_0x40953c:;
    // 0x40953c
    struct _IO_FILE * stream; // 0x40937b
    int32_t v10 = __uflow(stream); // 0x40953f
    int64_t v11; // 0x4091d0
    int64_t v12 = v11; // 0x409549
    int64_t v13; // 0x4091d0
    int64_t v14 = v13; // 0x409549
    int32_t v15 = v10; // 0x409549
    int64_t v16; // 0x4091d0
    int64_t v17 = v16; // 0x409549
    int64_t v18 = v11; // 0x409549
    int64_t v19 = v13; // 0x409549
    int64_t v20 = v16; // 0x409549
    if (v10 == -1) {
        // break -> 0x40954f
        goto lab_0x40954f;
    }
    goto lab_0x4093c9;
  lab_0x4093be:;
    // 0x4093be
    int64_t v90; // 0x4091d0
    int64_t * v32; // 0x4093b0
    *v32 = v90 + 1;
    int64_t v89; // 0x4091d0
    v12 = v89;
    int64_t v91; // 0x4091d0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4091d0
    v17 = v92;
    goto lab_0x4093c9;
  lab_0x4093c9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4091d0
    int32_t v25; // bp-120, 0x4091d0
    int32_t v26; // bp-184, 0x4091d0
    int64_t v27; // 0x40937b
    int64_t v28; // 0x409398
    int64_t v29; // 0x40939d
    int64_t * v30; // 0x4093b4
    switch (c) {
        case 32: {
            goto lab_0x4093b0;
        }
        case 10: {
            goto lab_0x4093b0;
        }
        case 9: {
            goto lab_0x4093b0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4095a1
            int32_t v33; // 0x4091d0
            char v34; // 0x4091d0
            int32_t v35; // 0x4095ae
            if (v31 < *v30) {
                // 0x409580
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4095ab
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4095a1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409580
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4095ab
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409590
                v36 = v33;
            }
            // 0x40967f
            if (v36 == -1) {
                // break -> 0x40954f
                break;
            }
            goto lab_0x4093b0;
        }
        default: {
            // 0x4093df
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40954f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409408
            int64_t v39 = v37 + 4; // 0x40940a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409416
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409418
            while (v41 == 0) {
                // 0x409408
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409436
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x409442
            int64_t v45 = v43 + 4; // 0x409444
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x409450
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x409452
            while (v47 == 0) {
                // 0x409442
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40943f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409468
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409478
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40947c
            int64_t v52 = v51 + v48; // 0x409485
            int64_t * mem; // 0x4091d0
            int64_t v53; // 0x4091d0
            int64_t v54; // 0x4091d0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4095bb
                int64_t v56 = v55 + 3; // 0x4095c7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4094a1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4094b0
            if (mem == NULL) {
                // 0x4096dc
                free((int64_t *)v21);
                function_407e60(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x409354;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4094c8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4094d2
            uint32_t v62 = (int32_t)v59; // 0x4094d5
            int64_t v63; // 0x4091d0
            if (v62 >= 8) {
                // 0x4095e4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4095fe
                int64_t v66 = v61 - v65; // 0x409602
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40960d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40961e
                    int64_t v70 = v69 & 0xffffffff; // 0x40961e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40961b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4096af
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4094e7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4094eb
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
            int64_t v73 = v51 + 1; // 0x4094fb
            int64_t v74 = v60 - 1; // 0x4094ff
            uint32_t v75 = (int32_t)v73; // 0x409504
            int64_t v76; // 0x4091d0
            if (v75 >= 8) {
                // 0x409632
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40963c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40964c
                int64_t v80 = v74 - v79; // 0x409650
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40965b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40966b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409669
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4096c6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4096ce
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409516
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40951a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409713
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40952e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4093be;
            } else {
                goto lab_0x40953c;
            }
        }
    }
  lab_0x4093b0:;
    int64_t v93 = v23; // 0x4091d0
    int64_t v94 = v22; // 0x4091d0
    int64_t v95 = v21; // 0x4091d0
    goto lab_0x4093b0_2;
  lab_0x4092f5:;
    int64_t * mem3 = malloc(size); // 0x4092f5
    int64_t v97 = (int64_t)&g11; // 0x409300
    int64_t v98; // 0x4091d0
    int64_t path; // 0x4091d0
    if (mem3 == NULL) {
        goto lab_0x4092d2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4092f5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x409316;
    }
  lab_0x40920a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x4091fd
    char v100 = *v3; // 0x40920a
    int64_t v101; // 0x4091d0
    if (v100 == 0) {
        // 0x409264
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4091d0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4091d0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x409250
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x409257;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x409220
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40922d
        char v107 = *(char *)v106; // 0x409232
        v102 = v107;
        if (v107 == 0) {
            // 0x409264
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40923b
    v104 = v103 + 1;
  lab_0x409257:
    // 0x409264
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4092d2:;
    char * v108 = (char *)v97;
    g78 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40920a;
  lab_0x409316:;
    int64_t v109 = v98 + path; // 0x409316
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x409342
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x409371
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4096a2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x409395
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4093b0_2:;
                uint64_t v96 = *v32; // 0x4093b0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40953c;
                } else {
                    goto lab_0x4093be;
                }
            }
          lab_0x40954f:
            // 0x40954f
            function_407e60(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x40956e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x409354;
  lab_0x4092bb:;
    int64_t * mem4 = malloc(size2); // 0x4092bb
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x409361
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x409316;
    } else {
        goto lab_0x4092d2;
    }
  lab_0x409354:
    // 0x409354
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4092d2;
}
// Address range: 0x409740 - 0x40974e
int64_t function_409740(int64_t a1, int64_t a2) {
    // 0x409740
    int64_t v1; // 0x409740
    return function_409750(a1, 0, 3, v1);
}
// Address range: 0x409750 - 0x409885
int64_t function_409750(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x409830
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40978c
    int64_t v2; // 0x409750
    if (g79 < 0) {
        int64_t v3 = function_409750(fd, 0, v1, a4); // 0x4097d4
        int64_t v4 = v3 & 0xffffffff; // 0x4097d9
        if ((int32_t)v3 < 0) {
            // 0x4097c0
            return v4 & 0xffffffff;
        }
        // 0x4097df
        v2 = v4;
        if (g79 != -1) {
            // 0x4097c0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4097a7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4097b6
            g79 = 1;
            // 0x4097c0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_409750(fd & 0xffffffff, 0, v1, a4); // 0x409867
        int64_t v7 = v6 & 0xffffffff; // 0x40986c
        if ((int32_t)v6 < 0) {
            // 0x4097c0
            return v7 & 0xffffffff;
        }
        // 0x409876
        g79 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4097ef
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x4097fa
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4097c0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x409812
    close(fd2);
    // 0x4097c0
    return 0xffffffff;
}
// Address range: 0x409890 - 0x4098ed
int64_t function_409890(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409890
    return function_401970();
}
// Address range: 0x4098f0 - 0x4098f1
int64_t function_4098f0(void) {
    // 0x4098f0
    int64_t result; // 0x4098f0
    return result;
}
// Address range: 0x409900 - 0x409918
int64_t function_409900(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409900
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x409918 - 0x409938
int64_t function_409918(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x409922
    while (*(int64_t *)v1 != -1) {
        // 0x409923
        v1 -= 8;
    }
    // 0x409934
    return result;
}
