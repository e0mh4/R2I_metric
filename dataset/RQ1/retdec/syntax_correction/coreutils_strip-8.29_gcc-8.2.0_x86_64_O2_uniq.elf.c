#include "decompile_retdec.h"
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
// Address range: 0x401940 - 0x40239c
int64_t function_401940(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401947
    char * env_val = getenv("POSIXLY_CORRECT"); // 0x40195c
    int64_t v2 = env_val != NULL; // 0x401979
    function_403410(a2);
    setlocale(LC_ALL, (char *)&g15);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g49 = function_403190(3, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    int64_t v3; // 0x401940
    function_407660(0x402eb0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3);
    g47 = 0;
    g48 = 0;
    g46 = -1;
    *(char *)&g43 = 1;
    *(char *)&g44 = 1;
    *(char *)&g42 = 0;
    g45 = 1;
    g40 = 0;
    int32_t v4 = 0; // bp-184, 0x401a1d
    int64_t v5 = (int64_t)&v4 + 48;
    int32_t v6 = 10; // 0x401a29
    int64_t v7 = 0; // 0x401a29
    int64_t v8 = 0; // 0x401a29
    int64_t v9 = 0; // 0x401a29
    int32_t v10; // 0x401940
    int32_t v11; // 0x401940
    int64_t v12; // 0x401940
    int64_t v13; // 0x401940
    int64_t v14; // 0x401940
    int64_t v15; // 0x401940
    int64_t v16; // 0x401940
    int64_t v17; // 0x401940
    int64_t v18; // 0x401940
    int64_t v19; // 0x401940
    int64_t v20; // 0x401940
    int64_t v21; // 0x401940
    int64_t v22; // 0x401940
    int64_t v23; // 0x401940
    int64_t v24; // 0x401940
    int64_t v25; // 0x401940
    int64_t v26; // 0x401940
    int64_t v27; // 0x401940
    int64_t v28; // 0x401940
    int64_t v29; // 0x401940
    int64_t v30; // 0x401940
    int64_t v31; // 0x401940
    int64_t v32; // 0x401940
    int32_t v33; // 0x401940
    int32_t v34; // 0x401940
    int32_t v35; // 0x401940
    int32_t v36; // 0x401940
    int64_t v37; // bp-88, 0x401940
    int64_t v38; // 0x401a83
    while (true) {
      lab_0x401a62_2:;
        int64_t v39 = v9;
        int64_t v40 = v17;
        int64_t v41 = v8;
        int64_t v42 = v7;
        int64_t v43 = v29;
        int32_t v44 = v6;
        v33 = v44;
        v28 = v43;
        v23 = v42;
        v22 = v41;
        v16 = v40;
        v12 = v39;
        if ((int32_t)v41 != -1) {
            int32_t v45 = v42; // 0x401a67
            v33 = v44;
            v28 = v43;
            v23 = v42;
            v22 = v41;
            v16 = v40;
            v12 = v39;
            v10 = v45;
            v13 = v39;
            v18 = v40;
            v24 = v42;
            v34 = v44;
            if (env_val != NULL != v45 != 0) {
                while (true) {
                  lab_0x401a70_2:
                    // 0x401a70
                    v35 = v34;
                    v25 = v24;
                    v19 = v18;
                    v14 = v13;
                    v38 = function_406d40(v1, a2, "-0123456789Dcdf:is:uw:z", &g3, 0, v19);
                    int32_t v46 = v38;
                    switch (v46) {
                        case -1: {
                            goto lab_0x401a70;
                        }
                        case 100: {
                            // 0x402045
                            *(char *)&g44 = 0;
                            v36 = v35;
                            v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                            v26 = v25;
                            v20 = v19;
                            v15 = 1;
                            goto lab_0x401a67_2;
                        }
                        default: {
                            if (v46 > 100) {
                                if (v46 == 117) {
                                    // 0x402033
                                    *(char *)&g43 = 0;
                                    v36 = v35;
                                    v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                    v26 = v25;
                                    v20 = v19;
                                    v15 = 1;
                                } else {
                                    if (v46 > 117) {
                                        // 0x401b48
                                        v36 = 0;
                                        v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                        v26 = v25;
                                        v20 = v19;
                                        v15 = v14;
                                        if (v46 != 122) {
                                            if (v46 != 128) {
                                                if (v46 != 119) {
                                                    // 0x401b39
                                                    function_4026b0(1);
                                                    // UNREACHABLE
                                                }
                                                // 0x401c49
                                                g46 = function_402500((int64_t)g62, "invalid number of bytes to compare");
                                                v36 = v35;
                                                v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                                v26 = v25;
                                                v20 = v19;
                                                v15 = v14;
                                            } else {
                                                // 0x401b5c
                                                if (g62 == NULL) {
                                                    // 0x402181
                                                    g39 = 3;
                                                    v36 = v35;
                                                    v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                                    v26 = v25;
                                                    v20 = v19;
                                                    v15 = v14;
                                                } else {
                                                    int64_t v47 = function_402dd0("--group", (int64_t)g62, g5, (int64_t *)&g4, 4, g22); // 0x401b88
                                                    g39 = *(int32_t *)(4 * v47 + (int64_t)&g4);
                                                    v36 = v35;
                                                    v30 = (int64_t)&g5;
                                                    v26 = v25;
                                                    v20 = g22;
                                                    v15 = v14;
                                                }
                                            }
                                        }
                                    } else {
                                        if (v46 == 105) {
                                            // 0x402027
                                            g41 = 1;
                                            v36 = v35;
                                            v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                            v26 = v25;
                                            v20 = v19;
                                            v15 = v14;
                                        } else {
                                            if (v46 != 115) {
                                                if (v46 != 102) {
                                                    // 0x401b39
                                                    function_4026b0(1);
                                                    // UNREACHABLE
                                                }
                                                // 0x401fc7
                                                v4 = 2;
                                                g48 = function_402500((int64_t)g62, "invalid number of fields to skip");
                                                v36 = v35;
                                                v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                                v26 = v25;
                                                v20 = v19;
                                                v15 = v14;
                                            } else {
                                                // 0x401ab7
                                                g47 = function_402500((int64_t)g62, "invalid number of bytes to skip");
                                                v36 = v35;
                                                v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                                v26 = v25;
                                                v20 = v19;
                                                v15 = v14;
                                            }
                                        }
                                    }
                                }
                                goto lab_0x401a67_2;
                            } else {
                                if (v46 > 57) {
                                    if (v46 != 68) {
                                        if (v46 != 99) {
                                            // 0x401b39
                                            function_4026b0(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401c79
                                        g45 = 0;
                                        v36 = v35;
                                        v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                        v26 = v25;
                                        v20 = v19;
                                        v15 = 1;
                                    } else {
                                        // 0x401be9
                                        *(char *)&g44 = 0;
                                        *(char *)&g42 = 1;
                                        if (g62 == NULL) {
                                            // 0x40216c
                                            g40 = 0;
                                            v36 = v35;
                                            v30 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                            v26 = v25;
                                            v20 = v19;
                                            v15 = 1;
                                        } else {
                                            int64_t v48 = function_402dd0("--all-repeated", (int64_t)g62, g7, (int64_t *)&g6, 4, g22); // 0x401c29
                                            g40 = *(int32_t *)(4 * v48 + (int64_t)&g6);
                                            v36 = v35;
                                            v30 = (int64_t)&g7;
                                            v26 = v25;
                                            v20 = g22;
                                            v15 = 1;
                                        }
                                    }
                                    goto lab_0x401a67_2;
                                } else {
                                    if (v46 > 47) {
                                        // 0x401feb
                                        if (v4 == 2) {
                                            // 0x40227b
                                            v21 = 0x100000000 * v38 - 0x3000000000 >> 32;
                                            v32 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                            goto lab_0x402014;
                                        } else {
                                            int64_t v49 = g48; // 0x401ff5
                                            if (v49 < 0x199999999999999a) {
                                                int64_t v50 = 10 * v49 + (0x100000000 * v38 - 0x3000000000 >> 32); // 0x4021ed
                                                v21 = v50;
                                                v32 = v49;
                                                if (v50 < v49) {
                                                    // 0x40200f
                                                    v21 = -1;
                                                    v32 = v49;
                                                    goto lab_0x402014;
                                                } else {
                                                    goto lab_0x402014;
                                                }
                                            } else {
                                                // 0x40200f
                                                v21 = -1;
                                                v32 = v49;
                                                goto lab_0x402014;
                                            }
                                        }
                                    }
                                    if (v46 == -130) {
                                        // 0x40234b
                                        function_4026b0(0);
                                        // UNREACHABLE
                                    }
                                    if (v46 != 1) {
                                        if (v46 == -131) {
                                            // 0x401ba7
                                            function_4054b0((int64_t)g33, "uniq", "GNU coreutils", (int64_t)g21, "Richard M. Stallman", "David MacKenzie");
                                            exit(0);
                                            // UNREACHABLE
                                        }
                                        goto lab_0x401b39;
                                    }
                                    // 0x401afe
                                    v11 = v10;
                                    v31 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                    v27 = (int64_t)g62;
                                    if (*g62 == 43) {
                                        int64_t v51 = function_403390(); // 0x402190
                                        int64_t v52 = (int64_t)g62; // 0x402195
                                        v31 = (int64_t)"-0123456789Dcdf:is:uw:z";
                                        v27 = v52;
                                        if ((int32_t)v51 < 0x31069) {
                                            goto lab_0x401b0e;
                                        } else {
                                            int64_t v53 = function_405a00(v52, 0, 10, &v37, (int64_t *)&g15, v19); // 0x4021be
                                            v31 = 10;
                                            v27 = (int64_t)g62;
                                            if ((int32_t)v53 != 0) {
                                                goto lab_0x401b0e;
                                            } else {
                                                // 0x4021d2
                                                g47 = v37;
                                                v36 = v35;
                                                v30 = 10;
                                                v26 = v25;
                                                v20 = v19;
                                                v15 = v14;
                                                goto lab_0x401a67_2;
                                            }
                                        }
                                    } else {
                                        goto lab_0x401b0e;
                                    }
                                }
                            }
                        }
                    }
                }
              lab_0x401a70:
                // 0x401a70
                v33 = v35;
                v28 = (int64_t)"-0123456789Dcdf:is:uw:z";
                v23 = v25;
                v22 = v38 & 0xffffffff;
                v16 = v19;
                v12 = v14;
            }
        }
        goto lab_0x401a30;
    }
  lab_0x401c9a:;
    // 0x401c9a
    int64_t v54; // 0x401940
    int64_t v55; // 0x401940
    if (g39 != 0) {
        // 0x401edf
        if ((char)v54 != 0) {
            // 0x401eff
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"--group is mutually exclusive with -c/-d/-D/-u", 5));
          lab_0x401b39:
            // 0x401b39
            function_4026b0(1);
            // UNREACHABLE
        }
        // 0x401ee8
        v55 = 5;
        if (g45 != 1) {
            // 0x401eff
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"grouping and printing repeat counts is meaningless", 5));
            // 0x401b39
            function_4026b0(1);
            // UNREACHABLE
        }
    } else {
        // 0x401ca7
        v55 = v28;
        if (g45 == 0) {
            // 0x401cb0
            v55 = 5;
            if (*(char *)&g42 != 0) {
                // 0x401eff
                int64_t v56; // 0x401940
                int64_t v57 = v56;
                error(0, 0, dcgettext(NULL, (char *)v57, 5));
                // 0x401b39
                function_4026b0(1);
                // UNREACHABLE
            }
        }
    }
    // 0x401cc7
    int32_t v58; // 0x401940
    uint32_t v59 = 0x1000000 * v58 >> 24; // 0x401cd6
    int64_t v60 = v55; // 0x401cee
    int64_t v61; // 0x401940
    int64_t v62; // 0x401940
    int64_t v63; // 0x401940
    int64_t v64; // 0x401940
    int64_t v65; // 0x401940
    int64_t v66; // 0x401940
    if (strcmp("-", "-") != 0) {
        int64_t v67 = (int64_t)g34; // 0x4021fe
        int64_t v68 = function_402fe0((int64_t)"-", (int64_t *)"r", v67); // 0x40220f
        v60 = v67;
        if (v68 != 0) {
            goto lab_0x401cf4;
        } else {
            int64_t v69 = function_404eb0(0, 3, (int64_t)"-"); // 0x402229
            error(1, *__errno_location(), "%s", (char *)v69);
            v66 = v69;
            v65 = v64;
            v61 = v2;
            v62 = v54;
            v63 = v1;
            goto lab_0x40224c;
        }
    } else {
        goto lab_0x401cf4;
    }
  lab_0x401a67_2:;
    int64_t v70 = v15;
    int64_t v71 = v20;
    int64_t v72 = v26;
    int32_t v73 = v36;
    int32_t v74 = v72; // 0x401a67
    v10 = v74;
    v13 = v70;
    v18 = v71;
    v24 = v72;
    v34 = v73;
    if (env_val != NULL == (v74 != 0)) {
        // 0x401a67
        v33 = v73;
        v28 = v30;
        v23 = v72;
        v22 = v38 & 0xffffffff;
        v16 = v71;
        v12 = v70;
        goto lab_0x401a30;
    }
    goto lab_0x401a70_2;
  lab_0x401b0e:;
    int64_t v75 = v27; // 0x401b11
    if (v11 == 2) {
      lab_0x402309:
        // 0x402309
        function_405030(v75);
        error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
        function_4026b0(1);
        // UNREACHABLE
    }
    // 0x401b17
    *(int64_t *)((8 * v25 & 0x7fffffff8) + v5) = v27;
    v36 = v35;
    v30 = v31;
    v26 = v25 + 1 & 0xffffffff;
    v20 = v19;
    v15 = v14;
    goto lab_0x401a67_2;
  lab_0x401e8d_2:;
    // 0x401e8d
    int64_t v76; // 0x401940
    int64_t v77; // 0x401940
    function_402560(v77, 0, v76);
    int32_t v78; // 0x401940
    int32_t v79 = v78; // 0x401e95
    int64_t v80; // 0x401940
    int64_t v81 = v80; // 0x401e95
    int64_t v82 = 0; // 0x401e95
    int64_t v83 = v76; // 0x401e95
    goto lab_0x401e9a;
  lab_0x401f20:;
    // 0x401f20
    int64_t v196; // 0x401940
    int64_t v197 = v196;
    int32_t v169; // 0x401940
    int32_t v178 = v169; // 0x401f22
    int64_t v179 = v197; // 0x401f22
    int64_t v160; // 0x401940
    int64_t v180 = v160; // 0x401f22
    int64_t v181 = v197; // 0x401f22
    uint64_t v175; // 0x401e14
    if ((char)v175 == 0) {
        // break -> 0x401f28
        goto lab_0x401f28_2;
    }
    goto lab_0x401e5b;
  lab_0x401e5b:;
    // 0x401e5b
    int64_t v167; // 0x401940
    int64_t v176; // 0x401e1e
    function_402560(v167, v176, v179);
    int64_t v174; // 0x401e0b
    v4 = v174;
    int64_t v173; // 0x401df7
    int64_t v161 = v173; // 0x401e87
    int32_t v162 = v178; // 0x401e87
    int64_t v163 = v167; // 0x401e87
    char * v164 = g34; // 0x401e87
    int64_t v165 = 0; // 0x401e87
    int64_t v168; // 0x401940
    int64_t v166 = v168; // 0x401e87
    v80 = v160;
    v78 = v178;
    v76 = 0;
    v77 = v168;
    if ((*g34 & 16) != 0) {
        goto lab_0x401e8d_2;
    }
    goto lab_0x401dd0;
  lab_0x401f28_2:;
    int64_t v198 = v181;
    int64_t v170; // 0x401940
    int64_t v199 = v170; // 0x401f2f
    int64_t v200 = v168; // 0x401f2f
    int64_t v201 = v167; // 0x401f2f
    if (*(char *)&g42 != 0) {
        // 0x401f35
        function_402560(v167, v176, v198);
        v4 = v174;
        v199 = v173;
        v200 = v167;
        v201 = v168;
    }
    int64_t v153 = v201; // 0x401dca
    int64_t v154 = v198; // 0x401dca
    int64_t v155 = v200; // 0x401dca
    int64_t v156 = v180; // 0x401dca
    int32_t v157 = v169; // 0x401dca
    int64_t v158 = v199; // 0x401dca
    v80 = v180;
    v78 = v169;
    v76 = v198;
    v77 = v201;
    if ((*g34 & 16) != 0) {
        goto lab_0x401e8d_2;
    }
    goto lab_0x401dd0_2;
  lab_0x401a30:
    // 0x401a30
    v54 = v12;
    v64 = v22;
    v58 = v33;
    uint32_t v202 = *(int32_t *)0x60c29c; // 0x401a30
    uint64_t v203 = (int64_t)v202; // 0x401a30
    if (v1 <= v203) {
        // break -> 0x401c9a
        goto lab_0x401c9a;
    }
    int64_t v204 = *(int64_t *)(0x100000000 * v203 / 0x20000000 + a2); // 0x401a42
    v75 = v204;
    if ((int32_t)v23 == 2) {
        goto lab_0x402309;
    }
    // 0x401a4f
    g31 = v202 + 1;
    *(int64_t *)((8 * v23 & 0x7fffffff8) + v5) = v204;
    int32_t v135 = v58; // 0x401a5d
    int64_t v136 = v202; // 0x401a5d
    int64_t v137 = v23 + 1 & 0xffffffff; // 0x401a5d
    int64_t v138 = v64; // 0x401a5d
    int64_t v139 = v16; // 0x401a5d
    int64_t v140 = v54; // 0x401a5d
    goto lab_0x401a62;
  lab_0x401a62:
    // 0x401a62
    v6 = v135;
    v29 = v136;
    v7 = v137;
    v8 = v138;
    v17 = v139;
    v9 = v140;
    goto lab_0x401a62_2;
  lab_0x401cf4:;
    int64_t v141 = v60; // 0x401d03
    if (strcmp("-", "-") != 0) {
        int64_t v142 = (int64_t)g33; // 0x401d05
        int64_t v143 = function_402fe0((int64_t)"-", &g2, v142); // 0x401d14
        v141 = v142;
        if (v143 == 0) {
            // 0x402352
            error(1, *__errno_location(), "%s", (char *)function_404eb0(0, 3, (int64_t)"-"));
            // 0x401eff
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"--group is mutually exclusive with -c/-d/-D/-u", 5));
            // 0x401b39
            function_4026b0(1);
            // UNREACHABLE
        }
    }
    // 0x401d22
    function_402f60((int64_t)g34, 2, v141);
    int64_t v104; // bp-120, 0x401940
    function_4031f0(&v104);
    function_4031f0(&v37);
    int64_t v98 = v2; // 0x401d4e
    int64_t v92; // 0x401940
    if (*(char *)&g44 == 0) {
        goto lab_0x401d61;
    } else {
        unsigned char v144 = *(char *)&g43; // 0x401d50
        int64_t v145 = v144; // 0x401d50
        v98 = v145;
        v92 = v145;
        if (v144 != 0) {
            goto lab_0x40209e;
        } else {
            goto lab_0x401d61;
        }
    }
  lab_0x401d61:;
    // 0x401d61
    int64_t v97; // 0x401940
    int64_t v146 = v97;
    int64_t v147 = (int64_t)g34; // 0x401d65
    int64_t v148 = function_403200(&v37, v147, v59); // 0x401d71
    int32_t v96; // 0x401940
    v79 = v96;
    v81 = v146;
    v82 = v147;
    v83 = v98;
    int64_t v89; // 0x401940
    int64_t v88; // 0x401940
    int32_t v87; // 0x401940
    int64_t v149; // 0x401e24
    char v150; // 0x401940
    if (v148 == 0) {
        goto lab_0x401e9a;
    } else {
        int64_t v151 = &v37; // 0x401d8c
        int64_t v152 = function_4025e0(v3, v3); // 0x401d9b
        v4 = 2 * v3 + (v152 ^ 0xffffffff);
        v80 = v146;
        v78 = 1;
        v76 = 0;
        v77 = v151;
        if ((*g34 & 16) != 0) {
            goto lab_0x401e8d_2;
        } else {
            // 0x401dd0
            v150 = v58;
            v153 = v151;
            v154 = 0;
            v155 = &v104;
            v156 = v146;
            v157 = 1;
            v158 = v152;
            int64_t v159; // 0x401940
            while (true) {
              lab_0x401dd0_2:
                // 0x401dd0
                v160 = v156;
                v161 = v158;
                v162 = v157;
                v163 = v155;
                v164 = g34;
                v165 = v154;
                v166 = v153;
                while (true) {
                  lab_0x401dd0:
                    // 0x401dd0
                    v167 = v166;
                    v159 = v165;
                    v168 = v163;
                    v169 = v162;
                    if (function_403200((int64_t *)v168, (int64_t)v164, v59) == 0) {
                        // break (via goto) -> 0x402057
                        goto lab_0x402057;
                    }
                    // 0x401de5
                    v170 = v161;
                    int64_t v171 = *(int64_t *)(v168 + 8); // 0x401de5
                    int64_t v172 = *(int64_t *)(v168 + 16); // 0x401de9
                    v173 = function_4025e0(v171, v172);
                    v174 = v172 + v171 + -1 - v173;
                    v175 = function_402480(v173, v170, v174, (int64_t)v4);
                    v176 = v175 % 256 ^ 1;
                    v149 = v176 + v159;
                    int32_t v177 = g40;
                    if (v149 == -1) {
                        // 0x401f60
                        if (v177 == 0) {
                            goto lab_0x401f20;
                        } else {
                            // 0x401f6a
                            v178 = 0;
                            v179 = -2;
                            v180 = v160;
                            v181 = -2;
                            if ((char)v175 == 0) {
                                // break -> 0x401f28
                                break;
                            }
                            goto lab_0x401e5b;
                        }
                    } else {
                        // 0x401e31
                        if (v177 == 0) {
                            goto lab_0x401f20;
                        } else {
                            if ((char)v175 == 0) {
                                // 0x401f86
                                v180 = v160;
                                v181 = v149;
                                if (v149 != 1) {
                                    goto lab_0x401f28_2;
                                } else {
                                    if (v177 == 1) {
                                        goto lab_0x401f9d;
                                    } else {
                                        // 0x401f91
                                        v180 = v160;
                                        v181 = v149;
                                        if (v177 != 2) {
                                            goto lab_0x401f28_2;
                                        } else {
                                            // 0x401f96
                                            v180 = v160;
                                            v181 = v149;
                                            if ((char)v169 != 0) {
                                                goto lab_0x401f28_2;
                                            } else {
                                                goto lab_0x401f9d;
                                            }
                                        }
                                    }
                                }
                            }
                            // 0x401e47
                            v178 = v149 != 0 ? 0 : 0x1000000 * v169 >> 24;
                            v179 = v149;
                            goto lab_0x401e5b;
                        }
                    }
                }
                goto lab_0x401f28_2;
            }
          lab_0x402057:
            // 0x402057
            v80 = v160;
            v78 = v169;
            v76 = v159;
            v77 = v167;
            v87 = v169;
            v88 = v160;
            v89 = v159;
            if ((*g34 & 32) == 0) {
                goto lab_0x401e8d_2;
            } else {
                goto lab_0x402067;
            }
        }
    }
  lab_0x40224c:;
    int64_t v182 = v63;
    int64_t v183 = v62;
    int64_t v184 = v61;
    int64_t v185 = v65;
    int64_t v186 = v66;
    int64_t v131; // 0x401940
    int64_t v187 = v131;
    int32_t v130; // 0x401940
    int32_t v188 = v130;
    int64_t v189 = function_402480(v183, 0x100000000000000 * (int64_t)v188 >> 56, v186, v187); // 0x40225c
    int64_t v114 = v186; // 0x402263
    int64_t v112 = v185; // 0x402263
    int64_t v110 = v184; // 0x402263
    int64_t v108 = v183; // 0x402263
    int64_t v106 = v182; // 0x402263
    int64_t v102; // 0x401940
    int64_t v118; // 0x401940
    int64_t v119; // 0x401940
    int64_t v103; // 0x401940
    int64_t v120; // 0x401940
    int64_t v101; // 0x401940
    int64_t v117; // 0x401940
    int64_t v116; // 0x401940
    int64_t v100; // 0x401940
    int32_t v99; // 0x401940
    if ((char)v189 != 0) {
        goto lab_0x402109;
    } else {
        // 0x402269
        v99 = v188;
        v100 = v187;
        v101 = v185;
        v102 = v184;
        v103 = v182;
        v116 = v186;
        v117 = v185;
        v118 = v184;
        v119 = v183;
        v120 = v182;
        if (g39 != 0) {
            goto lab_0x402137;
        } else {
            goto lab_0x4020b9;
        }
    }
  lab_0x401e9a:;
    int64_t v84 = v83;
    int64_t v85 = v81;
    int32_t v86 = v79;
    v87 = v86;
    v88 = v85;
    v89 = v84;
    if ((*g34 & 32) == 0) {
        // 0x401eaa
        v87 = v86;
        v88 = v85;
        v89 = v84;
        if ((int32_t)function_405e30((int64_t)g34, v82) == 0) {
            // 0x401eb7
            free((int64_t *)v3);
            free((int64_t *)v3);
            return (int32_t)&g66 ^ (int32_t)&g66;
        }
    }
    goto lab_0x402067;
  lab_0x40209e:;
    int64_t v93 = v92;
    int64_t v91; // 0x401940
    int64_t v94 = v91;
    int32_t v90; // 0x401940
    int32_t v95 = v90;
    v96 = v95;
    v97 = v94;
    v98 = v93;
    if (g45 != 1) {
        goto lab_0x401d61;
    } else {
        // 0x4020ab
        v4 = 0;
        v99 = v95;
        v100 = v94;
        v101 = &v37;
        v102 = v93;
        v103 = &v104;
        goto lab_0x4020b9;
    }
  lab_0x402109:;
    int64_t v105 = v106;
    int64_t v107 = v108;
    int64_t v109 = v110;
    int64_t v111 = v112;
    int64_t v113 = v114;
    int32_t v115 = g39; // 0x402109
    v116 = v113;
    v117 = v111;
    v118 = v109;
    v119 = v107;
    v120 = v105;
    switch (v115) {
        case 0: {
            goto lab_0x402137;
        }
        case 1: {
            goto lab_0x402285;
        }
        case 4: {
            goto lab_0x402285;
        }
        default: {
            // 0x402125
            v116 = v113;
            v117 = v111;
            v118 = v109;
            v119 = v107;
            v120 = v105;
            if ((v115 || 1) == 3 == ((char)v4 != 0)) {
                goto lab_0x402285;
            } else {
                goto lab_0x402137;
            }
        }
    }
  lab_0x402067:
    // 0x402067
    function_404de0(4, (int64_t)"-");
    error(1, (int32_t)"error reading %s" ^ (int32_t)"error reading %s", dcgettext(NULL, "error reading %s", 5));
    v90 = v87;
    v91 = v88;
    v92 = v89;
    goto lab_0x40209e;
  lab_0x402137:;
    int64_t n = *(int64_t *)(v120 + 8); // 0x402137
    int64_t data = *(int64_t *)(v120 + 16); // 0x40213b
    fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g33);
    v4 = 0x1000000 * (int32_t)v118 >> 24;
    v99 = 0x1000000 * (int32_t)v119 >> 24;
    v100 = v116;
    v101 = v120;
    v102 = v118;
    v103 = v117;
    goto lab_0x4020b9;
  lab_0x402285:;
    int64_t v193 = (int64_t)g33; // 0x402285
    int64_t * v194 = (int64_t *)(v193 + 40); // 0x40228c
    uint64_t v195 = *v194; // 0x40228c
    if (v195 >= *(int64_t *)(v193 + 48)) {
        // 0x40233d
        __overflow(g33, v59);
        v116 = v113;
        v117 = v111;
        v118 = v109;
        v119 = v107;
        v120 = v105;
    } else {
        // 0x40229a
        *v194 = v195 + 1;
        *(char *)v195 = (char)v58;
        v116 = v113;
        v117 = v111;
        v118 = v109;
        v119 = v107;
        v120 = v105;
    }
    goto lab_0x402137;
  lab_0x4020b9:;
    int64_t v121 = v102;
    int64_t v122 = v100;
    int32_t v123 = v99;
    int64_t v124 = (int64_t)g34; // 0x4020b9
    if ((*g34 & 16) != 0) {
        goto lab_0x4022ae;
    } else {
        int64_t v125 = v103;
        if (function_403200((int64_t *)v125, v124, v59) == 0) {
            goto lab_0x4022ae;
        } else {
            int64_t v126 = *(int64_t *)(v125 + 8); // 0x4020de
            int64_t v127 = *(int64_t *)(v125 + 16); // 0x4020e2
            int64_t v128 = function_4025e0(v126, v127); // 0x4020f0
            int64_t v129 = v127 + v126 + -1 - v128; // 0x4020fb
            v114 = v129;
            v112 = v101;
            v110 = v121;
            v108 = v128;
            v106 = v125;
            v130 = v123;
            v131 = v122;
            v66 = v129;
            v65 = v101;
            v61 = v121;
            v62 = v128;
            v63 = v125;
            if (*(int64_t *)(v101 + 8) != 0) {
                goto lab_0x40224c;
            } else {
                goto lab_0x402109;
            }
        }
    }
  lab_0x4022ae:
    // 0x4022ae
    v79 = v123;
    v81 = v122;
    v82 = v124;
    v83 = v121;
    if ((g39 - 2 & -3) == 0) {
        // 0x4022c0
        v79 = v123;
        v81 = v122;
        v82 = v124;
        v83 = v121;
        if ((char)v4 != 0) {
            int64_t v132 = (int64_t)g33; // 0x4022ca
            int64_t * v133 = (int64_t *)(v132 + 40); // 0x4022d1
            uint64_t v134 = *v133; // 0x4022d1
            if (v134 >= *(int64_t *)(v132 + 48)) {
                // 0x40238e
                __overflow(g33, v59);
                v79 = v123;
                v81 = v122;
                v82 = v59;
                v83 = v121;
            } else {
                // 0x4022df
                *v133 = v134 + 1;
                *(char *)v134 = (char)v58;
                v79 = v123;
                v81 = v122;
                v82 = v124;
                v83 = v121;
            }
        }
    }
    goto lab_0x401e9a;
  lab_0x402014:
    // 0x402014
    g48 = v21;
    v4 = 1;
    v135 = v35;
    v136 = v32;
    v137 = v25;
    v138 = v38 & 0xffffffff;
    v139 = v19;
    v140 = v14;
    goto lab_0x401a62;
  lab_0x401f9d:;
    int64_t v190 = (int64_t)g33; // 0x401f9d
    int64_t * v191 = (int64_t *)(v190 + 40); // 0x401fa4
    uint64_t v192 = *v191; // 0x401fa4
    if (v192 >= *(int64_t *)(v190 + 48)) {
        // 0x4022f3
        __overflow(g33, v59);
        v180 = v176;
        v181 = v149;
        goto lab_0x401f28_2;
    } else {
        // 0x401fb2
        *v191 = v192 + 1;
        *(char *)v192 = v150;
        v180 = v160;
        v181 = v149;
        goto lab_0x401f28_2;
    }
}
// Address range: 0x4023a0 - 0x4023cb
// Address range: 0x4023cb - 0x4023ea
int64_t function_4023cb(void) {
    // 0x4023cb
    return &g32;
}
// Address range: 0x4023ea - 0x402421
int64_t function_4023ea(void) {
    // 0x4023ea
    return 0;
}
// Address range: 0x402421 - 0x402478
int64_t function_402421(void) {
    // 0x402421
    if (g37 != 0) {
        // 0x402477
        int64_t result; // 0x402421
        return result;
    }
    int64_t v1 = g38; // 0x402454
    int64_t result2; // 0x402466
    if (g38 >= ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x402466
        result2 = function_4023cb();
        g37 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x402456
        v1++;
    }
    // 0x40244a
    g38 = v1;
    // 0x402466
    result2 = function_4023cb();
    g37 = 1;
    return result2;
}
// Address range: 0x402478 - 0x40247d
int64_t function_402478(void) {
    // 0x402478
    return function_4023ea();
}
// Address range: 0x402480 - 0x4024fc
int64_t function_402480(int64_t str, int64_t str2, uint64_t a3, uint64_t a4) {
    uint64_t v1 = g46; // 0x402484
    int64_t n = v1 > a3 ? a3 : v1; // 0x40248e
    int64_t v2 = v1 > a4 ? a4 : v1; // 0x402495
    if (g41 != 0) {
        // 0x4024e8
        if (n != v2) {
            // 0x4024e0
            return g41;
        }
        int64_t v3 = function_403340(str, str2, n, v2); // 0x4024ed
        return v3 & -256 | (int64_t)((int32_t)v3 != 0);
    }
    // 0x4024a7
    if (g49 != 0) {
        int64_t v4 = function_405940(str, n, str2, v2); // 0x4024d6
        // 0x4024e0
        return v4 & -256 | (int64_t)((int32_t)v4 != 0);
    }
    // 0x4024b0
    if (n != v2) {
        // 0x4024e0
        return 1;
    }
    int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x4024ba
    return (int64_t)(memcmp_rc != 0) | (int64_t)(memcmp_rc & -256);
}
// Address range: 0x402500 - 0x402560
int64_t function_402500(int64_t a1, char * a2) {
    // 0x402500
    int64_t result; // bp-32, 0x402500
    int64_t v1; // 0x402500
    int64_t v2 = function_405a00(a1, 0, 10, &result, (int64_t *)&g15, v1); // 0x40251e
    if ((int32_t)v2 < 2) {
        // 0x402528
        return result;
    }
    // 0x402534
    error(1, 0, "%s: %s", (char *)a1, dcgettext(NULL, a2, 5));
    return &g66;
}
// Address range: 0x402560 - 0x4025dc
int64_t function_402560(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)&g44; // 0x402563
    if (a3 != 0) {
        // 0x4025b8
        v1 = (char *)&g42;
        if ((char)a2 != 0) {
            goto lab_0x40256f;
        } else {
            char result = *(char *)&g43 ^ 1;
            if (result != 0) {
                // 0x4025cb
                return result;
            }
            goto lab_0x402573;
        }
    } else {
        goto lab_0x40256f;
    }
  lab_0x40256f:;
    char result2 = *v1 ^ 1;
    if (result2 != 0) {
        // 0x4025cb
        return result2;
    }
    goto lab_0x402573;
  lab_0x402573:
    // 0x402573
    if (g45 == 0) {
        // 0x4025a0
        __printf_chk(1, "%7lu ", (int32_t)a3 + 1);
    }
    int64_t n = *(int64_t *)(a1 + 8); // 0x402581
    int64_t data = *(int64_t *)(a1 + 16); // 0x402585
    return fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g33);
}
// Address range: 0x4025e0 - 0x4026ab
int64_t function_4025e0(int64_t a1, int64_t a2) {
    uint64_t v1 = (int64_t)g48; // 0x4025e2
    uint64_t v2 = a1 - 1; // 0x4025ee
    uint64_t v3; // 0x4025e0
    uint64_t v4; // 0x4025e0
    if (a1 == 1 || v1 == 0) {
        // 0x402653
        v3 = v2;
        v4 = g47;
        return a2 + (v4 > v3 ? v3 : v4);
    }
    uint64_t v5 = (int64_t)*__ctype_b_loc();
    int64_t v6 = v5 % 256; // 0x40260f
    int64_t v7 = 0; // 0x40261c
    int64_t v8 = 0; // 0x402670
    int64_t v9 = (int64_t)*(int16_t *)(2 * v6 + v5); // 0x4025e0
    int64_t v10 = v6; // 0x402679
    int64_t v11; // 0x4025e0
    int64_t v12; // 0x4025e0
    while (true) {
        // 0x402620
        v11 = v8;
        if (v10 != 10) {
            // 0x402625
            if (v9 % 2 == 0) {
                // break -> 0x40262a
                break;
            }
        }
        // 0x402670
        v8 = v11 + 1;
        v12 = v8;
        if (v2 <= v8) {
            // break (via goto) -> 0x402650
            goto lab_0x402650_2;
        }
        // 0x402679
        v10 = (int64_t)*(char *)(v8 + a2);
        v9 = (int64_t)*(int16_t *)(2 * v10 + v5);
    }
    // 0x40262a
    v12 = v11;
    while (v2 > v11) {
        int64_t v13 = v11 + 1; // 0x402690
        v12 = v13;
        if (v2 <= v13) {
            // break (via goto) -> 0x402650
            goto lab_0x402650_2;
        }
        unsigned char v14 = *(char *)(v13 + a2); // 0x402699
        int64_t v15 = v14; // 0x402699
        int64_t v16 = (int64_t)*(int16_t *)(2 * v15 + v5); // 0x4026a1
        int64_t v17 = v13; // 0x402632
        while (v14 != 10 == v16 % 2 == 0) {
            // 0x402690
            v13 = v17 + 1;
            v12 = v13;
            if (v2 <= v13) {
                // break (via goto) -> 0x402650
                goto lab_0x402650_2;
            }
            // 0x402699
            v14 = *(char *)(v13 + a2);
            v15 = v14;
            v16 = (int64_t)*(int16_t *)(2 * v15 + v5);
            v17 = v13;
        }
        // 0x402639
        v7++;
        v12 = v13;
        if (v7 >= v1) {
            // break -> 0x402650
            break;
        }
        v8 = v13;
        v9 = v16;
        v10 = v15;
        while (true) {
            // 0x402620
            v11 = v8;
            if (v10 != 10) {
                // 0x402625
                if (v9 % 2 == 0) {
                    // break -> 0x40262a
                    break;
                }
            }
            // 0x402670
            v8 = v11 + 1;
            v12 = v8;
            if (v2 <= v8) {
                // break (via goto) -> 0x402650
                goto lab_0x402650_2;
            }
            // 0x402679
            v10 = (int64_t)*(char *)(v8 + a2);
            v9 = (int64_t)*(int16_t *)(2 * v10 + v5);
        }
        // 0x40262a
        v12 = v11;
    }
  lab_0x402650_2:
    // 0x402653
    v3 = v2 - v12;
    v4 = g47;
    return v12 + a2 + (v4 > v3 ? v3 : v4);
}
// Address range: 0x4026b0 - 0x402afd
int64_t function_4026b0(int64_t a1) {
    int32_t status = a1; // 0x4026c6
    if (status != 0) {
        // 0x4026ca
        __fprintf_chk(g36, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4026ef
        exit(status);
        // UNREACHABLE
    }
    // 0x4026f6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [INPUT [OUTPUT]]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Filter adjacent matching lines from INPUT (or standard input),\nwriting to OUTPUT (or standard output).\n\nWith no options, matching lines are merged to the first occurrence.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -c, --count           prefix lines by the number of occurrences\n  -d, --repeated        only print duplicate lines, one for each group\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -D                    print all duplicate lines\n      --all-repeated[=METHOD]  like -D, but allow separating groups\n                                 with an empty line;\n                                 METHOD={none(default),prepend,separate}\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -f, --skip-fields=N   avoid comparing the first N fields\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --group[=METHOD]  show all items, separating groups with an empty line;\n                          METHOD={separate(default),prepend,append,both}\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -i, --ignore-case     ignore differences in case when comparing\n  -s, --skip-chars=N    avoid comparing the first N characters\n  -u, --unique          only print unique lines\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -w, --check-chars=N   compare no more than N characters in lines\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nA field is a run of blanks (usually spaces and/or TABs), then non-blank\ncharacters.  Fields are skipped before chars.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nNote: 'uniq' does not detect repeated lines unless they are adjacent.\nYou may want to sort the input first, or use 'sort -u' without 'uniq'.\nAlso, comparisons honor the rules specified by 'LC_COLLATE'.\n", 5), g33);
    int64_t v1 = &g1; // bp-136, 0x4028db
    bool v2; // 0x4026b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402960
    int64_t v6 = *(int64_t *)v5; // 0x402964
    int64_t v7 = 5; // 0x40296a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"uniq";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402976
        char v11 = *(char *)v9; // 0x402976
        char v12 = v11; // 0x402976
        bool v13 = false; // 0x402976
        while (v10 == v11) {
            // 0x40296c
            v7--;
            int64_t v14 = v9 + v3; // 0x402976
            int64_t v15 = v8 + v3; // 0x402976
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
            // break -> 0x402982
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x402982
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402a94;
        } else {
            // 0x402a7e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ad3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4029e4;
            } else {
                goto lab_0x402a94;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4029e4;
        } else {
            // 0x4029ca
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ad3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4029e4;
            } else {
                goto lab_0x4029e4;
            }
        }
    }
  lab_0x402a94:
    // 0x402a94
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402a24
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4026ef
    exit(status);
    // UNREACHABLE
  lab_0x4029e4:
    // 0x4029e4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402a24
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4026ef
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402b00 - 0x402b0a
int64_t function_402b00(void) {
    // 0x402b00
    return function_4026b0(1);
}
// Address range: 0x402b10 - 0x402c26
int64_t function_402b10(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x402b31
    int32_t len = strlen(str); // 0x402b31
    if (a2 == 0) {
        // 0x402bfd
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x402b97
    int64_t v4 = a3; // 0x402b10
    int64_t v5 = a2; // 0x402b9e
    int64_t str4; // 0x402b10
    int64_t v6; // 0x402b10
    int32_t v7; // 0x402b10
    int32_t v8; // 0x402b10
    int32_t v9; // 0x402b10
    int64_t v10; // 0x402b10
    int64_t result; // 0x402b10
    int32_t v11; // 0x402b93
    char * str2; // 0x402bb2
    while (true) {
        // 0x402ba7
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x402bbb
            result = v6;
            if (len == strlen(str2)) {
                // 0x402bfd
                return result;
            }
            if (v1 == -1) {
                // break -> 0x402bcf
                break;
            }
            // 0x402b60
            v7 = 1;
            if (a3 != 0) {
                // 0x402b6e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x402b97
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
    int64_t v12 = v6 + 1; // 0x402bd3
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x402bda
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x402ba7
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x402ba7
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x402bbb
                result = v6;
                if (len == strlen(str2)) {
                    // 0x402bfd
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x402bcf
                    break;
                }
                // 0x402b60
                v7 = 1;
                if (a3 != 0) {
                    // 0x402b6e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x402b97
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
        // 0x402bcf
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x402be8:
    // 0x402bfd
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x402c30 - 0x402ca1
int64_t function_402c30(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x402c30
    if (a3 == -1) {
        // 0x402c90
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x402c45
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x402c54
    function_405010(1, a1);
    function_404d00(0, 8, a2);
    error(0, 0, format);
    return &g66;
}
// Address range: 0x402cb0 - 0x402dc8
int64_t function_402cb0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x402cdd
    fputs_unlocked(v1, g36);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x402d50
        int64_t v5; // 0x402d57
        int64_t v6; // 0x402d77
        while (v3 != 0) {
            // 0x402d3b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x402d00
                break;
            }
            // 0x402d4d
            v4 = v3 + 1;
            v5 = function_405030(v2);
            __fprintf_chk(g36, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x402d80
                goto lab_0x402d80;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x402d03
        int64_t v8 = function_405030(v2); // 0x402d0d
        __fprintf_chk(g36, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x402d2d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x402d3b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x402d00
                    break;
                }
                // 0x402d4d
                v4 = v3 + 1;
                v5 = function_405030(v2);
                __fprintf_chk(g36, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x402d80
                    goto lab_0x402d80;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x402d00
            v7 = v3 + 1;
            v8 = function_405030(v2);
            __fprintf_chk(g36, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x402d80:;
    int64_t v10 = (int64_t)g36; // 0x402d80
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x402d87
    uint64_t result = *v11; // 0x402d87
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x402db0
        return __overflow(g36, 10);
    }
    // 0x402d91
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x402dd0 - 0x402e40
int64_t function_402dd0(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_402b10(a2, v2, v1, a5); // 0x402dfc
    int64_t result = v3; // 0x402e04
    if (v3 < 0) {
        // 0x402e18
        function_402c30((int64_t)a1, a2, v3);
        function_402cb0(v2, v1, a5);
        result = -1;
    }
    // 0x402e06
    return result;
}
// Address range: 0x402e40 - 0x402e8d
int64_t function_402e40(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x402e40
    if (result == 0) {
        // 0x402e81
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x402e78
    int32_t n = a4; // 0x402e78
    int64_t v1 = result; // 0x402e7f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x402e81
        return result;
    }
    int64_t str3 = str2; // 0x402e7f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x402e60
    int64_t result2 = 0; // 0x402e6d
    while (v2 != 0) {
        // 0x402e6f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x402e81
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x402e81
    return result2;
}
// Address range: 0x402e90 - 0x402e98
int64_t function_402e90(int64_t a1) {
    // 0x402e90
    g51 = a1;
    int64_t result; // 0x402e90
    return result;
}
// Address range: 0x402ea0 - 0x402ea8
int64_t function_402ea0(int64_t a1) {
    // 0x402ea0
    g50 = a1;
    int64_t result; // 0x402ea0
    return result;
}
// Address range: 0x402eb0 - 0x402f4e
int64_t function_402eb0(void) {
    // 0x402eb0
    int32_t * err_num; // 0x402ec6
    if ((int32_t)function_406e40((int64_t)g33) == 0) {
        goto lab_0x402edc;
    } else {
        // 0x402ec6
        err_num = __errno_location();
        if (g50 == 0) {
            goto lab_0x402ef3;
        } else {
            // 0x402ed7
            if (*err_num != 32) {
                goto lab_0x402ef3;
            } else {
                goto lab_0x402edc;
            }
        }
    }
  lab_0x402edc:;
    int64_t result = function_406e40((int64_t)g36); // 0x402ee3
    if ((int32_t)result == 0) {
        // 0x402eec
        return result;
    }
    // 0x402f2e
    _exit(g23);
    // UNREACHABLE
  lab_0x402ef3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402eff
    if (g51 == 0) {
        // 0x402f39
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402f13
        error(0, *err_num, "%s: %s", (char *)function_404e80((int64_t)g51), v1);
    }
    // 0x402f2e
    _exit(g23);
    // UNREACHABLE
}
// Address range: 0x402f50 - 0x402f55
int64_t function_402f50(void) {
    // 0x402f50
    int64_t fd; // 0x402f50
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402f60 - 0x402f81
int64_t function_402f60(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402f60
    if (stream == 0) {
        // 0x402f80
        int64_t result; // 0x402f60
        return result;
    }
    // 0x402f65
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402f90 - 0x402fdb
int64_t function_402f90(int32_t a1, int64_t a2) {
    int32_t fd = open("/dev/null", O_RDONLY); // 0x402fa6
    if (fd == a1) {
        // 0x402fb5
        return 1;
    }
    // 0x402faf
    if (fd < 0) {
        // 0x402fb5
        return 0;
    }
    // 0x402fc0
    close(fd);
    *__errno_location() = 9;
    return 0;
}
// Address range: 0x402fe0 - 0x40318f
int64_t function_402fe0(int64_t a1, int64_t * a2, int64_t stream) {
    int32_t v1 = fileno((struct _IO_FILE *)stream); // 0x402ffc
    int32_t * v2 = __errno_location(); // 0x403003
    int64_t v3 = 0; // 0x402fe0
    int64_t v4 = 0; // 0x402fe0
    int64_t v5 = 0; // 0x402fe0
    int64_t v6 = 0; // 0x402fe0
    int64_t v7 = 0; // 0x402fe0
    switch (v1) {
        case 1: {
            goto lab_0x403050;
        }
        case 2: {
            goto lab_0x40303a;
        }
        case 0: {
            goto lab_0x40308c;
        }
        default: {
            // 0x403025
            v3 = dup2(2, 2) != 2;
            goto lab_0x40303a;
        }
    }
  lab_0x403050:;
    // 0x403050
    int64_t v8; // 0x402fe0
    int64_t v9; // 0x402fe0
    int64_t v10; // 0x402fe0
    int64_t v11; // 0x402fe0
    int64_t v12; // 0x402fe0
    int64_t v13; // 0x402fe0
    int64_t v14; // 0x403064
    if (dup2(0, 0) == 0) {
        // 0x4030d0
        v10 = 0;
        v8 = 0;
        v14 = 0;
        if (v4 == 0) {
            goto lab_0x403074;
        } else {
            goto lab_0x4030d8;
        }
    } else {
        int64_t v15 = function_402f90(0, 0); // 0x40305f
        v12 = v3;
        v11 = v4;
        v9 = 1;
        v13 = 0;
        if ((char)v15 == 0) {
            goto lab_0x40309f;
        } else {
            // 0x40306f
            v14 = v15 & 0xffffffff;
            v10 = v4;
            v8 = v14;
            if (v4 != 0) {
                goto lab_0x4030d8;
            } else {
                goto lab_0x403074;
            }
        }
    }
  lab_0x40303a:
    // 0x40303a
    v4 = dup2(1, 1) != 1;
    goto lab_0x403050;
  lab_0x40308c:
    // 0x40308c
    v12 = v5;
    v11 = v6;
    v9 = v7;
    v13 = function_405ef0(a1, (int64_t)a2);
    goto lab_0x40309f;
  lab_0x40309f:;
    int64_t v16 = (int64_t)*v2; // 0x40309f
    int64_t v17 = v11; // 0x4030a4
    int64_t v18 = v13; // 0x4030a4
    int64_t v19 = v9; // 0x4030a4
    int64_t v20 = v16; // 0x4030a4
    int64_t v21 = v11; // 0x4030a4
    int64_t v22 = v13; // 0x4030a4
    int64_t v23 = v9; // 0x4030a4
    int64_t v24 = v16; // 0x4030a4
    if ((char)v12 != 0) {
        goto lab_0x403146;
    } else {
        goto lab_0x4030aa;
    }
  lab_0x403074:
    // 0x403074
    v5 = v3;
    v6 = v10;
    v7 = v8;
    if ((char)v3 == 0) {
        goto lab_0x40308c;
    } else {
        int64_t v25 = function_402f90(2, 0); // 0x40307d
        v5 = v25 & 0xffffffff;
        v6 = v10;
        v7 = v8;
        if ((char)v25 == 0) {
            // 0x403140
            v21 = v10;
            v22 = 0;
            v23 = v8;
            v24 = (int64_t)*v2;
            goto lab_0x403146;
        } else {
            goto lab_0x40308c;
        }
    }
  lab_0x4030d8:;
    int64_t v26 = function_402f90(1, 0); // 0x4030dd
    v10 = v26 & 0xffffffff;
    v8 = v14;
    int64_t v27; // 0x402fe0
    int64_t v28; // 0x402fe0
    int64_t v29; // 0x402fe0
    if ((char)v26 != 0) {
        goto lab_0x403074;
    } else {
        int64_t v30 = (int64_t)*v2; // 0x4030e8
        v27 = 0;
        v28 = v14;
        v29 = v30;
        if ((char)v3 != 0) {
            // 0x403180
            close(2);
            v27 = 0;
            v28 = v14;
            v29 = v30;
        }
        goto lab_0x403100;
    }
  lab_0x403146:
    // 0x403146
    close(2);
    v17 = v21;
    v18 = v22;
    v19 = v23;
    v20 = v24;
    goto lab_0x4030aa;
  lab_0x4030aa:
    // 0x4030aa
    v27 = v18;
    v28 = v19;
    v29 = v20;
    int64_t result; // 0x402fe0
    int64_t v31; // 0x402fe0
    int64_t v32; // 0x402fe0
    int64_t v33; // 0x402fe0
    if ((char)v17 != 0) {
        goto lab_0x403100;
    } else {
        // 0x4030af
        result = v18;
        v32 = v20;
        v31 = v18;
        v33 = v20;
        if ((char)v19 != 0) {
            goto lab_0x40310f;
        } else {
            goto lab_0x4030b4;
        }
    }
  lab_0x403100:
    // 0x403100
    close(1);
    result = v27;
    v32 = v29;
    v31 = v27;
    v33 = v29;
    if ((char)v28 == 0) {
        goto lab_0x4030b4;
    } else {
        goto lab_0x40310f;
    }
  lab_0x4030b4:;
    int64_t result2 = 0; // 0x4030b7
    int64_t v34 = v32; // 0x4030b7
    if (result != 0) {
        // 0x4030b9
        return result;
    }
    goto lab_0x40311b;
  lab_0x40310f:
    // 0x40310f
    close(0);
    result2 = v31;
    v34 = v33;
    if (v31 != 0) {
        // 0x4030b9
        int64_t v35; // 0x402fe0
        int64_t result3 = v35;
        return result3;
    }
    goto lab_0x40311b;
  lab_0x40311b:
    // 0x40311b
    *v2 = (int32_t)v34;
    // 0x4030b9
    return result2;
}
// Address range: 0x403190 - 0x4031ee
int64_t function_403190(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x403196
    if (locale == NULL) {
        // 0x4031c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x403196
    bool v2; // 0x403190
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g8; // 0x403190
    int64_t v5 = v1; // 0x403190
    int64_t v6 = 2; // 0x4031b5
    unsigned char v7 = *(char *)v5; // 0x4031b5
    char v8 = *(char *)v4; // 0x4031b5
    char v9 = v8; // 0x4031b5
    bool v10 = false; // 0x4031b5
    while (v7 == v8) {
        // 0x4031a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4031c1
    int64_t v13 = v1; // 0x4031c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4031c3
        return 0;
    }
    int64_t v14 = 6; // 0x4031c1
    unsigned char v15 = *(char *)v13; // 0x4031dd
    char v16 = *(char *)v12; // 0x4031dd
    char v17 = v16; // 0x4031dd
    bool v18 = false; // 0x4031dd
    while (v15 == v16) {
        // 0x4031d0
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
// Address range: 0x4031f0 - 0x403200
int64_t function_4031f0(int64_t * a1) {
    // 0x4031f0
    int128_t v1; // 0x4031f0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x4031f0
    *(int64_t *)((int64_t)a1 + 16) = 0;
    int64_t v4; // 0x4031f0
    __asm_movups(*(int128_t *)&v4, v3);
    int64_t result; // 0x4031f0
    return result;
}
// Address range: 0x403200 - 0x40331b
int64_t function_403200(int64_t * a1, int64_t a2, uint32_t a3) {
    int64_t result = (int64_t)a1;
    int64_t * v1 = (int64_t *)(result + 16); // 0x403218
    int64_t v2 = *v1; // 0x403218
    int64_t v3 = v2 + result; // 0x403228
    if ((v3 & 16) != 0) {
        // 0x4032d8
        return 0;
    }
    int64_t v4 = 0x100000000000000 * (int64_t)a3 >> 56; // 0x403206
    uint32_t v5 = 0x1000000 * a3 / 0x1000000; // 0x403223
    int64_t * v6 = (int64_t *)(a2 + 8); // 0x403264
    int64_t v7 = v3; // 0x403200
    int64_t v8 = v2;
    int64_t v9 = v2; // 0x403255
    int64_t v10; // 0x403200
    int64_t v11; // 0x403200
    int64_t v12; // 0x403200
    int64_t v13; // 0x403200
    int64_t v14; // 0x403200
    int64_t v15; // 0x403200
    int64_t v16; // 0x403200
    while (true) {
      lab_0x403264:
        // 0x403264
        v11 = v9;
        v10 = v8;
        int64_t v17 = v7;
        uint64_t v18 = *v6; // 0x403264
        if (v18 < *(int64_t *)(a2 + 16)) {
            // 0x403240
            *v6 = v18 + 1;
            v16 = v17;
            v13 = (int64_t)*(char *)v18;
            goto lab_0x40324b;
        } else {
            uint32_t v19 = __uflow((struct _IO_FILE *)a2); // 0x403275
            int64_t v20 = 0x100000000 * v17 >> 32; // 0x40327a
            v16 = v20;
            v13 = v19;
            if (v19 != -1) {
                goto lab_0x40324b;
            } else {
                if (v10 == v11) {
                    // break -> 0x4032d8
                    break;
                }
                if ((v17 & 32) != 0) {
                    // break -> 0x4032d8
                    break;
                }
                // 0x40328f
                v12 = v11;
                if (*(char *)(v11 - 1) == (char)v5) {
                  lab_0x4032fc:
                    // 0x4032fc
                    *(int64_t *)(result + 8) = v12 - v10;
                    return result;
                }
                // 0x40329a
                v15 = v5 % 256;
                v14 = v4 & 0xffffffff;
                if (v11 != v20) {
                    // 0x4032f0
                    *(char *)v11 = (char)a3;
                    v12 = v11 + 1;
                    goto lab_0x4032fc;
                }
                goto lab_0x4032a7;
            }
        }
    }
    // 0x4032d8
    return 0;
  lab_0x40324b:
    // 0x40324b
    v7 = v16;
    int64_t v21 = v11; // 0x403250
    int64_t v22 = v13; // 0x403250
    int64_t v23 = v13; // 0x403250
    int64_t v24 = v10; // 0x403250
    v15 = v13;
    v14 = v13;
    if (v11 == v16) {
        goto lab_0x4032a7;
    } else {
        goto lab_0x403255;
    }
  lab_0x4032a7:;
    int64_t v25 = function_405750(v10, result); // 0x4032b4
    int64_t v26 = v25 + v10; // 0x4032c4
    *v1 = v25;
    v7 = v26;
    v21 = v26;
    v22 = v15 % 256;
    v23 = v14;
    v24 = v25;
    goto lab_0x403255;
  lab_0x403255:
    // 0x403255
    v8 = v24;
    v9 = v21 + 1;
    *(char *)v21 = (char)v22;
    v12 = v9;
    int64_t v27 = v8; // 0x40325e
    if ((int32_t)v23 == (int32_t)v4) {
        // 0x4032fc
        *(int64_t *)(result + 8) = v12 - v27;
        return result;
    }
    goto lab_0x403264;
}
// Address range: 0x403320 - 0x40332a
int64_t function_403320(void) {
    // 0x403320
    int64_t v1; // 0x403320
    return function_403200((int64_t *)v1, v1, 10);
}
// Address range: 0x403330 - 0x403339
int64_t function_403330(int64_t a1) {
    // 0x403330
    free((int64_t *)*(int64_t *)(a1 + 16));
    return &g66;
}
// Address range: 0x403340 - 0x403385
int64_t function_403340(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403340
    if (a3 == 0) {
        // 0x40337d
        return 0;
    }
    int64_t v1 = (int64_t)*__ctype_toupper_loc(); // 0x403359
    int64_t v2 = 0; // 0x40335c
    int32_t v3 = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a2) + v1); // 0x403377
    uint32_t result = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a1) + v1) - v3; // 0x403377
    while (result == 0) {
        // 0x403360
        v2++;
        if (v2 == a3) {
            // 0x40337d
            return 0;
        }
        v3 = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a2) + v1);
        result = *(int32_t *)(4 * (int64_t)*(char *)(v2 + a1) + v1) - v3;
    }
    // 0x40337d
    return result;
}
// Address range: 0x403390 - 0x403402
int64_t function_403390(void) {
    char * env_val = getenv("_POSIX2_VERSION"); // 0x40339f
    if (env_val == NULL || *env_val == 0) {
        // 0x4033ae
        return 0x31069;
    }
    // 0x4033c0
    char * endptr; // bp-16, 0x403390
    int32_t str_as_l = strtol(env_val, &endptr, 10); // 0x4033cd
    if (*endptr != 0) {
        // 0x4033ae
        return 0x31069;
    }
    int64_t v1 = str_as_l; // 0x4033cd
    int64_t v2 = v1 - 0x7fffffff; // 0x4033e4
    return v2 == 0 | v2 < 0 != (0x7ffffffe - v1 & v1) < 0 ? v1 & 0xffffffff : 0x7fffffff;
}
// Address range: 0x403410 - 0x4034a9
int64_t function_403410(int64_t str) {
    // 0x403410
    if (str == 0) {
        // 0x403489
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g36);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40341e
    int64_t result = (int64_t)found_char_pos; // 0x40341e
    if (found_char_pos == NULL) {
        // 0x403479
        g52 = str;
        g35 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403428
    if (v1 - str < 7) {
        // 0x403479
        g52 = str;
        g35 = str;
        return result;
    }
    // 0x403438
    bool v2; // 0x403410
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403410
    int64_t v5 = result - 6; // 0x403410
    int64_t v6 = 7; // 0x403446
    unsigned char v7 = *(char *)v5; // 0x403446
    char v8 = *(char *)v4; // 0x403446
    char v9 = v8; // 0x403446
    bool v10 = false; // 0x403446
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
    int64_t v12 = (int64_t)"lt-"; // 0x403450
    int64_t v13 = v1; // 0x403450
    int64_t v14 = 3; // 0x403450
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403479
        g52 = str;
        g35 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403462
    char v16 = *(char *)v12; // 0x403462
    char v17 = v16; // 0x403462
    bool v18 = false; // 0x403462
    while (v15 == v16) {
        // 0x403452
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
    int64_t v20 = v1; // 0x40346c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40346e
        v20 = result + 4;
        g32 = v20;
    }
    // 0x403479
    g52 = v20;
    g35 = v20;
    return result;
}
// Address range: 0x4034b0 - 0x4035a2
int64_t function_4034b0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4034c4
    int64_t result = (int64_t)v1; // 0x4034c4
    if (result != a1) {
        // 0x4034d1
        return result;
    }
    int64_t v2 = function_406ea0(); // 0x4034e0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403596
    if (v3 == 85) {
        // 0x4034f0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403588
            result2 = (int32_t)a2 != 9 ? (int64_t)&g14 : (int64_t)&g9;
            return result2;
        }
        char v4 = *v1; // 0x40351e
        int64_t result3 = v4 != 96 ? (int64_t)&g10 : (int64_t)&g13; // 0x40352b
        // 0x4034d1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403588
        result2 = (int32_t)a2 != 9 ? (int64_t)&g14 : (int64_t)&g9;
        return result2;
    }
    char v5 = *v1; // 0x40356d
    int64_t result4 = v5 != 96 ? (int64_t)&g11 : (int64_t)&g12; // 0x40357a
    // 0x4034d1
    return result4;
}
// Address range: 0x4035b0 - 0x403607
int64_t function_4035b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4035b0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4035f8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403607 - 0x4047d1
int64_t function_403607(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403651
    int64_t v3 = 0; // 0x403651
    int64_t v4; // 0x403607
    int64_t v5; // 0x403607
    int64_t v6; // 0x403607
    int64_t v7; // 0x403607
    int64_t v8; // 0x403607
    int64_t v9; // 0x403607
    int64_t v10; // 0x403607
    int64_t v11; // 0x403607
    int64_t v12; // 0x403607
    int64_t v13; // 0x403607
    int64_t v14; // 0x403607
    int64_t v15; // 0x403607
    int64_t v16; // 0x403607
    int64_t v17; // 0x403607
    int64_t v18; // 0x403607
    int64_t result; // 0x403607
    int64_t v19; // 0x403607
    int32_t wc; // bp+132, 0x403607
    int64_t ps; // bp+136, 0x403607
    char v20; // 0x403bc0
    int64_t v21; // 0x403bc0
    int64_t v22; // 0x403f68
    int64_t v23; // 0x403607
    int64_t v24; // 0x403f87
    int32_t v25; // 0x403607
    while (true) {
      lab_0x403658_2:
        // 0x403658
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403607
        int64_t v27; // 0x40368c
        while (true) {
          lab_0x403658:
            // 0x403658
            v5 = v26;
            bool v28 = v15 == v5; // 0x403663
            if (v15 == -1) {
                // 0x403665
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403673
            if (v28) {
                // break (via goto) -> 0x403dd8
                goto lab_0x403dd8;
            }
            // 0x40367c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g65 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403c6b
                    if (v25 % 2 == 0) {
                        goto lab_0x4037b1;
                    }
                    // 0x40408d
                    v26 = v5 + 1;
                    goto lab_0x403658;
                }
                case 7: {
                    goto lab_0x4037b1;
                }
                case 8: {
                    goto lab_0x4037b1;
                }
                case 9: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4037b1;
                }
                case 12: {
                    goto lab_0x4037b1;
                }
                case 13: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40377d;
                }
                case 36: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4037b1;
                }
                case 38: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4037b1;
                }
                case 44: {
                    goto lab_0x4037b1;
                }
                case 45: {
                    goto lab_0x4037b1;
                }
                case 46: {
                    goto lab_0x4037b1;
                }
                case 47: {
                    goto lab_0x4037b1;
                }
                case 48: {
                    goto lab_0x4037b1;
                }
                case 49: {
                    goto lab_0x4037b1;
                }
                case 50: {
                    goto lab_0x4037b1;
                }
                case 51: {
                    goto lab_0x4037b1;
                }
                case 52: {
                    goto lab_0x4037b1;
                }
                case 53: {
                    goto lab_0x4037b1;
                }
                case 54: {
                    goto lab_0x4037b1;
                }
                case 55: {
                    goto lab_0x4037b1;
                }
                case 56: {
                    goto lab_0x4037b1;
                }
                case 57: {
                    goto lab_0x4037b1;
                }
                case 58: {
                    goto lab_0x4037b1;
                }
                case 59: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4037b1;
                }
                case 66: {
                    goto lab_0x4037b1;
                }
                case 67: {
                    goto lab_0x4037b1;
                }
                case 68: {
                    goto lab_0x4037b1;
                }
                case 69: {
                    goto lab_0x4037b1;
                }
                case 70: {
                    goto lab_0x4037b1;
                }
                case 71: {
                    goto lab_0x4037b1;
                }
                case 72: {
                    goto lab_0x4037b1;
                }
                case 73: {
                    goto lab_0x4037b1;
                }
                case 74: {
                    goto lab_0x4037b1;
                }
                case 75: {
                    goto lab_0x4037b1;
                }
                case 76: {
                    goto lab_0x4037b1;
                }
                case 77: {
                    goto lab_0x4037b1;
                }
                case 78: {
                    goto lab_0x4037b1;
                }
                case 79: {
                    goto lab_0x4037b1;
                }
                case 80: {
                    goto lab_0x4037b1;
                }
                case 81: {
                    goto lab_0x4037b1;
                }
                case 82: {
                    goto lab_0x4037b1;
                }
                case 83: {
                    goto lab_0x4037b1;
                }
                case 84: {
                    goto lab_0x4037b1;
                }
                case 85: {
                    goto lab_0x4037b1;
                }
                case 86: {
                    goto lab_0x4037b1;
                }
                case 87: {
                    goto lab_0x4037b1;
                }
                case 88: {
                    goto lab_0x4037b1;
                }
                case 89: {
                    goto lab_0x4037b1;
                }
                case 90: {
                    goto lab_0x4037b1;
                }
                case 91: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4037b1;
                }
                case 94: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4037b1;
                }
                case 96: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4037b1;
                }
                case 98: {
                    goto lab_0x4037b1;
                }
                case 99: {
                    goto lab_0x4037b1;
                }
                case 100: {
                    goto lab_0x4037b1;
                }
                case 101: {
                    goto lab_0x4037b1;
                }
                case 102: {
                    goto lab_0x4037b1;
                }
                case 103: {
                    goto lab_0x4037b1;
                }
                case 104: {
                    goto lab_0x4037b1;
                }
                case 105: {
                    goto lab_0x4037b1;
                }
                case 106: {
                    goto lab_0x4037b1;
                }
                case 107: {
                    goto lab_0x4037b1;
                }
                case 108: {
                    goto lab_0x4037b1;
                }
                case 109: {
                    goto lab_0x4037b1;
                }
                case 110: {
                    goto lab_0x4037b1;
                }
                case 111: {
                    goto lab_0x4037b1;
                }
                case 112: {
                    goto lab_0x4037b1;
                }
                case 113: {
                    goto lab_0x4037b1;
                }
                case 114: {
                    goto lab_0x4037b1;
                }
                case 115: {
                    goto lab_0x4037b1;
                }
                case 116: {
                    goto lab_0x4037b1;
                }
                case 117: {
                    goto lab_0x4037b1;
                }
                case 118: {
                    goto lab_0x4037b1;
                }
                case 119: {
                    goto lab_0x4037b1;
                }
                case 120: {
                    goto lab_0x4037b1;
                }
                case 121: {
                    goto lab_0x4037b1;
                }
                case 122: {
                    goto lab_0x4037b1;
                }
                case 123: {
                    goto lab_0x403755;
                }
                case 124: {
                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403755;
                }
                case 126: {
                    goto lab_0x40377d;
                }
                default: {
                    goto lab_0x403b55;
                }
            }
        }
      lab_0x403b55:
        if (v23 != 1) {
            // 0x403ec0
            ps = 0;
            int64_t len = v15; // 0x403ed0
            if (v15 == -1) {
                // 0x403ed2
                len = strlen((char *)str);
            }
            // 0x403efe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403f5f:
                // 0x403f5f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403f64
                int64_t v30 = v29 + str;
                v24 = function_406dc0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4044da_2;
                    }
                    case -1: {
                        goto lab_0x4044da_2;
                    }
                    case -2: {
                        // 0x4045bd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4045f7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4045fa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404607
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404600
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4044da
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4044da_2;
                    }
                    case 1: {
                        goto lab_0x403f30;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403fdc
                        char v34 = *(char *)v33; // 0x403fed
                        unsigned char v35; // 0x403607
                        if (v34 < 125) {
                            // 0x403ff8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40400f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403fe0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403fed
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403ff8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40400f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403fe0
                            v33++;
                        }
                        goto lab_0x403f30;
                    }
                }
            }
            goto lab_0x4044da_2;
        } else {
            // 0x403ba4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4037b1;
        }
    }
  lab_0x403dd8:
    // 0x403dd8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4046da
        if (v8 > result) {
            // 0x4046e3
            *(char *)(v12 + result) = 0;
        }
        // 0x403a07
        return result;
    }
    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4037b1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4037c0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4039ca_2;
        }
    }
    int64_t v39 = result; // 0x4038c1
    char v40 = v20; // 0x4038c1
    int64_t v41 = v38; // 0x4038c1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4038c1
    int64_t v43 = v36; // 0x4038c1
    goto lab_0x40383d;
  lab_0x4039ca_2:
    // 0x403a07
    return function_4035b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4044da_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4037b1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4040ae
        int64_t v50 = v5 + 1; // 0x404191
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404198
        char v52 = v20; // 0x404198
        int64_t v53 = result; // 0x404198
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404161
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404165
            int64_t v56 = v54 + 1; // 0x40416a
            int64_t v57 = v51 + 1; // 0x404191
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40415c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404161
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404165
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
        goto lab_0x40383d;
    }
  lab_0x403f30:
    // 0x403f30
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403f4f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403f52
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4044da
        goto lab_0x4044da_2;
    }
    goto lab_0x403f5f;
  lab_0x40377d:
    // 0x40377d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4039ca_2;
    }
    goto lab_0x4037b1;
  lab_0x403755:;
    bool v60 = v15 == 1; // 0x403760
    if (v15 == -1) {
        // 0x403762
        v60 = *(char *)v1 == 0;
    }
    // 0x40376e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4037b1;
    } else {
        goto lab_0x40377d;
    }
  lab_0x40383d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403842
        *(char *)(v44 + v45) = v40;
    }
    // 0x403846
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403658_2;
}
// Address range: 0x4047e0 - 0x40497e
int64_t function_4047e0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4047e2
    int32_t * v3 = __errno_location(); // 0x4047fc
    int64_t v4 = (int64_t)g25; // 0x404801
    int32_t v5 = *v3; // 0x40480b
    int64_t v6 = v4; // 0x404821
    if (v2 >= (int64_t)*(int32_t *)&g28) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404979
            function_405840(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404830
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404837
        int64_t v9; // 0x4047e0
        if (g25 == &g26) {
            int64_t v10 = function_405650(0, v8); // 0x40495a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g26); // 0x40495f
            *(int64_t *)&g25 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405650(v4, v8); // 0x40484b
            *(int64_t *)&g25 = v12;
            v9 = v12;
        }
        // 0x40485a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g28; // 0x40485a
        int32_t v14 = v7; // 0x404861
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g28 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404891
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40489b
    int64_t * v17 = (int64_t *)v15; // 0x40489e
    uint64_t v18 = *v17; // 0x40489e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4048a1
    int64_t result = *v19; // 0x4048a1
    int64_t v20; // 0x4047e0
    uint64_t v21 = function_4035b0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4048c4
    if (v18 > v21) {
        // 0x40493b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4048d7
    *v17 = v22;
    if (result != (int64_t)&g53) {
        // 0x4048e7
        free((int64_t *)result);
    }
    int64_t result2 = function_4055f0(v22); // 0x404901
    *v19 = result2;
    int64_t v23; // 0x4047e0
    function_4035b0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40493b
    *v3 = v5;
    return result2;
}
// Address range: 0x404980 - 0x4049b4
int64_t function_404980(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404987
    int64_t result = function_4057f0(a1 == 0 ? (int64_t)&g54 : a1, 56); // 0x4049a6
    return result;
}
// Address range: 0x4049c0 - 0x4049cf
int64_t function_4049c0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g54 : a1); // 0x4049cc
    return result;
}
// Address range: 0x4049d0 - 0x4049df
int64_t function_4049d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g54 : a1; // 0x4049d8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g54;
}
// Address range: 0x4049e0 - 0x404a13
int64_t function_4049e0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g54 + 8 : a1 + 8; // 0x4049f9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4049fe
    uint32_t v3 = *v2; // 0x4049fe
    uint32_t v4 = (int32_t)a2 % 32; // 0x404a02
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404a20 - 0x404a33
int64_t function_404a20(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g54 + 4 : a1 + 4); // 0x404a2c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404a40 - 0x404a6b
int64_t function_404a40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g54 : a1; // 0x404a48
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404a65
        abort();
        // UNREACHABLE
    }
    // 0x404a5c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g54;
}
// Address range: 0x404a70 - 0x404ae2
int64_t function_404a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g54 : a5; // 0x404a92
    int32_t * v2 = __errno_location(); // 0x404a9b
    uint32_t v3 = *(int32_t *)v1; // 0x404abb
    int64_t result = function_4035b0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x404aca
    return result;
}
// Address range: 0x404af0 - 0x404bd1
int64_t function_404af0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g54 : a4; // 0x404b12
    int32_t * v2 = __errno_location(); // 0x404b18
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404b37
    int32_t * v4 = (int32_t *)v1; // 0x404b3a
    int64_t v5 = function_4035b0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404b55
    int64_t v6 = v5 + 1; // 0x404b5a
    int64_t result = function_4055f0(v6); // 0x404b6f
    function_4035b0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404bb4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x404bbd
    return result;
}
// Address range: 0x404be0 - 0x404bea
int64_t function_404be0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404be0
    return function_404af0(a1, a2, 0, a3);
}
// Address range: 0x404bf0 - 0x404c85
int64_t function_404bf0(void) {
    uint32_t v1 = *(int32_t *)&g28; // 0x404bf0
    int64_t v2 = v1; // 0x404bf0
    int64_t v3 = v2; // 0x404c04
    if (v1 >= 2) {
        int64_t v4 = &g28;
        int64_t v5 = v4 + 16; // 0x404c23
        free((int64_t *)*(int64_t *)v4);
        v3 = &g66;
        while (v5 != (int64_t)g25 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404c20
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g66;
        }
    }
    int64_t v6 = v3; // 0x404c3d
    if (g26 != 0x60c320) {
        // 0x404c3f
        free((int64_t *)g26);
        g26 = 256;
        *(int64_t *)&g27 = (int64_t)&g53;
        v6 = &g66;
    }
    int64_t result = v6; // 0x404c61
    if (g25 != &g26) {
        // 0x404c63
        free(g25);
        *(int64_t *)&g25 = (int64_t)&g26;
        result = &g66;
    }
    // 0x404c76
    *(int32_t *)&g28 = 1;
    return result;
}
// Address range: 0x404c90 - 0x404ca1
int64_t function_404c90(void) {
    // 0x404c90
    int64_t v1; // 0x404c90
    return function_4047e0(v1, v1, -1, (int64_t *)&g54);
}
// Address range: 0x404cb0 - 0x404cba
int64_t function_404cb0(void) {
    // 0x404cb0
    int64_t v1; // 0x404cb0
    return function_4047e0(v1, v1, v1, (int64_t *)&g54);
}
// Address range: 0x404cc0 - 0x404cd6
int64_t function_404cc0(int64_t a1) {
    // 0x404cc0
    return function_4047e0(0, a1, -1, (int64_t *)&g54);
}
// Address range: 0x404ce0 - 0x404cf2
int64_t function_404ce0(int64_t a1, int64_t a2) {
    // 0x404ce0
    return function_4047e0(0, a1, a2, (int64_t *)&g54);
}
// Address range: 0x404d00 - 0x404d68
int64_t function_404d00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404d10
    return function_4047e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404d70 - 0x404dd4
