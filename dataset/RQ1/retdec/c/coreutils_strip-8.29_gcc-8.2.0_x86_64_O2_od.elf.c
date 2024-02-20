// Address range: 0x401bb0 - 0x401bb5
int64_t function_401bb0(void) {
    // 0x401bb0
    abort();
    // UNREACHABLE
}
// Address range: 0x401bb5 - 0x401bba
int64_t function_401bb5(void) {
    // 0x401bb5
    abort();
    // UNREACHABLE
}
// Address range: 0x401bba - 0x401bbf
int64_t function_401bba(void) {
    // 0x401bba
    abort();
    // UNREACHABLE
}
// Address range: 0x401bbf - 0x401bc4
int64_t function_401bbf(void) {
    // 0x401bbf
    abort();
    // UNREACHABLE
}
// Address range: 0x401bc4 - 0x401bc9
int64_t function_401bc4(void) {
    // 0x401bc4
    abort();
    // UNREACHABLE
}
// Address range: 0x401bc9 - 0x401bce
int64_t function_401bc9(void) {
    // 0x401bc9
    abort();
    // UNREACHABLE
}
// Address range: 0x401bce - 0x401bd3
int64_t function_401bce(void) {
    // 0x401bce
    abort();
    // UNREACHABLE
}
// Address range: 0x401bd3 - 0x401bd8
int64_t function_401bd3(void) {
    // 0x401bd3
    abort();
    // UNREACHABLE
}
// Address range: 0x401be0 - 0x402c5f
int64_t function_401be0(int64_t a1, int64_t a2) {
    // 0x401be0
    function_4055f0(a2);
    setlocale(LC_ALL, (char *)&g27);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401be0
    function_40c270(0x4051b0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    for (int64_t i = 0; i < 9; i++) {
        // 0x401c30
        *(int32_t *)(4 * i + (int64_t)&g60) = 0;
    }
    int64_t v2 = a1 & 0xffffffff; // 0x401be8
    g63 = 3;
    g64 = 5;
    g61 = 1;
    for (int64_t i = 0; i < 17; i++) {
        // 0x401c70
        *(int32_t *)(4 * i + 0x612340) = 0;
    }
    // 0x401c85
    g57 = 6;
    g59 = 8;
    g58 = 7;
    g71 = 0;
    g70 = 0;
    g72 = 0;
    g77 = 0x402d50;
    g84 = 8;
    g83 = 7;
    *(char *)&g81 = 0;
    int32_t v3 = -1; // bp-80, 0x401d0d
    int64_t v4 = function_408f90(v2, a2, "A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx", &g7, (int64_t *)&v3, v1); // 0x401d15
    int64_t v5 = v4; // 0x401d1d
    int64_t v6 = 0; // 0x401d1d
    int64_t v7 = 0; // 0x401d1d
    int64_t v8 = 1; // 0x401d1d
    int64_t v9; // 0x401be0
    int64_t v10; // 0x401be0
    int64_t v11; // 0x401be0
    int64_t v12; // 0x401be0
    int64_t v13; // 0x401be0
    int64_t v14; // 0x401be0
    int64_t v15; // 0x401be0
    int64_t v16; // 0x401be0
    int64_t v17; // 0x401be0
    int64_t v18; // 0x401be0
    int64_t v19; // 0x401be0
    int64_t v20; // 0x401be0
    int64_t v21; // 0x401be0
    int64_t v22; // bp-72, 0x401be0
    if ((int32_t)v4 != -1) {
        while (true) {
          lab_0x401d23:
            // 0x401d23
            v20 = v8;
            v17 = v16;
            v9 = v7;
            v11 = v6;
            v14 = v13;
            int64_t v23 = v5 + 131; // 0x401d23
            g105 = v23 & 0xffffffff;
            switch ((int32_t)v23) {
                case 0: {
                    // 0x402008
                    function_407690((int64_t)g48, "od", "GNU coreutils", (int64_t)g36, "Jim Meyering", 0);
                    exit(0);
                    // UNREACHABLE
                }
                case 1: {
                    // 0x402686
                    function_404960(0);
                    // UNREACHABLE
                }
                case 196: {
                    char v24 = *g97; // 0x401fba
                    if (v24 == 110) {
                        // 0x40243b
                        g83 = 0;
                        g77 = 0x402d40;
                        v21 = v20;
                        v18 = v17;
                        v10 = 1;
                        v12 = v11;
                        v15 = v14;
                    } else {
                        if (v24 > 110) {
                            if (v24 == 111) {
                                // 0x402411
                                g84 = 8;
                                g77 = 0x402d50;
                                g83 = 7;
                                v21 = v20;
                                v18 = v17;
                                v10 = 1;
                                v12 = v11;
                                v15 = v14;
                            } else {
                                if (v24 != 120) {
                                    goto lab_0x402be8_2;
                                }
                                // 0x401fde
                                g84 = 16;
                                g77 = 0x402d50;
                                g83 = 6;
                                v21 = v20;
                                v18 = v17;
                                v10 = 1;
                                v12 = v11;
                                v15 = v14;
                            }
                        } else {
                            if (v24 != 100) {
                                goto lab_0x402be8_2;
                            }
                            // 0x402041
                            g84 = 10;
                            g77 = 0x402d50;
                            g83 = 7;
                            v21 = v20;
                            v18 = v17;
                            v10 = 1;
                            v12 = v11;
                            v15 = v14;
                        }
                    }
                    goto lab_0x401cf8;
                }
                case 197: {
                    goto lab_0x401fa2;
                }
                case 199: {
                    // 0x401f91
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"u4");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 201: {
                    goto lab_0x401f80;
                }
                case 203: {
                    goto lab_0x401f6f;
                }
                case 204: {
                    goto lab_0x401f5e;
                }
                case 207: {
                    goto lab_0x401f5e;
                }
                case 209: {
                    // 0x401f18
                    *(char *)&g75 = 1;
                    int64_t v25 = function_407ce0((int64_t)g97, 0, 0, &g74, (int64_t *)"bEGKkMmPTYZ0", v17); // 0x401f35
                    v21 = v20;
                    v18 = v17;
                    v10 = 1;
                    v12 = v11;
                    v15 = v14;
                    if ((int32_t)v25 != 0) {
                        // 0x401f42
                        function_407c50(v25 & 0xffffffff, (int64_t)v3, 78, &g7, (int64_t)g97);
                        // UNREACHABLE
                    }
                    goto lab_0x401cf8;
                }
                case 210: {
                    // 0x401f07
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"o4");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 214: {
                    int32_t v26 = 3; // 0x401ec7
                    if (g97 != NULL) {
                        int64_t v27 = function_407ce0((int64_t)g97, 0, 0, &v22, (int64_t *)"bEGKkMmPTYZ0", v17); // 0x401edc
                        if ((int32_t)v27 != 0) {
                            // 0x402c43
                            function_407c50(v27 & 0xffffffff, (int64_t)v3, 83, &g7, (int64_t)g97);
                            // UNREACHABLE
                        }
                        // 0x401ee9
                        v26 = v22;
                    }
                    // 0x401ef5
                    g82 = v26;
                    *(char *)&g81 = 1;
                    v21 = v20;
                    v18 = v17;
                    v10 = 1;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 219: {
                    goto lab_0x401f6f;
                }
                case 228: {
                    // 0x401eac
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)&g3);
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 229: {
                    // 0x401e9b
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"o1");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 230: {
                    // 0x401e8a
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)&g1);
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 231: {
                    // 0x401e79
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"u2");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 232: {
                    goto lab_0x401f80;
                }
                case 233: {
                    // 0x401e68
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"fF");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 235: {
                    goto lab_0x401e57;
                }
                case 236: {
                    // 0x401e46
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"dI");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 237: {
                    int64_t v28 = function_407ce0((int64_t)g97, 0, 0, &g76, (int64_t *)"bEGKkMmPTYZ0", v17); // 0x401e2e
                    v21 = v20;
                    v18 = v17;
                    v10 = 1;
                    v12 = v11;
                    v15 = v14;
                    v19 = v28;
                    if ((int32_t)v28 != 0) {
                      lab_0x402c27:
                        // 0x402c27
                        function_407c50(v19 & 0xffffffff, (int64_t)v3, 106, &g7, (int64_t)g97);
                        // UNREACHABLE
                    }
                    goto lab_0x401cf8;
                }
                case 239: {
                    goto lab_0x401f5e;
                }
                case 242: {
                    goto lab_0x401fa2;
                }
                case 246: {
                    // 0x401e07
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"d2");
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 247: {
                    // 0x401de5
                    if (g97 == NULL) {
                        // 0x402c0e
                        __assert_fail("s != NULL", "src/od.c", 983, "decode_format_string");
                        v19 = &g104;
                        goto lab_0x402c27;
                    }
                    // 0x401df5
                    v21 = v20 & 0xffffffff & function_4040c0((int64_t)g97);
                    v18 = v17;
                    v10 = 1;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 249: {
                    // 0x401dd3
                    g35 = 0;
                    v21 = v20;
                    v18 = v17;
                    v10 = 1;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 250: {
                    // 0x401d8e
                    v21 = v20;
                    v18 = v17;
                    v10 = 1;
                    v12 = 1;
                    v15 = 32;
                    if (g97 != NULL) {
                        int64_t v29 = function_407ce0((int64_t)g97, 0, 10, &v22, (int64_t *)&g27, v17); // 0x401db0
                        int64_t v30 = v29; // 0x401db7
                        if ((int32_t)v29 != 0) {
                            // 0x402bcc
                            function_407c50(v30 & 0xffffffff, (int64_t)v3, 119, &g7, (int64_t)g97);
                            // UNREACHABLE
                        }
                        // 0x401dbd
                        v21 = v20;
                        v18 = v17;
                        v10 = 1;
                        v12 = 1;
                        v15 = v22;
                    }
                    goto lab_0x401cf8;
                }
                case 251: {
                    goto lab_0x401e57;
                }
                case 259: {
                    // 0x401d82
                    *(char *)&g80 = 1;
                    v21 = v20;
                    v18 = v17;
                    v10 = v9;
                    v12 = v11;
                    v15 = v14;
                    goto lab_0x401cf8;
                }
                case 260: {
                    int64_t v31 = g37; // 0x401d4a
                    int64_t v32 = function_4050d0("--endian", (int64_t)g97, g9, (int64_t *)&g8, 4, v31); // 0x401d5d
                    int32_t v33 = *(int32_t *)(4 * v32 + (int64_t)&g8); // 0x401d62
                    if (v33 == 0) {
                        // 0x402092
                        g55 = 0;
                        v21 = v20;
                        v18 = v31;
                        v10 = v9;
                        v12 = v11;
                        v15 = v14;
                    } else {
                        // 0x401d71
                        v21 = v20;
                        v18 = v31;
                        v10 = v9;
                        v12 = v11;
                        v15 = v14;
                        if (v33 == 1) {
                            // 0x401d76
                            g55 = 1;
                            v21 = v20;
                            v18 = v31;
                            v10 = v9;
                            v12 = v11;
                            v15 = v14;
                        }
                    }
                    goto lab_0x401cf8;
                }
                default: {
                    goto lab_0x402609;
                }
            }
        }
    }
    goto lab_0x4020a6;
  lab_0x402be8_2:
    // 0x402be8
    error(1, (int32_t)"invalid output address radix '%c'; it must be one character from [doxn]" ^ (int32_t)"invalid output address radix '%c'; it must be one character from [doxn]", dcgettext(NULL, "invalid output address radix '%c'; it must be one character from [doxn]", 5));
    // 0x402c0e
    __assert_fail("s != NULL", "src/od.c", 983, "decode_format_string");
    v19 = &g104;
    goto lab_0x402c27;
  lab_0x401fa2:
    // 0x401fa2
    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"o2");
    v18 = v17;
    v10 = v9;
    v12 = v11;
    v15 = v14;
    goto lab_0x401cf8;
  lab_0x401f80:
    // 0x401f80
    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"fD");
    v18 = v17;
    v10 = v9;
    v12 = v11;
    v15 = v14;
    goto lab_0x401cf8;
  lab_0x401f6f:
    // 0x401f6f
    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"x4");
    v18 = v17;
    v10 = v9;
    v12 = v11;
    v15 = v14;
    goto lab_0x401cf8;
  lab_0x401f5e:
    // 0x401f5e
    v21 = v20 & 0xffffffff & function_4040c0((int64_t)"dL");
    v18 = v17;
    v10 = v9;
    v12 = v11;
    v15 = v14;
    goto lab_0x401cf8;
  lab_0x401e57:
    // 0x401e57
    v21 = function_4040c0((int64_t)"x2") & v20;
    v18 = v17;
    v10 = v9;
    v12 = v11;
    v15 = v14;
    goto lab_0x401cf8;
  lab_0x401cf8:;
    int64_t v302 = v15;
    v6 = v12;
    v7 = v10;
    v8 = v21;
    v3 = -1;
    v5 = function_408f90(v2, a2, "A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx", &g7, (int64_t *)&v3, v18);
    v13 = v302;
    v16 = v18;
    int64_t v67; // 0x401be0
    int64_t result; // 0x401be0
    if ((int32_t)v5 == -1) {
        // 0x40209e
        v67 = v302;
        result = 1;
        if ((char)v8 == 0) {
            goto lab_0x402402;
        } else {
            goto lab_0x4020a6;
        }
    }
    goto lab_0x401d23;
  lab_0x4023d3_3:;
    // 0x4023d3
    int64_t v231; // 0x401be0
    free((int64_t *)v231);
    int64_t v229; // 0x401be0
    int64_t v278 = v229; // 0x4023d6
    int64_t v230; // 0x401be0
    int64_t v279 = v230; // 0x4023d6
    int64_t v280 = v231; // 0x4023d6
    int64_t v232; // 0x401be0
    int64_t v281 = v232; // 0x4023d6
    goto lab_0x4023df;
  lab_0x402745:;
    // 0x402745
    int64_t v173; // 0x401be0
    int64_t v303 = v173;
    int64_t v172; // 0x401be0
    int64_t v304 = v172;
    int64_t v171; // 0x401be0
    int64_t v305 = v171;
    int64_t v169; // 0x401be0
    int64_t v306 = v169;
    int64_t v299 = v305; // 0x402748
    int64_t v297 = v304; // 0x402748
    int64_t v301 = v303; // 0x402748
    int64_t v170; // 0x401be0
    int64_t v149; // 0x401bf0
    if (v306 != 0) {
        int64_t v307 = g71; // 0x40274e
        int64_t v308 = 1; // 0x40276a
        if (v307 != 0) {
            int64_t v309 = 1; // 0x402764
            int64_t v310 = 0; // 0x4027a5
            uint32_t v311 = *(int32_t *)(g72 + 4 + 40 * v310); // 0x402774
            int32_t v312 = *(int32_t *)(4 * (int64_t)v311 + (int64_t)&g11); // 0x402779
            int64_t v313 = v312; // 0x402779
            uint64_t v314 = v313;
            int64_t v315 = v309 % v314;
            int64_t v316 = v314; // 0x40279e
            while (v315 != 0) {
                // 0x402793
                v314 = v315;
                v315 = v316 % v314;
                v316 = v314;
            }
            // 0x4027a0
            v310++;
            v309 = 0x100000000 * v309 * 0x100000000 * v313 / v314 / 0x100000000 / 0x100000000;
            v308 = v309;
            while (v310 != v307) {
                // 0x402770
                v311 = *(int32_t *)(g72 + 4 + 40 * v310);
                v312 = *(int32_t *)(4 * (int64_t)v311 + (int64_t)&g11);
                v313 = v312;
                v314 = v313;
                v315 = v309 % v314;
                v316 = v314;
                while (v315 != 0) {
                    // 0x402793
                    v314 = v315;
                    v315 = v316 % v314;
                    v316 = v314;
                }
                // 0x4027a0
                v310++;
                v309 = 0x100000000 * v309 * 0x100000000 * v313 / v314 / 0x100000000 / 0x100000000;
                v308 = v309;
            }
        }
        uint64_t v317 = v308;
        int64_t v318 = v149 + 32; // 0x4028d9
        int64_t v319 = *(int64_t *)(8 * v303 + v318); // 0x4028d9
        memset((int64_t *)(v319 + v306), 0, (int32_t)(((v306 - 1 + v317) % v317 ^ 0xffffffff) + v317));
        int64_t v320 = *(int64_t *)((8 * v170 & 2040 ^ 8) + v318); // 0x402908
        function_403d80(v304, v306, v320, v319);
        v299 = v305;
        v297 = v304 + (int64_t)v3;
        v301 = v319;
    }
    goto lab_0x40282c;
  lab_0x402823:
    // 0x402823
    v3 = 0;
    int64_t v155; // 0x401be0
    v299 = v155;
    int64_t v156; // 0x401be0
    v297 = v156;
    int64_t v157; // 0x401be0
    v301 = v157;
    goto lab_0x40282c;
  lab_0x4020a6:
    // 0x4020a6
    if (*(char *)&g81 == 0) {
        goto lab_0x4020bd;
    } else {
        // 0x4020af
        if ((int64_t)g71 != 0) {
            goto lab_0x402baa;
        } else {
            goto lab_0x4020bd;
        }
    }
  lab_0x4020bd:;
    int32_t v34 = *(int32_t *)0x6122dc; // 0x4020bd
    int64_t v35 = v34; // 0x4020bd
    char v36 = *(char *)&g80; // 0x4020c4
    int32_t v37 = (int32_t)a1 - v34; // 0x4020cb
    int64_t v38 = v37; // 0x4020cb
    int64_t v39; // 0x401be0
    int64_t v40; // 0x401be0
    int64_t v41; // 0x401be0
    int64_t v42; // 0x401be0
    int64_t v43; // 0x401be0
    if (v7 != 0) {
        // 0x40245b
        v41 = a2;
        v43 = a2;
        v40 = v38;
        if (v36 == 0) {
            goto lab_0x4020ff;
        } else {
            switch (v37) {
                case 2: {
                    goto lab_0x402657;
                }
                case 3: {
                    goto lab_0x402621;
                }
                default: {
                    if (v37 != 1) {
                        goto lab_0x4020f5;
                    } else {
                        // 0x402477
                        v39 = *(int64_t *)(8 * v35 + a2);
                        v42 = (int64_t)&g7;
                        goto lab_0x402481;
                    }
                }
            }
        }
    } else {
        switch (v37) {
            case 2: {
                goto lab_0x402657;
            }
            case 3: {
                // 0x402613
                v41 = a2;
                v43 = a2;
                v40 = 3;
                if (v36 == 0) {
                    goto lab_0x4020ff;
                } else {
                    goto lab_0x402621;
                }
            }
            case 1: {
                int64_t v44 = *(int64_t *)(8 * v35 + a2); // 0x40291c
                v39 = v44;
                v42 = v44;
                if (v36 != 0) {
                    goto lab_0x402481;
                } else {
                    // 0x402929
                    v41 = a2;
                    v43 = a2;
                    v40 = 1;
                    v39 = v44;
                    v42 = v44;
                    if (*(char *)v44 == 43) {
                        goto lab_0x402481;
                    } else {
                        goto lab_0x4020ff;
                    }
                }
            }
            default: {
                goto lab_0x4020f5;
            }
        }
    }
  lab_0x402baa:
    // 0x402baa
    error(1, (int32_t)"no type may be specified when dumping strings" ^ (int32_t)"no type may be specified when dumping strings", dcgettext(NULL, "no type may be specified when dumping strings", 5));
    int64_t v45 = &g104;
    function_407c50(v45 & 0xffffffff, (int64_t)v3, 119, &g7, (int64_t)g97);
    // UNREACHABLE
  lab_0x4020ff:;
    int64_t v46 = v40; // 0x402106
    int64_t v47 = v43; // 0x402106
    int64_t v48 = v41; // 0x402106
    int64_t v49; // 0x401be0
    int64_t v50 = v49; // 0x402106
    int64_t v51 = v40; // 0x402106
    int64_t v52 = v43; // 0x402106
    int64_t v53 = v41; // 0x402106
    int64_t v54 = v49; // 0x402106
    if (g79 == 0) {
        goto lab_0x402124;
    } else {
        goto lab_0x402108;
    }
  lab_0x402657:;
    int64_t v55 = a2 + 8; // 0x402657
    int64_t v56 = *(int64_t *)(8 * v35 + v55); // 0x402657
    if (v36 != 0) {
        goto lab_0x402887;
    } else {
        char v57 = *(char *)v56; // 0x402664
        if (v57 == 43) {
            goto lab_0x402887;
        } else {
            // 0x40266f
            v41 = a2;
            v43 = a2;
            v40 = 2;
            if ((int32_t)v57 < 58) {
                goto lab_0x402887;
            } else {
                goto lab_0x4020ff;
            }
        }
    }
  lab_0x4020f5:
    // 0x4020f5
    v41 = a2;
    v43 = a2;
    v40 = v38;
    int64_t v58 = v35; // 0x4020f9
    if (v37 < 2 || v36 == 0) {
        goto lab_0x4020ff;
    } else {
        goto lab_0x4025b6;
    }
  lab_0x402124:
    // 0x402124
    if (*(char *)&g75 != 0) {
        int64_t v59 = g76 + g74; // 0x402134
        g73 = v59;
        if (v59 < g74) {
            // 0x402b51
            error(1, (int32_t)"skip-bytes + read-bytes is too large" ^ (int32_t)"skip-bytes + read-bytes is too large", dcgettext(NULL, "skip-bytes + read-bytes is too large", 5));
            // 0x402b73
            __assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 1397, "dump");
            // 0x402b8c
            function_407a20((int64_t)"n_bytes_read == bytes_per_block");
            // UNREACHABLE
        }
    }
    int64_t v60 = v54; // 0x402150
    int64_t v61 = v8; // 0x402150
    int64_t v62 = v53; // 0x402150
    int64_t v63 = v52; // 0x402150
    int64_t v64 = v51; // 0x402150
    int64_t v65 = v6; // 0x402150
    int64_t v66 = v67; // 0x402150
    int64_t v68 = v54; // 0x402150
    int64_t v69 = v8; // 0x402150
    int64_t v70 = v53; // 0x402150
    int64_t v71 = v52; // 0x402150
    int64_t v72 = v51; // 0x402150
    int64_t v73 = v6; // 0x402150
    int64_t v74 = v67; // 0x402150
    if ((int64_t)g71 == 0) {
        goto lab_0x4024f9;
    } else {
        goto lab_0x402156;
    }
  lab_0x402108:;
    int64_t v75 = v50;
    int64_t v76 = v48;
    int64_t v77 = v47;
    int64_t v78 = v46;
    if (g77 == 0x402d40) {
        // 0x402863
        g84 = 8;
        g83 = 7;
        g77 = 0x404010;
        v51 = v78;
        v52 = v77;
        v53 = v76;
        v54 = v75;
    } else {
        // 0x402119
        g77 = 0x404090;
        v51 = v78;
        v52 = v77;
        v53 = v76;
        v54 = v75;
    }
    goto lab_0x402124;
  lab_0x402621:;
    int64_t v79 = *(int64_t *)(a2 + 8 + 8 * v35); // 0x402621
    int64_t v80 = function_402e40(v79, (int64_t *)&v3, v36, (int64_t)&g7); // 0x40262b
    int64_t v81 = &v3; // 0x402632
    int64_t v82 = 3; // 0x402632
    if ((char)v80 != 0) {
        int64_t v83 = &v22; // 0x402ad4
        int64_t v84 = a2 + 16; // 0x402ad9
        int64_t v85 = *(int64_t *)(8 * (int64_t)g46 + v84); // 0x402ad9
        int64_t v86 = function_402e40(v85, &v22, v36, (int64_t)&g7); // 0x402ade
        v81 = v83;
        v82 = 3;
        if ((char)v86 == 0) {
            goto lab_0x40263e;
        } else {
            // 0x402aeb
            g79 = 1;
            g76 = v3;
            int64_t v87 = 8 * (int64_t)g46; // 0x402b15
            *(int64_t *)(v87 + v84) = *(int64_t *)(v87 + a2);
            v49 = v22;
            v41 = v84;
            v43 = v83;
            v40 = 1;
            goto lab_0x4020ff;
        }
    } else {
        goto lab_0x40263e;
    }
  lab_0x4025b6:
    // 0x4025b6
    function_407210(*(int64_t *)(a2 + 8 + 8 * v58));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    error(0, (int32_t)"compatibility mode supports at most one file" ^ (int32_t)"compatibility mode supports at most one file", "%s", dcgettext(NULL, "compatibility mode supports at most one file", 5));
  lab_0x402609:
    // 0x402609
    function_404960(1);
    // UNREACHABLE
  lab_0x402887:;
    int64_t v88 = &v22; // 0x402887
    int64_t v89 = function_402e40(v56, &v22, v36, (int64_t)&g7); // 0x40288c
    v81 = v88;
    v82 = 2;
    int64_t v90; // 0x401be0
    if ((char)v89 == 0) {
        goto lab_0x40263e;
    } else {
        // 0x402899
        v90 = v88;
        if (*(char *)&g80 != 0) {
            int64_t v91 = &v3; // 0x402a76
            int64_t v92 = *(int64_t *)(8 * (int64_t)g46 + a2); // 0x402a7b
            int64_t v93 = function_402e40(v92, (int64_t *)&v3, v36, (int64_t)&g7); // 0x402a80
            v90 = v91;
            if ((char)v93 == 0) {
                goto lab_0x4028a6;
            } else {
                // 0x4020ff
                g79 = 1;
                g76 = v3;
                v46 = 0;
                v47 = v91;
                v48 = a2 + 16;
                v50 = v22;
                goto lab_0x402108;
            }
        } else {
            goto lab_0x4028a6;
        }
    }
  lab_0x402481:;
    int64_t v94 = &v3; // 0x402486
    int64_t v95 = function_402e40(v39, (int64_t *)&v3, v36, v42); // 0x40248b
    v41 = a2;
    v43 = v94;
    v40 = 1;
    if ((char)v95 != 0) {
        // 0x402498
        g76 = v3;
        v41 = a2 + 8;
        v43 = v94;
        v40 = 0;
    }
    goto lab_0x4020ff;
  lab_0x4024f9:
    // 0x4024f9
    function_4040c0((int64_t)"oS");
    v60 = v68;
    v61 = v69;
    v62 = v70;
    v63 = v71;
    v64 = v72;
    v65 = v73;
    v66 = v74;
    goto lab_0x402156;
  lab_0x402156:;
    int64_t v96 = v66;
    int64_t v97 = v65;
    int64_t v98 = v63;
    int64_t v99 = v62;
    int64_t v100 = v61;
    int64_t v101 = v60;
    int64_t v102 = (int64_t)&g10; // 0x40215e
    if ((int32_t)v64 >= 1) {
        // 0x402160
        v102 = 8 * (int64_t)g46 + v99;
    }
    // 0x40216c
    g67 = v102;
    int64_t v103 = function_403a50() & 0xffffffff; // 0x402180
    int64_t v104 = v101; // 0x402183
    int64_t v105 = v99; // 0x402183
    int64_t v106 = v98; // 0x402183
    int64_t v107 = v103; // 0x402183
    int64_t v108 = v97; // 0x402183
    int64_t v109 = v96; // 0x402183
    int64_t v110; // 0x401be0
    int64_t v111; // 0x401be0
    int64_t v112; // 0x401be0
    int64_t v113; // 0x401be0
    int64_t v114; // 0x401be0
    int64_t v115; // 0x401be0
    int64_t v116; // 0x401be0
    int64_t v117; // 0x401be0
    int64_t v118; // 0x4021c5
    if (g66 == NULL) {
        goto lab_0x4023ed;
    } else {
        // 0x402189
        v117 = function_403b50(g76) & v103;
        v104 = v101;
        v105 = v99;
        v106 = v98;
        v107 = v117;
        v108 = v97;
        v109 = v96;
        if (g66 == NULL) {
            goto lab_0x4023ed;
        } else {
            // 0x4021ae
            v118 = g71;
            g78 = g79 == 0 ? 0 : v101 - g76;
            if (v118 == 0) {
                // 0x402a3b
                v115 = 1;
                if ((char)v97 == 0) {
                    goto lab_0x402593;
                } else {
                    // 0x402a4a
                    v114 = 1;
                    v113 = 1;
                    if (v96 != 0) {
                        goto lab_0x402a24;
                    } else {
                        goto lab_0x40225f;
                    }
                }
            } else {
                int64_t v119 = g72 + 4;
                int64_t v120 = v119 + 40 * v118;
                int64_t v121 = v119; // 0x4021f6
                uint32_t v122 = *(int32_t *)v121; // 0x402200
                int64_t v123 = 0x100000000 >> 32; // 0x402202
                int32_t v124 = *(int32_t *)(4 * (int64_t)v122 + (int64_t)&g11); // 0x402205
                int64_t v125 = v124; // 0x402205
                uint64_t v126 = v125;
                int64_t v127 = v123 % v126;
                int64_t v128 = v126; // 0x402226
                while (v127 != 0) {
                    // 0x40221b
                    v126 = v127;
                    v127 = v128 % v126;
                    v128 = v126;
                }
                // 0x402228
                v121 += 40;
                int64_t v129 = 0x100000000 * v125 / v126 / 0x100000000 * v123; // 0x402234
                int64_t v130 = v129 & 0xffffffff; // 0x402234
                while (v120 != v121) {
                    // 0x402200
                    v122 = *(int32_t *)v121;
                    v123 = 0x100000000 * v130 >> 32;
                    v124 = *(int32_t *)(4 * (int64_t)v122 + (int64_t)&g11);
                    v125 = v124;
                    v126 = v125;
                    v127 = v123 % v126;
                    v128 = v126;
                    while (v127 != 0) {
                        // 0x40221b
                        v126 = v127;
                        v127 = v128 % v126;
                        v128 = v126;
                    }
                    // 0x402228
                    v121 += 40;
                    v129 = 0x100000000 * v125 / v126 / 0x100000000 * v123;
                    v130 = v129 & 0xffffffff;
                }
                if ((char)v97 == 0) {
                    // 0x402508
                    v115 = v130;
                    if ((int32_t)v129 < 16) {
                        goto lab_0x402593;
                    } else {
                        int64_t v131 = 0x100000000 * v129 >> 32; // 0x402512
                        g69 = v131;
                        v112 = v120;
                        v111 = v119;
                        v110 = v131;
                        v116 = v101;
                        goto lab_0x4022a5;
                    }
                } else {
                    int64_t v132 = 0x100000000 * v129 >> 32; // 0x402246
                    v114 = v130;
                    v113 = v132;
                    if (v96 == 0) {
                        goto lab_0x40225f;
                    } else {
                        // 0x40224e
                        v114 = v130;
                        v113 = v132;
                        if (v96 % v132 == 0) {
                            goto lab_0x402a24;
                        } else {
                            goto lab_0x40225f;
                        }
                    }
                }
            }
        }
    }
  lab_0x40263e:
    // 0x40263e
    v41 = a2;
    v43 = v81;
    v40 = v82;
    if (*(char *)&g80 == 0) {
        goto lab_0x4020ff;
    } else {
        // 0x40264b
        v58 = g46;
        goto lab_0x4025b6;
    }
  lab_0x4023ed:;
    uint64_t v133 = v107;
    if (g65 == 0) {
        // 0x402402
        return v133 % 256 ^ 1;
    }
    // 0x4024ba
    if ((int32_t)function_408120((int64_t)g49, v106) != -1) {
        // 0x4023fa
        result = v133 % 256 ^ 1;
      lab_0x402402:
        // 0x402402
        return result;
    }
    char * format = dcgettext(NULL, "standard input", 5); // 0x4024db
    uint32_t err_num = *__errno_location(); // 0x4024f0
    error(1, err_num, format);
    v68 = v104;
    v69 = (int64_t)format;
    v70 = v105;
    v71 = err_num;
    v72 = v133;
    v73 = v108;
    v74 = v109;
    goto lab_0x4024f9;
  lab_0x4028a6:
    // 0x4028a6
    g76 = v22;
    int64_t v134 = 8 * (int64_t)g46; // 0x4028bf
    *(int64_t *)(v134 + v55) = *(int64_t *)(v134 + a2);
    v41 = v55;
    v43 = v90;
    v40 = 1;
    goto lab_0x4020ff;
  lab_0x402593:;
    int64_t v135 = v115;
    int64_t v136 = 0x100000000 * (int64_t)(16 / (int32_t)v135) * (0x100000000 * v135 >> 32) / 0x100000000; // 0x4025a0
    g69 = v136;
    int64_t v137 = v136; // 0x4025a9
    int64_t v138 = v101; // 0x4025a9
    int64_t v139 = v118; // 0x4025a9
    goto lab_0x402299;
  lab_0x402299:;
    int64_t v140 = v139;
    int64_t v141 = v138;
    int64_t v142 = v141; // 0x4022a3
    if (v140 == 0) {
        goto lab_0x402316;
    } else {
        int64_t v143 = g72 + 4; // 0x4022a9
        v112 = v143 + 40 * v140;
        v111 = v143;
        v110 = v137;
        v116 = v141;
        goto lab_0x4022a5;
    }
  lab_0x402a24:
    // 0x402a24
    g69 = v96;
    v137 = v96;
    v138 = v101;
    v139 = v118;
    goto lab_0x402299;
  lab_0x40225f:
    // 0x40225f
    error(0, (int32_t)"warning: invalid width %lu; using %d instead" ^ (int32_t)"warning: invalid width %lu; using %d instead", dcgettext(NULL, "warning: invalid width %lu; using %d instead", 5));
    g69 = v113;
    v137 = v113;
    v138 = 0x100000000 * v114 >> 32;
    v139 = g71;
    goto lab_0x402299;
  lab_0x402316:;
    int64_t v144 = v142;
    unsigned char v145 = *(char *)&g81; // 0x402316
    if (v145 == 0) {
        int64_t v146 = g69; // 0x40268d
        int64_t v147 = v146; // 0x4026a5
        if (g69 % 0x4000000000000001 != 0) {
            // 0x402b8c
            function_407a20(v147);
            // UNREACHABLE
        }
        // 0x4026ab
        v147 = v146;
        if (v146 < 0) {
            // 0x402b8c
            function_407a20(v147);
            // UNREACHABLE
        }
        // 0x4026b4
        int64_t v148; // bp-104, 0x401be0
        v149 = &v148;
        int64_t v150 = function_4077d0(2 * v146); // 0x4026b7
        unsigned char v151 = *(char *)&g75; // 0x4026bc
        int64_t v152 = g76; // 0x4026c4
        v22 = v150;
        if (v151 != 0) {
            int64_t v153 = v151; // 0x4026bc
            int64_t v154 = g73; // 0x402817
            v155 = v153;
            v156 = v152;
            v157 = v96;
            if (v154 > v152) {
                int64_t v158 = v149 + 32; // 0x4027be
                int64_t v159 = v153;
                int64_t v160 = 0;
                int64_t v161 = v152;
                int64_t v162 = v160 % 256; // 0x4027b2
                uint64_t v163 = v154 - v161; // 0x4027b6
                int64_t v164 = *(int64_t *)(8 * v162 + v158); // 0x4027be
                uint64_t v165 = (int64_t)g69; // 0x4027c6
                int64_t v166 = function_4048a0(v163 > v165 ? v165 : v163, v164, (int64_t *)&v3); // 0x4027d7
                int64_t v167 = v3; // 0x4027dc
                v159 &= v166;
                uint64_t v168 = (int64_t)g69; // 0x4027e4
                v169 = v167;
                v170 = v160;
                v171 = v159;
                v172 = v161;
                v173 = v162;
                while (v167 >= v168) {
                    if (v167 != v168) {
                        // 0x402b73
                        __assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 1397, "dump");
                        // 0x402b8c
                        function_407a20((int64_t)"n_bytes_read == bytes_per_block");
                        // UNREACHABLE
                    }
                    int64_t v174 = v160 ^ 1; // 0x4027f7
                    function_403d80(v161, v167, *(int64_t *)((8 * v174 & 2040) + v158), v164);
                    int64_t v175 = v161 + (int64_t)v3; // 0x402812
                    int64_t v176 = g73; // 0x402817
                    v155 = v159;
                    v156 = v175;
                    v157 = v162;
                    if (v176 <= v175) {
                        goto lab_0x402823;
                    }
                    v160 = v174;
                    v161 = v175;
                    v162 = v160 % 256;
                    v163 = v176 - v161;
                    v164 = *(int64_t *)(8 * v162 + v158);
                    v165 = (int64_t)g69;
                    v166 = function_4048a0(v163 > v165 ? v165 : v163, v164, (int64_t *)&v3);
                    v167 = v3;
                    v159 &= v166;
                    v168 = (int64_t)g69;
                    v169 = v167;
                    v170 = v160;
                    v171 = v159;
                    v172 = v161;
                    v173 = v162;
                }
                goto lab_0x402745;
            } else {
                goto lab_0x402823;
            }
        } else {
            int64_t v177 = *(int64_t *)(v149 + 32); // 0x402725
            int64_t v178 = function_4048a0((int64_t)g69, v177, (int64_t *)&v3); // 0x40272d
            int64_t v179 = v3; // 0x402734
            v169 = v179;
            v170 = 0;
            v171 = v100 & 0xffffffff & v178;
            v172 = v152;
            v173 = 0;
            if (v179 >= (int64_t)g69) {
                int64_t v180; // 0x401be0
                int64_t v181; // 0x401be0
                while (v181 == v180) {
                    // 0x4026f0
                    int64_t v182; // 0x401be0
                    int64_t v183 = v182;
                    int64_t v184; // 0x401be0
                    int64_t v185 = v184;
                    int64_t v186; // 0x401be0
                    int64_t v187 = v186;
                    int64_t v188; // 0x401be0
                    int64_t v189 = v188;
                    int64_t v190 = v183 ^ 1; // 0x4026f0
                    int64_t v191 = v190 % 256; // 0x4026fd
                    int64_t v192; // 0x402725
                    int64_t * v193 = (int64_t *)(8 * v191 + v192);
                    int64_t v194 = *v193; // 0x402704
                    int64_t v195; // 0x401be0
                    function_403d80(v185, v195, v194, v187);
                    int32_t v196 = v3; // 0x402711
                    int64_t v197 = v185 + (int64_t)v196; // 0x402711
                    int128_t v198 = g69; // 0x402719
                    int64_t v199 = *v193; // 0x402725
                    int64_t v200 = function_4048a0((int64_t)v198, v199, (int64_t *)&v3); // 0x40272d
                    int64_t v201 = v189 & v200; // 0x402732
                    int32_t v202 = v3; // 0x402734
                    int64_t v203 = v202; // 0x402734
                    int128_t v204 = g69; // 0x402739
                    int64_t v205 = v204; // 0x402739
                    v180 = v205;
                    v181 = v203;
                    v188 = v201;
                    v186 = v199;
                    v184 = v197;
                    v182 = v190;
                    v169 = v203;
                    v170 = v190;
                    v171 = v201;
                    v172 = v197;
                    v173 = v191;
                    if (v203 < v205) {
                        goto lab_0x402745;
                    }
                    v195 = v181;
                }
                // 0x402b91
                __assert_fail("n_bytes_read == bytes_per_block", "src/od.c", 1411, "dump");
                goto lab_0x402baa;
            } else {
                goto lab_0x402745;
            }
        }
    } else {
        int32_t v206 = g82;
        int64_t v207 = v206 >= 100 ? (int64_t)v206 : 100; // 0x402334
        v22 = v207;
        int64_t v208 = function_4077d0(v207); // 0x402341
        int64_t v209 = &v22;
        int64_t v210 = v145; // 0x40234d
        int64_t v211 = g76; // 0x40234d
        int64_t v212 = v208; // 0x40234d
        int64_t v213 = v96; // 0x40234d
        int64_t v214; // 0x401be0
        int64_t v215; // 0x401be0
        int64_t v216; // 0x401be0
        int64_t v217; // 0x401be0
        while (true) {
          lab_0x402350:;
            int64_t v218 = v210; // 0x402350
            int64_t v219 = v211; // 0x402350
            int64_t v220 = v212; // 0x402350
            int64_t v221 = v213; // 0x402350
            while (true) {
                // 0x402357
                v215 = v220;
                v216 = v221;
                int64_t v222 = v219;
                v214 = v218;
                v217 = g82;
                uint64_t v223; // 0x402363
                if (*(char *)&g75 != 0) {
                    // 0x402363
                    v223 = g73;
                    if (v223 >= v217 != v223 - v217 > v222) {
                        // break (via goto) -> 0x402ab6
                        goto lab_0x402ab6;
                    }
                }
                // 0x40237f
                while (v217 != 0) {
                    int64_t v224 = v222 + 1; // 0x40238a
                    int64_t v225 = v214 & 0xffffffff & function_403d20((int64_t *)&v3); // 0x4023cc
                    int64_t v226 = v225; // 0x4023d1
                    int32_t v227 = v3; // 0x4023d1
                    int64_t v228 = 0; // 0x4023d1
                    v229 = v217;
                    v230 = v225;
                    v231 = v215;
                    v232 = v224;
                    if (v3 < 0) {
                        goto lab_0x4023d3_3;
                    }
                    int64_t v233 = v226;
                    int16_t ** v234 = __ctype_b_loc(); // 0x402390
                    int64_t v235 = g82; // 0x402398
                    int16_t * v236 = *v234; // 0x40239f
                    char v237 = *(char *)((0x100000000 * (int64_t)v227 >> 31 | 1) + (int64_t)v236); // 0x4023a2
                    while ((v237 & 64) != 0) {
                        // 0x4023a9
                        *(char *)(v228 + v215) = (char)v227;
                        v228++;
                        if (v228 >= v235) {
                            // break (via goto) -> 0x402574
                            goto lab_0x402574_2;
                        }
                        int64_t v238 = function_403d20((int64_t *)&v3); // 0x4023c3
                        v227 = v3;
                        v226 = v238 & v233;
                        v229 = v235;
                        v230 = v226;
                        v231 = v215;
                        v232 = v224;
                        if (v227 < 0) {
                            goto lab_0x4023d3_3;
                        }
                        v233 = v226;
                        v234 = __ctype_b_loc();
                        v235 = g82;
                        v236 = *v234;
                        v237 = *(char *)((0x100000000 * (int64_t)v227 >> 31 | 1) + (int64_t)v236);
                    }
                    v216 = v221;
                    v222 = v219;
                    v214 = v218;
                    v217 = g82;
                    if (*(char *)&g75 != 0) {
                        // 0x402363
                        v223 = g73;
                        if (v223 >= v217 != v223 - v217 > v222) {
                            // break (via goto) -> 0x402ab6
                            goto lab_0x402ab6;
                        }
                    }
                }
              lab_0x402574_2:;
                int64_t v239 = 0; // 0x401be0
                int64_t v240 = 0; // 0x401be0
                int64_t v241 = v214; // 0x401be0
                int64_t v242 = v222; // 0x401be0
                int64_t v243 = v215; // 0x401be0
                int64_t v244 = v216; // 0x401be0
                int64_t v245; // 0x401be0
                int64_t v246; // 0x401be0
                int64_t v247; // 0x401be0
                int64_t v248; // 0x401be0
                int64_t v249; // 0x401be0
                while (true) {
                  lab_0x402574:;
                    int64_t v250 = v243;
                    int64_t v251 = v242;
                    int64_t v252 = v241;
                    int64_t v253 = v240;
                    v249 = v239;
                    if (*(char *)&g75 != 0) {
                        // 0x40257d
                        v245 = v252;
                        v246 = v251;
                        v247 = v250;
                        v248 = v244;
                        if (v251 >= g73) {
                            // break -> 0x40293d
                            break;
                        }
                    }
                    int64_t v254 = v253; // 0x40258f
                    int64_t v255 = v250; // 0x40258f
                    if (v22 == v249) {
                        // 0x402591
                        v255 = function_407930(v250, &v22);
                        v254 = v209;
                    }
                    int64_t v256 = v255;
                    int64_t v257 = v254;
                    int64_t v258 = function_403d20((int64_t *)&v3); // 0x40253a
                    int32_t v259 = v3; // 0x40253f
                    int64_t v260 = v259; // 0x40253f
                    int64_t v261 = v252 & 0xffffffff & v258; // 0x402544
                    v229 = v257;
                    v230 = v261;
                    v231 = v256;
                    v232 = v260;
                    if (v259 < 0) {
                        goto lab_0x4023d3_3;
                    }
                    int64_t v262 = v251 + 1; // 0x402536
                    v245 = v261;
                    v246 = v262;
                    v247 = v256;
                    v248 = 0;
                    if (v259 == 0) {
                        // break -> 0x40293d
                        break;
                    }
                    char v263 = *(char *)((0x100000000 * v260 >> 31 | 1) + (int64_t)*__ctype_b_loc()); // 0x402561
                    v210 = v261;
                    v211 = v262;
                    v212 = v256;
                    v213 = v260;
                    if ((v263 & 64) == 0) {
                        goto lab_0x402350;
                    } else {
                        // 0x40256c
                        *(char *)(v256 + v249) = (char)v259;
                        v239 = v249 + 1;
                        v240 = v257;
                        v241 = v261;
                        v242 = v262;
                        v243 = v256;
                        v244 = v260;
                        goto lab_0x402574;
                    }
                }
                // 0x40293d
                v220 = v247;
                v219 = v246;
                *(char *)(v220 + v249) = 0;
                char v264 = *(char *)v220; // 0x402959
                int64_t v265 = (int64_t)g48; // 0x40295c
                v3 = v264;
                int64_t v266 = v265; // 0x40296c
                char v267 = v264; // 0x40296c
                int64_t v268 = v220; // 0x40296c
                struct _IO_FILE * v269 = g48; // 0x40296c
                int64_t v270 = v265; // 0x40296c
                if (v264 != 0) {
                    g106 = v267 - 7;
                    int64_t * v271; // 0x4029e5
                    uint64_t v272; // 0x4029e5
                    switch (v267) {
                        case 7: {
                            // 0x4029cd
                            fwrite_unlocked((int64_t *)"\\a", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        case 8: {
                            // 0x4029c1
                            fwrite_unlocked((int64_t *)"\\b", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        case 9: {
                            // 0x4029b5
                            fwrite_unlocked((int64_t *)"\\t", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        case 10: {
                            // 0x4029a9
                            fwrite_unlocked((int64_t *)"\\n", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        case 11: {
                            // 0x40299d
                            fwrite_unlocked((int64_t *)"\\v", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        case 12: {
                            // 0x40298d
                            fwrite_unlocked((int64_t *)"\\f", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        case 13: {
                            // 0x4029d9
                            fwrite_unlocked((int64_t *)"\\r", 1, 2, g48);
                            // break -> 0x402997
                            break;
                        }
                        default: {
                            // 0x4029e5
                            v271 = (int64_t *)(v266 + 40);
                            v272 = *v271;
                            if (v272 >= *(int64_t *)(v266 + 48)) {
                                // 0x402b41
                                __overflow(g48, 2);
                            } else {
                                // 0x4029f3
                                *v271 = v272 + 1;
                                *(char *)v272 = 2;
                            }
                            // break -> 0x402997
                            break;
                        }
                    }
                    int64_t v273 = v268 + 1; // 0x402997
                    char v274 = *(char *)v273; // 0x402959
                    int64_t v275 = (int64_t)g48;
                    v3 = v274;
                    v266 = v275;
                    v267 = v274;
                    v268 = v273;
                    v269 = g48;
                    v270 = v275;
                    while (v274 != 0) {
                        // 0x402972
                        g106 = v267 - 7;
                        switch (v267) {
                            case 7: {
                                // 0x4029cd
                                fwrite_unlocked((int64_t *)"\\a", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            case 8: {
                                // 0x4029c1
                                fwrite_unlocked((int64_t *)"\\b", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            case 9: {
                                // 0x4029b5
                                fwrite_unlocked((int64_t *)"\\t", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            case 10: {
                                // 0x4029a9
                                fwrite_unlocked((int64_t *)"\\n", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            case 11: {
                                // 0x40299d
                                fwrite_unlocked((int64_t *)"\\v", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            case 12: {
                                // 0x40298d
                                fwrite_unlocked((int64_t *)"\\f", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            case 13: {
                                // 0x4029d9
                                fwrite_unlocked((int64_t *)"\\r", 1, 2, g48);
                                // break -> 0x402997
                                break;
                            }
                            default: {
                                // 0x4029e5
                                v271 = (int64_t *)(v266 + 40);
                                v272 = *v271;
                                if (v272 >= *(int64_t *)(v266 + 48)) {
                                    // 0x402b41
                                    __overflow(g48, 2);
                                } else {
                                    // 0x4029f3
                                    *v271 = v272 + 1;
                                    *(char *)v272 = 2;
                                }
                                // break -> 0x402997
                                break;
                            }
                        }
                        // 0x402997
                        v273 = v268 + 1;
                        v274 = *(char *)v273;
                        v275 = (int64_t)g48;
                        v3 = v274;
                        v266 = v275;
                        v267 = v274;
                        v268 = v273;
                        v269 = g48;
                        v270 = v275;
                    }
                }
                int64_t * v276 = (int64_t *)(v270 + 40); // 0x4029ff
                uint64_t v277 = *v276; // 0x4029ff
                if (v277 >= *(int64_t *)(v270 + 48)) {
                    // 0x402b28
                    __overflow(v269, 10);
                } else {
                    // 0x402a0d
                    *v276 = v277 + 1;
                    *(char *)v277 = 10;
                }
                // 0x402357
                v218 = v245;
                v221 = v248;
            }
        }
      lab_0x402ab6:
        // 0x402ab6
        free((int64_t *)v215);
        v278 = v217;
        v279 = v214 & 0xffffffff & function_4038f0(0);
        v280 = v215;
        v281 = v216;
        goto lab_0x4023df;
    }
  lab_0x4022a5:;
    uint64_t v282 = 0;
    uint32_t v283 = *(int32_t *)v111; // 0x4022c0
    int32_t v284 = *(int32_t *)(4 * (int64_t)v283 + (int64_t)&g11); // 0x4022c4
    int32_t v285 = *(int32_t *)(v111 + 24); // 0x4022d2
    uint64_t v286 = (int64_t)((v285 + 1) * (int32_t)(v110 / (int64_t)v284)); // 0x4022db
    int64_t v287 = v282 < v286 ? v286 : v282; // 0x4022e1
    int64_t v288 = v111 + 40; // 0x4022e5
    int64_t v289 = v288; // 0x4022ec
    while (v112 != v288) {
        // 0x4022c0
        v282 = v287;
        v283 = *(int32_t *)v289;
        v284 = *(int32_t *)(4 * (int64_t)v283 + (int64_t)&g11);
        v285 = *(int32_t *)(v289 + 24);
        v286 = (int64_t)((v285 + 1) * (int32_t)(v110 / (int64_t)v284));
        v287 = v282 < v286 ? v286 : v282;
        v288 = v289 + 40;
        v289 = v288;
    }
    uint32_t v290 = *(int32_t *)v111; // 0x4022f0
    int64_t v291 = v111 + 40; // 0x4022f4
    int32_t v292 = *(int32_t *)(4 * (int64_t)v290 + (int64_t)&g11); // 0x4022f8
    int32_t v293 = *(int32_t *)(v111 + 24); // 0x402308
    *(int32_t *)(v111 + 28) = (int32_t)v287 - v293 * (int32_t)(v110 / (int64_t)v292);
    int64_t v294 = v291; // 0x402314
    v142 = v116;
    while (v112 != v291) {
        // 0x4022f0
        v290 = *(int32_t *)v294;
        v291 = v294 + 40;
        v292 = *(int32_t *)(4 * (int64_t)v290 + (int64_t)&g11);
        v293 = *(int32_t *)(v294 + 24);
        *(int32_t *)(v294 + 28) = (int32_t)v287 - v293 * (int32_t)(v110 / (int64_t)v292);
        v294 = v291;
        v142 = v116;
    }
    goto lab_0x402316;
  lab_0x4023df:;
    uint32_t v295 = (int32_t)v117 % 256 & (int32_t)v279; // 0x4023e3
    v104 = v144;
    v105 = v295;
    v106 = v278;
    v107 = v295 % 2;
    v108 = v280;
    v109 = v281;
    goto lab_0x4023ed;
  lab_0x40282c:;
    int64_t v296 = v297;
    int64_t v298 = v299;
    int64_t v300 = v298; // 0x402841
    if (*(char *)&g75 != 0) {
        // 0x402843
        v300 = v298;
        if (v296 >= g73) {
            // 0x402a60
            v300 = v298 & 0xffffffff & function_4038f0(0);
        }
    }
    // 0x402850
    free((int64_t *)v22);
    v278 = 10;
    v279 = v300;
    v280 = v296;
    v281 = v301;
    goto lab_0x4023df;
}
// Address range: 0x402c60 - 0x402c8b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402c60
    int64_t v1; // 0x402c60
    __libc_start_main(0x401be0, (int32_t)a4, (char **)&v1, (void (*)())0x40c200, (void (*)())0x40c260, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x402c8b - 0x402caa
int64_t function_402c8b(void) {
    // 0x402c8b
    return &g47;
}
// Address range: 0x402caa - 0x402ce1
int64_t function_402caa(void) {
    // 0x402caa
    return 0;
}
// Address range: 0x402ce1 - 0x402d38
int64_t function_402ce1(void) {
    // 0x402ce1
    if (g52 != 0) {
        // 0x402d37
        int64_t result; // 0x402ce1
        return result;
    }
    int64_t v1 = g53; // 0x402d14
    int64_t result2; // 0x402d26
    if (g53 >= ((int64_t)&g31 - (int64_t)&g30 >> 3) - 1) {
        // 0x402d26
        result2 = function_402c8b();
        g52 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g31 - (int64_t)&g30 >> 3) - 1) {
        // 0x402d16
        v1++;
    }
    // 0x402d0a
    g53 = v1;
    // 0x402d26
    result2 = function_402c8b();
    g52 = 1;
    return result2;
}
// Address range: 0x402d38 - 0x402d3d
int64_t function_402d38(void) {
    // 0x402d38
    return function_402caa();
}
// Address range: 0x402d40 - 0x402d41
int64_t function_402d40(void) {
    // 0x402d40
    int64_t result; // 0x402d40
    return result;
}
// Address range: 0x402d50 - 0x402e3d
int64_t function_402d50(int64_t a1, int64_t a2) {
    // 0x402d50
    int64_t v1; // bp-17, 0x402d50
    int64_t v2 = &v1; // 0x402d5e
    v1 = 0x100000000000000 * a2 >> 56;
    uint64_t v3 = v2 - (int64_t)g83; // 0x402d70
    int64_t v4 = v2; // 0x402d50
    int64_t v5 = v2; // 0x402dbb
    uint64_t v6 = a1;
    int64_t v7 = v2; // 0x402ddb
    uint64_t v8 = a1;
    int64_t v9 = v2; // 0x402e09
    int64_t v10; // 0x402d50
    switch (g84) {
        case 10: {
            v9--;
            *(char *)v9 = (char)a1 + 48;
            while (a1 >= 10) {
                // 0x402e03
                v9--;
                *(char *)v9 = (char)a1 + 48;
            }
            // 0x402e2c
            v10 = v9;
            if (v3 >= v9) {
                // 0x402da4
                return fputs_unlocked((char *)v9, g48);
            }
            // break -> 0x402d98
            break;
        }
        case 16: {
            v5--;
            char v11 = *(char *)(v6 % 16 | (int64_t)"0123456789abcdef"); // 0x402dc6
            *(char *)v5 = v11;
            v4 = v5;
            while (v6 >= 16) {
                // 0x402db8
                v6 /= 16;
                v5--;
                v11 = *(char *)(v6 % 16 | (int64_t)"0123456789abcdef");
                *(char *)v5 = v11;
                v4 = v5;
            }
        }
        default: {
          lab_0x402d88:
            // 0x402d88
            v10 = v4;
            if (v3 >= v4) {
                // 0x402da4
                return fputs_unlocked((char *)v4, g48);
            }
            // break -> 0x402d98
            break;
        }
        case 8: {
            v7--;
            *(char *)v7 = (char)v8 % 8 | 48;
            v4 = v7;
            while (v8 >= 8) {
                // 0x402dd8
                v8 /= 8;
                v7--;
                *(char *)v7 = (char)v8 % 8 | 48;
                v4 = v7;
            }
            // branch (via goto) -> 0x402d88
            goto lab_0x402d88;
        }
    }
    int64_t v12 = v10; // 0x402d98
    v12--;
    *(char *)v12 = 48;
    while (v3 != v12) {
        // 0x402d98
        v12--;
        *(char *)v12 = 48;
    }
    // 0x402da4
    return fputs_unlocked((char *)v3, g48);
}
// Address range: 0x402e40 - 0x402eb2
int64_t function_402e40(int64_t a1, int64_t * a2, char a3, int64_t a4) {
    char v1 = a1;
    if (v1 == 0) {
        // 0x402e8e
        return 0;
    }
    int64_t v2 = (int64_t)(v1 == 43) + a1;
    char * str = (char *)v2; // 0x402e5d
    int64_t v3; // 0x402e40
    int64_t v4; // 0x402e7a
    if (strchr(str, 46) != NULL) {
        // 0x402e6c
        v4 = function_407ce0(v2, 0, 10, a2, (int64_t *)"Bb", v3);
        return v4 & -256 | (int64_t)((int32_t)v4 == 0);
    }
    int64_t v5 = 8; // 0x402e99
    if (*str == 48) {
        // 0x402e9b
        v5 = 8 * (int64_t)((*(char *)(v2 + 1) & -33) == 88) + 8;
    }
    // 0x402e6c
    v4 = function_407ce0(v2, 0, v5, a2, (int64_t *)"Bb", v3);
    return v4 & -256 | (int64_t)((int32_t)v4 == 0);
}
// Address range: 0x402ec0 - 0x402f71
int64_t function_402ec0(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result; // 0x402ec0
    if (a1 <= a2) {
        // 0x402f60
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x402edb
    char v2; // bp-58, 0x402ec0
    int64_t v3 = &v2;
    int64_t v4 = a3; // 0x402efa
    int64_t v5 = v1 * (a1 - 1); // 0x402efa
    unsigned char v6 = *(char *)v4 % 128;
    int64_t v7 = (int64_t)"del"; // 0x402f49
    if (v6 != 127) {
        if (v6 < 33) {
            // 0x402f00
            v7 = 4 * (int64_t)v6 + (int64_t)"nul";
        } else {
            // 0x402f4f
            v2 = v6;
            v7 = v3;
        }
    }
    // 0x402f0b
    v4++;
    uint64_t v8 = v5 / a1;
    int64_t v9 = a6 - v8; // 0x402f0b
    int64_t v10 = v8 & 0xffffffff; // 0x402f29
    v5 -= v1;
    result = function_407ac0("%*s", v9 + a5 & 0xffffffff, v7, a4, a5, (int32_t)v9);
    while (v4 != a1 - a2 + a3) {
        // 0x402f2b
        v6 = *(char *)v4 % 128;
        v7 = (int64_t)"del";
        if (v6 != 127) {
            if (v6 < 33) {
                // 0x402f00
                v7 = 4 * (int64_t)v6 + (int64_t)"nul";
            } else {
                // 0x402f4f
                v2 = v6;
                v7 = v3;
            }
        }
        // 0x402f0b
        v4++;
        v8 = v5 / a1;
        v9 = v10 - v8;
        v10 = v8 & 0xffffffff;
        v5 -= v1;
        result = function_407ac0("%*s", v9 + a5 & 0xffffffff, v7, a4, a5, (int32_t)v9);
    }
    // 0x402f60
    return result;
}
// Address range: 0x402f80 - 0x40304f
int64_t function_402f80(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result; // 0x402f80
    if (a1 <= a2) {
        // 0x403040
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x402fa5
    int64_t v2 = v1 * (a1 - 1); // 0x402fb2
    int64_t v3 = a1; // 0x402fc6
    int64_t v4 = v2; // 0x402fc6
    int64_t v5; // 0x402f80
    int64_t v6; // 0x402f80
    int64_t v7; // bp-56, 0x402f80
    int64_t v8; // bp-64, 0x402f80
    int64_t * v9; // 0x402f80
    int64_t v10; // 0x403023
    if (g55 == 0) {
        // 0x402fd0
        v9 = (int64_t *)a3;
    } else {
        // 0x403015
        v6 = a3 + 7;
        v5 = &v8;
        v10 = v5 + 1;
        *(char *)v5 = *(char *)v6;
        v9 = &v8;
        v6--;
        while (v10 != (int64_t)&v7) {
            // 0x403020
            v5 = v10;
            v10 = v5 + 1;
            *(char *)v5 = *(char *)v6;
            v9 = &v8;
            v6--;
        }
    }
    // 0x402fd4
    v3--;
    uint64_t v11 = v4 / a1;
    int64_t v12 = a6 - v11; // 0x402ffe
    int64_t v13 = *v9;
    int64_t v14 = v11 & 0xffffffff; // 0x402ff0
    int64_t v15 = a3 + 8; // 0x402ff0
    v4 -= v1;
    result = function_407ac0((char *)a4, v12 + a5 & 0xffffffff, v13, v2, a5, (int32_t)v12);
    while (v3 != a2) {
        int64_t v16 = v15;
        if (g55 == 0) {
            // 0x402fd0
            v9 = (int64_t *)v16;
        } else {
            // 0x403015
            v6 = v16 + 7;
            v5 = &v8;
            v10 = v5 + 1;
            *(char *)v5 = *(char *)v6;
            v9 = &v8;
            v6--;
            while (v10 != (int64_t)&v7) {
                // 0x403020
                v5 = v10;
                v10 = v5 + 1;
                *(char *)v5 = *(char *)v6;
                v9 = &v8;
                v6--;
            }
        }
        // 0x402fd4
        v3--;
        v11 = v4 / a1;
        v12 = v14 - v11;
        v13 = *v9;
        v14 = v11 & 0xffffffff;
        v15 = v16 + 8;
        v4 -= v1;
        result = function_407ac0((char *)a4, v12 + a5 & 0xffffffff, v13, v2, a5, (int32_t)v12);
    }
    // 0x403040
    return result;
}
// Address range: 0x403050 - 0x40311f
int64_t function_403050(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result; // 0x403050
    if (a1 <= a2) {
        // 0x403110
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x403075
    int64_t v2 = v1 * (a1 - 1); // 0x403082
    int64_t v3 = a1; // 0x403096
    int64_t v4 = v2; // 0x403096
    int64_t v5; // 0x403050
    int64_t v6; // 0x403050
    int64_t v7; // bp-56, 0x403050
    int64_t v8; // bp-64, 0x403050
    int64_t * v9; // 0x403050
    int64_t v10; // 0x4030f3
    if (g55 == 0) {
        // 0x4030a0
        v9 = (int64_t *)a3;
    } else {
        // 0x4030e5
        v6 = a3 + 7;
        v5 = &v8;
        v10 = v5 + 1;
        *(char *)v5 = *(char *)v6;
        v9 = &v8;
        v6--;
        while (v10 != (int64_t)&v7) {
            // 0x4030f0
            v5 = v10;
            v10 = v5 + 1;
            *(char *)v5 = *(char *)v6;
            v9 = &v8;
            v6--;
        }
    }
    // 0x4030a4
    v3--;
    uint64_t v11 = v4 / a1;
    int64_t v12 = a6 - v11; // 0x4030ce
    int64_t v13 = *v9;
    int64_t v14 = v11 & 0xffffffff; // 0x4030c0
    int64_t v15 = a3 + 8; // 0x4030c0
    v4 -= v1;
    result = function_407ac0((char *)a4, v12 + a5 & 0xffffffff, v13, v2, a5, (int32_t)v12);
    while (v3 != a2) {
        int64_t v16 = v15;
        if (g55 == 0) {
            // 0x4030a0
            v9 = (int64_t *)v16;
        } else {
            // 0x4030e5
            v6 = v16 + 7;
            v5 = &v8;
            v10 = v5 + 1;
            *(char *)v5 = *(char *)v6;
            v9 = &v8;
            v6--;
            while (v10 != (int64_t)&v7) {
                // 0x4030f0
                v5 = v10;
                v10 = v5 + 1;
                *(char *)v5 = *(char *)v6;
                v9 = &v8;
                v6--;
            }
        }
        // 0x4030a4
        v3--;
        v11 = v4 / a1;
        v12 = v14 - v11;
        v13 = *v9;
        v14 = v11 & 0xffffffff;
        v15 = v16 + 8;
        v4 -= v1;
        result = function_407ac0((char *)a4, v12 + a5 & 0xffffffff, v13, v2, a5, (int32_t)v12);
    }
    // 0x403110
    return result;
}
// Address range: 0x403120 - 0x4031ff
int64_t function_403120(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 <= a2) {
        // 0x4031f0
        int64_t result; // 0x403120
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x403140
    int64_t v2 = v1 * (a1 - 1); // 0x40314d
    int64_t v3 = v2; // 0x403167
    int64_t v4 = 0; // 0x403167
    int64_t v5 = 4 * v4 + a3;
    int64_t v6; // 0x403120
    int64_t v7; // 0x403120
    int64_t v8; // 0x4031b7
    unsigned char v9; // 0x4031bd
    unsigned char v10; // 0x4031cf
    unsigned char v11; // 0x4031b2
    if (g55 == 0) {
        // 0x403170
        v6 = a4;
        v7 = (int64_t)*(int32_t *)v5;
    } else {
        // 0x4031b2
        v11 = *(char *)(v5 + 3);
        v8 = (int64_t)*(char *)(v5 + 2);
        v9 = *(char *)(v5 + 1);
        v10 = *(char *)v5;
        v6 = v8;
        v7 = 256 * v8 | (int64_t)v11 | 0x10000 * (int64_t)v9 | 0x1000000 * (int64_t)v10;
    }
    uint64_t v12 = v3 / a1;
    int64_t v13 = a6 - v12; // 0x40319b
    v4++;
    int64_t result2 = function_407ac0((char *)a4, v13 + a5 & 0xffffffff, v7, v6, v2, (int32_t)v13); // 0x40317f
    int64_t v14 = v6; // 0x403191
    int64_t v15 = v12 & 0xffffffff; // 0x403191
    v3 -= v1;
    while (a1 - a2 != v4) {
        // 0x403193
        v5 = 4 * v4 + a3;
        if (g55 == 0) {
            // 0x403170
            v6 = v14;
            v7 = (int64_t)*(int32_t *)v5;
        } else {
            // 0x4031b2
            v11 = *(char *)(v5 + 3);
            v8 = (int64_t)*(char *)(v5 + 2);
            v9 = *(char *)(v5 + 1);
            v10 = *(char *)v5;
            v6 = v8;
            v7 = 256 * v8 | (int64_t)v11 | 0x10000 * (int64_t)v9 | 0x1000000 * (int64_t)v10;
        }
        // 0x403175
        v12 = v3 / a1;
        v13 = v15 - v12;
        v4++;
        result2 = function_407ac0((char *)a4, v13 + a5 & 0xffffffff, v7, v6, v2, (int32_t)v13);
        v14 = v6;
        v15 = v12 & 0xffffffff;
        v3 -= v1;
    }
    // 0x4031f0
    return result2;
}
// Address range: 0x403200 - 0x4032bf
int64_t function_403200(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 <= a2) {
        // 0x4032b0
        int64_t result; // 0x403200
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x403220
    int64_t v2 = v1 * (a1 - 1); // 0x40322d
    int64_t v3 = v2; // 0x403247
    int64_t v4 = 0; // 0x403247
    int64_t v5 = 2 * v4 + a3;
    int64_t v6; // 0x403200
    int64_t v7; // 0x403200
    int64_t v8; // 0x403200
    int64_t v9; // 0x403200
    int64_t v10; // 0x4032a1
    unsigned char v11; // 0x403293
    unsigned char v12; // 0x403298
    if (g55 == 0) {
        // 0x403250
        v8 = a4;
        v6 = v7;
        v9 = (int64_t)*(int16_t *)v5;
    } else {
        // 0x403293
        v11 = *(char *)(v5 + 1);
        v12 = *(char *)v5;
        v10 = v7 & 0xffff0000 | (int64_t)v11 | 256 * (int64_t)v12;
        v8 = v10;
        v6 = v10;
        v9 = v10 % 0x10000;
    }
    uint64_t v13 = v3 / a1;
    int64_t v14 = a6 - v13; // 0x40327c
    v4++;
    int64_t result2 = function_407ac0((char *)a4, v14 + a5 & 0xffffffff, v9, v8, v2, (int32_t)v14); // 0x403260
    int64_t v15 = v8; // 0x403272
    int64_t v16 = v13 & 0xffffffff; // 0x403272
    v3 -= v1;
    while (a1 - a2 != v4) {
        int64_t v17 = v6;
        v5 = 2 * v4 + a3;
        if (g55 == 0) {
            // 0x403250
            v8 = v15;
            v6 = v17;
            v9 = (int64_t)*(int16_t *)v5;
        } else {
            // 0x403293
            v11 = *(char *)(v5 + 1);
            v12 = *(char *)v5;
            v10 = v17 & 0xffff0000 | (int64_t)v11 | 256 * (int64_t)v12;
            v8 = v10;
            v6 = v10;
            v9 = v10 % 0x10000;
        }
        // 0x403256
        v13 = v3 / a1;
        v14 = v16 - v13;
        v4++;
        result2 = function_407ac0((char *)a4, v14 + a5 & 0xffffffff, v9, v8, v2, (int32_t)v14);
        v15 = v8;
        v16 = v13 & 0xffffffff;
        v3 -= v1;
    }
    // 0x4032b0
    return result2;
}
// Address range: 0x4032c0 - 0x40337f
int64_t function_4032c0(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 <= a2) {
        // 0x403370
        int64_t result; // 0x4032c0
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x4032e0
    int64_t v2 = v1 * (a1 - 1); // 0x4032ed
    int64_t v3 = v2; // 0x403307
    int64_t v4 = 0; // 0x403307
    int64_t v5 = 2 * v4 + a3;
    int64_t v6; // 0x4032c0
    int64_t v7; // 0x4032c0
    int64_t v8; // 0x4032c0
    int64_t v9; // 0x4032c0
    int64_t v10; // 0x403361
    unsigned char v11; // 0x403353
    unsigned char v12; // 0x403358
    if (g55 == 0) {
        // 0x403310
        v8 = a4;
        v6 = v7;
        v9 = (int64_t)*(int16_t *)v5;
    } else {
        // 0x403353
        v11 = *(char *)(v5 + 1);
        v12 = *(char *)v5;
        v10 = v7 & 0xffff0000 | (int64_t)v11 | 256 * (int64_t)v12;
        v8 = v10;
        v6 = v10;
        v9 = 0x1000000000000 * v10 >> 48;
    }
    uint64_t v13 = v3 / a1;
    int64_t v14 = a6 - v13; // 0x40333c
    v4++;
    int64_t result2 = function_407ac0((char *)a4, v14 + a5 & 0xffffffff, v9, v8, v2, (int32_t)v14); // 0x403320
    int64_t v15 = v8; // 0x403332
    int64_t v16 = v13 & 0xffffffff; // 0x403332
    v3 -= v1;
    while (a1 - a2 != v4) {
        int64_t v17 = v6;
        v5 = 2 * v4 + a3;
        if (g55 == 0) {
            // 0x403310
            v8 = v15;
            v6 = v17;
            v9 = (int64_t)*(int16_t *)v5;
        } else {
            // 0x403353
            v11 = *(char *)(v5 + 1);
            v12 = *(char *)v5;
            v10 = v17 & 0xffff0000 | (int64_t)v11 | 256 * (int64_t)v12;
            v8 = v10;
            v6 = v10;
            v9 = 0x1000000000000 * v10 >> 48;
        }
        // 0x403316
        v13 = v3 / a1;
        v14 = v16 - v13;
        v4++;
        result2 = function_407ac0((char *)a4, v14 + a5 & 0xffffffff, v9, v8, v2, (int32_t)v14);
        v15 = v8;
        v16 = v13 & 0xffffffff;
        v3 -= v1;
    }
    // 0x403370
    return result2;
}
// Address range: 0x403380 - 0x403402
int64_t function_403380(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result; // 0x403380
    if (a1 <= a2) {
        // 0x4033f3
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x40339a
    int64_t v2 = v1 * (a1 - 1); // 0x4033a7
    int64_t v3 = v2; // 0x4033bd
    int64_t v4 = a3 + 1; // 0x4033c9
    uint64_t v5 = v3 / a1;
    unsigned char v6 = *(char *)a3; // 0x4033d0
    int64_t v7 = a6 - v5; // 0x4033d8
    int64_t v8 = v5 & 0xffffffff; // 0x4033f1
    v3 -= v1;
    result = function_407ac0((char *)a4, v7 + a5 & 0xffffffff, (int64_t)v6, v2, a5, (int32_t)v7);
    while (v4 != a1 - a2 + a3) {
        int64_t v9 = v4;
        v4 = v9 + 1;
        v5 = v3 / a1;
        v6 = *(char *)v9;
        v7 = v8 - v5;
        v8 = v5 & 0xffffffff;
        v3 -= v1;
        result = function_407ac0((char *)a4, v7 + a5 & 0xffffffff, (int64_t)v6, v2, a5, (int32_t)v7);
    }
    // 0x4033f3
    return result;
}
// Address range: 0x403410 - 0x403492
int64_t function_403410(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result; // 0x403410
    if (a1 <= a2) {
        // 0x403483
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x40342a
    int64_t v2 = v1 * (a1 - 1); // 0x403437
    int64_t v3 = v2; // 0x40344d
    int64_t v4 = a3 + 1; // 0x403459
    uint64_t v5 = v3 / a1;
    char v6 = *(char *)a3; // 0x403460
    int64_t v7 = a6 - v5; // 0x403468
    int64_t v8 = v5 & 0xffffffff; // 0x403481
    v3 -= v1;
    result = function_407ac0((char *)a4, v7 + a5 & 0xffffffff, (int64_t)v6, v2, a5, (int32_t)v7);
    while (v4 != a1 - a2 + a3) {
        int64_t v9 = v4;
        v4 = v9 + 1;
        v5 = v3 / a1;
        v6 = *(char *)v9;
        v7 = v8 - v5;
        v8 = v5 & 0xffffffff;
        v3 -= v1;
        result = function_407ac0((char *)a4, v7 + a5 & 0xffffffff, (int64_t)v6, v2, a5, (int32_t)v7);
    }
    // 0x403483
    return result;
}
// Address range: 0x4034a0 - 0x40358f
int64_t function_4034a0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1; // bp-136, 0x4034ae
    if (a1 <= a2) {
        // 0x403580
        int64_t result; // 0x4034a0
        return result;
    }
    int64_t v2 = &v1; // 0x4034aa
    int64_t v3 = (0x100000000 * a6 >> 32) * (a1 - 1); // 0x4034d2
    int64_t v4 = v2 + 32;
    int64_t v5 = v2 - 16; // 0x4034f4
    v1 = a1;
    int64_t v6 = v3; // 0x4034e6
    int64_t v7 = a1; // 0x4034e6
    int64_t v8 = a3;
    int32_t v9 = *(int32_t *)(v2 + 20); // 0x403545
    int64_t v10 = v8; // 0x403553
    int64_t v11; // 0x4034a0
    int64_t v12; // 0x4034a0
    int64_t v13; // bp-88, 0x4034a0
    int64_t v14; // 0x403563
    if (g55 != 0) {
        // 0x403555
        v12 = v8 + 15;
        v14 = v4 + 1;
        *(char *)v4 = *(char *)v12;
        v10 = v4;
        v12--;
        while (v14 != (int64_t)&v13) {
            // 0x403560
            v11 = v14;
            v14 = v11 + 1;
            *(char *)v11 = *(char *)v12;
            v10 = v4;
            v12--;
        }
    }
    // 0x4034f4
    v7--;
    int64_t v15 = v6 / v1; // 0x40353f
    *(float80_t *)v5 = *(float80_t *)v10;
    function_4054d0(v4, 45, 0, 0, (int64_t)&g104);
    function_407ac0("%*s", (int64_t)((int32_t)a6 - (int32_t)v15 + v9), v4, 0, v3, (int32_t)a6);
    while (v7 != *(int64_t *)(v2 + 8)) {
        // 0x4034f4
        v6 -= *(int64_t *)(v2 + 24);
        v8 += 16;
        int64_t v16 = v15;
        v9 = *(int32_t *)(v2 + 20);
        v10 = v8;
        if (g55 != 0) {
            // 0x403555
            v12 = v8 + 15;
            v14 = v4 + 1;
            *(char *)v4 = *(char *)v12;
            v10 = v4;
            v12--;
            while (v14 != (int64_t)&v13) {
                // 0x403560
                v11 = v14;
                v14 = v11 + 1;
                *(char *)v11 = *(char *)v12;
                v10 = v4;
                v12--;
            }
        }
        // 0x4034f4
        v7--;
        v15 = v6 / v1;
        *(float80_t *)v5 = *(float80_t *)v10;
        function_4054d0(v4, 45, 0, 0, (int64_t)&g104);
        function_407ac0("%*s", (int64_t)((int32_t)v16 - (int32_t)v15 + v9), v4, 0, v3, (int32_t)a6);
    }
    // 0x403580
    return *(int64_t *)v5;
}
// Address range: 0x403590 - 0x40367f
int64_t function_403590(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 <= a2) {
        // 0x403670
        int64_t result; // 0x403590
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x4035b5
    int64_t v2 = v1 * (a1 - 1); // 0x4035c2
    int64_t v3; // bp-104, 0x403590
    int64_t v4 = &v3;
    int64_t v5 = v2; // 0x4035d6
    int64_t v6 = a1; // 0x4035d6
    int64_t v7; // 0x403590
    int64_t v8; // 0x403590
    int64_t v9; // bp-96, 0x403590
    int64_t v10; // 0x403653
    if (g55 == 0) {
        // 0x4035e0
        __asm_movsd(*(int64_t *)a3);
    } else {
        // 0x40363d
        v8 = a3 + 7;
        v10 = v4 + 1;
        *(char *)v4 = *(char *)v8;
        v8--;
        while (v10 != (int64_t)&v9) {
            // 0x403650
            v7 = v10;
            v10 = v7 + 1;
            *(char *)v7 = *(char *)v8;
            v8--;
        }
        // 0x403663
        __asm_movsd(v3);
    }
    // 0x4035e6
    v6--;
    int64_t v11 = v5 / a1; // 0x403627
    function_405250(&v3, 40, 0, 0);
    int64_t result2 = function_407ac0("%*s", a6 + a5 - v11 & 0xffffffff, v4, 0, v2, (int32_t)a6); // 0x40360d
    int64_t v12 = a3 + 8; // 0x40361c
    v5 -= v1;
    while (v6 != a2) {
        int64_t v13 = v12;
        int64_t v14 = v11;
        if (g55 == 0) {
            // 0x4035e0
            __asm_movsd(*(int64_t *)v13);
        } else {
            // 0x40363d
            v8 = v13 + 7;
            v10 = v4 + 1;
            *(char *)v4 = *(char *)v8;
            v8--;
            while (v10 != (int64_t)&v9) {
                // 0x403650
                v7 = v10;
                v10 = v7 + 1;
                *(char *)v7 = *(char *)v8;
                v8--;
            }
            // 0x403663
            __asm_movsd(v3);
        }
        // 0x4035e6
        v6--;
        v11 = v5 / a1;
        function_405250(&v3, 40, 0, 0);
        result2 = function_407ac0("%*s", v14 + a5 - v11 & 0xffffffff, v4, 0, v2, (int32_t)a6);
        v12 = v13 + 8;
        v5 -= v1;
    }
    // 0x403670
    return result2;
}
// Address range: 0x403680 - 0x40377f
int64_t function_403680(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    if (a1 <= a2) {
        // 0x403770
        int64_t result; // 0x403680
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x4036a3
    int64_t v2; // bp-88, 0x403680
    int64_t v3 = &v2;
    int64_t v4 = v1 * (a1 - 1); // 0x4036c7
    int64_t v5 = 0; // 0x4036c7
    int64_t v6 = 4 * v5 + a3;
    unsigned char v7; // 0x403734
    unsigned char v8; // 0x403746
    unsigned char v9; // 0x403729
    unsigned char v10; // 0x40372e
    if (g55 == 0) {
        // 0x4036d0
        __asm_movss(*(int32_t *)v6);
    } else {
        // 0x403729
        v9 = *(char *)(v6 + 3);
        v10 = *(char *)(v6 + 2);
        v7 = *(char *)(v6 + 1);
        v8 = *(char *)v6;
        __asm_movss(256 * (int32_t)v10 | (int32_t)v9 | 0x10000 * (int32_t)v7 | 0x1000000 * (int32_t)v8);
    }
    int64_t v11 = v4 / a1; // 0x403713
    v5++;
    function_405390(&v2, 31, 0, 0);
    int64_t result2 = function_407ac0("%*s", a6 + a5 - v11 & 0xffffffff, v3, 0, a5, (int32_t)a6); // 0x4036fd
    v4 -= v1;
    while (a1 - a2 != v5) {
        int64_t v12 = v11;
        v6 = 4 * v5 + a3;
        if (g55 == 0) {
            // 0x4036d0
            __asm_movss(*(int32_t *)v6);
        } else {
            // 0x403729
            v9 = *(char *)(v6 + 3);
            v10 = *(char *)(v6 + 2);
            v7 = *(char *)(v6 + 1);
            v8 = *(char *)v6;
            __asm_movss(256 * (int32_t)v10 | (int32_t)v9 | 0x10000 * (int32_t)v7 | 0x1000000 * (int32_t)v8);
        }
        // 0x4036d6
        v11 = v4 / a1;
        v5++;
        function_405390(&v2, 31, 0, 0);
        result2 = function_407ac0("%*s", v12 + a5 - v11 & 0xffffffff, v3, 0, a5, (int32_t)a6);
        v4 -= v1;
    }
    // 0x403770
    return result2;
}
// Address range: 0x403780 - 0x4038f0
int64_t function_403780(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result; // 0x403780
    if (a1 <= a2) {
        // 0x40381b
        return result;
    }
    int64_t v1 = 0x100000000 * a6 >> 32; // 0x40379f
    int64_t v2 = a4; // 0x4037bf
    int64_t v3 = a6; // 0x4037bf
    int64_t v4 = a3; // 0x4037bf
    int64_t v5 = v1 * (a1 - 1); // 0x4037bf
    int64_t v6; // 0x403780
    int64_t v7; // 0x403780
    int64_t v8; // 0x403780
    int64_t v9; // 0x4037c9
    while (true) {
      lab_0x4037c0:
        // 0x4037c0
        v6 = v3;
        int64_t v10 = v2;
        unsigned char v11 = *(char *)v4; // 0x4037c9
        v9 = v11;
        g102 = v9;
        v7 = v10;
        v8 = (int64_t)"\\0";
        switch (v11) {
            case 0: {
                goto lab_0x4037f8;
            }
            case 7: {
                // 0x403890
                v7 = v10;
                v8 = (int64_t)"\\a";
                goto lab_0x4037f8;
            }
            case 8: {
                // 0x403880
                v7 = v10;
                v8 = (int64_t)"\\b";
                goto lab_0x4037f8;
            }
            case 9: {
                // 0x403870
                v7 = v10;
                v8 = (int64_t)"\\t";
                goto lab_0x4037f8;
            }
            case 10: {
                // 0x403860
                v7 = v10;
                v8 = (int64_t)"\\n";
                goto lab_0x4037f8;
            }
            case 11: {
                // 0x403850
                v7 = v10;
                v8 = (int64_t)"\\v";
                goto lab_0x4037f8;
            }
            case 12: {
                // 0x403840
                v7 = v10;
                v8 = (int64_t)"\\f";
                goto lab_0x4037f8;
            }
            case 13: {
                // 0x403830
                v7 = v10;
                v8 = (int64_t)"\\r";
                goto lab_0x4037f8;
            }
            default: {
                char v12 = *(char *)((2 * v9 | 1) + (int64_t)*__ctype_b_loc()); // 0x4038cc
                int64_t v13 = (v12 & 64) == 0 ? (int64_t)"%03o" : (int64_t)"%c"; // 0x4038db
                int64_t v14; // bp-60, 0x403780
                __sprintf_chk((char *)&v14, 1, 4, (char *)v13);
                v7 = v13;
                v8 = &v14;
                goto lab_0x4037f8;
            }
        }
    }
    // 0x40381b
    return result;
  lab_0x4037f8:
    // 0x4037f8
    v4++;
    v3 = v5 / a1;
    v2 = v7;
    v5 -= v1;
    result = function_407ac0("%*s", v6 + a5 - v3 & 0xffffffff, v8, v2, v9, (int32_t)a6);
    if (v4 == a1 - a2 + a3) {
        return result;
    }
    goto lab_0x4037c0;
}
// Address range: 0x4038f0 - 0x403a45
int64_t function_4038f0(int32_t err_num) {
    struct _IO_FILE * v1 = g66; // 0x4038fb
    int64_t v2 = 1; // 0x403905
    if (v1 != NULL) {
        // 0x403907
        bool v3; // 0x4038f0
        if ((*(char *)v1 & 32) != 0) {
            // 0x403960
            function_407090(0, 3, g68);
            error(0, err_num, dcgettext(NULL, "%s: read error", 5));
            int64_t v4 = v3 ? -1 : 1; // 0x4039ad
            int64_t v5 = (int64_t)&g24; // 0x4038f0
            int64_t v6 = *(int64_t *)(g67 - 8); // 0x4038f0
            int64_t v7 = 2; // 0x4039ad
            unsigned char v8 = *(char *)v6; // 0x4039ad
            char v9 = *(char *)v5; // 0x4039ad
            int64_t v10 = v6 + v4; // 0x4039ad
            char v11 = v9; // 0x4039ad
            bool v12 = false; // 0x4039ad
            while (v8 == v9) {
                v7--;
                v5 += v4;
                v11 = v8;
                v12 = true;
                if (v7 == 0) {
                    // break -> 
                    break;
                }
                v8 = *(char *)v10;
                v9 = *(char *)v5;
                v10 += v4;
                v11 = v9;
                v12 = false;
            }
            unsigned char v13 = v11;
            v2 = 0;
            if ((v8 >= v13 && !v12) != v8 < v13) {
                // 0x4039be
                function_408120((int64_t)g66, v10);
                v2 = 0;
            }
        } else {
            int64_t v14 = v3 ? -1 : 1; // 0x403923
            int64_t v15 = (int64_t)&g24; // 0x4038f0
            int64_t v16 = *(int64_t *)(g67 - 8); // 0x4038f0
            int64_t v17 = 2; // 0x403923
            unsigned char v18 = *(char *)v16; // 0x403923
            char v19 = *(char *)v15; // 0x403923
            int64_t v20 = v16 + v14; // 0x403923
            char v21 = v19; // 0x403923
            bool v22 = false; // 0x403923
            while (v18 == v19) {
                v17--;
                v15 += v14;
                v21 = v18;
                v22 = true;
                if (v17 == 0) {
                    // break -> 
                    break;
                }
                v18 = *(char *)v20;
                v19 = *(char *)v15;
                v20 += v14;
                v21 = v19;
                v22 = false;
            }
            unsigned char v23 = v21;
            v2 = 1;
            if ((v18 >= v23 && !v22) != v18 < v23) {
                // 0x403a00
                v2 = 1;
                if ((int32_t)function_408120((int64_t)v1, v20) != 0) {
                    // 0x403a10
                    error(0, *__errno_location(), "%s", (char *)function_407090(0, 3, g68));
                    v2 = 0;
                }
            }
        }
        // 0x403938
        g66 = NULL;
    }
    // 0x403943
    if ((*(char *)g48 & 32) == 0) {
        // 0x403953
        return v2 & 0xffffffff;
    }
    // 0x4039d0
    error(0, (int32_t)"write error" ^ (int32_t)"write error", dcgettext(NULL, "write error", 5));
    return 0;
}
// Address range: 0x403a50 - 0x403b4f
int64_t function_403a50(void) {
    // 0x403a50
    bool v1; // 0x403a50
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = 1;
    int64_t file_path = *(int64_t *)g67; // 0x403a99
    g68 = file_path;
    int64_t v4 = v3; // 0x403aa6
    int64_t stream; // 0x403a50
    int64_t v5; // 0x403a50
    while (file_path != 0) {
        int64_t v6 = 2; // 0x403ab9
        int64_t v7 = file_path;
        int64_t v8 = (int64_t)&g24;
        unsigned char v9 = *(char *)v7; // 0x403ab9
        char v10 = *(char *)v8; // 0x403ab9
        char v11 = v10; // 0x403ab9
        bool v12 = false; // 0x403ab9
        while (v9 == v10) {
            v6--;
            int64_t v13 = v8 + v2; // 0x403ab9
            int64_t v14 = v7 + v2; // 0x403ab9
            v11 = v9;
            v12 = true;
            if (v6 == 0) {
                // break -> 
                break;
            }
            v7 = v14;
            v8 = v13;
            v9 = *(char *)v7;
            v10 = *(char *)v8;
            v11 = v10;
            v12 = false;
        }
        unsigned char v15 = v11;
        g67 += 8;
        int64_t v16; // 0x403a50
        int64_t v17; // 0x403a50
        if ((v9 >= v15 && !v12) == v9 < v15) {
            // 0x403a60
            g65 = 1;
            g68 = (int64_t)dcgettext(NULL, "standard input", 5);
            int64_t v18 = g49; // 0x403a7f
            g66 = (struct _IO_FILE *)v18;
            v16 = v18;
            v17 = v3;
        } else {
            struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x403ad3
            g66 = file;
            if (file != NULL) {
                // 0x403ae4
                stream = (int64_t)file;
                v5 = v3;
                goto lab_0x403ae4_2;
            }
            // 0x403b00
            error(0, *__errno_location(), "%s", (char *)function_407090(0, 3, g68));
            v16 = (int64_t)g66;
            v17 = 0;
        }
        // 0x403a8d
        stream = v16;
        v5 = v17;
        if (v16 != 0) {
            goto lab_0x403ae4_2;
        }
        v3 = v17;
        file_path = *(int64_t *)g67;
        g68 = file_path;
        v4 = v3;
    }
    // 0x403af6
    return v4 & 0xffffffff;
  lab_0x403ae4_2:
    // 0x403ae4
    v4 = v5;
    if (*(char *)&g75 != 0 == *(char *)&g81 == 0) {
        // 0x403b3c
        setvbuf((struct _IO_FILE *)stream, NULL, 2, 0);
        v4 = v5;
        return v4 & 0xffffffff;
    } else {
        return v4 & 0xffffffff;
    }
}
// Address range: 0x403b50 - 0x403d14
int64_t function_403b50(int64_t a1) {
    // 0x403b50
    int64_t v1; // 0x403b50
    int64_t v2 = v1;
    if (a1 == 0) {
        // 0x403c9e
        return 1;
    }
    // 0x403b68
    char * format; // 0x403cf6
    if (g66 == NULL) {
        // 0x403cea
        format = dcgettext(NULL, "cannot skip past end of combined input", 5);
        error(1, (int32_t)"cannot skip past end of combined input" ^ (int32_t)"cannot skip past end of combined input", format);
        // 0x403c9e
        return 1;
    }
    int64_t v3 = a1; // 0x403b50
    int64_t v4 = 1; // 0x403b50
    int64_t v5; // 0x403b50
    int64_t v6; // 0x403b50
    while (true) {
        // 0x403bf8
        v6 = v3;
        int64_t v7; // 0x403b50
        int64_t v8; // bp-8376, 0x403b50
        if (__fxstat(1, fileno(g66), (struct stat *)&v8) == 0) {
            // 0x403b98
            v5 = v4;
            int64_t v9 = v6; // 0x403ba6
            int32_t v10; // 0x403b50
            if ((v10 & 0xd000) != 0x8000 || v1 <= (v2 > 0x2000000000000000 ? 512 : v2)) {
                uint64_t v11 = 0x2000;
                uint64_t v12 = v9;
                int64_t v13 = v11 > v12 ? v12 : v11; // 0x403c6c
                int64_t v14; // bp-8232, 0x403b50
                int32_t v15 = __fread_unlocked_chk(&v14, 0x2000, 1, (int32_t)v13, g66); // 0x403c7b
                int64_t v16 = v15; // 0x403c7b
                int64_t v17 = v12 - v16; // 0x403c80
                int32_t v18; // 0x403c8f
                if (v13 != v16) {
                    // 0x403c88
                    v18 = g66->e0;
                    if ((v18 & 32) != 0) {
                        // 0x403c9e
                        return 0;
                    }
                    if ((v18 & 16) != 0) {
                        // break -> 0x403cb8
                        break;
                    }
                }
                int64_t v19 = v5; // 0x403c9c
                while (v17 != 0) {
                    // 0x403c58
                    v11 = v13;
                    v12 = v17;
                    v13 = v11 > v12 ? v12 : v11;
                    v15 = __fread_unlocked_chk(&v14, 0x2000, 1, (int32_t)v13, g66);
                    v16 = v15;
                    v17 = v12 - v16;
                    if (v13 != v16) {
                        // 0x403c88
                        v18 = g66->e0;
                        if ((v18 & 32) != 0) {
                            // 0x403c9e
                            return 0;
                        }
                        if ((v18 & 16) != 0) {
                            // break -> 0x403cb8
                            break;
                        }
                    }
                    // 0x403c99
                    v19 = v5;
                }
                // 0x403c9e
                return v19 & 0xffffffff;
            } else {
                if (v6 <= v1) {
                    // break -> 0x403cc8
                    break;
                }
                // 0x403bd3
                v3 = v6 - v1;
                v7 = v5;
            }
        } else {
            // 0x403c13
            error(0, *__errno_location(), "%s", (char *)function_407090(0, 3, g68));
            v3 = v6;
            v7 = 0;
        }
        int64_t v20 = function_4038f0(0); // 0x403bd8
        v4 = v7 & 0xffffffff & v20 & function_403a50();
        if (g66 == NULL) {
            // 0x403cea
            format = dcgettext(NULL, "cannot skip past end of combined input", 5);
            error(1, (int32_t)"cannot skip past end of combined input" ^ (int32_t)"cannot skip past end of combined input", format);
            // 0x403c9e
            return 1;
        }
    }
    int64_t v21 = (int32_t)function_4081e0((int64_t)g66, v6, 1) != 0 ? 0 : v5; // 0x403cdf
    // 0x403c9e
    return v21 & 0xffffffff;
}
// Address range: 0x403d20 - 0x403d78
int64_t function_403d20(int64_t * a1) {
    // 0x403d20
    *(int32_t *)a1 = -1;
    int64_t v1 = 1; // 0x403d3c
    if (g66 == NULL) {
        // 0x403d71
        return 1;
    }
    int32_t c = fgetc(g66); // 0x403d63
    *(int32_t *)a1 = c;
    while (c == -1) {
        int32_t v2 = *__errno_location(); // 0x403d45
        int64_t v3 = function_4038f0(v2); // 0x403d47
        v1 = v3 & v1 & function_403a50();
        if (g66 == NULL) {
            // break -> 0x403d71
            break;
        }
        c = fgetc(g66);
        *(int32_t *)a1 = c;
    }
    // 0x403d71
    return v1 & 0xffffffff;
}
// Address range: 0x403d80 - 0x40400f
int64_t function_403d80(int64_t a1, int64_t n, int64_t str, int64_t str2) {
    // 0x403d80
    int64_t result; // 0x403d80
    if (g35 != 0 == g34 == 0) {
        // 0x403f90
        if ((int64_t)g69 == n) {
            int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x403fa6
            int64_t v1 = memcmp_rc; // 0x403fa6
            result = v1;
            if (memcmp_rc == 0) {
                int64_t puts_rc = v1; // 0x403fba
                if (g54 == 0) {
                    // 0x403fbc
                    g54 = 1;
                    puts_rc = puts("*");
                }
                // 0x403fcd
                g34 = 0;
                return puts_rc;
            }
        }
    }
    // 0x403daf
    g54 = 0;
    if ((int64_t)g71 == 0) {
        // 0x403fcd
        g34 = 0;
        return result;
    }
    int64_t v2 = 0; // 0x403dcf
    int64_t v3 = 40 * v2; // 0x403e5e
    uint32_t v4 = *(int32_t *)(g72 + 4 + v3); // 0x403e62
    int32_t v5 = *(int32_t *)(4 * (int64_t)v4 + (int64_t)&g11); // 0x403e66
    if (v2 != 0) {
        // 0x403e92
        __printf_chk(1, "%*s", (int64_t)g83, (char *)&g27);
    }
    int64_t v6 = g72 + v3; // 0x403e07
    uint64_t v7; // 0x403d80
    uint64_t v8; // 0x403e66
    int32_t v9; // 0x403d80
    int32_t v10; // 0x403eca
    int32_t v11; // 0x403ece
    int64_t v12; // 0x403f55
    int64_t * v13; // 0x403f5c
    uint64_t v14; // 0x403f5c
    int16_t ** v15; // 0x403f03
    unsigned char v16; // 0x403f14
    char v17; // 0x403f22
    int64_t v18; // 0x403f33
    int64_t * v19; // 0x403f3a
    uint64_t v20; // 0x403f3a
    int64_t v21; // 0x403f10
    if (*(char *)(v6 + 24) != 0) {
        // 0x403eb8
        v7 = (int64_t)g69;
        v8 = (int64_t)v5;
        v9 = (v7 - n) / v8;
        v10 = *(int32_t *)(v6 + 32) * v9;
        v11 = *(int32_t *)(v6 + 28);
        __printf_chk(1, "%*s", (int64_t)(v11 * v9 + (int32_t)((0x100000000 * (int64_t)(v10 >> 31) | (int64_t)v10) / (v7 / v8 & 0xffffffff))), (char *)&g27);
        fwrite_unlocked((int64_t *)"  >", 1, 3, g48);
        if (n != 0) {
            // 0x403f03
            v15 = __ctype_b_loc();
            v21 = str2;
            v16 = *(char *)v21;
            v17 = *(char *)((int64_t)*v15 + 1 + 2 * (int64_t)v16);
            v18 = (int64_t)g48;
            v19 = (int64_t *)(v18 + 40);
            v20 = *v19;
            if (v20 >= *(int64_t *)(v18 + 48)) {
                // 0x403f80
                __overflow(g48, (v17 & 64) != 0 ? (int32_t)v16 : 46);
            } else {
                // 0x403f44
                *v19 = v20 + 1;
                *(char *)v20 = (v17 & 64) != 0 ? v16 : 46;
            }
            // 0x403f4e
            v21++;
            while (v21 != str2 + n) {
                // 0x403f10
                v16 = *(char *)v21;
                v17 = *(char *)((int64_t)*v15 + 1 + 2 * (int64_t)v16);
                v18 = (int64_t)g48;
                v19 = (int64_t *)(v18 + 40);
                v20 = *v19;
                if (v20 >= *(int64_t *)(v18 + 48)) {
                    // 0x403f80
                    __overflow(g48, (v17 & 64) != 0 ? (int32_t)v16 : 46);
                } else {
                    // 0x403f44
                    *v19 = v20 + 1;
                    *(char *)v20 = (v17 & 64) != 0 ? v16 : 46;
                }
                // 0x403f4e
                v21++;
            }
        }
        // 0x403f55
        v12 = (int64_t)g48;
        v13 = (int64_t *)(v12 + 40);
        v14 = *v13;
        if (v14 >= *(int64_t *)(v12 + 48)) {
            // 0x404000
            __overflow(g48, 60);
        } else {
            // 0x403f6a
            *v13 = v14 + 1;
            *(char *)v14 = 60;
        }
    }
    int64_t v22 = (int64_t)g48; // 0x403e18
    int64_t * v23 = (int64_t *)(v22 + 40); // 0x403e1f
    uint64_t v24 = *v23; // 0x403e1f
    int64_t result2; // 0x403d80
    if (v24 >= *(int64_t *)(v22 + 48)) {
        // 0x403fe8
        result2 = __overflow(g48, 10);
    } else {
        // 0x403e2d
        *v23 = v24 + 1;
        *(char *)v24 = 10;
        result2 = v24;
    }
    // 0x403e38
    v2++;
    while (v2 < (int64_t)g71) {
        // 0x403e49
        v3 = 40 * v2;
        v4 = *(int32_t *)(g72 + 4 + v3);
        v5 = *(int32_t *)(4 * (int64_t)v4 + (int64_t)&g11);
        if (v2 != 0) {
            // 0x403e92
            __printf_chk(1, "%*s", (int64_t)g83, (char *)&g27);
        }
        // 0x403de5
        v6 = g72 + v3;
        if (*(char *)(v6 + 24) != 0) {
            // 0x403eb8
            v7 = (int64_t)g69;
            v8 = (int64_t)v5;
            v9 = (v7 - n) / v8;
            v10 = *(int32_t *)(v6 + 32) * v9;
            v11 = *(int32_t *)(v6 + 28);
            __printf_chk(1, "%*s", (int64_t)(v11 * v9 + (int32_t)((0x100000000 * (int64_t)(v10 >> 31) | (int64_t)v10) / (v7 / v8 & 0xffffffff))), (char *)&g27);
            fwrite_unlocked((int64_t *)"  >", 1, 3, g48);
            if (n != 0) {
                // 0x403f03
                v15 = __ctype_b_loc();
                v21 = str2;
                v16 = *(char *)v21;
                v17 = *(char *)((int64_t)*v15 + 1 + 2 * (int64_t)v16);
                v18 = (int64_t)g48;
                v19 = (int64_t *)(v18 + 40);
                v20 = *v19;
                if (v20 >= *(int64_t *)(v18 + 48)) {
                    // 0x403f80
                    __overflow(g48, (v17 & 64) != 0 ? (int32_t)v16 : 46);
                } else {
                    // 0x403f44
                    *v19 = v20 + 1;
                    *(char *)v20 = (v17 & 64) != 0 ? v16 : 46;
                }
                // 0x403f4e
                v21++;
                while (v21 != str2 + n) {
                    // 0x403f10
                    v16 = *(char *)v21;
                    v17 = *(char *)((int64_t)*v15 + 1 + 2 * (int64_t)v16);
                    v18 = (int64_t)g48;
                    v19 = (int64_t *)(v18 + 40);
                    v20 = *v19;
                    if (v20 >= *(int64_t *)(v18 + 48)) {
                        // 0x403f80
                        __overflow(g48, (v17 & 64) != 0 ? (int32_t)v16 : 46);
                    } else {
                        // 0x403f44
                        *v19 = v20 + 1;
                        *(char *)v20 = (v17 & 64) != 0 ? v16 : 46;
                    }
                    // 0x403f4e
                    v21++;
                }
            }
            // 0x403f55
            v12 = (int64_t)g48;
            v13 = (int64_t *)(v12 + 40);
            v14 = *v13;
            if (v14 >= *(int64_t *)(v12 + 48)) {
                // 0x404000
                __overflow(g48, 60);
            } else {
                // 0x403f6a
                *v13 = v14 + 1;
                *(char *)v14 = 60;
            }
        }
        // 0x403e18
        v22 = (int64_t)g48;
        v23 = (int64_t *)(v22 + 40);
        v24 = *v23;
        if (v24 >= *(int64_t *)(v22 + 48)) {
            // 0x403fe8
            result2 = __overflow(g48, 10);
        } else {
            // 0x403e2d
            *v23 = v24 + 1;
            *(char *)v24 = 10;
            result2 = v24;
        }
        // 0x403e38
        v2++;
    }
    // 0x403fcd
    g34 = 0;
    return result2;
}
// Address range: 0x404010 - 0x40408c
int64_t function_404010(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g48; // 0x40401b
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x404022
    uint64_t v3 = *v2; // 0x404022
    if (v3 >= *(int64_t *)(v1 + 48)) {
        // 0x404080
        __overflow(g48, 40);
    } else {
        // 0x40402c
        *v2 = v3 + 1;
        *(char *)v3 = 40;
    }
    char v4 = a2; // 0x404044
    int64_t result = function_402d50(a1, 41); // 0x404046
    if (v4 == 0) {
        // 0x404063
        return result;
    }
    int64_t v5 = (int64_t)g48; // 0x404048
    int64_t * v6 = (int64_t *)(v5 + 40); // 0x40404f
    uint64_t result2 = *v6; // 0x40404f
    if (result2 >= *(int64_t *)(v5 + 48)) {
        // 0x404070
        return __overflow(g48, (int32_t)a2 % 256);
    }
    // 0x404059
    *v6 = result2 + 1;
    *(char *)result2 = v4;
    // 0x404063
    return result2;
}
// Address range: 0x404090 - 0x4040be
int64_t function_404090(int64_t a1, int64_t a2) {
    // 0x404090
    function_402d50(a1, 32);
    return function_404010(g78 + a1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4040c0 - 0x4048a0
int64_t function_4040c0(int64_t a1) {
    if ((char)a1 == 0) {
        // 0x40432f
        return 1;
    }
    int64_t v1 = g71; // 0x4040ee
    int64_t v2 = a1; // 0x4040ee
    char v3; // 0x4040c0
    char v4; // 0x4040c0
    char v5; // 0x4040c0
    char v6; // 0x4040c0
    int64_t v7; // 0x4040c0
    int64_t v8; // 0x4040c0
    int64_t v9; // 0x4040c0
    int64_t v10; // 0x4040c0
    int64_t v11; // 0x4040c0
    int64_t v12; // 0x4040c0
    int64_t v13; // 0x4040f7
    while (true) {
      lab_0x4040f0:
        // 0x4040f0
        v8 = v2;
        v6 = v5;
        v4 = v3;
        int128_t v14 = g70; // 0x4040f0
        uint64_t v15 = (int64_t)v14; // 0x4040f0
        v13 = g72;
        v7 = v13;
        v9 = v1;
        if (v1 < v15) {
            goto lab_0x404107;
        } else {
            if (v13 == 0) {
                // 0x404550
                v11 = 3;
                v12 = 120;
                if (v15 == 0) {
                    goto lab_0x4043df;
                } else {
                    uint128_t v16 = 40 * (v14 & 0xffffffffffffffff); // 0x404561
                    v10 = v15;
                    if ((int64_t)v16 > -1 != (v16 % 0x3f0000000000000001 == 0)) {
                        // 0x404578
                        function_407a20(v13);
                        // UNREACHABLE
                    }
                    goto lab_0x4043d7;
                }
            } else {
                if (v15 >= 0x222222222222222) {
                    // 0x404578
                    function_407a20(v13);
                    // UNREACHABLE
                }
                // 0x4043cc
                v10 = v15 + 1 + v15 / 2;
                goto lab_0x4043d7;
            }
        }
    }
  lab_0x40487b_2:
    // 0x40487b
    __assert_fail("tspec != NULL", "src/od.c", 645, "decode_one_format");
    return &g104;
  lab_0x404107:;
    int64_t v17 = 40 * v9 + v7; // 0x40410b
    if (v17 == 0) {
        // break -> 0x40487b
        goto lab_0x40487b_2;
    }
    char v18 = *(char *)v8; // 0x404118
    g107 = v18 - 97;
    char v19; // 0x4040c0
    char v20; // 0x4040c0
    int64_t v21; // 0x4040c0
    int64_t v22; // 0x4040c0
    int64_t v23; // 0x4040c0
    int64_t v24; // 0x4040c0
    int64_t v25; // 0x4040c0
    int64_t v26; // 0x4040c0
    switch (v18) {
        case 97: {
            // 0x404348
            v19 = v4;
            v20 = v6;
            v23 = 5;
            v25 = 0x402ec0;
            v24 = v8 + 1;
            v21 = 3;
            v22 = 1;
            goto lab_0x4042ea;
        }
        case 99: {
            // 0x4042d0
            v19 = v4;
            v20 = v6;
            v23 = 6;
            v25 = 0x403780;
            v24 = v8 + 1;
            v21 = 3;
            v22 = 1;
            goto lab_0x4042ea;
        }
        case 100: {
            goto lab_0x404220;
        }
        case 102: {
            int64_t v27 = v8 + 1; // 0x404138
            char v28 = *(char *)v27; // 0x404138
            int32_t v29; // 0x4040c0
            int64_t v30; // 0x4040c0
            switch (v28) {
                case 70: {
                    // 0x404620
                    v30 = v8 + 2;
                    v29 = g57;
                    // break -> 0x40458b
                    break;
                }
                case 76: {
                    // 0x404608
                    v30 = v8 + 2;
                    v29 = g59;
                    // break -> 0x40458b
                    break;
                }
                case 68: {
                    // 0x404580
                    v30 = v8 + 2;
                    v29 = g58;
                    // break -> 0x40458b
                    break;
                }
                default: {
                    int32_t v31 = (int32_t)v28 - 48; // 0x40415c
                    if (v28 == 57 || v31 < 9) {
                        int64_t v32 = v8 + 2;
                        int64_t v33 = v31; // 0x40419c
                        int64_t v34 = (int64_t)*(char *)v32 + 0xffffffd0; // 0x4041a3
                        while ((int32_t)v34 < 10) {
                            v32++;
                            v33 = 10 * v33 + (0x100000000 * v34 >> 32);
                            v34 = (int64_t)*(char *)v32 + 0xffffffd0;
                        }
                        // 0x4041ab
                        v30 = v27;
                        v29 = g58;
                        if (v27 != v32) {
                            if (v33 >= 17) {
                                // 0x4041d2
                                function_407210(a1);
                                v26 = (int64_t)"invalid type string %s;\nthis system doesn't provide a %lu-byte floating point type";
                                goto lab_0x4041ec;
                            }
                            int32_t v35 = *(int32_t *)(4 * v33 + (int64_t)&g56); // 0x4041c1
                            v30 = v32;
                            v29 = v35;
                            if (v35 == 0) {
                                // 0x4041d2
                                function_407210(a1);
                                v26 = (int64_t)"invalid type string %s;\nthis system doesn't provide a %lu-byte floating point type";
                                goto lab_0x4041ec;
                            }
                        }
                    } else {
                        // 0x40484d
                        v30 = v27;
                        v29 = g58;
                    }
                    // break -> 0x40458b
                    break;
                }
            }
            uint32_t v36 = v29;
            int64_t v37 = v30;
            char * str = (char *)*(int64_t *)localeconv(); // 0x404598
            int64_t len = 1; // 0x40459b
            if (*str != 0) {
                // 0x40459d
                len = strlen(str);
            }
            int64_t v38 = len;
            if (v36 == 7) {
                // 0x4045d8
                v19 = v4;
                v20 = v6;
                v23 = 4;
                v25 = 0x403590;
                v24 = v37;
                v21 = v38 + 23 & 0xffffffff;
                v22 = 7;
            } else {
                if (v36 != 8) {
                    if (v36 != 6) {
                        // 0x4045ce
                        abort();
                        // UNREACHABLE
                    }
                    // 0x4045f0
                    v19 = v4;
                    v20 = v6;
                    v23 = 4;
                    v25 = 0x403680;
                    v24 = v37;
                    v21 = v38 + 14 & 0xffffffff;
                    v22 = 6;
                } else {
                    // 0x4045ae
                    v19 = v4;
                    v20 = v6;
                    v23 = 4;
                    v25 = 0x4034a0;
                    v24 = v37;
                    v21 = v38 + 28 & 0xffffffff;
                    v22 = v36;
                }
            }
            goto lab_0x4042ea;
        }
        case 111: {
            goto lab_0x404220;
        }
        case 117: {
            goto lab_0x404220;
        }
        case 120: {
            goto lab_0x404220;
        }
        default: {
            // 0x404368
            function_407210(a1);
            error(0, (int32_t)"invalid character '%c' in type string %s" ^ (int32_t)"invalid character '%c' in type string %s", dcgettext(NULL, "invalid character '%c' in type string %s", 5));
            return (int32_t)&g104 ^ (int32_t)&g104;
        }
    }
  lab_0x404220:;
    int64_t v39 = v8 + 1; // 0x404220
    char v40 = *(char *)v39; // 0x404220
    char v41; // 0x4040c0
    char v42; // 0x4040c0
    char v43; // 0x4040c0
    char v44; // 0x4040c0
    int32_t v45; // 0x4040c0
    int64_t v46; // 0x4040c0
    int64_t v47; // 0x4040c0
    int64_t v48; // 0x4040c0
    int64_t v49; // 0x4040c0
    int64_t v50; // 0x4040c0
    int64_t v51; // 0x4040c0
    int64_t v52; // 0x4040c0
    int64_t v53; // 0x4040c0
    if (v40 == 73) {
        // 0x404640
        v51 = v8 + 2;
        v48 = 4;
        v45 = g63;
        goto lab_0x404254;
    } else {
        if (v40 > 73) {
            if (v40 == 76) {
                // 0x4046f8
                v51 = v8 + 2;
                v48 = 8;
                v45 = g64;
                goto lab_0x404254;
            } else {
                if (v40 != 83) {
                    goto lab_0x404660;
                } else {
                    // 0x404243
                    v51 = v8 + 2;
                    v48 = 2;
                    v45 = g62;
                    goto lab_0x404254;
                }
            }
        } else {
            if (v40 != 67) {
                goto lab_0x404660;
            } else {
                int64_t v54 = v8 + 2; // 0x404410
                int64_t v55 = g61; // 0x404414
                v41 = v18;
                v42 = 111;
                v52 = v54;
                v49 = 1;
                v46 = v55;
                v43 = v18;
                v44 = 111;
                v53 = v54;
                v50 = 1;
                v47 = v55;
                if (v18 != 111) {
                    goto lab_0x40425d;
                } else {
                    goto lab_0x40442a;
                }
            }
        }
    }
  lab_0x4042ea:
    // 0x4042ea
    *(int32_t *)v17 = (int32_t)v23;
    *(int32_t *)(v17 + 4) = (int32_t)v22;
    *(int64_t *)(v17 + 8) = v25;
    *(int32_t *)(v17 + 28) = (int32_t)v21;
    char v56 = *(char *)v24; // 0x4042f9
    *(char *)(v17 + 24) = (char)(v56 == 122);
    v2 = v24 + (int64_t)(v56 == 122);
    if (v2 == v8) {
        // 0x404862
        __assert_fail("s != next", "src/od.c", 995, "decode_format_string");
        goto lab_0x40487b_2;
    }
    // 0x404311
    v1 = (int64_t)g71 + 1;
    g71 = v1;
    v3 = v19;
    v5 = v20;
    if (*(char *)v2 == 0) {
        // 0x40432f
        return 1;
    }
    goto lab_0x4040f0;
  lab_0x4043df:
    // 0x4043df
    g70 = v11;
    int64_t v57 = function_407830(v13, v12); // 0x4043e6
    g72 = v57;
    v7 = v57;
    v9 = g71;
    goto lab_0x404107;
  lab_0x4043d7:
    // 0x4043d7
    v11 = v10;
    v12 = 40 * v10;
    goto lab_0x4043df;
  lab_0x404254:;
    int64_t v58 = v45;
    v41 = v4;
    v42 = v6;
    v52 = v51;
    v49 = v48;
    v46 = v58;
    v43 = v4;
    v44 = v6;
    v53 = v51;
    v50 = v48;
    v47 = v58;
    if (v18 == 111) {
        goto lab_0x40442a;
    } else {
        goto lab_0x40425d;
    }
  lab_0x40442a:;
    uint32_t v59 = *(int32_t *)(4 * v50 + (int64_t)&g15); // 0x40442e
    int64_t v60 = v59; // 0x404456
    char * v61 = (v47 & 0xfffffffe) != 4 ? (char *)&g2 : "lo"; // 0x404465
    __sprintf_chk((char *)(v17 + 16), 1, 8, "%%*.%d%s", v60, v61);
    char v62 = v43; // 0x404474
    char v63 = v44; // 0x404474
    int64_t v64 = 2; // 0x404474
    int64_t v65 = v53; // 0x404474
    int64_t v66 = v60; // 0x404474
    int64_t v67 = v47; // 0x404474
    goto lab_0x4042bd;
  lab_0x40425d:;
    int64_t v74 = v46;
    int64_t v75 = v49;
    int64_t v76 = v52;
    char v77 = v42;
    char v78 = v41;
    if (v78 > v77) {
        if (v18 != 117) {
            if (v18 != 120) {
              lab_0x4045ce:
                // 0x4045ce
                abort();
                // UNREACHABLE
            }
            uint32_t v79 = *(int32_t *)(4 * v75 + (int64_t)&g12); // 0x40448d
            int64_t v80 = v79; // 0x4044b5
            char * v81 = (v74 & 0xfffffffe) != 4 ? (char *)&g6 : "lx"; // 0x4044c4
            __sprintf_chk((char *)(v17 + 16), 1, 8, "%%*.%d%s", v80, v81);
            g109 = v74;
            v19 = v78;
            v20 = v77;
            v23 = 3;
            v25 = 0x403380;
            v24 = v76;
            v21 = v80;
            v22 = v74;
            switch ((int32_t)v74) {
                case 1: {
                    goto lab_0x4042ea;
                }
                case 2: {
                    // 0x4047f3
                    v19 = v78;
                    v20 = v77;
                    v23 = 3;
                    v25 = 0x403200;
                    v24 = v76;
                    v21 = v80;
                    v22 = v74;
                    goto lab_0x4042ea;
                }
                case 3: {
                    // 0x4047d5
                    v19 = v78;
                    v20 = v77;
                    v23 = 3;
                    v25 = 0x403120;
                    v24 = v76;
                    v21 = v80;
                    v22 = v74;
                    goto lab_0x4042ea;
                }
                case 4: {
                    // 0x4047e4
                    v19 = v78;
                    v20 = v77;
                    v23 = 3;
                    v25 = 0x403050;
                    v24 = v76;
                    v21 = v80;
                    v22 = v74;
                    goto lab_0x4042ea;
                }
                case 5: {
                    // 0x4047ba
                    v19 = v78;
                    v20 = v77;
                    v23 = 3;
                    v25 = 0x402f80;
                    v24 = v76;
                    v21 = v80;
                    v22 = v74;
                    goto lab_0x4042ea;
                }
                default: {
                    goto lab_0x4045ce;
                }
            }
        } else {
            uint32_t v82 = *(int32_t *)(4 * v75 + (int64_t)&g13); // 0x404279
            char * v83 = (v74 & 0xfffffffe) != 4 ? (char *)&g4 : "lu"; // 0x4042a4
            __sprintf_chk((char *)(v17 + 16), 1, 8, "%%*%s", v83);
            v62 = v78;
            v63 = v77;
            v64 = 1;
            v65 = v76;
            v66 = v82;
            v67 = v74;
            goto lab_0x4042bd;
        }
    } else {
        if (v18 != 100) {
            // 0x4045ce
            abort();
            // UNREACHABLE
        }
        uint32_t v84 = *(int32_t *)(4 * v75 + (int64_t)&g14); // 0x4044fe
        char * v85 = (v74 & 0xfffffffe) != 4 ? (char *)&g23 : "ld"; // 0x404529
        __sprintf_chk((char *)(v17 + 16), 1, 8, "%%*%s", v85);
        int64_t v86 = v84; // 0x40453b
        g110 = v74;
        v19 = v78;
        v20 = v77;
        v23 = 0;
        v25 = 0x4032c0;
        v24 = v76;
        v21 = v86;
        v22 = v74;
        switch ((int32_t)v74) {
            case 1: {
                // 0x4047c9
                v19 = v78;
                v20 = v77;
                v23 = 0;
                v25 = 0x403410;
                v24 = v76;
                v21 = v86;
                v22 = v74;
                goto lab_0x4042ea;
            }
            case 2: {
                goto lab_0x4042ea;
            }
            case 3: {
                // 0x404802
                v19 = v78;
                v20 = v77;
                v23 = 0;
                v25 = 0x403120;
                v24 = v76;
                v21 = v86;
                v22 = v74;
                goto lab_0x4042ea;
            }
            case 4: {
                // 0x40480e
                v19 = v78;
                v20 = v77;
                v23 = 0;
                v25 = 0x403050;
                v24 = v76;
                v21 = v86;
                v22 = v74;
                goto lab_0x4042ea;
            }
            case 5: {
                // 0x40481a
                v19 = v78;
                v20 = v77;
                v23 = 0;
                v25 = 0x402f80;
                v24 = v76;
                v21 = v86;
                v22 = v74;
                goto lab_0x4042ea;
            }
            default: {
                goto lab_0x4045ce;
            }
        }
    }
  lab_0x404660:;
    int64_t v87 = (int64_t)v40 + 0xffffffd0; // 0x404660
    if ((int32_t)v87 < 10) {
        int64_t v88 = v8 + 2;
        int64_t v89 = 0x100000000 * v87 >> 32; // 0x4046a4
        int64_t v90 = (int64_t)*(char *)v88 + 0xffffffd0; // 0x4046ab
        while ((int32_t)v90 < 10) {
            v88++;
            v89 = 10 * v89 + (0x100000000 * v90 >> 32);
            v90 = (int64_t)*(char *)v88 + 0xffffffd0;
        }
        if (v88 == v39) {
            // 0x404826
            v51 = v39;
            v48 = 4;
            v45 = g63;
        } else {
            if (v89 >= 9) {
                // 0x4046d3
                function_407210(a1);
                v26 = (int64_t)"invalid type string %s;\nthis system doesn't provide a %lu-byte integral type";
                goto lab_0x4041ec;
            }
            int32_t v91 = *(int32_t *)(4 * v89 + (int64_t)&g60); // 0x4046c2
            v51 = v88;
            v48 = v89;
            v45 = v91;
            if (v91 == 0) {
                // 0x4046d3
                function_407210(a1);
                v26 = (int64_t)"invalid type string %s;\nthis system doesn't provide a %lu-byte integral type";
                goto lab_0x4041ec;
            }
        }
    } else {
        // 0x404838
        v51 = v39;
        v48 = 4;
        v45 = g63;
    }
    goto lab_0x404254;
  lab_0x4042bd:;
    int64_t v68 = v67;
    int64_t v69 = v66;
    int64_t v70 = v65;
    int64_t v71 = v64;
    char v72 = v63;
    char v73 = v62;
    g108 = v68 & 0xffffffff;
    v19 = v73;
    v20 = v72;
    v23 = v71;
    v25 = 0x403050;
    v24 = v70;
    v21 = v69;
    v22 = v68;
    switch ((int32_t)v68) {
        case 1: {
            // 0x404730
            v19 = v73;
            v20 = v72;
            v23 = v71;
            v25 = 0x403380;
            v24 = v70;
            v21 = v69;
            v22 = v68;
            goto lab_0x4042ea;
        }
        case 2: {
            // 0x4047b0
            v19 = v73;
            v20 = v72;
            v23 = v71;
            v25 = 0x403200;
            v24 = v70;
            v21 = v69;
            v22 = v68;
            goto lab_0x4042ea;
        }
        case 3: {
            // 0x404720
            v19 = v73;
            v20 = v72;
            v23 = v71;
            v25 = 0x403120;
            v24 = v70;
            v21 = v69;
            v22 = v68;
            goto lab_0x4042ea;
        }
        case 4: {
            goto lab_0x4042ea;
        }
        case 5: {
            // 0x404740
            v19 = v73;
            v20 = v72;
            v23 = v71;
            v25 = 0x402f80;
            v24 = v70;
            v21 = v69;
            v22 = v68;
            goto lab_0x4042ea;
        }
        default: {
            goto lab_0x4045ce;
        }
    }
  lab_0x4041ec:
    // 0x4041ec
    error(0, 0, dcgettext(NULL, (char *)v26, 5));
    return (int32_t)&g104 ^ (int32_t)&g104;
}
// Address range: 0x4048a0 - 0x404960
int64_t function_4048a0(uint64_t a1, int64_t a2, int64_t * a3) {
    if (a1 == 0 || (int64_t)g69 < a1) {
        // 0x404939
        __assert_fail("0 < n && n <= bytes_per_block", "src/od.c", 1287, "read_block");
        return &g104;
    }
    // 0x4048bd
    *a3 = 0;
    int64_t v1 = 1; // 0x4048d1
    if (g66 == NULL) {
        // 0x404927
        return 1;
    }
    int64_t v2 = 0;
    int64_t v3 = a1 - v2; // 0x404911
    int64_t v4 = fread_unlocked((int64_t *)(v2 + a2), 1, (int32_t)v3, g66); // 0x40491a
    *a3 = v3 + v4;
    while (v3 != v4) {
        int32_t v5 = *__errno_location(); // 0x4048e5
        int64_t v6 = function_4038f0(v5); // 0x4048e7
        v1 = v6 & v1 & function_403a50();
        if (g66 == NULL) {
            // break -> 0x404927
            break;
        }
        v2 = v3;
        v3 = a1 - v2;
        v4 = fread_unlocked((int64_t *)(v2 + a2), 1, (int32_t)v3, g66);
        *a3 = v3 + v4;
    }
    // 0x404927
    return v1 & 0xffffffff;
}
// Address range: 0x404960 - 0x404dfd
int64_t function_404960(int64_t a1) {
    int32_t status = a1; // 0x404976
    if (status != 0) {
        // 0x40497a
        __fprintf_chk(g51, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40499f
        exit(status);
        // UNREACHABLE
    }
    // 0x4049a6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n  or:  %s [-abcdfilosx]... [FILE] [[+]OFFSET[.][b]]\n  or:  %s --traditional [OPTION]... [FILE] [[+]OFFSET[.][b] [+][LABEL][.][b]]\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWrite an unambiguous representation, octal bytes by default,\nof FILE to standard output.  With more than one FILE argument,\nconcatenate them in the listed order to form the input.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nIf first and second call formats both apply, the second format is assumed\nif the last operand begins with + or (if there are 2 operands) a digit.\nAn OFFSET operand means -j OFFSET.  LABEL is the pseudo-address\nat first byte printed, incremented when dump is progressing.\nFor OFFSET and LABEL, a 0x or 0X prefix indicates hexadecimal;\nsuffixes may be . for octal and b for multiply by 512.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -A, --address-radix=RADIX   output format for file offsets; RADIX is one\n                                of [doxn], for Decimal, Octal, Hex or None\n      --endian={big|little}   swap input bytes according the specified order\n  -j, --skip-bytes=BYTES      skip BYTES input bytes first\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -N, --read-bytes=BYTES      limit dump to BYTES input bytes\n  -S BYTES, --strings[=BYTES]  output strings of at least BYTES graphic chars;\n                                3 is implied when BYTES is not specified\n  -t, --format=TYPE           select output format or formats\n  -v, --output-duplicates     do not use * to mark line suppression\n  -w[BYTES], --width[=BYTES]  output BYTES bytes per output line;\n                                32 is implied when BYTES is not specified\n      --traditional           accept arguments in third form above\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\n\nTraditional format specifications may be intermixed; they accumulate:\n  -a   same as -t a,  select named characters, ignoring high-order bit\n  -b   same as -t o1, select octal bytes\n  -c   same as -t c,  select printable characters or backslash escapes\n  -d   same as -t u2, select unsigned decimal 2-byte units\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -f   same as -t fF, select floats\n  -i   same as -t dI, select decimal ints\n  -l   same as -t dL, select decimal longs\n  -o   same as -t o2, select octal 2-byte units\n  -s   same as -t d2, select decimal 2-byte units\n  -x   same as -t x2, select hexadecimal 2-byte units\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\n\nTYPE is made up of one or more of these specifications:\n  a          named character, ignoring high-order bit\n  c          printable character or backslash escape\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  d[SIZE]    signed decimal, SIZE bytes per integer\n  f[SIZE]    floating point, SIZE bytes per float\n  o[SIZE]    octal, SIZE bytes per integer\n  u[SIZE]    unsigned decimal, SIZE bytes per integer\n  x[SIZE]    hexadecimal, SIZE bytes per integer\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nSIZE is a number.  For TYPE in [doux], SIZE may also be C for\nsizeof(char), S for sizeof(short), I for sizeof(int) or L for\nsizeof(long).  If TYPE is f, SIZE may also be F for sizeof(float), D\nfor sizeof(double) or L for sizeof(long double).\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nAdding a z suffix to any type displays printable characters at the end of\neach output line.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\n\nBYTES is hex with 0x or 0X prefix, and may have a multiplier suffix:\n  b    512\n  KB   1000\n  K    1024\n  MB   1000*1000\n  M    1024*1024\nand so on for G, T, P, E, Z, Y.\n", 5), g48);
    int64_t v1 = &g5; // bp-136, 0x404bd7
    bool v2; // 0x404960
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x404c60
    int64_t v6 = *(int64_t *)v5; // 0x404c64
    int64_t v7 = 3; // 0x404c6a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"od";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x404c76
        char v11 = *(char *)v9; // 0x404c76
        char v12 = v11; // 0x404c76
        bool v13 = false; // 0x404c76
        while (v10 == v11) {
            // 0x404c6c
            v7--;
            int64_t v14 = v9 + v3; // 0x404c76
            int64_t v15 = v8 + v3; // 0x404c76
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
            // break -> 0x404c82
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x404c82
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x404d94;
        } else {
            // 0x404d7e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404dd3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404ce4;
            } else {
                goto lab_0x404d94;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x404ce4;
        } else {
            // 0x404cca
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404dd3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x404ce4;
            } else {
                goto lab_0x404ce4;
            }
        }
    }
  lab_0x404d94:
    // 0x404d94
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404d24
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40499f
    exit(status);
    // UNREACHABLE
  lab_0x404ce4:
    // 0x404ce4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404d24
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40499f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x404e00 - 0x404e0a
int64_t function_404e00(void) {
    // 0x404e00
    return function_404960(1);
}
// Address range: 0x404e10 - 0x404f26
int64_t function_404e10(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x404e31
    int32_t len = strlen(str); // 0x404e31
    if (a2 == 0) {
        // 0x404efd
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x404e97
    int64_t v4 = a3; // 0x404e10
    int64_t v5 = a2; // 0x404e9e
    int64_t str4; // 0x404e10
    int64_t v6; // 0x404e10
    int32_t v7; // 0x404e10
    int32_t v8; // 0x404e10
    int32_t v9; // 0x404e10
    int64_t v10; // 0x404e10
    int64_t result; // 0x404e10
    int32_t v11; // 0x404e93
    char * str2; // 0x404eb2
    while (true) {
        // 0x404ea7
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x404ebb
            result = v6;
            if (len == strlen(str2)) {
                // 0x404efd
                return result;
            }
            if (v1 == -1) {
                // break -> 0x404ecf
                break;
            }
            // 0x404e60
            v7 = 1;
            if (a3 != 0) {
                // 0x404e6e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x404e97
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
    int64_t v12 = v6 + 1; // 0x404ed3
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x404eda
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x404ea7
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x404ea7
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x404ebb
                result = v6;
                if (len == strlen(str2)) {
                    // 0x404efd
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x404ecf
                    break;
                }
                // 0x404e60
                v7 = 1;
                if (a3 != 0) {
                    // 0x404e6e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x404e97
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
        // 0x404ecf
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x404ee8:
    // 0x404efd
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x404f30 - 0x404fa1
int64_t function_404f30(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x404f30
    if (a3 == -1) {
        // 0x404f90
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x404f45
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x404f54
    function_4071f0(1, a1);
    function_406ee0(0, 8, a2);
    error(0, 0, format);
    return &g104;
}
// Address range: 0x404fb0 - 0x4050c8
int64_t function_404fb0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x404fdd
    fputs_unlocked(v1, g51);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x405050
        int64_t v5; // 0x405057
        int64_t v6; // 0x405077
        while (v3 != 0) {
            // 0x40503b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x405000
                break;
            }
            // 0x40504d
            v4 = v3 + 1;
            v5 = function_407210(v2);
            __fprintf_chk(g51, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x405080
                goto lab_0x405080;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x405003
        int64_t v8 = function_407210(v2); // 0x40500d
        __fprintf_chk(g51, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40502d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40503b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x405000
                    break;
                }
                // 0x40504d
                v4 = v3 + 1;
                v5 = function_407210(v2);
                __fprintf_chk(g51, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x405080
                    goto lab_0x405080;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x405000
            v7 = v3 + 1;
            v8 = function_407210(v2);
            __fprintf_chk(g51, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x405080:;
    int64_t v10 = (int64_t)g51; // 0x405080
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x405087
    uint64_t result = *v11; // 0x405087
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x4050b0
        return __overflow(g51, 10);
    }
    // 0x405091
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x4050d0 - 0x405140
int64_t function_4050d0(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_404e10(a2, v2, v1, a5); // 0x4050fc
    int64_t result = v3; // 0x405104
    if (v3 < 0) {
        // 0x405118
        function_404f30((int64_t)a1, a2, v3);
        function_404fb0(v2, v1, a5);
        result = -1;
    }
    // 0x405106
    return result;
}
// Address range: 0x405140 - 0x40518d
int64_t function_405140(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x405140
    if (result == 0) {
        // 0x405181
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x405178
    int32_t n = a4; // 0x405178
    int64_t v1 = result; // 0x40517f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x405181
        return result;
    }
    int64_t str3 = str2; // 0x40517f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x405160
    int64_t result2 = 0; // 0x40516d
    while (v2 != 0) {
        // 0x40516f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x405181
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x405181
    return result2;
}
// Address range: 0x405190 - 0x405198
int64_t function_405190(int64_t a1) {
    // 0x405190
    g86 = a1;
    int64_t result; // 0x405190
    return result;
}
// Address range: 0x4051a0 - 0x4051a8
int64_t function_4051a0(int64_t a1) {
    // 0x4051a0
    g85 = a1;
    int64_t result; // 0x4051a0
    return result;
}
// Address range: 0x4051b0 - 0x40524e
int64_t function_4051b0(void) {
    // 0x4051b0
    int32_t * err_num; // 0x4051c6
    if ((int32_t)function_409170((int64_t)g48) == 0) {
        goto lab_0x4051dc;
    } else {
        // 0x4051c6
        err_num = __errno_location();
        if (g85 == 0) {
            goto lab_0x4051f3;
        } else {
            // 0x4051d7
            if (*err_num != 32) {
                goto lab_0x4051f3;
            } else {
                goto lab_0x4051dc;
            }
        }
    }
  lab_0x4051dc:;
    int64_t result = function_409170((int64_t)g51); // 0x4051e3
    if ((int32_t)result == 0) {
        // 0x4051ec
        return result;
    }
    // 0x40522e
    _exit(g38);
    // UNREACHABLE
  lab_0x4051f3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4051ff
    if (g86 == 0) {
        // 0x405239
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405213
        error(0, *err_num, "%s: %s", (char *)function_407060((int64_t)g86), v1);
    }
    // 0x40522e
    _exit(g38);
    // UNREACHABLE
}
// Address range: 0x405250 - 0x405388
int64_t function_405250(int64_t * str, uint64_t a2, uint32_t a3, int32_t a4) {
    // 0x405250
    int128_t v1; // 0x405250
    int128_t v2 = v1;
    int128_t v3 = __asm_movapd(v1); // 0x405254
    int128_t v4 = __asm_cmpltsd(__asm_movapd(v3), __asm_pxor(v2, v2)); // 0x40527b
    int128_t v5 = __asm_andnpd(__asm_movapd(v4), v3); // 0x40528e
    int64_t v6; // bp-88, 0x405250
    int64_t v7 = &v6; // 0x405292
    int64_t v8 = v7 + 22 | (int64_t)(a3 % 2); // 0x40529d
    __asm_movsd_1(v1);
    int128_t v9 = __asm_xorpd(v1, g16); // 0x4052af
    *(char *)v8 = 43;
    int64_t v10 = v8 + (int64_t)(a3 / 2 % 2); // 0x4052c0
    int128_t v11 = __asm_andpd(v9, v4); // 0x4052c4
    int64_t v12 = v10 + (int64_t)(a3 / 4 % 2); // 0x4052c8
    int32_t v13 = a3 & 16; // 0x4052ce
    *(char *)v10 = 32;
    int128_t v14 = __asm_orpd(v11, v5); // 0x4052d7
    *(char *)v12 = 48;
    int128_t v15 = __asm_movsd(0x10000000000000); // 0x4052e6
    int64_t v16 = v12 + (int64_t)(a3 / 8 % 2); // 0x4052ee
    *(int16_t *)v16 = 0x2e2a;
    *(char *)(v16 + 2) = 42;
    __asm_comisd(v15, v14);
    *(char *)(v16 + 4) = 0;
    *(char *)(v16 + 3) = (char)(v13 - (v13 | (int32_t)(v13 == 0))) & 32 | 71;
    int64_t * v17 = (int64_t *)(v7 - 16); // 0x405332
    int64_t * v18 = (int64_t *)(v7 + 8); // 0x405333
    int32_t v19 = a2;
    char * v20 = (char *)(v7 + 21);
    *v17 = 1;
    __asm_movsd(*v18);
    int32_t result = __snprintf_chk((char *)str, v19, 1, -1, v20); // 0x405349
    if (result < 0) {
        // 0x405377
        return result;
    }
    float64_t str_as_d; // 0x405368
    if ((int64_t)result < a2) {
        // 0x405363
        str_as_d = strtod((char *)str, NULL);
        __asm_ucomisd((int128_t)(int32_t)(float32_t)str_as_d, *v18);
    }
    int64_t v21 = 2; // 0x405320
    int64_t v22 = v21 & 0xffffffff; // 0x405320
    *v17 = v22;
    __asm_movsd(*v18);
    int32_t result2 = __snprintf_chk((char *)str, v19, 1, -1, v20); // 0x405349
    while ((int32_t)v21 <= 16 && result2 >= 0) {
        // 0x40535b
        if ((int64_t)result2 < a2) {
            // 0x405363
            str_as_d = strtod((char *)str, NULL);
            __asm_ucomisd((int128_t)(int32_t)(float32_t)str_as_d, *v18);
        }
        // 0x405320
        v21 = v22 + 1;
        v22 = v21 & 0xffffffff;
        *v17 = v22;
        __asm_movsd(*v18);
        result2 = __snprintf_chk((char *)str, v19, 1, -1, v20);
    }
    // 0x405377
    return result2;
}
// Address range: 0x405390 - 0x4054c7
int64_t function_405390(int64_t * str, uint64_t a2, uint32_t a3, int32_t a4) {
    // 0x405390
    int128_t v1; // 0x405390
    int128_t v2 = v1;
    int128_t v3 = v1;
    int128_t v4 = __asm_movaps_2(v1); // 0x4053a1
    int128_t v5 = __asm_pxor(v3, v3); // 0x4053a4
    int128_t v6 = __asm_movaps_2(v4); // 0x4053ad
    __asm_pxor(v2, v2);
    int128_t v7 = __asm_cmpltss(v6, v5); // 0x4053b6
    int128_t v8 = __asm_cvtss2sd(v1); // 0x4053be
    int128_t v9 = __asm_andnps(__asm_movaps_2(v7), v4); // 0x4053ce
    int64_t v10; // bp-88, 0x405390
    int64_t v11 = &v10; // 0x4053d1
    int64_t v12 = v11 + 22 | (int64_t)(a3 % 2); // 0x4053dc
    __asm_movss_3(v1);
    int128_t v13 = __asm_xorps(v1, g17); // 0x4053ee
    *(char *)v12 = 43;
    int64_t v14 = v12 + (int64_t)(a3 / 2 % 2); // 0x4053fe
    int128_t v15 = __asm_andps(v13, v7); // 0x405402
    v10 = __asm_movsd_1(v8);
    int64_t v16 = v14 + (int64_t)(a3 / 4 % 2); // 0x40540a
    int32_t v17 = a3 & 16; // 0x405410
    *(char *)v14 = 32;
    int128_t v18 = __asm_orps(v15, v9); // 0x405419
    *(char *)v16 = 48;
    int128_t v19 = __asm_movss(0x800000); // 0x405427
    int64_t v20 = v16 + (int64_t)(a3 / 8 % 2); // 0x40542f
    *(int16_t *)v20 = 0x2e2a;
    *(char *)(v20 + 2) = 42;
    __asm_ucomiss(v19, v18);
    *(char *)(v20 + 4) = 0;
    *(char *)(v20 + 3) = (char)(v17 - (v17 | (int32_t)(v17 == 0))) & 32 | 71;
    int64_t * v21 = (int64_t *)(v11 - 16); // 0x405472
    *v21 = 1;
    __asm_movsd(v10);
    int32_t v22 = a2; // 0x405489
    char * v23 = (char *)(v11 + 21); // 0x405489
    int32_t result = __snprintf_chk((char *)str, v22, 1, -1, v23); // 0x405489
    if (result < 0) {
        // 0x4054b6
        return result;
    }
    // 0x40549b
    float32_t str_as_f; // 0x4054a8
    if ((int64_t)result < a2) {
        // 0x4054a3
        str_as_f = strtof((char *)str, NULL);
        __asm_ucomiss_4((int128_t)(int32_t)str_as_f, *(int32_t *)(v11 + 12));
    }
    int64_t v24 = 2; // 0x405460
    int64_t v25 = v24 & 0xffffffff; // 0x405460
    *v21 = v25;
    __asm_movsd(v10);
    int32_t result2 = __snprintf_chk((char *)str, v22, 1, -1, v23); // 0x405489
    while ((int32_t)v24 <= 8 && result2 >= 0) {
        // 0x40549b
        if ((int64_t)result2 < a2) {
            // 0x4054a3
            str_as_f = strtof((char *)str, NULL);
            __asm_ucomiss_4((int128_t)(int32_t)str_as_f, *(int32_t *)(v11 + 12));
        }
        // 0x405460
        v24 = v25 + 1;
        v25 = v24 & 0xffffffff;
        *v21 = v25;
        __asm_movsd(v10);
        result2 = __snprintf_chk((char *)str, v22, 1, -1, v23);
    }
    // 0x4054b6
    return result2;
}
// Address range: 0x4054d0 - 0x4055e4
int64_t function_4054d0(int64_t a1, uint64_t a2, uint32_t a3, int32_t a4, int64_t a5) {
    bool v1 = false; // 0x40550d
    bool v2 = false; // 0x40550d
    if ((float80_t)(int80_t)a5 >= 0.0L) {
        v1 = false;
        v2 = true;
        if ((float80_t)(int80_t)a5 <= 0.0L) {
            v1 = true;
            v2 = (float80_t)(int80_t)a5 != 0.0L;
        }
    }
    uint64_t v3 = (int64_t)a3;
    uint64_t v4 = (int64_t)a3; // 0x4054e3
    int64_t v5; // bp-72, 0x4054d0
    int64_t v6 = &v5; // 0x4054f6
    float80_t v7; // 0x4054d0
    float80_t v8 = v1 | v2 ? v7 : v7; // 0x40550f
    int64_t v9 = v4 % 2 | v6 | 6; // 0x405518
    int64_t v10 = v9 + v4 / 2 % 2; // 0x405522
    *(char *)v9 = 43;
    *(char *)v10 = 32;
    int64_t v11 = v10 + v3 / 4 % 2; // 0x405538
    *(char *)v11 = 48;
    int64_t v12 = v11 + v3 / 8 % 2; // 0x40554a
    *(int32_t *)v12 = 0x4c2a2e2a;
    *(char *)(v12 + 5) = 0;
    bool v13 = false; // 0x405562
    bool v14 = false; // 0x405562
    if (v8 >= 3.3621e-4932L) {
        v13 = false;
        v14 = true;
        if (v8 <= 3.3621e-4932L) {
            v13 = true;
            v14 = v8 != 3.3621e-4932L;
        }
    }
    int64_t v15 = v3 & 16; // 0x40553e
    *(char *)(v12 + 4) = (char)(v15 - (v15 | (int64_t)(v15 == 0))) & 32 | 71;
    int64_t v16 = v13 | v14 ? 18 : 1; // 0x40556e
    int64_t * v17 = (int64_t *)(v6 + 88); // 0x40557b
    int64_t * v18 = (int64_t *)(v6 - 8); // 0x40557b
    int64_t v19 = v6 + 80; // 0x40558a
    int64_t * v20 = (int64_t *)v19; // 0x40558a
    int64_t * v21 = (int64_t *)(v6 - 16); // 0x40558a
    int64_t * v22 = (int64_t *)(v6 - 32); // 0x40559a
    char * str = (char *)a1; // 0x4055a0
    int32_t v23 = a2; // 0x4055a0
    char * v24 = (char *)(v6 | 5); // 0x4055a0
    *v18 = *v17;
    *v21 = *v20;
    *v22 = v16;
    int32_t result = __snprintf_chk(str, v23, 1, -1, v24); // 0x4055a0
    if (result < 0) {
        // 0x4055d3
        return result;
    }
    float80_t v25 = 3.3621e-4932L;
    float80_t v26 = v25; // 0x4055b9
    if ((int64_t)result < a2) {
        // 0x4055bb
        strtold(str, NULL);
        v26 = *(float80_t *)v19;
        if (v25 == v26) {
            // break -> 0x4055d3
            break;
        }
    }
    int64_t v27 = v16 + 1; // 0x405578
    int64_t v28 = v27 & 0xffffffff; // 0x405578
    *v18 = *v17;
    *v21 = *v20;
    *v22 = v28;
    int32_t v29 = __snprintf_chk(str, v23, 1, -1, v24); // 0x4055a0
    int32_t result2 = v29; // 0x4055ad
    while ((int32_t)v27 <= 20 && v29 >= 0) {
        // 0x4055b4
        v25 = v26;
        int32_t v30 = v29;
        v26 = v25;
        if ((int64_t)v30 < a2) {
            // 0x4055bb
            strtold(str, NULL);
            v26 = *(float80_t *)v19;
            result2 = v30;
            if (v25 == v26) {
                // break -> 0x4055d3
                break;
            }
        }
        // 0x405578
        v27 = v28 + 1;
        v28 = v27 & 0xffffffff;
        *v18 = *v17;
        *v21 = *v20;
        *v22 = v28;
        v29 = __snprintf_chk(str, v23, 1, -1, v24);
        result2 = v29;
    }
    // 0x4055d3
    return result2;
}
// Address range: 0x4055f0 - 0x405689
int64_t function_4055f0(int64_t str) {
    // 0x4055f0
    if (str == 0) {
        // 0x405669
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g51);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4055fe
    int64_t result = (int64_t)found_char_pos; // 0x4055fe
    if (found_char_pos == NULL) {
        // 0x405659
        g87 = str;
        g50 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x405608
    if (v1 - str < 7) {
        // 0x405659
        g87 = str;
        g50 = str;
        return result;
    }
    // 0x405618
    bool v2; // 0x4055f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4055f0
    int64_t v5 = result - 6; // 0x4055f0
    int64_t v6 = 7; // 0x405626
    unsigned char v7 = *(char *)v5; // 0x405626
    char v8 = *(char *)v4; // 0x405626
    char v9 = v8; // 0x405626
    bool v10 = false; // 0x405626
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
    int64_t v12 = (int64_t)"lt-"; // 0x405630
    int64_t v13 = v1; // 0x405630
    int64_t v14 = 3; // 0x405630
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x405659
        g87 = str;
        g50 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x405642
    char v16 = *(char *)v12; // 0x405642
    char v17 = v16; // 0x405642
    bool v18 = false; // 0x405642
    while (v15 == v16) {
        // 0x405632
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
    int64_t v20 = v1; // 0x40564c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40564e
        v20 = result + 4;
        g47 = v20;
    }
    // 0x405659
    g87 = v20;
    g50 = v20;
    return result;
}
// Address range: 0x405690 - 0x405782
int64_t function_405690(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4056a4
    int64_t result = (int64_t)v1; // 0x4056a4
    if (result != a1) {
        // 0x4056b1
        return result;
    }
    int64_t v2 = function_409230(); // 0x4056c0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x405776
    if (v3 == 85) {
        // 0x4056d0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x405768
            result2 = (int32_t)a2 != 9 ? (int64_t)&g25 : (int64_t)&g18;
            return result2;
        }
        char v4 = *v1; // 0x4056fe
        int64_t result3 = v4 != 96 ? (int64_t)&g19 : (int64_t)&g22; // 0x40570b
        // 0x4056b1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x405768
        result2 = (int32_t)a2 != 9 ? (int64_t)&g25 : (int64_t)&g18;
        return result2;
    }
    char v5 = *v1; // 0x40574d
    int64_t result4 = v5 != 96 ? (int64_t)&g20 : (int64_t)&g21; // 0x40575a
    // 0x4056b1
    return result4;
}
// Address range: 0x405790 - 0x4057e7
int64_t function_405790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x405790
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4057d8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4057e7 - 0x4069b1
int64_t function_4057e7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x405831
    int64_t v3 = 0; // 0x405831
    int64_t v4; // 0x4057e7
    int64_t v5; // 0x4057e7
    int64_t v6; // 0x4057e7
    int64_t v7; // 0x4057e7
    int64_t v8; // 0x4057e7
    int64_t v9; // 0x4057e7
    int64_t v10; // 0x4057e7
    int64_t v11; // 0x4057e7
    int64_t v12; // 0x4057e7
    int64_t v13; // 0x4057e7
    int64_t v14; // 0x4057e7
    int64_t v15; // 0x4057e7
    int64_t v16; // 0x4057e7
    int64_t v17; // 0x4057e7
    int64_t v18; // 0x4057e7
    int64_t result; // 0x4057e7
    int64_t v19; // 0x4057e7
    int32_t wc; // bp+132, 0x4057e7
    int64_t ps; // bp+136, 0x4057e7
    char v20; // 0x405da0
    int64_t v21; // 0x405da0
    int64_t v22; // 0x406148
    int64_t v23; // 0x4057e7
    int64_t v24; // 0x406167
    int32_t v25; // 0x4057e7
    while (true) {
      lab_0x405838_2:
        // 0x405838
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4057e7
        int64_t v27; // 0x40586c
        while (true) {
          lab_0x405838:
            // 0x405838
            v5 = v26;
            bool v28 = v15 == v5; // 0x405843
            if (v15 == -1) {
                // 0x405845
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x405853
            if (v28) {
                // break (via goto) -> 0x405fb8
                goto lab_0x405fb8;
            }
            // 0x40585c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g103 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x405e4b
                    if (v25 % 2 == 0) {
                        goto lab_0x405991;
                    }
                    // 0x40626d
                    v26 = v5 + 1;
                    goto lab_0x405838;
                }
                case 7: {
                    goto lab_0x405991;
                }
                case 8: {
                    goto lab_0x405991;
                }
                case 9: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x405991;
                }
                case 12: {
                    goto lab_0x405991;
                }
                case 13: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40595d;
                }
                case 36: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x405991;
                }
                case 38: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x405991;
                }
                case 44: {
                    goto lab_0x405991;
                }
                case 45: {
                    goto lab_0x405991;
                }
                case 46: {
                    goto lab_0x405991;
                }
                case 47: {
                    goto lab_0x405991;
                }
                case 48: {
                    goto lab_0x405991;
                }
                case 49: {
                    goto lab_0x405991;
                }
                case 50: {
                    goto lab_0x405991;
                }
                case 51: {
                    goto lab_0x405991;
                }
                case 52: {
                    goto lab_0x405991;
                }
                case 53: {
                    goto lab_0x405991;
                }
                case 54: {
                    goto lab_0x405991;
                }
                case 55: {
                    goto lab_0x405991;
                }
                case 56: {
                    goto lab_0x405991;
                }
                case 57: {
                    goto lab_0x405991;
                }
                case 58: {
                    goto lab_0x405991;
                }
                case 59: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x405991;
                }
                case 66: {
                    goto lab_0x405991;
                }
                case 67: {
                    goto lab_0x405991;
                }
                case 68: {
                    goto lab_0x405991;
                }
                case 69: {
                    goto lab_0x405991;
                }
                case 70: {
                    goto lab_0x405991;
                }
                case 71: {
                    goto lab_0x405991;
                }
                case 72: {
                    goto lab_0x405991;
                }
                case 73: {
                    goto lab_0x405991;
                }
                case 74: {
                    goto lab_0x405991;
                }
                case 75: {
                    goto lab_0x405991;
                }
                case 76: {
                    goto lab_0x405991;
                }
                case 77: {
                    goto lab_0x405991;
                }
                case 78: {
                    goto lab_0x405991;
                }
                case 79: {
                    goto lab_0x405991;
                }
                case 80: {
                    goto lab_0x405991;
                }
                case 81: {
                    goto lab_0x405991;
                }
                case 82: {
                    goto lab_0x405991;
                }
                case 83: {
                    goto lab_0x405991;
                }
                case 84: {
                    goto lab_0x405991;
                }
                case 85: {
                    goto lab_0x405991;
                }
                case 86: {
                    goto lab_0x405991;
                }
                case 87: {
                    goto lab_0x405991;
                }
                case 88: {
                    goto lab_0x405991;
                }
                case 89: {
                    goto lab_0x405991;
                }
                case 90: {
                    goto lab_0x405991;
                }
                case 91: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x405991;
                }
                case 94: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x405991;
                }
                case 96: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x405991;
                }
                case 98: {
                    goto lab_0x405991;
                }
                case 99: {
                    goto lab_0x405991;
                }
                case 100: {
                    goto lab_0x405991;
                }
                case 101: {
                    goto lab_0x405991;
                }
                case 102: {
                    goto lab_0x405991;
                }
                case 103: {
                    goto lab_0x405991;
                }
                case 104: {
                    goto lab_0x405991;
                }
                case 105: {
                    goto lab_0x405991;
                }
                case 106: {
                    goto lab_0x405991;
                }
                case 107: {
                    goto lab_0x405991;
                }
                case 108: {
                    goto lab_0x405991;
                }
                case 109: {
                    goto lab_0x405991;
                }
                case 110: {
                    goto lab_0x405991;
                }
                case 111: {
                    goto lab_0x405991;
                }
                case 112: {
                    goto lab_0x405991;
                }
                case 113: {
                    goto lab_0x405991;
                }
                case 114: {
                    goto lab_0x405991;
                }
                case 115: {
                    goto lab_0x405991;
                }
                case 116: {
                    goto lab_0x405991;
                }
                case 117: {
                    goto lab_0x405991;
                }
                case 118: {
                    goto lab_0x405991;
                }
                case 119: {
                    goto lab_0x405991;
                }
                case 120: {
                    goto lab_0x405991;
                }
                case 121: {
                    goto lab_0x405991;
                }
                case 122: {
                    goto lab_0x405991;
                }
                case 123: {
                    goto lab_0x405935;
                }
                case 124: {
                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x405935;
                }
                case 126: {
                    goto lab_0x40595d;
                }
                default: {
                    goto lab_0x405d35;
                }
            }
        }
      lab_0x405d35:
        if (v23 != 1) {
            // 0x4060a0
            ps = 0;
            int64_t len = v15; // 0x4060b0
            if (v15 == -1) {
                // 0x4060b2
                len = strlen((char *)str);
            }
            // 0x4060de
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40613f:
                // 0x40613f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x406144
                int64_t v30 = v29 + str;
                v24 = function_409010(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4066ba_2;
                    }
                    case -1: {
                        goto lab_0x4066ba_2;
                    }
                    case -2: {
                        // 0x40679d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4067d7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4067da
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4067e7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4067e0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4066ba
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4066ba_2;
                    }
                    case 1: {
                        goto lab_0x406110;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4061bc
                        char v34 = *(char *)v33; // 0x4061cd
                        unsigned char v35; // 0x4057e7
                        if (v34 < 125) {
                            // 0x4061d8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4061ef
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_405790(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4061c0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4061cd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4061d8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4061ef
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_405790(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4061c0
                            v33++;
                        }
                        goto lab_0x406110;
                    }
                }
            }
            goto lab_0x4066ba_2;
        } else {
            // 0x405d84
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x405991;
        }
    }
  lab_0x405fb8:
    // 0x405fb8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4068ba
        if (v8 > result) {
            // 0x4068c3
            *(char *)(v12 + result) = 0;
        }
        // 0x405be7
        return result;
    }
    return function_405790(v10, v6, str, v4, 2, v25 & -3);
  lab_0x405991:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4059a0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x405baa_2;
        }
    }
    int64_t v39 = result; // 0x405aa1
    char v40 = v20; // 0x405aa1
    int64_t v41 = v38; // 0x405aa1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x405aa1
    int64_t v43 = v36; // 0x405aa1
    goto lab_0x405a1d;
  lab_0x405baa_2:
    // 0x405be7
    return function_405790(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4066ba_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x405991;
    } else {
        uint64_t v49 = v46 + v5; // 0x40628e
        int64_t v50 = v5 + 1; // 0x406371
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x406378
        char v52 = v20; // 0x406378
        int64_t v53 = result; // 0x406378
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x406341
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x406345
            int64_t v56 = v54 + 1; // 0x40634a
            int64_t v57 = v51 + 1; // 0x406371
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40633c
                v54 = v56;
                if (v47 > v54) {
                    // 0x406341
                    *(char *)(v54 + v48) = v55;
                }
                // 0x406345
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
        goto lab_0x405a1d;
    }
  lab_0x406110:
    // 0x406110
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40612f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406132
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4066ba
        goto lab_0x4066ba_2;
    }
    goto lab_0x40613f;
  lab_0x40595d:
    // 0x40595d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x405baa_2;
    }
    goto lab_0x405991;
  lab_0x405935:;
    bool v60 = v15 == 1; // 0x405940
    if (v15 == -1) {
        // 0x405942
        v60 = *(char *)v1 == 0;
    }
    // 0x40594e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x405991;
    } else {
        goto lab_0x40595d;
    }
  lab_0x405a1d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x405a22
        *(char *)(v44 + v45) = v40;
    }
    // 0x405a26
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x405838_2;
}
// Address range: 0x4069c0 - 0x406b5e
int64_t function_4069c0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4069c2
    int32_t * v3 = __errno_location(); // 0x4069dc
    int64_t v4 = (int64_t)g40; // 0x4069e1
    int32_t v5 = *v3; // 0x4069eb
    int64_t v6 = v4; // 0x406a01
    if (v2 >= (int64_t)*(int32_t *)&g43) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x406b59
            function_407a20(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x406a10
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x406a17
        int64_t v9; // 0x4069c0
        if (g40 == &g41) {
            int64_t v10 = function_407830(0, v8); // 0x406b3a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g41); // 0x406b3f
            *(int64_t *)&g40 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_407830(v4, v8); // 0x406a2b
            *(int64_t *)&g40 = v12;
            v9 = v12;
        }
        // 0x406a3a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g43; // 0x406a3a
        int32_t v14 = v7; // 0x406a41
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g43 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x406a71
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x406a7b
    int64_t * v17 = (int64_t *)v15; // 0x406a7e
    uint64_t v18 = *v17; // 0x406a7e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x406a81
    int64_t result = *v19; // 0x406a81
    int64_t v20; // 0x4069c0
    uint64_t v21 = function_405790(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x406aa4
    if (v18 > v21) {
        // 0x406b1b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x406ab7
    *v17 = v22;
    if (result != (int64_t)&g88) {
        // 0x406ac7
        free((int64_t *)result);
    }
    int64_t result2 = function_4077d0(v22); // 0x406ae1
    *v19 = result2;
    int64_t v23; // 0x4069c0
    function_405790(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x406b1b
    *v3 = v5;
    return result2;
}
// Address range: 0x406b60 - 0x406b94
int64_t function_406b60(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x406b67
    int64_t result = function_4079d0(a1 == 0 ? (int64_t)&g89 : a1, 56); // 0x406b86
    return result;
}
// Address range: 0x406ba0 - 0x406baf
int64_t function_406ba0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g89 : a1); // 0x406bac
    return result;
}
// Address range: 0x406bb0 - 0x406bbf
int64_t function_406bb0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g89 : a1; // 0x406bb8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g89;
}
// Address range: 0x406bc0 - 0x406bf3
int64_t function_406bc0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g89 + 8 : a1 + 8; // 0x406bd9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x406bde
    uint32_t v3 = *v2; // 0x406bde
    uint32_t v4 = (int32_t)a2 % 32; // 0x406be2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x406c00 - 0x406c13
int64_t function_406c00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g89 + 4 : a1 + 4); // 0x406c0c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x406c20 - 0x406c4b
int64_t function_406c20(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g89 : a1; // 0x406c28
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x406c45
        abort();
        // UNREACHABLE
    }
    // 0x406c3c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g89;
}
// Address range: 0x406c50 - 0x406cc2
int64_t function_406c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g89 : a5; // 0x406c72
    int32_t * v2 = __errno_location(); // 0x406c7b
    uint32_t v3 = *(int32_t *)v1; // 0x406c9b
    int64_t result = function_405790(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x406caa
    return result;
}
// Address range: 0x406cd0 - 0x406db1
int64_t function_406cd0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g89 : a4; // 0x406cf2
    int32_t * v2 = __errno_location(); // 0x406cf8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x406d17
    int32_t * v4 = (int32_t *)v1; // 0x406d1a
    int64_t v5 = function_405790(0, 0, a1, a2, (int64_t)*v4, v3); // 0x406d35
    int64_t v6 = v5 + 1; // 0x406d3a
    int64_t result = function_4077d0(v6); // 0x406d4f
    function_405790(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x406d94
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x406d9d
    return result;
}
// Address range: 0x406dc0 - 0x406dca
int64_t function_406dc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406dc0
    return function_406cd0(a1, a2, 0, a3);
}
// Address range: 0x406dd0 - 0x406e65
int64_t function_406dd0(void) {
    uint32_t v1 = *(int32_t *)&g43; // 0x406dd0
    int64_t v2 = v1; // 0x406dd0
    int64_t v3 = v2; // 0x406de4
    if (v1 >= 2) {
        int64_t v4 = &g43;
        int64_t v5 = v4 + 16; // 0x406e03
        free((int64_t *)*(int64_t *)v4);
        v3 = &g104;
        while (v5 != (int64_t)g40 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x406e00
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g104;
        }
    }
    int64_t v6 = v3; // 0x406e1d
    if (g41 != 0x612460) {
        // 0x406e1f
        free((int64_t *)g41);
        g41 = 256;
        *(int64_t *)&g42 = (int64_t)&g88;
        v6 = &g104;
    }
    int64_t result = v6; // 0x406e41
    if (g40 != &g41) {
        // 0x406e43
        free(g40);
        *(int64_t *)&g40 = (int64_t)&g41;
        result = &g104;
    }
    // 0x406e56
    *(int32_t *)&g43 = 1;
    return result;
}
// Address range: 0x406e70 - 0x406e81
int64_t function_406e70(void) {
    // 0x406e70
    int64_t v1; // 0x406e70
    return function_4069c0(v1, v1, -1, (int64_t *)&g89);
}
// Address range: 0x406e90 - 0x406e9a
int64_t function_406e90(void) {
    // 0x406e90
    int64_t v1; // 0x406e90
    return function_4069c0(v1, v1, v1, (int64_t *)&g89);
}
// Address range: 0x406ea0 - 0x406eb6
int64_t function_406ea0(int64_t a1) {
    // 0x406ea0
    return function_4069c0(0, a1, -1, (int64_t *)&g89);
}
// Address range: 0x406ec0 - 0x406ed2
int64_t function_406ec0(int64_t a1, int64_t a2) {
    // 0x406ec0
    return function_4069c0(0, a1, a2, (int64_t *)&g89);
}
// Address range: 0x406ee0 - 0x406f48
int64_t function_406ee0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406ef0
    return function_4069c0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406f50 - 0x406fb4
int64_t function_406f50(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406f60
    return function_4069c0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x406fc0 - 0x406fcc
int64_t function_406fc0(int64_t a1, int64_t a2) {
    // 0x406fc0
    return function_406ee0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x406fd0 - 0x406fdf
int64_t function_406fd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406fd0
    return function_406f50(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x406fe0 - 0x407050
int64_t function_406fe0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g89); // 0x406fed
    int128_t v2 = __asm_movdqa(g90); // 0x406ff5
    int128_t v3 = __asm_movdqa(g91); // 0x406ffd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x407012
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x407028
    uint32_t v6 = *v5; // 0x407028
    uint32_t v7 = (int32_t)a3 % 32; // 0x40702d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4069c0(0, a1, a2, &v4);
}
// Address range: 0x407050 - 0x40705d
int64_t function_407050(int64_t a1, int64_t a2) {
    // 0x407050
    return function_406fe0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x407060 - 0x407071
int64_t function_407060(int64_t a1) {
    // 0x407060
    return function_406fe0(a1, -1, 58);
}
// Address range: 0x407080 - 0x40708a
int64_t function_407080(void) {
    // 0x407080
    int64_t v1; // 0x407080
    return function_406fe0(v1, v1, 58);
}
// Address range: 0x407090 - 0x4070fe
int64_t function_407090(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4070aa
    return function_4069c0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x407100 - 0x40716c
int64_t function_407100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g89); // 0x407107
    int128_t v2 = __asm_movdqa(g90); // 0x40710f
    int128_t v3 = __asm_movdqa(g91); // 0x407117
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x407139
    if (a2 == 0 || a3 == 0) {
        // 0x407167
        abort();
        // UNREACHABLE
    }
    // 0x40714a
    return function_4069c0(a1, a4, a5, &v4);
}
// Address range: 0x407170 - 0x407179
int64_t function_407170(void) {
    // 0x407170
    int64_t v1; // 0x407170
    return function_407100(v1, v1, v1, v1, -1);
}
// Address range: 0x407180 - 0x407197
int64_t function_407180(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407180
    return function_407100(0, a1, a2, a3, -1);
}
// Address range: 0x4071a0 - 0x4071b3
int64_t function_4071a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4071a0
    return function_407100(0, a1, a2, a3, a4);
}
// Address range: 0x4071c0 - 0x4071ca
int64_t function_4071c0(void) {
    // 0x4071c0
    int64_t v1; // 0x4071c0
    return function_4069c0(v1, v1, v1, &g39);
}
// Address range: 0x4071d0 - 0x4071e2
int64_t function_4071d0(int64_t a1, int64_t a2) {
    // 0x4071d0
    return function_4069c0(0, a1, a2, &g39);
}
// Address range: 0x4071f0 - 0x407201
int64_t function_4071f0(int64_t a1, int64_t a2) {
    // 0x4071f0
    return function_4069c0(a1, a2, -1, &g39);
}
// Address range: 0x407210 - 0x407226
int64_t function_407210(int64_t a1) {
    // 0x407210
    return function_4069c0(0, a1, -1, &g39);
}
// Address range: 0x407230 - 0x40760d
int64_t function_407230(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4072c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40724c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x407266
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4072ab
    if (a6 < 10) {
        // 0x4072ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4073b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x407610 - 0x407630
int64_t function_407610(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407610
    if (a5 == 0) {
        // 0x40762b
        return function_407230(a1, a2, a3, a4, a5, 0, (int64_t)&g104);
    }
    int64_t v1 = 0; // 0x407617
    v1++;
    int64_t v2 = v1; // 0x407629
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x407620
        v1++;
        v2 = v1;
    }
    // 0x40762b
    return function_407230(a1, a2, a3, a4, a5, v2, (int64_t)&g104);
}
// Address range: 0x407630 - 0x407690
int64_t function_407630(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x407630
    int64_t v3 = &v2; // 0x407630
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x407663
    int64_t v6; // 0x40764d
    int64_t * v7; // 0x40766b
    int64_t v8; // 0x40766b
    int64_t v9; // 0x407677
    if (v5 < 48) {
        // 0x407640
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x407683
            break;
        }
    } else {
        // 0x40766b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x407683
            break;
        }
    }
    int64_t v10 = 10; // 0x407661
    while (v4 != 9) {
        // 0x407659
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x407640
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x407683
                break;
            }
        } else {
            // 0x40766b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x407683
                break;
            }
        }
        // 0x407659
        v10 = 10;
    }
    // 0x407683
    return function_407230(a1, a2, a3, a4, v3, v10, (int64_t)&g104);
}
// Address range: 0x407690 - 0x40774c
int64_t function_407690(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x407690
    int64_t v1; // bp-168, 0x407690
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x407690
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x407690
    int64_t v8; // 0x407690
    int64_t v9; // bp-56, 0x407690
    int64_t v10; // 0x4076f5
    int64_t v11; // 0x407719
    if ((int32_t)v6 < 48) {
        // 0x4076e0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x407730
            break;
        }
    } else {
        // 0x407712
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x407730
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40770a
    int64_t v13 = 10; // 0x40770a
    while (v5 != 9) {
        // 0x40770c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4076e0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x407730
                break;
            }
        } else {
            // 0x407712
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x407730
                break;
            }
        }
        // 0x407702
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x407730
    int64_t v14; // bp-136, 0x407690
    int64_t result = function_407230(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g104); // 0x40773f
    return result;
}
// Address range: 0x407750 - 0x4077c4
int64_t function_407750(int64_t a1) {
    // 0x407750
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4077b3
    return fputs_unlocked(v1, g48);
}
// Address range: 0x4077d0 - 0x4077ea
int64_t function_4077d0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4077d4
    if (size != 0 != (mem == NULL)) {
        // 0x4077e3
        return (int64_t)mem;
    }
    // 0x4077e5
    function_407a20(size);
    // UNREACHABLE
}
// Address range: 0x4077f0 - 0x407811
int64_t function_4077f0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4077f3
    int64_t v2 = v1; // 0x4077f3
    if (v2 < 0) {
        // 0x40780b
        function_407a20(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407809
        return function_4077d0(v2);
    }
    // 0x40780b
    function_407a20(v2);
    // UNREACHABLE
}
// Address range: 0x407820 - 0x407822
int64_t function_407820(void) {
    // 0x407820
    int64_t v1; // 0x407820
    return function_4077d0(v1);
}
// Address range: 0x407830 - 0x407866
int64_t function_407830(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x407858
        free(v1);
        return (int32_t)&g104 ^ (int32_t)&g104;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x407841
    if (a2 != 0 != (mem == NULL)) {
        // 0x407850
        return (int64_t)mem;
    }
    // 0x407861
    function_407a20(a1);
    // UNREACHABLE
}
// Address range: 0x407870 - 0x407891
int64_t function_407870(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x407873
    int64_t v2 = v1; // 0x407873
    if (v2 < 0) {
        // 0x40788b
        function_407a20(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407889
        return function_407830(a1, v2);
    }
    // 0x40788b
    function_407a20(a1);
    // UNREACHABLE
}
// Address range: 0x4078a0 - 0x407926
int64_t function_4078a0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4078fb
            function_407a20(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407830(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4078e3
    if (a2 == 0) {
        // 0x407908
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4078e8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4078fb
        function_407a20(a1);
        // UNREACHABLE
    }
    // 0x4078ca
    *(int64_t *)a2 = v2;
    return function_407830(a1, v2 * a3);
}
// Address range: 0x407930 - 0x407980
int64_t function_407930(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        if (a2 >= (int64_t *)0x5555555555555554) {
            // 0x40797a
            function_407a20(a1);
            // UNREACHABLE
        }
        int64_t v2 = v1 + 1 + v1 / 2;
        *a2 = v2;
        return function_407830(a1, v2);
    }
    if (a2 == NULL) {
        // 0x407965
        *a2 = 128;
        return function_407830(0, 128);
    }
    // 0x407978
    if (a2 < NULL) {
        // 0x40797a
        function_407a20(a1);
        // UNREACHABLE
    }
    // 0x407952
    *a2 = v1;
    return function_407830(a1, v1);
}
// Address range: 0x407980 - 0x407997
int64_t function_407980(int64_t a1, int64_t a2) {
    // 0x407980
    return (int64_t)memset((int64_t *)function_4077d0(a1), 0, (int32_t)a1);
}
// Address range: 0x4079a0 - 0x4079ce
int64_t function_4079a0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4079a7
    if ((int64_t)v1 < 0) {
        // 0x4079c9
        function_407a20(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4079c9
        function_407a20(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4079ba
    if (mem != NULL) {
        // 0x4079c4
        return (int64_t)mem;
    }
    // 0x4079c9
    function_407a20(nmemb);
    // UNREACHABLE
}
// Address range: 0x4079d0 - 0x4079f8
int64_t function_4079d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4077d0(a2); // 0x4079df
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x407a00 - 0x407a13
int64_t function_407a00(int64_t str) {
    // 0x407a00
    return function_4079d0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x407a20 - 0x407a51
int64_t function_407a20(int64_t a1) {
    // 0x407a20
    error(g38, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x407a60 - 0x407abd
int64_t function_407a60(void) {
    // 0x407a60
    int64_t v1; // 0x407a60
    int64_t v2 = function_409150(v1, v1); // 0x407a66
    if ((int32_t)v2 >= 0) {
        // 0x407a71
        return v2 & 0xffffffff;
    }
    // 0x407a80
    if (ferror(g48) == 0) {
        // 0x407a90
        error(g38, *__errno_location(), dcgettext(NULL, "cannot perform formatted output", 5));
    }
    // 0x407a71
    return v2 & 0xffffffff;
}
// Address range: 0x407ac0 - 0x407b54
int64_t function_407ac0(char * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x407ac0
    int64_t v1; // 0x407ac0
    if ((char)v1 != 0) {
        // 0x407ae4
        int128_t v2; // 0x407ac0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x407b1b
    int64_t v3; // bp-184, 0x407ac0
    return &v3;
}
// Address range: 0x407b60 - 0x407bb9
int64_t function_407b60(int64_t stream) {
    // 0x407b60
    int64_t v1; // 0x407b60
    int64_t v2 = function_409090(stream, v1, v1); // 0x407b69
    if ((int32_t)v2 >= 0) {
        // 0x407b74
        return v2 & 0xffffffff;
    }
    // 0x407b80
    if (ferror((struct _IO_FILE *)stream) == 0) {
        // 0x407b8c
        error(g38, *__errno_location(), dcgettext(NULL, "cannot perform formatted output", 5));
    }
    // 0x407b74
    return v2 & 0xffffffff;
}
// Address range: 0x407bc0 - 0x407c4f
int64_t function_407bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407bc0
    int64_t v1; // 0x407bc0
    if ((char)v1 != 0) {
        // 0x407bdf
        int128_t v2; // 0x407bc0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x407c16
    return function_407b60(a1);
}
// Address range: 0x407c50 - 0x407cd1
int64_t function_407c50(int64_t a1, int64_t a2, int64_t a3, char (**a4)[11], int64_t a5) {
    int64_t v1 = *(int64_t *)((8 * a1 + 0x7fffffff8 & 0x7fffffff8) + (int64_t)&g26); // 0x407c72
    error(g38, 0, dcgettext(NULL, (char *)v1, 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x407ce0 - 0x408120
int64_t function_407ce0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x407cee
    if (v1 >= 37) {
        // 0x4080fb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g104;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x407d12
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x407d42
    int64_t v4 = a1; // 0x407d47
    char v5 = c; // 0x407d47
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x407d3c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x407d38
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x407d49
    if (v5 == 45) {
        // 0x407d85
        return 4;
    }
    // 0x407d4e
    int64_t v7; // bp-64, 0x407ce0
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x407d0e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x407d56
    int64_t * v10 = (int64_t *)v8; // 0x407d5b
    int64_t v11 = *v10; // 0x407d5b
    char v12; // 0x407ce0
    int64_t v13; // 0x407ce0
    int64_t v14; // 0x407ce0
    int64_t v15; // 0x407ce0
    int64_t v16; // 0x407ce0
    int64_t v17; // 0x407ce0
    int64_t v18; // 0x407ce0
    if (v11 == a1) {
        // 0x407db8
        if (c == 0 || str == NULL) {
            // 0x407d85
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x407dd9
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x407d85
            return 4;
        }
        goto lab_0x407de7;
    } else {
        int32_t v19 = *v2; // 0x407d66
        int64_t v20 = 0; // 0x407d6c
        if (v19 != 0) {
            // 0x407da0
            v20 = 1;
            if (v19 != 34) {
                // 0x407d85
                return 4;
            }
        }
        int64_t v21 = v9; // 0x407d56
        v16 = v21;
        v13 = v20;
        if (str == NULL) {
            goto lab_0x407d82;
        } else {
            char c2 = *(char *)v11; // 0x407d75
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x407ee3
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407de7;
                } else {
                    goto lab_0x407ef5;
                }
            } else {
                goto lab_0x407d82;
            }
        }
    }
  lab_0x407de7:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x407def
    int64_t v24 = 1; // 0x407def
    int64_t v25; // 0x407ce0
    int64_t v26; // 0x407ce0
    int64_t v27; // 0x407ce0
    int64_t v28; // 0x407ce0
    int64_t v29; // 0x407ce0
    int64_t v30; // 0x407ce0
    int64_t v31; // 0x407ce0
    int64_t v32; // 0x407ce0
    int64_t v33; // 0x407ce0
    int64_t v34; // 0x407ce0
    int64_t v35; // 0x407ce0
    int64_t v36; // 0x407ce0
    int64_t v37; // 0x407ce0
    int64_t v38; // 0x407ce0
    int64_t v39; // 0x407ce0
    int64_t v40; // 0x407ce0
    int64_t v41; // 0x407ce0
    int64_t v42; // 0x407ce0
    int64_t v43; // 0x407ce0
    int64_t v44; // 0x407ce0
    if (v22 < 48) {
        // 0x407df1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x407e5a;
        } else {
            // 0x407e04
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x407e5a;
            } else {
                // 0x407e20
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x407e5a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x408089
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x407e5a;
                    }
                    default: {
                        // 0x407e35
                        g111 = v22;
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
                                goto lab_0x407ffb;
                            }
                            case 70: {
                                goto lab_0x407ef5;
                            }
                            case 71: {
                                goto lab_0x408033;
                            }
                            case 72: {
                                goto lab_0x407ef5;
                            }
                            case 73: {
                                goto lab_0x407ef5;
                            }
                            case 74: {
                                goto lab_0x407ef5;
                            }
                            case 75: {
                                goto lab_0x407ebc;
                            }
                            case 76: {
                                goto lab_0x407ef5;
                            }
                            case 77: {
                                goto lab_0x407e7e;
                            }
                            case 78: {
                                goto lab_0x407ef5;
                            }
                            case 79: {
                                goto lab_0x407ef5;
                            }
                            case 80: {
                                goto lab_0x407fc8;
                            }
                            case 81: {
                                goto lab_0x407ef5;
                            }
                            case 82: {
                                goto lab_0x407ef5;
                            }
                            case 83: {
                                goto lab_0x407ef5;
                            }
                            case 84: {
                                goto lab_0x407f98;
                            }
                            case 85: {
                                goto lab_0x407ef5;
                            }
                            case 86: {
                                goto lab_0x407ef5;
                            }
                            case 87: {
                                goto lab_0x407ef5;
                            }
                            case 88: {
                                goto lab_0x407ef5;
                            }
                            case 89: {
                                goto lab_0x407f66;
                            }
                            case 90: {
                                goto lab_0x407f2b;
                            }
                            case 91: {
                                goto lab_0x407ef5;
                            }
                            case 92: {
                                goto lab_0x407ef5;
                            }
                            case 93: {
                                goto lab_0x407ef5;
                            }
                            case 94: {
                                goto lab_0x407ef5;
                            }
                            case 95: {
                                goto lab_0x407ef5;
                            }
                            case 96: {
                                goto lab_0x407ef5;
                            }
                            case 97: {
                                goto lab_0x407ef5;
                            }
                            case 98: {
                                goto lab_0x407f0f;
                            }
                            case 99: {
                                goto lab_0x407e98;
                            }
                            case 100: {
                                goto lab_0x407ef5;
                            }
                            case 101: {
                                goto lab_0x407ef5;
                            }
                            case 102: {
                                goto lab_0x407ef5;
                            }
                            case 103: {
                                goto lab_0x408033;
                            }
                            case 104: {
                                goto lab_0x407ef5;
                            }
                            case 105: {
                                goto lab_0x407ef5;
                            }
                            case 106: {
                                goto lab_0x407ef5;
                            }
                            case 107: {
                                goto lab_0x407ebc;
                            }
                            case 108: {
                                goto lab_0x407ef5;
                            }
                            case 109: {
                                goto lab_0x407e7e;
                            }
                            case 110: {
                                goto lab_0x407ef5;
                            }
                            case 111: {
                                goto lab_0x407ef5;
                            }
                            case 112: {
                                goto lab_0x407ef5;
                            }
                            case 113: {
                                goto lab_0x407ef5;
                            }
                            case 114: {
                                goto lab_0x407ef5;
                            }
                            case 115: {
                                goto lab_0x407ef5;
                            }
                            case 116: {
                                goto lab_0x407f98;
                            }
                            default: {
                                goto lab_0x407e5a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x407e5a;
    }
  lab_0x407d82:
    // 0x407d82
    *a4 = v16;
    // 0x407d85
    return v13 & 0xffffffff;
  lab_0x407e5a:
    // 0x407e5a
    g98 = v12 - 66;
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
    int64_t v46; // 0x407ce0
    switch (v12) {
        case 66: {
            // 0x408054
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x407ec7;
            } else {
                // 0x408061
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407e98;
            }
        }
        case 69: {
            goto lab_0x407ffb;
        }
        case 71: {
            goto lab_0x408033;
        }
        case 75: {
            goto lab_0x407ebc;
        }
        case 77: {
            goto lab_0x407e7e;
        }
        case 80: {
            goto lab_0x407fc8;
        }
        case 84: {
            goto lab_0x407f98;
        }
        case 89: {
            goto lab_0x407f66;
        }
        case 90: {
            goto lab_0x407f2b;
        }
        case 98: {
            goto lab_0x407f0f;
        }
        case 99: {
            goto lab_0x407e98;
        }
        case 103: {
            goto lab_0x408033;
        }
        case 107: {
            goto lab_0x407ebc;
        }
        case 109: {
            goto lab_0x407e7e;
        }
        case 116: {
            goto lab_0x407f98;
        }
        case 119: {
            // 0x407f00
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x407ec7;
            } else {
                // 0x407f05
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407e98;
            }
        }
        default: {
            goto lab_0x407ef5;
        }
    }
  lab_0x407ffb:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x408013
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x40801f
    int64_t v51 = v48; // 0x408022
    int64_t v52 = v37; // 0x408022
    int64_t v53 = v49; // 0x408022
    int32_t v54 = v50; // 0x408022
    int64_t v55 = v49; // 0x408022
    while (v50 != 0) {
        // 0x408010
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
    goto lab_0x407f54;
  lab_0x408033:
    // 0x408033
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x40803e
        int128_t v56; // 0x408039
        uint128_t v57; // 0x408039
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x40803e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x407ce0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x408043
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x408048
                v26 = v60;
                int64_t v61; // 0x407ce0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x407e98;
  lab_0x407ebc:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x407ebf
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x407e98;
    } else {
        goto lab_0x407ec7;
    }
  lab_0x407e7e:;
    int128_t v65 = v27; // 0x407e84
    uint128_t v66 = v65 * (int128_t)v17; // 0x407e84
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x407ec7;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x407e89
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x407ec7;
        } else {
            // 0x407e8e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x407e98;
        }
    }
  lab_0x407fc8:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x407fdb
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x407fe7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x407fea
    int64_t v73 = v70; // 0x407fea
    while (v71 != 0) {
        // 0x407fd8
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
    goto lab_0x407f54;
  lab_0x407f98:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x407fab
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x407fb7
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x407fba
    int64_t v79 = v76; // 0x407fba
    while (v77 != 0) {
        // 0x407fa8
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
    goto lab_0x407f54;
  lab_0x407f66:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x407f7b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x407f87
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x407f8a
    int64_t v85 = v82; // 0x407f8a
    while (v83 != 0) {
        // 0x407f78
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
    goto lab_0x407f54;
  lab_0x407f2b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x407f43
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x407f4f
    int32_t v90 = v89; // 0x407f52
    int64_t v91 = v88; // 0x407f52
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x407f40
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
    goto lab_0x407f54;
  lab_0x407f0f:
    // 0x407f0f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x407ec7;
    } else {
        // 0x407f18
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x407e98;
    }
  lab_0x407e98:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x407e9d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x407d82;
  lab_0x407ef5:
    // 0x407ef5
    *a4 = v18;
    // 0x407d85
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x407ec7:
    // 0x407ec7
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x407e98;
  lab_0x407f54:
    // 0x407f54
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x407e98;
}
// Address range: 0x408120 - 0x40819b
int64_t function_408120(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x408127
    if (fileno(stream) < 0) {
        // 0x408187
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40813a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40816b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x408187
            return fclose(stream);
        }
    }
    // 0x40813c
    if ((int32_t)function_4081a0(a1, v1) == 0) {
        // 0x408187
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x408148
    int32_t v3 = *v2; // 0x408150
    int64_t result = fclose(stream); // 0x40815e
    if (v3 != 0) {
        // 0x408190
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x408160
    return result;
}
// Address range: 0x4081a0 - 0x4081e0
int64_t function_4081a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4081ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4081ba
        return fflush(stream);
    }
    // 0x4081c8
    function_4081e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4081e0 - 0x408237
int64_t function_4081e0(int64_t stream, int64_t offset, int64_t whence) {
    // 0x4081e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4081ea
        return fseeko((struct _IO_FILE *)stream, (int32_t)offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), (int32_t)offset, (int32_t)whence); // 0x40821b
    int64_t result = -1; // 0x408224
    if (v1 != -1) {
        // 0x408226
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x408232
    return result;
}
// Address range: 0x408240 - 0x40831f
int64_t function_408240(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40824c
    uint32_t v2 = *v1; // 0x40824c
    int64_t v3 = a2 & 0xffffffff; // 0x408251
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408254
    uint64_t v5 = (int64_t)*v4; // 0x408254
    int64_t v6; // 0x4082c2
    if (v3 <= v5) {
      lab_0x4082bc_2:
        // 0x4082bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x408242
    int64_t v8 = v2; // 0x408240
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4082bc
        goto lab_0x4082bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408278
    int64_t v17; // 0x408286
    int64_t * v18; // 0x4082a0
    int64_t * v19; // 0x4082a3
    int64_t v20; // 0x4082ae
    int64_t v21; // 0x408286
    while ((v16 & 0xffffffff) > v10) {
        // 0x408283
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4082a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4082b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4082bc
            goto lab_0x4082bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4082bc
            goto lab_0x4082bc_2;
        }
        // 0x408272
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4082fb
    int64_t * v23 = (int64_t *)v22; // 0x408300
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408303
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408300
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408317
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40826d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4082bc
            goto lab_0x4082bc_2;
        }
        // 0x408272
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408283
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4082a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4082b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4082bc
                goto lab_0x4082bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4082bc
                goto lab_0x4082bc_2;
            }
            // 0x408272
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4082e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408300
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408317
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4082bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408320 - 0x40893c
int64_t function_408320(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40833f
    int64_t v2 = *v1; // 0x40833f
    char * str2 = (char *)v2; // 0x40834c
    char c = *str2; // 0x40834c
    int64_t v3 = v2; // 0x408378
    int64_t v4 = 0; // 0x408320
    int32_t v5; // 0x408320
    int64_t v6; // 0x408320
    int64_t v7; // 0x408320
    int64_t v8; // 0x408320
    int64_t v9; // 0x408320
    int64_t v10; // 0x408320
    int64_t v11; // 0x408320
    int64_t v12; // 0x408320
    int64_t v13; // 0x408320
    int64_t str3; // 0x408320
    int64_t v14; // 0x408320
    int64_t v15; // 0x408320
    int64_t v16; // 0x408320
    int64_t v17; // 0x408320
    int32_t v18; // 0x408320
    int32_t v19; // 0x408320
    int32_t v20; // 0x408320
    int32_t v21; // 0x408320
    int32_t v22; // 0x408320
    int32_t v23; // 0x408320
    int32_t v24; // 0x408320
    int32_t v25; // 0x408320
    int32_t v26; // 0x408320
    int32_t v27; // 0x408320
    int32_t v28; // 0x408320
    int32_t v29; // 0x408320
    int64_t nmemb; // 0x408320
    int64_t v30; // 0x408320
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40837c
            while (v31 != 0 == (v31 != 61)) {
                // 0x408378
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408388
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40838e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408358
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4083bc
                int64_t v34; // 0x408320
                int64_t v35; // 0x408320
                if (strncmp(str, str2, n) == 0) {
                    // 0x4083c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408540;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4083d6
                int64_t v37 = *(int64_t *)v36; // 0x4083da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4083b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4083c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408540;
                        }
                    }
                    // 0x4083d6
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
                  lab_0x408426:
                    // 0x408426
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
                        goto lab_0x408480;
                    } else {
                        if (v11 == 0) {
                            // 0x4085f0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408480;
                        } else {
                            if (v39 == 0) {
                                // 0x4085a0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40844a;
                                } else {
                                    // 0x4085ac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40844a;
                                    } else {
                                        // 0x4085ba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40844a;
                                        } else {
                                            goto lab_0x408480;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40844a;
                            }
                        }
                    }
                }
              lab_0x408491:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408666
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408812
                            flockfile(g51);
                            int64_t v41 = *v1; // 0x408832
                            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40887f
                            int64_t v43 = (int64_t)g51;
                            int64_t v44 = v43; // 0x408899
                            int64_t v45; // 0x40889b
                            if (*(char *)v42 != 0) {
                                // 0x40889b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g51;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408893
                            while (v17 + nmemb != v42) {
                                // 0x408895
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40889b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g51;
                                }
                                // 0x408888
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4088c0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g51);
                            v40 = *v1;
                        } else {
                            // 0x408674
                            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4087cf
                        free((int64_t *)v17);
                    }
                    // 0x4086c9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4086e0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40858e
                    return 63;
                }
                // 0x4084b0
                v5 = v39;
                if (v13 != 0) {
                    // 0x408534
                    v35 = v13;
                    v34 = v25;
                  lab_0x408540:;
                    int32_t * v49 = (int32_t *)a7; // 0x408550
                    uint32_t v50 = *v49; // 0x408550
                    int64_t v51 = v50; // 0x408550
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40855a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408563
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40878f
                                __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40873a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40858e
                            return 63;
                        }
                        // 0x4085d8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4088ef
                                    __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4087ed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408800
                                // 0x40858e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4086fe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408712
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40857b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40857e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408582
                    int64_t result = v59; // 0x408588
                    if (v58 != 0) {
                        // 0x40858a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40858e
                    return result;
                }
            } else {
                // 0x40838e
                v5 = v32;
            }
            // break -> 0x4084b5
            break;
        }
    }
    // 0x4084b5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4084cd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4084d7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40858e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408619
        __fprintf_chk(g51, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408506
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408516
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408480:
    // 0x408480
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408480
    int64_t v63 = *(int64_t *)v62; // 0x408484
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408491
        goto lab_0x408491;
    }
    goto lab_0x408426;
  lab_0x40844a:
    // 0x40844a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408320
    int32_t v65; // 0x408320
    int32_t v66; // 0x408320
    if (v27 != 0) {
        goto lab_0x408480;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408600
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408480;
            } else {
                goto lab_0x408471;
            }
        } else {
            // 0x408465
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40875c
                int64_t v67 = (int64_t)mem; // 0x40875c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408480;
                } else {
                    // 0x40876f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408471;
                }
            } else {
                goto lab_0x408471;
            }
        }
    }
  lab_0x408471:
    // 0x408471
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408480;
}
// Address range: 0x408940 - 0x408f06
int64_t function_408940(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x408961
    if (v3 < 1) {
        // 0x408b1e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40895d
    int32_t v5 = *(int32_t *)a7; // 0x408969
    uint64_t v6 = a1 & 0xffffffff; // 0x40896b
    int64_t v7 = v2; // 0x408970
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x408973
    *v8 = 0;
    int64_t v9; // 0x408940
    int64_t v10; // 0x408940
    int64_t v11; // 0x408940
    int64_t v12; // 0x408940
    int64_t str; // 0x408940
    int64_t v13; // 0x408940
    int64_t v14; // 0x408940
    int64_t v15; // 0x408940
    int64_t v16; // 0x408940
    int64_t v17; // 0x408940
    int32_t v18; // 0x408940
    char v19; // 0x408940
    if (v5 == 0) {
        // 0x408b58
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40898a;
    } else {
        // 0x408983
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4089d0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4089d3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x408a98;
            } else {
                int64_t v22 = v7 + 1; // 0x4089e6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4089f6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x408aac;
                } else {
                    goto lab_0x408a08;
                }
            }
        } else {
            goto lab_0x40898a;
        }
    }
  lab_0x40898a:
    // 0x40898a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x408990
    *v24 = 0;
    int64_t v25; // 0x408940
    int64_t v26; // 0x408940
    int64_t v27; // 0x408940
    switch (*(char *)&v2) {
        case 45: {
            // 0x408a80
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x408a8d;
        }
        case 43: {
            // 0x408d90
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x408a8d;
        }
        default: {
            // 0x4089ac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x408d0f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408e28
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x408a8d;
                } else {
                    // 0x408d1d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4089ba;
                }
            } else {
                goto lab_0x4089ba;
            }
        }
    }
  lab_0x408a98:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x408a9f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x408a08;
    } else {
        goto lab_0x408aac;
    }
  lab_0x4089ba:
    // 0x4089ba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x408a8d;
  lab_0x408a8d:
    // 0x408a8d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x408a98;
  lab_0x408a08:;
    uint32_t v30 = *(int32_t *)a7; // 0x408a08
    int64_t v31 = v30; // 0x408a08
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x408a0a
    if ((int64_t)*v32 > v31) {
        // 0x408a0f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x408a12
    if (*v33 > v30) {
        // 0x408a17
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x408a1a
    int64_t v35 = v31; // 0x408a1e
    int64_t v36 = v15; // 0x408a1e
    int64_t v37; // 0x408940
    int64_t v38; // 0x408940
    int64_t v39; // 0x408940
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x408b88
        int64_t v41 = v40; // 0x408b88
        v2 = v41;
        int64_t v42; // 0x408940
        if (*v33 == v40) {
            // 0x408d70
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408d78
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x408b94
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408b98
                function_408240(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x408ba8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x408bb1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x408bba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x408bd1
            int64_t v47 = v45 & 0xffffffff; // 0x408bd5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x408bde
                if (*(char *)(v46 + 1) != 0) {
                    // 0x408be4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x408be6;
                }
            }
            int64_t v48 = v47 + 1; // 0x408bc0
            int64_t v49 = v48 & 0xffffffff; // 0x408bc0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x408bd1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x408bde
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x408be4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x408be6;
                    }
                }
                // 0x408bc0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408d88
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x408be6;
    } else {
        goto lab_0x408a24;
    }
  lab_0x408aac:
    // 0x408aac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x408aaf
    int64_t v51 = v12; // 0x408aaf
    int64_t v52 = v14; // 0x408aaf
    if (*(char *)v10 == 0) {
        goto lab_0x408a08;
    } else {
        goto lab_0x408ab5;
    }
  lab_0x408a24:;
    int32_t v53 = v35; // 0x408a24
    int64_t v54; // 0x408940
    int64_t v55; // 0x408940
    int64_t v56; // 0x408940
    int64_t v57; // 0x408940
    int64_t v58; // 0x408940
    int64_t v59; // 0x408940
    char * v60; // 0x408940
    int64_t v61; // 0x408940
    int64_t v62; // 0x408a39
    int64_t v63; // 0x408940
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x408b73
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x408b76;
    } else {
        // 0x408a2c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408940
        int64_t v66 = v65 ? -1 : 1; // 0x408a40
        int64_t v67 = (int64_t)"--"; // 0x408940
        int64_t v68 = v62; // 0x408940
        int64_t v69 = 3; // 0x408a40
        unsigned char v70 = *(char *)v68; // 0x408a40
        char v71 = *(char *)v67; // 0x408a40
        char v72 = v71; // 0x408a40
        bool v73 = false; // 0x408a40
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
            // 0x408b30
            if (*(char *)v62 == 45) {
                // 0x408bf0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x408bf0
                if (c == 0) {
                    goto lab_0x408b3a;
                } else {
                    // 0x408bfd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x408c80;
                    } else {
                        if (c == 45) {
                            // 0x408e63
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x408cd5;
                        } else {
                            // 0x408c0e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x408c80;
                            } else {
                                // 0x408c13
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408c34;
                                } else {
                                    // 0x408c1a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x408c80;
                                    } else {
                                        goto lab_0x408c34;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x408b3a;
            }
        } else {
            uint32_t v75 = *v33; // 0x408a50
            v2 = v75;
            int32_t v76 = *v32; // 0x408a53
            int64_t v77 = v35 + 1; // 0x408a56
            int32_t v78 = v77; // 0x408a59
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x408dc0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x408a67
                    function_408240(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x408a75
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x408b76;
        }
    }
  lab_0x408ab5:;
    // 0x408ab5
    int64_t v79; // bp-104, 0x408940
    int64_t v80 = &v79; // 0x40894a
    int64_t v81 = v50 + 1; // 0x408ab5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x408abc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x408ac1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x408ac5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x408ac9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x408ad1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x408ad6
    int32_t c2 = v84; // 0x408ad6
    char * found_char_pos = strchr(str2, c2); // 0x408ad6
    int64_t v87 = *v82; // 0x408adb
    v2 = v87;
    int64_t v88 = *v85; // 0x408ae5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x408af0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x408de0
            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x408dad
        *(int32_t *)(v1 + 8) = c2;
        // 0x408b1e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x408ad6
    char v91 = *(char *)(v90 + 1); // 0x408b0b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x408ac5
        if (v91 != 58) {
            // 0x408b1e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408d34
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408e38
                *v8 = 0;
            } else {
                // 0x408e1c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x408d5e
            *v83 = 0;
            // 0x408b1e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x408d3e
        if (v93 != 0) {
            // 0x408dd0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x408d5e
            *v83 = 0;
            // 0x408b1e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408d51
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x408d5e
            *v83 = 0;
            // 0x408b1e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x408e9a
            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x408e4a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408e51
        // 0x408d5e
        *v83 = 0;
        // 0x408b1e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x408ca9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x408cab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x408ed0
                __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408e81
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408e88
            // 0x408b1e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x408cb6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x408cba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x408cd5;
  lab_0x408be6:
    // 0x408be6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x408a24;
  lab_0x408cd5:;
    int64_t v99 = function_408320(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408cf3
    // 0x408b1e
    return v99 & 0xffffffff;
  lab_0x408b76:;
    int32_t v100 = v55; // 0x408b76
    if (v100 != (int32_t)v59) {
        // 0x408b7a
        *(int32_t *)a7 = v100;
    }
    // 0x408b1e
    return 0xffffffff;
  lab_0x408b3a:
    // 0x408b3a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408b41
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x408b1e
    return v99 & 0xffffffff;
  lab_0x408c80:
    // 0x408c80
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x408ab5;
  lab_0x408c34:
    // 0x408c34
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408320(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g24); // 0x408c5a
    if ((int32_t)v101 != -1) {
        // 0x408b1e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x408c6f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x408c80;
}
// Address range: 0x408f10 - 0x408f66
int64_t function_408f10(int64_t a1) {
    // 0x408f10
    *(int32_t *)&g92 = g46;
    *(int32_t *)&g93 = g45;
    int64_t v1; // 0x408f10
    int64_t result = function_408940(v1, v1, v1, v1, v1, v1, &g92, a1 & 0xffffffff); // 0x408f36
    g46 = *(int32_t *)&g92;
    g97 = (char *)g95;
    *(int32_t *)&g44 = g94;
    return result;
}
// Address range: 0x408f70 - 0x408f88
int64_t function_408f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408f70
    return function_408f10(1);
}
// Address range: 0x408f90 - 0x408fa3
int64_t function_408f90(int64_t a1, int64_t a2, char * a3, char (**a4)[11], int64_t * a5, int64_t a6) {
    // 0x408f90
    return function_408f10(0);
}
// Address range: 0x408fb0 - 0x408fc5
int64_t function_408fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408fb0
    return function_408940(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x408fd0 - 0x408fe6
int64_t function_408fd0(void) {
    // 0x408fd0
    return function_408f10(0);
}
// Address range: 0x408ff0 - 0x409008
int64_t function_408ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408ff0
    return function_408940(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409010 - 0x40908a
int64_t function_409010(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40901b
    int64_t v2 = (int64_t)&g27; // 0x40901b
    int32_t * pwc; // 0x409010
    int64_t v3; // 0x409010
    int64_t n; // 0x409010
    if (a2 == 0) {
        goto lab_0x409062;
    } else {
        // 0x40901d
        if (a3 == 0) {
            // 0x409048
            return -2;
        }
        // 0x409029
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409062;
        } else {
            goto lab_0x409034;
        }
    }
  lab_0x409062:
    // 0x409062
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409010
    pwc = (int32_t *)&v4;
    goto lab_0x409034;
  lab_0x409034:;
    char * wstr = (char *)v3; // 0x40903a
    int64_t ps; // 0x409010
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40903a
    int64_t result = v5; // 0x40903a
    if (v5 < 0xfffffffe) {
        // 0x409048
        return result;
    }
    int64_t result2 = result; // 0x409079
    if ((char)function_4091d0(0, v3) == 0) {
        // 0x40907b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409048
    return result2;
}
// Address range: 0x409090 - 0x40914d
int64_t function_409090(int64_t stream, int64_t a2, int64_t a3) {
    int32_t v1 = 2000; // bp-2048, 0x4090b0
    int64_t v2; // bp-2040, 0x409090
    int64_t v3; // 0x409090
    int64_t v4 = function_4097b0(&v2, (int64_t *)&v1, a2, a3, v3, v3, 2000, (int64_t)&g104); // 0x4090bc
    if (v4 == 0) {
        // 0x40913e
        function_4097a0(stream);
        // 0x4090fc
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x4090c1
    int64_t * data = (int64_t *)v4; // 0x4090dc
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x409110
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x40911a
            free(data);
        }
        // 0x4090fc
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x4090eb
        free(data);
    }
    // 0x4090f3
    if (nmemb > -1) {
        // 0x4090fc
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x409133
    *__errno_location() = 75;
    // 0x40913e
    function_4097a0(stream);
    // 0x4090fc
    return 0xffffffff;
}
// Address range: 0x409150 - 0x409162
int64_t function_409150(int64_t a1, int64_t a2) {
    // 0x409150
    return function_409090((int64_t)g48, a1, a2);
}
// Address range: 0x409170 - 0x4091cd
int64_t function_409170(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409177
    int64_t v2; // 0x409170
    int64_t result = function_408120(a1, v2); // 0x409188
    if ((v2 & 32) != 0) {
        // 0x4091b0
        if ((int32_t)result == 0) {
            // 0x4091b4
            *__errno_location() = 0;
        }
        // 0x4091aa
        return 0xffffffff;
    }
    // 0x409191
    if ((int32_t)result == 0) {
        // 0x4091aa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x409198
    if (v1 == 0) {
        // 0x40919a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4091aa
    return result2;
}
// Address range: 0x4091d0 - 0x40922e
int64_t function_4091d0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4091d6
    if (locale == NULL) {
        // 0x409203
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4091d6
    bool v2; // 0x4091d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g28; // 0x4091d0
    int64_t v5 = v1; // 0x4091d0
    int64_t v6 = 2; // 0x4091f5
    unsigned char v7 = *(char *)v5; // 0x4091f5
    char v8 = *(char *)v4; // 0x4091f5
    char v9 = v8; // 0x4091f5
    bool v10 = false; // 0x4091f5
    while (v7 == v8) {
        // 0x4091e8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409201
    int64_t v13 = v1; // 0x409201
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409203
        return 0;
    }
    int64_t v14 = 6; // 0x409201
    unsigned char v15 = *(char *)v13; // 0x40921d
    char v16 = *(char *)v12; // 0x40921d
    char v17 = v16; // 0x40921d
    bool v18 = false; // 0x40921d
    while (v15 == v16) {
        // 0x409210
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
// Address range: 0x409230 - 0x409792
int64_t function_409230(void) {
    char * v1 = nl_langinfo(14); // 0x409246
    char * v2 = g96; // 0x40924b
    char * v3; // 0x409230
    int64_t v4; // 0x409230
    int64_t v5; // 0x409230
    int64_t v6; // 0x409230
    int64_t v7; // 0x409230
    int32_t size; // 0x409230
    int32_t size2; // 0x409230
    int32_t len; // 0x409302
    int64_t v8; // 0x409302
    char * env_val; // 0x4092ed
    if (v2 == NULL) {
        // 0x4092e8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409355;
        } else {
            // 0x4092fa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409355;
            } else {
                // 0x4092ff
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4092ed
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409785
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409355;
                    } else {
                        // 0x4096f9
                        size2 = len + 14;
                        goto lab_0x40931b;
                    }
                } else {
                    goto lab_0x40931b;
                }
            }
        }
    } else {
        // 0x409230
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40926a;
    }
  lab_0x40959c:;
    // 0x40959c
    struct _IO_FILE * stream; // 0x4093db
    int32_t v10 = __uflow(stream); // 0x40959f
    int64_t v11; // 0x409230
    int64_t v12 = v11; // 0x4095a9
    int64_t v13; // 0x409230
    int64_t v14 = v13; // 0x4095a9
    int32_t v15 = v10; // 0x4095a9
    int64_t v16; // 0x409230
    int64_t v17 = v16; // 0x4095a9
    int64_t v18 = v11; // 0x4095a9
    int64_t v19 = v13; // 0x4095a9
    int64_t v20 = v16; // 0x4095a9
    if (v10 == -1) {
        // break -> 0x4095af
        goto lab_0x4095af;
    }
    goto lab_0x409429;
  lab_0x40941e:;
    // 0x40941e
    int64_t v90; // 0x409230
    int64_t * v32; // 0x409410
    *v32 = v90 + 1;
    int64_t v89; // 0x409230
    v12 = v89;
    int64_t v91; // 0x409230
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x409230
    v17 = v92;
    goto lab_0x409429;
  lab_0x409429:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x409230
    int32_t v25; // bp-120, 0x409230
    int32_t v26; // bp-184, 0x409230
    int64_t v27; // 0x4093db
    int64_t v28; // 0x4093f8
    int64_t v29; // 0x4093fd
    int64_t * v30; // 0x409414
    switch (c) {
        case 32: {
            goto lab_0x409410;
        }
        case 10: {
            goto lab_0x409410;
        }
        case 9: {
            goto lab_0x409410;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409601
            int32_t v33; // 0x409230
            char v34; // 0x409230
            int32_t v35; // 0x40960e
            if (v31 < *v30) {
                // 0x4095e0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40960b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409601
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4095e0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40960b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4095f0
                v36 = v33;
            }
            // 0x4096df
            if (v36 == -1) {
                // break -> 0x4095af
                break;
            }
            goto lab_0x409410;
        }
        default: {
            // 0x40943f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4095af
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409468
            int64_t v39 = v37 + 4; // 0x40946a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409476
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409478
            while (v41 == 0) {
                // 0x409468
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409496
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4094a2
            int64_t v45 = v43 + 4; // 0x4094a4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4094b0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4094b2
            while (v47 == 0) {
                // 0x4094a2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40949f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4094c8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4094d8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4094dc
            int64_t v52 = v51 + v48; // 0x4094e5
            int64_t * mem; // 0x409230
            int64_t v53; // 0x409230
            int64_t v54; // 0x409230
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40961b
                int64_t v56 = v55 + 3; // 0x409627
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409501
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409510
            if (mem == NULL) {
                // 0x40973c
                free((int64_t *)v21);
                function_408120(v27, v53);
                v24 = (int64_t)&g27;
                goto lab_0x4093b4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409528
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409532
            uint32_t v62 = (int32_t)v59; // 0x409535
            int64_t v63; // 0x409230
            if (v62 >= 8) {
                // 0x409644
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40965e
                int64_t v66 = v61 - v65; // 0x409662
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40966d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40967e
                    int64_t v70 = v69 & 0xffffffff; // 0x40967e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40967b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40970f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409547
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40954b
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
            int64_t v73 = v51 + 1; // 0x40955b
            int64_t v74 = v60 - 1; // 0x40955f
            uint32_t v75 = (int32_t)v73; // 0x409564
            int64_t v76; // 0x409230
            if (v75 >= 8) {
                // 0x409692
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40969c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4096ac
                int64_t v80 = v74 - v79; // 0x4096b0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4096bb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4096cb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4096c9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409726
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40972e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409576
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40957a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409773
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40958e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40941e;
            } else {
                goto lab_0x40959c;
            }
        }
    }
  lab_0x409410:;
    int64_t v93 = v23; // 0x409230
    int64_t v94 = v22; // 0x409230
    int64_t v95 = v21; // 0x409230
    goto lab_0x409410_2;
  lab_0x409355:;
    int64_t * mem3 = malloc(size); // 0x409355
    int64_t v97 = (int64_t)&g27; // 0x409360
    int64_t v98; // 0x409230
    int64_t path; // 0x409230
    if (mem3 == NULL) {
        goto lab_0x409332;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x409355
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x409376;
    }
  lab_0x40926a:;
    int64_t str = v1 == NULL ? (int64_t)&g27 : (int64_t)v1; // 0x40925d
    char v100 = *v3; // 0x40926a
    int64_t v101; // 0x409230
    if (v100 == 0) {
        // 0x4092c4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x409230
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x409230
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4092b0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4092b7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x409280
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40928d
        char v107 = *(char *)v106; // 0x409292
        v102 = v107;
        if (v107 == 0) {
            // 0x4092c4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40929b
    v104 = v103 + 1;
  lab_0x4092b7:
    // 0x4092c4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x409332:;
    char * v108 = (char *)v97;
    g96 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40926a;
  lab_0x409376:;
    int64_t v109 = v98 + path; // 0x409376
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4093a2
    v24 = (int64_t)&g27;
    if (fd >= 0) {
        // 0x4093d1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409702
            close(fd);
            v24 = (int64_t)&g27;
        } else {
            // 0x4093f5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409410_2:;
                uint64_t v96 = *v32; // 0x409410
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40959c;
                } else {
                    goto lab_0x40941e;
                }
            }
          lab_0x4095af:
            // 0x4095af
            function_408120(v27, v19);
            v24 = (int64_t)&g27;
            if (v18 != 0) {
                // 0x4095ce
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4093b4;
  lab_0x40931b:;
    int64_t * mem4 = malloc(size2); // 0x40931b
    v97 = (int64_t)&g27;
    if (mem4 != NULL) {
        // 0x4093c1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x409376;
    } else {
        goto lab_0x409332;
    }
  lab_0x4093b4:
    // 0x4093b4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x409332;
}
// Address range: 0x4097a0 - 0x4097a4
int64_t function_4097a0(int64_t a1) {
    // 0x4097a0
    int64_t result; // 0x4097a0
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x4097b0 - 0x40b2c9
int64_t function_4097b0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4097b0
    int64_t v1; // bp-1416, 0x4097b0
    int64_t v2; // bp-1656, 0x4097b0
    if ((int32_t)function_40b4f0(a3, &v1, &v2) < 0) {
        // 0x409e20
        return 0;
    }
    int64_t v3 = &v2; // 0x4097bb
    int64_t v4; // bp-1384, 0x4097b0
    int64_t v5; // bp-1640, 0x4097b0
    int64_t v6; // 0x4097b0
    if ((int32_t)function_40b2d0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x40a707
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x40a723
            free((int64_t *)v6);
        }
        // 0x40a728
        *__errno_location() = 22;
        // 0x409e20
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40981b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x409823
    uint64_t v9 = v8 + v6; // 0x409827
    int64_t v10; // 0x4097b0
    char * v11; // 0x4097b0
    int64_t v12; // 0x4097b0
    if (v9 < v8) {
        // 0x409ed0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x409dd9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x409ed0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x409dd9;
        } else {
            uint64_t size = v9 + 6; // 0x409837
            if (size < 4000) {
                // 0x409980
                v12 = 0;
                int64_t v13; // bp-1784, 0x4097b0
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x409874;
            } else {
                if (size == -1) {
                    // 0x409ed0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x409dd9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x409858
                    if (mem == NULL) {
                        // 0x409ed0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x409dd9;
                    } else {
                        // 0x40986d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x409874;
                    }
                }
            }
        }
    }
  lab_0x409da0_2:;
    // 0x409da0
    int64_t v14; // 0x4097b0
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x409da8
    int64_t v17 = v16; // 0x409db6
    int64_t v18 = v16; // 0x409db6
    int64_t v19 = v15; // 0x409db6
    int64_t v20; // 0x4097b0
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x409fc8;
    } else {
        goto lab_0x409dc1;
    }
  lab_0x409dd9:
    // 0x409dd9
    if (v6 != (int64_t)&v4) {
        // 0x409df0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x409e0c
        free((int64_t *)v6);
    }
    // 0x409e11
    *(int32_t *)v10 = 12;
    // 0x409e20
    return 0;
  lab_0x409874:
    // 0x409874
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x4098ad
    int64_t v23 = *v22; // 0x4098ad
    int64_t v24 = 0; // 0x4098b3
    int64_t v25 = v20; // 0x4098b3
    int64_t v26 = v21; // 0x4098b3
    int64_t v27 = 0; // 0x4098b3
    int64_t v28; // 0x4097b0
    int64_t v29; // 0x4097b0
    int64_t v30; // 0x4097b0
    int64_t v31; // 0x4097b0
    int64_t v32; // 0x4097b0
    int64_t v33; // 0x4097b0
    int64_t v34; // 0x4097b0
    if (v23 == a3) {
        goto lab_0x409ec3;
    } else {
        int64_t v35 = v23 - a3; // 0x4098b9
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x4098cb;
    }
  lab_0x409ec3:;
    int64_t v36 = v24; // 0x409ec6
    float80_t v37; // 0x4097b0
    float80_t v38 = v37; // 0x409ec6
    float80_t v39; // 0x4097b0
    float80_t v40 = v39; // 0x409ec6
    int64_t v41 = v25; // 0x409ec6
    int64_t v42 = v26; // 0x409ec6
    int64_t v43 = v27; // 0x409ec6
    int64_t v44; // 0x4097b0
    int64_t v45 = v44; // 0x409ec6
    goto lab_0x409a28;
  lab_0x409a28:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x4097b0
    int64_t v51; // 0x4097b0
    int64_t v52; // 0x4097b0
    int64_t v53; // 0x4097b0
    int64_t v54; // 0x4097b0
    int64_t v55; // 0x4097b0
    int64_t v56; // 0x4097b0
    int64_t v57; // 0x4097b0
    int64_t dest_mem2; // 0x4097b0
    int64_t dest_mem3; // 0x4097b0
    int64_t v58; // 0x4097b0
    float80_t v59; // 0x4097b0
    float80_t v60; // 0x4097b0
    float80_t v61; // 0x4097b0
    float80_t v62; // 0x4097b0
    float80_t v63; // 0x4097b0
    uint64_t v64; // 0x40ab56
    char * v65; // 0x409a3c
    char v66; // 0x409a3c
    int64_t v67; // 0x409a64
    uint32_t v68; // 0x409a68
    int64_t v69; // 0x409e45
    char v70; // 0x4097b0
    if (v1 == v49) {
        // 0x40ab50
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40b2ba
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x40abb2;
            } else {
                goto lab_0x409da0_2;
            }
        } else {
            // 0x40ab60
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x40abb2;
            } else {
                if (v47 != 0) {
                    // 0x40b17d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x409da0_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x40b183
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40ab7e;
                        } else {
                            goto lab_0x40b18f;
                        }
                    }
                } else {
                    // 0x40ab6e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40ab7e;
                    } else {
                        goto lab_0x40b18f;
                    }
                }
            }
        }
    } else {
        // 0x409a3c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x409a41
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40a4dc
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x40a610
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x409da0_2;
                } else {
                    goto lab_0x409ea2;
                }
            } else {
                // 0x409e52
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x409ea2;
                } else {
                    if (v47 != 0) {
                        // 0x40a740
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x409da0_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x40a746
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x409e70;
                            } else {
                                goto lab_0x40a752;
                            }
                        }
                    } else {
                        // 0x409e60
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x409e70;
                        } else {
                            goto lab_0x40a752;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40a4dc
                abort();
                // UNREACHABLE
            }
            // 0x409a59
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g99 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x40a3d0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x409ea7;
                }
                case 19: {
                    // 0x40a3c0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x409ea7;
                }
                case 20: {
                    // 0x40a3a8
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x409ea7;
                }
                case 21: {
                    goto lab_0x409f90;
                }
                case 22: {
                    goto lab_0x409f90;
                }
                default: {
                    // 0x409a7a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x409f20
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x409f3d;
                        } else {
                            // 0x409f27
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x409ab0;
                            } else {
                                goto lab_0x409f3d;
                            }
                        }
                    } else {
                        goto lab_0x409ab0;
                    }
                }
            }
        }
    }
  lab_0x4098cb:;
    int64_t v75 = v34;
    float80_t v76; // 0x4097b0
    float80_t v77 = v76;
    float80_t v78; // 0x4097b0
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x4097b0
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x4098ce
    int64_t v89 = v85; // 0x4098ce
    int64_t v90 = v84; // 0x4098ce
    float80_t v91 = v79; // 0x4098ce
    float80_t v92 = v77; // 0x4098ce
    int64_t v93 = v75; // 0x4098ce
    int64_t v94 = v80; // 0x4098ce
    int64_t v95 = v81; // 0x4098ce
    int64_t v96 = v82; // 0x4098ce
    int64_t v97 = v87; // 0x4098ce
    int64_t v98; // 0x4097b0
    int64_t v99; // 0x4097b0
    int64_t v100; // 0x4097b0
    int64_t v101; // 0x4097b0
    int64_t v102; // 0x4097b0
    if (v82 >= v87) {
        goto lab_0x409a19;
    } else {
        if (v82 != 0) {
            // 0x4099b0
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x409da0_2;
            } else {
                int64_t v103 = 2 * v82; // 0x4099b6
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x4099cb;
                } else {
                    goto lab_0x4099be;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x4098f4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x4099de;
                } else {
                    goto lab_0x409900;
                }
            } else {
                goto lab_0x4099be;
            }
        }
    }
  lab_0x409a19:
    // 0x409a19
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x409a28;
  lab_0x40abb2:
    // 0x40abb2
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40abba
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40abcb
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x40abd7
    if (v12 != 0) {
        // 0x40abe3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x40ac02
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40ac1e
        free((int64_t *)v6);
    }
    // 0x40ac23
    *a2 = v46;
    // 0x409e20
    return result;
  lab_0x409f90:
    // 0x409f90
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x409ea7;
  lab_0x4099be:
    // 0x4099be
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x409da0_2;
    } else {
        goto lab_0x4099cb;
    }
  lab_0x409fc8:
    // 0x409fc8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x409dc1;
  lab_0x409dc1:
    if (v12 == 0) {
        // 0x409ed0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x409dd9;
    } else {
        // 0x409dd1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x409dd9;
    }
  lab_0x409ea2:
    // 0x409ea2
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x409ea7;
  lab_0x409ab0:;
    int64_t v273 = (int64_t)v11; // 0x409ab0
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x409ab7
    int64_t v275 = v273 + 1; // 0x409abb
    *v11 = 37;
    int64_t v276 = v275; // 0x409ac4
    if (v274 % 2 != 0) {
        // 0x409ac6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x409ab7
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x409ad7
    if ((v277 & 2) != 0) {
        // 0x409ad9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x409ae3
    if ((v277 & 4) != 0) {
        // 0x409ae5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x409aef
    if ((v277 & 8) != 0) {
        // 0x409af1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x409afb
    if ((v277 & 16) != 0) {
        // 0x409afd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x409b07
    if ((v277 & 64) != 0) {
        // 0x409b09
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x409b13
    if ((v277 & 32) != 0) {
        // 0x409b15
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x409b1d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x409b21
    int64_t v293 = v290; // 0x409b28
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x409b37
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x409b5a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x409b5e
    int64_t v298 = v295; // 0x409b65
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x409b74
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x409a6a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x409ba0
    int64_t v272; // 0x4097b0
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x409ba9
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x409fa8;
        } else {
            if (v301 == 12) {
                // 0x40a768
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x409bd0;
            } else {
                // 0x409bc0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x409fa0
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x409fa8;
                } else {
                    goto lab_0x409bd0;
                }
            }
        }
    } else {
        goto lab_0x409bd0;
    }
  lab_0x409ea7:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x409ea7
    int64_t v111 = v55 + 88; // 0x409eab
    int64_t v112 = *(int64_t *)v111; // 0x409eaf
    int64_t v113 = v49 + 1; // 0x409eb2
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x4098b9
        int64_t v115 = v114 + v105; // 0x4098bf
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
            // 0x409ee8
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
                goto lab_0x409da0_2;
            } else {
                goto lab_0x409a19;
            }
        } else {
            goto lab_0x4098cb;
        }
    } else {
        goto lab_0x409ec3;
    }
  lab_0x4099cb:;
    int64_t v116 = v80 == v20; // 0x4099d2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x409900;
    } else {
        goto lab_0x4099de;
    }
  lab_0x4099de:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x4097b0
    if (v102 != 0) {
        goto lab_0x409900;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x4099fa
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x409fb5;
        } else {
            // 0x409a08
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
            goto lab_0x409a19;
        }
    }
  lab_0x409900:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x409917
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x409da0_2;
    } else {
        // 0x40993d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x409965
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
        goto lab_0x409a19;
    }
  lab_0x40ab7e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x40b144
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x409da0_2;
        } else {
            // 0x40b155
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40b16a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x40abb2;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x40aba1
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x409fb5;
        } else {
            // 0x40abaf
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x40abb2;
        }
    }
  lab_0x40b18f:
    // 0x40b18f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x409da0_2;
    } else {
        goto lab_0x40ab7e;
    }
  lab_0x409f3d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x409f3d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x409f41
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x409f45
    int64_t v123 = 0; // 0x409f4c
    int64_t v124 = v122; // 0x409f4c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x409f52
        int64_t v126 = v120; // 0x409f5a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x40aee1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x40aef9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40af0b
            int64_t v131 = v128; // 0x40af14
            int64_t v132 = v130; // 0x40af14
            int64_t v133; // 0x4097b0
            int64_t v134; // 0x40af26
            if (v130 < v129) {
                // 0x40af16
                if (v121 == v128) {
                    // break -> 0x409d30
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x409d1b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x409d30
                        goto lab_0x409d30;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x40aed8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x40aee1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x40af16
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x409d30
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x409d1b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x409d30
                            goto lab_0x409d30;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x40aed8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x409f64
            if (*(int32_t *)v135 != 5) {
                // 0x40a4dc
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x409f70
            int64_t v137 = v136; // 0x409f70
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x409f7d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x409d30:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x409d30
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x409d34
    int64_t v142; // 0x4097b0
    int64_t v143; // 0x4097b0
    int64_t v144; // 0x4097b0
    if (v140 == v141) {
        goto lab_0x40a3e0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x409d41
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x40af44
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40af4d
            if (v141 == v146) {
                goto lab_0x40a3fe;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x40af73
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40af7a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x40af93
                int64_t v152 = v151; // 0x40af9c
                int64_t v153 = v149; // 0x40af9c
                int64_t v154; // 0x4097b0
                int64_t v155; // 0x40afa7
                if (v151 < v150) {
                    // 0x40af9e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x409da0_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40afba
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x409da0_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x40af60
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x40af69
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40af9e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x409da0_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40afba
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x409da0_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x40af60
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x409d6c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x409d53
            if (*(int32_t *)v156 != 5) {
                // 0x40a4dc
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x409d60
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x40a3e0;
            } else {
                goto lab_0x409d6c;
            }
        }
    }
  lab_0x409bd0:
    // 0x409bd0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x409bdd
    int64_t v160 = 0; // 0x409be5
    if (v159 != -1) {
        // 0x409beb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40a4dc
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x409c0e
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x409c1c
        if (*(int32_t *)v162 != 5) {
            // 0x40a4dc
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x409c2f
        int64_t v164; // bp-8, 0x4097b0
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x4097b0
    uint64_t v165; // 0x409c46
    if (v46 > 0xfffffffffffffffd) {
        // 0x40a678
        v14 = v48;
        if (v47 == -1) {
            // 0x409ca4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x409da0_2;
    } else {
        // 0x409c50
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x409ca4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x40a380
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x409da0_2;
            } else {
                int64_t v167 = 2 * v47; // 0x40a386
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x409c72;
                } else {
                    goto lab_0x40a392;
                }
            }
        } else {
            // 0x409c62
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x409c72;
            } else {
                goto lab_0x40a392;
            }
        }
    }
  lab_0x409e70:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x40a699
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x409da0_2;
        } else {
            // 0x40a6b1
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x40a6c2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x409ea2;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x409e91
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x409fb5;
        } else {
            // 0x409e9f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x409ea2;
        }
    }
  lab_0x40a752:
    // 0x40a752
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x409da0_2;
    } else {
        goto lab_0x409e70;
    }
  lab_0x40a3e0:
    // 0x40a3e0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x40a3fe;
  lab_0x409fa8:
    // 0x409fa8
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x409bd0;
  lab_0x409fb5:
    // 0x409fb5
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x409fc8;
  lab_0x40a3fe:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x40a404
    v14 = v48;
    int64_t v170; // 0x4097b0
    int64_t v171; // 0x4097b0
    int64_t * v172; // 0x4097b0
    int64_t v173; // 0x4097b0
    int64_t v174; // bp-760, 0x4097b0
    uint64_t size5; // 0x40a408
    if (v169 == -1) {
        goto lab_0x409da0_2;
    } else {
        // 0x40a419
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x40a479;
        } else {
            // 0x40a425
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x409da0_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40a44d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x409da0_2;
                } else {
                    goto lab_0x40a479;
                }
            }
        }
    }
  lab_0x409d6c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x40a3fe;
    } else {
        // 0x409d75
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x40a3fe;
        } else {
            goto lab_0x409da0_2;
        }
    }
  lab_0x409c72:
    // 0x409c72
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x40a639
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x40a654
            if (v48 == v20 && v46 != 0) {
                // 0x40a662
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x409ca4
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x409c93
        v14 = v48;
        if (mem11 != NULL) {
            // 0x409ca4
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x409da0_2;
  lab_0x40a392:
    // 0x40a392
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x409da0_2;
    } else {
        goto lab_0x409c72;
    }
  lab_0x40a479:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x4097b0
    int64_t v181; // 0x4097b0
    int64_t v182; // 0x4097b0
    int64_t v183; // 0x4097b0
    int64_t v184; // 0x4097b0
    int64_t v185; // 0x4097b0
    int64_t v186; // 0x4097b0
    int64_t v187; // 0x4097b0
    int64_t v188; // 0x4097b0
    int64_t v189; // 0x4097b0
    int64_t v190; // 0x4097b0
    int64_t v191; // 0x4097b0
    int64_t v192; // 0x4097b0
    int64_t v193; // 0x4097b0
    float80_t v194; // 0x4097b0
    float80_t v195; // 0x4097b0
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x40aff2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x40b000
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
            // 0x40b12d
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
        goto lab_0x40a939;
    } else {
        // 0x40a481
        int64_t v198; // 0x4097b0
        float80_t v199; // 0x4097b0
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x40ac41
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40ac4e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40aaaa
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40a4af
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x40a4b8
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40a4dc
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40a4dc
                            abort();
                            // UNREACHABLE
                        }
                        // 0x40b026
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x40b026
                            v181 = v187 + 3;
                            goto lab_0x40b1a1;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x40b1a1;
                            } else {
                                goto lab_0x40b062;
                            }
                        }
                    } else {
                        // 0x40ad33
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x40a927;
                        } else {
                            int64_t v202 = v187 + 2; // 0x40ad41
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40b28a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x40ad88
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40ad9b
                                int64_t v207 = v176 & 0xffffffff; // 0x40ad9e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40adac
                                int64_t v209 = v187 + 1; // 0x40adc9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40adde
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40adeb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x40a939;
                        }
                    }
                } else {
                    // 0x40aad8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x40aad8
                        v180 = v187 + 1;
                        goto lab_0x40b087;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x40b087;
                        } else {
                            goto lab_0x40aaf8;
                        }
                    }
                }
            } else {
                // 0x40a910
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x40a927;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40ae5c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40ae6d
                    char v215 = *v213; // 0x40ae74
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x40aeb0
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40aebd
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x40ae85
                        v182 = v218;
                        int64_t v219; // 0x40ae77
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x40a939;
                }
            }
        } else {
            float80_t v220; // 0x4097b0
            if (v220 != 0.0L) {
                // 0x40a4dc
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40ab2b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40ab3a
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
                // 0x40ae13
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
            goto lab_0x40a939;
        }
    }
  lab_0x40a939:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40a93c
    int64_t v229 = v228; // 0x40a942
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x40a944
        int64_t v232 = v231 + v224; // 0x40a947
        int64_t v233 = v232 - v225; // 0x40a94e
        if ((v230 & 2) != 0) {
            // 0x40adf3
            v229 = v233;
            int64_t v234 = v224; // 0x40adf6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x40ae00
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x40ae00
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x40ac65
                int64_t v238 = v224; // 0x40ac6b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x40ac79
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x40ac70
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x40ac85
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x40ac98
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
                int64_t v243 = v224; // 0x40a971
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x40a991
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x40a988
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40a99a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x40a9a8
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
        // 0x40a4dc
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x40a9d8
    int64_t dest_mem5 = v48; // 0x40a9e5
    int64_t v250 = v248; // 0x40a9e5
    int64_t v251 = v47; // 0x40a9e5
    int64_t v252; // 0x4097b0
    if (v47 - v46 > v248) {
        goto lab_0x40aa60;
    } else {
        if (v249 < v46) {
            // 0x40ac32
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x409da0_2;
            } else {
                goto lab_0x40aa60;
            }
        } else {
            // 0x40a9f0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x40aa60;
            } else {
                if (v47 != 0) {
                    // 0x40afc8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x409da0_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x40afce
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40aa0e;
                        } else {
                            goto lab_0x40afda;
                        }
                    }
                } else {
                    // 0x40a9fe
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40aa0e;
                    } else {
                        goto lab_0x40afda;
                    }
                }
            }
        }
    }
  lab_0x40aa60:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x40aa71
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40aa8d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x409ea7;
  lab_0x40a927:
    // 0x40a927
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x40a939;
  lab_0x40b087:;
    char * v257 = nl_langinfo(0x10000); // 0x40b0ba
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40b0cb
    char v259 = *v257; // 0x40b0d2
    int64_t v260 = v176 & 0xffffffff; // 0x40b0d5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x40b0e3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x40b110
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40b11d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x40aaf8;
  lab_0x40aaf8:
    // 0x40aaf8
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
    goto lab_0x40a939;
  lab_0x40aa0e:
    // 0x40aa0e
    if (v48 == 0 || v48 == v20) {
        // 0x40acab
        int64_t size7; // 0x4097b0
        int64_t * mem12 = malloc((int32_t)size7); // 0x40acc2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x409da0_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40acce
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x40acf9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x40aa60;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40aa3d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x409da0_2;
        } else {
            // 0x40aa4b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x40aa60;
        }
    }
  lab_0x40afda:
    // 0x40afda
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x409da0_2;
    } else {
        goto lab_0x40aa0e;
    }
  lab_0x40b1a1:;
    int64_t v265 = v187 + 4; // 0x40b1a1
    char v266 = *nl_langinfo(0x10000); // 0x40b1ec
    int64_t v267 = v176 & 0xffffffff; // 0x40b1ef
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x40b1f6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40b21d
        int64_t v270 = v265 + 1; // 0x40b225
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
    goto lab_0x40b062;
  lab_0x40b062:
    // 0x40b062
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x40a939;
}
// Address range: 0x40b2d0 - 0x40b4e9
int64_t function_40b2d0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x40b333
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x40b2e8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x40b2f9
    g100 = v5;
    int64_t v6; // 0x40b2d0
    int64_t v7; // 0x40b2d0
    int64_t v8; // 0x40b2d0
    int64_t v9; // 0x40b2d0
    int64_t v10; // 0x40b2d0
    int64_t v11; // 0x40b2d0
    int64_t v12; // 0x40b2d0
    uint32_t v13; // 0x40b3f0
    int64_t * v14; // 0x40b420
    int64_t v15; // 0x40b428
    uint32_t v16; // 0x40b470
    uint32_t v17; // 0x40b440
    int64_t * v18; // 0x40b3d0
    int64_t v19; // 0x40b3d0
    int64_t * v20; // 0x40b3e0
    int64_t v21; // 0x40b3e0
    int64_t * v22; // 0x40b3b8
    int64_t v23; // 0x40b3b8
    int64_t * v24; // 0x40b3a0
    int64_t v25; // 0x40b3a0
    int64_t * v26; // 0x40b4c0
    uint32_t v27; // 0x40b380
    int64_t v28; // 0x40b4c0
    int64_t * v29; // 0x40b4b0
    int64_t v30; // 0x40b4b0
    uint32_t v31; // 0x40b360
    int64_t * v32; // 0x40b4d8
    int64_t v33; // 0x40b4d8
    int64_t v34; // 0x40b483
    uint32_t v35; // 0x40b340
    int64_t v36; // 0x40b457
    uint32_t v37; // 0x40b308
    int32_t * v38; // 0x40b3f0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x40b380
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x40b387
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x40b3d0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x40b393
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x40b326
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x40b360
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x40b367
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x40b3e0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x40b373
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x40b326
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x40b340
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x40b347
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x40b3b8
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x40b353
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x40b326
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
            // 0x40b308
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x40b313
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x40b3a0
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x40b31f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x40b326
            break;
        }
        case 11: {
            // 0x40b3f0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x40b3ff
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x40b4c0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x40b40c
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x40b326
            break;
        }
        case 12: {
            // 0x40b420
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x40b326
            break;
        }
        case 15: {
            // 0x40b470
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x40b477
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x40b4b0
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x40b483
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x40b326
            break;
        }
        case 16: {
            // 0x40b440
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40b44b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x40b4d8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x40b457
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x40b326
            break;
        }
        default: {
            // 0x40b333
            return 0xffffffff;
        }
    }
    // 0x40b326
    v3++;
    int64_t v39 = v4 + 32; // 0x40b331
    while (v3 < v2) {
        // 0x40b2f0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g100 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x40b380
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x40b387
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x40b3d0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x40b393
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x40b326
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x40b360
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x40b367
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x40b3e0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x40b373
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x40b326
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x40b340
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x40b347
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x40b3b8
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x40b353
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x40b326
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
                // 0x40b308
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x40b313
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x40b3a0
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x40b31f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x40b326
                break;
            }
            case 11: {
                // 0x40b3f0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x40b3ff
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x40b4c0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x40b40c
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x40b326
                break;
            }
            case 12: {
                // 0x40b420
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x40b326
                break;
            }
            case 15: {
                // 0x40b470
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x40b477
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x40b4b0
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x40b483
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x40b326
                break;
            }
            case 16: {
                // 0x40b440
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40b44b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x40b4d8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x40b457
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x40b326
                break;
            }
            default: {
                // 0x40b333
                return 0xffffffff;
            }
        }
        // 0x40b326
        v3++;
        v39 = v4 + 32;
    }
    // 0x40b333
    return 0;
}
// Address range: 0x40b4f0 - 0x40c1f9
int64_t function_40b4f0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x40b4f2
    int64_t v4 = v1 + 16; // 0x40b4f6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x40b529
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x40b53e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40b56b
    int32_t v8 = 0; // 0x40b570
    int64_t v9 = 0; // 0x40b570
    int64_t v10 = v3; // 0x40b570
    int64_t v11 = a1; // 0x40b570
    int64_t v12 = 0; // 0x40b570
    char v13; // 0x40b4f0
    int64_t v14; // 0x40b4f0
    int64_t v15; // 0x40b4f0
    int64_t v16; // 0x40b4f0
    int64_t v17; // 0x40b4f0
    int64_t v18; // 0x40b4f0
    int64_t v19; // 0x40b4f0
    int64_t v20; // 0x40b4f0
    int64_t v21; // 0x40b4f0
    int64_t v22; // 0x40b4f0
    int64_t v23; // 0x40b4f0
    int64_t v24; // 0x40b4f0
    int64_t v25; // 0x40b4f0
    int64_t v26; // 0x40b4f0
    int64_t v27; // 0x40b4f0
    int64_t v28; // 0x40b4f0
    int64_t v29; // 0x40b4f0
    int64_t v30; // 0x40b4f0
    int32_t v31; // 0x40b4f0
    int64_t v32; // 0x40b4f0
    int64_t v33; // 0x40b560
    int64_t v34; // 0x40b5b0
    int64_t * v35; // 0x40b5d3
    int64_t v36; // 0x40b636
    if (v7 != 0) {
        // 0x40b560
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x40b4f0
        int64_t v38 = 7; // 0x40b4f0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x40b4f0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x40b560:
            // 0x40b560
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x40b5a3
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x40b5b8
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x40b5f4
                int64_t v43 = v42; // 0x40b5f4
                int64_t v44 = v43; // 0x40b5fd
                int64_t v45 = v33; // 0x40b5fd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x40b990
                    char v47 = *(char *)v46; // 0x40b994
                    int64_t v48 = v46; // 0x40b99d
                    while (v47 < 58) {
                        // 0x40b990
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40b99f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x40c035
                        char v52 = *(char *)v51; // 0x40c035
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x40c039
                        int64_t v54 = v33; // 0x40c04d
                        int64_t v55 = v51; // 0x40c04d
                        char v56 = v52; // 0x40c04d
                        int64_t v57 = v53; // 0x40c04d
                        bool v58 = v52 < 58; // 0x40c04d
                        bool v59 = v52 < 58; // 0x40c04d
                        char v60 = v52; // 0x40c04d
                        int64_t v61 = v51; // 0x40c04d
                        int64_t v62; // 0x40c062
                        int64_t v63; // 0x40c035
                        char v64; // 0x40c035
                        int64_t v65; // 0x40c039
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x40bcb8_9;
                            }
                            // 0x40c033
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
                                // 0x40c04f
                                if (v64 >= 58) {
                                    goto lab_0x40bcb8_9;
                                }
                                // 0x40c033
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
                        int64_t v67 = v55; // 0x40c008
                        while (v58) {
                            // 0x40c00e
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
                                    goto lab_0x40bcb8_9;
                                }
                                // 0x40c033
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
                                    // 0x40c04f
                                    if (v64 >= 58) {
                                        goto lab_0x40bcb8_9;
                                    }
                                    // 0x40c033
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
                            // 0x40c004
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x40c10d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x40bcb8_9;
                        }
                        int64_t v68 = v54 + 2; // 0x40c11e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x40b4f0
                v36 = v45;
                char v70; // 0x40b4f0
                while (true) {
                    // 0x40b636
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x40b650
                                *v41 = *v41 | 2;
                                // break -> 0x40b630
                                break;
                            }
                            case 43: {
                                // 0x40b660
                                *v41 = *v41 | 4;
                                // break -> 0x40b630
                                break;
                            }
                            case 32: {
                                // 0x40b670
                                *v41 = *v41 | 8;
                                // break -> 0x40b630
                                break;
                            }
                            case 35: {
                                // 0x40b680
                                *v41 = *v41 | 16;
                                // break -> 0x40b630
                                break;
                            }
                            case 48: {
                                // 0x40b690
                                *v41 = *v41 | 32;
                                // break -> 0x40b630
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x40b698
                                    break;
                                }
                                // 0x40b626
                                *v41 = *v41 | 64;
                                // break -> 0x40b630
                                break;
                            }
                        }
                    } else {
                        // 0x40b63f
                        *v41 = *v41 | 1;
                    }
                    // 0x40b630
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x40b4f0
                int64_t * v72; // 0x40b5c1
                int64_t * v73; // 0x40b5ca
                if (v70 == 42) {
                    // 0x40b70d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x40b72d
                    int64_t v75 = v74; // 0x40b72d
                    int64_t v76 = v75 + 0xffffffd0; // 0x40b731
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x40b737
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40bb0d
                        char v80 = *(char *)v79; // 0x40bb11
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40bb0d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x40bb1d
                        v26 = v79;
                        int64_t v81 = v75; // 0x40bb21
                        int64_t v82 = v36; // 0x40bb21
                        int64_t v83 = 0; // 0x40bb21
                        if (v80 != 36) {
                            goto lab_0x40b73d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x40bb52
                            int64_t v89 = v85; // 0x40bb52
                            int64_t v90 = v87; // 0x40bb52
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x40bb57
                            int64_t v95 = v92 + 1; // 0x40bb5a
                            char v96 = *(char *)v95; // 0x40bb5a
                            int64_t v97 = v96; // 0x40bb5a
                            while (v94 < v91) {
                                // 0x40bb71
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x40bcb8_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40bb2b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x40bb34
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
                                    // 0x40bb71
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x40bcb8_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40bb2b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x40c1ab
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x40bcb8_9;
                            }
                            // 0x40c1b9
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40b74c;
                        }
                    } else {
                        goto lab_0x40b73d;
                    }
                } else {
                    // 0x40b69d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x40b4f0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x40bdbb
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x40bdc0
                        int64_t v102 = v71; // 0x40bdc9
                        char * v103 = v100; // 0x40bdc9
                        int64_t v104 = v36; // 0x40bdc9
                        int64_t v105 = v71; // 0x40bdc9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x40bdd3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x40bdd3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x40bdd3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x40bde2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x40be05
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x40b6a8;
                }
            } else {
                goto lab_0x40b568;
            }
        }
    }
  lab_0x40b572:
    // 0x40b572
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x40b594
    return 0;
  lab_0x40bcb8_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x40bcc3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x40bcd5
    if (v3 != v115) {
        // 0x40bce0
        free((int64_t *)v115);
    }
    // 0x40bce5
    *__errno_location() = 22;
    // 0x40b594
    return 0xffffffff;
  lab_0x40be90_5:;
    // 0x40be90
    int64_t v116; // 0x40b4f0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x40be95
    int64_t v119; // 0x40b4f0
    if (v4 == v117) {
        goto lab_0x40bea9_3;
    } else {
        // 0x40be97
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x40bea9_3;
    }
  lab_0x40bea9_3:;
    int64_t v120 = *v5; // 0x40bea9
    int32_t * v121; // 0x40beb9
    if (v3 == v120) {
        // 0x40beb9
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x40beb4
    free((int64_t *)v120);
    // 0x40beb9
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x40b568:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40b56b
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
        // break -> 0x40b572
        goto lab_0x40b572;
    }
    goto lab_0x40b560;
  lab_0x40b73d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x40b73d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x40bae3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x40bcb8_9;
        }
        // 0x40bafb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40b74c;
  lab_0x40b6a8:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40b6ab
    int64_t v147 = v339; // 0x40b6ab
    int64_t v145 = v338; // 0x40b6ab
    int64_t v143 = v337; // 0x40b6ab
    int64_t v186; // 0x40b4f0
    int64_t v190; // 0x40b4f0
    int64_t v189; // 0x40b4f0
    int64_t v188; // 0x40b4f0
    int64_t v187; // 0x40b4f0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x40b7b0;
    } else {
        goto lab_0x40b6b1;
    }
  lab_0x40b74c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40b74c
    int64_t v132 = v128; // 0x40b753
    int64_t v133 = v16; // 0x40b753
    int64_t v134 = v131; // 0x40b753
    int64_t v135; // 0x40b4f0
    int64_t v136; // 0x40b4f0
    int64_t v137; // 0x40b4f0
    int64_t v138; // 0x40b9ff
    if (v16 > v127) {
        goto lab_0x40b75c;
    } else {
        uint64_t v139 = 2 * v16; // 0x40b9f5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x40be90_5;
        }
        int64_t size = 32 * v138; // 0x40ba1e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x40bf7c
            if (mem == NULL) {
                goto lab_0x40bea9_3;
            }
            // 0x40bf9e
            v135 = (int64_t)mem;
            goto lab_0x40bfa9;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40ba3f
            int64_t v140 = *v6; // 0x40ba44
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x40be90_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40ba3f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x40bfa9;
            } else {
                goto lab_0x40ba7d;
            }
        }
    }
  lab_0x40b6b1:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x40b6b8
    int64_t v151 = v146; // 0x40b6b8
    int64_t v152 = v144; // 0x40b6b8
    uint64_t v153; // 0x40b4f0
    int64_t v154; // 0x40b4f0
    int64_t v155; // 0x40b6f7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x40b6fb
        int64_t v158; // 0x40b4f0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x40b860
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x40b6f3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x40b868
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x40b6f0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x40b6f3
                    break;
                }
            }
        } else {
            // 0x40b700
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x40b6f3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x40b868
    int64_t v162 = v161 % 256; // 0x40b874
    g101 = v162;
    int64_t v163 = 17; // 0x40b877
    int64_t v164 = v154; // 0x40b877
    int64_t v165 = v154; // 0x40b877
    switch ((char)v161) {
        case 0: {
            goto lab_0x40b8e1;
        }
        case 28: {
            goto lab_0x40bc32;
        }
        case 30: {
            // 0x40bc5e
            v163 = 14;
            v164 = 99;
            goto lab_0x40b889;
        }
        case 32: {
            goto lab_0x40bc32;
        }
        case 33: {
            goto lab_0x40bc32;
        }
        case 34: {
            goto lab_0x40bc32;
        }
        case 46: {
            // 0x40bc4f
            v163 = 16;
            v164 = 115;
            goto lab_0x40b889;
        }
        case 51: {
            goto lab_0x40bc6d;
        }
        case 60: {
            goto lab_0x40bc32;
        }
        case 62: {
            int32_t v166 = v153; // 0x40bb89
            int32_t v167 = v166 - 7; // 0x40bb89
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40bb8f
            v163 = v168;
            v164 = v154;
            goto lab_0x40b889;
        }
        case 63: {
            goto lab_0x40bbe0;
        }
        case 64: {
            goto lab_0x40bc32;
        }
        case 65: {
            goto lab_0x40bc32;
        }
        case 66: {
            goto lab_0x40bc32;
        }
        case 68: {
            goto lab_0x40bbe0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40bb9f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x40bba5
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40bbad
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40bbbb
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40bbcf
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x40b889;
        }
        case 74: {
            goto lab_0x40bc6d;
        }
        case 75: {
            goto lab_0x40b889;
        }
        case 78: {
            int32_t v171 = v153; // 0x40b880
            int32_t v172 = v171 - 7; // 0x40b880
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x40b886
            v163 = v173;
            v164 = v154;
            goto lab_0x40b889;
        }
        case 80: {
            goto lab_0x40bc6d;
        }
        case 83: {
            goto lab_0x40bc6d;
        }
        default: {
            goto lab_0x40bcb8_9;
        }
    }
  lab_0x40b75c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x40b773
        int64_t v178 = v176; // 0x40b4f0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x40b768
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x40b768
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x40b781
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40b78d
    int32_t v182 = *v181; // 0x40b78d
    if (v182 != 0) {
        // 0x40be0e
        if (v182 != 5) {
            goto lab_0x40bcb8_9;
        }
        unsigned char v183 = *(char *)v129; // 0x40be17
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x40b6a8;
    } else {
        // 0x40b797
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40b79d
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
            goto lab_0x40b6b1;
        } else {
            goto lab_0x40b7b0;
        }
    }
  lab_0x40b7b0:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x40b7b0
    char v197 = *v196; // 0x40b7b0
    int64_t * v198; // 0x40b5d8
    *v198 = v192;
    int64_t v199; // 0x40b4f0
    int64_t v200; // 0x40b4f0
    int64_t v201; // 0x40b4f0
    int64_t v202; // 0x40b4f0
    int64_t v203; // 0x40b4f0
    int64_t * v204; // 0x40b5e1
    int64_t * v205; // 0x40b5ea
    int64_t v206; // 0x40b7c9
    if (v197 != 42) {
        char v207 = *v196; // 0x40b9b0
        int64_t v208 = v193; // 0x40b9b9
        char * v209; // 0x40b4f0
        int64_t v210; // 0x40b4f0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x40b9c0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x40b9c4
            v208 = v212;
            while (v214 < 58) {
                // 0x40b9c0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40b9ce
            v209 = v213;
            v210 = v212;
        } else {
            // 0x40b9b0
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x40b9e1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x40b6b1;
    } else {
        // 0x40b7bf
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40b7df
        int64_t v219 = v218; // 0x40b7df
        int64_t v220 = v219 + 0xffffffd0; // 0x40b7e3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x40b7e9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x40c094
            char v224 = *(char *)v223; // 0x40c098
            v221 = v223;
            while (v224 < 58) {
                // 0x40c094
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x40c0a4
            v201 = v223;
            int64_t v225 = v219; // 0x40c0a8
            int64_t v226 = v206; // 0x40c0a8
            int64_t v227 = 0; // 0x40c0a8
            if (v224 != 36) {
                goto lab_0x40b7ef;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x40c0d9
                int64_t v233 = v229; // 0x40c0d9
                int64_t v234 = v231; // 0x40c0d9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x40c0de
                int64_t v239 = v236 + 1; // 0x40c0e5
                char v240 = *(char *)v239; // 0x40c0e9
                int64_t v241 = v240; // 0x40c0e9
                while (v238 < v235) {
                    // 0x40c0f7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x40bcb8_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x40c0b2
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x40c0bb
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
                        // 0x40c0f7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x40bcb8_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x40c0b2
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x40c1c7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x40bcb8_9;
                }
                // 0x40c1d5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x40b7fe;
            }
        } else {
            goto lab_0x40b7ef;
        }
    }
  lab_0x40b8e1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x40b8e6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x40b8ee
    *a2 = v245;
    int64_t v246; // 0x40b4f0
    int64_t v247; // 0x40b4f0
    int64_t dest_mem; // 0x40b4f0
    int64_t v248; // 0x40b4f0
    int64_t v249; // 0x40c1e3
    if (v246 > v245) {
        // 0x40b8fa
        goto lab_0x40b568;
    } else {
        if (v246 < 0) {
            // 0x40c1e3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40be90_5;
        }
        int64_t v250 = 2 * v246; // 0x40b916
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x40c1e3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40be90_5;
        }
        int64_t v251 = *v5; // 0x40b927
        int64_t size2 = 176 * v246; // 0x40b939
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x40ba89
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x40bfec
                v118 = v252;
                if (v4 == v252) {
                    // 0x40beb9
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x40be97
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x40bea9_3;
            }
            goto lab_0x40baa4;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x40b94b
            if (mem4 == NULL) {
                // 0x40c1e3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40be90_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x40b94b
            int64_t v254 = *v5; // 0x40b96d
            int64_t v255 = *a2; // 0x40b971
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x40baa4;
            } else {
                goto lab_0x40b97f;
            }
        }
    }
  lab_0x40bc32:
    // 0x40bc32
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x40bc47
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x40b889;
  lab_0x40bc6d:;
    uint32_t v335 = (int32_t)v153; // 0x40bc75
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40bc7b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40bc83
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x40bc91
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40bc9e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40b889;
  lab_0x40bbe0:;
    uint32_t v336 = (int32_t)v153; // 0x40bbe8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x40bbee
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40bbf6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x40bc04
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40bc11
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40b889;
  lab_0x40b889:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x40b4f0
    int64_t v260; // 0x40b4f0
    int64_t * v261; // 0x40b5ef
    if (v259 == -1) {
        // 0x40bd94
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x40bcb8_9;
        }
        // 0x40bdac
        v260 = v148;
    } else {
        // 0x40b893
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x40b898
    int64_t v264 = v258; // 0x40b89f
    int64_t v265 = v162; // 0x40b89f
    int64_t v266 = v263; // 0x40b89f
    int64_t v267; // 0x40b4f0
    int64_t v268; // 0x40b4f0
    int64_t v269; // 0x40b4f0
    int64_t v270; // 0x40b4f0
    int64_t v271; // 0x40b4f0
    if (v142 > v262) {
        goto lab_0x40b8a5;
    } else {
        uint64_t v272 = 2 * v142; // 0x40bd08
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x40bd12
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x40be90_5;
        }
        int64_t size3 = 32 * v273; // 0x40bd31
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x40bd44
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x40be29
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x40bea9_3;
            }
            goto lab_0x40be46;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x40bd51
            if (mem6 == NULL) {
                // 0x40c1e3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40be90_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x40bd51
            int64_t v276 = v274 & 0xffffffff; // 0x40bd56
            int64_t v277 = *v6; // 0x40bd81
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x40be46;
            } else {
                goto lab_0x40bd8b;
            }
        }
    }
  lab_0x40b8a5:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40b8bb
        int64_t v282 = v279; // 0x40b4f0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x40b8b0
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x40b8b0
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x40b8c9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x40b8d5
    int32_t v286 = *v285; // 0x40b8d5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40bcfa
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x40bcb8_9;
        }
    } else {
        // 0x40b8df
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x40b8e1;
  lab_0x40bfa9:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x40bfa9
    int64_t * v290; // 0x40b4f0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40ba7d;
  lab_0x40ba7d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40b75c;
  lab_0x40b7ef:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x40b7ef
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x40c06a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x40bcb8_9;
        }
        // 0x40c082
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x40b7fe;
  lab_0x40b7fe:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x40b7fe
    int64_t v300 = v296; // 0x40b805
    int64_t v301 = v191; // 0x40b805
    int64_t v302 = v299; // 0x40b805
    int64_t v303; // 0x40b4f0
    int64_t v304; // 0x40b4f0
    int64_t v305; // 0x40b4f0
    int64_t v306; // 0x40bee2
    if (v191 > v295) {
        goto lab_0x40b80e;
    } else {
        uint64_t v307 = 2 * v191; // 0x40bed8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x40be90_5;
        }
        int64_t size4 = 32 * v306; // 0x40befd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x40c12e
            if (mem7 == NULL) {
                goto lab_0x40bea9_3;
            }
            // 0x40c150
            v304 = (int64_t)mem7;
            goto lab_0x40c15b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x40bf1e
            int64_t v308 = *v6; // 0x40bf23
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x40be90_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x40bf1e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x40c15b;
            } else {
                goto lab_0x40bf5c;
            }
        }
    }
  lab_0x40baa4:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x40b4f0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40b97f;
  lab_0x40b97f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x40b568;
  lab_0x40be46:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40be5c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40bd8b;
  lab_0x40bd8b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x40b8a5;
  lab_0x40b80e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x40b823
        int64_t v324 = v322; // 0x40b4f0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x40b818
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x40b818
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x40b831
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x40b83e
    int32_t v328 = *v327; // 0x40b83e
    if (v328 != 0) {
        // 0x40bf65
        if (v328 != 5) {
            goto lab_0x40bcb8_9;
        }
        unsigned char v329 = *(char *)v297; // 0x40bf6e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x40b848
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x40b851
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x40b6b1;
  lab_0x40c15b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x40c15b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x40bf5c;
  lab_0x40bf5c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x40b80e;
}
// Address range: 0x40c200 - 0x40c25d
int64_t function_40c200(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c200
    return function_401748();
}
// Address range: 0x40c260 - 0x40c261
int64_t function_40c260(void) {
    // 0x40c260
    int64_t result; // 0x40c260
    return result;
}
// Address range: 0x40c270 - 0x40c288
int64_t function_40c270(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c270
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g33);
}
// Address range: 0x40c288 - 0x40c2a8
int64_t function_40c288(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g29; // 0x40c292
    while (*(int64_t *)v1 != -1) {
        // 0x40c293
        v1 -= 8;
    }
    // 0x40c2a4
    return result;
}