int64_t function_404d70(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404d80
    return function_4047e0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404de0 - 0x404dec
int64_t function_404de0(int64_t a1, int64_t a2) {
    // 0x404de0
    return function_404d00(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404df0 - 0x404dff
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404df0
    return function_404d70(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404e00 - 0x404e70
int64_t function_404e00(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g54); // 0x404e0d
    int128_t v2 = __asm_movdqa(g55); // 0x404e15
    int128_t v3 = __asm_movdqa(g56); // 0x404e1d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404e32
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404e48
    uint32_t v6 = *v5; // 0x404e48
    uint32_t v7 = (int32_t)a3 % 32; // 0x404e4d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4047e0(0, a1, a2, &v4);
}
// Address range: 0x404e70 - 0x404e7d
int64_t function_404e70(int64_t a1, int64_t a2) {
    // 0x404e70
    return function_404e00(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404e80 - 0x404e91
int64_t function_404e80(int64_t a1) {
    // 0x404e80
    return function_404e00(a1, -1, 58);
}
// Address range: 0x404ea0 - 0x404eaa
int64_t function_404ea0(void) {
    // 0x404ea0
    int64_t v1; // 0x404ea0
    return function_404e00(v1, v1, 58);
}
// Address range: 0x404eb0 - 0x404f1e
int64_t function_404eb0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404eca
    return function_4047e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404f20 - 0x404f8c
int64_t function_404f20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g54); // 0x404f27
    int128_t v2 = __asm_movdqa(g55); // 0x404f2f
    int128_t v3 = __asm_movdqa(g56); // 0x404f37
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404f59
    if (a2 == 0 || a3 == 0) {
        // 0x404f87
        abort();
        // UNREACHABLE
    }
    // 0x404f6a
    return function_4047e0(a1, a4, a5, &v4);
}
// Address range: 0x404f90 - 0x404f99
int64_t function_404f90(void) {
    // 0x404f90
    int64_t v1; // 0x404f90
    return function_404f20(v1, v1, v1, v1, -1);
}
// Address range: 0x404fa0 - 0x404fb7
int64_t function_404fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404fa0
    return function_404f20(0, a1, a2, a3, -1);
}
// Address range: 0x404fc0 - 0x404fd3
int64_t function_404fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404fc0
    return function_404f20(0, a1, a2, a3, a4);
}
// Address range: 0x404fe0 - 0x404fea
int64_t function_404fe0(void) {
    // 0x404fe0
    int64_t v1; // 0x404fe0
    return function_4047e0(v1, v1, v1, &g24);
}
// Address range: 0x404ff0 - 0x405002
int64_t function_404ff0(int64_t a1, int64_t a2) {
    // 0x404ff0
    return function_4047e0(0, a1, a2, &g24);
}
// Address range: 0x405010 - 0x405021
int64_t function_405010(int64_t a1, int64_t a2) {
    // 0x405010
    return function_4047e0(a1, a2, -1, &g24);
}
// Address range: 0x405030 - 0x405046
int64_t function_405030(int64_t a1) {
    // 0x405030
    return function_4047e0(0, a1, -1, &g24);
}
// Address range: 0x405050 - 0x40542d
int64_t function_405050(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4050e8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40506c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405086
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4050cb
    if (a6 < 10) {
        // 0x4050da
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4051d2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405430 - 0x405450
int64_t function_405430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405430
    if (a5 == 0) {
        // 0x40544b
        return function_405050(a1, a2, a3, a4, a5, 0, (int64_t)&g66);
    }
    int64_t v1 = 0; // 0x405437
    v1++;
    int64_t v2 = v1; // 0x405449
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405440
        v1++;
        v2 = v1;
    }
    // 0x40544b
    return function_405050(a1, a2, a3, a4, a5, v2, (int64_t)&g66);
}
// Address range: 0x405450 - 0x4054b0
int64_t function_405450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405450
    int64_t v3 = &v2; // 0x405450
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405483
    int64_t v6; // 0x40546d
    int64_t * v7; // 0x40548b
    int64_t v8; // 0x40548b
    int64_t v9; // 0x405497
    if (v5 < 48) {
        // 0x405460
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4054a3
            break;
        }
    } else {
        // 0x40548b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4054a3
            break;
        }
    }
    int64_t v10 = 10; // 0x405481
    while (v4 != 9) {
        // 0x405479
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405460
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4054a3
                break;
            }
        } else {
            // 0x40548b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4054a3
                break;
            }
        }
        // 0x405479
        v10 = 10;
    }
    // 0x4054a3
    return function_405050(a1, a2, a3, a4, v3, v10, (int64_t)&g66);
}
// Address range: 0x4054b0 - 0x40556c
int64_t function_4054b0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4054b0
    int64_t v1; // bp-168, 0x4054b0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4054b0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4054b0
    int64_t v8; // 0x4054b0
    int64_t v9; // bp-56, 0x4054b0
    int64_t v10; // 0x405515
    int64_t v11; // 0x405539
    if ((int32_t)v6 < 48) {
        // 0x405500
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405550
            break;
        }
    } else {
        // 0x405532
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405550
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40552a
    int64_t v13 = 10; // 0x40552a
    while (v5 != 9) {
        // 0x40552c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405500
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405550
                break;
            }
        } else {
            // 0x405532
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405550
                break;
            }
        }
        // 0x405522
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405550
    int64_t v14; // bp-136, 0x4054b0
    int64_t result = function_405050(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g66); // 0x40555f
    return result;
}
// Address range: 0x405570 - 0x4055e4
int64_t function_405570(int64_t a1) {
    // 0x405570
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4055d3
    return fputs_unlocked(v1, g33);
}
// Address range: 0x4055f0 - 0x40560a
int64_t function_4055f0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4055f4
    if (size != 0 != (mem == NULL)) {
        // 0x405603
        return (int64_t)mem;
    }
    // 0x405605
    function_405840(size);
    // UNREACHABLE
}
// Address range: 0x405610 - 0x405631
int64_t function_405610(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405613
    int64_t v2 = v1; // 0x405613
    if (v2 < 0) {
        // 0x40562b
        function_405840(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405629
        return function_4055f0(v2);
    }
    // 0x40562b
    function_405840(v2);
    // UNREACHABLE
}
// Address range: 0x405640 - 0x405642
int64_t function_405640(void) {
    // 0x405640
    int64_t v1; // 0x405640
    return function_4055f0(v1);
}
// Address range: 0x405650 - 0x405686
int64_t function_405650(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405678
        free(v1);
        return (int32_t)&g66 ^ (int32_t)&g66;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405661
    if (a2 != 0 != (mem == NULL)) {
        // 0x405670
        return (int64_t)mem;
    }
    // 0x405681
    function_405840(a1);
    // UNREACHABLE
}
// Address range: 0x405690 - 0x4056b1
int64_t function_405690(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405693
    int64_t v2 = v1; // 0x405693
    if (v2 < 0) {
        // 0x4056ab
        function_405840(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4056a9
        return function_405650(a1, v2);
    }
    // 0x4056ab
    function_405840(a1);
    // UNREACHABLE
}
// Address range: 0x4056c0 - 0x405746
int64_t function_4056c0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40571b
            function_405840(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405650(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405703
    if (a2 == 0) {
        // 0x405728
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405708
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40571b
        function_405840(a1);
        // UNREACHABLE
    }
    // 0x4056ea
    *(int64_t *)a2 = v2;
    return function_405650(a1, v2 * a3);
}
// Address range: 0x405750 - 0x4057a0
int64_t function_405750(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405750
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40579a
            function_405840(a1);
            // UNREACHABLE
        }
        // 0x405772
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405650(a1, v1);
    }
    if (a2 == 0) {
        // 0x405785
        *(int64_t *)a2 = 128;
        return function_405650(0, 128);
    }
    // 0x405798
    if (a2 < 0) {
        // 0x40579a
        function_405840(a1);
        // UNREACHABLE
    }
    // 0x405772
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405650(a1, v1);
}
// Address range: 0x4057a0 - 0x4057b7
int64_t function_4057a0(int64_t a1, int64_t a2) {
    // 0x4057a0
    return (int64_t)memset((int64_t *)function_4055f0(a1), 0, (int32_t)a1);
}
// Address range: 0x4057c0 - 0x4057ee
int64_t function_4057c0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4057c7
    if ((int64_t)v1 < 0) {
        // 0x4057e9
        function_405840(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4057e9
        function_405840(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4057da
    if (mem != NULL) {
        // 0x4057e4
        return (int64_t)mem;
    }
    // 0x4057e9
    function_405840(nmemb);
    // UNREACHABLE
}
// Address range: 0x4057f0 - 0x405818
int64_t function_4057f0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4055f0(a2); // 0x4057ff
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405820 - 0x405833
int64_t function_405820(int64_t str) {
    // 0x405820
    return function_4057f0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405840 - 0x405871
int64_t function_405840(int64_t a1) {
    // 0x405840
    error(g23, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405880 - 0x405934
int64_t function_405880(int64_t err_num, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x405880
    error(0, (int32_t)err_num, dcgettext(NULL, "string comparison failed", 5));
    error(0, (int32_t)"Set LC_ALL='C' to work around the problem." ^ (int32_t)"Set LC_ALL='C' to work around the problem.", dcgettext(NULL, "Set LC_ALL='C' to work around the problem.", 5));
    function_404d70(1, 8, a4, a5);
    function_404d70(0, 8, a2, a3);
    error(g23, (int32_t)"The strings compared were %s and %s." ^ (int32_t)"The strings compared were %s and %s.", dcgettext(NULL, "The strings compared were %s and %s.", 5));
    return &g66;
}
// Address range: 0x405940 - 0x405995
int64_t function_405940(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_4074d0(a1, a2, a3, a4); // 0x405954
    __errno_location();
    return v1 & 0xffffffff;
}
// Address range: 0x4059a0 - 0x4059f7
int64_t function_4059a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_407580(a1, a2, a3, a4); // 0x4059b4
    __errno_location();
    return v1 & 0xffffffff;
}
// Address range: 0x405a00 - 0x405e30
int64_t function_405a00(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x405a0e
    if (base >= 37) {
        // 0x405e0b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g66;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x405a32
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x405a62
    int64_t v3 = str; // 0x405a67
    char v4 = c; // 0x405a67
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x405a5c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x405a58
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x405a69
    if (v4 == 45) {
        // 0x405aa3
        return 4;
    }
    // 0x405a6e
    int64_t v6; // bp-64, 0x405a00
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x405a2e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x405a74
    int64_t * v7 = (int64_t *)endptr; // 0x405a79
    int64_t v8 = *v7; // 0x405a79
    char v9; // 0x405a00
    int64_t v10; // 0x405a00
    int64_t v11; // 0x405a00
    int64_t v12; // 0x405a00
    int64_t v13; // 0x405a00
    int64_t v14; // 0x405a00
    int64_t v15; // 0x405a00
    if (v8 == str) {
        // 0x405ad0
        if (c == 0 || str2 == NULL) {
            // 0x405aa3
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x405af1
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x405aa3
            return 4;
        }
        goto lab_0x405aff;
    } else {
        int32_t v16 = *v1; // 0x405a84
        int64_t v17 = 0; // 0x405a8a
        if (v16 != 0) {
            // 0x405ab8
            v17 = 1;
            if (v16 != 34) {
                // 0x405aa3
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x405a74
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x405aa0;
        } else {
            char c2 = *(char *)v8; // 0x405a93
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x405bf3
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x405aff;
                } else {
                    goto lab_0x405c05;
                }
            } else {
                goto lab_0x405aa0;
            }
        }
    }
  lab_0x405aff:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x405b07
    int64_t v21 = 1; // 0x405b07
    int64_t v22; // 0x405a00
    int64_t v23; // 0x405a00
    int64_t v24; // 0x405a00
    int64_t v25; // 0x405a00
    int64_t v26; // 0x405a00
    int64_t v27; // 0x405a00
    int64_t v28; // 0x405a00
    int64_t v29; // 0x405a00
    int64_t v30; // 0x405a00
    int64_t v31; // 0x405a00
    int64_t v32; // 0x405a00
    int64_t v33; // 0x405a00
    int64_t v34; // 0x405a00
    int64_t v35; // 0x405a00
    int64_t v36; // 0x405a00
    int64_t v37; // 0x405a00
    int64_t v38; // 0x405a00
    int64_t v39; // 0x405a00
    int64_t v40; // 0x405a00
    int64_t v41; // 0x405a00
    if (v19 < 48) {
        // 0x405b09
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x405b6a;
        } else {
            // 0x405b1c
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x405b6a;
            } else {
                // 0x405b38
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x405b6a;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x405d99
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x405b6a;
                    }
                    default: {
                        // 0x405b4d
                        g63 = v19;
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
                                goto lab_0x405d0b;
                            }
                            case 70: {
                                goto lab_0x405c05;
                            }
                            case 71: {
                                goto lab_0x405d43;
                            }
                            case 72: {
                                goto lab_0x405c05;
                            }
                            case 73: {
                                goto lab_0x405c05;
                            }
                            case 74: {
                                goto lab_0x405c05;
                            }
                            case 75: {
                                goto lab_0x405bcc;
                            }
                            case 76: {
                                goto lab_0x405c05;
                            }
                            case 77: {
                                goto lab_0x405b8e;
                            }
                            case 78: {
                                goto lab_0x405c05;
                            }
                            case 79: {
                                goto lab_0x405c05;
                            }
                            case 80: {
                                goto lab_0x405cd8;
                            }
                            case 81: {
                                goto lab_0x405c05;
                            }
                            case 82: {
                                goto lab_0x405c05;
                            }
                            case 83: {
                                goto lab_0x405c05;
                            }
                            case 84: {
                                goto lab_0x405ca8;
                            }
                            case 85: {
                                goto lab_0x405c05;
                            }
                            case 86: {
                                goto lab_0x405c05;
                            }
                            case 87: {
                                goto lab_0x405c05;
                            }
                            case 88: {
                                goto lab_0x405c05;
                            }
                            case 89: {
                                goto lab_0x405c76;
                            }
                            case 90: {
                                goto lab_0x405c3b;
                            }
                            case 91: {
                                goto lab_0x405c05;
                            }
                            case 92: {
                                goto lab_0x405c05;
                            }
                            case 93: {
                                goto lab_0x405c05;
                            }
                            case 94: {
                                goto lab_0x405c05;
                            }
                            case 95: {
                                goto lab_0x405c05;
                            }
                            case 96: {
                                goto lab_0x405c05;
                            }
                            case 97: {
                                goto lab_0x405c05;
                            }
                            case 98: {
                                goto lab_0x405c1f;
                            }
                            case 99: {
                                goto lab_0x405ba8;
                            }
                            case 100: {
                                goto lab_0x405c05;
                            }
                            case 101: {
                                goto lab_0x405c05;
                            }
                            case 102: {
                                goto lab_0x405c05;
                            }
                            case 103: {
                                goto lab_0x405d43;
                            }
                            case 104: {
                                goto lab_0x405c05;
                            }
                            case 105: {
                                goto lab_0x405c05;
                            }
                            case 106: {
                                goto lab_0x405c05;
                            }
                            case 107: {
                                goto lab_0x405bcc;
                            }
                            case 108: {
                                goto lab_0x405c05;
                            }
                            case 109: {
                                goto lab_0x405b8e;
                            }
                            case 110: {
                                goto lab_0x405c05;
                            }
                            case 111: {
                                goto lab_0x405c05;
                            }
                            case 112: {
                                goto lab_0x405c05;
                            }
                            case 113: {
                                goto lab_0x405c05;
                            }
                            case 114: {
                                goto lab_0x405c05;
                            }
                            case 115: {
                                goto lab_0x405c05;
                            }
                            case 116: {
                                goto lab_0x405ca8;
                            }
                            default: {
                                goto lab_0x405b6a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x405b6a;
    }
  lab_0x405aa0:
    // 0x405aa0
    *a4 = v13;
    // 0x405aa3
    return v10 & 0xffffffff;
  lab_0x405b6a:
    // 0x405b6a
    g64 = v9 - 66;
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
    int64_t v43; // 0x405a00
    switch (v9) {
        case 66: {
            // 0x405d64
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x405bd7;
            } else {
                // 0x405d71
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x405ba8;
            }
        }
        case 69: {
            goto lab_0x405d0b;
        }
        case 71: {
            goto lab_0x405d43;
        }
        case 75: {
            goto lab_0x405bcc;
        }
        case 77: {
            goto lab_0x405b8e;
        }
        case 80: {
            goto lab_0x405cd8;
        }
        case 84: {
            goto lab_0x405ca8;
        }
        case 89: {
            goto lab_0x405c76;
        }
        case 90: {
            goto lab_0x405c3b;
        }
        case 98: {
            goto lab_0x405c1f;
        }
        case 99: {
            goto lab_0x405ba8;
        }
        case 103: {
            goto lab_0x405d43;
        }
        case 107: {
            goto lab_0x405bcc;
        }
        case 109: {
            goto lab_0x405b8e;
        }
        case 116: {
            goto lab_0x405ca8;
        }
        case 119: {
            // 0x405c10
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x405bd7;
            } else {
                // 0x405c15
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x405ba8;
            }
        }
        default: {
            goto lab_0x405c05;
        }
    }
  lab_0x405d0b:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x405d23
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x405d2f
    int64_t v48 = v45; // 0x405d32
    int64_t v49 = v34; // 0x405d32
    int64_t v50 = v46; // 0x405d32
    int32_t v51 = v47; // 0x405d32
    int64_t v52 = v46; // 0x405d32
    while (v47 != 0) {
        // 0x405d20
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
    goto lab_0x405c64;
  lab_0x405d43:
    // 0x405d43
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x405d4e
        int128_t v53; // 0x405d49
        uint128_t v54; // 0x405d49
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x405d4e
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x405a00
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x405d53
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x405d58
                v23 = v57;
                int64_t v58; // 0x405a00
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x405ba8;
  lab_0x405bcc:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x405bcf
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x405ba8;
    } else {
        goto lab_0x405bd7;
    }
  lab_0x405b8e:;
    int128_t v62 = v24; // 0x405b94
    uint128_t v63 = v62 * (int128_t)v14; // 0x405b94
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x405bd7;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x405b99
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x405bd7;
        } else {
            // 0x405b9e
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x405ba8;
        }
    }
  lab_0x405cd8:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x405ceb
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x405cf7
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x405cfa
    int64_t v70 = v67; // 0x405cfa
    while (v68 != 0) {
        // 0x405ce8
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
    goto lab_0x405c64;
  lab_0x405ca8:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x405cbb
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x405cc7
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x405cca
    int64_t v76 = v73; // 0x405cca
    while (v74 != 0) {
        // 0x405cb8
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
    goto lab_0x405c64;
  lab_0x405c76:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x405c8b
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x405c97
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x405c9a
    int64_t v82 = v79; // 0x405c9a
    while (v80 != 0) {
        // 0x405c88
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
    goto lab_0x405c64;
  lab_0x405c3b:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x405c53
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x405c5f
    int32_t v87 = v86; // 0x405c62
    int64_t v88 = v85; // 0x405c62
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x405c50
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
    goto lab_0x405c64;
  lab_0x405c1f:
    // 0x405c1f
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x405bd7;
    } else {
        // 0x405c28
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x405ba8;
    }
  lab_0x405ba8:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x405bad
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x405aa0;
  lab_0x405c05:
    // 0x405c05
    *a4 = v15;
    // 0x405aa3
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405bd7:
    // 0x405bd7
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x405ba8;
  lab_0x405c64:
    // 0x405c64
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x405ba8;
}
// Address range: 0x405e30 - 0x405eab
int64_t function_405e30(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405e37
    if (fileno(stream) < 0) {
        // 0x405e97
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405e4a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405e7b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405e97
            return fclose(stream);
        }
    }
    // 0x405e4c
    if ((int32_t)function_405eb0(a1, v1) == 0) {
        // 0x405e97
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405e58
    int32_t v3 = *v2; // 0x405e60
    int64_t result = fclose(stream); // 0x405e6e
    if (v3 != 0) {
        // 0x405ea0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405e70
    return result;
}
// Address range: 0x405eb0 - 0x405ef0
int64_t function_405eb0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405eca
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405eca
        return fflush(stream);
    }
    // 0x405ed8
    function_405f90(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405ef0 - 0x405f8e
int64_t function_405ef0(int64_t a1, int64_t a2) {
    char * file_path = (char *)a1; // 0x405efe
    char * mode = (char *)a2; // 0x405efe
    int64_t stream; // 0x405ef0
    struct _IO_FILE * file = freopen(file_path, mode, (struct _IO_FILE *)stream); // 0x405efe
    if (a1 == 0 || file == NULL) {
        // 0x405f28
        return (int64_t)file;
    }
    int32_t fd2 = fileno(file); // 0x405f13
    if (dup2(fd2, fd2) >= 0 || *__errno_location() != 9) {
        // 0x405f28
        return (int64_t)file;
    }
    int32_t fd = open("/dev/null", O_CLOEXEC); // 0x405f4e
    if (fd == fd2) {
        // 0x405f71
        return (int64_t)freopen(file_path, mode, file);
    }
    int32_t v1 = dup2(fd, fd2); // 0x405f60
    close(fd);
    if (v1 < 0) {
        // 0x405f28
        return (int64_t)file;
    }
    // 0x405f71
    return (int64_t)freopen(file_path, mode, file);
}
// Address range: 0x405f90 - 0x405fe7
int64_t function_405f90(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405f90
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405f9a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405fcb
    int64_t result = -1; // 0x405fd4
    if (v1 != -1) {
        // 0x405fd6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405fe2
    return result;
}
// Address range: 0x405ff0 - 0x4060cf
int64_t function_405ff0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x405ffc
    uint32_t v2 = *v1; // 0x405ffc
    int64_t v3 = a2 & 0xffffffff; // 0x406001
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x406004
    uint64_t v5 = (int64_t)*v4; // 0x406004
    int64_t v6; // 0x406072
    if (v3 <= v5) {
      lab_0x40606c_2:
        // 0x40606c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405ff2
    int64_t v8 = v2; // 0x405ff0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40606c
        goto lab_0x40606c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x406028
    int64_t v17; // 0x406036
    int64_t * v18; // 0x406050
    int64_t * v19; // 0x406053
    int64_t v20; // 0x40605e
    int64_t v21; // 0x406036
    while ((v16 & 0xffffffff) > v10) {
        // 0x406033
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x406050
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x406067
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40606c
            goto lab_0x40606c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40606c
            goto lab_0x40606c_2;
        }
        // 0x406022
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4060ab
    int64_t * v23 = (int64_t *)v22; // 0x4060b0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4060b3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4060b0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4060c7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40601d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40606c
            goto lab_0x40606c_2;
        }
        // 0x406022
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x406033
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x406050
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x406067
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40606c
                goto lab_0x40606c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40606c
                goto lab_0x40606c_2;
            }
            // 0x406022
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x406090
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4060b0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4060c7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40606c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4060d0 - 0x4066ec
int64_t function_4060d0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4060ef
    int64_t v2 = *v1; // 0x4060ef
    char * str2 = (char *)v2; // 0x4060fc
    char c = *str2; // 0x4060fc
    int64_t v3 = v2; // 0x406128
    int64_t v4 = 0; // 0x4060d0
    int32_t v5; // 0x4060d0
    int64_t v6; // 0x4060d0
    int64_t v7; // 0x4060d0
    int64_t v8; // 0x4060d0
    int64_t v9; // 0x4060d0
    int64_t v10; // 0x4060d0
    int64_t v11; // 0x4060d0
    int64_t v12; // 0x4060d0
    int64_t v13; // 0x4060d0
    int64_t str3; // 0x4060d0
    int64_t v14; // 0x4060d0
    int64_t v15; // 0x4060d0
    int64_t v16; // 0x4060d0
    int64_t v17; // 0x4060d0
    int32_t v18; // 0x4060d0
    int32_t v19; // 0x4060d0
    int32_t v20; // 0x4060d0
    int32_t v21; // 0x4060d0
    int32_t v22; // 0x4060d0
    int32_t v23; // 0x4060d0
    int32_t v24; // 0x4060d0
    int32_t v25; // 0x4060d0
    int32_t v26; // 0x4060d0
    int32_t v27; // 0x4060d0
    int32_t v28; // 0x4060d0
    int32_t v29; // 0x4060d0
    int64_t nmemb; // 0x4060d0
    int64_t v30; // 0x4060d0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40612c
            while (v31 != 0 == (v31 != 61)) {
                // 0x406128
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406138
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40613e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x406108
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40616c
                int64_t v34; // 0x4060d0
                int64_t v35; // 0x4060d0
                if (strncmp(str, str2, n) == 0) {
                    // 0x406175
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4062f0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x406186
                int64_t v37 = *(int64_t *)v36; // 0x40618a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x406160
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x406175
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4062f0;
                        }
                    }
                    // 0x406186
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
                  lab_0x4061d6:
                    // 0x4061d6
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
                        goto lab_0x406230;
                    } else {
                        if (v11 == 0) {
                            // 0x4063a0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406230;
                        } else {
                            if (v39 == 0) {
                                // 0x406350
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4061fa;
                                } else {
                                    // 0x40635c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4061fa;
                                    } else {
                                        // 0x40636a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4061fa;
                                        } else {
                                            goto lab_0x406230;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4061fa;
                            }
                        }
                    }
                }
              lab_0x406241:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406416
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4065c2
                            flockfile(g36);
                            int64_t v41 = *v1; // 0x4065e2
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40662f
                            int64_t v43 = (int64_t)g36;
                            int64_t v44 = v43; // 0x406649
                            int64_t v45; // 0x40664b
                            if (*(char *)v42 != 0) {
                                // 0x40664b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g36;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406643
                            while (v17 + nmemb != v42) {
                                // 0x406645
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40664b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g36;
                                }
                                // 0x406638
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406670
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g36);
                            v40 = *v1;
                        } else {
                            // 0x406424
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40657f
                        free((int64_t *)v17);
                    }
                    // 0x406479
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406490
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40633e
                    return 63;
                }
                // 0x406260
                v5 = v39;
                if (v13 != 0) {
                    // 0x4062e4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4062f0:;
                    int32_t * v49 = (int32_t *)a7; // 0x406300
                    uint32_t v50 = *v49; // 0x406300
                    int64_t v51 = v50; // 0x406300
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40630a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406313
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40653f
                                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4064ea
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40633e
                            return 63;
                        }
                        // 0x406388
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40669f
                                    __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40659d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4065b0
                                // 0x40633e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4064ae
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4064c2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40632b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40632e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406332
                    int64_t result = v59; // 0x406338
                    if (v58 != 0) {
                        // 0x40633a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40633e
                    return result;
                }
            } else {
                // 0x40613e
                v5 = v32;
            }
            // break -> 0x406265
            break;
        }
    }
    // 0x406265
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40627d
        if (*(char *)(v60 + 1) != 45) {
            // 0x406287
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40633e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4063c9
        __fprintf_chk(g36, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4062b6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4062c6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406230:
    // 0x406230
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406230
    int64_t v63 = *(int64_t *)v62; // 0x406234
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406241
        goto lab_0x406241;
    }
    goto lab_0x4061d6;
  lab_0x4061fa:
    // 0x4061fa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4060d0
    int32_t v65; // 0x4060d0
    int32_t v66; // 0x4060d0
    if (v27 != 0) {
        goto lab_0x406230;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4063b0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406230;
            } else {
                goto lab_0x406221;
            }
        } else {
            // 0x406215
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40650c
                int64_t v67 = (int64_t)mem; // 0x40650c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406230;
                } else {
                    // 0x40651f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406221;
                }
            } else {
                goto lab_0x406221;
            }
        }
    }
  lab_0x406221:
    // 0x406221
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406230;
}
// Address range: 0x4066f0 - 0x406cb6
int64_t function_4066f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406711
    if (v3 < 1) {
        // 0x4068ce
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40670d
    int32_t v5 = *(int32_t *)a7; // 0x406719
    uint64_t v6 = a1 & 0xffffffff; // 0x40671b
    int64_t v7 = v2; // 0x406720
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406723
    *v8 = 0;
    int64_t v9; // 0x4066f0
    int64_t v10; // 0x4066f0
    int64_t v11; // 0x4066f0
    int64_t v12; // 0x4066f0
    int64_t str; // 0x4066f0
    int64_t v13; // 0x4066f0
    int64_t v14; // 0x4066f0
    int64_t v15; // 0x4066f0
    int64_t v16; // 0x4066f0
    int64_t v17; // 0x4066f0
    int32_t v18; // 0x4066f0
    char v19; // 0x4066f0
    if (v5 == 0) {
        // 0x406908
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40673a;
    } else {
        // 0x406733
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406780
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406783
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406848;
            } else {
                int64_t v22 = v7 + 1; // 0x406796
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4067a6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40685c;
                } else {
                    goto lab_0x4067b8;
                }
            }
        } else {
            goto lab_0x40673a;
        }
    }
  lab_0x40673a:
    // 0x40673a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406740
    *v24 = 0;
    int64_t v25; // 0x4066f0
    int64_t v26; // 0x4066f0
    int64_t v27; // 0x4066f0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406830
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40683d;
        }
        case 43: {
            // 0x406b40
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40683d;
        }
        default: {
            // 0x40675c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x406abf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406bd8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40683d;
                } else {
                    // 0x406acd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40676a;
                }
            } else {
                goto lab_0x40676a;
            }
        }
    }
  lab_0x406848:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40684f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4067b8;
    } else {
        goto lab_0x40685c;
    }
  lab_0x40676a:
    // 0x40676a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40683d;
  lab_0x40683d:
    // 0x40683d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406848;
  lab_0x4067b8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4067b8
    int64_t v31 = v30; // 0x4067b8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4067ba
    if ((int64_t)*v32 > v31) {
        // 0x4067bf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4067c2
    if (*v33 > v30) {
        // 0x4067c7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4067ca
    int64_t v35 = v31; // 0x4067ce
    int64_t v36 = v15; // 0x4067ce
    int64_t v37; // 0x4066f0
    int64_t v38; // 0x4066f0
    int64_t v39; // 0x4066f0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406938
        int64_t v41 = v40; // 0x406938
        v2 = v41;
        int64_t v42; // 0x4066f0
        if (*v33 == v40) {
            // 0x406b20
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406b28
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406944
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406948
                function_405ff0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406958
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406961
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40696a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406981
            int64_t v47 = v45 & 0xffffffff; // 0x406985
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40698e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406994
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406996;
                }
            }
            int64_t v48 = v47 + 1; // 0x406970
            int64_t v49 = v48 & 0xffffffff; // 0x406970
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406981
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40698e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406994
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406996;
                    }
                }
                // 0x406970
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406b38
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406996;
    } else {
        goto lab_0x4067d4;
    }
  lab_0x40685c:
    // 0x40685c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40685f
    int64_t v51 = v12; // 0x40685f
    int64_t v52 = v14; // 0x40685f
    if (*(char *)v10 == 0) {
        goto lab_0x4067b8;
    } else {
        goto lab_0x406865;
    }
  lab_0x4067d4:;
    int32_t v53 = v35; // 0x4067d4
    int64_t v54; // 0x4066f0
    int64_t v55; // 0x4066f0
    int64_t v56; // 0x4066f0
    int64_t v57; // 0x4066f0
    int64_t v58; // 0x4066f0
    int64_t v59; // 0x4066f0
    char * v60; // 0x4066f0
    int64_t v61; // 0x4066f0
    int64_t v62; // 0x4067e9
    int64_t v63; // 0x4066f0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406923
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406926;
    } else {
        // 0x4067dc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4066f0
        int64_t v66 = v65 ? -1 : 1; // 0x4067f0
        int64_t v67 = (int64_t)"--"; // 0x4066f0
        int64_t v68 = v62; // 0x4066f0
        int64_t v69 = 3; // 0x4067f0
        unsigned char v70 = *(char *)v68; // 0x4067f0
        char v71 = *(char *)v67; // 0x4067f0
        char v72 = v71; // 0x4067f0
        bool v73 = false; // 0x4067f0
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
            // 0x4068e0
            if (*(char *)v62 == 45) {
                // 0x4069a0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4069a0
                if (c == 0) {
                    goto lab_0x4068ea;
                } else {
                    // 0x4069ad
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406a30;
                    } else {
                        if (c == 45) {
                            // 0x406c13
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406a85;
                        } else {
                            // 0x4069be
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406a30;
                            } else {
                                // 0x4069c3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4069e4;
                                } else {
                                    // 0x4069ca
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406a30;
                                    } else {
                                        goto lab_0x4069e4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4068ea;
            }
        } else {
            uint32_t v75 = *v33; // 0x406800
            v2 = v75;
            int32_t v76 = *v32; // 0x406803
            int64_t v77 = v35 + 1; // 0x406806
            int32_t v78 = v77; // 0x406809
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406b70
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406817
                    function_405ff0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406825
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406926;
        }
    }
  lab_0x406865:;
    // 0x406865
    int64_t v79; // bp-104, 0x4066f0
    int64_t v80 = &v79; // 0x4066fa
    int64_t v81 = v50 + 1; // 0x406865
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40686c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406871
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406875
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406879
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406881
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406886
    int32_t c2 = v84; // 0x406886
    char * found_char_pos = strchr(str2, c2); // 0x406886
    int64_t v87 = *v82; // 0x40688b
    v2 = v87;
    int64_t v88 = *v85; // 0x406895
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4068a0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406b90
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x406b5d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4068ce
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406886
    char v91 = *(char *)(v90 + 1); // 0x4068bb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406875
        if (v91 != 58) {
            // 0x4068ce
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406ae4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406be8
                *v8 = 0;
            } else {
                // 0x406bcc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x406b0e
            *v83 = 0;
            // 0x4068ce
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x406aee
        if (v93 != 0) {
            // 0x406b80
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x406b0e
            *v83 = 0;
            // 0x4068ce
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406b01
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x406b0e
            *v83 = 0;
            // 0x4068ce
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x406c4a
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x406bfa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406c01
        // 0x406b0e
        *v83 = 0;
        // 0x4068ce
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406a59
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x406a5b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406c80
                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406c31
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406c38
            // 0x4068ce
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406a66
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x406a6a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406a85;
  lab_0x406996:
    // 0x406996
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4067d4;
  lab_0x406a85:;
    int64_t v99 = function_4060d0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406aa3
    // 0x4068ce
    return v99 & 0xffffffff;
  lab_0x406926:;
    int32_t v100 = v55; // 0x406926
    if (v100 != (int32_t)v59) {
        // 0x40692a
        *(int32_t *)a7 = v100;
    }
    // 0x4068ce
    return 0xffffffff;
  lab_0x4068ea:
    // 0x4068ea
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4068f1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4068ce
    return v99 & 0xffffffff;
  lab_0x406a30:
    // 0x406a30
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406865;
  lab_0x4069e4:
    // 0x4069e4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4060d0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x406a0a
    if ((int32_t)v101 != -1) {
        // 0x4068ce
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x406a1f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406a30;
}
// Address range: 0x406cc0 - 0x406d16
int64_t function_406cc0(int64_t a1) {
    // 0x406cc0
    *(int32_t *)&g57 = g31;
    *(int32_t *)&g58 = g30;
    int64_t v1; // 0x406cc0
    int64_t result = function_4066f0(v1, v1, v1, v1, v1, v1, &g57, a1 & 0xffffffff); // 0x406ce6
    g31 = *(int32_t *)&g57;
    g62 = (char *)g60;
    *(int32_t *)&g29 = g59;
    return result;
}
// Address range: 0x406d20 - 0x406d38
int64_t function_406d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406d20
    return function_406cc0(1);
}
// Address range: 0x406d40 - 0x406d53
int64_t function_406d40(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x406d40
    return function_406cc0(0);
}
// Address range: 0x406d60 - 0x406d75
int64_t function_406d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406d60
    return function_4066f0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406d80 - 0x406d96
int64_t function_406d80(void) {
    // 0x406d80
    return function_406cc0(0);
}
// Address range: 0x406da0 - 0x406db8
int64_t function_406da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406da0
    return function_4066f0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406dc0 - 0x406e3a
int64_t function_406dc0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x406dcb
    int64_t v2 = (int64_t)&g15; // 0x406dcb
    int32_t * pwc; // 0x406dc0
    int64_t v3; // 0x406dc0
    int64_t n; // 0x406dc0
    if (a2 == 0) {
        goto lab_0x406e12;
    } else {
        // 0x406dcd
        if (a3 == 0) {
            // 0x406df8
            return -2;
        }
        // 0x406dd9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406e12;
        } else {
            goto lab_0x406de4;
        }
    }
  lab_0x406e12:
    // 0x406e12
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406dc0
    pwc = (int32_t *)&v4;
    goto lab_0x406de4;
  lab_0x406de4:;
    char * wstr = (char *)v3; // 0x406dea
    int64_t ps; // 0x406dc0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x406dea
    int64_t result = v5; // 0x406dea
    if (v5 < 0xfffffffe) {
        // 0x406df8
        return result;
    }
    int64_t result2 = result; // 0x406e29
    if ((char)function_403190(0, v3) == 0) {
        // 0x406e2b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406df8
    return result2;
}
// Address range: 0x406e40 - 0x406e9d
int64_t function_406e40(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406e47
    int64_t v2; // 0x406e40
    int64_t result = function_405e30(a1, v2); // 0x406e58
    if ((v2 & 32) != 0) {
        // 0x406e80
        if ((int32_t)result == 0) {
            // 0x406e84
            *__errno_location() = 0;
        }
        // 0x406e7a
        return 0xffffffff;
    }
    // 0x406e61
    if ((int32_t)result == 0) {
        // 0x406e7a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406e68
    if (v1 == 0) {
        // 0x406e6a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x406e7a
    return result2;
}
// Address range: 0x406ea0 - 0x407402
int64_t function_406ea0(void) {
    char * v1 = nl_langinfo(14); // 0x406eb6
    char * v2 = g61; // 0x406ebb
    char * v3; // 0x406ea0
    int64_t v4; // 0x406ea0
    int64_t v5; // 0x406ea0
    int64_t v6; // 0x406ea0
    int64_t v7; // 0x406ea0
    int32_t size; // 0x406ea0
    int32_t size2; // 0x406ea0
    int32_t len; // 0x406f72
    int64_t v8; // 0x406f72
    char * env_val; // 0x406f5d
    if (v2 == NULL) {
        // 0x406f58
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406fc5;
        } else {
            // 0x406f6a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406fc5;
            } else {
                // 0x406f6f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x406f5d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4073f5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406fc5;
                    } else {
                        // 0x407369
                        size2 = len + 14;
                        goto lab_0x406f8b;
                    }
                } else {
                    goto lab_0x406f8b;
                }
            }
        }
    } else {
        // 0x406ea0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x406eda;
    }
  lab_0x40720c:;
    // 0x40720c
    struct _IO_FILE * stream; // 0x40704b
    int32_t v10 = __uflow(stream); // 0x40720f
    int64_t v11; // 0x406ea0
    int64_t v12 = v11; // 0x407219
    int64_t v13; // 0x406ea0
    int64_t v14 = v13; // 0x407219
    int32_t v15 = v10; // 0x407219
    int64_t v16; // 0x406ea0
    int64_t v17 = v16; // 0x407219
    int64_t v18 = v11; // 0x407219
    int64_t v19 = v13; // 0x407219
    int64_t v20 = v16; // 0x407219
    if (v10 == -1) {
        // break -> 0x40721f
        goto lab_0x40721f;
    }
    goto lab_0x407099;
  lab_0x40708e:;
    // 0x40708e
    int64_t v90; // 0x406ea0
    int64_t * v32; // 0x407080
    *v32 = v90 + 1;
    int64_t v89; // 0x406ea0
    v12 = v89;
    int64_t v91; // 0x406ea0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406ea0
    v17 = v92;
    goto lab_0x407099;
  lab_0x407099:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406ea0
    int32_t v25; // bp-120, 0x406ea0
    int32_t v26; // bp-184, 0x406ea0
    int64_t v27; // 0x40704b
    int64_t v28; // 0x407068
    int64_t v29; // 0x40706d
    int64_t * v30; // 0x407084
    switch (c) {
        case 32: {
            goto lab_0x407080;
        }
        case 10: {
            goto lab_0x407080;
        }
        case 9: {
            goto lab_0x407080;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407271
            int32_t v33; // 0x406ea0
            char v34; // 0x406ea0
            int32_t v35; // 0x40727e
            if (v31 < *v30) {
                // 0x407250
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40727b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407271
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407250
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40727b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407260
                v36 = v33;
            }
            // 0x40734f
            if (v36 == -1) {
                // break -> 0x40721f
                break;
            }
            goto lab_0x407080;
        }
        default: {
            // 0x4070af
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40721f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4070d8
            int64_t v39 = v37 + 4; // 0x4070da
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4070e6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4070e8
            while (v41 == 0) {
                // 0x4070d8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407106
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407112
            int64_t v45 = v43 + 4; // 0x407114
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407120
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407122
            while (v47 == 0) {
                // 0x407112
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40710f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407138
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407148
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40714c
            int64_t v52 = v51 + v48; // 0x407155
            int64_t * mem; // 0x406ea0
            int64_t v53; // 0x406ea0
            int64_t v54; // 0x406ea0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40728b
                int64_t v56 = v55 + 3; // 0x407297
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407171
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407180
            if (mem == NULL) {
                // 0x4073ac
                free((int64_t *)v21);
                function_405e30(v27, v53);
                v24 = (int64_t)&g15;
                goto lab_0x407024;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407198
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4071a2
            uint32_t v62 = (int32_t)v59; // 0x4071a5
            int64_t v63; // 0x406ea0
            if (v62 >= 8) {
                // 0x4072b4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4072ce
                int64_t v66 = v61 - v65; // 0x4072d2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4072dd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4072ee
                    int64_t v70 = v69 & 0xffffffff; // 0x4072ee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4072eb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40737f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4071b7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4071bb
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
            int64_t v73 = v51 + 1; // 0x4071cb
            int64_t v74 = v60 - 1; // 0x4071cf
            uint32_t v75 = (int32_t)v73; // 0x4071d4
            int64_t v76; // 0x406ea0
            if (v75 >= 8) {
                // 0x407302
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40730c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40731c
                int64_t v80 = v74 - v79; // 0x407320
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40732b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40733b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407339
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407396
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40739e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4071e6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4071ea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4073e3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4071fe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40708e;
            } else {
                goto lab_0x40720c;
            }
        }
    }
  lab_0x407080:;
    int64_t v93 = v23; // 0x406ea0
    int64_t v94 = v22; // 0x406ea0
    int64_t v95 = v21; // 0x406ea0
    goto lab_0x407080_2;
  lab_0x406fc5:;
    int64_t * mem3 = malloc(size); // 0x406fc5
    int64_t v97 = (int64_t)&g15; // 0x406fd0
    int64_t v98; // 0x406ea0
    int64_t path; // 0x406ea0
    if (mem3 == NULL) {
        goto lab_0x406fa2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406fc5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406fe6;
    }
  lab_0x406eda:;
    int64_t str = v1 == NULL ? (int64_t)&g15 : (int64_t)v1; // 0x406ecd
    char v100 = *v3; // 0x406eda
    int64_t v101; // 0x406ea0
    if (v100 == 0) {
        // 0x406f34
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406ea0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406ea0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406f20
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406f27;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406ef0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x406efd
        char v107 = *(char *)v106; // 0x406f02
        v102 = v107;
        if (v107 == 0) {
            // 0x406f34
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x406f0b
    v104 = v103 + 1;
  lab_0x406f27:
    // 0x406f34
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406fa2:;
    char * v108 = (char *)v97;
    g61 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x406eda;
  lab_0x406fe6:;
    int64_t v109 = v98 + path; // 0x406fe6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407012
    v24 = (int64_t)&g15;
    if (fd >= 0) {
        // 0x407041
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x407372
            close(fd);
            v24 = (int64_t)&g15;
        } else {
            // 0x407065
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407080_2:;
                uint64_t v96 = *v32; // 0x407080
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40720c;
                } else {
                    goto lab_0x40708e;
                }
            }
          lab_0x40721f:
            // 0x40721f
            function_405e30(v27, v19);
            v24 = (int64_t)&g15;
            if (v18 != 0) {
                // 0x40723e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407024;
  lab_0x406f8b:;
    int64_t * mem4 = malloc(size2); // 0x406f8b
    v97 = (int64_t)&g15;
    if (mem4 != NULL) {
        // 0x407031
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406fe6;
    } else {
        goto lab_0x406fa2;
    }
  lab_0x407024:
    // 0x407024
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406fa2;
}
// Address range: 0x407410 - 0x4074c4
int64_t function_407410(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x40742a
    int64_t v2 = a3; // 0x407432
    int64_t v3 = a1; // 0x407432
    int64_t v4 = a4; // 0x407432
    int64_t v5 = a2; // 0x407432
    *v1 = 0;
    char * str = (char *)v3; // 0x407470
    char * str2 = (char *)v2; // 0x407470
    int32_t strcoll_rc = strcoll(str, str2); // 0x407470
    while (strcoll_rc == 0) {
        int64_t v6 = (int64_t)strlen(str) + 1; // 0x407443
        int64_t v7 = (int64_t)strlen(str2) + 1; // 0x40744f
        v4 -= v7;
        v5 -= v6;
        if (v5 == 0) {
            // 0x407490
            return v4 != 0 ? 0xffffffff : 0;
        }
        // 0x40745e
        v2 += v7;
        v3 += v6;
        if (v4 == 0) {
            // 0x4074b0
            return 1;
        }
        *v1 = 0;
        str = (char *)v3;
        str2 = (char *)v2;
        strcoll_rc = strcoll(str, str2);
    }
    // 0x407479
    return strcoll_rc;
}
// Address range: 0x4074d0 - 0x407571
int64_t function_4074d0(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n == a4) {
        // 0x4074ef
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x407560
            *__errno_location() = 0;
            // 0x40754c
            return 0;
        }
    }
    char * v1 = (char *)(n + str); // 0x407511
    char * v2 = (char *)(a4 + str2); // 0x407515
    *v1 = 0;
    *v2 = 0;
    int64_t v3 = function_407410(str, n + 1, str2, a4 + 1); // 0x407533
    // 0x40754c
    return v3 & 0xffffffff;
}
// Address range: 0x407580 - 0x4075e3
int64_t function_407580(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n != a4 || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x4075c8
        return function_407410(str, n, str2, a4);
    }
    // 0x4075aa
    *__errno_location() = 0;
    return 0;
}
// Address range: 0x4075f0 - 0x40764d
int64_t function_4075f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4075f0
    return function_401530();
}
// Address range: 0x407650 - 0x407651
int64_t function_407650(void) {
    // 0x407650
    int64_t result; // 0x407650
    return result;
}
// Address range: 0x407660 - 0x407678
int64_t function_407660(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407660
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g20);
}
// Address range: 0x407678 - 0x407698
int64_t function_407678(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g16; // 0x407682
    while (*(int64_t *)v1 != -1) {
        // 0x407683
        v1 -= 8;
    }
    // 0x407694
    return result;
}
